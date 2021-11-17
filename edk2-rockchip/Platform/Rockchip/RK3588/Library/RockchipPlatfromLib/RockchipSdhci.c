/** @file
 *
 *  Copyright (c) 2017, Andrei Warkentin <andrey.warkentin@gmail.com>
 *  Copyright (c) Microsoft Corporation. All rights reserved.
 *
 *  SPDX-License-Identifier: BSD-2-Clause-Patent
 *
 **/

#include "RockchipSdhci.h"
#include <Library/PcdLib.h>

//#define GRF_BASE            0xFDC60000
#define NS_CRU_BASE         0xFD7C0000
#define CRU_CLKSEL_CON77    0x0434

#define EMMC_CLOCK_BASE     (NS_CRU_BASE + CRU_CLKSEL_CON77)
#define EMMC_CLOCK_SEL(a)   (((7 << 12) << 16) | (a << 12))

#define EMMC_BASE           PcdGet32 (PcdSdhciDxeBaseAddress)
#define DWCMSHC_HOST_CTRL3  (EMMC_BASE + 0x508)
#define EMMC_DLL_CTRL       (EMMC_BASE + 0x800)
#define EMMC_DLL_RXCLK      (EMMC_BASE + 0x804)
#define EMMC_DLL_TXCLK      (EMMC_BASE + 0x808)
#define EMMC_DLL_STRBIN     (EMMC_BASE + 0x80C)
#define EMMC_DLL_CMDOUT     (EMMC_BASE + 0x810)
#define EMMC_DLL_STATUS0    (EMMC_BASE + 0x840)
#define EMMC_DLL_STATUS1    (EMMC_BASE + 0x844)

EFI_STATUS SdhciSetPHY(
  IN UINTN Clock
  )
{
  UINT32 Tmp;

  /* Disable cmd conflict check */
  Tmp = MmioRead32(DWCMSHC_HOST_CTRL3);
  Tmp &= ~BIT0;
  MmioWrite32(EMMC_BASE + DWCMSHC_HOST_CTRL3, Tmp);

  if (Clock < 100000000) {
    MmioWrite32(EMMC_DLL_CTRL, 0);
    MmioWrite32(EMMC_DLL_RXCLK, 1uL << 29); /* PIO mode need set bit 29*/
    MmioWrite32(EMMC_DLL_TXCLK, 0);
    MmioWrite32(EMMC_DLL_STRBIN, 0);
    MmioWrite32(EMMC_DLL_CMDOUT, 0);
    return EFI_SUCCESS;
  }
  else {
    return RETURN_UNSUPPORTED;
  }

  return EFI_SUCCESS;
}

EFI_STATUS
EFIAPI
SdhciGetClockRate(
  IN UINTN TargetFreq,
  OUT UINTN *BaseFreq
  )
{
  UINT32 CClkEmmcSel, Div;

  if (TargetFreq == 0 || BaseFreq == NULL)
    return -1;

  /*GPLL:1184MHz, CPLL:750MHZ
  2'b00: clk_gpll_mux
  2'b01: clk_cpll_mux
  2'b10: xin_osc0_func*/
  if (TargetFreq >= 200000000) {
    CClkEmmcSel = 0;
    Div = 6;
  } else if (TargetFreq >= 150000000) {
    CClkEmmcSel = 0;
    Div = 8;
  } else if (TargetFreq >= 100000000) {
    CClkEmmcSel = 0;
    Div = 12;
  } else if (TargetFreq >= 50000000) {
    CClkEmmcSel = 0;
    Div = 24;
  } else if (TargetFreq >= 24000000) {
    CClkEmmcSel = 2;
    Div = 1;
  } else { /* 375KHZ*/
    CClkEmmcSel = 2;
    Div = 64;
  }

  DEBUG((DEBUG_INFO, "SetEmmcClk: %d, %d, %d\n", TargetFreq, CClkEmmcSel, Div));

  SdhciSetPHY(TargetFreq);
  *BaseFreq = TargetFreq;

  MmioWrite32(EMMC_CLOCK_BASE, ((( 0x3 << 14 )|( 0x3F << 8 )) << 16 ) |
                                ( CClkEmmcSel << 14 ) |
                                (( Div - 1 ) << 8));
  //DEBUG ((DEBUG_ERROR, "EMMC_CLOCK 0x%x: 0x%x:\n", EMMC_CLOCK_BASE, MmioRead32(EMMC_CLOCK_BASE)));
  //DEBUG ((DEBUG_ERROR, "EMMC_DLL_CTRL: 0x%x:\n", MmioRead32(EMMC_DLL_CTRL)));
  //DEBUG ((DEBUG_ERROR, "EMMC_DLL_RXCLK: 0x%x:\n", MmioRead32(EMMC_DLL_RXCLK)));
  //DEBUG ((DEBUG_ERROR, "EMMC_DLL_TXCLK: 0x%x:\n", MmioRead32(EMMC_DLL_TXCLK)));
  //DEBUG ((DEBUG_ERROR, "EMMC_DLL_CMDOUT: 0x%x:\n", MmioRead32(EMMC_DLL_CMDOUT)));

  return EFI_SUCCESS;
}

