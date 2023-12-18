/**
 * @file    fcr_regs.h
 * @brief   Registers, Bit Masks and Bit Positions for the FCR Peripheral Module.
 * @note    This file is @generated.
 * @ingroup fcr_registers
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

#ifndef LIBRARIES_CMSIS_DEVICE_MAXIM_MAX32570_INCLUDE_FCR_REGS_H_
#define LIBRARIES_CMSIS_DEVICE_MAXIM_MAX32570_INCLUDE_FCR_REGS_H_

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
 * @ingroup     fcr
 * @defgroup    fcr_registers FCR_Registers
 * @brief       Registers, Bit Masks and Bit Positions for the FCR Peripheral Module.
 * @details     Function Control Register.
 */

/**
 * @ingroup fcr_registers
 * Structure type to access the FCR Registers.
 */
typedef struct {
    __IO uint32_t fctrl0;               /**< <tt>\b 0x00:</tt> FCR FCTRL0 Register */
    __IO uint32_t fctrl1;               /**< <tt>\b 0x04:</tt> FCR FCTRL1 Register */
    __IO uint32_t fctrl2;               /**< <tt>\b 0x08:</tt> FCR FCTRL2 Register */
    __IO uint32_t fctrl3;               /**< <tt>\b 0x0C:</tt> FCR FCTRL3 Register */
    __IO uint32_t urv0bootaddr;         /**< <tt>\b 0x10:</tt> FCR URV0BOOTADDR Register */
    __IO uint32_t urv1bootaddr;         /**< <tt>\b 0x14:</tt> FCR URV1BOOTADDR Register */
    __R  uint32_t rsv_0x18;
    __IO uint32_t gp;                   /**< <tt>\b 0x1C:</tt> FCR GP Register */
    __IO uint32_t msrtrim;              /**< <tt>\b 0x20:</tt> FCR MSRTRIM Register */
    __IO uint32_t flvfilt;              /**< <tt>\b 0x24:</tt> FCR FLVFILT Register */
} mxc_fcr_regs_t;

/* Register offsets for module FCR */
/**
 * @ingroup    fcr_registers
 * @defgroup   FCR_Register_Offsets Register Offsets
 * @brief      FCR Peripheral Register Offsets from the FCR Base Peripheral Address.
 * @{
 */
#define MXC_R_FCR_FCTRL0                   ((uint32_t)0x00000000UL) /**< Offset from FCR Base Address: <tt> 0x0000</tt> */
#define MXC_R_FCR_FCTRL1                   ((uint32_t)0x00000004UL) /**< Offset from FCR Base Address: <tt> 0x0004</tt> */
#define MXC_R_FCR_FCTRL2                   ((uint32_t)0x00000008UL) /**< Offset from FCR Base Address: <tt> 0x0008</tt> */
#define MXC_R_FCR_FCTRL3                   ((uint32_t)0x0000000CUL) /**< Offset from FCR Base Address: <tt> 0x000C</tt> */
#define MXC_R_FCR_URV0BOOTADDR             ((uint32_t)0x00000010UL) /**< Offset from FCR Base Address: <tt> 0x0010</tt> */
#define MXC_R_FCR_URV1BOOTADDR             ((uint32_t)0x00000014UL) /**< Offset from FCR Base Address: <tt> 0x0014</tt> */
#define MXC_R_FCR_GP                       ((uint32_t)0x0000001CUL) /**< Offset from FCR Base Address: <tt> 0x001C</tt> */
#define MXC_R_FCR_MSRTRIM                  ((uint32_t)0x00000020UL) /**< Offset from FCR Base Address: <tt> 0x0020</tt> */
#define MXC_R_FCR_FLVFILT                  ((uint32_t)0x00000024UL) /**< Offset from FCR Base Address: <tt> 0x0024</tt> */
/**@} end of group fcr_registers */

/**
 * @ingroup  fcr_registers
 * @defgroup FCR_FCTRL0 FCR_FCTRL0
 * @brief    Register 0.
 * @{
 */
#define MXC_F_FCR_FCTRL0_USBCLKSEL_POS                 16 /**< FCTRL0_USBCLKSEL Position */
#define MXC_F_FCR_FCTRL0_USBCLKSEL                     ((uint32_t)(0x1UL << MXC_F_FCR_FCTRL0_USBCLKSEL_POS)) /**< FCTRL0_USBCLKSEL Mask */

#define MXC_F_FCR_FCTRL0_I2C0DGEN0_POS                 20 /**< FCTRL0_I2C0DGEN0 Position */
#define MXC_F_FCR_FCTRL0_I2C0DGEN0                     ((uint32_t)(0x1UL << MXC_F_FCR_FCTRL0_I2C0DGEN0_POS)) /**< FCTRL0_I2C0DGEN0 Mask */

#define MXC_F_FCR_FCTRL0_I2C0DGEN1_POS                 21 /**< FCTRL0_I2C0DGEN1 Position */
#define MXC_F_FCR_FCTRL0_I2C0DGEN1                     ((uint32_t)(0x1UL << MXC_F_FCR_FCTRL0_I2C0DGEN1_POS)) /**< FCTRL0_I2C0DGEN1 Mask */

#define MXC_F_FCR_FCTRL0_I2C1DGEN0_POS                 22 /**< FCTRL0_I2C1DGEN0 Position */
#define MXC_F_FCR_FCTRL0_I2C1DGEN0                     ((uint32_t)(0x1UL << MXC_F_FCR_FCTRL0_I2C1DGEN0_POS)) /**< FCTRL0_I2C1DGEN0 Mask */

#define MXC_F_FCR_FCTRL0_I2C1DGEN1_POS                 23 /**< FCTRL0_I2C1DGEN1 Position */
#define MXC_F_FCR_FCTRL0_I2C1DGEN1                     ((uint32_t)(0x1UL << MXC_F_FCR_FCTRL0_I2C1DGEN1_POS)) /**< FCTRL0_I2C1DGEN1 Mask */

#define MXC_F_FCR_FCTRL0_I2C2ADGEN0_POS                24 /**< FCTRL0_I2C2ADGEN0 Position */
#define MXC_F_FCR_FCTRL0_I2C2ADGEN0                    ((uint32_t)(0x1UL << MXC_F_FCR_FCTRL0_I2C2ADGEN0_POS)) /**< FCTRL0_I2C2ADGEN0 Mask */

#define MXC_F_FCR_FCTRL0_I2C2ADGEN1_POS                25 /**< FCTRL0_I2C2ADGEN1 Position */
#define MXC_F_FCR_FCTRL0_I2C2ADGEN1                    ((uint32_t)(0x1UL << MXC_F_FCR_FCTRL0_I2C2ADGEN1_POS)) /**< FCTRL0_I2C2ADGEN1 Mask */

#define MXC_F_FCR_FCTRL0_I2C2BDGEN0_POS                26 /**< FCTRL0_I2C2BDGEN0 Position */
#define MXC_F_FCR_FCTRL0_I2C2BDGEN0                    ((uint32_t)(0x1UL << MXC_F_FCR_FCTRL0_I2C2BDGEN0_POS)) /**< FCTRL0_I2C2BDGEN0 Mask */

#define MXC_F_FCR_FCTRL0_I2C2BDGEN1_POS                27 /**< FCTRL0_I2C2BDGEN1 Position */
#define MXC_F_FCR_FCTRL0_I2C2BDGEN1                    ((uint32_t)(0x1UL << MXC_F_FCR_FCTRL0_I2C2BDGEN1_POS)) /**< FCTRL0_I2C2BDGEN1 Mask */

#define MXC_F_FCR_FCTRL0_I2C2CDGEN0_POS                28 /**< FCTRL0_I2C2CDGEN0 Position */
#define MXC_F_FCR_FCTRL0_I2C2CDGEN0                    ((uint32_t)(0x1UL << MXC_F_FCR_FCTRL0_I2C2CDGEN0_POS)) /**< FCTRL0_I2C2CDGEN0 Mask */

#define MXC_F_FCR_FCTRL0_I2C2CDGEN1_POS                29 /**< FCTRL0_I2C2CDGEN1 Position */
#define MXC_F_FCR_FCTRL0_I2C2CDGEN1                    ((uint32_t)(0x1UL << MXC_F_FCR_FCTRL0_I2C2CDGEN1_POS)) /**< FCTRL0_I2C2CDGEN1 Mask */

/**@} end of group FCR_FCTRL0_Register */

/**
 * @ingroup  fcr_registers
 * @defgroup FCR_FCTRL1 FCR_FCTRL1
 * @brief    Register 1.
 * @{
 */
#define MXC_F_FCR_FCTRL1_AC_EN_POS                     0 /**< FCTRL1_AC_EN Position */
#define MXC_F_FCR_FCTRL1_AC_EN                         ((uint32_t)(0x1UL << MXC_F_FCR_FCTRL1_AC_EN_POS)) /**< FCTRL1_AC_EN Mask */

#define MXC_F_FCR_FCTRL1_AC_RUN_POS                    1 /**< FCTRL1_AC_RUN Position */
#define MXC_F_FCR_FCTRL1_AC_RUN                        ((uint32_t)(0x1UL << MXC_F_FCR_FCTRL1_AC_RUN_POS)) /**< FCTRL1_AC_RUN Mask */

#define MXC_F_FCR_FCTRL1_LOAD_TRIM_POS                 2 /**< FCTRL1_LOAD_TRIM Position */
#define MXC_F_FCR_FCTRL1_LOAD_TRIM                     ((uint32_t)(0x1UL << MXC_F_FCR_FCTRL1_LOAD_TRIM_POS)) /**< FCTRL1_LOAD_TRIM Mask */

#define MXC_F_FCR_FCTRL1_GAIN_INV_POS                  3 /**< FCTRL1_GAIN_INV Position */
#define MXC_F_FCR_FCTRL1_GAIN_INV                      ((uint32_t)(0x1UL << MXC_F_FCR_FCTRL1_GAIN_INV_POS)) /**< FCTRL1_GAIN_INV Mask */

#define MXC_F_FCR_FCTRL1_ATOMIC_POS                    4 /**< FCTRL1_ATOMIC Position */
#define MXC_F_FCR_FCTRL1_ATOMIC                        ((uint32_t)(0x1UL << MXC_F_FCR_FCTRL1_ATOMIC_POS)) /**< FCTRL1_ATOMIC Mask */

#define MXC_F_FCR_FCTRL1_MU_POS                        8 /**< FCTRL1_MU Position */
#define MXC_F_FCR_FCTRL1_MU                            ((uint32_t)(0xFFFUL << MXC_F_FCR_FCTRL1_MU_POS)) /**< FCTRL1_MU Mask */

#define MXC_F_FCR_FCTRL1_AC_TRIM_POS                   23 /**< FCTRL1_AC_TRIM Position */
#define MXC_F_FCR_FCTRL1_AC_TRIM                       ((uint32_t)(0x1FFUL << MXC_F_FCR_FCTRL1_AC_TRIM_POS)) /**< FCTRL1_AC_TRIM Mask */

/**@} end of group FCR_FCTRL1_Register */

/**
 * @ingroup  fcr_registers
 * @defgroup FCR_FCTRL2 FCR_FCTRL2
 * @brief    Register 2.
 * @{
 */
#define MXC_F_FCR_FCTRL2_NFC_FWD_EN_POS                0 /**< FCTRL2_NFC_FWD_EN Position */
#define MXC_F_FCR_FCTRL2_NFC_FWD_EN                    ((uint32_t)(0x1UL << MXC_F_FCR_FCTRL2_NFC_FWD_EN_POS)) /**< FCTRL2_NFC_FWD_EN Mask */

#define MXC_F_FCR_FCTRL2_NFC_CLK_EN_POS                1 /**< FCTRL2_NFC_CLK_EN Position */
#define MXC_F_FCR_FCTRL2_NFC_CLK_EN                    ((uint32_t)(0x1UL << MXC_F_FCR_FCTRL2_NFC_CLK_EN_POS)) /**< FCTRL2_NFC_CLK_EN Mask */

#define MXC_F_FCR_FCTRL2_NFC_FWD_TX_DATA_OVR_POS       2 /**< FCTRL2_NFC_FWD_TX_DATA_OVR Position */
#define MXC_F_FCR_FCTRL2_NFC_FWD_TX_DATA_OVR           ((uint32_t)(0x1UL << MXC_F_FCR_FCTRL2_NFC_FWD_TX_DATA_OVR_POS)) /**< FCTRL2_NFC_FWD_TX_DATA_OVR Mask */

#define MXC_F_FCR_FCTRL2_XO_EN_DGL_POS                 3 /**< FCTRL2_XO_EN_DGL Position */
#define MXC_F_FCR_FCTRL2_XO_EN_DGL                     ((uint32_t)(0x1UL << MXC_F_FCR_FCTRL2_XO_EN_DGL_POS)) /**< FCTRL2_XO_EN_DGL Mask */

#define MXC_F_FCR_FCTRL2_RX_BIAS_PD_POS                4 /**< FCTRL2_RX_BIAS_PD Position */
#define MXC_F_FCR_FCTRL2_RX_BIAS_PD                    ((uint32_t)(0x1UL << MXC_F_FCR_FCTRL2_RX_BIAS_PD_POS)) /**< FCTRL2_RX_BIAS_PD Mask */

#define MXC_F_FCR_FCTRL2_RX_BIAS_EN_POS                5 /**< FCTRL2_RX_BIAS_EN Position */
#define MXC_F_FCR_FCTRL2_RX_BIAS_EN                    ((uint32_t)(0x1UL << MXC_F_FCR_FCTRL2_RX_BIAS_EN_POS)) /**< FCTRL2_RX_BIAS_EN Mask */

#define MXC_F_FCR_FCTRL2_RX_TM_VBG_VABUS_POS           6 /**< FCTRL2_RX_TM_VBG_VABUS Position */
#define MXC_F_FCR_FCTRL2_RX_TM_VBG_VABUS               ((uint32_t)(0x1UL << MXC_F_FCR_FCTRL2_RX_TM_VBG_VABUS_POS)) /**< FCTRL2_RX_TM_VBG_VABUS Mask */

#define MXC_F_FCR_FCTRL2_RX_TM_BIAS_POS                7 /**< FCTRL2_RX_TM_BIAS Position */
#define MXC_F_FCR_FCTRL2_RX_TM_BIAS                    ((uint32_t)(0x1UL << MXC_F_FCR_FCTRL2_RX_TM_BIAS_POS)) /**< FCTRL2_RX_TM_BIAS Mask */

#define MXC_F_FCR_FCTRL2_NFC_FWD_DOUT_POS              8 /**< FCTRL2_NFC_FWD_DOUT Position */
#define MXC_F_FCR_FCTRL2_NFC_FWD_DOUT                  ((uint32_t)(0x1UL << MXC_F_FCR_FCTRL2_NFC_FWD_DOUT_POS)) /**< FCTRL2_NFC_FWD_DOUT Mask */

/**@} end of group FCR_FCTRL2_Register */

/**
 * @ingroup  fcr_registers
 * @defgroup FCR_FCTRL3 FCR_FCTRL3
 * @brief    Register 3.
 * @{
 */
#define MXC_F_FCR_FCTRL3_DONECNT_POS                   0 /**< FCTRL3_DONECNT Position */
#define MXC_F_FCR_FCTRL3_DONECNT                       ((uint32_t)(0xFFUL << MXC_F_FCR_FCTRL3_DONECNT_POS)) /**< FCTRL3_DONECNT Mask */

/**@} end of group FCR_FCTRL3_Register */

/**
 * @ingroup  fcr_registers
 * @defgroup FCR_URV0BOOTADDR FCR_URV0BOOTADDR
 * @brief    RISCV0 Bootup Address Register.
 * @{
 */
#define MXC_F_FCR_URV0BOOTADDR_BADDR_POS               0 /**< URV0BOOTADDR_BADDR Position */
#define MXC_F_FCR_URV0BOOTADDR_BADDR                   ((uint32_t)(0xFFFFFFFFUL << MXC_F_FCR_URV0BOOTADDR_BADDR_POS)) /**< URV0BOOTADDR_BADDR Mask */

/**@} end of group FCR_URV0BOOTADDR_Register */

/**
 * @ingroup  fcr_registers
 * @defgroup FCR_URV1BOOTADDR FCR_URV1BOOTADDR
 * @brief    RISCV1 Bootup Address Register.
 * @{
 */
#define MXC_F_FCR_URV1BOOTADDR_BADDR_POS               0 /**< URV1BOOTADDR_BADDR Position */
#define MXC_F_FCR_URV1BOOTADDR_BADDR                   ((uint32_t)(0xFFFFFFFFUL << MXC_F_FCR_URV1BOOTADDR_BADDR_POS)) /**< URV1BOOTADDR_BADDR Mask */

/**@} end of group FCR_URV1BOOTADDR_Register */

/**
 * @ingroup  fcr_registers
 * @defgroup FCR_GP FCR_GP
 * @brief    General Purpose Register.
 * @{
 */
#define MXC_F_FCR_GP_GP_POS                            0 /**< GP_GP Position */
#define MXC_F_FCR_GP_GP                                ((uint32_t)(0xFFFFFFFFUL << MXC_F_FCR_GP_GP_POS)) /**< GP_GP Mask */

/**@} end of group FCR_GP_Register */

/**
 * @ingroup  fcr_registers
 * @defgroup FCR_MSRTRIM FCR_MSRTRIM
 * @brief    MSR Trim Register.
 * @{
 */
#define MXC_F_FCR_MSRTRIM_R1_POS                       0 /**< MSRTRIM_R1 Position */
#define MXC_F_FCR_MSRTRIM_R1                           ((uint32_t)(0x3UL << MXC_F_FCR_MSRTRIM_R1_POS)) /**< MSRTRIM_R1 Mask */

#define MXC_F_FCR_MSRTRIM_R2_POS                       2 /**< MSRTRIM_R2 Position */
#define MXC_F_FCR_MSRTRIM_R2                           ((uint32_t)(0x7UL << MXC_F_FCR_MSRTRIM_R2_POS)) /**< MSRTRIM_R2 Mask */

/**@} end of group FCR_MSRTRIM_Register */

/**
 * @ingroup  fcr_registers
 * @defgroup FCR_FLVFILT FCR_FLVFILT
 * @brief    Flash Low Voltage Filter Control Register.
 * @{
 */
#define MXC_F_FCR_FLVFILT_NUM_POS                      0 /**< FLVFILT_NUM Position */
#define MXC_F_FCR_FLVFILT_NUM                          ((uint32_t)(0xFFUL << MXC_F_FCR_FLVFILT_NUM_POS)) /**< FLVFILT_NUM Mask */

#define MXC_F_FCR_FLVFILT_RATE_POS                     8 /**< FLVFILT_RATE Position */
#define MXC_F_FCR_FLVFILT_RATE                         ((uint32_t)(0xFFUL << MXC_F_FCR_FLVFILT_RATE_POS)) /**< FLVFILT_RATE Mask */

#define MXC_F_FCR_FLVFILT_DELAY_POS                    16 /**< FLVFILT_DELAY Position */
#define MXC_F_FCR_FLVFILT_DELAY                        ((uint32_t)(0xFFUL << MXC_F_FCR_FLVFILT_DELAY_POS)) /**< FLVFILT_DELAY Mask */

/**@} end of group FCR_FLVFILT_Register */

#ifdef __cplusplus
}
#endif

#endif // LIBRARIES_CMSIS_DEVICE_MAXIM_MAX32570_INCLUDE_FCR_REGS_H_
