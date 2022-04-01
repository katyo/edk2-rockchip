/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2021 Rockchip Electronics Co., Ltd.
 */

#ifndef __SOC_H
#define __SOC_H
#ifdef __cplusplus
  extern "C" {
#endif
#define uint8_t UINT8
#define uint16_t UINT16
#define uint32_t UINT32
#define uint64_t UINT64
#define HAL_ASSERT ASSERT
#define HAL_CPUDelayUs MicroSecondDelay
#define __WEAK
#define HAL_DivU64 DivU64x32
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

/**< Write the register */
#define WRITE_REG(REG, VAL)  ((*(volatile uint32_t *)&(REG)) = (VAL))
/**< Read the register */
#define READ_REG(REG)        ((*(volatile const uint32_t *)&(REG)))
#define DIV_ROUND_UP(x, y) (((x) + (y) - 1) / (y))
/* ================================================================================ */
/* ================      Processor and Core Peripheral Section     ================ */
/* ================================================================================ */
#include "RK3588.h"
#define RK3588_PERIPH_BASE      0xFC000000
#define RK3588_PERIPH_SZ        0x04000000
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* __SOC_H */
