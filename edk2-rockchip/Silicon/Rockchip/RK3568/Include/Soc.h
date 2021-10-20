/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2021 Rockchip Electronics Co., Ltd.
 */

#ifndef __SOC_H
#define __SOC_H
#ifdef __cplusplus
  extern "C" {
#endif

#define uint32_t UINT32
#define uint64_t UINT64
/* IO definitions (access restrictions to peripheral registers) */
/*!< brief Defines 'read only' permissions */
#ifdef __cplusplus
  #define   __I     volatile
#else
  #define   __I     volatile const
#endif
/*!< brief Defines 'write only' permissions */
#define     __O     volatile
/*!< brief Defines 'read / write' permissions */
#define     __IO    volatile

/* ================================================================================ */
/* ================                    DMA REQ                      =============== */
/* ================================================================================ */
typedef enum {
    DMA_REQ_UART0_TX = 0,
    DMA_REQ_UART0_RX = 1,
    DMA_REQ_UART1_TX = 2,
    DMA_REQ_UART1_RX = 3,
    DMA_REQ_UART2_TX = 4,
    DMA_REQ_UART2_RX = 5,
    DMA_REQ_UART3_TX = 6,
    DMA_REQ_UART3_RX = 7,
    DMA_REQ_UART4_TX = 8,
    DMA_REQ_UART4_RX = 9,
    DMA_REQ_UART5_TX = 10,
    DMA_REQ_UART5_RX = 11,
    DMA_REQ_UART6_TX = 12,
    DMA_REQ_UART6_RX = 13,
    DMA_REQ_UART7_TX = 14,
    DMA_REQ_UART7_RX = 15,
    DMA_REQ_UART8_TX = 16,
    DMA_REQ_UART8_RX = 17,
    DMA_REQ_UART9_TX = 18,
    DMA_REQ_UART9_RX = 19,
    DMA_REQ_SPI0_TX = 20,
    DMA_REQ_SPI0_RX = 21,
    DMA_REQ_SPI1_TX = 22,
    DMA_REQ_SPI1_RX = 23,
    DMA_REQ_SPI2_TX = 24,
    DMA_REQ_SPI2_RX = 25,
    DMA_REQ_SPI3_TX = 26,
    DMA_REQ_SPI3_RX = 27,
} DMA_REQ_Type;

/* ================================================================================ */
/* ================                       IRQ                      ================ */
/* ================================================================================ */
typedef enum
{
/******  Platform Exceptions Numbers ***************************************************/
  CAN0_IRQn              = 33,       /*!< CAN0 Interrupt              */
  CAN1_IRQn              = 34,       /*!< CAN1 Interrupt              */
  CAN2_IRQn              = 35,       /*!< CAN2 Interrupt              */
  DMAC0_ABORT_IRQn       = 45,       /*!< DMAC0 Abort Interrupt       */
  DMAC0_IRQn             = 46,       /*!< DMAC0 Interrupt             */
  DMAC1_ABORT_IRQn       = 47,       /*!< DMAC1 Abort Interrupt       */
  DMAC1_IRQn             = 48,       /*!< DMAC1 Interrupt             */
  SPI0_IRQn              = 135,      /*!< SPI0 Interrupt              */
  SPI1_IRQn              = 136,      /*!< SPI1 Interrupt              */
  SPI2_IRQn              = 137,      /*!< SPI2 Interrupt              */
  SPI3_IRQn              = 138,      /*!< SPI3 Interrupt              */
  TIMER0_IRQn            = 141,      /*!< TIMER0 Interrupt            */
  TIMER1_IRQn            = 142,      /*!< TIMER1 Interrupt            */
  TIMER2_IRQn            = 143,      /*!< TIMER2 Interrupt            */
  TIMER3_IRQn            = 144,      /*!< TIMER3 Interrupt            */
  TIMER4_IRQn            = 145,      /*!< TIMER4 Interrupt            */
  TIMER5_IRQn            = 146,      /*!< TIMER5 Interrupt            */
  UART0_IRQn             = 148,      /*!< UART0  Interrupt            */
  UART1_IRQn             = 149,      /*!< UART1  Interrupt            */
  UART2_IRQn             = 150,      /*!< UART2  Interrupt            */
  UART3_IRQn             = 151,      /*!< UART3  Interrupt            */
  UART4_IRQn             = 152,      /*!< UART4  Interrupt            */
  UART5_IRQn             = 153,      /*!< UART5  Interrupt            */
  UART6_IRQn             = 154,      /*!< UART6  Interrupt            */
  UART7_IRQn             = 155,      /*!< UART7  Interrupt            */
  UART8_IRQn             = 156,      /*!< UART8  Interrupt            */
  UART9_IRQn             = 157,      /*!< UART9  Interrupt            */
  WDT0_IRQn              = 181,      /*!< WDT0  Interrupt             */
  DDR_ECC_CE_IRQn        = 205,      /*!< DDR ECC correctable fault Interrupt */
  DDR_ECC_UE_IRQn        = 207,      /*!< DDR ECC uncorrectable fault Interrupt */
  RSVD0_IRQn             = 283,      /*!< RSVD0  Interrupt            */
  NUM_INTERRUPTS         = 352,
} IRQn_Type;

/* ================================================================================ */
/* ================      Processor and Core Peripheral Section     ================ */
/* ================================================================================ */
#include "RK3568.h"

#define RK3568_PERIPH_BASE      0xFC000000
#define RK3568_PERIPH_SZ        0x04000000

/****************************************************************************************/
/*                                                                                      */
/*                                Module Address Section                                */
/*                                                                                      */
/****************************************************************************************/
/* Memory Base */
#define GIC_DISTRIBUTOR_BASE    0xFD400000 /* GICD base address */
#define GIC_REDISTRIBUTOR_BASE  0xFD460000 /* GICR base address */

/****************************************************************************************/
/*                                                                                      */
/*                               Register Bitmap Section                                */
/*                                                                                      */
/****************************************************************************************/
/********************************** CPU Topology ****************************************/
#define MPIDR_MT_MASK       ((1U) << 24)
#define MPIDR_AFFLVL_MASK   (0xFFU)
#define MPIDR_AFF0_SHIFT    (0U)
#define MPIDR_AFF1_SHIFT    (8U)
#define MPIDR_AFF2_SHIFT    (16U)
#define MPIDR_AFF3_SHIFT    (32U)
#define MPIDR_AFFINITY_MASK (0xFFFFFFU)
#define PLATFORM_CLUSTER0_CORE_COUNT (4)
#define PLATFORM_CLUSTER1_CORE_COUNT (0)
#define PLATFORM_CORE_COUNT PLATFORM_CLUSTER0_CORE_COUNT
#define CPU_GET_AFFINITY(cpuId, clusterId) ((cpuId) << MPIDR_AFF1_SHIFT)

/******************************************CRU*******************************************/
#define PLL_INPUT_OSC_RATE (24 * 1000 * 1000)

#define CRU_SRST_CON_CNT    29
#define CRU_GATE_CON_CNT    35
#define CRU_CLK_DIV_CON_CNT 84
#define CRU_CLK_SEL_CON_CNT 84

#define CLK(mux, div) \
    (((mux) & 0x0F0F00FFU) | (((div) & 0xFFU) << 8) | (((div) & 0x0F0F0000U) << 4))

#ifndef __ASSEMBLY__
typedef enum CLOCK_Name {
    CLK_INVALID = 0U,
    PLL_APLL,
    PLL_CPLL,
    PLL_GPLL,
    PLL_NPLL,
    PLL_VPLL,
    PLL_PPLL,
    PLL_HPLL,
    CLK_WDT,
    CLK_I2C        = CLK(CLK_I2C_SEL, 0U),
    CLK_PWM1       = CLK(CLK_PWM1_SEL, 0U),
    CLK_PWM2       = CLK(CLK_PWM2_SEL, 0U),
    CLK_PWM3       = CLK(CLK_PWM3_SEL, 0U),
    CLK_SPI0       = CLK(CLK_SPI0_SEL, 0U),
    CLK_SPI1       = CLK(CLK_SPI1_SEL, 0U),
    CLK_SPI2       = CLK(CLK_SPI2_SEL, 0U),
    CLK_SPI3       = CLK(CLK_SPI3_SEL, 0U),
    CLK_UART1_SRC  = CLK(CLK_UART1_SRC_SEL, CLK_UART1_SRC_DIV),
    CLK_UART1_FRAC = CLK(0U, CLK_UART1_FRAC_DIV),
    CLK_UART1      = CLK(SCLK_UART1_SEL, 0U),
    CLK_UART2_SRC  = CLK(CLK_UART2_SRC_SEL, CLK_UART2_SRC_DIV),
    CLK_UART2_FRAC = CLK(0U, CLK_UART2_FRAC_DIV),
    CLK_UART2      = CLK(SCLK_UART2_SEL, 0U),
    CLK_UART3_SRC  = CLK(CLK_UART3_SRC_SEL, CLK_UART3_SRC_DIV),
    CLK_UART3_FRAC = CLK(0U, CLK_UART3_FRAC_DIV),
    CLK_UART3      = CLK(SCLK_UART3_SEL, 0U),
    CLK_UART4_SRC  = CLK(CLK_UART4_SRC_SEL, CLK_UART4_SRC_DIV),
    CLK_UART4_FRAC = CLK(0U, CLK_UART4_FRAC_DIV),
    CLK_UART4      = CLK(SCLK_UART4_SEL, 0U),
    CLK_UART5_SRC  = CLK(CLK_UART5_SRC_SEL, CLK_UART5_SRC_DIV),
    CLK_UART5_FRAC = CLK(0U, CLK_UART5_FRAC_DIV),
    CLK_UART5      = CLK(SCLK_UART5_SEL, 0U),
    CLK_UART6_SRC  = CLK(CLK_UART6_SRC_SEL, CLK_UART6_SRC_DIV),
    CLK_UART6_FRAC = CLK(0U, CLK_UART6_FRAC_DIV),
    CLK_UART6      = CLK(SCLK_UART6_SEL, 0U),
    CLK_UART7_SRC  = CLK(CLK_UART7_SRC_SEL, CLK_UART7_SRC_DIV),
    CLK_UART7_FRAC = CLK(0U, CLK_UART7_FRAC_DIV),
    CLK_UART7      = CLK(SCLK_UART7_SEL, 0U),
    CLK_UART8_SRC  = CLK(CLK_UART8_SRC_SEL, CLK_UART8_SRC_DIV),
    CLK_UART8_FRAC = CLK(0U, CLK_UART8_FRAC_DIV),
    CLK_UART8      = CLK(SCLK_UART8_SEL, 0U),
    CLK_UART9_SRC  = CLK(CLK_UART9_SRC_SEL, CLK_UART9_SRC_DIV),
    CLK_UART9_FRAC = CLK(0U, CLK_UART9_FRAC_DIV),
    CLK_UART9      = CLK(SCLK_UART9_SEL, 0U),
    CLK_CAN0       = CLK(CLK_CAN0_SEL, CLK_CAN0_DIV),
    CLK_CAN1       = CLK(CLK_CAN1_SEL, CLK_CAN1_DIV),
    CLK_CAN2       = CLK(CLK_CAN2_SEL, CLK_CAN2_DIV),
    CLK_TSADC_TSEN = CLK(CLK_TSADC_TSEN_SEL, CLK_TSADC_TSEN_DIV),
    CLK_TSADC      = CLK(0, CLK_TSADC_DIV),
} eCLOCK_Name;
#endif
/****************************************MBOX********************************************/
#define MBOX_CNT             2
#define MBOX_CHAN_CNT        4
/****************************************GRF*********************************************/
#define GRF_IOMUX_BIT_PER_PIN	(4)
#define GRF_DS_BIT_PER_PIN	(8)
#define GRF_PULL_BIT_PER_PIN	(2)
/****************************************GPIO********************************************/
#ifdef GPIO_VER_ID
#undef GPIO_VER_ID
#define GPIO_VER_ID             (0x01000C2BU)
#endif
/****************************************PMU*********************************************/
#ifndef __ASSEMBLY__
typedef enum PD_Id {
    PD_UNKOWN,
} ePD_Id;
#endif

#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* __SOC_H */
