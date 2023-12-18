/**
 * @file    sema_regs.h
 * @brief   Registers, Bit Masks and Bit Positions for the SEMA Peripheral Module.
 * @note    This file is @generated.
 * @ingroup sema_registers
 */

/******************************************************************************
 *
 * Copyright (C) 2022-2023 Maxim Integrated Products, Inc. All Rights Reserved.
 * (now owned by Analog Devices, Inc.),
 * Copyright (C) 2023 Analog Devices, Inc. All Rights Reserved. This software
 * is proprietary to Analog Devices, Inc. and its licensors.
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

#ifndef LIBRARIES_CMSIS_DEVICE_MAXIM_MAX32570_INCLUDE_SEMA_REGS_H_
#define LIBRARIES_CMSIS_DEVICE_MAXIM_MAX32570_INCLUDE_SEMA_REGS_H_

/* **** Includes **** */
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

#if defined (__ICCARM__)
  #pragma system_include
#endif

#if defined (__CC_ARM)
  #pragma anon_unions
#endif
/// @cond
/*
    If types are not defined elsewhere (CMSIS) define them here
*/
#ifndef __IO
#define __IO volatile
#endif
#ifndef __I
#define __I  volatile const
#endif
#ifndef __O
#define __O  volatile
#endif
#ifndef __R
#define __R  volatile const
#endif
/// @endcond

/* **** Definitions **** */

/**
 * @ingroup     sema
 * @defgroup    sema_registers SEMA_Registers
 * @brief       Registers, Bit Masks and Bit Positions for the SEMA Peripheral Module.
 * @details     The Semaphore peripheral allows multiple cores in a system to cooperate when accessing shred resources.
                                     The peripheral contains eight semaphores that can be atomically set and cleared. It is left to the discretion of the software
                                     architect to decide how and when the semaphores are used and how they are allocated. Existing hardware does not have to be
                                     
                                     modified for this type of cooperative sharing, and the use of semaphores is exclusively within the software domain.
 */

/**
 * @ingroup sema_registers
 * Structure type to access the SEMA Registers.
 */
typedef struct {
    __IO uint32_t semaphores[8];        /**< <tt>\b 0x00:</tt> SEMA SEMAPHORES Register */
    __R  uint32_t rsv_0x20_0x3f[8];
    __IO uint32_t irq0;                 /**< <tt>\b 0x40:</tt> SEMA IRQ0 Register */
    __IO uint32_t mail0;                /**< <tt>\b 0x44:</tt> SEMA MAIL0 Register */
    __IO uint32_t irq1;                 /**< <tt>\b 0x48:</tt> SEMA IRQ1 Register */
    __IO uint32_t mail1;                /**< <tt>\b 0x4C:</tt> SEMA MAIL1 Register */
    __IO uint32_t irq2;                 /**< <tt>\b 0x50:</tt> SEMA IRQ2 Register */
    __IO uint32_t mail2;                /**< <tt>\b 0x54:</tt> SEMA MAIL2 Register */
    __IO uint32_t irq3;                 /**< <tt>\b 0x58:</tt> SEMA IRQ3 Register */
    __IO uint32_t mail3;                /**< <tt>\b 0x5C:</tt> SEMA MAIL3 Register */
    __IO uint32_t irq4;                 /**< <tt>\b 0x60:</tt> SEMA IRQ4 Register */
    __IO uint32_t mail4;                /**< <tt>\b 0x64:</tt> SEMA MAIL4 Register */
    __IO uint32_t irq5;                 /**< <tt>\b 0x68:</tt> SEMA IRQ5 Register */
    __IO uint32_t mail5;                /**< <tt>\b 0x6C:</tt> SEMA MAIL5 Register */
    __R  uint32_t rsv_0x70_0xff[36];
    __IO uint32_t status;               /**< <tt>\b 0x100:</tt> SEMA STATUS Register */
} mxc_sema_regs_t;

/* Register offsets for module SEMA */
/**
 * @ingroup    sema_registers
 * @defgroup   SEMA_Register_Offsets Register Offsets
 * @brief      SEMA Peripheral Register Offsets from the SEMA Base Peripheral Address.
 * @{
 */
#define MXC_R_SEMA_SEMAPHORES              ((uint32_t)0x00000000UL) /**< Offset from SEMA Base Address: <tt> 0x0000</tt> */
#define MXC_R_SEMA_IRQ0                    ((uint32_t)0x00000040UL) /**< Offset from SEMA Base Address: <tt> 0x0040</tt> */
#define MXC_R_SEMA_MAIL0                   ((uint32_t)0x00000044UL) /**< Offset from SEMA Base Address: <tt> 0x0044</tt> */
#define MXC_R_SEMA_IRQ1                    ((uint32_t)0x00000048UL) /**< Offset from SEMA Base Address: <tt> 0x0048</tt> */
#define MXC_R_SEMA_MAIL1                   ((uint32_t)0x0000004CUL) /**< Offset from SEMA Base Address: <tt> 0x004C</tt> */
#define MXC_R_SEMA_IRQ2                    ((uint32_t)0x00000050UL) /**< Offset from SEMA Base Address: <tt> 0x0050</tt> */
#define MXC_R_SEMA_MAIL2                   ((uint32_t)0x00000054UL) /**< Offset from SEMA Base Address: <tt> 0x0054</tt> */
#define MXC_R_SEMA_IRQ3                    ((uint32_t)0x00000058UL) /**< Offset from SEMA Base Address: <tt> 0x0058</tt> */
#define MXC_R_SEMA_MAIL3                   ((uint32_t)0x0000005CUL) /**< Offset from SEMA Base Address: <tt> 0x005C</tt> */
#define MXC_R_SEMA_IRQ4                    ((uint32_t)0x00000060UL) /**< Offset from SEMA Base Address: <tt> 0x0060</tt> */
#define MXC_R_SEMA_MAIL4                   ((uint32_t)0x00000064UL) /**< Offset from SEMA Base Address: <tt> 0x0064</tt> */
#define MXC_R_SEMA_IRQ5                    ((uint32_t)0x00000068UL) /**< Offset from SEMA Base Address: <tt> 0x0068</tt> */
#define MXC_R_SEMA_MAIL5                   ((uint32_t)0x0000006CUL) /**< Offset from SEMA Base Address: <tt> 0x006C</tt> */
#define MXC_R_SEMA_STATUS                  ((uint32_t)0x00000100UL) /**< Offset from SEMA Base Address: <tt> 0x0100</tt> */
/**@} end of group sema_registers */

/**
 * @ingroup  sema_registers
 * @defgroup SEMA_SEMAPHORES SEMA_SEMAPHORES
 * @brief    Read to test and set, returns prior value. Write 0 to clear semaphore.
 * @{
 */
#define MXC_F_SEMA_SEMAPHORES_SEMA_POS                 0 /**< SEMAPHORES_SEMA Position */
#define MXC_F_SEMA_SEMAPHORES_SEMA                     ((uint32_t)(0x1UL << MXC_F_SEMA_SEMAPHORES_SEMA_POS)) /**< SEMAPHORES_SEMA Mask */

/**@} end of group SEMA_SEMAPHORES_Register */

/**
 * @ingroup  sema_registers
 * @defgroup SEMA_IRQ0 SEMA_IRQ0
 * @brief    Semaphore IRQ0 register.
 * @{
 */
#define MXC_F_SEMA_IRQ0_EN_POS                         0 /**< IRQ0_EN Position */
#define MXC_F_SEMA_IRQ0_EN                             ((uint32_t)(0x1UL << MXC_F_SEMA_IRQ0_EN_POS)) /**< IRQ0_EN Mask */

#define MXC_F_SEMA_IRQ0_CM4_IRQ_POS                    16 /**< IRQ0_CM4_IRQ Position */
#define MXC_F_SEMA_IRQ0_CM4_IRQ                        ((uint32_t)(0x1UL << MXC_F_SEMA_IRQ0_CM4_IRQ_POS)) /**< IRQ0_CM4_IRQ Mask */

/**@} end of group SEMA_IRQ0_Register */

/**
 * @ingroup  sema_registers
 * @defgroup SEMA_MAIL0 SEMA_MAIL0
 * @brief    Semaphore Mailbox 0 register.
 * @{
 */
#define MXC_F_SEMA_MAIL0_DATA_POS                      0 /**< MAIL0_DATA Position */
#define MXC_F_SEMA_MAIL0_DATA                          ((uint32_t)(0xFFFFFFFFUL << MXC_F_SEMA_MAIL0_DATA_POS)) /**< MAIL0_DATA Mask */

/**@} end of group SEMA_MAIL0_Register */

/**
 * @ingroup  sema_registers
 * @defgroup SEMA_IRQ1 SEMA_IRQ1
 * @brief    Semaphore IRQ1 register.
 * @{
 */
#define MXC_F_SEMA_IRQ1_EN_POS                         0 /**< IRQ1_EN Position */
#define MXC_F_SEMA_IRQ1_EN                             ((uint32_t)(0x1UL << MXC_F_SEMA_IRQ1_EN_POS)) /**< IRQ1_EN Mask */

#define MXC_F_SEMA_IRQ1_RV32_IRQ_POS                   16 /**< IRQ1_RV32_IRQ Position */
#define MXC_F_SEMA_IRQ1_RV32_IRQ                       ((uint32_t)(0x1UL << MXC_F_SEMA_IRQ1_RV32_IRQ_POS)) /**< IRQ1_RV32_IRQ Mask */

/**@} end of group SEMA_IRQ1_Register */

/**
 * @ingroup  sema_registers
 * @defgroup SEMA_MAIL1 SEMA_MAIL1
 * @brief    Semaphore Mailbox 1 register.
 * @{
 */
#define MXC_F_SEMA_MAIL1_DATA_POS                      0 /**< MAIL1_DATA Position */
#define MXC_F_SEMA_MAIL1_DATA                          ((uint32_t)(0xFFFFFFFFUL << MXC_F_SEMA_MAIL1_DATA_POS)) /**< MAIL1_DATA Mask */

/**@} end of group SEMA_MAIL1_Register */

/**
 * @ingroup  sema_registers
 * @defgroup SEMA_IRQ2 SEMA_IRQ2
 * @brief    Semaphore IRQ2 register.
 * @{
 */
#define MXC_F_SEMA_IRQ2_EN_POS                         0 /**< IRQ2_EN Position */
#define MXC_F_SEMA_IRQ2_EN                             ((uint32_t)(0x1UL << MXC_F_SEMA_IRQ2_EN_POS)) /**< IRQ2_EN Mask */

#define MXC_F_SEMA_IRQ2_RV32_IRQ_POS                   16 /**< IRQ2_RV32_IRQ Position */
#define MXC_F_SEMA_IRQ2_RV32_IRQ                       ((uint32_t)(0x1UL << MXC_F_SEMA_IRQ2_RV32_IRQ_POS)) /**< IRQ2_RV32_IRQ Mask */

/**@} end of group SEMA_IRQ2_Register */

/**
 * @ingroup  sema_registers
 * @defgroup SEMA_MAIL2 SEMA_MAIL2
 * @brief    Semaphore Mailbox 2 register.
 * @{
 */
#define MXC_F_SEMA_MAIL2_DATA_POS                      0 /**< MAIL2_DATA Position */
#define MXC_F_SEMA_MAIL2_DATA                          ((uint32_t)(0xFFFFFFFFUL << MXC_F_SEMA_MAIL2_DATA_POS)) /**< MAIL2_DATA Mask */

/**@} end of group SEMA_MAIL2_Register */

/**
 * @ingroup  sema_registers
 * @defgroup SEMA_IRQ3 SEMA_IRQ3
 * @brief    Semaphore IRQ3 register.
 * @{
 */
#define MXC_F_SEMA_IRQ3_EN_POS                         0 /**< IRQ3_EN Position */
#define MXC_F_SEMA_IRQ3_EN                             ((uint32_t)(0x1UL << MXC_F_SEMA_IRQ3_EN_POS)) /**< IRQ3_EN Mask */

#define MXC_F_SEMA_IRQ3_RV32_IRQ_POS                   16 /**< IRQ3_RV32_IRQ Position */
#define MXC_F_SEMA_IRQ3_RV32_IRQ                       ((uint32_t)(0x1UL << MXC_F_SEMA_IRQ3_RV32_IRQ_POS)) /**< IRQ3_RV32_IRQ Mask */

/**@} end of group SEMA_IRQ3_Register */

/**
 * @ingroup  sema_registers
 * @defgroup SEMA_MAIL3 SEMA_MAIL3
 * @brief    Semaphore Mailbox 3 register.
 * @{
 */
#define MXC_F_SEMA_MAIL3_DATA_POS                      0 /**< MAIL3_DATA Position */
#define MXC_F_SEMA_MAIL3_DATA                          ((uint32_t)(0xFFFFFFFFUL << MXC_F_SEMA_MAIL3_DATA_POS)) /**< MAIL3_DATA Mask */

/**@} end of group SEMA_MAIL3_Register */

/**
 * @ingroup  sema_registers
 * @defgroup SEMA_IRQ4 SEMA_IRQ4
 * @brief    Semaphore IRQ4 register.
 * @{
 */
#define MXC_F_SEMA_IRQ4_EN_POS                         0 /**< IRQ4_EN Position */
#define MXC_F_SEMA_IRQ4_EN                             ((uint32_t)(0x1UL << MXC_F_SEMA_IRQ4_EN_POS)) /**< IRQ4_EN Mask */

#define MXC_F_SEMA_IRQ4_RV32_IRQ_POS                   16 /**< IRQ4_RV32_IRQ Position */
#define MXC_F_SEMA_IRQ4_RV32_IRQ                       ((uint32_t)(0x1UL << MXC_F_SEMA_IRQ4_RV32_IRQ_POS)) /**< IRQ4_RV32_IRQ Mask */

/**@} end of group SEMA_IRQ4_Register */

/**
 * @ingroup  sema_registers
 * @defgroup SEMA_MAIL4 SEMA_MAIL4
 * @brief    Semaphore Mailbox 4 register.
 * @{
 */
#define MXC_F_SEMA_MAIL4_DATA_POS                      0 /**< MAIL4_DATA Position */
#define MXC_F_SEMA_MAIL4_DATA                          ((uint32_t)(0xFFFFFFFFUL << MXC_F_SEMA_MAIL4_DATA_POS)) /**< MAIL4_DATA Mask */

/**@} end of group SEMA_MAIL4_Register */

/**
 * @ingroup  sema_registers
 * @defgroup SEMA_IRQ5 SEMA_IRQ5
 * @brief    Semaphore IRQ5 register.
 * @{
 */
#define MXC_F_SEMA_IRQ5_EN_POS                         0 /**< IRQ5_EN Position */
#define MXC_F_SEMA_IRQ5_EN                             ((uint32_t)(0x1UL << MXC_F_SEMA_IRQ5_EN_POS)) /**< IRQ5_EN Mask */

#define MXC_F_SEMA_IRQ5_RV32_IRQ_POS                   16 /**< IRQ5_RV32_IRQ Position */
#define MXC_F_SEMA_IRQ5_RV32_IRQ                       ((uint32_t)(0x1UL << MXC_F_SEMA_IRQ5_RV32_IRQ_POS)) /**< IRQ5_RV32_IRQ Mask */

/**@} end of group SEMA_IRQ5_Register */

/**
 * @ingroup  sema_registers
 * @defgroup SEMA_MAIL5 SEMA_MAIL5
 * @brief    Semaphore Mailbox 5 register.
 * @{
 */
#define MXC_F_SEMA_MAIL5_DATA_POS                      0 /**< MAIL5_DATA Position */
#define MXC_F_SEMA_MAIL5_DATA                          ((uint32_t)(0xFFFFFFFFUL << MXC_F_SEMA_MAIL5_DATA_POS)) /**< MAIL5_DATA Mask */

/**@} end of group SEMA_MAIL5_Register */

/**
 * @ingroup  sema_registers
 * @defgroup SEMA_STATUS SEMA_STATUS
 * @brief    Semaphore status bits. 0 indicates the semaphore is free, 1 indicates taken.
 * @{
 */
#define MXC_F_SEMA_STATUS_STATUS0_POS                  0 /**< STATUS_STATUS0 Position */
#define MXC_F_SEMA_STATUS_STATUS0                      ((uint32_t)(0x1UL << MXC_F_SEMA_STATUS_STATUS0_POS)) /**< STATUS_STATUS0 Mask */

#define MXC_F_SEMA_STATUS_STATUS1_POS                  1 /**< STATUS_STATUS1 Position */
#define MXC_F_SEMA_STATUS_STATUS1                      ((uint32_t)(0x1UL << MXC_F_SEMA_STATUS_STATUS1_POS)) /**< STATUS_STATUS1 Mask */

#define MXC_F_SEMA_STATUS_STATUS2_POS                  2 /**< STATUS_STATUS2 Position */
#define MXC_F_SEMA_STATUS_STATUS2                      ((uint32_t)(0x1UL << MXC_F_SEMA_STATUS_STATUS2_POS)) /**< STATUS_STATUS2 Mask */

#define MXC_F_SEMA_STATUS_STATUS3_POS                  3 /**< STATUS_STATUS3 Position */
#define MXC_F_SEMA_STATUS_STATUS3                      ((uint32_t)(0x1UL << MXC_F_SEMA_STATUS_STATUS3_POS)) /**< STATUS_STATUS3 Mask */

#define MXC_F_SEMA_STATUS_STATUS4_POS                  4 /**< STATUS_STATUS4 Position */
#define MXC_F_SEMA_STATUS_STATUS4                      ((uint32_t)(0x1UL << MXC_F_SEMA_STATUS_STATUS4_POS)) /**< STATUS_STATUS4 Mask */

#define MXC_F_SEMA_STATUS_STATUS5_POS                  5 /**< STATUS_STATUS5 Position */
#define MXC_F_SEMA_STATUS_STATUS5                      ((uint32_t)(0x1UL << MXC_F_SEMA_STATUS_STATUS5_POS)) /**< STATUS_STATUS5 Mask */

#define MXC_F_SEMA_STATUS_STATUS6_POS                  6 /**< STATUS_STATUS6 Position */
#define MXC_F_SEMA_STATUS_STATUS6                      ((uint32_t)(0x1UL << MXC_F_SEMA_STATUS_STATUS6_POS)) /**< STATUS_STATUS6 Mask */

#define MXC_F_SEMA_STATUS_STATUS7_POS                  7 /**< STATUS_STATUS7 Position */
#define MXC_F_SEMA_STATUS_STATUS7                      ((uint32_t)(0x1UL << MXC_F_SEMA_STATUS_STATUS7_POS)) /**< STATUS_STATUS7 Mask */

/**@} end of group SEMA_STATUS_Register */

#ifdef __cplusplus
}
#endif

#endif // LIBRARIES_CMSIS_DEVICE_MAXIM_MAX32570_INCLUDE_SEMA_REGS_H_
