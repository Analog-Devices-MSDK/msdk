/**
 * @file    gcr_regs.h
 * @brief   Registers, Bit Masks and Bit Positions for the GCR Peripheral Module.
 * @note    This file is @generated.
 * @ingroup gcr_registers
 */

/******************************************************************************
 * Copyright (C) 2023 Maxim Integrated Products, Inc., All rights Reserved.
 * 
 * This software is protected by copyright laws of the United States and
 * of foreign countries. This material may also be protected by patent laws
 * and technology transfer regulations of the United States and of foreign
 * countries. This software is furnished under a license agreement and/or a
 * nondisclosure agreement and may only be used or reproduced in accordance
 * with the terms of those agreements. Dissemination of this information to
 * any party or parties not specified in the license agreement and/or
 * nondisclosure agreement is expressly prohibited.
 *
 * The above copyright notice and this permission notice shall be included
 * in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
 * OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
 * IN NO EVENT SHALL MAXIM INTEGRATED BE LIABLE FOR ANY CLAIM, DAMAGES
 * OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE,
 * ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
 * OTHER DEALINGS IN THE SOFTWARE.
 *
 * Except as contained in this notice, the name of Maxim Integrated
 * Products, Inc. shall not be used except as stated in the Maxim Integrated
 * Products, Inc. Branding Policy.
 *
 * The mere transfer of this software does not imply any licenses
 * of trade secrets, proprietary technology, copyrights, patents,
 * trademarks, maskwork rights, or any other form of intellectual
 * property whatsoever. Maxim Integrated Products, Inc. retains all
 * ownership rights.
 *
 ******************************************************************************/

#ifndef LIBRARIES_CMSIS_DEVICE_MAXIM_MAX32570_INCLUDE_GCR_REGS_H_
#define LIBRARIES_CMSIS_DEVICE_MAXIM_MAX32570_INCLUDE_GCR_REGS_H_

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
 * @ingroup     gcr
 * @defgroup    gcr_registers GCR_Registers
 * @brief       Registers, Bit Masks and Bit Positions for the GCR Peripheral Module.
 * @details     Global Control Registers.
 */

/**
 * @ingroup gcr_registers
 * Structure type to access the GCR Registers.
 */
typedef struct {
    __IO uint32_t sysctrl;              /**< <tt>\b 0x00:</tt> GCR SYSCTRL Register */
    __IO uint32_t rst0;                 /**< <tt>\b 0x04:</tt> GCR RST0 Register */
    __IO uint32_t clkctrl;              /**< <tt>\b 0x08:</tt> GCR CLKCTRL Register */
    __IO uint32_t pm;                   /**< <tt>\b 0x0C:</tt> GCR PM Register */
    __R  uint32_t rsv_0x10_0x17[2];
    __IO uint32_t pclkdiv;              /**< <tt>\b 0x18:</tt> GCR PCLKDIV Register */
    __R  uint32_t rsv_0x1c_0x23[2];
    __IO uint32_t pclkdis0;             /**< <tt>\b 0x24:</tt> GCR PCLKDIS0 Register */
    __IO uint32_t memctrl;              /**< <tt>\b 0x28:</tt> GCR MEMCTRL Register */
    __IO uint32_t memz;                 /**< <tt>\b 0x2C:</tt> GCR MEMZ Register */
    __R  uint32_t rsv_0x30;
    __IO uint32_t scclkctrl;            /**< <tt>\b 0x34:</tt> GCR SCCLKCTRL Register */
    __R  uint32_t rsv_0x38_0x3f[2];
    __IO uint32_t sysst;                /**< <tt>\b 0x40:</tt> GCR SYSST Register */
    __IO uint32_t rst1;                 /**< <tt>\b 0x44:</tt> GCR RST1 Register */
    __IO uint32_t pclkdis1;             /**< <tt>\b 0x48:</tt> GCR PCLKDIS1 Register */
    __IO uint32_t eventen;              /**< <tt>\b 0x4C:</tt> GCR EVENTEN Register */
    __I  uint32_t revision;             /**< <tt>\b 0x50:</tt> GCR REVISION Register */
    __IO uint32_t sysinten;             /**< <tt>\b 0x54:</tt> GCR SYSINTEN Register */
    __IO uint32_t ipocnt;               /**< <tt>\b 0x58:</tt> GCR IPOCNT Register */
    __R  uint32_t rsv_0x5c_0x63[2];
    __IO uint32_t eccerr;               /**< <tt>\b 0x64:</tt> GCR ECCERR Register */
    __IO uint32_t eccced;               /**< <tt>\b 0x68:</tt> GCR ECCCED Register */
    __IO uint32_t eccinten;             /**< <tt>\b 0x6C:</tt> GCR ECCINTEN Register */
    __IO uint32_t eccaddr;              /**< <tt>\b 0x70:</tt> GCR ECCADDR Register */
    __IO uint32_t nfcldoctrl;           /**< <tt>\b 0x74:</tt> GCR NFCLDOCTRL Register */
    __IO uint32_t nfcldodly;            /**< <tt>\b 0x78:</tt> GCR NFCLDODLY Register */
    __R  uint32_t rsv_0x7c;
    __IO uint32_t flvrst;               /**< <tt>\b 0x80:</tt> GCR FLVRST Register */
    __IO uint32_t flvclkctrl;           /**< <tt>\b 0x84:</tt> GCR FLVCLKCTRL Register */
    __IO uint32_t flvstat;              /**< <tt>\b 0x88:</tt> GCR FLVSTAT Register */
} mxc_gcr_regs_t;

/* Register offsets for module GCR */
/**
 * @ingroup    gcr_registers
 * @defgroup   GCR_Register_Offsets Register Offsets
 * @brief      GCR Peripheral Register Offsets from the GCR Base Peripheral Address.
 * @{
 */
#define MXC_R_GCR_SYSCTRL                  ((uint32_t)0x00000000UL) /**< Offset from GCR Base Address: <tt> 0x0000</tt> */
#define MXC_R_GCR_RST0                     ((uint32_t)0x00000004UL) /**< Offset from GCR Base Address: <tt> 0x0004</tt> */
#define MXC_R_GCR_CLKCTRL                  ((uint32_t)0x00000008UL) /**< Offset from GCR Base Address: <tt> 0x0008</tt> */
#define MXC_R_GCR_PM                       ((uint32_t)0x0000000CUL) /**< Offset from GCR Base Address: <tt> 0x000C</tt> */
#define MXC_R_GCR_PCLKDIV                  ((uint32_t)0x00000018UL) /**< Offset from GCR Base Address: <tt> 0x0018</tt> */
#define MXC_R_GCR_PCLKDIS0                 ((uint32_t)0x00000024UL) /**< Offset from GCR Base Address: <tt> 0x0024</tt> */
#define MXC_R_GCR_MEMCTRL                  ((uint32_t)0x00000028UL) /**< Offset from GCR Base Address: <tt> 0x0028</tt> */
#define MXC_R_GCR_MEMZ                     ((uint32_t)0x0000002CUL) /**< Offset from GCR Base Address: <tt> 0x002C</tt> */
#define MXC_R_GCR_SCCLKCTRL                ((uint32_t)0x00000034UL) /**< Offset from GCR Base Address: <tt> 0x0034</tt> */
#define MXC_R_GCR_SYSST                    ((uint32_t)0x00000040UL) /**< Offset from GCR Base Address: <tt> 0x0040</tt> */
#define MXC_R_GCR_RST1                     ((uint32_t)0x00000044UL) /**< Offset from GCR Base Address: <tt> 0x0044</tt> */
#define MXC_R_GCR_PCLKDIS1                 ((uint32_t)0x00000048UL) /**< Offset from GCR Base Address: <tt> 0x0048</tt> */
#define MXC_R_GCR_EVENTEN                  ((uint32_t)0x0000004CUL) /**< Offset from GCR Base Address: <tt> 0x004C</tt> */
#define MXC_R_GCR_REVISION                 ((uint32_t)0x00000050UL) /**< Offset from GCR Base Address: <tt> 0x0050</tt> */
#define MXC_R_GCR_SYSINTEN                 ((uint32_t)0x00000054UL) /**< Offset from GCR Base Address: <tt> 0x0054</tt> */
#define MXC_R_GCR_IPOCNT                   ((uint32_t)0x00000058UL) /**< Offset from GCR Base Address: <tt> 0x0058</tt> */
#define MXC_R_GCR_ECCERR                   ((uint32_t)0x00000064UL) /**< Offset from GCR Base Address: <tt> 0x0064</tt> */
#define MXC_R_GCR_ECCCED                   ((uint32_t)0x00000068UL) /**< Offset from GCR Base Address: <tt> 0x0068</tt> */
#define MXC_R_GCR_ECCINTEN                 ((uint32_t)0x0000006CUL) /**< Offset from GCR Base Address: <tt> 0x006C</tt> */
#define MXC_R_GCR_ECCADDR                  ((uint32_t)0x00000070UL) /**< Offset from GCR Base Address: <tt> 0x0070</tt> */
#define MXC_R_GCR_NFCLDOCTRL               ((uint32_t)0x00000074UL) /**< Offset from GCR Base Address: <tt> 0x0074</tt> */
#define MXC_R_GCR_NFCLDODLY                ((uint32_t)0x00000078UL) /**< Offset from GCR Base Address: <tt> 0x0078</tt> */
#define MXC_R_GCR_FLVRST                   ((uint32_t)0x00000080UL) /**< Offset from GCR Base Address: <tt> 0x0080</tt> */
#define MXC_R_GCR_FLVCLKCTRL               ((uint32_t)0x00000084UL) /**< Offset from GCR Base Address: <tt> 0x0084</tt> */
#define MXC_R_GCR_FLVSTAT                  ((uint32_t)0x00000088UL) /**< Offset from GCR Base Address: <tt> 0x0088</tt> */
/**@} end of group gcr_registers */

/**
 * @ingroup  gcr_registers
 * @defgroup GCR_SYSCTRL GCR_SYSCTRL
 * @brief    System Control.
 * @{
 */
#define MXC_F_GCR_SYSCTRL_BSTAP_EN_POS                 0 /**< SYSCTRL_BSTAP_EN Position */
#define MXC_F_GCR_SYSCTRL_BSTAP_EN                     ((uint32_t)(0x1UL << MXC_F_GCR_SYSCTRL_BSTAP_EN_POS)) /**< SYSCTRL_BSTAP_EN Mask */

#define MXC_F_GCR_SYSCTRL_SBUSARB_POS                  1 /**< SYSCTRL_SBUSARB Position */
#define MXC_F_GCR_SYSCTRL_SBUSARB                      ((uint32_t)(0x3UL << MXC_F_GCR_SYSCTRL_SBUSARB_POS)) /**< SYSCTRL_SBUSARB Mask */
#define MXC_V_GCR_SYSCTRL_SBUSARB_FIX                  ((uint32_t)0x0UL) /**< SYSCTRL_SBUSARB_FIX Value */
#define MXC_S_GCR_SYSCTRL_SBUSARB_FIX                  (MXC_V_GCR_SYSCTRL_SBUSARB_FIX << MXC_F_GCR_SYSCTRL_SBUSARB_POS) /**< SYSCTRL_SBUSARB_FIX Setting */
#define MXC_V_GCR_SYSCTRL_SBUSARB_ROUND                ((uint32_t)0x1UL) /**< SYSCTRL_SBUSARB_ROUND Value */
#define MXC_S_GCR_SYSCTRL_SBUSARB_ROUND                (MXC_V_GCR_SYSCTRL_SBUSARB_ROUND << MXC_F_GCR_SYSCTRL_SBUSARB_POS) /**< SYSCTRL_SBUSARB_ROUND Setting */

#define MXC_F_GCR_SYSCTRL_FLASH1_PAGE_FLIP_POS         3 /**< SYSCTRL_FLASH1_PAGE_FLIP Position */
#define MXC_F_GCR_SYSCTRL_FLASH1_PAGE_FLIP             ((uint32_t)(0x1UL << MXC_F_GCR_SYSCTRL_FLASH1_PAGE_FLIP_POS)) /**< SYSCTRL_FLASH1_PAGE_FLIP Mask */

#define MXC_F_GCR_SYSCTRL_FLASH0_PAGE_FLIP_POS         4 /**< SYSCTRL_FLASH0_PAGE_FLIP Position */
#define MXC_F_GCR_SYSCTRL_FLASH0_PAGE_FLIP             ((uint32_t)(0x1UL << MXC_F_GCR_SYSCTRL_FLASH0_PAGE_FLIP_POS)) /**< SYSCTRL_FLASH0_PAGE_FLIP Mask */

#define MXC_F_GCR_SYSCTRL_FPU_DIS_POS                  5 /**< SYSCTRL_FPU_DIS Position */
#define MXC_F_GCR_SYSCTRL_FPU_DIS                      ((uint32_t)(0x1UL << MXC_F_GCR_SYSCTRL_FPU_DIS_POS)) /**< SYSCTRL_FPU_DIS Mask */

#define MXC_F_GCR_SYSCTRL_ICC_FLUSH_POS                6 /**< SYSCTRL_ICC_FLUSH Position */
#define MXC_F_GCR_SYSCTRL_ICC_FLUSH                    ((uint32_t)(0x1UL << MXC_F_GCR_SYSCTRL_ICC_FLUSH_POS)) /**< SYSCTRL_ICC_FLUSH Mask */

#define MXC_F_GCR_SYSCTRL_SRCC_FLUSH_POS               7 /**< SYSCTRL_SRCC_FLUSH Position */
#define MXC_F_GCR_SYSCTRL_SRCC_FLUSH                   ((uint32_t)(0x1UL << MXC_F_GCR_SYSCTRL_SRCC_FLUSH_POS)) /**< SYSCTRL_SRCC_FLUSH Mask */

#define MXC_F_GCR_SYSCTRL_SRCC_DIS_POS                 9 /**< SYSCTRL_SRCC_DIS Position */
#define MXC_F_GCR_SYSCTRL_SRCC_DIS                     ((uint32_t)(0x1UL << MXC_F_GCR_SYSCTRL_SRCC_DIS_POS)) /**< SYSCTRL_SRCC_DIS Mask */

#define MXC_F_GCR_SYSCTRL_CHKRES1_POS                  11 /**< SYSCTRL_CHKRES1 Position */
#define MXC_F_GCR_SYSCTRL_CHKRES1                      ((uint32_t)(0x1UL << MXC_F_GCR_SYSCTRL_CHKRES1_POS)) /**< SYSCTRL_CHKRES1 Mask */

#define MXC_F_GCR_SYSCTRL_CCHK1_POS                    12 /**< SYSCTRL_CCHK1 Position */
#define MXC_F_GCR_SYSCTRL_CCHK1                        ((uint32_t)(0x1UL << MXC_F_GCR_SYSCTRL_CCHK1_POS)) /**< SYSCTRL_CCHK1 Mask */

#define MXC_F_GCR_SYSCTRL_CCHK0_POS                    13 /**< SYSCTRL_CCHK0 Position */
#define MXC_F_GCR_SYSCTRL_CCHK0                        ((uint32_t)(0x1UL << MXC_F_GCR_SYSCTRL_CCHK0_POS)) /**< SYSCTRL_CCHK0 Mask */

#define MXC_F_GCR_SYSCTRL_CHKRES0_POS                  15 /**< SYSCTRL_CHKRES0 Position */
#define MXC_F_GCR_SYSCTRL_CHKRES0                      ((uint32_t)(0x1UL << MXC_F_GCR_SYSCTRL_CHKRES0_POS)) /**< SYSCTRL_CHKRES0 Mask */

/**@} end of group GCR_SYSCTRL_Register */

/**
 * @ingroup  gcr_registers
 * @defgroup GCR_RST0 GCR_RST0
 * @brief    Reset.
 * @{
 */
#define MXC_F_GCR_RST0_DMA_POS                         0 /**< RST0_DMA Position */
#define MXC_F_GCR_RST0_DMA                             ((uint32_t)(0x1UL << MXC_F_GCR_RST0_DMA_POS)) /**< RST0_DMA Mask */

#define MXC_F_GCR_RST0_WDT0_POS                        1 /**< RST0_WDT0 Position */
#define MXC_F_GCR_RST0_WDT0                            ((uint32_t)(0x1UL << MXC_F_GCR_RST0_WDT0_POS)) /**< RST0_WDT0 Mask */

#define MXC_F_GCR_RST0_GPIO0_POS                       2 /**< RST0_GPIO0 Position */
#define MXC_F_GCR_RST0_GPIO0                           ((uint32_t)(0x1UL << MXC_F_GCR_RST0_GPIO0_POS)) /**< RST0_GPIO0 Mask */

#define MXC_F_GCR_RST0_GPIO1_POS                       3 /**< RST0_GPIO1 Position */
#define MXC_F_GCR_RST0_GPIO1                           ((uint32_t)(0x1UL << MXC_F_GCR_RST0_GPIO1_POS)) /**< RST0_GPIO1 Mask */

#define MXC_F_GCR_RST0_GPIO2_POS                       4 /**< RST0_GPIO2 Position */
#define MXC_F_GCR_RST0_GPIO2                           ((uint32_t)(0x1UL << MXC_F_GCR_RST0_GPIO2_POS)) /**< RST0_GPIO2 Mask */

#define MXC_F_GCR_RST0_TMR0_POS                        5 /**< RST0_TMR0 Position */
#define MXC_F_GCR_RST0_TMR0                            ((uint32_t)(0x1UL << MXC_F_GCR_RST0_TMR0_POS)) /**< RST0_TMR0 Mask */

#define MXC_F_GCR_RST0_TMR1_POS                        6 /**< RST0_TMR1 Position */
#define MXC_F_GCR_RST0_TMR1                            ((uint32_t)(0x1UL << MXC_F_GCR_RST0_TMR1_POS)) /**< RST0_TMR1 Mask */

#define MXC_F_GCR_RST0_TMR2_POS                        7 /**< RST0_TMR2 Position */
#define MXC_F_GCR_RST0_TMR2                            ((uint32_t)(0x1UL << MXC_F_GCR_RST0_TMR2_POS)) /**< RST0_TMR2 Mask */

#define MXC_F_GCR_RST0_TMR3_POS                        8 /**< RST0_TMR3 Position */
#define MXC_F_GCR_RST0_TMR3                            ((uint32_t)(0x1UL << MXC_F_GCR_RST0_TMR3_POS)) /**< RST0_TMR3 Mask */

#define MXC_F_GCR_RST0_TMR4_POS                        9 /**< RST0_TMR4 Position */
#define MXC_F_GCR_RST0_TMR4                            ((uint32_t)(0x1UL << MXC_F_GCR_RST0_TMR4_POS)) /**< RST0_TMR4 Mask */

#define MXC_F_GCR_RST0_TMR5_POS                        10 /**< RST0_TMR5 Position */
#define MXC_F_GCR_RST0_TMR5                            ((uint32_t)(0x1UL << MXC_F_GCR_RST0_TMR5_POS)) /**< RST0_TMR5 Mask */

#define MXC_F_GCR_RST0_UART0_POS                       11 /**< RST0_UART0 Position */
#define MXC_F_GCR_RST0_UART0                           ((uint32_t)(0x1UL << MXC_F_GCR_RST0_UART0_POS)) /**< RST0_UART0 Mask */

#define MXC_F_GCR_RST0_UART1_POS                       12 /**< RST0_UART1 Position */
#define MXC_F_GCR_RST0_UART1                           ((uint32_t)(0x1UL << MXC_F_GCR_RST0_UART1_POS)) /**< RST0_UART1 Mask */

#define MXC_F_GCR_RST0_SPI0_POS                        13 /**< RST0_SPI0 Position */
#define MXC_F_GCR_RST0_SPI0                            ((uint32_t)(0x1UL << MXC_F_GCR_RST0_SPI0_POS)) /**< RST0_SPI0 Mask */

#define MXC_F_GCR_RST0_SPI1_POS                        14 /**< RST0_SPI1 Position */
#define MXC_F_GCR_RST0_SPI1                            ((uint32_t)(0x1UL << MXC_F_GCR_RST0_SPI1_POS)) /**< RST0_SPI1 Mask */

#define MXC_F_GCR_RST0_SPI2_POS                        15 /**< RST0_SPI2 Position */
#define MXC_F_GCR_RST0_SPI2                            ((uint32_t)(0x1UL << MXC_F_GCR_RST0_SPI2_POS)) /**< RST0_SPI2 Mask */

#define MXC_F_GCR_RST0_I2C0_POS                        16 /**< RST0_I2C0 Position */
#define MXC_F_GCR_RST0_I2C0                            ((uint32_t)(0x1UL << MXC_F_GCR_RST0_I2C0_POS)) /**< RST0_I2C0 Mask */

#define MXC_F_GCR_RST0_CRYPTO_POS                      18 /**< RST0_CRYPTO Position */
#define MXC_F_GCR_RST0_CRYPTO                          ((uint32_t)(0x1UL << MXC_F_GCR_RST0_CRYPTO_POS)) /**< RST0_CRYPTO Mask */

#define MXC_F_GCR_RST0_TMR6_POS                        20 /**< RST0_TMR6 Position */
#define MXC_F_GCR_RST0_TMR6                            ((uint32_t)(0x1UL << MXC_F_GCR_RST0_TMR6_POS)) /**< RST0_TMR6 Mask */

#define MXC_F_GCR_RST0_TMR7_POS                        21 /**< RST0_TMR7 Position */
#define MXC_F_GCR_RST0_TMR7                            ((uint32_t)(0x1UL << MXC_F_GCR_RST0_TMR7_POS)) /**< RST0_TMR7 Mask */

#define MXC_F_GCR_RST0_TFT_POS                         22 /**< RST0_TFT Position */
#define MXC_F_GCR_RST0_TFT                             ((uint32_t)(0x1UL << MXC_F_GCR_RST0_TFT_POS)) /**< RST0_TFT Mask */

#define MXC_F_GCR_RST0_USB_POS                         23 /**< RST0_USB Position */
#define MXC_F_GCR_RST0_USB                             ((uint32_t)(0x1UL << MXC_F_GCR_RST0_USB_POS)) /**< RST0_USB Mask */

#define MXC_F_GCR_RST0_TRNG_POS                        24 /**< RST0_TRNG Position */
#define MXC_F_GCR_RST0_TRNG                            ((uint32_t)(0x1UL << MXC_F_GCR_RST0_TRNG_POS)) /**< RST0_TRNG Mask */

#define MXC_F_GCR_RST0_ADC_POS                         26 /**< RST0_ADC Position */
#define MXC_F_GCR_RST0_ADC                             ((uint32_t)(0x1UL << MXC_F_GCR_RST0_ADC_POS)) /**< RST0_ADC Mask */

#define MXC_F_GCR_RST0_UART2_POS                       28 /**< RST0_UART2 Position */
#define MXC_F_GCR_RST0_UART2                           ((uint32_t)(0x1UL << MXC_F_GCR_RST0_UART2_POS)) /**< RST0_UART2 Mask */

#define MXC_F_GCR_RST0_SOFT_POS                        29 /**< RST0_SOFT Position */
#define MXC_F_GCR_RST0_SOFT                            ((uint32_t)(0x1UL << MXC_F_GCR_RST0_SOFT_POS)) /**< RST0_SOFT Mask */

#define MXC_F_GCR_RST0_PERIPH_POS                      30 /**< RST0_PERIPH Position */
#define MXC_F_GCR_RST0_PERIPH                          ((uint32_t)(0x1UL << MXC_F_GCR_RST0_PERIPH_POS)) /**< RST0_PERIPH Mask */

#define MXC_F_GCR_RST0_SYS_POS                         31 /**< RST0_SYS Position */
#define MXC_F_GCR_RST0_SYS                             ((uint32_t)(0x1UL << MXC_F_GCR_RST0_SYS_POS)) /**< RST0_SYS Mask */

/**@} end of group GCR_RST0_Register */

/**
 * @ingroup  gcr_registers
 * @defgroup GCR_CLKCTRL GCR_CLKCTRL
 * @brief    Clock Control.
 * @{
 */
#define MXC_F_GCR_CLKCTRL_PCLK_DIV_POS                 3 /**< CLKCTRL_PCLK_DIV Position */
#define MXC_F_GCR_CLKCTRL_PCLK_DIV                     ((uint32_t)(0x7UL << MXC_F_GCR_CLKCTRL_PCLK_DIV_POS)) /**< CLKCTRL_PCLK_DIV Mask */
#define MXC_V_GCR_CLKCTRL_PCLK_DIV_DIV1                ((uint32_t)0x0UL) /**< CLKCTRL_PCLK_DIV_DIV1 Value */
#define MXC_S_GCR_CLKCTRL_PCLK_DIV_DIV1                (MXC_V_GCR_CLKCTRL_PCLK_DIV_DIV1 << MXC_F_GCR_CLKCTRL_PCLK_DIV_POS) /**< CLKCTRL_PCLK_DIV_DIV1 Setting */
#define MXC_V_GCR_CLKCTRL_PCLK_DIV_DIV2                ((uint32_t)0x1UL) /**< CLKCTRL_PCLK_DIV_DIV2 Value */
#define MXC_S_GCR_CLKCTRL_PCLK_DIV_DIV2                (MXC_V_GCR_CLKCTRL_PCLK_DIV_DIV2 << MXC_F_GCR_CLKCTRL_PCLK_DIV_POS) /**< CLKCTRL_PCLK_DIV_DIV2 Setting */
#define MXC_V_GCR_CLKCTRL_PCLK_DIV_DIV4                ((uint32_t)0x2UL) /**< CLKCTRL_PCLK_DIV_DIV4 Value */
#define MXC_S_GCR_CLKCTRL_PCLK_DIV_DIV4                (MXC_V_GCR_CLKCTRL_PCLK_DIV_DIV4 << MXC_F_GCR_CLKCTRL_PCLK_DIV_POS) /**< CLKCTRL_PCLK_DIV_DIV4 Setting */
#define MXC_V_GCR_CLKCTRL_PCLK_DIV_DIV8                ((uint32_t)0x3UL) /**< CLKCTRL_PCLK_DIV_DIV8 Value */
#define MXC_S_GCR_CLKCTRL_PCLK_DIV_DIV8                (MXC_V_GCR_CLKCTRL_PCLK_DIV_DIV8 << MXC_F_GCR_CLKCTRL_PCLK_DIV_POS) /**< CLKCTRL_PCLK_DIV_DIV8 Setting */

#define MXC_F_GCR_CLKCTRL_SYSCLK_DIV_POS               6 /**< CLKCTRL_SYSCLK_DIV Position */
#define MXC_F_GCR_CLKCTRL_SYSCLK_DIV                   ((uint32_t)(0x7UL << MXC_F_GCR_CLKCTRL_SYSCLK_DIV_POS)) /**< CLKCTRL_SYSCLK_DIV Mask */
#define MXC_V_GCR_CLKCTRL_SYSCLK_DIV_DIV1              ((uint32_t)0x0UL) /**< CLKCTRL_SYSCLK_DIV_DIV1 Value */
#define MXC_S_GCR_CLKCTRL_SYSCLK_DIV_DIV1              (MXC_V_GCR_CLKCTRL_SYSCLK_DIV_DIV1 << MXC_F_GCR_CLKCTRL_SYSCLK_DIV_POS) /**< CLKCTRL_SYSCLK_DIV_DIV1 Setting */
#define MXC_V_GCR_CLKCTRL_SYSCLK_DIV_DIV2              ((uint32_t)0x1UL) /**< CLKCTRL_SYSCLK_DIV_DIV2 Value */
#define MXC_S_GCR_CLKCTRL_SYSCLK_DIV_DIV2              (MXC_V_GCR_CLKCTRL_SYSCLK_DIV_DIV2 << MXC_F_GCR_CLKCTRL_SYSCLK_DIV_POS) /**< CLKCTRL_SYSCLK_DIV_DIV2 Setting */
#define MXC_V_GCR_CLKCTRL_SYSCLK_DIV_DIV4              ((uint32_t)0x2UL) /**< CLKCTRL_SYSCLK_DIV_DIV4 Value */
#define MXC_S_GCR_CLKCTRL_SYSCLK_DIV_DIV4              (MXC_V_GCR_CLKCTRL_SYSCLK_DIV_DIV4 << MXC_F_GCR_CLKCTRL_SYSCLK_DIV_POS) /**< CLKCTRL_SYSCLK_DIV_DIV4 Setting */
#define MXC_V_GCR_CLKCTRL_SYSCLK_DIV_DIV8              ((uint32_t)0x3UL) /**< CLKCTRL_SYSCLK_DIV_DIV8 Value */
#define MXC_S_GCR_CLKCTRL_SYSCLK_DIV_DIV8              (MXC_V_GCR_CLKCTRL_SYSCLK_DIV_DIV8 << MXC_F_GCR_CLKCTRL_SYSCLK_DIV_POS) /**< CLKCTRL_SYSCLK_DIV_DIV8 Setting */
#define MXC_V_GCR_CLKCTRL_SYSCLK_DIV_DIV16             ((uint32_t)0x4UL) /**< CLKCTRL_SYSCLK_DIV_DIV16 Value */
#define MXC_S_GCR_CLKCTRL_SYSCLK_DIV_DIV16             (MXC_V_GCR_CLKCTRL_SYSCLK_DIV_DIV16 << MXC_F_GCR_CLKCTRL_SYSCLK_DIV_POS) /**< CLKCTRL_SYSCLK_DIV_DIV16 Setting */
#define MXC_V_GCR_CLKCTRL_SYSCLK_DIV_DIV32             ((uint32_t)0x5UL) /**< CLKCTRL_SYSCLK_DIV_DIV32 Value */
#define MXC_S_GCR_CLKCTRL_SYSCLK_DIV_DIV32             (MXC_V_GCR_CLKCTRL_SYSCLK_DIV_DIV32 << MXC_F_GCR_CLKCTRL_SYSCLK_DIV_POS) /**< CLKCTRL_SYSCLK_DIV_DIV32 Setting */
#define MXC_V_GCR_CLKCTRL_SYSCLK_DIV_DIV64             ((uint32_t)0x6UL) /**< CLKCTRL_SYSCLK_DIV_DIV64 Value */
#define MXC_S_GCR_CLKCTRL_SYSCLK_DIV_DIV64             (MXC_V_GCR_CLKCTRL_SYSCLK_DIV_DIV64 << MXC_F_GCR_CLKCTRL_SYSCLK_DIV_POS) /**< CLKCTRL_SYSCLK_DIV_DIV64 Setting */
#define MXC_V_GCR_CLKCTRL_SYSCLK_DIV_DIV128            ((uint32_t)0x7UL) /**< CLKCTRL_SYSCLK_DIV_DIV128 Value */
#define MXC_S_GCR_CLKCTRL_SYSCLK_DIV_DIV128            (MXC_V_GCR_CLKCTRL_SYSCLK_DIV_DIV128 << MXC_F_GCR_CLKCTRL_SYSCLK_DIV_POS) /**< CLKCTRL_SYSCLK_DIV_DIV128 Setting */

#define MXC_F_GCR_CLKCTRL_SYSCLK_SEL_POS               9 /**< CLKCTRL_SYSCLK_SEL Position */
#define MXC_F_GCR_CLKCTRL_SYSCLK_SEL                   ((uint32_t)(0x7UL << MXC_F_GCR_CLKCTRL_SYSCLK_SEL_POS)) /**< CLKCTRL_SYSCLK_SEL Mask */
#define MXC_V_GCR_CLKCTRL_SYSCLK_SEL_ISO               ((uint32_t)0x0UL) /**< CLKCTRL_SYSCLK_SEL_ISO Value */
#define MXC_S_GCR_CLKCTRL_SYSCLK_SEL_ISO               (MXC_V_GCR_CLKCTRL_SYSCLK_SEL_ISO << MXC_F_GCR_CLKCTRL_SYSCLK_SEL_POS) /**< CLKCTRL_SYSCLK_SEL_ISO Setting */
#define MXC_V_GCR_CLKCTRL_SYSCLK_SEL_ERFO              ((uint32_t)0x2UL) /**< CLKCTRL_SYSCLK_SEL_ERFO Value */
#define MXC_S_GCR_CLKCTRL_SYSCLK_SEL_ERFO              (MXC_V_GCR_CLKCTRL_SYSCLK_SEL_ERFO << MXC_F_GCR_CLKCTRL_SYSCLK_SEL_POS) /**< CLKCTRL_SYSCLK_SEL_ERFO Setting */
#define MXC_V_GCR_CLKCTRL_SYSCLK_SEL_INRO              ((uint32_t)0x3UL) /**< CLKCTRL_SYSCLK_SEL_INRO Value */
#define MXC_S_GCR_CLKCTRL_SYSCLK_SEL_INRO              (MXC_V_GCR_CLKCTRL_SYSCLK_SEL_INRO << MXC_F_GCR_CLKCTRL_SYSCLK_SEL_POS) /**< CLKCTRL_SYSCLK_SEL_INRO Setting */
#define MXC_V_GCR_CLKCTRL_SYSCLK_SEL_IPO               ((uint32_t)0x4UL) /**< CLKCTRL_SYSCLK_SEL_IPO Value */
#define MXC_S_GCR_CLKCTRL_SYSCLK_SEL_IPO               (MXC_V_GCR_CLKCTRL_SYSCLK_SEL_IPO << MXC_F_GCR_CLKCTRL_SYSCLK_SEL_POS) /**< CLKCTRL_SYSCLK_SEL_IPO Setting */
#define MXC_V_GCR_CLKCTRL_SYSCLK_SEL_IBRO              ((uint32_t)0x5UL) /**< CLKCTRL_SYSCLK_SEL_IBRO Value */
#define MXC_S_GCR_CLKCTRL_SYSCLK_SEL_IBRO              (MXC_V_GCR_CLKCTRL_SYSCLK_SEL_IBRO << MXC_F_GCR_CLKCTRL_SYSCLK_SEL_POS) /**< CLKCTRL_SYSCLK_SEL_IBRO Setting */
#define MXC_V_GCR_CLKCTRL_SYSCLK_SEL_ERTCO             ((uint32_t)0x6UL) /**< CLKCTRL_SYSCLK_SEL_ERTCO Value */
#define MXC_S_GCR_CLKCTRL_SYSCLK_SEL_ERTCO             (MXC_V_GCR_CLKCTRL_SYSCLK_SEL_ERTCO << MXC_F_GCR_CLKCTRL_SYSCLK_SEL_POS) /**< CLKCTRL_SYSCLK_SEL_ERTCO Setting */

#define MXC_F_GCR_CLKCTRL_CRYPTOCLK_DIV_POS            12 /**< CLKCTRL_CRYPTOCLK_DIV Position */
#define MXC_F_GCR_CLKCTRL_CRYPTOCLK_DIV                ((uint32_t)(0x1UL << MXC_F_GCR_CLKCTRL_CRYPTOCLK_DIV_POS)) /**< CLKCTRL_CRYPTOCLK_DIV Mask */

#define MXC_F_GCR_CLKCTRL_SYSCLK_RDY_POS               13 /**< CLKCTRL_SYSCLK_RDY Position */
#define MXC_F_GCR_CLKCTRL_SYSCLK_RDY                   ((uint32_t)(0x1UL << MXC_F_GCR_CLKCTRL_SYSCLK_RDY_POS)) /**< CLKCTRL_SYSCLK_RDY Mask */

#define MXC_F_GCR_CLKCTRL_IPO_DIV_POS                  14 /**< CLKCTRL_IPO_DIV Position */
#define MXC_F_GCR_CLKCTRL_IPO_DIV                      ((uint32_t)(0x3UL << MXC_F_GCR_CLKCTRL_IPO_DIV_POS)) /**< CLKCTRL_IPO_DIV Mask */
#define MXC_V_GCR_CLKCTRL_IPO_DIV_DIV1                 ((uint32_t)0x0UL) /**< CLKCTRL_IPO_DIV_DIV1 Value */
#define MXC_S_GCR_CLKCTRL_IPO_DIV_DIV1                 (MXC_V_GCR_CLKCTRL_IPO_DIV_DIV1 << MXC_F_GCR_CLKCTRL_IPO_DIV_POS) /**< CLKCTRL_IPO_DIV_DIV1 Setting */
#define MXC_V_GCR_CLKCTRL_IPO_DIV_DIV2                 ((uint32_t)0x1UL) /**< CLKCTRL_IPO_DIV_DIV2 Value */
#define MXC_S_GCR_CLKCTRL_IPO_DIV_DIV2                 (MXC_V_GCR_CLKCTRL_IPO_DIV_DIV2 << MXC_F_GCR_CLKCTRL_IPO_DIV_POS) /**< CLKCTRL_IPO_DIV_DIV2 Setting */
#define MXC_V_GCR_CLKCTRL_IPO_DIV_DIV4                 ((uint32_t)0x2UL) /**< CLKCTRL_IPO_DIV_DIV4 Value */
#define MXC_S_GCR_CLKCTRL_IPO_DIV_DIV4                 (MXC_V_GCR_CLKCTRL_IPO_DIV_DIV4 << MXC_F_GCR_CLKCTRL_IPO_DIV_POS) /**< CLKCTRL_IPO_DIV_DIV4 Setting */
#define MXC_V_GCR_CLKCTRL_IPO_DIV_DIV8                 ((uint32_t)0x3UL) /**< CLKCTRL_IPO_DIV_DIV8 Value */
#define MXC_S_GCR_CLKCTRL_IPO_DIV_DIV8                 (MXC_V_GCR_CLKCTRL_IPO_DIV_DIV8 << MXC_F_GCR_CLKCTRL_IPO_DIV_POS) /**< CLKCTRL_IPO_DIV_DIV8 Setting */

#define MXC_F_GCR_CLKCTRL_ERFO_EN_POS                  16 /**< CLKCTRL_ERFO_EN Position */
#define MXC_F_GCR_CLKCTRL_ERFO_EN                      ((uint32_t)(0x1UL << MXC_F_GCR_CLKCTRL_ERFO_EN_POS)) /**< CLKCTRL_ERFO_EN Mask */

#define MXC_F_GCR_CLKCTRL_ERTCO_EN_POS                 17 /**< CLKCTRL_ERTCO_EN Position */
#define MXC_F_GCR_CLKCTRL_ERTCO_EN                     ((uint32_t)(0x1UL << MXC_F_GCR_CLKCTRL_ERTCO_EN_POS)) /**< CLKCTRL_ERTCO_EN Mask */

#define MXC_F_GCR_CLKCTRL_ISO_EN_POS                   18 /**< CLKCTRL_ISO_EN Position */
#define MXC_F_GCR_CLKCTRL_ISO_EN                       ((uint32_t)(0x1UL << MXC_F_GCR_CLKCTRL_ISO_EN_POS)) /**< CLKCTRL_ISO_EN Mask */

#define MXC_F_GCR_CLKCTRL_IPO_EN_POS                   19 /**< CLKCTRL_IPO_EN Position */
#define MXC_F_GCR_CLKCTRL_IPO_EN                       ((uint32_t)(0x1UL << MXC_F_GCR_CLKCTRL_IPO_EN_POS)) /**< CLKCTRL_IPO_EN Mask */

#define MXC_F_GCR_CLKCTRL_IBRO_EN_POS                  20 /**< CLKCTRL_IBRO_EN Position */
#define MXC_F_GCR_CLKCTRL_IBRO_EN                      ((uint32_t)(0x1UL << MXC_F_GCR_CLKCTRL_IBRO_EN_POS)) /**< CLKCTRL_IBRO_EN Mask */

#define MXC_F_GCR_CLKCTRL_IBRO_VS_POS                  21 /**< CLKCTRL_IBRO_VS Position */
#define MXC_F_GCR_CLKCTRL_IBRO_VS                      ((uint32_t)(0x1UL << MXC_F_GCR_CLKCTRL_IBRO_VS_POS)) /**< CLKCTRL_IBRO_VS Mask */

#define MXC_F_GCR_CLKCTRL_ERFO_RDY_POS                 24 /**< CLKCTRL_ERFO_RDY Position */
#define MXC_F_GCR_CLKCTRL_ERFO_RDY                     ((uint32_t)(0x1UL << MXC_F_GCR_CLKCTRL_ERFO_RDY_POS)) /**< CLKCTRL_ERFO_RDY Mask */

#define MXC_F_GCR_CLKCTRL_ERTCO_RDY_POS                25 /**< CLKCTRL_ERTCO_RDY Position */
#define MXC_F_GCR_CLKCTRL_ERTCO_RDY                    ((uint32_t)(0x1UL << MXC_F_GCR_CLKCTRL_ERTCO_RDY_POS)) /**< CLKCTRL_ERTCO_RDY Mask */

#define MXC_F_GCR_CLKCTRL_ISO_RDY_POS                  26 /**< CLKCTRL_ISO_RDY Position */
#define MXC_F_GCR_CLKCTRL_ISO_RDY                      ((uint32_t)(0x1UL << MXC_F_GCR_CLKCTRL_ISO_RDY_POS)) /**< CLKCTRL_ISO_RDY Mask */

#define MXC_F_GCR_CLKCTRL_IPO_RDY_POS                  27 /**< CLKCTRL_IPO_RDY Position */
#define MXC_F_GCR_CLKCTRL_IPO_RDY                      ((uint32_t)(0x1UL << MXC_F_GCR_CLKCTRL_IPO_RDY_POS)) /**< CLKCTRL_IPO_RDY Mask */

#define MXC_F_GCR_CLKCTRL_IBRO_RDY_POS                 28 /**< CLKCTRL_IBRO_RDY Position */
#define MXC_F_GCR_CLKCTRL_IBRO_RDY                     ((uint32_t)(0x1UL << MXC_F_GCR_CLKCTRL_IBRO_RDY_POS)) /**< CLKCTRL_IBRO_RDY Mask */

#define MXC_F_GCR_CLKCTRL_INRO_RDY_POS                 29 /**< CLKCTRL_INRO_RDY Position */
#define MXC_F_GCR_CLKCTRL_INRO_RDY                     ((uint32_t)(0x1UL << MXC_F_GCR_CLKCTRL_INRO_RDY_POS)) /**< CLKCTRL_INRO_RDY Mask */

/**@} end of group GCR_CLKCTRL_Register */

/**
 * @ingroup  gcr_registers
 * @defgroup GCR_PM GCR_PM
 * @brief    Power Management.
 * @{
 */
#define MXC_F_GCR_PM_MODE_POS                          0 /**< PM_MODE Position */
#define MXC_F_GCR_PM_MODE                              ((uint32_t)(0x7UL << MXC_F_GCR_PM_MODE_POS)) /**< PM_MODE Mask */
#define MXC_V_GCR_PM_MODE_ACTIVE                       ((uint32_t)0x0UL) /**< PM_MODE_ACTIVE Value */
#define MXC_S_GCR_PM_MODE_ACTIVE                       (MXC_V_GCR_PM_MODE_ACTIVE << MXC_F_GCR_PM_MODE_POS) /**< PM_MODE_ACTIVE Setting */
#define MXC_V_GCR_PM_MODE_DEEPSLEEP                    ((uint32_t)0x2UL) /**< PM_MODE_DEEPSLEEP Value */
#define MXC_S_GCR_PM_MODE_DEEPSLEEP                    (MXC_V_GCR_PM_MODE_DEEPSLEEP << MXC_F_GCR_PM_MODE_POS) /**< PM_MODE_DEEPSLEEP Setting */
#define MXC_V_GCR_PM_MODE_SHUTDOWN                     ((uint32_t)0x3UL) /**< PM_MODE_SHUTDOWN Value */
#define MXC_S_GCR_PM_MODE_SHUTDOWN                     (MXC_V_GCR_PM_MODE_SHUTDOWN << MXC_F_GCR_PM_MODE_POS) /**< PM_MODE_SHUTDOWN Setting */
#define MXC_V_GCR_PM_MODE_BACKUP                       ((uint32_t)0x4UL) /**< PM_MODE_BACKUP Value */
#define MXC_S_GCR_PM_MODE_BACKUP                       (MXC_V_GCR_PM_MODE_BACKUP << MXC_F_GCR_PM_MODE_POS) /**< PM_MODE_BACKUP Setting */

#define MXC_F_GCR_PM_GPIO_WE_POS                       4 /**< PM_GPIO_WE Position */
#define MXC_F_GCR_PM_GPIO_WE                           ((uint32_t)(0x1UL << MXC_F_GCR_PM_GPIO_WE_POS)) /**< PM_GPIO_WE Mask */

#define MXC_F_GCR_PM_RTC_WE_POS                        5 /**< PM_RTC_WE Position */
#define MXC_F_GCR_PM_RTC_WE                            ((uint32_t)(0x1UL << MXC_F_GCR_PM_RTC_WE_POS)) /**< PM_RTC_WE Mask */

#define MXC_F_GCR_PM_USB_WE_POS                        6 /**< PM_USB_WE Position */
#define MXC_F_GCR_PM_USB_WE                            ((uint32_t)(0x1UL << MXC_F_GCR_PM_USB_WE_POS)) /**< PM_USB_WE Mask */

#define MXC_F_GCR_PM_ERFO_PD_POS                       12 /**< PM_ERFO_PD Position */
#define MXC_F_GCR_PM_ERFO_PD                           ((uint32_t)(0x1UL << MXC_F_GCR_PM_ERFO_PD_POS)) /**< PM_ERFO_PD Mask */

#define MXC_F_GCR_PM_ISO_PD_POS                        15 /**< PM_ISO_PD Position */
#define MXC_F_GCR_PM_ISO_PD                            ((uint32_t)(0x1UL << MXC_F_GCR_PM_ISO_PD_POS)) /**< PM_ISO_PD Mask */

#define MXC_F_GCR_PM_IPO_PD_POS                        16 /**< PM_IPO_PD Position */
#define MXC_F_GCR_PM_IPO_PD                            ((uint32_t)(0x1UL << MXC_F_GCR_PM_IPO_PD_POS)) /**< PM_IPO_PD Mask */

#define MXC_F_GCR_PM_IBRO_PD_POS                       17 /**< PM_IBRO_PD Position */
#define MXC_F_GCR_PM_IBRO_PD                           ((uint32_t)(0x1UL << MXC_F_GCR_PM_IBRO_PD_POS)) /**< PM_IBRO_PD Mask */

#define MXC_F_GCR_PM_NFC_PD_POS                        18 /**< PM_NFC_PD Position */
#define MXC_F_GCR_PM_NFC_PD                            ((uint32_t)(0x1UL << MXC_F_GCR_PM_NFC_PD_POS)) /**< PM_NFC_PD Mask */

#define MXC_F_GCR_PM_ERFO_BP_POS                       20 /**< PM_ERFO_BP Position */
#define MXC_F_GCR_PM_ERFO_BP                           ((uint32_t)(0x1UL << MXC_F_GCR_PM_ERFO_BP_POS)) /**< PM_ERFO_BP Mask */

/**@} end of group GCR_PM_Register */

/**
 * @ingroup  gcr_registers
 * @defgroup GCR_PCLKDIV GCR_PCLKDIV
 * @brief    Peripheral Clock Divider.
 * @{
 */
#define MXC_F_GCR_PCLKDIV_SKBDFRQ_POS                  0 /**< PCLKDIV_SKBDFRQ Position */
#define MXC_F_GCR_PCLKDIV_SKBDFRQ                      ((uint32_t)(0x7UL << MXC_F_GCR_PCLKDIV_SKBDFRQ_POS)) /**< PCLKDIV_SKBDFRQ Mask */
#define MXC_V_GCR_PCLKDIV_SKBDFRQ_96MHZ                ((uint32_t)0x2UL) /**< PCLKDIV_SKBDFRQ_96MHZ Value */
#define MXC_S_GCR_PCLKDIV_SKBDFRQ_96MHZ                (MXC_V_GCR_PCLKDIV_SKBDFRQ_96MHZ << MXC_F_GCR_PCLKDIV_SKBDFRQ_POS) /**< PCLKDIV_SKBDFRQ_96MHZ Setting */
#define MXC_V_GCR_PCLKDIV_SKBDFRQ_48MHZ                ((uint32_t)0x3UL) /**< PCLKDIV_SKBDFRQ_48MHZ Value */
#define MXC_S_GCR_PCLKDIV_SKBDFRQ_48MHZ                (MXC_V_GCR_PCLKDIV_SKBDFRQ_48MHZ << MXC_F_GCR_PCLKDIV_SKBDFRQ_POS) /**< PCLKDIV_SKBDFRQ_48MHZ Setting */
#define MXC_V_GCR_PCLKDIV_SKBDFRQ_24MHZ                ((uint32_t)0x4UL) /**< PCLKDIV_SKBDFRQ_24MHZ Value */
#define MXC_S_GCR_PCLKDIV_SKBDFRQ_24MHZ                (MXC_V_GCR_PCLKDIV_SKBDFRQ_24MHZ << MXC_F_GCR_PCLKDIV_SKBDFRQ_POS) /**< PCLKDIV_SKBDFRQ_24MHZ Setting */
#define MXC_V_GCR_PCLKDIV_SKBDFRQ_12MHZ                ((uint32_t)0x5UL) /**< PCLKDIV_SKBDFRQ_12MHZ Value */
#define MXC_S_GCR_PCLKDIV_SKBDFRQ_12MHZ                (MXC_V_GCR_PCLKDIV_SKBDFRQ_12MHZ << MXC_F_GCR_PCLKDIV_SKBDFRQ_POS) /**< PCLKDIV_SKBDFRQ_12MHZ Setting */
#define MXC_V_GCR_PCLKDIV_SKBDFRQ_6MHZ                 ((uint32_t)0x6UL) /**< PCLKDIV_SKBDFRQ_6MHZ Value */
#define MXC_S_GCR_PCLKDIV_SKBDFRQ_6MHZ                 (MXC_V_GCR_PCLKDIV_SKBDFRQ_6MHZ << MXC_F_GCR_PCLKDIV_SKBDFRQ_POS) /**< PCLKDIV_SKBDFRQ_6MHZ Setting */
#define MXC_V_GCR_PCLKDIV_SKBDFRQ_3MHZ                 ((uint32_t)0x7UL) /**< PCLKDIV_SKBDFRQ_3MHZ Value */
#define MXC_S_GCR_PCLKDIV_SKBDFRQ_3MHZ                 (MXC_V_GCR_PCLKDIV_SKBDFRQ_3MHZ << MXC_F_GCR_PCLKDIV_SKBDFRQ_POS) /**< PCLKDIV_SKBDFRQ_3MHZ Setting */

#define MXC_F_GCR_PCLKDIV_SDHCFRQ_POS                  7 /**< PCLKDIV_SDHCFRQ Position */
#define MXC_F_GCR_PCLKDIV_SDHCFRQ                      ((uint32_t)(0x3UL << MXC_F_GCR_PCLKDIV_SDHCFRQ_POS)) /**< PCLKDIV_SDHCFRQ Mask */
#define MXC_V_GCR_PCLKDIV_SDHCFRQ_DIV2                 ((uint32_t)0x0UL) /**< PCLKDIV_SDHCFRQ_DIV2 Value */
#define MXC_S_GCR_PCLKDIV_SDHCFRQ_DIV2                 (MXC_V_GCR_PCLKDIV_SDHCFRQ_DIV2 << MXC_F_GCR_PCLKDIV_SDHCFRQ_POS) /**< PCLKDIV_SDHCFRQ_DIV2 Setting */
#define MXC_V_GCR_PCLKDIV_SDHCFRQ_DIV4                 ((uint32_t)0x1UL) /**< PCLKDIV_SDHCFRQ_DIV4 Value */
#define MXC_S_GCR_PCLKDIV_SDHCFRQ_DIV4                 (MXC_V_GCR_PCLKDIV_SDHCFRQ_DIV4 << MXC_F_GCR_PCLKDIV_SDHCFRQ_POS) /**< PCLKDIV_SDHCFRQ_DIV4 Setting */

#define MXC_F_GCR_PCLKDIV_ADCFRQ_POS                   10 /**< PCLKDIV_ADCFRQ Position */
#define MXC_F_GCR_PCLKDIV_ADCFRQ                       ((uint32_t)(0xFUL << MXC_F_GCR_PCLKDIV_ADCFRQ_POS)) /**< PCLKDIV_ADCFRQ Mask */

#define MXC_F_GCR_PCLKDIV_AONCLKDIV_POS                14 /**< PCLKDIV_AONCLKDIV Position */
#define MXC_F_GCR_PCLKDIV_AONCLKDIV                    ((uint32_t)(0x3UL << MXC_F_GCR_PCLKDIV_AONCLKDIV_POS)) /**< PCLKDIV_AONCLKDIV Mask */
#define MXC_V_GCR_PCLKDIV_AONCLKDIV_DIV4               ((uint32_t)0x0UL) /**< PCLKDIV_AONCLKDIV_DIV4 Value */
#define MXC_S_GCR_PCLKDIV_AONCLKDIV_DIV4               (MXC_V_GCR_PCLKDIV_AONCLKDIV_DIV4 << MXC_F_GCR_PCLKDIV_AONCLKDIV_POS) /**< PCLKDIV_AONCLKDIV_DIV4 Setting */
#define MXC_V_GCR_PCLKDIV_AONCLKDIV_DIV8               ((uint32_t)0x1UL) /**< PCLKDIV_AONCLKDIV_DIV8 Value */
#define MXC_S_GCR_PCLKDIV_AONCLKDIV_DIV8               (MXC_V_GCR_PCLKDIV_AONCLKDIV_DIV8 << MXC_F_GCR_PCLKDIV_AONCLKDIV_POS) /**< PCLKDIV_AONCLKDIV_DIV8 Setting */
#define MXC_V_GCR_PCLKDIV_AONCLKDIV_DIV16              ((uint32_t)0x2UL) /**< PCLKDIV_AONCLKDIV_DIV16 Value */
#define MXC_S_GCR_PCLKDIV_AONCLKDIV_DIV16              (MXC_V_GCR_PCLKDIV_AONCLKDIV_DIV16 << MXC_F_GCR_PCLKDIV_AONCLKDIV_POS) /**< PCLKDIV_AONCLKDIV_DIV16 Setting */
#define MXC_V_GCR_PCLKDIV_AONCLKDIV_DIV32              ((uint32_t)0x3UL) /**< PCLKDIV_AONCLKDIV_DIV32 Value */
#define MXC_S_GCR_PCLKDIV_AONCLKDIV_DIV32              (MXC_V_GCR_PCLKDIV_AONCLKDIV_DIV32 << MXC_F_GCR_PCLKDIV_AONCLKDIV_POS) /**< PCLKDIV_AONCLKDIV_DIV32 Setting */

/**@} end of group GCR_PCLKDIV_Register */

/**
 * @ingroup  gcr_registers
 * @defgroup GCR_PCLKDIS0 GCR_PCLKDIS0
 * @brief    Peripheral Clock Disable.
 * @{
 */
#define MXC_F_GCR_PCLKDIS0_GPIO0_POS                   0 /**< PCLKDIS0_GPIO0 Position */
#define MXC_F_GCR_PCLKDIS0_GPIO0                       ((uint32_t)(0x1UL << MXC_F_GCR_PCLKDIS0_GPIO0_POS)) /**< PCLKDIS0_GPIO0 Mask */

#define MXC_F_GCR_PCLKDIS0_GPIO1_POS                   1 /**< PCLKDIS0_GPIO1 Position */
#define MXC_F_GCR_PCLKDIS0_GPIO1                       ((uint32_t)(0x1UL << MXC_F_GCR_PCLKDIS0_GPIO1_POS)) /**< PCLKDIS0_GPIO1 Mask */

#define MXC_F_GCR_PCLKDIS0_GPIO2_POS                   2 /**< PCLKDIS0_GPIO2 Position */
#define MXC_F_GCR_PCLKDIS0_GPIO2                       ((uint32_t)(0x1UL << MXC_F_GCR_PCLKDIS0_GPIO2_POS)) /**< PCLKDIS0_GPIO2 Mask */

#define MXC_F_GCR_PCLKDIS0_USB_POS                     3 /**< PCLKDIS0_USB Position */
#define MXC_F_GCR_PCLKDIS0_USB                         ((uint32_t)(0x1UL << MXC_F_GCR_PCLKDIS0_USB_POS)) /**< PCLKDIS0_USB Mask */

#define MXC_F_GCR_PCLKDIS0_TFT_POS                     4 /**< PCLKDIS0_TFT Position */
#define MXC_F_GCR_PCLKDIS0_TFT                         ((uint32_t)(0x1UL << MXC_F_GCR_PCLKDIS0_TFT_POS)) /**< PCLKDIS0_TFT Mask */

#define MXC_F_GCR_PCLKDIS0_DMA_POS                     5 /**< PCLKDIS0_DMA Position */
#define MXC_F_GCR_PCLKDIS0_DMA                         ((uint32_t)(0x1UL << MXC_F_GCR_PCLKDIS0_DMA_POS)) /**< PCLKDIS0_DMA Mask */

#define MXC_F_GCR_PCLKDIS0_SPI0_POS                    6 /**< PCLKDIS0_SPI0 Position */
#define MXC_F_GCR_PCLKDIS0_SPI0                        ((uint32_t)(0x1UL << MXC_F_GCR_PCLKDIS0_SPI0_POS)) /**< PCLKDIS0_SPI0 Mask */

#define MXC_F_GCR_PCLKDIS0_SPI1_POS                    7 /**< PCLKDIS0_SPI1 Position */
#define MXC_F_GCR_PCLKDIS0_SPI1                        ((uint32_t)(0x1UL << MXC_F_GCR_PCLKDIS0_SPI1_POS)) /**< PCLKDIS0_SPI1 Mask */

#define MXC_F_GCR_PCLKDIS0_SPI2_POS                    8 /**< PCLKDIS0_SPI2 Position */
#define MXC_F_GCR_PCLKDIS0_SPI2                        ((uint32_t)(0x1UL << MXC_F_GCR_PCLKDIS0_SPI2_POS)) /**< PCLKDIS0_SPI2 Mask */

#define MXC_F_GCR_PCLKDIS0_UART0_POS                   9 /**< PCLKDIS0_UART0 Position */
#define MXC_F_GCR_PCLKDIS0_UART0                       ((uint32_t)(0x1UL << MXC_F_GCR_PCLKDIS0_UART0_POS)) /**< PCLKDIS0_UART0 Mask */

#define MXC_F_GCR_PCLKDIS0_UART1_POS                   10 /**< PCLKDIS0_UART1 Position */
#define MXC_F_GCR_PCLKDIS0_UART1                       ((uint32_t)(0x1UL << MXC_F_GCR_PCLKDIS0_UART1_POS)) /**< PCLKDIS0_UART1 Mask */

#define MXC_F_GCR_PCLKDIS0_I2C0_POS                    13 /**< PCLKDIS0_I2C0 Position */
#define MXC_F_GCR_PCLKDIS0_I2C0                        ((uint32_t)(0x1UL << MXC_F_GCR_PCLKDIS0_I2C0_POS)) /**< PCLKDIS0_I2C0 Mask */

#define MXC_F_GCR_PCLKDIS0_CRYPTO_POS                  14 /**< PCLKDIS0_CRYPTO Position */
#define MXC_F_GCR_PCLKDIS0_CRYPTO                      ((uint32_t)(0x1UL << MXC_F_GCR_PCLKDIS0_CRYPTO_POS)) /**< PCLKDIS0_CRYPTO Mask */

#define MXC_F_GCR_PCLKDIS0_TMR0_POS                    15 /**< PCLKDIS0_TMR0 Position */
#define MXC_F_GCR_PCLKDIS0_TMR0                        ((uint32_t)(0x1UL << MXC_F_GCR_PCLKDIS0_TMR0_POS)) /**< PCLKDIS0_TMR0 Mask */

#define MXC_F_GCR_PCLKDIS0_TMR1_POS                    16 /**< PCLKDIS0_TMR1 Position */
#define MXC_F_GCR_PCLKDIS0_TMR1                        ((uint32_t)(0x1UL << MXC_F_GCR_PCLKDIS0_TMR1_POS)) /**< PCLKDIS0_TMR1 Mask */

#define MXC_F_GCR_PCLKDIS0_TMR2_POS                    17 /**< PCLKDIS0_TMR2 Position */
#define MXC_F_GCR_PCLKDIS0_TMR2                        ((uint32_t)(0x1UL << MXC_F_GCR_PCLKDIS0_TMR2_POS)) /**< PCLKDIS0_TMR2 Mask */

#define MXC_F_GCR_PCLKDIS0_TMR3_POS                    18 /**< PCLKDIS0_TMR3 Position */
#define MXC_F_GCR_PCLKDIS0_TMR3                        ((uint32_t)(0x1UL << MXC_F_GCR_PCLKDIS0_TMR3_POS)) /**< PCLKDIS0_TMR3 Mask */

#define MXC_F_GCR_PCLKDIS0_TMR4_POS                    19 /**< PCLKDIS0_TMR4 Position */
#define MXC_F_GCR_PCLKDIS0_TMR4                        ((uint32_t)(0x1UL << MXC_F_GCR_PCLKDIS0_TMR4_POS)) /**< PCLKDIS0_TMR4 Mask */

#define MXC_F_GCR_PCLKDIS0_TMR5_POS                    20 /**< PCLKDIS0_TMR5 Position */
#define MXC_F_GCR_PCLKDIS0_TMR5                        ((uint32_t)(0x1UL << MXC_F_GCR_PCLKDIS0_TMR5_POS)) /**< PCLKDIS0_TMR5 Mask */

#define MXC_F_GCR_PCLKDIS0_SKBD_POS                    22 /**< PCLKDIS0_SKBD Position */
#define MXC_F_GCR_PCLKDIS0_SKBD                        ((uint32_t)(0x1UL << MXC_F_GCR_PCLKDIS0_SKBD_POS)) /**< PCLKDIS0_SKBD Mask */

#define MXC_F_GCR_PCLKDIS0_ADC_POS                     23 /**< PCLKDIS0_ADC Position */
#define MXC_F_GCR_PCLKDIS0_ADC                         ((uint32_t)(0x1UL << MXC_F_GCR_PCLKDIS0_ADC_POS)) /**< PCLKDIS0_ADC Mask */

#define MXC_F_GCR_PCLKDIS0_TMR6_POS                    24 /**< PCLKDIS0_TMR6 Position */
#define MXC_F_GCR_PCLKDIS0_TMR6                        ((uint32_t)(0x1UL << MXC_F_GCR_PCLKDIS0_TMR6_POS)) /**< PCLKDIS0_TMR6 Mask */

#define MXC_F_GCR_PCLKDIS0_TMR7_POS                    25 /**< PCLKDIS0_TMR7 Position */
#define MXC_F_GCR_PCLKDIS0_TMR7                        ((uint32_t)(0x1UL << MXC_F_GCR_PCLKDIS0_TMR7_POS)) /**< PCLKDIS0_TMR7 Mask */

#define MXC_F_GCR_PCLKDIS0_HTMR0_POS                   26 /**< PCLKDIS0_HTMR0 Position */
#define MXC_F_GCR_PCLKDIS0_HTMR0                       ((uint32_t)(0x1UL << MXC_F_GCR_PCLKDIS0_HTMR0_POS)) /**< PCLKDIS0_HTMR0 Mask */

#define MXC_F_GCR_PCLKDIS0_HTMR1_POS                   27 /**< PCLKDIS0_HTMR1 Position */
#define MXC_F_GCR_PCLKDIS0_HTMR1                       ((uint32_t)(0x1UL << MXC_F_GCR_PCLKDIS0_HTMR1_POS)) /**< PCLKDIS0_HTMR1 Mask */

#define MXC_F_GCR_PCLKDIS0_I2C1_POS                    28 /**< PCLKDIS0_I2C1 Position */
#define MXC_F_GCR_PCLKDIS0_I2C1                        ((uint32_t)(0x1UL << MXC_F_GCR_PCLKDIS0_I2C1_POS)) /**< PCLKDIS0_I2C1 Mask */

#define MXC_F_GCR_PCLKDIS0_PT_POS                      29 /**< PCLKDIS0_PT Position */
#define MXC_F_GCR_PCLKDIS0_PT                          ((uint32_t)(0x1UL << MXC_F_GCR_PCLKDIS0_PT_POS)) /**< PCLKDIS0_PT Mask */

#define MXC_F_GCR_PCLKDIS0_SPIXIP_POS                  30 /**< PCLKDIS0_SPIXIP Position */
#define MXC_F_GCR_PCLKDIS0_SPIXIP                      ((uint32_t)(0x1UL << MXC_F_GCR_PCLKDIS0_SPIXIP_POS)) /**< PCLKDIS0_SPIXIP Mask */

#define MXC_F_GCR_PCLKDIS0_SPIXIPC_POS                 31 /**< PCLKDIS0_SPIXIPC Position */
#define MXC_F_GCR_PCLKDIS0_SPIXIPC                     ((uint32_t)(0x1UL << MXC_F_GCR_PCLKDIS0_SPIXIPC_POS)) /**< PCLKDIS0_SPIXIPC Mask */

/**@} end of group GCR_PCLKDIS0_Register */

/**
 * @ingroup  gcr_registers
 * @defgroup GCR_MEMCTRL GCR_MEMCTRL
 * @brief    Memory Clock Control Register.
 * @{
 */
#define MXC_F_GCR_MEMCTRL_FWS_POS                      0 /**< MEMCTRL_FWS Position */
#define MXC_F_GCR_MEMCTRL_FWS                          ((uint32_t)(0x7UL << MXC_F_GCR_MEMCTRL_FWS_POS)) /**< MEMCTRL_FWS Mask */

#define MXC_F_GCR_MEMCTRL_SRAM_WS_POS                  4 /**< MEMCTRL_SRAM_WS Position */
#define MXC_F_GCR_MEMCTRL_SRAM_WS                      ((uint32_t)(0x1UL << MXC_F_GCR_MEMCTRL_SRAM_WS_POS)) /**< MEMCTRL_SRAM_WS Mask */

#define MXC_F_GCR_MEMCTRL_ROM1_WS_POS                  7 /**< MEMCTRL_ROM1_WS Position */
#define MXC_F_GCR_MEMCTRL_ROM1_WS                      ((uint32_t)(0x1UL << MXC_F_GCR_MEMCTRL_ROM1_WS_POS)) /**< MEMCTRL_ROM1_WS Mask */

#define MXC_F_GCR_MEMCTRL_RAM0_WS_POS                  8 /**< MEMCTRL_RAM0_WS Position */
#define MXC_F_GCR_MEMCTRL_RAM0_WS                      ((uint32_t)(0x1UL << MXC_F_GCR_MEMCTRL_RAM0_WS_POS)) /**< MEMCTRL_RAM0_WS Mask */

#define MXC_F_GCR_MEMCTRL_RAM1_WS_POS                  9 /**< MEMCTRL_RAM1_WS Position */
#define MXC_F_GCR_MEMCTRL_RAM1_WS                      ((uint32_t)(0x1UL << MXC_F_GCR_MEMCTRL_RAM1_WS_POS)) /**< MEMCTRL_RAM1_WS Mask */

#define MXC_F_GCR_MEMCTRL_RAM2_WS_POS                  10 /**< MEMCTRL_RAM2_WS Position */
#define MXC_F_GCR_MEMCTRL_RAM2_WS                      ((uint32_t)(0x1UL << MXC_F_GCR_MEMCTRL_RAM2_WS_POS)) /**< MEMCTRL_RAM2_WS Mask */

#define MXC_F_GCR_MEMCTRL_RAM3_WS_POS                  11 /**< MEMCTRL_RAM3_WS Position */
#define MXC_F_GCR_MEMCTRL_RAM3_WS                      ((uint32_t)(0x1UL << MXC_F_GCR_MEMCTRL_RAM3_WS_POS)) /**< MEMCTRL_RAM3_WS Mask */

#define MXC_F_GCR_MEMCTRL_RAM4_WS_POS                  12 /**< MEMCTRL_RAM4_WS Position */
#define MXC_F_GCR_MEMCTRL_RAM4_WS                      ((uint32_t)(0x1UL << MXC_F_GCR_MEMCTRL_RAM4_WS_POS)) /**< MEMCTRL_RAM4_WS Mask */

#define MXC_F_GCR_MEMCTRL_RAM5_WS_POS                  13 /**< MEMCTRL_RAM5_WS Position */
#define MXC_F_GCR_MEMCTRL_RAM5_WS                      ((uint32_t)(0x1UL << MXC_F_GCR_MEMCTRL_RAM5_WS_POS)) /**< MEMCTRL_RAM5_WS Mask */

#define MXC_F_GCR_MEMCTRL_RAM0LS_EN_POS                16 /**< MEMCTRL_RAM0LS_EN Position */
#define MXC_F_GCR_MEMCTRL_RAM0LS_EN                    ((uint32_t)(0x1UL << MXC_F_GCR_MEMCTRL_RAM0LS_EN_POS)) /**< MEMCTRL_RAM0LS_EN Mask */

#define MXC_F_GCR_MEMCTRL_RAM1LS_EN_POS                17 /**< MEMCTRL_RAM1LS_EN Position */
#define MXC_F_GCR_MEMCTRL_RAM1LS_EN                    ((uint32_t)(0x1UL << MXC_F_GCR_MEMCTRL_RAM1LS_EN_POS)) /**< MEMCTRL_RAM1LS_EN Mask */

#define MXC_F_GCR_MEMCTRL_RAM2LS_EN_POS                18 /**< MEMCTRL_RAM2LS_EN Position */
#define MXC_F_GCR_MEMCTRL_RAM2LS_EN                    ((uint32_t)(0x1UL << MXC_F_GCR_MEMCTRL_RAM2LS_EN_POS)) /**< MEMCTRL_RAM2LS_EN Mask */

#define MXC_F_GCR_MEMCTRL_RAM3LS_EN_POS                19 /**< MEMCTRL_RAM3LS_EN Position */
#define MXC_F_GCR_MEMCTRL_RAM3LS_EN                    ((uint32_t)(0x1UL << MXC_F_GCR_MEMCTRL_RAM3LS_EN_POS)) /**< MEMCTRL_RAM3LS_EN Mask */

#define MXC_F_GCR_MEMCTRL_RAM4LS_EN_POS                20 /**< MEMCTRL_RAM4LS_EN Position */
#define MXC_F_GCR_MEMCTRL_RAM4LS_EN                    ((uint32_t)(0x1UL << MXC_F_GCR_MEMCTRL_RAM4LS_EN_POS)) /**< MEMCTRL_RAM4LS_EN Mask */

#define MXC_F_GCR_MEMCTRL_RAM5LS_EN_POS                21 /**< MEMCTRL_RAM5LS_EN Position */
#define MXC_F_GCR_MEMCTRL_RAM5LS_EN                    ((uint32_t)(0x1UL << MXC_F_GCR_MEMCTRL_RAM5LS_EN_POS)) /**< MEMCTRL_RAM5LS_EN Mask */

#define MXC_F_GCR_MEMCTRL_ICCLS_EN_POS                 24 /**< MEMCTRL_ICCLS_EN Position */
#define MXC_F_GCR_MEMCTRL_ICCLS_EN                     ((uint32_t)(0x1UL << MXC_F_GCR_MEMCTRL_ICCLS_EN_POS)) /**< MEMCTRL_ICCLS_EN Mask */

#define MXC_F_GCR_MEMCTRL_ICCXIPLS_EN_POS              25 /**< MEMCTRL_ICCXIPLS_EN Position */
#define MXC_F_GCR_MEMCTRL_ICCXIPLS_EN                  ((uint32_t)(0x1UL << MXC_F_GCR_MEMCTRL_ICCXIPLS_EN_POS)) /**< MEMCTRL_ICCXIPLS_EN Mask */

#define MXC_F_GCR_MEMCTRL_SRCCLS_EN_POS                26 /**< MEMCTRL_SRCCLS_EN Position */
#define MXC_F_GCR_MEMCTRL_SRCCLS_EN                    ((uint32_t)(0x1UL << MXC_F_GCR_MEMCTRL_SRCCLS_EN_POS)) /**< MEMCTRL_SRCCLS_EN Mask */

#define MXC_F_GCR_MEMCTRL_CRYPTOLS_EN_POS              27 /**< MEMCTRL_CRYPTOLS_EN Position */
#define MXC_F_GCR_MEMCTRL_CRYPTOLS_EN                  ((uint32_t)(0x1UL << MXC_F_GCR_MEMCTRL_CRYPTOLS_EN_POS)) /**< MEMCTRL_CRYPTOLS_EN Mask */

#define MXC_F_GCR_MEMCTRL_USBLS_EN_POS                 28 /**< MEMCTRL_USBLS_EN Position */
#define MXC_F_GCR_MEMCTRL_USBLS_EN                     ((uint32_t)(0x1UL << MXC_F_GCR_MEMCTRL_USBLS_EN_POS)) /**< MEMCTRL_USBLS_EN Mask */

#define MXC_F_GCR_MEMCTRL_ROM0LS_EN_POS                29 /**< MEMCTRL_ROM0LS_EN Position */
#define MXC_F_GCR_MEMCTRL_ROM0LS_EN                    ((uint32_t)(0x1UL << MXC_F_GCR_MEMCTRL_ROM0LS_EN_POS)) /**< MEMCTRL_ROM0LS_EN Mask */

#define MXC_F_GCR_MEMCTRL_ROM1LS_EN_POS                30 /**< MEMCTRL_ROM1LS_EN Position */
#define MXC_F_GCR_MEMCTRL_ROM1LS_EN                    ((uint32_t)(0x1UL << MXC_F_GCR_MEMCTRL_ROM1LS_EN_POS)) /**< MEMCTRL_ROM1LS_EN Mask */

#define MXC_F_GCR_MEMCTRL_MAALS_EN_POS                 31 /**< MEMCTRL_MAALS_EN Position */
#define MXC_F_GCR_MEMCTRL_MAALS_EN                     ((uint32_t)(0x1UL << MXC_F_GCR_MEMCTRL_MAALS_EN_POS)) /**< MEMCTRL_MAALS_EN Mask */

/**@} end of group GCR_MEMCTRL_Register */

/**
 * @ingroup  gcr_registers
 * @defgroup GCR_MEMZ GCR_MEMZ
 * @brief    Memory Zeroize Control.
 * @{
 */
#define MXC_F_GCR_MEMZ_RAM0_POS                        0 /**< MEMZ_RAM0 Position */
#define MXC_F_GCR_MEMZ_RAM0                            ((uint32_t)(0x1UL << MXC_F_GCR_MEMZ_RAM0_POS)) /**< MEMZ_RAM0 Mask */

#define MXC_F_GCR_MEMZ_RAM1_POS                        1 /**< MEMZ_RAM1 Position */
#define MXC_F_GCR_MEMZ_RAM1                            ((uint32_t)(0x1UL << MXC_F_GCR_MEMZ_RAM1_POS)) /**< MEMZ_RAM1 Mask */

#define MXC_F_GCR_MEMZ_RAM2_POS                        2 /**< MEMZ_RAM2 Position */
#define MXC_F_GCR_MEMZ_RAM2                            ((uint32_t)(0x1UL << MXC_F_GCR_MEMZ_RAM2_POS)) /**< MEMZ_RAM2 Mask */

#define MXC_F_GCR_MEMZ_RAM3_POS                        3 /**< MEMZ_RAM3 Position */
#define MXC_F_GCR_MEMZ_RAM3                            ((uint32_t)(0x1UL << MXC_F_GCR_MEMZ_RAM3_POS)) /**< MEMZ_RAM3 Mask */

#define MXC_F_GCR_MEMZ_RAM4_POS                        4 /**< MEMZ_RAM4 Position */
#define MXC_F_GCR_MEMZ_RAM4                            ((uint32_t)(0x1UL << MXC_F_GCR_MEMZ_RAM4_POS)) /**< MEMZ_RAM4 Mask */

#define MXC_F_GCR_MEMZ_RAM5_POS                        5 /**< MEMZ_RAM5 Position */
#define MXC_F_GCR_MEMZ_RAM5                            ((uint32_t)(0x1UL << MXC_F_GCR_MEMZ_RAM5_POS)) /**< MEMZ_RAM5 Mask */

#define MXC_F_GCR_MEMZ_RAM6_POS                        6 /**< MEMZ_RAM6 Position */
#define MXC_F_GCR_MEMZ_RAM6                            ((uint32_t)(0x1UL << MXC_F_GCR_MEMZ_RAM6_POS)) /**< MEMZ_RAM6 Mask */

#define MXC_F_GCR_MEMZ_ICC_POS                         8 /**< MEMZ_ICC Position */
#define MXC_F_GCR_MEMZ_ICC                             ((uint32_t)(0x1UL << MXC_F_GCR_MEMZ_ICC_POS)) /**< MEMZ_ICC Mask */

#define MXC_F_GCR_MEMZ_ICCXIP_POS                      9 /**< MEMZ_ICCXIP Position */
#define MXC_F_GCR_MEMZ_ICCXIP                          ((uint32_t)(0x1UL << MXC_F_GCR_MEMZ_ICCXIP_POS)) /**< MEMZ_ICCXIP Mask */

#define MXC_F_GCR_MEMZ_SRCCDATA_POS                    10 /**< MEMZ_SRCCDATA Position */
#define MXC_F_GCR_MEMZ_SRCCDATA                        ((uint32_t)(0x1UL << MXC_F_GCR_MEMZ_SRCCDATA_POS)) /**< MEMZ_SRCCDATA Mask */

#define MXC_F_GCR_MEMZ_SRCCTAG_POS                     11 /**< MEMZ_SRCCTAG Position */
#define MXC_F_GCR_MEMZ_SRCCTAG                         ((uint32_t)(0x1UL << MXC_F_GCR_MEMZ_SRCCTAG_POS)) /**< MEMZ_SRCCTAG Mask */

#define MXC_F_GCR_MEMZ_CRYPTO_POS                      12 /**< MEMZ_CRYPTO Position */
#define MXC_F_GCR_MEMZ_CRYPTO                          ((uint32_t)(0x1UL << MXC_F_GCR_MEMZ_CRYPTO_POS)) /**< MEMZ_CRYPTO Mask */

#define MXC_F_GCR_MEMZ_USBFIFO_POS                     13 /**< MEMZ_USBFIFO Position */
#define MXC_F_GCR_MEMZ_USBFIFO                         ((uint32_t)(0x1UL << MXC_F_GCR_MEMZ_USBFIFO_POS)) /**< MEMZ_USBFIFO Mask */

#define MXC_F_GCR_MEMZ_MAARAM_POS                      14 /**< MEMZ_MAARAM Position */
#define MXC_F_GCR_MEMZ_MAARAM                          ((uint32_t)(0x1UL << MXC_F_GCR_MEMZ_MAARAM_POS)) /**< MEMZ_MAARAM Mask */

/**@} end of group GCR_MEMZ_Register */

/**
 * @ingroup  gcr_registers
 * @defgroup GCR_SCCLKCTRL GCR_SCCLKCTRL
 * @brief    Smart Card Clock Control.
 * @{
 */
#define MXC_F_GCR_SCCLKCTRL_SC0CLK_DIV_POS             0 /**< SCCLKCTRL_SC0CLK_DIV Position */
#define MXC_F_GCR_SCCLKCTRL_SC0CLK_DIV                 ((uint32_t)(0x3FUL << MXC_F_GCR_SCCLKCTRL_SC0CLK_DIV_POS)) /**< SCCLKCTRL_SC0CLK_DIV Mask */

#define MXC_F_GCR_SCCLKCTRL_SC1CLK_DIV_POS             8 /**< SCCLKCTRL_SC1CLK_DIV Position */
#define MXC_F_GCR_SCCLKCTRL_SC1CLK_DIV                 ((uint32_t)(0x3FUL << MXC_F_GCR_SCCLKCTRL_SC1CLK_DIV_POS)) /**< SCCLKCTRL_SC1CLK_DIV Mask */

/**@} end of group GCR_SCCLKCTRL_Register */

/**
 * @ingroup  gcr_registers
 * @defgroup GCR_SYSST GCR_SYSST
 * @brief    System Status Register.
 * @{
 */
#define MXC_F_GCR_SYSST_ICELOCK_POS                    0 /**< SYSST_ICELOCK Position */
#define MXC_F_GCR_SYSST_ICELOCK                        ((uint32_t)(0x1UL << MXC_F_GCR_SYSST_ICELOCK_POS)) /**< SYSST_ICELOCK Mask */

#define MXC_F_GCR_SYSST_CODEAUTHERR_POS                1 /**< SYSST_CODEAUTHERR Position */
#define MXC_F_GCR_SYSST_CODEAUTHERR                    ((uint32_t)(0x1UL << MXC_F_GCR_SYSST_CODEAUTHERR_POS)) /**< SYSST_CODEAUTHERR Mask */

#define MXC_F_GCR_SYSST_DATAAUTHERR_POS                2 /**< SYSST_DATAAUTHERR Position */
#define MXC_F_GCR_SYSST_DATAAUTHERR                    ((uint32_t)(0x1UL << MXC_F_GCR_SYSST_DATAAUTHERR_POS)) /**< SYSST_DATAAUTHERR Mask */

#define MXC_F_GCR_SYSST_SCMEMF_POS                     5 /**< SYSST_SCMEMF Position */
#define MXC_F_GCR_SYSST_SCMEMF                         ((uint32_t)(0x1UL << MXC_F_GCR_SYSST_SCMEMF_POS)) /**< SYSST_SCMEMF Mask */

/**@} end of group GCR_SYSST_Register */

/**
 * @ingroup  gcr_registers
 * @defgroup GCR_RST1 GCR_RST1
 * @brief    Reset 1.
 * @{
 */
#define MXC_F_GCR_RST1_I2C1_POS                        0 /**< RST1_I2C1 Position */
#define MXC_F_GCR_RST1_I2C1                            ((uint32_t)(0x1UL << MXC_F_GCR_RST1_I2C1_POS)) /**< RST1_I2C1 Mask */

#define MXC_F_GCR_RST1_PT_POS                          1 /**< RST1_PT Position */
#define MXC_F_GCR_RST1_PT                              ((uint32_t)(0x1UL << MXC_F_GCR_RST1_PT_POS)) /**< RST1_PT Mask */

#define MXC_F_GCR_RST1_SPIXIP_POS                      3 /**< RST1_SPIXIP Position */
#define MXC_F_GCR_RST1_SPIXIP                          ((uint32_t)(0x1UL << MXC_F_GCR_RST1_SPIXIP_POS)) /**< RST1_SPIXIP Mask */

#define MXC_F_GCR_RST1_SPIXIPC_POS                     4 /**< RST1_SPIXIPC Position */
#define MXC_F_GCR_RST1_SPIXIPC                         ((uint32_t)(0x1UL << MXC_F_GCR_RST1_SPIXIPC_POS)) /**< RST1_SPIXIPC Mask */

#define MXC_F_GCR_RST1_GPIO3_POS                       5 /**< RST1_GPIO3 Position */
#define MXC_F_GCR_RST1_GPIO3                           ((uint32_t)(0x1UL << MXC_F_GCR_RST1_GPIO3_POS)) /**< RST1_GPIO3 Mask */

#define MXC_F_GCR_RST1_SDHC_POS                        6 /**< RST1_SDHC Position */
#define MXC_F_GCR_RST1_SDHC                            ((uint32_t)(0x1UL << MXC_F_GCR_RST1_SDHC_POS)) /**< RST1_SDHC Mask */

#define MXC_F_GCR_RST1_OWIRE_POS                       7 /**< RST1_OWIRE Position */
#define MXC_F_GCR_RST1_OWIRE                           ((uint32_t)(0x1UL << MXC_F_GCR_RST1_OWIRE_POS)) /**< RST1_OWIRE Mask */

#define MXC_F_GCR_RST1_WDT1_POS                        8 /**< RST1_WDT1 Position */
#define MXC_F_GCR_RST1_WDT1                            ((uint32_t)(0x1UL << MXC_F_GCR_RST1_WDT1_POS)) /**< RST1_WDT1 Mask */

#define MXC_F_GCR_RST1_SPI3_POS                        9 /**< RST1_SPI3 Position */
#define MXC_F_GCR_RST1_SPI3                            ((uint32_t)(0x1UL << MXC_F_GCR_RST1_SPI3_POS)) /**< RST1_SPI3 Mask */

#define MXC_F_GCR_RST1_I2S_POS                         13 /**< RST1_I2S Position */
#define MXC_F_GCR_RST1_I2S                             ((uint32_t)(0x1UL << MXC_F_GCR_RST1_I2S_POS)) /**< RST1_I2S Mask */

#define MXC_F_GCR_RST1_AC_POS                          14 /**< RST1_AC Position */
#define MXC_F_GCR_RST1_AC                              ((uint32_t)(0x1UL << MXC_F_GCR_RST1_AC_POS)) /**< RST1_AC Mask */

#define MXC_F_GCR_RST1_SPIXIPD_POS                     15 /**< RST1_SPIXIPD Position */
#define MXC_F_GCR_RST1_SPIXIPD                         ((uint32_t)(0x1UL << MXC_F_GCR_RST1_SPIXIPD_POS)) /**< RST1_SPIXIPD Mask */

#define MXC_F_GCR_RST1_SEMA_POS                        16 /**< RST1_SEMA Position */
#define MXC_F_GCR_RST1_SEMA                            ((uint32_t)(0x1UL << MXC_F_GCR_RST1_SEMA_POS)) /**< RST1_SEMA Mask */

#define MXC_F_GCR_RST1_I2C2_POS                        17 /**< RST1_I2C2 Position */
#define MXC_F_GCR_RST1_I2C2                            ((uint32_t)(0x1UL << MXC_F_GCR_RST1_I2C2_POS)) /**< RST1_I2C2 Mask */

#define MXC_F_GCR_RST1_UART3_POS                       18 /**< RST1_UART3 Position */
#define MXC_F_GCR_RST1_UART3                           ((uint32_t)(0x1UL << MXC_F_GCR_RST1_UART3_POS)) /**< RST1_UART3 Mask */

#define MXC_F_GCR_RST1_UART4_POS                       19 /**< RST1_UART4 Position */
#define MXC_F_GCR_RST1_UART4                           ((uint32_t)(0x1UL << MXC_F_GCR_RST1_UART4_POS)) /**< RST1_UART4 Mask */

#define MXC_F_GCR_RST1_UART5_POS                       20 /**< RST1_UART5 Position */
#define MXC_F_GCR_RST1_UART5                           ((uint32_t)(0x1UL << MXC_F_GCR_RST1_UART5_POS)) /**< RST1_UART5 Mask */

#define MXC_F_GCR_RST1_SKBD_POS                        21 /**< RST1_SKBD Position */
#define MXC_F_GCR_RST1_SKBD                            ((uint32_t)(0x1UL << MXC_F_GCR_RST1_SKBD_POS)) /**< RST1_SKBD Mask */

#define MXC_F_GCR_RST1_MSRADC_POS                      22 /**< RST1_MSRADC Position */
#define MXC_F_GCR_RST1_MSRADC                          ((uint32_t)(0x1UL << MXC_F_GCR_RST1_MSRADC_POS)) /**< RST1_MSRADC Mask */

#define MXC_F_GCR_RST1_SC0_POS                         23 /**< RST1_SC0 Position */
#define MXC_F_GCR_RST1_SC0                             ((uint32_t)(0x1UL << MXC_F_GCR_RST1_SC0_POS)) /**< RST1_SC0 Mask */

#define MXC_F_GCR_RST1_SC1_POS                         24 /**< RST1_SC1 Position */
#define MXC_F_GCR_RST1_SC1                             ((uint32_t)(0x1UL << MXC_F_GCR_RST1_SC1_POS)) /**< RST1_SC1 Mask */

#define MXC_F_GCR_RST1_NFC_POS                         25 /**< RST1_NFC Position */
#define MXC_F_GCR_RST1_NFC                             ((uint32_t)(0x1UL << MXC_F_GCR_RST1_NFC_POS)) /**< RST1_NFC Mask */

#define MXC_F_GCR_RST1_EMAC_POS                        26 /**< RST1_EMAC Position */
#define MXC_F_GCR_RST1_EMAC                            ((uint32_t)(0x1UL << MXC_F_GCR_RST1_EMAC_POS)) /**< RST1_EMAC Mask */

#define MXC_F_GCR_RST1_CAMERAIF_POS                    27 /**< RST1_CAMERAIF Position */
#define MXC_F_GCR_RST1_CAMERAIF                        ((uint32_t)(0x1UL << MXC_F_GCR_RST1_CAMERAIF_POS)) /**< RST1_CAMERAIF Mask */

#define MXC_F_GCR_RST1_HTMR0_POS                       28 /**< RST1_HTMR0 Position */
#define MXC_F_GCR_RST1_HTMR0                           ((uint32_t)(0x1UL << MXC_F_GCR_RST1_HTMR0_POS)) /**< RST1_HTMR0 Mask */

#define MXC_F_GCR_RST1_HTMR1_POS                       29 /**< RST1_HTMR1 Position */
#define MXC_F_GCR_RST1_HTMR1                           ((uint32_t)(0x1UL << MXC_F_GCR_RST1_HTMR1_POS)) /**< RST1_HTMR1 Mask */

#define MXC_F_GCR_RST1_CPU2_POS                        30 /**< RST1_CPU2 Position */
#define MXC_F_GCR_RST1_CPU2                            ((uint32_t)(0x1UL << MXC_F_GCR_RST1_CPU2_POS)) /**< RST1_CPU2 Mask */

#define MXC_F_GCR_RST1_CPU1_POS                        31 /**< RST1_CPU1 Position */
#define MXC_F_GCR_RST1_CPU1                            ((uint32_t)(0x1UL << MXC_F_GCR_RST1_CPU1_POS)) /**< RST1_CPU1 Mask */

/**@} end of group GCR_RST1_Register */

/**
 * @ingroup  gcr_registers
 * @defgroup GCR_PCLKDIS1 GCR_PCLKDIS1
 * @brief    Peripheral Clock Disable.
 * @{
 */
#define MXC_F_GCR_PCLKDIS1_UART2_POS                   1 /**< PCLKDIS1_UART2 Position */
#define MXC_F_GCR_PCLKDIS1_UART2                       ((uint32_t)(0x1UL << MXC_F_GCR_PCLKDIS1_UART2_POS)) /**< PCLKDIS1_UART2 Mask */

#define MXC_F_GCR_PCLKDIS1_TRNG_POS                    2 /**< PCLKDIS1_TRNG Position */
#define MXC_F_GCR_PCLKDIS1_TRNG                        ((uint32_t)(0x1UL << MXC_F_GCR_PCLKDIS1_TRNG_POS)) /**< PCLKDIS1_TRNG Mask */

#define MXC_F_GCR_PCLKDIS1_WDT0_POS                    4 /**< PCLKDIS1_WDT0 Position */
#define MXC_F_GCR_PCLKDIS1_WDT0                        ((uint32_t)(0x1UL << MXC_F_GCR_PCLKDIS1_WDT0_POS)) /**< PCLKDIS1_WDT0 Mask */

#define MXC_F_GCR_PCLKDIS1_WDT1_POS                    5 /**< PCLKDIS1_WDT1 Position */
#define MXC_F_GCR_PCLKDIS1_WDT1                        ((uint32_t)(0x1UL << MXC_F_GCR_PCLKDIS1_WDT1_POS)) /**< PCLKDIS1_WDT1 Mask */

#define MXC_F_GCR_PCLKDIS1_GPIO3_POS                   6 /**< PCLKDIS1_GPIO3 Position */
#define MXC_F_GCR_PCLKDIS1_GPIO3                       ((uint32_t)(0x1UL << MXC_F_GCR_PCLKDIS1_GPIO3_POS)) /**< PCLKDIS1_GPIO3 Mask */

#define MXC_F_GCR_PCLKDIS1_SRCC_POS                    7 /**< PCLKDIS1_SRCC Position */
#define MXC_F_GCR_PCLKDIS1_SRCC                        ((uint32_t)(0x1UL << MXC_F_GCR_PCLKDIS1_SRCC_POS)) /**< PCLKDIS1_SRCC Mask */

#define MXC_F_GCR_PCLKDIS1_CAMERAIF_POS                8 /**< PCLKDIS1_CAMERAIF Position */
#define MXC_F_GCR_PCLKDIS1_CAMERAIF                    ((uint32_t)(0x1UL << MXC_F_GCR_PCLKDIS1_CAMERAIF_POS)) /**< PCLKDIS1_CAMERAIF Mask */

#define MXC_F_GCR_PCLKDIS1_SEMA_POS                    9 /**< PCLKDIS1_SEMA Position */
#define MXC_F_GCR_PCLKDIS1_SEMA                        ((uint32_t)(0x1UL << MXC_F_GCR_PCLKDIS1_SEMA_POS)) /**< PCLKDIS1_SEMA Mask */

#define MXC_F_GCR_PCLKDIS1_SDHC_POS                    10 /**< PCLKDIS1_SDHC Position */
#define MXC_F_GCR_PCLKDIS1_SDHC                        ((uint32_t)(0x1UL << MXC_F_GCR_PCLKDIS1_SDHC_POS)) /**< PCLKDIS1_SDHC Mask */

#define MXC_F_GCR_PCLKDIS1_OWIRE_POS                   13 /**< PCLKDIS1_OWIRE Position */
#define MXC_F_GCR_PCLKDIS1_OWIRE                       ((uint32_t)(0x1UL << MXC_F_GCR_PCLKDIS1_OWIRE_POS)) /**< PCLKDIS1_OWIRE Mask */

#define MXC_F_GCR_PCLKDIS1_SPI3_POS                    14 /**< PCLKDIS1_SPI3 Position */
#define MXC_F_GCR_PCLKDIS1_SPI3                        ((uint32_t)(0x1UL << MXC_F_GCR_PCLKDIS1_SPI3_POS)) /**< PCLKDIS1_SPI3 Mask */

#define MXC_F_GCR_PCLKDIS1_I2S_POS                     16 /**< PCLKDIS1_I2S Position */
#define MXC_F_GCR_PCLKDIS1_I2S                         ((uint32_t)(0x1UL << MXC_F_GCR_PCLKDIS1_I2S_POS)) /**< PCLKDIS1_I2S Mask */

#define MXC_F_GCR_PCLKDIS1_SPIXIPD_POS                 20 /**< PCLKDIS1_SPIXIPD Position */
#define MXC_F_GCR_PCLKDIS1_SPIXIPD                     ((uint32_t)(0x1UL << MXC_F_GCR_PCLKDIS1_SPIXIPD_POS)) /**< PCLKDIS1_SPIXIPD Mask */

#define MXC_F_GCR_PCLKDIS1_I2C2_POS                    21 /**< PCLKDIS1_I2C2 Position */
#define MXC_F_GCR_PCLKDIS1_I2C2                        ((uint32_t)(0x1UL << MXC_F_GCR_PCLKDIS1_I2C2_POS)) /**< PCLKDIS1_I2C2 Mask */

#define MXC_F_GCR_PCLKDIS1_UART3_POS                   22 /**< PCLKDIS1_UART3 Position */
#define MXC_F_GCR_PCLKDIS1_UART3                       ((uint32_t)(0x1UL << MXC_F_GCR_PCLKDIS1_UART3_POS)) /**< PCLKDIS1_UART3 Mask */

#define MXC_F_GCR_PCLKDIS1_UART4_POS                   23 /**< PCLKDIS1_UART4 Position */
#define MXC_F_GCR_PCLKDIS1_UART4                       ((uint32_t)(0x1UL << MXC_F_GCR_PCLKDIS1_UART4_POS)) /**< PCLKDIS1_UART4 Mask */

#define MXC_F_GCR_PCLKDIS1_UART5_POS                   24 /**< PCLKDIS1_UART5 Position */
#define MXC_F_GCR_PCLKDIS1_UART5                       ((uint32_t)(0x1UL << MXC_F_GCR_PCLKDIS1_UART5_POS)) /**< PCLKDIS1_UART5 Mask */

#define MXC_F_GCR_PCLKDIS1_MSRADC_POS                  25 /**< PCLKDIS1_MSRADC Position */
#define MXC_F_GCR_PCLKDIS1_MSRADC                      ((uint32_t)(0x1UL << MXC_F_GCR_PCLKDIS1_MSRADC_POS)) /**< PCLKDIS1_MSRADC Mask */

#define MXC_F_GCR_PCLKDIS1_SC0_POS                     26 /**< PCLKDIS1_SC0 Position */
#define MXC_F_GCR_PCLKDIS1_SC0                         ((uint32_t)(0x1UL << MXC_F_GCR_PCLKDIS1_SC0_POS)) /**< PCLKDIS1_SC0 Mask */

#define MXC_F_GCR_PCLKDIS1_SC1_POS                     27 /**< PCLKDIS1_SC1 Position */
#define MXC_F_GCR_PCLKDIS1_SC1                         ((uint32_t)(0x1UL << MXC_F_GCR_PCLKDIS1_SC1_POS)) /**< PCLKDIS1_SC1 Mask */

#define MXC_F_GCR_PCLKDIS1_NFC_POS                     28 /**< PCLKDIS1_NFC Position */
#define MXC_F_GCR_PCLKDIS1_NFC                         ((uint32_t)(0x1UL << MXC_F_GCR_PCLKDIS1_NFC_POS)) /**< PCLKDIS1_NFC Mask */

#define MXC_F_GCR_PCLKDIS1_EMAC_POS                    29 /**< PCLKDIS1_EMAC Position */
#define MXC_F_GCR_PCLKDIS1_EMAC                        ((uint32_t)(0x1UL << MXC_F_GCR_PCLKDIS1_EMAC_POS)) /**< PCLKDIS1_EMAC Mask */

#define MXC_F_GCR_PCLKDIS1_CPU2_POS                    30 /**< PCLKDIS1_CPU2 Position */
#define MXC_F_GCR_PCLKDIS1_CPU2                        ((uint32_t)(0x1UL << MXC_F_GCR_PCLKDIS1_CPU2_POS)) /**< PCLKDIS1_CPU2 Mask */

#define MXC_F_GCR_PCLKDIS1_CPU1_POS                    31 /**< PCLKDIS1_CPU1 Position */
#define MXC_F_GCR_PCLKDIS1_CPU1                        ((uint32_t)(0x1UL << MXC_F_GCR_PCLKDIS1_CPU1_POS)) /**< PCLKDIS1_CPU1 Mask */

/**@} end of group GCR_PCLKDIS1_Register */

/**
 * @ingroup  gcr_registers
 * @defgroup GCR_EVENTEN GCR_EVENTEN
 * @brief    Event Enable Register.
 * @{
 */
#define MXC_F_GCR_EVENTEN_DMA_POS                      0 /**< EVENTEN_DMA Position */
#define MXC_F_GCR_EVENTEN_DMA                          ((uint32_t)(0x1UL << MXC_F_GCR_EVENTEN_DMA_POS)) /**< EVENTEN_DMA Mask */

#define MXC_F_GCR_EVENTEN_RX_POS                       1 /**< EVENTEN_RX Position */
#define MXC_F_GCR_EVENTEN_RX                           ((uint32_t)(0x1UL << MXC_F_GCR_EVENTEN_RX_POS)) /**< EVENTEN_RX Mask */

#define MXC_F_GCR_EVENTEN_TX_POS                       2 /**< EVENTEN_TX Position */
#define MXC_F_GCR_EVENTEN_TX                           ((uint32_t)(0x1UL << MXC_F_GCR_EVENTEN_TX_POS)) /**< EVENTEN_TX Mask */

/**@} end of group GCR_EVENTEN_Register */

/**
 * @ingroup  gcr_registers
 * @defgroup GCR_REVISION GCR_REVISION
 * @brief    Revision Register.
 * @{
 */
#define MXC_F_GCR_REVISION_REVISION_POS                0 /**< REVISION_REVISION Position */
#define MXC_F_GCR_REVISION_REVISION                    ((uint32_t)(0xFFFFUL << MXC_F_GCR_REVISION_REVISION_POS)) /**< REVISION_REVISION Mask */

/**@} end of group GCR_REVISION_Register */

/**
 * @ingroup  gcr_registers
 * @defgroup GCR_SYSINTEN GCR_SYSINTEN
 * @brief    System Status Interrupt Enable Register.
 * @{
 */
#define MXC_F_GCR_SYSINTEN_ICEUNLOCK_POS               0 /**< SYSINTEN_ICEUNLOCK Position */
#define MXC_F_GCR_SYSINTEN_ICEUNLOCK                   ((uint32_t)(0x1UL << MXC_F_GCR_SYSINTEN_ICEUNLOCK_POS)) /**< SYSINTEN_ICEUNLOCK Mask */

#define MXC_F_GCR_SYSINTEN_CIE_POS                     1 /**< SYSINTEN_CIE Position */
#define MXC_F_GCR_SYSINTEN_CIE                         ((uint32_t)(0x1UL << MXC_F_GCR_SYSINTEN_CIE_POS)) /**< SYSINTEN_CIE Mask */

#define MXC_F_GCR_SYSINTEN_SCMF_POS                    5 /**< SYSINTEN_SCMF Position */
#define MXC_F_GCR_SYSINTEN_SCMF                        ((uint32_t)(0x1UL << MXC_F_GCR_SYSINTEN_SCMF_POS)) /**< SYSINTEN_SCMF Mask */

/**@} end of group GCR_SYSINTEN_Register */

/**
 * @ingroup  gcr_registers
 * @defgroup GCR_IPOCNT GCR_IPOCNT
 * @brief    IPO Warmup Count Register.
 * @{
 */
#define MXC_F_GCR_IPOCNT_WMUPCNT_POS                   0 /**< IPOCNT_WMUPCNT Position */
#define MXC_F_GCR_IPOCNT_WMUPCNT                       ((uint32_t)(0x3FFUL << MXC_F_GCR_IPOCNT_WMUPCNT_POS)) /**< IPOCNT_WMUPCNT Mask */

/**@} end of group GCR_IPOCNT_Register */

/**
 * @ingroup  gcr_registers
 * @defgroup GCR_ECCERR GCR_ECCERR
 * @brief    ECC Error Register
 * @{
 */
#define MXC_F_GCR_ECCERR_RAM0_POS                      0 /**< ECCERR_RAM0 Position */
#define MXC_F_GCR_ECCERR_RAM0                          ((uint32_t)(0x1UL << MXC_F_GCR_ECCERR_RAM0_POS)) /**< ECCERR_RAM0 Mask */

#define MXC_F_GCR_ECCERR_RAM1_POS                      1 /**< ECCERR_RAM1 Position */
#define MXC_F_GCR_ECCERR_RAM1                          ((uint32_t)(0x1UL << MXC_F_GCR_ECCERR_RAM1_POS)) /**< ECCERR_RAM1 Mask */

#define MXC_F_GCR_ECCERR_RAM2_POS                      2 /**< ECCERR_RAM2 Position */
#define MXC_F_GCR_ECCERR_RAM2                          ((uint32_t)(0x1UL << MXC_F_GCR_ECCERR_RAM2_POS)) /**< ECCERR_RAM2 Mask */

#define MXC_F_GCR_ECCERR_RAM3_POS                      3 /**< ECCERR_RAM3 Position */
#define MXC_F_GCR_ECCERR_RAM3                          ((uint32_t)(0x1UL << MXC_F_GCR_ECCERR_RAM3_POS)) /**< ECCERR_RAM3 Mask */

#define MXC_F_GCR_ECCERR_RAM4_POS                      4 /**< ECCERR_RAM4 Position */
#define MXC_F_GCR_ECCERR_RAM4                          ((uint32_t)(0x1UL << MXC_F_GCR_ECCERR_RAM4_POS)) /**< ECCERR_RAM4 Mask */

#define MXC_F_GCR_ECCERR_RAM5_POS                      5 /**< ECCERR_RAM5 Position */
#define MXC_F_GCR_ECCERR_RAM5                          ((uint32_t)(0x1UL << MXC_F_GCR_ECCERR_RAM5_POS)) /**< ECCERR_RAM5 Mask */

#define MXC_F_GCR_ECCERR_ICC_POS                       8 /**< ECCERR_ICC Position */
#define MXC_F_GCR_ECCERR_ICC                           ((uint32_t)(0x1UL << MXC_F_GCR_ECCERR_ICC_POS)) /**< ECCERR_ICC Mask */

#define MXC_F_GCR_ECCERR_ICCXIP_POS                    10 /**< ECCERR_ICCXIP Position */
#define MXC_F_GCR_ECCERR_ICCXIP                        ((uint32_t)(0x1UL << MXC_F_GCR_ECCERR_ICCXIP_POS)) /**< ECCERR_ICCXIP Mask */

#define MXC_F_GCR_ECCERR_FLASH0_POS                    11 /**< ECCERR_FLASH0 Position */
#define MXC_F_GCR_ECCERR_FLASH0                        ((uint32_t)(0x1UL << MXC_F_GCR_ECCERR_FLASH0_POS)) /**< ECCERR_FLASH0 Mask */

#define MXC_F_GCR_ECCERR_FLASH1_POS                    12 /**< ECCERR_FLASH1 Position */
#define MXC_F_GCR_ECCERR_FLASH1                        ((uint32_t)(0x1UL << MXC_F_GCR_ECCERR_FLASH1_POS)) /**< ECCERR_FLASH1 Mask */

/**@} end of group GCR_ECCERR_Register */

/**
 * @ingroup  gcr_registers
 * @defgroup GCR_ECCCED GCR_ECCCED
 * @brief    ECC Not Double Error Detect Register
 * @{
 */
#define MXC_F_GCR_ECCCED_RAM0_POS                      0 /**< ECCCED_RAM0 Position */
#define MXC_F_GCR_ECCCED_RAM0                          ((uint32_t)(0x1UL << MXC_F_GCR_ECCCED_RAM0_POS)) /**< ECCCED_RAM0 Mask */

#define MXC_F_GCR_ECCCED_RAM1_POS                      1 /**< ECCCED_RAM1 Position */
#define MXC_F_GCR_ECCCED_RAM1                          ((uint32_t)(0x1UL << MXC_F_GCR_ECCCED_RAM1_POS)) /**< ECCCED_RAM1 Mask */

#define MXC_F_GCR_ECCCED_RAM2_POS                      2 /**< ECCCED_RAM2 Position */
#define MXC_F_GCR_ECCCED_RAM2                          ((uint32_t)(0x1UL << MXC_F_GCR_ECCCED_RAM2_POS)) /**< ECCCED_RAM2 Mask */

#define MXC_F_GCR_ECCCED_RAM3_POS                      3 /**< ECCCED_RAM3 Position */
#define MXC_F_GCR_ECCCED_RAM3                          ((uint32_t)(0x1UL << MXC_F_GCR_ECCCED_RAM3_POS)) /**< ECCCED_RAM3 Mask */

#define MXC_F_GCR_ECCCED_RAM4_POS                      4 /**< ECCCED_RAM4 Position */
#define MXC_F_GCR_ECCCED_RAM4                          ((uint32_t)(0x1UL << MXC_F_GCR_ECCCED_RAM4_POS)) /**< ECCCED_RAM4 Mask */

#define MXC_F_GCR_ECCCED_RAM5_POS                      5 /**< ECCCED_RAM5 Position */
#define MXC_F_GCR_ECCCED_RAM5                          ((uint32_t)(0x1UL << MXC_F_GCR_ECCCED_RAM5_POS)) /**< ECCCED_RAM5 Mask */

#define MXC_F_GCR_ECCCED_ICC_POS                       8 /**< ECCCED_ICC Position */
#define MXC_F_GCR_ECCCED_ICC                           ((uint32_t)(0x1UL << MXC_F_GCR_ECCCED_ICC_POS)) /**< ECCCED_ICC Mask */

#define MXC_F_GCR_ECCCED_ICCXIP_POS                    10 /**< ECCCED_ICCXIP Position */
#define MXC_F_GCR_ECCCED_ICCXIP                        ((uint32_t)(0x1UL << MXC_F_GCR_ECCCED_ICCXIP_POS)) /**< ECCCED_ICCXIP Mask */

#define MXC_F_GCR_ECCCED_FLASH0_POS                    11 /**< ECCCED_FLASH0 Position */
#define MXC_F_GCR_ECCCED_FLASH0                        ((uint32_t)(0x1UL << MXC_F_GCR_ECCCED_FLASH0_POS)) /**< ECCCED_FLASH0 Mask */

#define MXC_F_GCR_ECCCED_FLASH1_POS                    12 /**< ECCCED_FLASH1 Position */
#define MXC_F_GCR_ECCCED_FLASH1                        ((uint32_t)(0x1UL << MXC_F_GCR_ECCCED_FLASH1_POS)) /**< ECCCED_FLASH1 Mask */

/**@} end of group GCR_ECCCED_Register */

/**
 * @ingroup  gcr_registers
 * @defgroup GCR_ECCINTEN GCR_ECCINTEN
 * @brief    ECC Interrupt Enable Register
 * @{
 */
#define MXC_F_GCR_ECCINTEN_RAM0_POS                    0 /**< ECCINTEN_RAM0 Position */
#define MXC_F_GCR_ECCINTEN_RAM0                        ((uint32_t)(0x1UL << MXC_F_GCR_ECCINTEN_RAM0_POS)) /**< ECCINTEN_RAM0 Mask */

#define MXC_F_GCR_ECCINTEN_RAM1_POS                    1 /**< ECCINTEN_RAM1 Position */
#define MXC_F_GCR_ECCINTEN_RAM1                        ((uint32_t)(0x1UL << MXC_F_GCR_ECCINTEN_RAM1_POS)) /**< ECCINTEN_RAM1 Mask */

#define MXC_F_GCR_ECCINTEN_RAM2_POS                    2 /**< ECCINTEN_RAM2 Position */
#define MXC_F_GCR_ECCINTEN_RAM2                        ((uint32_t)(0x1UL << MXC_F_GCR_ECCINTEN_RAM2_POS)) /**< ECCINTEN_RAM2 Mask */

#define MXC_F_GCR_ECCINTEN_RAM3_POS                    3 /**< ECCINTEN_RAM3 Position */
#define MXC_F_GCR_ECCINTEN_RAM3                        ((uint32_t)(0x1UL << MXC_F_GCR_ECCINTEN_RAM3_POS)) /**< ECCINTEN_RAM3 Mask */

#define MXC_F_GCR_ECCINTEN_RAM4_POS                    4 /**< ECCINTEN_RAM4 Position */
#define MXC_F_GCR_ECCINTEN_RAM4                        ((uint32_t)(0x1UL << MXC_F_GCR_ECCINTEN_RAM4_POS)) /**< ECCINTEN_RAM4 Mask */

#define MXC_F_GCR_ECCINTEN_RAM5_POS                    5 /**< ECCINTEN_RAM5 Position */
#define MXC_F_GCR_ECCINTEN_RAM5                        ((uint32_t)(0x1UL << MXC_F_GCR_ECCINTEN_RAM5_POS)) /**< ECCINTEN_RAM5 Mask */

#define MXC_F_GCR_ECCINTEN_ICC_POS                     8 /**< ECCINTEN_ICC Position */
#define MXC_F_GCR_ECCINTEN_ICC                         ((uint32_t)(0x1UL << MXC_F_GCR_ECCINTEN_ICC_POS)) /**< ECCINTEN_ICC Mask */

#define MXC_F_GCR_ECCINTEN_ICCXIP_POS                  10 /**< ECCINTEN_ICCXIP Position */
#define MXC_F_GCR_ECCINTEN_ICCXIP                      ((uint32_t)(0x1UL << MXC_F_GCR_ECCINTEN_ICCXIP_POS)) /**< ECCINTEN_ICCXIP Mask */

#define MXC_F_GCR_ECCINTEN_FLASH0_POS                  11 /**< ECCINTEN_FLASH0 Position */
#define MXC_F_GCR_ECCINTEN_FLASH0                      ((uint32_t)(0x1UL << MXC_F_GCR_ECCINTEN_FLASH0_POS)) /**< ECCINTEN_FLASH0 Mask */

#define MXC_F_GCR_ECCINTEN_FLASH1_POS                  12 /**< ECCINTEN_FLASH1 Position */
#define MXC_F_GCR_ECCINTEN_FLASH1                      ((uint32_t)(0x1UL << MXC_F_GCR_ECCINTEN_FLASH1_POS)) /**< ECCINTEN_FLASH1 Mask */

/**@} end of group GCR_ECCINTEN_Register */

/**
 * @ingroup  gcr_registers
 * @defgroup GCR_ECCADDR GCR_ECCADDR
 * @brief    ECC Error Address Register
 * @{
 */
#define MXC_F_GCR_ECCADDR_DADDR_POS                    0 /**< ECCADDR_DADDR Position */
#define MXC_F_GCR_ECCADDR_DADDR                        ((uint32_t)(0x3FFFUL << MXC_F_GCR_ECCADDR_DADDR_POS)) /**< ECCADDR_DADDR Mask */

#define MXC_F_GCR_ECCADDR_DB_POS                       14 /**< ECCADDR_DB Position */
#define MXC_F_GCR_ECCADDR_DB                           ((uint32_t)(0x1UL << MXC_F_GCR_ECCADDR_DB_POS)) /**< ECCADDR_DB Mask */

#define MXC_F_GCR_ECCADDR_DE_POS                       15 /**< ECCADDR_DE Position */
#define MXC_F_GCR_ECCADDR_DE                           ((uint32_t)(0x1UL << MXC_F_GCR_ECCADDR_DE_POS)) /**< ECCADDR_DE Mask */

#define MXC_F_GCR_ECCADDR_TADDR_POS                    16 /**< ECCADDR_TADDR Position */
#define MXC_F_GCR_ECCADDR_TADDR                        ((uint32_t)(0x3FFFUL << MXC_F_GCR_ECCADDR_TADDR_POS)) /**< ECCADDR_TADDR Mask */

#define MXC_F_GCR_ECCADDR_TB_POS                       30 /**< ECCADDR_TB Position */
#define MXC_F_GCR_ECCADDR_TB                           ((uint32_t)(0x1UL << MXC_F_GCR_ECCADDR_TB_POS)) /**< ECCADDR_TB Mask */

#define MXC_F_GCR_ECCADDR_TE_POS                       31 /**< ECCADDR_TE Position */
#define MXC_F_GCR_ECCADDR_TE                           ((uint32_t)(0x1UL << MXC_F_GCR_ECCADDR_TE_POS)) /**< ECCADDR_TE Mask */

/**@} end of group GCR_ECCADDR_Register */

/**
 * @ingroup  gcr_registers
 * @defgroup GCR_NFCLDOCTRL GCR_NFCLDOCTRL
 * @brief    NFC LDO Control Register
 * @{
 */
#define MXC_F_GCR_NFCLDOCTRL_EN_POS                    4 /**< NFCLDOCTRL_EN Position */
#define MXC_F_GCR_NFCLDOCTRL_EN                        ((uint32_t)(0x1UL << MXC_F_GCR_NFCLDOCTRL_EN_POS)) /**< NFCLDOCTRL_EN Mask */

#define MXC_F_GCR_NFCLDOCTRL_PD_EN_POS                 5 /**< NFCLDOCTRL_PD_EN Position */
#define MXC_F_GCR_NFCLDOCTRL_PD_EN                     ((uint32_t)(0x1UL << MXC_F_GCR_NFCLDOCTRL_PD_EN_POS)) /**< NFCLDOCTRL_PD_EN Mask */

#define MXC_F_GCR_NFCLDOCTRL_VSEL_POS                  6 /**< NFCLDOCTRL_VSEL Position */
#define MXC_F_GCR_NFCLDOCTRL_VSEL                      ((uint32_t)(0x3UL << MXC_F_GCR_NFCLDOCTRL_VSEL_POS)) /**< NFCLDOCTRL_VSEL Mask */

#define MXC_F_GCR_NFCLDOCTRL_BP_EN_POS                 8 /**< NFCLDOCTRL_BP_EN Position */
#define MXC_F_GCR_NFCLDOCTRL_BP_EN                     ((uint32_t)(0x1UL << MXC_F_GCR_NFCLDOCTRL_BP_EN_POS)) /**< NFCLDOCTRL_BP_EN Mask */

#define MXC_F_GCR_NFCLDOCTRL_DISCH_POS                 9 /**< NFCLDOCTRL_DISCH Position */
#define MXC_F_GCR_NFCLDOCTRL_DISCH                     ((uint32_t)(0x1UL << MXC_F_GCR_NFCLDOCTRL_DISCH_POS)) /**< NFCLDOCTRL_DISCH Mask */

#define MXC_F_GCR_NFCLDOCTRL_EN_DLY_POS                13 /**< NFCLDOCTRL_EN_DLY Position */
#define MXC_F_GCR_NFCLDOCTRL_EN_DLY                    ((uint32_t)(0x1UL << MXC_F_GCR_NFCLDOCTRL_EN_DLY_POS)) /**< NFCLDOCTRL_EN_DLY Mask */

#define MXC_F_GCR_NFCLDOCTRL_BP_EN_DLY_POS             14 /**< NFCLDOCTRL_BP_EN_DLY Position */
#define MXC_F_GCR_NFCLDOCTRL_BP_EN_DLY                 ((uint32_t)(0x1UL << MXC_F_GCR_NFCLDOCTRL_BP_EN_DLY_POS)) /**< NFCLDOCTRL_BP_EN_DLY Mask */

/**@} end of group GCR_NFCLDOCTRL_Register */

/**
 * @ingroup  gcr_registers
 * @defgroup GCR_NFCLDODLY GCR_NFCLDODLY
 * @brief    NFC LDO Delay Register
 * @{
 */
#define MXC_F_GCR_NFCLDODLY_BP_CNT_POS                 0 /**< NFCLDODLY_BP_CNT Position */
#define MXC_F_GCR_NFCLDODLY_BP_CNT                     ((uint32_t)(0xFFUL << MXC_F_GCR_NFCLDODLY_BP_CNT_POS)) /**< NFCLDODLY_BP_CNT Mask */

#define MXC_F_GCR_NFCLDODLY_EN_CNT_POS                 8 /**< NFCLDODLY_EN_CNT Position */
#define MXC_F_GCR_NFCLDODLY_EN_CNT                     ((uint32_t)(0xFFUL << MXC_F_GCR_NFCLDODLY_EN_CNT_POS)) /**< NFCLDODLY_EN_CNT Mask */

/**@} end of group GCR_NFCLDODLY_Register */

/**
 * @ingroup  gcr_registers
 * @defgroup GCR_FLVRST GCR_FLVRST
 * @brief    Flash Low Voltage Reset Control Register
 * @{
 */
#define MXC_F_GCR_FLVRST_EN_POS                        0 /**< FLVRST_EN Position */
#define MXC_F_GCR_FLVRST_EN                            ((uint32_t)(0x1UL << MXC_F_GCR_FLVRST_EN_POS)) /**< FLVRST_EN Mask */

/**@} end of group GCR_FLVRST_Register */

/**
 * @ingroup  gcr_registers
 * @defgroup GCR_FLVCLKCTRL GCR_FLVCLKCTRL
 * @brief    Flash Low Voltage Clock Control Register
 * @{
 */
#define MXC_F_GCR_FLVCLKCTRL_DIV_POS                   0 /**< FLVCLKCTRL_DIV Position */
#define MXC_F_GCR_FLVCLKCTRL_DIV                       ((uint32_t)(0x3UL << MXC_F_GCR_FLVCLKCTRL_DIV_POS)) /**< FLVCLKCTRL_DIV Mask */
#define MXC_V_GCR_FLVCLKCTRL_DIV_512                   ((uint32_t)0x0UL) /**< FLVCLKCTRL_DIV_512 Value */
#define MXC_S_GCR_FLVCLKCTRL_DIV_512                   (MXC_V_GCR_FLVCLKCTRL_DIV_512 << MXC_F_GCR_FLVCLKCTRL_DIV_POS) /**< FLVCLKCTRL_DIV_512 Setting */
#define MXC_V_GCR_FLVCLKCTRL_DIV_256                   ((uint32_t)0x1UL) /**< FLVCLKCTRL_DIV_256 Value */
#define MXC_S_GCR_FLVCLKCTRL_DIV_256                   (MXC_V_GCR_FLVCLKCTRL_DIV_256 << MXC_F_GCR_FLVCLKCTRL_DIV_POS) /**< FLVCLKCTRL_DIV_256 Setting */
#define MXC_V_GCR_FLVCLKCTRL_DIV_128                   ((uint32_t)0x2UL) /**< FLVCLKCTRL_DIV_128 Value */
#define MXC_S_GCR_FLVCLKCTRL_DIV_128                   (MXC_V_GCR_FLVCLKCTRL_DIV_128 << MXC_F_GCR_FLVCLKCTRL_DIV_POS) /**< FLVCLKCTRL_DIV_128 Setting */
#define MXC_V_GCR_FLVCLKCTRL_DIV_64                    ((uint32_t)0x3UL) /**< FLVCLKCTRL_DIV_64 Value */
#define MXC_S_GCR_FLVCLKCTRL_DIV_64                    (MXC_V_GCR_FLVCLKCTRL_DIV_64 << MXC_F_GCR_FLVCLKCTRL_DIV_POS) /**< FLVCLKCTRL_DIV_64 Setting */

/**@} end of group GCR_FLVCLKCTRL_Register */

/**
 * @ingroup  gcr_registers
 * @defgroup GCR_FLVSTAT GCR_FLVSTAT
 * @brief    Flash Low Voltage Status Register
 * @{
 */
#define MXC_F_GCR_FLVSTAT_FLV_POS                      0 /**< FLVSTAT_FLV Position */
#define MXC_F_GCR_FLVSTAT_FLV                          ((uint32_t)(0x1UL << MXC_F_GCR_FLVSTAT_FLV_POS)) /**< FLVSTAT_FLV Mask */

#define MXC_F_GCR_FLVSTAT_ONES_POS                     6 /**< FLVSTAT_ONES Position */
#define MXC_F_GCR_FLVSTAT_ONES                         ((uint32_t)(0x1UL << MXC_F_GCR_FLVSTAT_ONES_POS)) /**< FLVSTAT_ONES Mask */

#define MXC_F_GCR_FLVSTAT_ZEROS_POS                    7 /**< FLVSTAT_ZEROS Position */
#define MXC_F_GCR_FLVSTAT_ZEROS                        ((uint32_t)(0x1UL << MXC_F_GCR_FLVSTAT_ZEROS_POS)) /**< FLVSTAT_ZEROS Mask */

#define MXC_F_GCR_FLVSTAT_ONES_FL_POS                  14 /**< FLVSTAT_ONES_FL Position */
#define MXC_F_GCR_FLVSTAT_ONES_FL                      ((uint32_t)(0x1UL << MXC_F_GCR_FLVSTAT_ONES_FL_POS)) /**< FLVSTAT_ONES_FL Mask */

#define MXC_F_GCR_FLVSTAT_ZEROS_FL_POS                 15 /**< FLVSTAT_ZEROS_FL Position */
#define MXC_F_GCR_FLVSTAT_ZEROS_FL                     ((uint32_t)(0x1UL << MXC_F_GCR_FLVSTAT_ZEROS_FL_POS)) /**< FLVSTAT_ZEROS_FL Mask */

#define MXC_F_GCR_FLVSTAT_BUF_POS                      16 /**< FLVSTAT_BUF Position */
#define MXC_F_GCR_FLVSTAT_BUF                          ((uint32_t)(0x3FFUL << MXC_F_GCR_FLVSTAT_BUF_POS)) /**< FLVSTAT_BUF Mask */

/**@} end of group GCR_FLVSTAT_Register */

#ifdef __cplusplus
}
#endif

#endif // LIBRARIES_CMSIS_DEVICE_MAXIM_MAX32570_INCLUDE_GCR_REGS_H_
