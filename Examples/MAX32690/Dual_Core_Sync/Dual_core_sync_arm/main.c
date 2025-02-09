/******************************************************************************
 *
 * Copyright (C) 2024 Analog Devices, Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 ******************************************************************************/

/**
 * @file    main.c
 * @brief   A basic getting started program for the RISCV, run from the ARM
 * core.
 * @details Dual_core_sync_arm runs on the ARM core to load the RISCV code
 * space, setup the RISCV debugger pins, and start the RISCV core.
 */

/***** Includes *****/
#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include "mxc_delay.h"
#include "mxc_device.h"
#include "mxc_sys.h"
#include "sema.h"

/***** Definitions *****/
#define DUAL_CORE_SYNC (1)

#define NDX_ARM (0)
#define NDX_RISCV (1)

#define MAILBOX_OVERHEAD (2 * sizeof(uint16_t))
#define MAILBOX_PAYLOAD_LEN (MAILBOX_SIZE - MAILBOX_OVERHEAD)
typedef struct {
    uint16_t readLocation;
    uint16_t writeLocation;
#if (MAILBOX_SIZE == 0)
    uint8_t payload[1];
#else
    uint8_t payload[MAILBOX_PAYLOAD_LEN];
#endif
} mxcSemaBox_t;

/***** Globals *****/
extern mxcSemaBox_t *mxcSemaBox0; // ARM writes, RISCV reads,
extern mxcSemaBox_t *mxcSemaBox1; // ARM reads,  RISCV writes

/***** Functions *****/

// *****************************************************************************
int main(void)
{
#if DUAL_CORE_SYNC
    printf("\n\n\n-----------------------------------\n");
    printf("ARM   : Start.\n");

    MXC_SEMA_Init();

    int ret = MXC_SEMA_CheckSema(NDX_ARM);
    printf("ARM   : After init, CheckSema(%d) returned %s.\n", NDX_ARM,
           ret == E_BUSY ? "BUSY" : "NOT BUSY");

    if ((MXC_SEMA_GetSema(NDX_ARM)) == E_NO_ERROR) {
        printf("ARM   : GetSema returned NOT BUSY with previous semaphore value %d.\n",
               MXC_SEMA->semaphores[NDX_ARM]);
    } else {
        printf("ARM   : GetSema returned - BUSY - with previous semaphore value %d.\n",
               MXC_SEMA->semaphores[NDX_ARM]);
    }

    printf("ARM   : Wait 2 secs then start the RISC-V core.\n");
#endif
    MXC_Delay(MXC_DELAY_SEC(2));

    /* Enable RISCV debugger GPIO */
    MXC_GPIO_Config(&gpio_cfg_rv_jtag);

    /* Start the RISCV core */
    MXC_SYS_RISCVRun();

#if DUAL_CORE_SYNC
    /* Wait the RISC-V core to start */
    ret = E_BUSY;
    while (E_BUSY == ret) {
        ret = MXC_SEMA_CheckSema(NDX_ARM);
    }
    MXC_SEMA_GetSema(NDX_ARM);

    /* Init code here. */
    printf("ARM   : Do initialization works here.\n");
    MXC_SEMA_InitBoxes();

    /* Signal RISC-V core to run */
    printf("ARM   : Signal RISC-V.\n");
    MXC_SEMA_FreeSema(NDX_RISCV);

    uint32_t cnt;
#endif
    /* Enter LPM */
    while (1) {
#if DUAL_CORE_SYNC
        /* Wait */
        ret = MXC_SEMA_CheckSema(NDX_ARM);
        if (E_BUSY != ret) {
            MXC_SEMA_GetSema(NDX_ARM);

            /* Do the job. */
            // Retrieve the data from the mailbox1
            cnt = mxcSemaBox1->payload[0] << (8 * 0);
            cnt += mxcSemaBox1->payload[1] << (8 * 1);
            cnt += mxcSemaBox1->payload[2] << (8 * 2);
            cnt += mxcSemaBox1->payload[3] << (8 * 3);

            printf("ARM   : cnt=%d\n", cnt++);

            mxcSemaBox0->payload[0] = (cnt >> 8 * 0) & 0xFF;
            mxcSemaBox0->payload[1] = (cnt >> 8 * 1) & 0xFF;
            mxcSemaBox0->payload[2] = (cnt >> 8 * 2) & 0xFF;
            mxcSemaBox0->payload[3] = (cnt >> 8 * 3) & 0xFF;

            /* Do other jobs here. */
            MXC_Delay(MXC_DELAY_SEC(1));

            /* Signal */
            MXC_SEMA_FreeSema(NDX_RISCV);
        }
#endif
    }
}
