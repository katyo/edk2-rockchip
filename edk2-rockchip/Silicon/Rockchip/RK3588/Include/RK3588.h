#ifndef __RK3588_H
#define __RK3588_H
#ifdef __cplusplus
  extern "C" {
#endif
/****************************************************************************************/
/*                                                                                      */
/*                               Module Structure Section                               */
/*                                                                                      */
/****************************************************************************************/
#ifndef __ASSEMBLY__
/* DCACHE Register Structure Define */
struct DCACHE_REG {
    __IO uint32_t CACHE_CTRL;                         /* Address Offset: 0x0000 */
    __IO uint32_t CACHE_MAINTAIN[2];                  /* Address Offset: 0x0004 */
    __IO uint32_t STB_TIMEOUT_CTRL;                   /* Address Offset: 0x000C */
         uint32_t RESERVED0010[4];                    /* Address Offset: 0x0010 */
    __IO uint32_t CACHE_INT_EN;                       /* Address Offset: 0x0020 */
    __IO uint32_t CACHE_INT_ST;                       /* Address Offset: 0x0024 */
    __IO uint32_t CACHE_ERR_HADDR;                    /* Address Offset: 0x0028 */
         uint32_t RESERVED002C;                       /* Address Offset: 0x002C */
    __I  uint32_t CACHE_STATUS;                       /* Address Offset: 0x0030 */
         uint32_t RESERVED0034[3];                    /* Address Offset: 0x0034 */
    __I  uint32_t PMU_RD_NUM_CNT;                     /* Address Offset: 0x0040 */
    __I  uint32_t PMU_WR_NUM_CNT;                     /* Address Offset: 0x0044 */
    __I  uint32_t PMU_SRAM_RD_HIT_CNT;                /* Address Offset: 0x0048 */
    __I  uint32_t PMU_HB_RD_HIT_CNT;                  /* Address Offset: 0x004C */
    __IO uint32_t PMU_STB_RD_HIT_CNT;                 /* Address Offset: 0x0050 */
    __I  uint32_t PMU_RD_HIT_CNT;                     /* Address Offset: 0x0054 */
    __I  uint32_t PMU_WR_HIT_CNT;                     /* Address Offset: 0x0058 */
    __I  uint32_t PMU_RD_MISS_PENALTY_CNT;            /* Address Offset: 0x005C */
    __I  uint32_t PMU_WR_MISS_PENALTY_CNT;            /* Address Offset: 0x0060 */
    __I  uint32_t PMU_RD_LAT_CNT;                     /* Address Offset: 0x0064 */
    __I  uint32_t PMU_WR_LAT_CNT;                     /* Address Offset: 0x0068 */
         uint32_t RESERVED006C[33];                   /* Address Offset: 0x006C */
    __IO uint32_t REVISION;                           /* Address Offset: 0x00F0 */
};
/* ICACHE Register Structure Define */
struct ICACHE_REG {
    __IO uint32_t CACHE_CTRL;                         /* Address Offset: 0x0000 */
    __IO uint32_t CACHE_MAINTAIN[2];                  /* Address Offset: 0x0004 */
    __IO uint32_t STB_TIMEOUT_CTRL;                   /* Address Offset: 0x000C */
         uint32_t RESERVED0010[4];                    /* Address Offset: 0x0010 */
    __IO uint32_t CACHE_INT_EN;                       /* Address Offset: 0x0020 */
    __IO uint32_t CACHE_INT_ST;                       /* Address Offset: 0x0024 */
    __IO uint32_t CACHE_ERR_HADDR;                    /* Address Offset: 0x0028 */
         uint32_t RESERVED002C;                       /* Address Offset: 0x002C */
    __I  uint32_t CACHE_STATUS;                       /* Address Offset: 0x0030 */
         uint32_t RESERVED0034[3];                    /* Address Offset: 0x0034 */
    __I  uint32_t PMU_RD_NUM_CNT;                     /* Address Offset: 0x0040 */
    __I  uint32_t PMU_WR_NUM_CNT;                     /* Address Offset: 0x0044 */
    __I  uint32_t PMU_SRAM_RD_HIT_CNT;                /* Address Offset: 0x0048 */
    __I  uint32_t PMU_HB_RD_HIT_CNT;                  /* Address Offset: 0x004C */
    __IO uint32_t PMU_STB_RD_HIT_CNT;                 /* Address Offset: 0x0050 */
    __I  uint32_t PMU_RD_HIT_CNT;                     /* Address Offset: 0x0054 */
    __I  uint32_t PMU_WR_HIT_CNT;                     /* Address Offset: 0x0058 */
    __I  uint32_t PMU_RD_MISS_PENALTY_CNT;            /* Address Offset: 0x005C */
    __I  uint32_t PMU_WR_MISS_PENALTY_CNT;            /* Address Offset: 0x0060 */
    __I  uint32_t PMU_RD_LAT_CNT;                     /* Address Offset: 0x0064 */
    __I  uint32_t PMU_WR_LAT_CNT;                     /* Address Offset: 0x0068 */
         uint32_t RESERVED006C[33];                   /* Address Offset: 0x006C */
    __IO uint32_t REVISION;                           /* Address Offset: 0x00F0 */
};
/* PMU1_IOC Register Structure Define */
struct PMU1_IOC_REG {
    __IO uint32_t GPIO0A_IOMUX_SEL_L;                 /* Address Offset: 0x0000 */
    __IO uint32_t GPIO0A_IOMUX_SEL_H;                 /* Address Offset: 0x0004 */
    __IO uint32_t GPIO0B_IOMUX_SEL_L;                 /* Address Offset: 0x0008 */
         uint32_t RESERVED000C;                       /* Address Offset: 0x000C */
    __IO uint32_t GPIO0A_DS_L;                        /* Address Offset: 0x0010 */
    __IO uint32_t GPIO0A_DS_H;                        /* Address Offset: 0x0014 */
    __IO uint32_t GPIO0B_DS_L;                        /* Address Offset: 0x0018 */
         uint32_t RESERVED001C;                       /* Address Offset: 0x001C */
    __IO uint32_t GPIO0A_P;                           /* Address Offset: 0x0020 */
    __IO uint32_t GPIO0B_P;                           /* Address Offset: 0x0024 */
    __IO uint32_t GPIO0A_IE;                          /* Address Offset: 0x0028 */
    __IO uint32_t GPIO0B_IE;                          /* Address Offset: 0x002C */
    __IO uint32_t GPIO0A_SMT;                         /* Address Offset: 0x0030 */
    __IO uint32_t GPIO0B_SMT;                         /* Address Offset: 0x0034 */
    __IO uint32_t GPIO0A_PDIS;                        /* Address Offset: 0x0038 */
    __IO uint32_t GPIO0B_PDIS;                        /* Address Offset: 0x003C */
    __IO uint32_t XIN_CON;                            /* Address Offset: 0x0040 */
};
/* PMU2_IOC Register Structure Define */
struct PMU2_IOC_REG {
    __IO uint32_t GPIO0B_IOMUX_SEL_H;                 /* Address Offset: 0x0000 */
    __IO uint32_t GPIO0C_IOMUX_SEL_L;                 /* Address Offset: 0x0004 */
    __IO uint32_t GPIO0C_IOMUX_SEL_H;                 /* Address Offset: 0x0008 */
    __IO uint32_t GPIO0D_IOMUX_SEL_L;                 /* Address Offset: 0x000C */
    __IO uint32_t GPIO0D_IOMUX_SEL_H;                 /* Address Offset: 0x0010 */
    __IO uint32_t GPIO0B_DS_H;                        /* Address Offset: 0x0014 */
    __IO uint32_t GPIO0C_DS_L;                        /* Address Offset: 0x0018 */
    __IO uint32_t GPIO0C_DS_H;                        /* Address Offset: 0x001C */
    __IO uint32_t GPIO0D_DS_L;                        /* Address Offset: 0x0020 */
    __IO uint32_t GPIO0D_DS_H;                        /* Address Offset: 0x0024 */
    __IO uint32_t GPIO0B_P;                           /* Address Offset: 0x0028 */
    __IO uint32_t GPIO0C_P;                           /* Address Offset: 0x002C */
    __IO uint32_t GPIO0D_P;                           /* Address Offset: 0x0030 */
    __IO uint32_t GPIO0B_IE;                          /* Address Offset: 0x0034 */
    __IO uint32_t GPIO0C_IE;                          /* Address Offset: 0x0038 */
    __IO uint32_t GPIO0D_IE;                          /* Address Offset: 0x003C */
    __IO uint32_t GPIO0B_SMT;                         /* Address Offset: 0x0040 */
    __IO uint32_t GPIO0C_SMT;                         /* Address Offset: 0x0044 */
    __IO uint32_t GPIO0D_SMT;                         /* Address Offset: 0x0048 */
    __IO uint32_t GPIO0B_PDIS;                        /* Address Offset: 0x004C */
    __IO uint32_t GPIO0C_PDIS;                        /* Address Offset: 0x0050 */
    __IO uint32_t GPIO0D_PDIS;                        /* Address Offset: 0x0054 */
};
/* BUS_IOC Register Structure Define */
struct BUS_IOC_REG {
         uint32_t RESERVED0000[3];                    /* Address Offset: 0x0000 */
    __IO uint32_t GPIO0B_IOMUX_SEL_H;                 /* Address Offset: 0x000C */
    __IO uint32_t GPIO0C_IOMUX_SEL_L;                 /* Address Offset: 0x0010 */
    __IO uint32_t GPIO0C_IOMUX_SEL_H;                 /* Address Offset: 0x0014 */
    __IO uint32_t GPIO0D_IOMUX_SEL_L;                 /* Address Offset: 0x0018 */
    __IO uint32_t GPIO0D_IOMUX_SEL_H;                 /* Address Offset: 0x001C */
    __IO uint32_t GPIO1A_IOMUX_SEL_L;                 /* Address Offset: 0x0020 */
    __IO uint32_t GPIO1A_IOMUX_SEL_H;                 /* Address Offset: 0x0024 */
    __IO uint32_t GPIO1B_IOMUX_SEL_L;                 /* Address Offset: 0x0028 */
    __IO uint32_t GPIO1B_IOMUX_SEL_H;                 /* Address Offset: 0x002C */
    __IO uint32_t GPIO1C_IOMUX_SEL_L;                 /* Address Offset: 0x0030 */
    __IO uint32_t GPIO1C_IOMUX_SEL_H;                 /* Address Offset: 0x0034 */
    __IO uint32_t GPIO1D_IOMUX_SEL_L;                 /* Address Offset: 0x0038 */
    __IO uint32_t GPIO1D_IOMUX_SEL_H;                 /* Address Offset: 0x003C */
    __IO uint32_t GPIO2A_IOMUX_SEL_L;                 /* Address Offset: 0x0040 */
    __IO uint32_t GPIO2A_IOMUX_SEL_H;                 /* Address Offset: 0x0044 */
    __IO uint32_t GPIO2B_IOMUX_SEL_L;                 /* Address Offset: 0x0048 */
    __IO uint32_t GPIO2B_IOMUX_SEL_H;                 /* Address Offset: 0x004C */
    __IO uint32_t GPIO2C_IOMUX_SEL_L;                 /* Address Offset: 0x0050 */
    __IO uint32_t GPIO2C_IOMUX_SEL_H;                 /* Address Offset: 0x0054 */
    __IO uint32_t GPIO2D_IOMUX_SEL_L;                 /* Address Offset: 0x0058 */
    __IO uint32_t GPIO2D_IOMUX_SEL_H;                 /* Address Offset: 0x005C */
    __IO uint32_t GPIO3A_IOMUX_SEL_L;                 /* Address Offset: 0x0060 */
    __IO uint32_t GPIO3A_IOMUX_SEL_H;                 /* Address Offset: 0x0064 */
    __IO uint32_t GPIO3B_IOMUX_SEL_L;                 /* Address Offset: 0x0068 */
    __IO uint32_t GPIO3B_IOMUX_SEL_H;                 /* Address Offset: 0x006C */
    __IO uint32_t GPIO3C_IOMUX_SEL_L;                 /* Address Offset: 0x0070 */
    __IO uint32_t GPIO3C_IOMUX_SEL_H;                 /* Address Offset: 0x0074 */
    __IO uint32_t GPIO3D_IOMUX_SEL_L;                 /* Address Offset: 0x0078 */
    __IO uint32_t GPIO3D_IOMUX_SEL_H;                 /* Address Offset: 0x007C */
    __IO uint32_t GPIO4A_IOMUX_SEL_L;                 /* Address Offset: 0x0080 */
    __IO uint32_t GPIO4A_IOMUX_SEL_H;                 /* Address Offset: 0x0084 */
    __IO uint32_t GPIO4B_IOMUX_SEL_L;                 /* Address Offset: 0x0088 */
    __IO uint32_t GPIO4B_IOMUX_SEL_H;                 /* Address Offset: 0x008C */
    __IO uint32_t GPIO4C_IOMUX_SEL_L;                 /* Address Offset: 0x0090 */
    __IO uint32_t GPIO4C_IOMUX_SEL_H;                 /* Address Offset: 0x0094 */
    __IO uint32_t GPIO4D_IOMUX_SEL_L;                 /* Address Offset: 0x0098 */
    __IO uint32_t GPIO4D_IOMUX_SEL_H;                 /* Address Offset: 0x009C */
};
/* UART Register Structure Define */
struct UART_REG {
    union {
        __I  uint32_t RBR;                                /* Address Offset: 0x0000 */
        __IO uint32_t DLL;                                /* Address Offset: 0x0000 */
        __O  uint32_t THR;                                /* Address Offset: 0x0000 */
    };
    union {
        __IO uint32_t DLH;                                /* Address Offset: 0x0004 */
        __IO uint32_t IER;                                /* Address Offset: 0x0004 */
    };
    union {
        __O  uint32_t FCR;                                /* Address Offset: 0x0008 */
        __I  uint32_t IIR;                                /* Address Offset: 0x0008 */
    };
    __IO uint32_t LCR;                                /* Address Offset: 0x000C */
    __IO uint32_t MCR;                                /* Address Offset: 0x0010 */
    __I  uint32_t LSR;                                /* Address Offset: 0x0014 */
    __I  uint32_t MSR;                                /* Address Offset: 0x0018 */
    __IO uint32_t SCR;                                /* Address Offset: 0x001C */
         uint32_t RESERVED0020[4];                    /* Address Offset: 0x0020 */
    union {
        __I  uint32_t SRBR;                               /* Address Offset: 0x0030 */
        __O  uint32_t STHR;                               /* Address Offset: 0x0030 */
    };
         uint32_t RESERVED0034[15];                   /* Address Offset: 0x0034 */
    __IO uint32_t FAR;                                /* Address Offset: 0x0070 */
    __I  uint32_t TFR;                                /* Address Offset: 0x0074 */
    __O  uint32_t RFW;                                /* Address Offset: 0x0078 */
    __I  uint32_t USR;                                /* Address Offset: 0x007C */
    __I  uint32_t TFL;                                /* Address Offset: 0x0080 */
    __I  uint32_t RFL;                                /* Address Offset: 0x0084 */
    __O  uint32_t SRR;                                /* Address Offset: 0x0088 */
    __IO uint32_t SRTS;                               /* Address Offset: 0x008C */
    __IO uint32_t SBCR;                               /* Address Offset: 0x0090 */
    __IO uint32_t SDMAM;                              /* Address Offset: 0x0094 */
    __IO uint32_t SFE;                                /* Address Offset: 0x0098 */
    __IO uint32_t SRT;                                /* Address Offset: 0x009C */
    __IO uint32_t STET;                               /* Address Offset: 0x00A0 */
    __IO uint32_t HTX;                                /* Address Offset: 0x00A4 */
    __O  uint32_t DMASA;                              /* Address Offset: 0x00A8 */
         uint32_t RESERVED00AC[18];                   /* Address Offset: 0x00AC */
    __I  uint32_t CPR;                                /* Address Offset: 0x00F4 */
    __I  uint32_t UCV;                                /* Address Offset: 0x00F8 */
    __I  uint32_t CTR;                                /* Address Offset: 0x00FC */
};
/* WDT Register Structure Define */
struct WDT_REG {
    __IO uint32_t CR;                                 /* Address Offset: 0x0000 */
    __IO uint32_t TORR;                               /* Address Offset: 0x0004 */
    __I  uint32_t CCVR;                               /* Address Offset: 0x0008 */
    __O  uint32_t CRR;                                /* Address Offset: 0x000C */
    __I  uint32_t STAT;                               /* Address Offset: 0x0010 */
    __I  uint32_t EOI;                                /* Address Offset: 0x0014 */
};
/* TIMER Register Structure Define */
struct TIMER_REG {
    __IO uint32_t LOAD_COUNT[2];                      /* Address Offset: 0x0000 */
    __I  uint32_t CURRENT_VALUE[2];                   /* Address Offset: 0x0008 */
    __IO uint32_t CONTROLREG;                         /* Address Offset: 0x0010 */
         uint32_t RESERVED0014;                       /* Address Offset: 0x0014 */
    __IO uint32_t INTSTATUS;                          /* Address Offset: 0x0018 */
};
/* FSPI Register Structure Define */
struct FSPI_REG {
    __IO uint32_t CTRL0;                              /* Address Offset: 0x0000 */
    __IO uint32_t IMR;                                /* Address Offset: 0x0004 */
    __IO uint32_t ICLR;                               /* Address Offset: 0x0008 */
    __IO uint32_t FTLR;                               /* Address Offset: 0x000C */
    __IO uint32_t RCVR;                               /* Address Offset: 0x0010 */
    __IO uint32_t AX0;                                /* Address Offset: 0x0014 */
    __IO uint32_t ABIT0;                              /* Address Offset: 0x0018 */
    __IO uint32_t ISR;                                /* Address Offset: 0x001C */
    __IO uint32_t FSR;                                /* Address Offset: 0x0020 */
    __I  uint32_t SR;                                 /* Address Offset: 0x0024 */
    __I  uint32_t RISR;                               /* Address Offset: 0x0028 */
    __I  uint32_t VER;                                /* Address Offset: 0x002C */
    __IO uint32_t QOP;                                /* Address Offset: 0x0030 */
    __IO uint32_t EXT_CTRL;                           /* Address Offset: 0x0034 */
         uint32_t RESERVED0038;                       /* Address Offset: 0x0038 */
    __IO uint32_t DLL_CTRL0;                          /* Address Offset: 0x003C */
         uint32_t RESERVED0040;                       /* Address Offset: 0x0040 */
    __IO uint32_t EXT_AX;                             /* Address Offset: 0x0044 */
    __IO uint32_t SCLK_INATM_CNT;                     /* Address Offset: 0x0048 */
         uint32_t RESERVED004C;                       /* Address Offset: 0x004C */
    __O  uint32_t XMMC_WCMD0;                         /* Address Offset: 0x0050 */
    __O  uint32_t XMMC_RCMD0;                         /* Address Offset: 0x0054 */
    __IO uint32_t XMMC_CTRL;                          /* Address Offset: 0x0058 */
    __IO uint32_t MODE;                               /* Address Offset: 0x005C */
    __IO uint32_t DEVRGN;                             /* Address Offset: 0x0060 */
    __IO uint32_t DEVSIZE0;                           /* Address Offset: 0x0064 */
    __IO uint32_t TME0;                               /* Address Offset: 0x0068 */
         uint32_t RESERVED006C;                       /* Address Offset: 0x006C */
    __IO uint32_t XMMC_RX_WTMRK;                      /* Address Offset: 0x0070 */
         uint32_t RESERVED0074[3];                    /* Address Offset: 0x0074 */
    __IO uint32_t DMATR;                              /* Address Offset: 0x0080 */
    __IO uint32_t DMAADDR;                            /* Address Offset: 0x0084 */
    __IO uint32_t LEN_CTRL;                           /* Address Offset: 0x0088 */
    __IO uint32_t LEN_EXT;                            /* Address Offset: 0x008C */
         uint32_t RESERVED0090;                       /* Address Offset: 0x0090 */
    __IO uint32_t XMMCSR;                             /* Address Offset: 0x0094 */
         uint32_t RESERVED0098[26];                   /* Address Offset: 0x0098 */
    __O  uint32_t CMD;                                /* Address Offset: 0x0100 */
    __O  uint32_t ADDR;                               /* Address Offset: 0x0104 */
    __IO uint32_t DATA;                               /* Address Offset: 0x0108 */
         uint32_t RESERVED010C[61];                   /* Address Offset: 0x010C */
    __IO uint32_t CTRL1;                              /* Address Offset: 0x0200 */
         uint32_t RESERVED0204[4];                    /* Address Offset: 0x0204 */
    __IO uint32_t AX1;                                /* Address Offset: 0x0214 */
    __IO uint32_t ABIT1;                              /* Address Offset: 0x0218 */
         uint32_t RESERVED021C[8];                    /* Address Offset: 0x021C */
    __IO uint32_t DLL_CTRL1;                          /* Address Offset: 0x023C */
         uint32_t RESERVED0240[4];                    /* Address Offset: 0x0240 */
    __O  uint32_t XMMC_WCMD1;                         /* Address Offset: 0x0250 */
    __O  uint32_t XMMC_RCMD1;                         /* Address Offset: 0x0254 */
         uint32_t RESERVED0258[3];                    /* Address Offset: 0x0258 */
    __IO uint32_t DEVSIZE1;                           /* Address Offset: 0x0264 */
    __IO uint32_t TME1;                               /* Address Offset: 0x0268 */
};
/* SPI Register Structure Define */
struct SPI_REG {
    __IO uint32_t CTRLR[2];                           /* Address Offset: 0x0000 */
    __IO uint32_t ENR;                                /* Address Offset: 0x0008 */
    __IO uint32_t SER;                                /* Address Offset: 0x000C */
    __IO uint32_t BAUDR;                              /* Address Offset: 0x0010 */
    __IO uint32_t TXFTLR;                             /* Address Offset: 0x0014 */
    __IO uint32_t RXFTLR;                             /* Address Offset: 0x0018 */
    __I  uint32_t TXFLR;                              /* Address Offset: 0x001C */
    __I  uint32_t RXFLR;                              /* Address Offset: 0x0020 */
    __I  uint32_t SR;                                 /* Address Offset: 0x0024 */
    __IO uint32_t IPR;                                /* Address Offset: 0x0028 */
    __IO uint32_t IMR;                                /* Address Offset: 0x002C */
    __IO uint32_t ISR;                                /* Address Offset: 0x0030 */
    __IO uint32_t RISR;                               /* Address Offset: 0x0034 */
    __O  uint32_t ICR;                                /* Address Offset: 0x0038 */
    __IO uint32_t DMACR;                              /* Address Offset: 0x003C */
    __IO uint32_t DMATDLR;                            /* Address Offset: 0x0040 */
    __IO uint32_t DMARDLR;                            /* Address Offset: 0x0044 */
         uint32_t RESERVED0048;                       /* Address Offset: 0x0048 */
    __IO uint32_t TIMEOUT;                            /* Address Offset: 0x004C */
    __IO uint32_t BYPASS;                             /* Address Offset: 0x0050 */
         uint32_t RESERVED0054[235];                  /* Address Offset: 0x0054 */
    __O  uint32_t TXDR;                               /* Address Offset: 0x0400 */
         uint32_t RESERVED0404[255];                  /* Address Offset: 0x0404 */
    __I  uint32_t RXDR;                               /* Address Offset: 0x0800 */
};
/* MBOX Register Structure Define */
struct MBOX_CMD_DAT {
    __IO uint32_t CMD;
    __IO uint32_t DATA;
};
struct MBOX_REG {
    __IO uint32_t A2B_INTEN;                          /* Address Offset: 0x0000 */
    __IO uint32_t A2B_STATUS;                         /* Address Offset: 0x0004 */
    struct MBOX_CMD_DAT A2B[4];                       /* Address Offset: 0x0008 */
    __IO uint32_t B2A_INTEN;                          /* Address Offset: 0x0028 */
    __IO uint32_t B2A_STATUS;                         /* Address Offset: 0x002C */
    struct MBOX_CMD_DAT B2A[4];                       /* Address Offset: 0x0030 */
         uint32_t RESERVED0050[44];                   /* Address Offset: 0x0050 */
    __IO uint32_t ATOMIC_LOCK[32];                    /* Address Offset: 0x0100 */
};
/* INTMUX Register Structure Define */
struct INTMUX_REG {
};
/* INTMUX0_ Register Structure Define */
struct INTMUX0__REG {
};
#endif /*  __ASSEMBLY__  */
/****************************************************************************************/
/*                                                                                      */
/*                                Module Address Section                                */
/*                                                                                      */
/****************************************************************************************/
/* Memory Base */
#define DCACHE_BASE                    0xF6F10000U /* DCACHE base address */
#define ICACHE_BASE                    0xF6F10000U /* ICACHE base address */
#define PMU1_IOC_BASE                  0xFD5F0000U /* PMU1_IOC base address */
#define PMU2_IOC_BASE                  0xFD5F4000U /* PMU2_IOC base address */
#define BUS_IOC_BASE                   0xFD5F8000U /* BUS_IOC base address */
#define UART0_BASE                     0xFD890000U /* UART0 base address */
#define WDTPMU_BASE                    0xFD8E0000U /* WDTPMU base address */
#define TIMERPMU_BASE                  0xFD8F0000U /* TIMERPMU base address */
#define WDTNPU_BASE                    0xFDAF8000U /* WDTNPU base address */
#define TIMERNPU_BASE                  0xFDB00000U /* TIMERNPU base address */
#define WDTDDR_BASE                    0xFE110000U /* WDTDDR base address */
#define TIMERDDR_BASE                  0xFE118000U /* TIMERDDR base address */
#define FSPI_BASE                      0xFE2B0000U /* FSPI base address */
#define SPI0_BASE                      0xFEB00000U /* SPI0 base address */
#define SPI1_BASE                      0xFEB10000U /* SPI1 base address */
#define SPI2_BASE                      0xFEB20000U /* SPI2 base address */
#define UART1_BASE                     0xFEB40000U /* UART1 base address */
#define UART2_BASE                     0xFEB50000U /* UART2 base address */
#define UART3_BASE                     0xFEB60000U /* UART3 base address */
#define UART4_BASE                     0xFEB70000U /* UART4 base address */
#define UART5_BASE                     0xFEB80000U /* UART5 base address */
#define UART6_BASE                     0xFEB90000U /* UART6 base address */
#define UART7_BASE                     0xFEBA0000U /* UART7 base address */
#define UART8_BASE                     0xFEBB0000U /* UART8 base address */
#define UART9_BASE                     0xFEBC0000U /* UART9 base address */
#define MBOX0_BASE                     0xFEC60000U /* MBOX0 base address */
#define MBOX1_BASE                     0xFEC70000U /* MBOX1 base address */
#define MBOX2_BASE                     0xFECE0000U /* MBOX2 base address */
#define INTMUX0_PMU_BASE               0xFECF0000U /* INTMUX0_PMU base address */
#define INTMUX1_PMU_BASE               0xFECF4000U /* INTMUX1_PMU base address */
#define INTMUX0_DDR_BASE               0xFECF8000U /* INTMUX0_DDR base address */
#define INTMUX1_DDR_BASE               0xFECFC000U /* INTMUX1_DDR base address */
/****************************************************************************************/
/*                                                                                      */
/*                               Module Variable Section                                */
/*                                                                                      */
/****************************************************************************************/
/* Module Variable Define */

#define DCACHE              ((struct DCACHE_REG *) DCACHE_BASE)
#define ICACHE              ((struct ICACHE_REG *) ICACHE_BASE)
#define PMU1_IOC            ((struct PMU1_IOC_REG *) PMU1_IOC_BASE)
#define PMU2_IOC            ((struct PMU2_IOC_REG *) PMU2_IOC_BASE)
#define BUS_IOC             ((struct BUS_IOC_REG *) BUS_IOC_BASE)
#define UART0               ((struct UART_REG *) UART0_BASE)
#define WDTPMU              ((struct WDTPMU_REG *) WDTPMU_BASE)
#define TIMERPMU            ((struct TIMERPMU_REG *) TIMERPMU_BASE)
#define WDTNPU              ((struct WDTNPU_REG *) WDTNPU_BASE)
#define TIMERNPU            ((struct TIMERNPU_REG *) TIMERNPU_BASE)
#define WDTDDR              ((struct WDTDDR_REG *) WDTDDR_BASE)
#define TIMERDDR            ((struct TIMERDDR_REG *) TIMERDDR_BASE)
#define FSPI                ((struct FSPI_REG *) FSPI_BASE)
#define SPI0                ((struct SPI_REG *) SPI0_BASE)
#define SPI1                ((struct SPI_REG *) SPI1_BASE)
#define SPI2                ((struct SPI_REG *) SPI2_BASE)
#define UART1               ((struct UART_REG *) UART1_BASE)
#define UART2               ((struct UART_REG *) UART2_BASE)
#define UART3               ((struct UART_REG *) UART3_BASE)
#define UART4               ((struct UART_REG *) UART4_BASE)
#define UART5               ((struct UART_REG *) UART5_BASE)
#define UART6               ((struct UART_REG *) UART6_BASE)
#define UART7               ((struct UART_REG *) UART7_BASE)
#define UART8               ((struct UART_REG *) UART8_BASE)
#define UART9               ((struct UART_REG *) UART9_BASE)
#define MBOX0               ((struct MBOX_REG *) MBOX0_BASE)
#define MBOX1               ((struct MBOX_REG *) MBOX1_BASE)
#define MBOX2               ((struct MBOX_REG *) MBOX2_BASE)
#define INTMUX0_PMU         ((struct INTMUX0_PMU_REG *) INTMUX0_PMU_BASE)
#define INTMUX1_PMU         ((struct INTMUX1_PMU_REG *) INTMUX1_PMU_BASE)
#define INTMUX0_DDR         ((struct INTMUX0_DDR_REG *) INTMUX0_DDR_BASE)
#define INTMUX1_DDR         ((struct INTMUX1_DDR_REG *) INTMUX1_DDR_BASE)

#define IS_DCACHE_INSTANCE(instance) ((instance) == DCACHE)
#define IS_ICACHE_INSTANCE(instance) ((instance) == ICACHE)
#define IS_PMU1_IOC_INSTANCE(instance) ((instance) == PMU1_IOC)
#define IS_PMU2_IOC_INSTANCE(instance) ((instance) == PMU2_IOC)
#define IS_BUS_IOC_INSTANCE(instance) ((instance) == BUS_IOC)
#define IS_WDTPMU_INSTANCE(instance) ((instance) == WDTPMU)
#define IS_TIMERPMU_INSTANCE(instance) ((instance) == TIMERPMU)
#define IS_WDTNPU_INSTANCE(instance) ((instance) == WDTNPU)
#define IS_TIMERNPU_INSTANCE(instance) ((instance) == TIMERNPU)
#define IS_WDTDDR_INSTANCE(instance) ((instance) == WDTDDR)
#define IS_TIMERDDR_INSTANCE(instance) ((instance) == TIMERDDR)
#define IS_FSPI_INSTANCE(instance) ((instance) == FSPI)
#define IS_INTMUX0_PMU_INSTANCE(instance) ((instance) == INTMUX0_PMU)
#define IS_INTMUX1_PMU_INSTANCE(instance) ((instance) == INTMUX1_PMU)
#define IS_INTMUX0_DDR_INSTANCE(instance) ((instance) == INTMUX0_DDR)
#define IS_INTMUX1_DDR_INSTANCE(instance) ((instance) == INTMUX1_DDR)
#define IS_UART_INSTANCE(instance) (((instance) == UART0) || ((instance) == UART1) || ((instance) == UART2) || ((instance) == UART3) || ((instance) == UART4) || ((instance) == UART5) || ((instance) == UART6) || ((instance) == UART7) || ((instance) == UART8) || ((instance) == UART9))
#define IS_SPI_INSTANCE(instance) (((instance) == SPI0) || ((instance) == SPI1) || ((instance) == SPI2))
#define IS_MBOX_INSTANCE(instance) (((instance) == MBOX0) || ((instance) == MBOX1) || ((instance) == MBOX2))
/****************************************************************************************/
/*                                                                                      */
/*                               Register Bitmap Section                                */
/*                                                                                      */
/****************************************************************************************/
/*****************************************DCACHE*****************************************/
/* CACHE_CTRL */
#define DCACHE_CACHE_CTRL_OFFSET                           (0x0U)
#define DCACHE_CACHE_CTRL_CACHE_EN_SHIFT                   (0U)
#define DCACHE_CACHE_CTRL_CACHE_EN_MASK                    (0x1U << DCACHE_CACHE_CTRL_CACHE_EN_SHIFT)                   /* 0x00000001 */
#define DCACHE_CACHE_CTRL_CACHE_WT_EN_SHIFT                (1U)
#define DCACHE_CACHE_CTRL_CACHE_WT_EN_MASK                 (0x1U << DCACHE_CACHE_CTRL_CACHE_WT_EN_SHIFT)                /* 0x00000002 */
#define DCACHE_CACHE_CTRL_CACHE_HB_EN_SHIFT                (2U)
#define DCACHE_CACHE_CTRL_CACHE_HB_EN_MASK                 (0x1U << DCACHE_CACHE_CTRL_CACHE_HB_EN_SHIFT)                /* 0x00000004 */
#define DCACHE_CACHE_CTRL_CACHE_STB_EN_SHIFT               (3U)
#define DCACHE_CACHE_CTRL_CACHE_STB_EN_MASK                (0x1U << DCACHE_CACHE_CTRL_CACHE_STB_EN_SHIFT)               /* 0x00000008 */
#define DCACHE_CACHE_CTRL_CACHE_FLUSH_SHIFT                (4U)
#define DCACHE_CACHE_CTRL_CACHE_FLUSH_MASK                 (0x1U << DCACHE_CACHE_CTRL_CACHE_FLUSH_SHIFT)                /* 0x00000010 */
#define DCACHE_CACHE_CTRL_CACHE_PMU_EN_SHIFT               (5U)
#define DCACHE_CACHE_CTRL_CACHE_PMU_EN_MASK                (0x1U << DCACHE_CACHE_CTRL_CACHE_PMU_EN_SHIFT)               /* 0x00000020 */
#define DCACHE_CACHE_CTRL_CACHE_BYPASS_SHIFT               (6U)
#define DCACHE_CACHE_CTRL_CACHE_BYPASS_MASK                (0x1U << DCACHE_CACHE_CTRL_CACHE_BYPASS_SHIFT)               /* 0x00000040 */
#define DCACHE_CACHE_CTRL_STB_TIMEOUT_EN_SHIFT             (7U)
#define DCACHE_CACHE_CTRL_STB_TIMEOUT_EN_MASK              (0x1U << DCACHE_CACHE_CTRL_STB_TIMEOUT_EN_SHIFT)             /* 0x00000080 */
#define DCACHE_CACHE_CTRL_CACHE_ENTRY_THRESH_SHIFT         (8U)
#define DCACHE_CACHE_CTRL_CACHE_ENTRY_THRESH_MASK          (0x7U << DCACHE_CACHE_CTRL_CACHE_ENTRY_THRESH_SHIFT)         /* 0x00000700 */
#define DCACHE_CACHE_CTRL_CACHE_MPU_MODE_SHIFT             (12U)
#define DCACHE_CACHE_CTRL_CACHE_MPU_MODE_MASK              (0x1U << DCACHE_CACHE_CTRL_CACHE_MPU_MODE_SHIFT)             /* 0x00001000 */
#define DCACHE_CACHE_CTRL_CACHE_PF_EN_SHIFT                (13U)
#define DCACHE_CACHE_CTRL_CACHE_PF_EN_MASK                 (0x1U << DCACHE_CACHE_CTRL_CACHE_PF_EN_SHIFT)                /* 0x00002000 */
/* CACHE_MAINTAIN0 */
#define DCACHE_CACHE_MAINTAIN0_OFFSET                      (0x4U)
#define DCACHE_CACHE_MAINTAIN0_CACHE_M_VALID_SHIFT         (0U)
#define DCACHE_CACHE_MAINTAIN0_CACHE_M_VALID_MASK          (0x1U << DCACHE_CACHE_MAINTAIN0_CACHE_M_VALID_SHIFT)         /* 0x00000001 */
#define DCACHE_CACHE_MAINTAIN0_CACHE_M_CMD_SHIFT           (1U)
#define DCACHE_CACHE_MAINTAIN0_CACHE_M_CMD_MASK            (0x3U << DCACHE_CACHE_MAINTAIN0_CACHE_M_CMD_SHIFT)           /* 0x00000006 */
#define DCACHE_CACHE_MAINTAIN0_CACHE_M_ADDR_SHIFT          (5U)
#define DCACHE_CACHE_MAINTAIN0_CACHE_M_ADDR_MASK           (0x7FFFFFFU << DCACHE_CACHE_MAINTAIN0_CACHE_M_ADDR_SHIFT)    /* 0xFFFFFFE0 */
/* CACHE_MAINTAIN1 */
#define DCACHE_CACHE_MAINTAIN1_OFFSET                      (0x8U)
#define DCACHE_CACHE_MAINTAIN1_CACHE_M_OFFSET_SHIFT        (0U)
#define DCACHE_CACHE_MAINTAIN1_CACHE_M_OFFSET_MASK         (0xFFFFU << DCACHE_CACHE_MAINTAIN1_CACHE_M_OFFSET_SHIFT)     /* 0x0000FFFF */
/* STB_TIMEOUT_CTRL */
#define DCACHE_STB_TIMEOUT_CTRL_OFFSET                     (0xCU)
#define DCACHE_STB_TIMEOUT_CTRL_STB_TIMEOUT_VALUE_SHIFT    (0U)
#define DCACHE_STB_TIMEOUT_CTRL_STB_TIMEOUT_VALUE_MASK     (0x7FFFFU << DCACHE_STB_TIMEOUT_CTRL_STB_TIMEOUT_VALUE_SHIFT) /* 0x0007FFFF */
/* CACHE_INT_EN */
#define DCACHE_CACHE_INT_EN_OFFSET                         (0x20U)
#define DCACHE_CACHE_INT_EN_ERR_RECORD_EN_SHIFT            (0U)
#define DCACHE_CACHE_INT_EN_ERR_RECORD_EN_MASK             (0x1U << DCACHE_CACHE_INT_EN_ERR_RECORD_EN_SHIFT)            /* 0x00000001 */
/* CACHE_INT_ST */
#define DCACHE_CACHE_INT_ST_OFFSET                         (0x24U)
#define DCACHE_CACHE_INT_ST_AHB_ERROR_STATUS_SHIFT         (0U)
#define DCACHE_CACHE_INT_ST_AHB_ERROR_STATUS_MASK          (0x1U << DCACHE_CACHE_INT_ST_AHB_ERROR_STATUS_SHIFT)         /* 0x00000001 */
/* CACHE_ERR_HADDR */
#define DCACHE_CACHE_ERR_HADDR_OFFSET                      (0x28U)
#define DCACHE_CACHE_ERR_HADDR_STATUS_HADDR_SHIFT          (0U)
#define DCACHE_CACHE_ERR_HADDR_STATUS_HADDR_MASK           (0x1U << DCACHE_CACHE_ERR_HADDR_STATUS_HADDR_SHIFT)          /* 0x00000001 */
/* CACHE_STATUS */
#define DCACHE_CACHE_STATUS_OFFSET                         (0x30U)
#define DCACHE_CACHE_STATUS                                (0x0U)
#define DCACHE_CACHE_STATUS_CACHE_INIT_FINISH_SHIFT        (0U)
#define DCACHE_CACHE_STATUS_CACHE_INIT_FINISH_MASK         (0x1U << DCACHE_CACHE_STATUS_CACHE_INIT_FINISH_SHIFT)        /* 0x00000001 */
#define DCACHE_CACHE_STATUS_CACHE_M_BUSY_SHIFT             (1U)
#define DCACHE_CACHE_STATUS_CACHE_M_BUSY_MASK              (0x1U << DCACHE_CACHE_STATUS_CACHE_M_BUSY_SHIFT)             /* 0x00000002 */
#define DCACHE_CACHE_STATUS_CACHE_FLUSH_DONE_SHIFT         (2U)
#define DCACHE_CACHE_STATUS_CACHE_FLUSH_DONE_MASK          (0x1U << DCACHE_CACHE_STATUS_CACHE_FLUSH_DONE_SHIFT)         /* 0x00000004 */
/* PMU_RD_NUM_CNT */
#define DCACHE_PMU_RD_NUM_CNT_OFFSET                       (0x40U)
#define DCACHE_PMU_RD_NUM_CNT                              (0x0U)
#define DCACHE_PMU_RD_NUM_CNT_PMU_RD_NUM_CNT_SHIFT         (0U)
#define DCACHE_PMU_RD_NUM_CNT_PMU_RD_NUM_CNT_MASK          (0xFFFFFFFFU << DCACHE_PMU_RD_NUM_CNT_PMU_RD_NUM_CNT_SHIFT)  /* 0xFFFFFFFF */
/* PMU_WR_NUM_CNT */
#define DCACHE_PMU_WR_NUM_CNT_OFFSET                       (0x44U)
#define DCACHE_PMU_WR_NUM_CNT                              (0x0U)
#define DCACHE_PMU_WR_NUM_CNT_PMU_WR_NUM_CNT_SHIFT         (0U)
#define DCACHE_PMU_WR_NUM_CNT_PMU_WR_NUM_CNT_MASK          (0xFFFFFFFFU << DCACHE_PMU_WR_NUM_CNT_PMU_WR_NUM_CNT_SHIFT)  /* 0xFFFFFFFF */
/* PMU_SRAM_RD_HIT_CNT */
#define DCACHE_PMU_SRAM_RD_HIT_CNT_OFFSET                  (0x48U)
#define DCACHE_PMU_SRAM_RD_HIT_CNT                         (0x0U)
#define DCACHE_PMU_SRAM_RD_HIT_CNT_PMU_SRAM_RD_HIT_CNT_SHIFT (0U)
#define DCACHE_PMU_SRAM_RD_HIT_CNT_PMU_SRAM_RD_HIT_CNT_MASK (0xFFFFFFFFU << DCACHE_PMU_SRAM_RD_HIT_CNT_PMU_SRAM_RD_HIT_CNT_SHIFT) /* 0xFFFFFFFF */
/* PMU_HB_RD_HIT_CNT */
#define DCACHE_PMU_HB_RD_HIT_CNT_OFFSET                    (0x4CU)
#define DCACHE_PMU_HB_RD_HIT_CNT                           (0x0U)
#define DCACHE_PMU_HB_RD_HIT_CNT_PMU_HB_RD_HIT_CNT_SHIFT   (0U)
#define DCACHE_PMU_HB_RD_HIT_CNT_PMU_HB_RD_HIT_CNT_MASK    (0xFFFFFFFFU << DCACHE_PMU_HB_RD_HIT_CNT_PMU_HB_RD_HIT_CNT_SHIFT) /* 0xFFFFFFFF */
/* PMU_STB_RD_HIT_CNT */
#define DCACHE_PMU_STB_RD_HIT_CNT_OFFSET                   (0x50U)
#define DCACHE_PMU_STB_RD_HIT_CNT_PMU_STB_RD_HIT_CNT_SHIFT (0U)
#define DCACHE_PMU_STB_RD_HIT_CNT_PMU_STB_RD_HIT_CNT_MASK  (0xFFFFFFFFU << DCACHE_PMU_STB_RD_HIT_CNT_PMU_STB_RD_HIT_CNT_SHIFT) /* 0xFFFFFFFF */
/* PMU_RD_HIT_CNT */
#define DCACHE_PMU_RD_HIT_CNT_OFFSET                       (0x54U)
#define DCACHE_PMU_RD_HIT_CNT                              (0x0U)
#define DCACHE_PMU_RD_HIT_CNT_PMU_RD_HIT_CNT_SHIFT         (0U)
#define DCACHE_PMU_RD_HIT_CNT_PMU_RD_HIT_CNT_MASK          (0xFFFFFFFFU << DCACHE_PMU_RD_HIT_CNT_PMU_RD_HIT_CNT_SHIFT)  /* 0xFFFFFFFF */
/* PMU_WR_HIT_CNT */
#define DCACHE_PMU_WR_HIT_CNT_OFFSET                       (0x58U)
#define DCACHE_PMU_WR_HIT_CNT                              (0x0U)
#define DCACHE_PMU_WR_HIT_CNT_PMU_WR_HIT_CNT_SHIFT         (0U)
#define DCACHE_PMU_WR_HIT_CNT_PMU_WR_HIT_CNT_MASK          (0xFFFFFFFFU << DCACHE_PMU_WR_HIT_CNT_PMU_WR_HIT_CNT_SHIFT)  /* 0xFFFFFFFF */
/* PMU_RD_MISS_PENALTY_CNT */
#define DCACHE_PMU_RD_MISS_PENALTY_CNT_OFFSET              (0x5CU)
#define DCACHE_PMU_RD_MISS_PENALTY_CNT                     (0x0U)
#define DCACHE_PMU_RD_MISS_PENALTY_CNT_PMU_RD_MISS_PENALTY_CNT_SHIFT (0U)
#define DCACHE_PMU_RD_MISS_PENALTY_CNT_PMU_RD_MISS_PENALTY_CNT_MASK (0xFFFFFFFFU << DCACHE_PMU_RD_MISS_PENALTY_CNT_PMU_RD_MISS_PENALTY_CNT_SHIFT) /* 0xFFFFFFFF */
/* PMU_WR_MISS_PENALTY_CNT */
#define DCACHE_PMU_WR_MISS_PENALTY_CNT_OFFSET              (0x60U)
#define DCACHE_PMU_WR_MISS_PENALTY_CNT                     (0x0U)
#define DCACHE_PMU_WR_MISS_PENALTY_CNT_PMU_WR_MISS_PENALTY_CNT_SHIFT (0U)
#define DCACHE_PMU_WR_MISS_PENALTY_CNT_PMU_WR_MISS_PENALTY_CNT_MASK (0xFFFFFFFFU << DCACHE_PMU_WR_MISS_PENALTY_CNT_PMU_WR_MISS_PENALTY_CNT_SHIFT) /* 0xFFFFFFFF */
/* PMU_RD_LAT_CNT */
#define DCACHE_PMU_RD_LAT_CNT_OFFSET                       (0x64U)
#define DCACHE_PMU_RD_LAT_CNT                              (0x0U)
#define DCACHE_PMU_RD_LAT_CNT_PMU_RD_LAT_CNT_SHIFT         (0U)
#define DCACHE_PMU_RD_LAT_CNT_PMU_RD_LAT_CNT_MASK          (0xFFFFFFFFU << DCACHE_PMU_RD_LAT_CNT_PMU_RD_LAT_CNT_SHIFT)  /* 0xFFFFFFFF */
/* PMU_WR_LAT_CNT */
#define DCACHE_PMU_WR_LAT_CNT_OFFSET                       (0x68U)
#define DCACHE_PMU_WR_LAT_CNT                              (0x0U)
#define DCACHE_PMU_WR_LAT_CNT_PMU_RD_LAT_CNT_SHIFT         (0U)
#define DCACHE_PMU_WR_LAT_CNT_PMU_RD_LAT_CNT_MASK          (0xFFFFFFFFU << DCACHE_PMU_WR_LAT_CNT_PMU_RD_LAT_CNT_SHIFT)  /* 0xFFFFFFFF */
/* REVISION */
#define DCACHE_REVISION_OFFSET                             (0xF0U)
#define DCACHE_REVISION_REVISION_SHIFT                     (0U)
#define DCACHE_REVISION_REVISION_MASK                      (0xFFFFFFFFU << DCACHE_REVISION_REVISION_SHIFT)              /* 0xFFFFFFFF */
/*****************************************ICACHE*****************************************/
/* CACHE_CTRL */
#define ICACHE_CACHE_CTRL_OFFSET                           (0x0U)
#define ICACHE_CACHE_CTRL_CACHE_EN_SHIFT                   (0U)
#define ICACHE_CACHE_CTRL_CACHE_EN_MASK                    (0x1U << ICACHE_CACHE_CTRL_CACHE_EN_SHIFT)                   /* 0x00000001 */
#define ICACHE_CACHE_CTRL_CACHE_WT_EN_SHIFT                (1U)
#define ICACHE_CACHE_CTRL_CACHE_WT_EN_MASK                 (0x1U << ICACHE_CACHE_CTRL_CACHE_WT_EN_SHIFT)                /* 0x00000002 */
#define ICACHE_CACHE_CTRL_CACHE_HB_EN_SHIFT                (2U)
#define ICACHE_CACHE_CTRL_CACHE_HB_EN_MASK                 (0x1U << ICACHE_CACHE_CTRL_CACHE_HB_EN_SHIFT)                /* 0x00000004 */
#define ICACHE_CACHE_CTRL_CACHE_STB_EN_SHIFT               (3U)
#define ICACHE_CACHE_CTRL_CACHE_STB_EN_MASK                (0x1U << ICACHE_CACHE_CTRL_CACHE_STB_EN_SHIFT)               /* 0x00000008 */
#define ICACHE_CACHE_CTRL_CACHE_FLUSH_SHIFT                (4U)
#define ICACHE_CACHE_CTRL_CACHE_FLUSH_MASK                 (0x1U << ICACHE_CACHE_CTRL_CACHE_FLUSH_SHIFT)                /* 0x00000010 */
#define ICACHE_CACHE_CTRL_CACHE_PMU_EN_SHIFT               (5U)
#define ICACHE_CACHE_CTRL_CACHE_PMU_EN_MASK                (0x1U << ICACHE_CACHE_CTRL_CACHE_PMU_EN_SHIFT)               /* 0x00000020 */
#define ICACHE_CACHE_CTRL_CACHE_BYPASS_SHIFT               (6U)
#define ICACHE_CACHE_CTRL_CACHE_BYPASS_MASK                (0x1U << ICACHE_CACHE_CTRL_CACHE_BYPASS_SHIFT)               /* 0x00000040 */
#define ICACHE_CACHE_CTRL_STB_TIMEOUT_EN_SHIFT             (7U)
#define ICACHE_CACHE_CTRL_STB_TIMEOUT_EN_MASK              (0x1U << ICACHE_CACHE_CTRL_STB_TIMEOUT_EN_SHIFT)             /* 0x00000080 */
#define ICACHE_CACHE_CTRL_CACHE_ENTRY_THRESH_SHIFT         (8U)
#define ICACHE_CACHE_CTRL_CACHE_ENTRY_THRESH_MASK          (0x7U << ICACHE_CACHE_CTRL_CACHE_ENTRY_THRESH_SHIFT)         /* 0x00000700 */
#define ICACHE_CACHE_CTRL_CACHE_MPU_MODE_SHIFT             (12U)
#define ICACHE_CACHE_CTRL_CACHE_MPU_MODE_MASK              (0x1U << ICACHE_CACHE_CTRL_CACHE_MPU_MODE_SHIFT)             /* 0x00001000 */
#define ICACHE_CACHE_CTRL_CACHE_PF_EN_SHIFT                (13U)
#define ICACHE_CACHE_CTRL_CACHE_PF_EN_MASK                 (0x1U << ICACHE_CACHE_CTRL_CACHE_PF_EN_SHIFT)                /* 0x00002000 */
/* CACHE_MAINTAIN0 */
#define ICACHE_CACHE_MAINTAIN0_OFFSET                      (0x4U)
#define ICACHE_CACHE_MAINTAIN0_CACHE_M_VALID_SHIFT         (0U)
#define ICACHE_CACHE_MAINTAIN0_CACHE_M_VALID_MASK          (0x1U << ICACHE_CACHE_MAINTAIN0_CACHE_M_VALID_SHIFT)         /* 0x00000001 */
#define ICACHE_CACHE_MAINTAIN0_CACHE_M_CMD_SHIFT           (1U)
#define ICACHE_CACHE_MAINTAIN0_CACHE_M_CMD_MASK            (0x3U << ICACHE_CACHE_MAINTAIN0_CACHE_M_CMD_SHIFT)           /* 0x00000006 */
#define ICACHE_CACHE_MAINTAIN0_CACHE_M_ADDR_SHIFT          (5U)
#define ICACHE_CACHE_MAINTAIN0_CACHE_M_ADDR_MASK           (0x7FFFFFFU << ICACHE_CACHE_MAINTAIN0_CACHE_M_ADDR_SHIFT)    /* 0xFFFFFFE0 */
/* CACHE_MAINTAIN1 */
#define ICACHE_CACHE_MAINTAIN1_OFFSET                      (0x8U)
#define ICACHE_CACHE_MAINTAIN1_CACHE_M_OFFSET_SHIFT        (0U)
#define ICACHE_CACHE_MAINTAIN1_CACHE_M_OFFSET_MASK         (0xFFFFU << ICACHE_CACHE_MAINTAIN1_CACHE_M_OFFSET_SHIFT)     /* 0x0000FFFF */
/* STB_TIMEOUT_CTRL */
#define ICACHE_STB_TIMEOUT_CTRL_OFFSET                     (0xCU)
#define ICACHE_STB_TIMEOUT_CTRL_STB_TIMEOUT_VALUE_SHIFT    (0U)
#define ICACHE_STB_TIMEOUT_CTRL_STB_TIMEOUT_VALUE_MASK     (0x7FFFFU << ICACHE_STB_TIMEOUT_CTRL_STB_TIMEOUT_VALUE_SHIFT) /* 0x0007FFFF */
/* CACHE_INT_EN */
#define ICACHE_CACHE_INT_EN_OFFSET                         (0x20U)
#define ICACHE_CACHE_INT_EN_ERR_RECORD_EN_SHIFT            (0U)
#define ICACHE_CACHE_INT_EN_ERR_RECORD_EN_MASK             (0x1U << ICACHE_CACHE_INT_EN_ERR_RECORD_EN_SHIFT)            /* 0x00000001 */
/* CACHE_INT_ST */
#define ICACHE_CACHE_INT_ST_OFFSET                         (0x24U)
#define ICACHE_CACHE_INT_ST_AHB_ERROR_STATUS_SHIFT         (0U)
#define ICACHE_CACHE_INT_ST_AHB_ERROR_STATUS_MASK          (0x1U << ICACHE_CACHE_INT_ST_AHB_ERROR_STATUS_SHIFT)         /* 0x00000001 */
/* CACHE_ERR_HADDR */
#define ICACHE_CACHE_ERR_HADDR_OFFSET                      (0x28U)
#define ICACHE_CACHE_ERR_HADDR_STATUS_HADDR_SHIFT          (0U)
#define ICACHE_CACHE_ERR_HADDR_STATUS_HADDR_MASK           (0x1U << ICACHE_CACHE_ERR_HADDR_STATUS_HADDR_SHIFT)          /* 0x00000001 */
/* CACHE_STATUS */
#define ICACHE_CACHE_STATUS_OFFSET                         (0x30U)
#define ICACHE_CACHE_STATUS                                (0x0U)
#define ICACHE_CACHE_STATUS_CACHE_INIT_FINISH_SHIFT        (0U)
#define ICACHE_CACHE_STATUS_CACHE_INIT_FINISH_MASK         (0x1U << ICACHE_CACHE_STATUS_CACHE_INIT_FINISH_SHIFT)        /* 0x00000001 */
#define ICACHE_CACHE_STATUS_CACHE_M_BUSY_SHIFT             (1U)
#define ICACHE_CACHE_STATUS_CACHE_M_BUSY_MASK              (0x1U << ICACHE_CACHE_STATUS_CACHE_M_BUSY_SHIFT)             /* 0x00000002 */
#define ICACHE_CACHE_STATUS_CACHE_FLUSH_DONE_SHIFT         (2U)
#define ICACHE_CACHE_STATUS_CACHE_FLUSH_DONE_MASK          (0x1U << ICACHE_CACHE_STATUS_CACHE_FLUSH_DONE_SHIFT)         /* 0x00000004 */
/* PMU_RD_NUM_CNT */
#define ICACHE_PMU_RD_NUM_CNT_OFFSET                       (0x40U)
#define ICACHE_PMU_RD_NUM_CNT                              (0x0U)
#define ICACHE_PMU_RD_NUM_CNT_PMU_RD_NUM_CNT_SHIFT         (0U)
#define ICACHE_PMU_RD_NUM_CNT_PMU_RD_NUM_CNT_MASK          (0xFFFFFFFFU << ICACHE_PMU_RD_NUM_CNT_PMU_RD_NUM_CNT_SHIFT)  /* 0xFFFFFFFF */
/* PMU_WR_NUM_CNT */
#define ICACHE_PMU_WR_NUM_CNT_OFFSET                       (0x44U)
#define ICACHE_PMU_WR_NUM_CNT                              (0x0U)
#define ICACHE_PMU_WR_NUM_CNT_PMU_WR_NUM_CNT_SHIFT         (0U)
#define ICACHE_PMU_WR_NUM_CNT_PMU_WR_NUM_CNT_MASK          (0xFFFFFFFFU << ICACHE_PMU_WR_NUM_CNT_PMU_WR_NUM_CNT_SHIFT)  /* 0xFFFFFFFF */
/* PMU_SRAM_RD_HIT_CNT */
#define ICACHE_PMU_SRAM_RD_HIT_CNT_OFFSET                  (0x48U)
#define ICACHE_PMU_SRAM_RD_HIT_CNT                         (0x0U)
#define ICACHE_PMU_SRAM_RD_HIT_CNT_PMU_SRAM_RD_HIT_CNT_SHIFT (0U)
#define ICACHE_PMU_SRAM_RD_HIT_CNT_PMU_SRAM_RD_HIT_CNT_MASK (0xFFFFFFFFU << ICACHE_PMU_SRAM_RD_HIT_CNT_PMU_SRAM_RD_HIT_CNT_SHIFT) /* 0xFFFFFFFF */
/* PMU_HB_RD_HIT_CNT */
#define ICACHE_PMU_HB_RD_HIT_CNT_OFFSET                    (0x4CU)
#define ICACHE_PMU_HB_RD_HIT_CNT                           (0x0U)
#define ICACHE_PMU_HB_RD_HIT_CNT_PMU_HB_RD_HIT_CNT_SHIFT   (0U)
#define ICACHE_PMU_HB_RD_HIT_CNT_PMU_HB_RD_HIT_CNT_MASK    (0xFFFFFFFFU << ICACHE_PMU_HB_RD_HIT_CNT_PMU_HB_RD_HIT_CNT_SHIFT) /* 0xFFFFFFFF */
/* PMU_STB_RD_HIT_CNT */
#define ICACHE_PMU_STB_RD_HIT_CNT_OFFSET                   (0x50U)
#define ICACHE_PMU_STB_RD_HIT_CNT_PMU_STB_RD_HIT_CNT_SHIFT (0U)
#define ICACHE_PMU_STB_RD_HIT_CNT_PMU_STB_RD_HIT_CNT_MASK  (0xFFFFFFFFU << ICACHE_PMU_STB_RD_HIT_CNT_PMU_STB_RD_HIT_CNT_SHIFT) /* 0xFFFFFFFF */
/* PMU_RD_HIT_CNT */
#define ICACHE_PMU_RD_HIT_CNT_OFFSET                       (0x54U)
#define ICACHE_PMU_RD_HIT_CNT                              (0x0U)
#define ICACHE_PMU_RD_HIT_CNT_PMU_RD_HIT_CNT_SHIFT         (0U)
#define ICACHE_PMU_RD_HIT_CNT_PMU_RD_HIT_CNT_MASK          (0xFFFFFFFFU << ICACHE_PMU_RD_HIT_CNT_PMU_RD_HIT_CNT_SHIFT)  /* 0xFFFFFFFF */
/* PMU_WR_HIT_CNT */
#define ICACHE_PMU_WR_HIT_CNT_OFFSET                       (0x58U)
#define ICACHE_PMU_WR_HIT_CNT                              (0x0U)
#define ICACHE_PMU_WR_HIT_CNT_PMU_WR_HIT_CNT_SHIFT         (0U)
#define ICACHE_PMU_WR_HIT_CNT_PMU_WR_HIT_CNT_MASK          (0xFFFFFFFFU << ICACHE_PMU_WR_HIT_CNT_PMU_WR_HIT_CNT_SHIFT)  /* 0xFFFFFFFF */
/* PMU_RD_MISS_PENALTY_CNT */
#define ICACHE_PMU_RD_MISS_PENALTY_CNT_OFFSET              (0x5CU)
#define ICACHE_PMU_RD_MISS_PENALTY_CNT                     (0x0U)
#define ICACHE_PMU_RD_MISS_PENALTY_CNT_PMU_RD_MISS_PENALTY_CNT_SHIFT (0U)
#define ICACHE_PMU_RD_MISS_PENALTY_CNT_PMU_RD_MISS_PENALTY_CNT_MASK (0xFFFFFFFFU << ICACHE_PMU_RD_MISS_PENALTY_CNT_PMU_RD_MISS_PENALTY_CNT_SHIFT) /* 0xFFFFFFFF */
/* PMU_WR_MISS_PENALTY_CNT */
#define ICACHE_PMU_WR_MISS_PENALTY_CNT_OFFSET              (0x60U)
#define ICACHE_PMU_WR_MISS_PENALTY_CNT                     (0x0U)
#define ICACHE_PMU_WR_MISS_PENALTY_CNT_PMU_WR_MISS_PENALTY_CNT_SHIFT (0U)
#define ICACHE_PMU_WR_MISS_PENALTY_CNT_PMU_WR_MISS_PENALTY_CNT_MASK (0xFFFFFFFFU << ICACHE_PMU_WR_MISS_PENALTY_CNT_PMU_WR_MISS_PENALTY_CNT_SHIFT) /* 0xFFFFFFFF */
/* PMU_RD_LAT_CNT */
#define ICACHE_PMU_RD_LAT_CNT_OFFSET                       (0x64U)
#define ICACHE_PMU_RD_LAT_CNT                              (0x0U)
#define ICACHE_PMU_RD_LAT_CNT_PMU_RD_LAT_CNT_SHIFT         (0U)
#define ICACHE_PMU_RD_LAT_CNT_PMU_RD_LAT_CNT_MASK          (0xFFFFFFFFU << ICACHE_PMU_RD_LAT_CNT_PMU_RD_LAT_CNT_SHIFT)  /* 0xFFFFFFFF */
/* PMU_WR_LAT_CNT */
#define ICACHE_PMU_WR_LAT_CNT_OFFSET                       (0x68U)
#define ICACHE_PMU_WR_LAT_CNT                              (0x0U)
#define ICACHE_PMU_WR_LAT_CNT_PMU_RD_LAT_CNT_SHIFT         (0U)
#define ICACHE_PMU_WR_LAT_CNT_PMU_RD_LAT_CNT_MASK          (0xFFFFFFFFU << ICACHE_PMU_WR_LAT_CNT_PMU_RD_LAT_CNT_SHIFT)  /* 0xFFFFFFFF */
/* REVISION */
#define ICACHE_REVISION_OFFSET                             (0xF0U)
#define ICACHE_REVISION_REVISION_SHIFT                     (0U)
#define ICACHE_REVISION_REVISION_MASK                      (0xFFFFFFFFU << ICACHE_REVISION_REVISION_SHIFT)              /* 0xFFFFFFFF */
/****************************************PMU1_IOC****************************************/
/* GPIO0A_IOMUX_SEL_L */
#define PMU1_IOC_GPIO0A_IOMUX_SEL_L_OFFSET                 (0x0U)
#define PMU1_IOC_GPIO0A_IOMUX_SEL_L_GPIO0A0_SEL_SHIFT      (0U)
#define PMU1_IOC_GPIO0A_IOMUX_SEL_L_GPIO0A0_SEL_MASK       (0xFU << PMU1_IOC_GPIO0A_IOMUX_SEL_L_GPIO0A0_SEL_SHIFT)      /* 0x0000000F */
#define PMU1_IOC_GPIO0A_IOMUX_SEL_L_GPIO0A1_SEL_SHIFT      (4U)
#define PMU1_IOC_GPIO0A_IOMUX_SEL_L_GPIO0A1_SEL_MASK       (0xFU << PMU1_IOC_GPIO0A_IOMUX_SEL_L_GPIO0A1_SEL_SHIFT)      /* 0x000000F0 */
#define PMU1_IOC_GPIO0A_IOMUX_SEL_L_GPIO0A2_SEL_SHIFT      (8U)
#define PMU1_IOC_GPIO0A_IOMUX_SEL_L_GPIO0A2_SEL_MASK       (0xFU << PMU1_IOC_GPIO0A_IOMUX_SEL_L_GPIO0A2_SEL_SHIFT)      /* 0x00000F00 */
#define PMU1_IOC_GPIO0A_IOMUX_SEL_L_GPIO0A3_SEL_SHIFT      (12U)
#define PMU1_IOC_GPIO0A_IOMUX_SEL_L_GPIO0A3_SEL_MASK       (0xFU << PMU1_IOC_GPIO0A_IOMUX_SEL_L_GPIO0A3_SEL_SHIFT)      /* 0x0000F000 */
/* GPIO0A_IOMUX_SEL_H */
#define PMU1_IOC_GPIO0A_IOMUX_SEL_H_OFFSET                 (0x4U)
#define PMU1_IOC_GPIO0A_IOMUX_SEL_H_GPIO0A4_SEL_SHIFT      (0U)
#define PMU1_IOC_GPIO0A_IOMUX_SEL_H_GPIO0A4_SEL_MASK       (0xFU << PMU1_IOC_GPIO0A_IOMUX_SEL_H_GPIO0A4_SEL_SHIFT)      /* 0x0000000F */
#define PMU1_IOC_GPIO0A_IOMUX_SEL_H_GPIO0A5_SEL_SHIFT      (4U)
#define PMU1_IOC_GPIO0A_IOMUX_SEL_H_GPIO0A5_SEL_MASK       (0xFU << PMU1_IOC_GPIO0A_IOMUX_SEL_H_GPIO0A5_SEL_SHIFT)      /* 0x000000F0 */
#define PMU1_IOC_GPIO0A_IOMUX_SEL_H_GPIO0A6_SEL_SHIFT      (8U)
#define PMU1_IOC_GPIO0A_IOMUX_SEL_H_GPIO0A6_SEL_MASK       (0xFU << PMU1_IOC_GPIO0A_IOMUX_SEL_H_GPIO0A6_SEL_SHIFT)      /* 0x00000F00 */
#define PMU1_IOC_GPIO0A_IOMUX_SEL_H_GPIO0A7_SEL_SHIFT      (12U)
#define PMU1_IOC_GPIO0A_IOMUX_SEL_H_GPIO0A7_SEL_MASK       (0xFU << PMU1_IOC_GPIO0A_IOMUX_SEL_H_GPIO0A7_SEL_SHIFT)      /* 0x0000F000 */
/* GPIO0B_IOMUX_SEL_L */
#define PMU1_IOC_GPIO0B_IOMUX_SEL_L_OFFSET                 (0x8U)
#define PMU1_IOC_GPIO0B_IOMUX_SEL_L_GPIO0B0_SEL_SHIFT      (0U)
#define PMU1_IOC_GPIO0B_IOMUX_SEL_L_GPIO0B0_SEL_MASK       (0xFU << PMU1_IOC_GPIO0B_IOMUX_SEL_L_GPIO0B0_SEL_SHIFT)      /* 0x0000000F */
#define PMU1_IOC_GPIO0B_IOMUX_SEL_L_GPIO0B1_SEL_SHIFT      (4U)
#define PMU1_IOC_GPIO0B_IOMUX_SEL_L_GPIO0B1_SEL_MASK       (0xFU << PMU1_IOC_GPIO0B_IOMUX_SEL_L_GPIO0B1_SEL_SHIFT)      /* 0x000000F0 */
#define PMU1_IOC_GPIO0B_IOMUX_SEL_L_GPIO0B2_SEL_SHIFT      (8U)
#define PMU1_IOC_GPIO0B_IOMUX_SEL_L_GPIO0B2_SEL_MASK       (0xFU << PMU1_IOC_GPIO0B_IOMUX_SEL_L_GPIO0B2_SEL_SHIFT)      /* 0x00000F00 */
#define PMU1_IOC_GPIO0B_IOMUX_SEL_L_GPIO0B3_SEL_SHIFT      (12U)
#define PMU1_IOC_GPIO0B_IOMUX_SEL_L_GPIO0B3_SEL_MASK       (0xFU << PMU1_IOC_GPIO0B_IOMUX_SEL_L_GPIO0B3_SEL_SHIFT)      /* 0x0000F000 */
/* GPIO0A_DS_L */
#define PMU1_IOC_GPIO0A_DS_L_OFFSET                        (0x10U)
#define PMU1_IOC_GPIO0A_DS_L_GPIO0A0_DS_SHIFT              (0U)
#define PMU1_IOC_GPIO0A_DS_L_GPIO0A0_DS_MASK               (0x3U << PMU1_IOC_GPIO0A_DS_L_GPIO0A0_DS_SHIFT)              /* 0x00000003 */
#define PMU1_IOC_GPIO0A_DS_L_GPIO0A1_DS_SHIFT              (4U)
#define PMU1_IOC_GPIO0A_DS_L_GPIO0A1_DS_MASK               (0x3U << PMU1_IOC_GPIO0A_DS_L_GPIO0A1_DS_SHIFT)              /* 0x00000030 */
#define PMU1_IOC_GPIO0A_DS_L_GPIO0A2_DS_SHIFT              (8U)
#define PMU1_IOC_GPIO0A_DS_L_GPIO0A2_DS_MASK               (0x3U << PMU1_IOC_GPIO0A_DS_L_GPIO0A2_DS_SHIFT)              /* 0x00000300 */
#define PMU1_IOC_GPIO0A_DS_L_GPIO0A3_DS_SHIFT              (12U)
#define PMU1_IOC_GPIO0A_DS_L_GPIO0A3_DS_MASK               (0x3U << PMU1_IOC_GPIO0A_DS_L_GPIO0A3_DS_SHIFT)              /* 0x00003000 */
/* GPIO0A_DS_H */
#define PMU1_IOC_GPIO0A_DS_H_OFFSET                        (0x14U)
#define PMU1_IOC_GPIO0A_DS_H_GPIO0A4_DS_SHIFT              (0U)
#define PMU1_IOC_GPIO0A_DS_H_GPIO0A4_DS_MASK               (0x3U << PMU1_IOC_GPIO0A_DS_H_GPIO0A4_DS_SHIFT)              /* 0x00000003 */
#define PMU1_IOC_GPIO0A_DS_H_GPIO0A5_DS_SHIFT              (4U)
#define PMU1_IOC_GPIO0A_DS_H_GPIO0A5_DS_MASK               (0x3U << PMU1_IOC_GPIO0A_DS_H_GPIO0A5_DS_SHIFT)              /* 0x00000030 */
#define PMU1_IOC_GPIO0A_DS_H_GPIO0A6_DS_SHIFT              (8U)
#define PMU1_IOC_GPIO0A_DS_H_GPIO0A6_DS_MASK               (0x3U << PMU1_IOC_GPIO0A_DS_H_GPIO0A6_DS_SHIFT)              /* 0x00000300 */
#define PMU1_IOC_GPIO0A_DS_H_GPIO0A7_DS_SHIFT              (12U)
#define PMU1_IOC_GPIO0A_DS_H_GPIO0A7_DS_MASK               (0x3U << PMU1_IOC_GPIO0A_DS_H_GPIO0A7_DS_SHIFT)              /* 0x00003000 */
/* GPIO0B_DS_L */
#define PMU1_IOC_GPIO0B_DS_L_OFFSET                        (0x18U)
#define PMU1_IOC_GPIO0B_DS_L_GPIO0B0_DS_SHIFT              (0U)
#define PMU1_IOC_GPIO0B_DS_L_GPIO0B0_DS_MASK               (0x3U << PMU1_IOC_GPIO0B_DS_L_GPIO0B0_DS_SHIFT)              /* 0x00000003 */
#define PMU1_IOC_GPIO0B_DS_L_GPIO0B1_DS_SHIFT              (4U)
#define PMU1_IOC_GPIO0B_DS_L_GPIO0B1_DS_MASK               (0x3U << PMU1_IOC_GPIO0B_DS_L_GPIO0B1_DS_SHIFT)              /* 0x00000030 */
#define PMU1_IOC_GPIO0B_DS_L_GPIO0B2_DS_SHIFT              (8U)
#define PMU1_IOC_GPIO0B_DS_L_GPIO0B2_DS_MASK               (0x3U << PMU1_IOC_GPIO0B_DS_L_GPIO0B2_DS_SHIFT)              /* 0x00000300 */
#define PMU1_IOC_GPIO0B_DS_L_GPIO0B3_DS_SHIFT              (12U)
#define PMU1_IOC_GPIO0B_DS_L_GPIO0B3_DS_MASK               (0x3U << PMU1_IOC_GPIO0B_DS_L_GPIO0B3_DS_SHIFT)              /* 0x00003000 */
/* GPIO0A_P */
#define PMU1_IOC_GPIO0A_P_OFFSET                           (0x20U)
#define PMU1_IOC_GPIO0A_P_GPIO0A0_PE_SHIFT                 (0U)
#define PMU1_IOC_GPIO0A_P_GPIO0A0_PE_MASK                  (0x1U << PMU1_IOC_GPIO0A_P_GPIO0A0_PE_SHIFT)                 /* 0x00000001 */
#define PMU1_IOC_GPIO0A_P_GPIO0A0_PS_SHIFT                 (1U)
#define PMU1_IOC_GPIO0A_P_GPIO0A0_PS_MASK                  (0x1U << PMU1_IOC_GPIO0A_P_GPIO0A0_PS_SHIFT)                 /* 0x00000002 */
#define PMU1_IOC_GPIO0A_P_GPIO0A1_PE_SHIFT                 (2U)
#define PMU1_IOC_GPIO0A_P_GPIO0A1_PE_MASK                  (0x1U << PMU1_IOC_GPIO0A_P_GPIO0A1_PE_SHIFT)                 /* 0x00000004 */
#define PMU1_IOC_GPIO0A_P_GPIO0A1_PS_SHIFT                 (3U)
#define PMU1_IOC_GPIO0A_P_GPIO0A1_PS_MASK                  (0x1U << PMU1_IOC_GPIO0A_P_GPIO0A1_PS_SHIFT)                 /* 0x00000008 */
#define PMU1_IOC_GPIO0A_P_GPIO0A2_PE_SHIFT                 (4U)
#define PMU1_IOC_GPIO0A_P_GPIO0A2_PE_MASK                  (0x1U << PMU1_IOC_GPIO0A_P_GPIO0A2_PE_SHIFT)                 /* 0x00000010 */
#define PMU1_IOC_GPIO0A_P_GPIO0A2_PS_SHIFT                 (5U)
#define PMU1_IOC_GPIO0A_P_GPIO0A2_PS_MASK                  (0x1U << PMU1_IOC_GPIO0A_P_GPIO0A2_PS_SHIFT)                 /* 0x00000020 */
#define PMU1_IOC_GPIO0A_P_GPIO0A3_PE_SHIFT                 (6U)
#define PMU1_IOC_GPIO0A_P_GPIO0A3_PE_MASK                  (0x1U << PMU1_IOC_GPIO0A_P_GPIO0A3_PE_SHIFT)                 /* 0x00000040 */
#define PMU1_IOC_GPIO0A_P_GPIO0A3_PS_SHIFT                 (7U)
#define PMU1_IOC_GPIO0A_P_GPIO0A3_PS_MASK                  (0x1U << PMU1_IOC_GPIO0A_P_GPIO0A3_PS_SHIFT)                 /* 0x00000080 */
#define PMU1_IOC_GPIO0A_P_GPIO0A4_PE_SHIFT                 (8U)
#define PMU1_IOC_GPIO0A_P_GPIO0A4_PE_MASK                  (0x1U << PMU1_IOC_GPIO0A_P_GPIO0A4_PE_SHIFT)                 /* 0x00000100 */
#define PMU1_IOC_GPIO0A_P_GPIO0A4_PS_SHIFT                 (9U)
#define PMU1_IOC_GPIO0A_P_GPIO0A4_PS_MASK                  (0x1U << PMU1_IOC_GPIO0A_P_GPIO0A4_PS_SHIFT)                 /* 0x00000200 */
#define PMU1_IOC_GPIO0A_P_GPIO0A5_PE_SHIFT                 (10U)
#define PMU1_IOC_GPIO0A_P_GPIO0A5_PE_MASK                  (0x1U << PMU1_IOC_GPIO0A_P_GPIO0A5_PE_SHIFT)                 /* 0x00000400 */
#define PMU1_IOC_GPIO0A_P_GPIO0A5_PS_SHIFT                 (11U)
#define PMU1_IOC_GPIO0A_P_GPIO0A5_PS_MASK                  (0x1U << PMU1_IOC_GPIO0A_P_GPIO0A5_PS_SHIFT)                 /* 0x00000800 */
#define PMU1_IOC_GPIO0A_P_GPIO0A6_PE_SHIFT                 (12U)
#define PMU1_IOC_GPIO0A_P_GPIO0A6_PE_MASK                  (0x1U << PMU1_IOC_GPIO0A_P_GPIO0A6_PE_SHIFT)                 /* 0x00001000 */
#define PMU1_IOC_GPIO0A_P_GPIO0A6_PS_SHIFT                 (13U)
#define PMU1_IOC_GPIO0A_P_GPIO0A6_PS_MASK                  (0x1U << PMU1_IOC_GPIO0A_P_GPIO0A6_PS_SHIFT)                 /* 0x00002000 */
#define PMU1_IOC_GPIO0A_P_GPIO0A7_PE_SHIFT                 (14U)
#define PMU1_IOC_GPIO0A_P_GPIO0A7_PE_MASK                  (0x1U << PMU1_IOC_GPIO0A_P_GPIO0A7_PE_SHIFT)                 /* 0x00004000 */
#define PMU1_IOC_GPIO0A_P_GPIO0A7_PS_SHIFT                 (15U)
#define PMU1_IOC_GPIO0A_P_GPIO0A7_PS_MASK                  (0x1U << PMU1_IOC_GPIO0A_P_GPIO0A7_PS_SHIFT)                 /* 0x00008000 */
/* GPIO0B_P */
#define PMU1_IOC_GPIO0B_P_OFFSET                           (0x24U)
#define PMU1_IOC_GPIO0B_P_GPIO0B0_PE_SHIFT                 (0U)
#define PMU1_IOC_GPIO0B_P_GPIO0B0_PE_MASK                  (0x1U << PMU1_IOC_GPIO0B_P_GPIO0B0_PE_SHIFT)                 /* 0x00000001 */
#define PMU1_IOC_GPIO0B_P_GPIO0B0_PS_SHIFT                 (1U)
#define PMU1_IOC_GPIO0B_P_GPIO0B0_PS_MASK                  (0x1U << PMU1_IOC_GPIO0B_P_GPIO0B0_PS_SHIFT)                 /* 0x00000002 */
#define PMU1_IOC_GPIO0B_P_GPIO0B1_PE_SHIFT                 (2U)
#define PMU1_IOC_GPIO0B_P_GPIO0B1_PE_MASK                  (0x1U << PMU1_IOC_GPIO0B_P_GPIO0B1_PE_SHIFT)                 /* 0x00000004 */
#define PMU1_IOC_GPIO0B_P_GPIO0B1_PS_SHIFT                 (3U)
#define PMU1_IOC_GPIO0B_P_GPIO0B1_PS_MASK                  (0x1U << PMU1_IOC_GPIO0B_P_GPIO0B1_PS_SHIFT)                 /* 0x00000008 */
#define PMU1_IOC_GPIO0B_P_GPIO0B2_PE_SHIFT                 (4U)
#define PMU1_IOC_GPIO0B_P_GPIO0B2_PE_MASK                  (0x1U << PMU1_IOC_GPIO0B_P_GPIO0B2_PE_SHIFT)                 /* 0x00000010 */
#define PMU1_IOC_GPIO0B_P_GPIO0B2_PS_SHIFT                 (5U)
#define PMU1_IOC_GPIO0B_P_GPIO0B2_PS_MASK                  (0x1U << PMU1_IOC_GPIO0B_P_GPIO0B2_PS_SHIFT)                 /* 0x00000020 */
#define PMU1_IOC_GPIO0B_P_GPIO0B3_PE_SHIFT                 (6U)
#define PMU1_IOC_GPIO0B_P_GPIO0B3_PE_MASK                  (0x1U << PMU1_IOC_GPIO0B_P_GPIO0B3_PE_SHIFT)                 /* 0x00000040 */
#define PMU1_IOC_GPIO0B_P_GPIO0B3_PS_SHIFT                 (7U)
#define PMU1_IOC_GPIO0B_P_GPIO0B3_PS_MASK                  (0x1U << PMU1_IOC_GPIO0B_P_GPIO0B3_PS_SHIFT)                 /* 0x00000080 */
/* GPIO0A_IE */
#define PMU1_IOC_GPIO0A_IE_OFFSET                          (0x28U)
#define PMU1_IOC_GPIO0A_IE_GPIO0A0_IE_SHIFT                (0U)
#define PMU1_IOC_GPIO0A_IE_GPIO0A0_IE_MASK                 (0x1U << PMU1_IOC_GPIO0A_IE_GPIO0A0_IE_SHIFT)                /* 0x00000001 */
#define PMU1_IOC_GPIO0A_IE_GPIO0A1_IE_SHIFT                (1U)
#define PMU1_IOC_GPIO0A_IE_GPIO0A1_IE_MASK                 (0x1U << PMU1_IOC_GPIO0A_IE_GPIO0A1_IE_SHIFT)                /* 0x00000002 */
#define PMU1_IOC_GPIO0A_IE_GPIO0A2_IE_SHIFT                (2U)
#define PMU1_IOC_GPIO0A_IE_GPIO0A2_IE_MASK                 (0x1U << PMU1_IOC_GPIO0A_IE_GPIO0A2_IE_SHIFT)                /* 0x00000004 */
#define PMU1_IOC_GPIO0A_IE_GPIO0A3_IE_SHIFT                (3U)
#define PMU1_IOC_GPIO0A_IE_GPIO0A3_IE_MASK                 (0x1U << PMU1_IOC_GPIO0A_IE_GPIO0A3_IE_SHIFT)                /* 0x00000008 */
#define PMU1_IOC_GPIO0A_IE_GPIO0A4_IE_SHIFT                (4U)
#define PMU1_IOC_GPIO0A_IE_GPIO0A4_IE_MASK                 (0x1U << PMU1_IOC_GPIO0A_IE_GPIO0A4_IE_SHIFT)                /* 0x00000010 */
#define PMU1_IOC_GPIO0A_IE_GPIO0A5_IE_SHIFT                (5U)
#define PMU1_IOC_GPIO0A_IE_GPIO0A5_IE_MASK                 (0x1U << PMU1_IOC_GPIO0A_IE_GPIO0A5_IE_SHIFT)                /* 0x00000020 */
#define PMU1_IOC_GPIO0A_IE_GPIO0A6_IE_SHIFT                (6U)
#define PMU1_IOC_GPIO0A_IE_GPIO0A6_IE_MASK                 (0x1U << PMU1_IOC_GPIO0A_IE_GPIO0A6_IE_SHIFT)                /* 0x00000040 */
#define PMU1_IOC_GPIO0A_IE_GPIO0A7_IE_SHIFT                (7U)
#define PMU1_IOC_GPIO0A_IE_GPIO0A7_IE_MASK                 (0x1U << PMU1_IOC_GPIO0A_IE_GPIO0A7_IE_SHIFT)                /* 0x00000080 */
/* GPIO0B_IE */
#define PMU1_IOC_GPIO0B_IE_OFFSET                          (0x2CU)
#define PMU1_IOC_GPIO0B_IE_GPIO0B0_IE_SHIFT                (0U)
#define PMU1_IOC_GPIO0B_IE_GPIO0B0_IE_MASK                 (0x1U << PMU1_IOC_GPIO0B_IE_GPIO0B0_IE_SHIFT)                /* 0x00000001 */
#define PMU1_IOC_GPIO0B_IE_GPIO0B1_IE_SHIFT                (1U)
#define PMU1_IOC_GPIO0B_IE_GPIO0B1_IE_MASK                 (0x1U << PMU1_IOC_GPIO0B_IE_GPIO0B1_IE_SHIFT)                /* 0x00000002 */
#define PMU1_IOC_GPIO0B_IE_GPIO0B2_IE_SHIFT                (2U)
#define PMU1_IOC_GPIO0B_IE_GPIO0B2_IE_MASK                 (0x1U << PMU1_IOC_GPIO0B_IE_GPIO0B2_IE_SHIFT)                /* 0x00000004 */
#define PMU1_IOC_GPIO0B_IE_GPIO0B3_IE_SHIFT                (3U)
#define PMU1_IOC_GPIO0B_IE_GPIO0B3_IE_MASK                 (0x1U << PMU1_IOC_GPIO0B_IE_GPIO0B3_IE_SHIFT)                /* 0x00000008 */
/* GPIO0A_SMT */
#define PMU1_IOC_GPIO0A_SMT_OFFSET                         (0x30U)
#define PMU1_IOC_GPIO0A_SMT_GPIO0A0_SMT_SHIFT              (0U)
#define PMU1_IOC_GPIO0A_SMT_GPIO0A0_SMT_MASK               (0x1U << PMU1_IOC_GPIO0A_SMT_GPIO0A0_SMT_SHIFT)              /* 0x00000001 */
#define PMU1_IOC_GPIO0A_SMT_GPIO0A1_SMT_SHIFT              (1U)
#define PMU1_IOC_GPIO0A_SMT_GPIO0A1_SMT_MASK               (0x1U << PMU1_IOC_GPIO0A_SMT_GPIO0A1_SMT_SHIFT)              /* 0x00000002 */
#define PMU1_IOC_GPIO0A_SMT_GPIO0A2_SMT_SHIFT              (2U)
#define PMU1_IOC_GPIO0A_SMT_GPIO0A2_SMT_MASK               (0x1U << PMU1_IOC_GPIO0A_SMT_GPIO0A2_SMT_SHIFT)              /* 0x00000004 */
#define PMU1_IOC_GPIO0A_SMT_GPIO0A3_SMT_SHIFT              (3U)
#define PMU1_IOC_GPIO0A_SMT_GPIO0A3_SMT_MASK               (0x1U << PMU1_IOC_GPIO0A_SMT_GPIO0A3_SMT_SHIFT)              /* 0x00000008 */
#define PMU1_IOC_GPIO0A_SMT_GPIO0A4_SMT_SHIFT              (4U)
#define PMU1_IOC_GPIO0A_SMT_GPIO0A4_SMT_MASK               (0x1U << PMU1_IOC_GPIO0A_SMT_GPIO0A4_SMT_SHIFT)              /* 0x00000010 */
#define PMU1_IOC_GPIO0A_SMT_GPIO0A5_SMT_SHIFT              (5U)
#define PMU1_IOC_GPIO0A_SMT_GPIO0A5_SMT_MASK               (0x1U << PMU1_IOC_GPIO0A_SMT_GPIO0A5_SMT_SHIFT)              /* 0x00000020 */
#define PMU1_IOC_GPIO0A_SMT_GPIO0A6_SMT_SHIFT              (6U)
#define PMU1_IOC_GPIO0A_SMT_GPIO0A6_SMT_MASK               (0x1U << PMU1_IOC_GPIO0A_SMT_GPIO0A6_SMT_SHIFT)              /* 0x00000040 */
#define PMU1_IOC_GPIO0A_SMT_GPIO0A7_SMT_SHIFT              (7U)
#define PMU1_IOC_GPIO0A_SMT_GPIO0A7_SMT_MASK               (0x1U << PMU1_IOC_GPIO0A_SMT_GPIO0A7_SMT_SHIFT)              /* 0x00000080 */
/* GPIO0B_SMT */
#define PMU1_IOC_GPIO0B_SMT_OFFSET                         (0x34U)
#define PMU1_IOC_GPIO0B_SMT_GPIO0B0_SMT_SHIFT              (0U)
#define PMU1_IOC_GPIO0B_SMT_GPIO0B0_SMT_MASK               (0x1U << PMU1_IOC_GPIO0B_SMT_GPIO0B0_SMT_SHIFT)              /* 0x00000001 */
#define PMU1_IOC_GPIO0B_SMT_GPIO0B1_SMT_SHIFT              (1U)
#define PMU1_IOC_GPIO0B_SMT_GPIO0B1_SMT_MASK               (0x1U << PMU1_IOC_GPIO0B_SMT_GPIO0B1_SMT_SHIFT)              /* 0x00000002 */
#define PMU1_IOC_GPIO0B_SMT_GPIO0B2_SMT_SHIFT              (2U)
#define PMU1_IOC_GPIO0B_SMT_GPIO0B2_SMT_MASK               (0x1U << PMU1_IOC_GPIO0B_SMT_GPIO0B2_SMT_SHIFT)              /* 0x00000004 */
#define PMU1_IOC_GPIO0B_SMT_GPIO0B3_SMT_SHIFT              (3U)
#define PMU1_IOC_GPIO0B_SMT_GPIO0B3_SMT_MASK               (0x1U << PMU1_IOC_GPIO0B_SMT_GPIO0B3_SMT_SHIFT)              /* 0x00000008 */
/* GPIO0A_PDIS */
#define PMU1_IOC_GPIO0A_PDIS_OFFSET                        (0x38U)
#define PMU1_IOC_GPIO0A_PDIS_GPIO0A0_PULL_DIS_SHIFT        (0U)
#define PMU1_IOC_GPIO0A_PDIS_GPIO0A0_PULL_DIS_MASK         (0x1U << PMU1_IOC_GPIO0A_PDIS_GPIO0A0_PULL_DIS_SHIFT)        /* 0x00000001 */
#define PMU1_IOC_GPIO0A_PDIS_GPIO0A1_PULL_DIS_SHIFT        (1U)
#define PMU1_IOC_GPIO0A_PDIS_GPIO0A1_PULL_DIS_MASK         (0x1U << PMU1_IOC_GPIO0A_PDIS_GPIO0A1_PULL_DIS_SHIFT)        /* 0x00000002 */
#define PMU1_IOC_GPIO0A_PDIS_GPIO0A2_PULL_DIS_SHIFT        (2U)
#define PMU1_IOC_GPIO0A_PDIS_GPIO0A2_PULL_DIS_MASK         (0x1U << PMU1_IOC_GPIO0A_PDIS_GPIO0A2_PULL_DIS_SHIFT)        /* 0x00000004 */
#define PMU1_IOC_GPIO0A_PDIS_GPIO0A3_PULL_DIS_SHIFT        (3U)
#define PMU1_IOC_GPIO0A_PDIS_GPIO0A3_PULL_DIS_MASK         (0x1U << PMU1_IOC_GPIO0A_PDIS_GPIO0A3_PULL_DIS_SHIFT)        /* 0x00000008 */
#define PMU1_IOC_GPIO0A_PDIS_GPIO0A4_PULL_DIS_SHIFT        (4U)
#define PMU1_IOC_GPIO0A_PDIS_GPIO0A4_PULL_DIS_MASK         (0x1U << PMU1_IOC_GPIO0A_PDIS_GPIO0A4_PULL_DIS_SHIFT)        /* 0x00000010 */
#define PMU1_IOC_GPIO0A_PDIS_GPIO0A5_PULL_DIS_SHIFT        (5U)
#define PMU1_IOC_GPIO0A_PDIS_GPIO0A5_PULL_DIS_MASK         (0x1U << PMU1_IOC_GPIO0A_PDIS_GPIO0A5_PULL_DIS_SHIFT)        /* 0x00000020 */
#define PMU1_IOC_GPIO0A_PDIS_GPIO0A6_PULL_DIS_SHIFT        (6U)
#define PMU1_IOC_GPIO0A_PDIS_GPIO0A6_PULL_DIS_MASK         (0x1U << PMU1_IOC_GPIO0A_PDIS_GPIO0A6_PULL_DIS_SHIFT)        /* 0x00000040 */
#define PMU1_IOC_GPIO0A_PDIS_GPIO0A7_PULL_DIS_SHIFT        (7U)
#define PMU1_IOC_GPIO0A_PDIS_GPIO0A7_PULL_DIS_MASK         (0x1U << PMU1_IOC_GPIO0A_PDIS_GPIO0A7_PULL_DIS_SHIFT)        /* 0x00000080 */
/* GPIO0B_PDIS */
#define PMU1_IOC_GPIO0B_PDIS_OFFSET                        (0x3CU)
#define PMU1_IOC_GPIO0B_PDIS_GPIO0B0_PULL_DIS_SHIFT        (0U)
#define PMU1_IOC_GPIO0B_PDIS_GPIO0B0_PULL_DIS_MASK         (0x1U << PMU1_IOC_GPIO0B_PDIS_GPIO0B0_PULL_DIS_SHIFT)        /* 0x00000001 */
#define PMU1_IOC_GPIO0B_PDIS_GPIO0B1_PULL_DIS_SHIFT        (1U)
#define PMU1_IOC_GPIO0B_PDIS_GPIO0B1_PULL_DIS_MASK         (0x1U << PMU1_IOC_GPIO0B_PDIS_GPIO0B1_PULL_DIS_SHIFT)        /* 0x00000002 */
#define PMU1_IOC_GPIO0B_PDIS_GPIO0B2_PULL_DIS_SHIFT        (2U)
#define PMU1_IOC_GPIO0B_PDIS_GPIO0B2_PULL_DIS_MASK         (0x1U << PMU1_IOC_GPIO0B_PDIS_GPIO0B2_PULL_DIS_SHIFT)        /* 0x00000004 */
#define PMU1_IOC_GPIO0B_PDIS_GPIO0B3_PULL_DIS_SHIFT        (3U)
#define PMU1_IOC_GPIO0B_PDIS_GPIO0B3_PULL_DIS_MASK         (0x1U << PMU1_IOC_GPIO0B_PDIS_GPIO0B3_PULL_DIS_SHIFT)        /* 0x00000008 */
/* XIN_CON */
#define PMU1_IOC_XIN_CON_OFFSET                            (0x40U)
#define PMU1_IOC_XIN_CON_XIN_OSC_EN_SHIFT                  (0U)
#define PMU1_IOC_XIN_CON_XIN_OSC_EN_MASK                   (0x1U << PMU1_IOC_XIN_CON_XIN_OSC_EN_SHIFT)                  /* 0x00000001 */
#define PMU1_IOC_XIN_CON_XIN_OSC_SF_SHIFT                  (2U)
#define PMU1_IOC_XIN_CON_XIN_OSC_SF_MASK                   (0x3U << PMU1_IOC_XIN_CON_XIN_OSC_SF_SHIFT)                  /* 0x0000000C */
/****************************************PMU2_IOC****************************************/
/* GPIO0B_IOMUX_SEL_H */
#define PMU2_IOC_GPIO0B_IOMUX_SEL_H_OFFSET                 (0x0U)
#define PMU2_IOC_GPIO0B_IOMUX_SEL_H_GPIO0B5_SEL_SHIFT      (4U)
#define PMU2_IOC_GPIO0B_IOMUX_SEL_H_GPIO0B5_SEL_MASK       (0xFU << PMU2_IOC_GPIO0B_IOMUX_SEL_H_GPIO0B5_SEL_SHIFT)      /* 0x000000F0 */
#define PMU2_IOC_GPIO0B_IOMUX_SEL_H_GPIO0B6_SEL_SHIFT      (8U)
#define PMU2_IOC_GPIO0B_IOMUX_SEL_H_GPIO0B6_SEL_MASK       (0xFU << PMU2_IOC_GPIO0B_IOMUX_SEL_H_GPIO0B6_SEL_SHIFT)      /* 0x00000F00 */
#define PMU2_IOC_GPIO0B_IOMUX_SEL_H_GPIO0B7_SEL_SHIFT      (12U)
#define PMU2_IOC_GPIO0B_IOMUX_SEL_H_GPIO0B7_SEL_MASK       (0xFU << PMU2_IOC_GPIO0B_IOMUX_SEL_H_GPIO0B7_SEL_SHIFT)      /* 0x0000F000 */
/* GPIO0C_IOMUX_SEL_L */
#define PMU2_IOC_GPIO0C_IOMUX_SEL_L_OFFSET                 (0x4U)
#define PMU2_IOC_GPIO0C_IOMUX_SEL_L_GPIO0C0_SEL_SHIFT      (0U)
#define PMU2_IOC_GPIO0C_IOMUX_SEL_L_GPIO0C0_SEL_MASK       (0xFU << PMU2_IOC_GPIO0C_IOMUX_SEL_L_GPIO0C0_SEL_SHIFT)      /* 0x0000000F */
#define PMU2_IOC_GPIO0C_IOMUX_SEL_L_GPIO0C1_SEL_SHIFT      (4U)
#define PMU2_IOC_GPIO0C_IOMUX_SEL_L_GPIO0C1_SEL_MASK       (0xFU << PMU2_IOC_GPIO0C_IOMUX_SEL_L_GPIO0C1_SEL_SHIFT)      /* 0x000000F0 */
#define PMU2_IOC_GPIO0C_IOMUX_SEL_L_GPIO0C2_SEL_SHIFT      (8U)
#define PMU2_IOC_GPIO0C_IOMUX_SEL_L_GPIO0C2_SEL_MASK       (0xFU << PMU2_IOC_GPIO0C_IOMUX_SEL_L_GPIO0C2_SEL_SHIFT)      /* 0x00000F00 */
#define PMU2_IOC_GPIO0C_IOMUX_SEL_L_GPIO0C3_SEL_SHIFT      (12U)
#define PMU2_IOC_GPIO0C_IOMUX_SEL_L_GPIO0C3_SEL_MASK       (0xFU << PMU2_IOC_GPIO0C_IOMUX_SEL_L_GPIO0C3_SEL_SHIFT)      /* 0x0000F000 */
/* GPIO0C_IOMUX_SEL_H */
#define PMU2_IOC_GPIO0C_IOMUX_SEL_H_OFFSET                 (0x8U)
#define PMU2_IOC_GPIO0C_IOMUX_SEL_H_GPIO0C4_SEL_SHIFT      (0U)
#define PMU2_IOC_GPIO0C_IOMUX_SEL_H_GPIO0C4_SEL_MASK       (0xFU << PMU2_IOC_GPIO0C_IOMUX_SEL_H_GPIO0C4_SEL_SHIFT)      /* 0x0000000F */
#define PMU2_IOC_GPIO0C_IOMUX_SEL_H_GPIO0C5_SEL_SHIFT      (4U)
#define PMU2_IOC_GPIO0C_IOMUX_SEL_H_GPIO0C5_SEL_MASK       (0xFU << PMU2_IOC_GPIO0C_IOMUX_SEL_H_GPIO0C5_SEL_SHIFT)      /* 0x000000F0 */
#define PMU2_IOC_GPIO0C_IOMUX_SEL_H_GPIO0C6_SEL_SHIFT      (8U)
#define PMU2_IOC_GPIO0C_IOMUX_SEL_H_GPIO0C6_SEL_MASK       (0xFU << PMU2_IOC_GPIO0C_IOMUX_SEL_H_GPIO0C6_SEL_SHIFT)      /* 0x00000F00 */
#define PMU2_IOC_GPIO0C_IOMUX_SEL_H_GPIO0C7_SEL_SHIFT      (12U)
#define PMU2_IOC_GPIO0C_IOMUX_SEL_H_GPIO0C7_SEL_MASK       (0xFU << PMU2_IOC_GPIO0C_IOMUX_SEL_H_GPIO0C7_SEL_SHIFT)      /* 0x0000F000 */
/* GPIO0D_IOMUX_SEL_L */
#define PMU2_IOC_GPIO0D_IOMUX_SEL_L_OFFSET                 (0xCU)
#define PMU2_IOC_GPIO0D_IOMUX_SEL_L_GPIO0D0_SEL_SHIFT      (0U)
#define PMU2_IOC_GPIO0D_IOMUX_SEL_L_GPIO0D0_SEL_MASK       (0xFU << PMU2_IOC_GPIO0D_IOMUX_SEL_L_GPIO0D0_SEL_SHIFT)      /* 0x0000000F */
#define PMU2_IOC_GPIO0D_IOMUX_SEL_L_GPIO0D1_SEL_SHIFT      (4U)
#define PMU2_IOC_GPIO0D_IOMUX_SEL_L_GPIO0D1_SEL_MASK       (0xFU << PMU2_IOC_GPIO0D_IOMUX_SEL_L_GPIO0D1_SEL_SHIFT)      /* 0x000000F0 */
#define PMU2_IOC_GPIO0D_IOMUX_SEL_L_GPIO0D2_SEL_SHIFT      (8U)
#define PMU2_IOC_GPIO0D_IOMUX_SEL_L_GPIO0D2_SEL_MASK       (0xFU << PMU2_IOC_GPIO0D_IOMUX_SEL_L_GPIO0D2_SEL_SHIFT)      /* 0x00000F00 */
#define PMU2_IOC_GPIO0D_IOMUX_SEL_L_GPIO0D3_SEL_SHIFT      (12U)
#define PMU2_IOC_GPIO0D_IOMUX_SEL_L_GPIO0D3_SEL_MASK       (0xFU << PMU2_IOC_GPIO0D_IOMUX_SEL_L_GPIO0D3_SEL_SHIFT)      /* 0x0000F000 */
/* GPIO0D_IOMUX_SEL_H */
#define PMU2_IOC_GPIO0D_IOMUX_SEL_H_OFFSET                 (0x10U)
#define PMU2_IOC_GPIO0D_IOMUX_SEL_H_GPIO0D4_SEL_SHIFT      (0U)
#define PMU2_IOC_GPIO0D_IOMUX_SEL_H_GPIO0D4_SEL_MASK       (0xFU << PMU2_IOC_GPIO0D_IOMUX_SEL_H_GPIO0D4_SEL_SHIFT)      /* 0x0000000F */
#define PMU2_IOC_GPIO0D_IOMUX_SEL_H_GPIO0D5_SEL_SHIFT      (4U)
#define PMU2_IOC_GPIO0D_IOMUX_SEL_H_GPIO0D5_SEL_MASK       (0xFU << PMU2_IOC_GPIO0D_IOMUX_SEL_H_GPIO0D5_SEL_SHIFT)      /* 0x000000F0 */
#define PMU2_IOC_GPIO0D_IOMUX_SEL_H_GPIO0D6_SEL_SHIFT      (8U)
#define PMU2_IOC_GPIO0D_IOMUX_SEL_H_GPIO0D6_SEL_MASK       (0xFU << PMU2_IOC_GPIO0D_IOMUX_SEL_H_GPIO0D6_SEL_SHIFT)      /* 0x00000F00 */
/* GPIO0B_DS_H */
#define PMU2_IOC_GPIO0B_DS_H_OFFSET                        (0x14U)
#define PMU2_IOC_GPIO0B_DS_H_GPIO0B5_DS_SHIFT              (4U)
#define PMU2_IOC_GPIO0B_DS_H_GPIO0B5_DS_MASK               (0x7U << PMU2_IOC_GPIO0B_DS_H_GPIO0B5_DS_SHIFT)              /* 0x00000070 */
#define PMU2_IOC_GPIO0B_DS_H_GPIO0B6_DS_SHIFT              (8U)
#define PMU2_IOC_GPIO0B_DS_H_GPIO0B6_DS_MASK               (0x7U << PMU2_IOC_GPIO0B_DS_H_GPIO0B6_DS_SHIFT)              /* 0x00000700 */
#define PMU2_IOC_GPIO0B_DS_H_GPIO0B7_DS_SHIFT              (12U)
#define PMU2_IOC_GPIO0B_DS_H_GPIO0B7_DS_MASK               (0x7U << PMU2_IOC_GPIO0B_DS_H_GPIO0B7_DS_SHIFT)              /* 0x00007000 */
/* GPIO0C_DS_L */
#define PMU2_IOC_GPIO0C_DS_L_OFFSET                        (0x18U)
#define PMU2_IOC_GPIO0C_DS_L_GPIO0C0_DS_SHIFT              (0U)
#define PMU2_IOC_GPIO0C_DS_L_GPIO0C0_DS_MASK               (0x7U << PMU2_IOC_GPIO0C_DS_L_GPIO0C0_DS_SHIFT)              /* 0x00000007 */
#define PMU2_IOC_GPIO0C_DS_L_GPIO0C1_DS_SHIFT              (4U)
#define PMU2_IOC_GPIO0C_DS_L_GPIO0C1_DS_MASK               (0x7U << PMU2_IOC_GPIO0C_DS_L_GPIO0C1_DS_SHIFT)              /* 0x00000070 */
#define PMU2_IOC_GPIO0C_DS_L_GPIO0C2_DS_SHIFT              (8U)
#define PMU2_IOC_GPIO0C_DS_L_GPIO0C2_DS_MASK               (0x7U << PMU2_IOC_GPIO0C_DS_L_GPIO0C2_DS_SHIFT)              /* 0x00000700 */
#define PMU2_IOC_GPIO0C_DS_L_GPIO0C3_DS_SHIFT              (12U)
#define PMU2_IOC_GPIO0C_DS_L_GPIO0C3_DS_MASK               (0x7U << PMU2_IOC_GPIO0C_DS_L_GPIO0C3_DS_SHIFT)              /* 0x00007000 */
/* GPIO0C_DS_H */
#define PMU2_IOC_GPIO0C_DS_H_OFFSET                        (0x1CU)
#define PMU2_IOC_GPIO0C_DS_H_GPIO0C4_DS_SHIFT              (0U)
#define PMU2_IOC_GPIO0C_DS_H_GPIO0C4_DS_MASK               (0x7U << PMU2_IOC_GPIO0C_DS_H_GPIO0C4_DS_SHIFT)              /* 0x00000007 */
#define PMU2_IOC_GPIO0C_DS_H_GPIO0C5_DS_SHIFT              (4U)
#define PMU2_IOC_GPIO0C_DS_H_GPIO0C5_DS_MASK               (0x7U << PMU2_IOC_GPIO0C_DS_H_GPIO0C5_DS_SHIFT)              /* 0x00000070 */
#define PMU2_IOC_GPIO0C_DS_H_GPIO0C6_DS_SHIFT              (8U)
#define PMU2_IOC_GPIO0C_DS_H_GPIO0C6_DS_MASK               (0x7U << PMU2_IOC_GPIO0C_DS_H_GPIO0C6_DS_SHIFT)              /* 0x00000700 */
#define PMU2_IOC_GPIO0C_DS_H_GPIO0C7_DS_SHIFT              (12U)
#define PMU2_IOC_GPIO0C_DS_H_GPIO0C7_DS_MASK               (0x7U << PMU2_IOC_GPIO0C_DS_H_GPIO0C7_DS_SHIFT)              /* 0x00007000 */
/* GPIO0D_DS_L */
#define PMU2_IOC_GPIO0D_DS_L_OFFSET                        (0x20U)
#define PMU2_IOC_GPIO0D_DS_L_GPIO0D0_DS_SHIFT              (0U)
#define PMU2_IOC_GPIO0D_DS_L_GPIO0D0_DS_MASK               (0x7U << PMU2_IOC_GPIO0D_DS_L_GPIO0D0_DS_SHIFT)              /* 0x00000007 */
#define PMU2_IOC_GPIO0D_DS_L_GPIO0D1_DS_SHIFT              (4U)
#define PMU2_IOC_GPIO0D_DS_L_GPIO0D1_DS_MASK               (0x7U << PMU2_IOC_GPIO0D_DS_L_GPIO0D1_DS_SHIFT)              /* 0x00000070 */
#define PMU2_IOC_GPIO0D_DS_L_GPIO0D2_DS_SHIFT              (8U)
#define PMU2_IOC_GPIO0D_DS_L_GPIO0D2_DS_MASK               (0x7U << PMU2_IOC_GPIO0D_DS_L_GPIO0D2_DS_SHIFT)              /* 0x00000700 */
#define PMU2_IOC_GPIO0D_DS_L_GPIO0D3_DS_SHIFT              (12U)
#define PMU2_IOC_GPIO0D_DS_L_GPIO0D3_DS_MASK               (0x7U << PMU2_IOC_GPIO0D_DS_L_GPIO0D3_DS_SHIFT)              /* 0x00007000 */
/* GPIO0D_DS_H */
#define PMU2_IOC_GPIO0D_DS_H_OFFSET                        (0x24U)
#define PMU2_IOC_GPIO0D_DS_H_GPIO0D4_DS_SHIFT              (0U)
#define PMU2_IOC_GPIO0D_DS_H_GPIO0D4_DS_MASK               (0x7U << PMU2_IOC_GPIO0D_DS_H_GPIO0D4_DS_SHIFT)              /* 0x00000007 */
#define PMU2_IOC_GPIO0D_DS_H_GPIO0D5_DS_SHIFT              (4U)
#define PMU2_IOC_GPIO0D_DS_H_GPIO0D5_DS_MASK               (0x7U << PMU2_IOC_GPIO0D_DS_H_GPIO0D5_DS_SHIFT)              /* 0x00000070 */
#define PMU2_IOC_GPIO0D_DS_H_GPIO0D6_DS_SHIFT              (8U)
#define PMU2_IOC_GPIO0D_DS_H_GPIO0D6_DS_MASK               (0x7U << PMU2_IOC_GPIO0D_DS_H_GPIO0D6_DS_SHIFT)              /* 0x00000700 */
/* GPIO0B_P */
#define PMU2_IOC_GPIO0B_P_OFFSET                           (0x28U)
#define PMU2_IOC_GPIO0B_P_GPIO0B5_PE_SHIFT                 (10U)
#define PMU2_IOC_GPIO0B_P_GPIO0B5_PE_MASK                  (0x1U << PMU2_IOC_GPIO0B_P_GPIO0B5_PE_SHIFT)                 /* 0x00000400 */
#define PMU2_IOC_GPIO0B_P_GPIO0B5_PS_SHIFT                 (11U)
#define PMU2_IOC_GPIO0B_P_GPIO0B5_PS_MASK                  (0x1U << PMU2_IOC_GPIO0B_P_GPIO0B5_PS_SHIFT)                 /* 0x00000800 */
#define PMU2_IOC_GPIO0B_P_GPIO0B6_PE_SHIFT                 (12U)
#define PMU2_IOC_GPIO0B_P_GPIO0B6_PE_MASK                  (0x1U << PMU2_IOC_GPIO0B_P_GPIO0B6_PE_SHIFT)                 /* 0x00001000 */
#define PMU2_IOC_GPIO0B_P_GPIO0B6_PS_SHIFT                 (13U)
#define PMU2_IOC_GPIO0B_P_GPIO0B6_PS_MASK                  (0x1U << PMU2_IOC_GPIO0B_P_GPIO0B6_PS_SHIFT)                 /* 0x00002000 */
#define PMU2_IOC_GPIO0B_P_GPIO0B7_PE_SHIFT                 (14U)
#define PMU2_IOC_GPIO0B_P_GPIO0B7_PE_MASK                  (0x1U << PMU2_IOC_GPIO0B_P_GPIO0B7_PE_SHIFT)                 /* 0x00004000 */
#define PMU2_IOC_GPIO0B_P_GPIO0B7_PS_SHIFT                 (15U)
#define PMU2_IOC_GPIO0B_P_GPIO0B7_PS_MASK                  (0x1U << PMU2_IOC_GPIO0B_P_GPIO0B7_PS_SHIFT)                 /* 0x00008000 */
/* GPIO0C_P */
#define PMU2_IOC_GPIO0C_P_OFFSET                           (0x2CU)
#define PMU2_IOC_GPIO0C_P_GPIO0C0_PE_SHIFT                 (0U)
#define PMU2_IOC_GPIO0C_P_GPIO0C0_PE_MASK                  (0x1U << PMU2_IOC_GPIO0C_P_GPIO0C0_PE_SHIFT)                 /* 0x00000001 */
#define PMU2_IOC_GPIO0C_P_GPIO0C0_PS_SHIFT                 (1U)
#define PMU2_IOC_GPIO0C_P_GPIO0C0_PS_MASK                  (0x1U << PMU2_IOC_GPIO0C_P_GPIO0C0_PS_SHIFT)                 /* 0x00000002 */
#define PMU2_IOC_GPIO0C_P_GPIO0C1_PE_SHIFT                 (2U)
#define PMU2_IOC_GPIO0C_P_GPIO0C1_PE_MASK                  (0x1U << PMU2_IOC_GPIO0C_P_GPIO0C1_PE_SHIFT)                 /* 0x00000004 */
#define PMU2_IOC_GPIO0C_P_GPIO0C1_PS_SHIFT                 (3U)
#define PMU2_IOC_GPIO0C_P_GPIO0C1_PS_MASK                  (0x1U << PMU2_IOC_GPIO0C_P_GPIO0C1_PS_SHIFT)                 /* 0x00000008 */
#define PMU2_IOC_GPIO0C_P_GPIO0C2_PE_SHIFT                 (4U)
#define PMU2_IOC_GPIO0C_P_GPIO0C2_PE_MASK                  (0x1U << PMU2_IOC_GPIO0C_P_GPIO0C2_PE_SHIFT)                 /* 0x00000010 */
#define PMU2_IOC_GPIO0C_P_GPIO0C2_PS_SHIFT                 (5U)
#define PMU2_IOC_GPIO0C_P_GPIO0C2_PS_MASK                  (0x1U << PMU2_IOC_GPIO0C_P_GPIO0C2_PS_SHIFT)                 /* 0x00000020 */
#define PMU2_IOC_GPIO0C_P_GPIO0C3_PE_SHIFT                 (6U)
#define PMU2_IOC_GPIO0C_P_GPIO0C3_PE_MASK                  (0x1U << PMU2_IOC_GPIO0C_P_GPIO0C3_PE_SHIFT)                 /* 0x00000040 */
#define PMU2_IOC_GPIO0C_P_GPIO0C3_PS_SHIFT                 (7U)
#define PMU2_IOC_GPIO0C_P_GPIO0C3_PS_MASK                  (0x1U << PMU2_IOC_GPIO0C_P_GPIO0C3_PS_SHIFT)                 /* 0x00000080 */
#define PMU2_IOC_GPIO0C_P_GPIO0C4_PE_SHIFT                 (8U)
#define PMU2_IOC_GPIO0C_P_GPIO0C4_PE_MASK                  (0x1U << PMU2_IOC_GPIO0C_P_GPIO0C4_PE_SHIFT)                 /* 0x00000100 */
#define PMU2_IOC_GPIO0C_P_GPIO0C4_PS_SHIFT                 (9U)
#define PMU2_IOC_GPIO0C_P_GPIO0C4_PS_MASK                  (0x1U << PMU2_IOC_GPIO0C_P_GPIO0C4_PS_SHIFT)                 /* 0x00000200 */
#define PMU2_IOC_GPIO0C_P_GPIO0C5_PE_SHIFT                 (10U)
#define PMU2_IOC_GPIO0C_P_GPIO0C5_PE_MASK                  (0x1U << PMU2_IOC_GPIO0C_P_GPIO0C5_PE_SHIFT)                 /* 0x00000400 */
#define PMU2_IOC_GPIO0C_P_GPIO0C5_PS_SHIFT                 (11U)
#define PMU2_IOC_GPIO0C_P_GPIO0C5_PS_MASK                  (0x1U << PMU2_IOC_GPIO0C_P_GPIO0C5_PS_SHIFT)                 /* 0x00000800 */
#define PMU2_IOC_GPIO0C_P_GPIO0C6_PE_SHIFT                 (12U)
#define PMU2_IOC_GPIO0C_P_GPIO0C6_PE_MASK                  (0x1U << PMU2_IOC_GPIO0C_P_GPIO0C6_PE_SHIFT)                 /* 0x00001000 */
#define PMU2_IOC_GPIO0C_P_GPIO0C6_PS_SHIFT                 (13U)
#define PMU2_IOC_GPIO0C_P_GPIO0C6_PS_MASK                  (0x1U << PMU2_IOC_GPIO0C_P_GPIO0C6_PS_SHIFT)                 /* 0x00002000 */
#define PMU2_IOC_GPIO0C_P_GPIO0C7_PE_SHIFT                 (14U)
#define PMU2_IOC_GPIO0C_P_GPIO0C7_PE_MASK                  (0x1U << PMU2_IOC_GPIO0C_P_GPIO0C7_PE_SHIFT)                 /* 0x00004000 */
#define PMU2_IOC_GPIO0C_P_GPIO0C7_PS_SHIFT                 (15U)
#define PMU2_IOC_GPIO0C_P_GPIO0C7_PS_MASK                  (0x1U << PMU2_IOC_GPIO0C_P_GPIO0C7_PS_SHIFT)                 /* 0x00008000 */
/* GPIO0D_P */
#define PMU2_IOC_GPIO0D_P_OFFSET                           (0x30U)
#define PMU2_IOC_GPIO0D_P_GPIO0D0_PE_SHIFT                 (0U)
#define PMU2_IOC_GPIO0D_P_GPIO0D0_PE_MASK                  (0x1U << PMU2_IOC_GPIO0D_P_GPIO0D0_PE_SHIFT)                 /* 0x00000001 */
#define PMU2_IOC_GPIO0D_P_GPIO0D0_PS_SHIFT                 (1U)
#define PMU2_IOC_GPIO0D_P_GPIO0D0_PS_MASK                  (0x1U << PMU2_IOC_GPIO0D_P_GPIO0D0_PS_SHIFT)                 /* 0x00000002 */
#define PMU2_IOC_GPIO0D_P_GPIO0D1_PE_SHIFT                 (2U)
#define PMU2_IOC_GPIO0D_P_GPIO0D1_PE_MASK                  (0x1U << PMU2_IOC_GPIO0D_P_GPIO0D1_PE_SHIFT)                 /* 0x00000004 */
#define PMU2_IOC_GPIO0D_P_GPIO0D1_PS_SHIFT                 (3U)
#define PMU2_IOC_GPIO0D_P_GPIO0D1_PS_MASK                  (0x1U << PMU2_IOC_GPIO0D_P_GPIO0D1_PS_SHIFT)                 /* 0x00000008 */
#define PMU2_IOC_GPIO0D_P_GPIO0D2_PE_SHIFT                 (4U)
#define PMU2_IOC_GPIO0D_P_GPIO0D2_PE_MASK                  (0x1U << PMU2_IOC_GPIO0D_P_GPIO0D2_PE_SHIFT)                 /* 0x00000010 */
#define PMU2_IOC_GPIO0D_P_GPIO0D2_PS_SHIFT                 (5U)
#define PMU2_IOC_GPIO0D_P_GPIO0D2_PS_MASK                  (0x1U << PMU2_IOC_GPIO0D_P_GPIO0D2_PS_SHIFT)                 /* 0x00000020 */
#define PMU2_IOC_GPIO0D_P_GPIO0D3_PE_SHIFT                 (6U)
#define PMU2_IOC_GPIO0D_P_GPIO0D3_PE_MASK                  (0x1U << PMU2_IOC_GPIO0D_P_GPIO0D3_PE_SHIFT)                 /* 0x00000040 */
#define PMU2_IOC_GPIO0D_P_GPIO0D3_PS_SHIFT                 (7U)
#define PMU2_IOC_GPIO0D_P_GPIO0D3_PS_MASK                  (0x1U << PMU2_IOC_GPIO0D_P_GPIO0D3_PS_SHIFT)                 /* 0x00000080 */
#define PMU2_IOC_GPIO0D_P_GPIO0D4_PE_SHIFT                 (8U)
#define PMU2_IOC_GPIO0D_P_GPIO0D4_PE_MASK                  (0x1U << PMU2_IOC_GPIO0D_P_GPIO0D4_PE_SHIFT)                 /* 0x00000100 */
#define PMU2_IOC_GPIO0D_P_GPIO0D4_PS_SHIFT                 (9U)
#define PMU2_IOC_GPIO0D_P_GPIO0D4_PS_MASK                  (0x1U << PMU2_IOC_GPIO0D_P_GPIO0D4_PS_SHIFT)                 /* 0x00000200 */
#define PMU2_IOC_GPIO0D_P_GPIO0D5_PE_SHIFT                 (10U)
#define PMU2_IOC_GPIO0D_P_GPIO0D5_PE_MASK                  (0x1U << PMU2_IOC_GPIO0D_P_GPIO0D5_PE_SHIFT)                 /* 0x00000400 */
#define PMU2_IOC_GPIO0D_P_GPIO0D5_PS_SHIFT                 (11U)
#define PMU2_IOC_GPIO0D_P_GPIO0D5_PS_MASK                  (0x1U << PMU2_IOC_GPIO0D_P_GPIO0D5_PS_SHIFT)                 /* 0x00000800 */
#define PMU2_IOC_GPIO0D_P_GPIO0D6_PE_SHIFT                 (12U)
#define PMU2_IOC_GPIO0D_P_GPIO0D6_PE_MASK                  (0x1U << PMU2_IOC_GPIO0D_P_GPIO0D6_PE_SHIFT)                 /* 0x00001000 */
#define PMU2_IOC_GPIO0D_P_GPIO0D6_PS_SHIFT                 (13U)
#define PMU2_IOC_GPIO0D_P_GPIO0D6_PS_MASK                  (0x1U << PMU2_IOC_GPIO0D_P_GPIO0D6_PS_SHIFT)                 /* 0x00002000 */
/* GPIO0B_IE */
#define PMU2_IOC_GPIO0B_IE_OFFSET                          (0x34U)
#define PMU2_IOC_GPIO0B_IE_GPIO0B5_IE_SHIFT                (5U)
#define PMU2_IOC_GPIO0B_IE_GPIO0B5_IE_MASK                 (0x1U << PMU2_IOC_GPIO0B_IE_GPIO0B5_IE_SHIFT)                /* 0x00000020 */
#define PMU2_IOC_GPIO0B_IE_GPIO0B6_IE_SHIFT                (6U)
#define PMU2_IOC_GPIO0B_IE_GPIO0B6_IE_MASK                 (0x1U << PMU2_IOC_GPIO0B_IE_GPIO0B6_IE_SHIFT)                /* 0x00000040 */
#define PMU2_IOC_GPIO0B_IE_GPIO0B7_IE_SHIFT                (7U)
#define PMU2_IOC_GPIO0B_IE_GPIO0B7_IE_MASK                 (0x1U << PMU2_IOC_GPIO0B_IE_GPIO0B7_IE_SHIFT)                /* 0x00000080 */
/* GPIO0C_IE */
#define PMU2_IOC_GPIO0C_IE_OFFSET                          (0x38U)
#define PMU2_IOC_GPIO0C_IE_GPIO0C0_IE_SHIFT                (0U)
#define PMU2_IOC_GPIO0C_IE_GPIO0C0_IE_MASK                 (0x1U << PMU2_IOC_GPIO0C_IE_GPIO0C0_IE_SHIFT)                /* 0x00000001 */
#define PMU2_IOC_GPIO0C_IE_GPIO0C1_IE_SHIFT                (1U)
#define PMU2_IOC_GPIO0C_IE_GPIO0C1_IE_MASK                 (0x1U << PMU2_IOC_GPIO0C_IE_GPIO0C1_IE_SHIFT)                /* 0x00000002 */
#define PMU2_IOC_GPIO0C_IE_GPIO0C2_IE_SHIFT                (2U)
#define PMU2_IOC_GPIO0C_IE_GPIO0C2_IE_MASK                 (0x1U << PMU2_IOC_GPIO0C_IE_GPIO0C2_IE_SHIFT)                /* 0x00000004 */
#define PMU2_IOC_GPIO0C_IE_GPIO0C3_IE_SHIFT                (3U)
#define PMU2_IOC_GPIO0C_IE_GPIO0C3_IE_MASK                 (0x1U << PMU2_IOC_GPIO0C_IE_GPIO0C3_IE_SHIFT)                /* 0x00000008 */
#define PMU2_IOC_GPIO0C_IE_GPIO0C4_IE_SHIFT                (4U)
#define PMU2_IOC_GPIO0C_IE_GPIO0C4_IE_MASK                 (0x1U << PMU2_IOC_GPIO0C_IE_GPIO0C4_IE_SHIFT)                /* 0x00000010 */
#define PMU2_IOC_GPIO0C_IE_GPIO0C5_IE_SHIFT                (5U)
#define PMU2_IOC_GPIO0C_IE_GPIO0C5_IE_MASK                 (0x1U << PMU2_IOC_GPIO0C_IE_GPIO0C5_IE_SHIFT)                /* 0x00000020 */
#define PMU2_IOC_GPIO0C_IE_GPIO0C6_IE_SHIFT                (6U)
#define PMU2_IOC_GPIO0C_IE_GPIO0C6_IE_MASK                 (0x1U << PMU2_IOC_GPIO0C_IE_GPIO0C6_IE_SHIFT)                /* 0x00000040 */
#define PMU2_IOC_GPIO0C_IE_GPIO0C7_IE_SHIFT                (7U)
#define PMU2_IOC_GPIO0C_IE_GPIO0C7_IE_MASK                 (0x1U << PMU2_IOC_GPIO0C_IE_GPIO0C7_IE_SHIFT)                /* 0x00000080 */
/* GPIO0D_IE */
#define PMU2_IOC_GPIO0D_IE_OFFSET                          (0x3CU)
#define PMU2_IOC_GPIO0D_IE_GPIO0D0_IE_SHIFT                (0U)
#define PMU2_IOC_GPIO0D_IE_GPIO0D0_IE_MASK                 (0x1U << PMU2_IOC_GPIO0D_IE_GPIO0D0_IE_SHIFT)                /* 0x00000001 */
#define PMU2_IOC_GPIO0D_IE_GPIO0D1_IE_SHIFT                (1U)
#define PMU2_IOC_GPIO0D_IE_GPIO0D1_IE_MASK                 (0x1U << PMU2_IOC_GPIO0D_IE_GPIO0D1_IE_SHIFT)                /* 0x00000002 */
#define PMU2_IOC_GPIO0D_IE_GPIO0D2_IE_SHIFT                (2U)
#define PMU2_IOC_GPIO0D_IE_GPIO0D2_IE_MASK                 (0x1U << PMU2_IOC_GPIO0D_IE_GPIO0D2_IE_SHIFT)                /* 0x00000004 */
#define PMU2_IOC_GPIO0D_IE_GPIO0D3_IE_SHIFT                (3U)
#define PMU2_IOC_GPIO0D_IE_GPIO0D3_IE_MASK                 (0x1U << PMU2_IOC_GPIO0D_IE_GPIO0D3_IE_SHIFT)                /* 0x00000008 */
#define PMU2_IOC_GPIO0D_IE_GPIO0D4_IE_SHIFT                (4U)
#define PMU2_IOC_GPIO0D_IE_GPIO0D4_IE_MASK                 (0x1U << PMU2_IOC_GPIO0D_IE_GPIO0D4_IE_SHIFT)                /* 0x00000010 */
#define PMU2_IOC_GPIO0D_IE_GPIO0D5_IE_SHIFT                (5U)
#define PMU2_IOC_GPIO0D_IE_GPIO0D5_IE_MASK                 (0x1U << PMU2_IOC_GPIO0D_IE_GPIO0D5_IE_SHIFT)                /* 0x00000020 */
#define PMU2_IOC_GPIO0D_IE_GPIO0D6_IE_SHIFT                (6U)
#define PMU2_IOC_GPIO0D_IE_GPIO0D6_IE_MASK                 (0x1U << PMU2_IOC_GPIO0D_IE_GPIO0D6_IE_SHIFT)                /* 0x00000040 */
/* GPIO0B_SMT */
#define PMU2_IOC_GPIO0B_SMT_OFFSET                         (0x40U)
#define PMU2_IOC_GPIO0B_SMT_GPIO0B5_SMT_SHIFT              (5U)
#define PMU2_IOC_GPIO0B_SMT_GPIO0B5_SMT_MASK               (0x1U << PMU2_IOC_GPIO0B_SMT_GPIO0B5_SMT_SHIFT)              /* 0x00000020 */
#define PMU2_IOC_GPIO0B_SMT_GPIO0B6_SMT_SHIFT              (6U)
#define PMU2_IOC_GPIO0B_SMT_GPIO0B6_SMT_MASK               (0x1U << PMU2_IOC_GPIO0B_SMT_GPIO0B6_SMT_SHIFT)              /* 0x00000040 */
#define PMU2_IOC_GPIO0B_SMT_GPIO0B7_SMT_SHIFT              (7U)
#define PMU2_IOC_GPIO0B_SMT_GPIO0B7_SMT_MASK               (0x1U << PMU2_IOC_GPIO0B_SMT_GPIO0B7_SMT_SHIFT)              /* 0x00000080 */
/* GPIO0C_SMT */
#define PMU2_IOC_GPIO0C_SMT_OFFSET                         (0x44U)
#define PMU2_IOC_GPIO0C_SMT_GPIO0C0_SMT_SHIFT              (0U)
#define PMU2_IOC_GPIO0C_SMT_GPIO0C0_SMT_MASK               (0x1U << PMU2_IOC_GPIO0C_SMT_GPIO0C0_SMT_SHIFT)              /* 0x00000001 */
#define PMU2_IOC_GPIO0C_SMT_GPIO0C1_SMT_SHIFT              (1U)
#define PMU2_IOC_GPIO0C_SMT_GPIO0C1_SMT_MASK               (0x1U << PMU2_IOC_GPIO0C_SMT_GPIO0C1_SMT_SHIFT)              /* 0x00000002 */
#define PMU2_IOC_GPIO0C_SMT_GPIO0C2_SMT_SHIFT              (2U)
#define PMU2_IOC_GPIO0C_SMT_GPIO0C2_SMT_MASK               (0x1U << PMU2_IOC_GPIO0C_SMT_GPIO0C2_SMT_SHIFT)              /* 0x00000004 */
#define PMU2_IOC_GPIO0C_SMT_GPIO0C3_SMT_SHIFT              (3U)
#define PMU2_IOC_GPIO0C_SMT_GPIO0C3_SMT_MASK               (0x1U << PMU2_IOC_GPIO0C_SMT_GPIO0C3_SMT_SHIFT)              /* 0x00000008 */
#define PMU2_IOC_GPIO0C_SMT_GPIO0C4_SMT_SHIFT              (4U)
#define PMU2_IOC_GPIO0C_SMT_GPIO0C4_SMT_MASK               (0x1U << PMU2_IOC_GPIO0C_SMT_GPIO0C4_SMT_SHIFT)              /* 0x00000010 */
#define PMU2_IOC_GPIO0C_SMT_GPIO0C5_SMT_SHIFT              (5U)
#define PMU2_IOC_GPIO0C_SMT_GPIO0C5_SMT_MASK               (0x1U << PMU2_IOC_GPIO0C_SMT_GPIO0C5_SMT_SHIFT)              /* 0x00000020 */
#define PMU2_IOC_GPIO0C_SMT_GPIO0C6_SMT_SHIFT              (6U)
#define PMU2_IOC_GPIO0C_SMT_GPIO0C6_SMT_MASK               (0x1U << PMU2_IOC_GPIO0C_SMT_GPIO0C6_SMT_SHIFT)              /* 0x00000040 */
#define PMU2_IOC_GPIO0C_SMT_GPIO0C7_SMT_SHIFT              (7U)
#define PMU2_IOC_GPIO0C_SMT_GPIO0C7_SMT_MASK               (0x1U << PMU2_IOC_GPIO0C_SMT_GPIO0C7_SMT_SHIFT)              /* 0x00000080 */
/* GPIO0D_SMT */
#define PMU2_IOC_GPIO0D_SMT_OFFSET                         (0x48U)
#define PMU2_IOC_GPIO0D_SMT_GPIO0D0_SMT_SHIFT              (0U)
#define PMU2_IOC_GPIO0D_SMT_GPIO0D0_SMT_MASK               (0x1U << PMU2_IOC_GPIO0D_SMT_GPIO0D0_SMT_SHIFT)              /* 0x00000001 */
#define PMU2_IOC_GPIO0D_SMT_GPIO0D1_SMT_SHIFT              (1U)
#define PMU2_IOC_GPIO0D_SMT_GPIO0D1_SMT_MASK               (0x1U << PMU2_IOC_GPIO0D_SMT_GPIO0D1_SMT_SHIFT)              /* 0x00000002 */
#define PMU2_IOC_GPIO0D_SMT_GPIO0D2_SMT_SHIFT              (2U)
#define PMU2_IOC_GPIO0D_SMT_GPIO0D2_SMT_MASK               (0x1U << PMU2_IOC_GPIO0D_SMT_GPIO0D2_SMT_SHIFT)              /* 0x00000004 */
#define PMU2_IOC_GPIO0D_SMT_GPIO0D3_SMT_SHIFT              (3U)
#define PMU2_IOC_GPIO0D_SMT_GPIO0D3_SMT_MASK               (0x1U << PMU2_IOC_GPIO0D_SMT_GPIO0D3_SMT_SHIFT)              /* 0x00000008 */
#define PMU2_IOC_GPIO0D_SMT_GPIO0D4_SMT_SHIFT              (4U)
#define PMU2_IOC_GPIO0D_SMT_GPIO0D4_SMT_MASK               (0x1U << PMU2_IOC_GPIO0D_SMT_GPIO0D4_SMT_SHIFT)              /* 0x00000010 */
#define PMU2_IOC_GPIO0D_SMT_GPIO0D5_SMT_SHIFT              (5U)
#define PMU2_IOC_GPIO0D_SMT_GPIO0D5_SMT_MASK               (0x1U << PMU2_IOC_GPIO0D_SMT_GPIO0D5_SMT_SHIFT)              /* 0x00000020 */
#define PMU2_IOC_GPIO0D_SMT_GPIO0D6_SMT_SHIFT              (6U)
#define PMU2_IOC_GPIO0D_SMT_GPIO0D6_SMT_MASK               (0x1U << PMU2_IOC_GPIO0D_SMT_GPIO0D6_SMT_SHIFT)              /* 0x00000040 */
/* GPIO0B_PDIS */
#define PMU2_IOC_GPIO0B_PDIS_OFFSET                        (0x4CU)
#define PMU2_IOC_GPIO0B_PDIS_GPIO0B5_PULL_DIS_SHIFT        (5U)
#define PMU2_IOC_GPIO0B_PDIS_GPIO0B5_PULL_DIS_MASK         (0x1U << PMU2_IOC_GPIO0B_PDIS_GPIO0B5_PULL_DIS_SHIFT)        /* 0x00000020 */
#define PMU2_IOC_GPIO0B_PDIS_GPIO0B6_PULL_DIS_SHIFT        (6U)
#define PMU2_IOC_GPIO0B_PDIS_GPIO0B6_PULL_DIS_MASK         (0x1U << PMU2_IOC_GPIO0B_PDIS_GPIO0B6_PULL_DIS_SHIFT)        /* 0x00000040 */
#define PMU2_IOC_GPIO0B_PDIS_GPIO0B7_PULL_DIS_SHIFT        (7U)
#define PMU2_IOC_GPIO0B_PDIS_GPIO0B7_PULL_DIS_MASK         (0x1U << PMU2_IOC_GPIO0B_PDIS_GPIO0B7_PULL_DIS_SHIFT)        /* 0x00000080 */
/* GPIO0C_PDIS */
#define PMU2_IOC_GPIO0C_PDIS_OFFSET                        (0x50U)
#define PMU2_IOC_GPIO0C_PDIS_GPIO0C0_PULL_DIS_SHIFT        (0U)
#define PMU2_IOC_GPIO0C_PDIS_GPIO0C0_PULL_DIS_MASK         (0x1U << PMU2_IOC_GPIO0C_PDIS_GPIO0C0_PULL_DIS_SHIFT)        /* 0x00000001 */
#define PMU2_IOC_GPIO0C_PDIS_GPIO0C1_PULL_DIS_SHIFT        (1U)
#define PMU2_IOC_GPIO0C_PDIS_GPIO0C1_PULL_DIS_MASK         (0x1U << PMU2_IOC_GPIO0C_PDIS_GPIO0C1_PULL_DIS_SHIFT)        /* 0x00000002 */
#define PMU2_IOC_GPIO0C_PDIS_GPIO0C2_PULL_DIS_SHIFT        (2U)
#define PMU2_IOC_GPIO0C_PDIS_GPIO0C2_PULL_DIS_MASK         (0x1U << PMU2_IOC_GPIO0C_PDIS_GPIO0C2_PULL_DIS_SHIFT)        /* 0x00000004 */
#define PMU2_IOC_GPIO0C_PDIS_GPIO0C3_PULL_DIS_SHIFT        (3U)
#define PMU2_IOC_GPIO0C_PDIS_GPIO0C3_PULL_DIS_MASK         (0x1U << PMU2_IOC_GPIO0C_PDIS_GPIO0C3_PULL_DIS_SHIFT)        /* 0x00000008 */
#define PMU2_IOC_GPIO0C_PDIS_GPIO0C4_PULL_DIS_SHIFT        (4U)
#define PMU2_IOC_GPIO0C_PDIS_GPIO0C4_PULL_DIS_MASK         (0x1U << PMU2_IOC_GPIO0C_PDIS_GPIO0C4_PULL_DIS_SHIFT)        /* 0x00000010 */
#define PMU2_IOC_GPIO0C_PDIS_GPIO0C5_PULL_DIS_SHIFT        (5U)
#define PMU2_IOC_GPIO0C_PDIS_GPIO0C5_PULL_DIS_MASK         (0x1U << PMU2_IOC_GPIO0C_PDIS_GPIO0C5_PULL_DIS_SHIFT)        /* 0x00000020 */
#define PMU2_IOC_GPIO0C_PDIS_GPIO0C6_PULL_DIS_SHIFT        (6U)
#define PMU2_IOC_GPIO0C_PDIS_GPIO0C6_PULL_DIS_MASK         (0x1U << PMU2_IOC_GPIO0C_PDIS_GPIO0C6_PULL_DIS_SHIFT)        /* 0x00000040 */
#define PMU2_IOC_GPIO0C_PDIS_GPIO0C7_PULL_DIS_SHIFT        (7U)
#define PMU2_IOC_GPIO0C_PDIS_GPIO0C7_PULL_DIS_MASK         (0x1U << PMU2_IOC_GPIO0C_PDIS_GPIO0C7_PULL_DIS_SHIFT)        /* 0x00000080 */
/* GPIO0D_PDIS */
#define PMU2_IOC_GPIO0D_PDIS_OFFSET                        (0x54U)
#define PMU2_IOC_GPIO0D_PDIS_GPIO0D0_PULL_DIS_SHIFT        (0U)
#define PMU2_IOC_GPIO0D_PDIS_GPIO0D0_PULL_DIS_MASK         (0x1U << PMU2_IOC_GPIO0D_PDIS_GPIO0D0_PULL_DIS_SHIFT)        /* 0x00000001 */
#define PMU2_IOC_GPIO0D_PDIS_GPIO0D1_PULL_DIS_SHIFT        (1U)
#define PMU2_IOC_GPIO0D_PDIS_GPIO0D1_PULL_DIS_MASK         (0x1U << PMU2_IOC_GPIO0D_PDIS_GPIO0D1_PULL_DIS_SHIFT)        /* 0x00000002 */
#define PMU2_IOC_GPIO0D_PDIS_GPIO0D2_PULL_DIS_SHIFT        (2U)
#define PMU2_IOC_GPIO0D_PDIS_GPIO0D2_PULL_DIS_MASK         (0x1U << PMU2_IOC_GPIO0D_PDIS_GPIO0D2_PULL_DIS_SHIFT)        /* 0x00000004 */
#define PMU2_IOC_GPIO0D_PDIS_GPIO0D3_PULL_DIS_SHIFT        (3U)
#define PMU2_IOC_GPIO0D_PDIS_GPIO0D3_PULL_DIS_MASK         (0x1U << PMU2_IOC_GPIO0D_PDIS_GPIO0D3_PULL_DIS_SHIFT)        /* 0x00000008 */
#define PMU2_IOC_GPIO0D_PDIS_GPIO0D4_PULL_DIS_SHIFT        (4U)
#define PMU2_IOC_GPIO0D_PDIS_GPIO0D4_PULL_DIS_MASK         (0x1U << PMU2_IOC_GPIO0D_PDIS_GPIO0D4_PULL_DIS_SHIFT)        /* 0x00000010 */
#define PMU2_IOC_GPIO0D_PDIS_GPIO0D5_PULL_DIS_SHIFT        (5U)
#define PMU2_IOC_GPIO0D_PDIS_GPIO0D5_PULL_DIS_MASK         (0x1U << PMU2_IOC_GPIO0D_PDIS_GPIO0D5_PULL_DIS_SHIFT)        /* 0x00000020 */
#define PMU2_IOC_GPIO0D_PDIS_GPIO0D6_PULL_DIS_SHIFT        (6U)
#define PMU2_IOC_GPIO0D_PDIS_GPIO0D6_PULL_DIS_MASK         (0x1U << PMU2_IOC_GPIO0D_PDIS_GPIO0D6_PULL_DIS_SHIFT)        /* 0x00000040 */
/****************************************BUS_IOC*****************************************/
/* GPIO0B_IOMUX_SEL_H */
#define BUS_IOC_GPIO0B_IOMUX_SEL_H_OFFSET                  (0xCU)
#define BUS_IOC_GPIO0B_IOMUX_SEL_H_GPIO0B5_SEL_SHIFT       (4U)
#define BUS_IOC_GPIO0B_IOMUX_SEL_H_GPIO0B5_SEL_MASK        (0xFU << BUS_IOC_GPIO0B_IOMUX_SEL_H_GPIO0B5_SEL_SHIFT)       /* 0x000000F0 */
#define BUS_IOC_GPIO0B_IOMUX_SEL_H_GPIO0B6_SEL_SHIFT       (8U)
#define BUS_IOC_GPIO0B_IOMUX_SEL_H_GPIO0B6_SEL_MASK        (0xFU << BUS_IOC_GPIO0B_IOMUX_SEL_H_GPIO0B6_SEL_SHIFT)       /* 0x00000F00 */
#define BUS_IOC_GPIO0B_IOMUX_SEL_H_GPIO0B7_SEL_SHIFT       (12U)
#define BUS_IOC_GPIO0B_IOMUX_SEL_H_GPIO0B7_SEL_MASK        (0xFU << BUS_IOC_GPIO0B_IOMUX_SEL_H_GPIO0B7_SEL_SHIFT)       /* 0x0000F000 */
/* GPIO0C_IOMUX_SEL_L */
#define BUS_IOC_GPIO0C_IOMUX_SEL_L_OFFSET                  (0x10U)
#define BUS_IOC_GPIO0C_IOMUX_SEL_L_GPIO0C0_SEL_SHIFT       (0U)
#define BUS_IOC_GPIO0C_IOMUX_SEL_L_GPIO0C0_SEL_MASK        (0xFU << BUS_IOC_GPIO0C_IOMUX_SEL_L_GPIO0C0_SEL_SHIFT)       /* 0x0000000F */
/* GPIO0C_IOMUX_SEL_H */
#define BUS_IOC_GPIO0C_IOMUX_SEL_H_OFFSET                  (0x14U)
#define BUS_IOC_GPIO0C_IOMUX_SEL_H_GPIO0C4_SEL_SHIFT       (0U)
#define BUS_IOC_GPIO0C_IOMUX_SEL_H_GPIO0C4_SEL_MASK        (0xFU << BUS_IOC_GPIO0C_IOMUX_SEL_H_GPIO0C4_SEL_SHIFT)       /* 0x0000000F */
#define BUS_IOC_GPIO0C_IOMUX_SEL_H_GPIO0C5_SEL_SHIFT       (4U)
#define BUS_IOC_GPIO0C_IOMUX_SEL_H_GPIO0C5_SEL_MASK        (0xFU << BUS_IOC_GPIO0C_IOMUX_SEL_H_GPIO0C5_SEL_SHIFT)       /* 0x000000F0 */
#define BUS_IOC_GPIO0C_IOMUX_SEL_H_GPIO0C6_SEL_SHIFT       (8U)
#define BUS_IOC_GPIO0C_IOMUX_SEL_H_GPIO0C6_SEL_MASK        (0xFU << BUS_IOC_GPIO0C_IOMUX_SEL_H_GPIO0C6_SEL_SHIFT)       /* 0x00000F00 */
#define BUS_IOC_GPIO0C_IOMUX_SEL_H_GPIO0C7_SEL_SHIFT       (12U)
#define BUS_IOC_GPIO0C_IOMUX_SEL_H_GPIO0C7_SEL_MASK        (0xFU << BUS_IOC_GPIO0C_IOMUX_SEL_H_GPIO0C7_SEL_SHIFT)       /* 0x0000F000 */
/* GPIO0D_IOMUX_SEL_L */
#define BUS_IOC_GPIO0D_IOMUX_SEL_L_OFFSET                  (0x18U)
#define BUS_IOC_GPIO0D_IOMUX_SEL_L_GPIO0D0_SEL_SHIFT       (0U)
#define BUS_IOC_GPIO0D_IOMUX_SEL_L_GPIO0D0_SEL_MASK        (0xFU << BUS_IOC_GPIO0D_IOMUX_SEL_L_GPIO0D0_SEL_SHIFT)       /* 0x0000000F */
#define BUS_IOC_GPIO0D_IOMUX_SEL_L_GPIO0D1_SEL_SHIFT       (4U)
#define BUS_IOC_GPIO0D_IOMUX_SEL_L_GPIO0D1_SEL_MASK        (0xFU << BUS_IOC_GPIO0D_IOMUX_SEL_L_GPIO0D1_SEL_SHIFT)       /* 0x000000F0 */
#define BUS_IOC_GPIO0D_IOMUX_SEL_L_GPIO0D2_SEL_SHIFT       (8U)
#define BUS_IOC_GPIO0D_IOMUX_SEL_L_GPIO0D2_SEL_MASK        (0xFU << BUS_IOC_GPIO0D_IOMUX_SEL_L_GPIO0D2_SEL_SHIFT)       /* 0x00000F00 */
#define BUS_IOC_GPIO0D_IOMUX_SEL_L_GPIO0D3_SEL_SHIFT       (12U)
#define BUS_IOC_GPIO0D_IOMUX_SEL_L_GPIO0D3_SEL_MASK        (0xFU << BUS_IOC_GPIO0D_IOMUX_SEL_L_GPIO0D3_SEL_SHIFT)       /* 0x0000F000 */
/* GPIO0D_IOMUX_SEL_H */
#define BUS_IOC_GPIO0D_IOMUX_SEL_H_OFFSET                  (0x1CU)
#define BUS_IOC_GPIO0D_IOMUX_SEL_H_GPIO0D4_SEL_SHIFT       (0U)
#define BUS_IOC_GPIO0D_IOMUX_SEL_H_GPIO0D4_SEL_MASK        (0xFU << BUS_IOC_GPIO0D_IOMUX_SEL_H_GPIO0D4_SEL_SHIFT)       /* 0x0000000F */
#define BUS_IOC_GPIO0D_IOMUX_SEL_H_GPIO0D5_SEL_SHIFT       (4U)
#define BUS_IOC_GPIO0D_IOMUX_SEL_H_GPIO0D5_SEL_MASK        (0xFU << BUS_IOC_GPIO0D_IOMUX_SEL_H_GPIO0D5_SEL_SHIFT)       /* 0x000000F0 */
/* GPIO1A_IOMUX_SEL_L */
#define BUS_IOC_GPIO1A_IOMUX_SEL_L_OFFSET                  (0x20U)
#define BUS_IOC_GPIO1A_IOMUX_SEL_L_GPIO1A0_SEL_SHIFT       (0U)
#define BUS_IOC_GPIO1A_IOMUX_SEL_L_GPIO1A0_SEL_MASK        (0xFU << BUS_IOC_GPIO1A_IOMUX_SEL_L_GPIO1A0_SEL_SHIFT)       /* 0x0000000F */
#define BUS_IOC_GPIO1A_IOMUX_SEL_L_GPIO1A1_SEL_SHIFT       (4U)
#define BUS_IOC_GPIO1A_IOMUX_SEL_L_GPIO1A1_SEL_MASK        (0xFU << BUS_IOC_GPIO1A_IOMUX_SEL_L_GPIO1A1_SEL_SHIFT)       /* 0x000000F0 */
#define BUS_IOC_GPIO1A_IOMUX_SEL_L_GPIO1A2_SEL_SHIFT       (8U)
#define BUS_IOC_GPIO1A_IOMUX_SEL_L_GPIO1A2_SEL_MASK        (0xFU << BUS_IOC_GPIO1A_IOMUX_SEL_L_GPIO1A2_SEL_SHIFT)       /* 0x00000F00 */
#define BUS_IOC_GPIO1A_IOMUX_SEL_L_GPIO1A3_SEL_SHIFT       (12U)
#define BUS_IOC_GPIO1A_IOMUX_SEL_L_GPIO1A3_SEL_MASK        (0xFU << BUS_IOC_GPIO1A_IOMUX_SEL_L_GPIO1A3_SEL_SHIFT)       /* 0x0000F000 */
/* GPIO1A_IOMUX_SEL_H */
#define BUS_IOC_GPIO1A_IOMUX_SEL_H_OFFSET                  (0x24U)
#define BUS_IOC_GPIO1A_IOMUX_SEL_H_GPIO1A4_SEL_SHIFT       (0U)
#define BUS_IOC_GPIO1A_IOMUX_SEL_H_GPIO1A4_SEL_MASK        (0xFU << BUS_IOC_GPIO1A_IOMUX_SEL_H_GPIO1A4_SEL_SHIFT)       /* 0x0000000F */
#define BUS_IOC_GPIO1A_IOMUX_SEL_H_GPIO1A5_SEL_SHIFT       (4U)
#define BUS_IOC_GPIO1A_IOMUX_SEL_H_GPIO1A5_SEL_MASK        (0xFU << BUS_IOC_GPIO1A_IOMUX_SEL_H_GPIO1A5_SEL_SHIFT)       /* 0x000000F0 */
#define BUS_IOC_GPIO1A_IOMUX_SEL_H_GPIO1A6_SEL_SHIFT       (8U)
#define BUS_IOC_GPIO1A_IOMUX_SEL_H_GPIO1A6_SEL_MASK        (0xFU << BUS_IOC_GPIO1A_IOMUX_SEL_H_GPIO1A6_SEL_SHIFT)       /* 0x00000F00 */
#define BUS_IOC_GPIO1A_IOMUX_SEL_H_GPIO1A7_SEL_SHIFT       (12U)
#define BUS_IOC_GPIO1A_IOMUX_SEL_H_GPIO1A7_SEL_MASK        (0xFU << BUS_IOC_GPIO1A_IOMUX_SEL_H_GPIO1A7_SEL_SHIFT)       /* 0x0000F000 */
/* GPIO1B_IOMUX_SEL_L */
#define BUS_IOC_GPIO1B_IOMUX_SEL_L_OFFSET                  (0x28U)
#define BUS_IOC_GPIO1B_IOMUX_SEL_L_GPIO1B0_SEL_SHIFT       (0U)
#define BUS_IOC_GPIO1B_IOMUX_SEL_L_GPIO1B0_SEL_MASK        (0xFU << BUS_IOC_GPIO1B_IOMUX_SEL_L_GPIO1B0_SEL_SHIFT)       /* 0x0000000F */
#define BUS_IOC_GPIO1B_IOMUX_SEL_L_GPIO1B1_SEL_SHIFT       (4U)
#define BUS_IOC_GPIO1B_IOMUX_SEL_L_GPIO1B1_SEL_MASK        (0xFU << BUS_IOC_GPIO1B_IOMUX_SEL_L_GPIO1B1_SEL_SHIFT)       /* 0x000000F0 */
#define BUS_IOC_GPIO1B_IOMUX_SEL_L_GPIO1B2_SEL_SHIFT       (8U)
#define BUS_IOC_GPIO1B_IOMUX_SEL_L_GPIO1B2_SEL_MASK        (0xFU << BUS_IOC_GPIO1B_IOMUX_SEL_L_GPIO1B2_SEL_SHIFT)       /* 0x00000F00 */
#define BUS_IOC_GPIO1B_IOMUX_SEL_L_GPIO1B3_SEL_SHIFT       (12U)
#define BUS_IOC_GPIO1B_IOMUX_SEL_L_GPIO1B3_SEL_MASK        (0xFU << BUS_IOC_GPIO1B_IOMUX_SEL_L_GPIO1B3_SEL_SHIFT)       /* 0x0000F000 */
/* GPIO1B_IOMUX_SEL_H */
#define BUS_IOC_GPIO1B_IOMUX_SEL_H_OFFSET                  (0x2CU)
#define BUS_IOC_GPIO1B_IOMUX_SEL_H_GPIO1B4_SEL_SHIFT       (0U)
#define BUS_IOC_GPIO1B_IOMUX_SEL_H_GPIO1B4_SEL_MASK        (0xFU << BUS_IOC_GPIO1B_IOMUX_SEL_H_GPIO1B4_SEL_SHIFT)       /* 0x0000000F */
#define BUS_IOC_GPIO1B_IOMUX_SEL_H_GPIO1B5_SEL_SHIFT       (4U)
#define BUS_IOC_GPIO1B_IOMUX_SEL_H_GPIO1B5_SEL_MASK        (0xFU << BUS_IOC_GPIO1B_IOMUX_SEL_H_GPIO1B5_SEL_SHIFT)       /* 0x000000F0 */
#define BUS_IOC_GPIO1B_IOMUX_SEL_H_GPIO1B6_SEL_SHIFT       (8U)
#define BUS_IOC_GPIO1B_IOMUX_SEL_H_GPIO1B6_SEL_MASK        (0xFU << BUS_IOC_GPIO1B_IOMUX_SEL_H_GPIO1B6_SEL_SHIFT)       /* 0x00000F00 */
#define BUS_IOC_GPIO1B_IOMUX_SEL_H_GPIO1B7_SEL_SHIFT       (12U)
#define BUS_IOC_GPIO1B_IOMUX_SEL_H_GPIO1B7_SEL_MASK        (0xFU << BUS_IOC_GPIO1B_IOMUX_SEL_H_GPIO1B7_SEL_SHIFT)       /* 0x0000F000 */
/* GPIO1C_IOMUX_SEL_L */
#define BUS_IOC_GPIO1C_IOMUX_SEL_L_OFFSET                  (0x30U)
#define BUS_IOC_GPIO1C_IOMUX_SEL_L_GPIO1C0_SEL_SHIFT       (0U)
#define BUS_IOC_GPIO1C_IOMUX_SEL_L_GPIO1C0_SEL_MASK        (0xFU << BUS_IOC_GPIO1C_IOMUX_SEL_L_GPIO1C0_SEL_SHIFT)       /* 0x0000000F */
#define BUS_IOC_GPIO1C_IOMUX_SEL_L_GPIO1C1_SEL_SHIFT       (4U)
#define BUS_IOC_GPIO1C_IOMUX_SEL_L_GPIO1C1_SEL_MASK        (0xFU << BUS_IOC_GPIO1C_IOMUX_SEL_L_GPIO1C1_SEL_SHIFT)       /* 0x000000F0 */
#define BUS_IOC_GPIO1C_IOMUX_SEL_L_GPIO1C2_SEL_SHIFT       (8U)
#define BUS_IOC_GPIO1C_IOMUX_SEL_L_GPIO1C2_SEL_MASK        (0xFU << BUS_IOC_GPIO1C_IOMUX_SEL_L_GPIO1C2_SEL_SHIFT)       /* 0x00000F00 */
#define BUS_IOC_GPIO1C_IOMUX_SEL_L_GPIO1C3_SEL_SHIFT       (12U)
#define BUS_IOC_GPIO1C_IOMUX_SEL_L_GPIO1C3_SEL_MASK        (0xFU << BUS_IOC_GPIO1C_IOMUX_SEL_L_GPIO1C3_SEL_SHIFT)       /* 0x0000F000 */
/* GPIO1C_IOMUX_SEL_H */
#define BUS_IOC_GPIO1C_IOMUX_SEL_H_OFFSET                  (0x34U)
#define BUS_IOC_GPIO1C_IOMUX_SEL_H_GPIO1C4_SEL_SHIFT       (0U)
#define BUS_IOC_GPIO1C_IOMUX_SEL_H_GPIO1C4_SEL_MASK        (0xFU << BUS_IOC_GPIO1C_IOMUX_SEL_H_GPIO1C4_SEL_SHIFT)       /* 0x0000000F */
#define BUS_IOC_GPIO1C_IOMUX_SEL_H_GPIO1C5_SEL_SHIFT       (4U)
#define BUS_IOC_GPIO1C_IOMUX_SEL_H_GPIO1C5_SEL_MASK        (0xFU << BUS_IOC_GPIO1C_IOMUX_SEL_H_GPIO1C5_SEL_SHIFT)       /* 0x000000F0 */
#define BUS_IOC_GPIO1C_IOMUX_SEL_H_GPIO1C6_SEL_SHIFT       (8U)
#define BUS_IOC_GPIO1C_IOMUX_SEL_H_GPIO1C6_SEL_MASK        (0xFU << BUS_IOC_GPIO1C_IOMUX_SEL_H_GPIO1C6_SEL_SHIFT)       /* 0x00000F00 */
#define BUS_IOC_GPIO1C_IOMUX_SEL_H_GPIO1C7_SEL_SHIFT       (12U)
#define BUS_IOC_GPIO1C_IOMUX_SEL_H_GPIO1C7_SEL_MASK        (0xFU << BUS_IOC_GPIO1C_IOMUX_SEL_H_GPIO1C7_SEL_SHIFT)       /* 0x0000F000 */
/* GPIO1D_IOMUX_SEL_L */
#define BUS_IOC_GPIO1D_IOMUX_SEL_L_OFFSET                  (0x38U)
#define BUS_IOC_GPIO1D_IOMUX_SEL_L_GPIO1D0_SEL_SHIFT       (0U)
#define BUS_IOC_GPIO1D_IOMUX_SEL_L_GPIO1D0_SEL_MASK        (0xFU << BUS_IOC_GPIO1D_IOMUX_SEL_L_GPIO1D0_SEL_SHIFT)       /* 0x0000000F */
#define BUS_IOC_GPIO1D_IOMUX_SEL_L_GPIO1D1_SEL_SHIFT       (4U)
#define BUS_IOC_GPIO1D_IOMUX_SEL_L_GPIO1D1_SEL_MASK        (0xFU << BUS_IOC_GPIO1D_IOMUX_SEL_L_GPIO1D1_SEL_SHIFT)       /* 0x000000F0 */
#define BUS_IOC_GPIO1D_IOMUX_SEL_L_GPIO1D2_SEL_SHIFT       (8U)
#define BUS_IOC_GPIO1D_IOMUX_SEL_L_GPIO1D2_SEL_MASK        (0xFU << BUS_IOC_GPIO1D_IOMUX_SEL_L_GPIO1D2_SEL_SHIFT)       /* 0x00000F00 */
#define BUS_IOC_GPIO1D_IOMUX_SEL_L_GPIO1D3_SEL_SHIFT       (12U)
#define BUS_IOC_GPIO1D_IOMUX_SEL_L_GPIO1D3_SEL_MASK        (0xFU << BUS_IOC_GPIO1D_IOMUX_SEL_L_GPIO1D3_SEL_SHIFT)       /* 0x0000F000 */
/* GPIO1D_IOMUX_SEL_H */
#define BUS_IOC_GPIO1D_IOMUX_SEL_H_OFFSET                  (0x3CU)
#define BUS_IOC_GPIO1D_IOMUX_SEL_H_GPIO1D4_SEL_SHIFT       (0U)
#define BUS_IOC_GPIO1D_IOMUX_SEL_H_GPIO1D4_SEL_MASK        (0xFU << BUS_IOC_GPIO1D_IOMUX_SEL_H_GPIO1D4_SEL_SHIFT)       /* 0x0000000F */
#define BUS_IOC_GPIO1D_IOMUX_SEL_H_GPIO1D5_SEL_SHIFT       (4U)
#define BUS_IOC_GPIO1D_IOMUX_SEL_H_GPIO1D5_SEL_MASK        (0xFU << BUS_IOC_GPIO1D_IOMUX_SEL_H_GPIO1D5_SEL_SHIFT)       /* 0x000000F0 */
#define BUS_IOC_GPIO1D_IOMUX_SEL_H_GPIO1D6_SEL_SHIFT       (8U)
#define BUS_IOC_GPIO1D_IOMUX_SEL_H_GPIO1D6_SEL_MASK        (0xFU << BUS_IOC_GPIO1D_IOMUX_SEL_H_GPIO1D6_SEL_SHIFT)       /* 0x00000F00 */
#define BUS_IOC_GPIO1D_IOMUX_SEL_H_GPIO1D7_SEL_SHIFT       (12U)
#define BUS_IOC_GPIO1D_IOMUX_SEL_H_GPIO1D7_SEL_MASK        (0xFU << BUS_IOC_GPIO1D_IOMUX_SEL_H_GPIO1D7_SEL_SHIFT)       /* 0x0000F000 */
/* GPIO2A_IOMUX_SEL_L */
#define BUS_IOC_GPIO2A_IOMUX_SEL_L_OFFSET                  (0x40U)
#define BUS_IOC_GPIO2A_IOMUX_SEL_L_GPIO2A0_SEL_SHIFT       (0U)
#define BUS_IOC_GPIO2A_IOMUX_SEL_L_GPIO2A0_SEL_MASK        (0xFU << BUS_IOC_GPIO2A_IOMUX_SEL_L_GPIO2A0_SEL_SHIFT)       /* 0x0000000F */
#define BUS_IOC_GPIO2A_IOMUX_SEL_L_GPIO2A1_SEL_SHIFT       (4U)
#define BUS_IOC_GPIO2A_IOMUX_SEL_L_GPIO2A1_SEL_MASK        (0xFU << BUS_IOC_GPIO2A_IOMUX_SEL_L_GPIO2A1_SEL_SHIFT)       /* 0x000000F0 */
#define BUS_IOC_GPIO2A_IOMUX_SEL_L_GPIO2A2_SEL_SHIFT       (8U)
#define BUS_IOC_GPIO2A_IOMUX_SEL_L_GPIO2A2_SEL_MASK        (0xFU << BUS_IOC_GPIO2A_IOMUX_SEL_L_GPIO2A2_SEL_SHIFT)       /* 0x00000F00 */
#define BUS_IOC_GPIO2A_IOMUX_SEL_L_GPIO2A3_SEL_SHIFT       (12U)
#define BUS_IOC_GPIO2A_IOMUX_SEL_L_GPIO2A3_SEL_MASK        (0xFU << BUS_IOC_GPIO2A_IOMUX_SEL_L_GPIO2A3_SEL_SHIFT)       /* 0x0000F000 */
/* GPIO2A_IOMUX_SEL_H */
#define BUS_IOC_GPIO2A_IOMUX_SEL_H_OFFSET                  (0x44U)
#define BUS_IOC_GPIO2A_IOMUX_SEL_H_GPIO2A6_SEL_SHIFT       (8U)
#define BUS_IOC_GPIO2A_IOMUX_SEL_H_GPIO2A6_SEL_MASK        (0xFU << BUS_IOC_GPIO2A_IOMUX_SEL_H_GPIO2A6_SEL_SHIFT)       /* 0x00000F00 */
#define BUS_IOC_GPIO2A_IOMUX_SEL_H_GPIO2A7_SEL_SHIFT       (12U)
#define BUS_IOC_GPIO2A_IOMUX_SEL_H_GPIO2A7_SEL_MASK        (0xFU << BUS_IOC_GPIO2A_IOMUX_SEL_H_GPIO2A7_SEL_SHIFT)       /* 0x0000F000 */
/* GPIO2B_IOMUX_SEL_L */
#define BUS_IOC_GPIO2B_IOMUX_SEL_L_OFFSET                  (0x48U)
#define BUS_IOC_GPIO2B_IOMUX_SEL_L_GPIO2B0_SEL_SHIFT       (0U)
#define BUS_IOC_GPIO2B_IOMUX_SEL_L_GPIO2B0_SEL_MASK        (0xFU << BUS_IOC_GPIO2B_IOMUX_SEL_L_GPIO2B0_SEL_SHIFT)       /* 0x0000000F */
#define BUS_IOC_GPIO2B_IOMUX_SEL_L_GPIO2B1_SEL_SHIFT       (4U)
#define BUS_IOC_GPIO2B_IOMUX_SEL_L_GPIO2B1_SEL_MASK        (0xFU << BUS_IOC_GPIO2B_IOMUX_SEL_L_GPIO2B1_SEL_SHIFT)       /* 0x000000F0 */
#define BUS_IOC_GPIO2B_IOMUX_SEL_L_GPIO2B2_SEL_SHIFT       (8U)
#define BUS_IOC_GPIO2B_IOMUX_SEL_L_GPIO2B2_SEL_MASK        (0xFU << BUS_IOC_GPIO2B_IOMUX_SEL_L_GPIO2B2_SEL_SHIFT)       /* 0x00000F00 */
#define BUS_IOC_GPIO2B_IOMUX_SEL_L_GPIO2B3_SEL_SHIFT       (12U)
#define BUS_IOC_GPIO2B_IOMUX_SEL_L_GPIO2B3_SEL_MASK        (0xFU << BUS_IOC_GPIO2B_IOMUX_SEL_L_GPIO2B3_SEL_SHIFT)       /* 0x0000F000 */
/* GPIO2B_IOMUX_SEL_H */
#define BUS_IOC_GPIO2B_IOMUX_SEL_H_OFFSET                  (0x4CU)
#define BUS_IOC_GPIO2B_IOMUX_SEL_H_GPIO2B4_SEL_SHIFT       (0U)
#define BUS_IOC_GPIO2B_IOMUX_SEL_H_GPIO2B4_SEL_MASK        (0xFU << BUS_IOC_GPIO2B_IOMUX_SEL_H_GPIO2B4_SEL_SHIFT)       /* 0x0000000F */
#define BUS_IOC_GPIO2B_IOMUX_SEL_H_GPIO2B5_SEL_SHIFT       (4U)
#define BUS_IOC_GPIO2B_IOMUX_SEL_H_GPIO2B5_SEL_MASK        (0xFU << BUS_IOC_GPIO2B_IOMUX_SEL_H_GPIO2B5_SEL_SHIFT)       /* 0x000000F0 */
#define BUS_IOC_GPIO2B_IOMUX_SEL_H_GPIO2B6_SEL_SHIFT       (8U)
#define BUS_IOC_GPIO2B_IOMUX_SEL_H_GPIO2B6_SEL_MASK        (0xFU << BUS_IOC_GPIO2B_IOMUX_SEL_H_GPIO2B6_SEL_SHIFT)       /* 0x00000F00 */
#define BUS_IOC_GPIO2B_IOMUX_SEL_H_GPIO2B7_SEL_SHIFT       (12U)
#define BUS_IOC_GPIO2B_IOMUX_SEL_H_GPIO2B7_SEL_MASK        (0xFU << BUS_IOC_GPIO2B_IOMUX_SEL_H_GPIO2B7_SEL_SHIFT)       /* 0x0000F000 */
/* GPIO2C_IOMUX_SEL_L */
#define BUS_IOC_GPIO2C_IOMUX_SEL_L_OFFSET                  (0x50U)
#define BUS_IOC_GPIO2C_IOMUX_SEL_L_GPIO2C0_SEL_SHIFT       (0U)
#define BUS_IOC_GPIO2C_IOMUX_SEL_L_GPIO2C0_SEL_MASK        (0xFU << BUS_IOC_GPIO2C_IOMUX_SEL_L_GPIO2C0_SEL_SHIFT)       /* 0x0000000F */
#define BUS_IOC_GPIO2C_IOMUX_SEL_L_GPIO2C1_SEL_SHIFT       (4U)
#define BUS_IOC_GPIO2C_IOMUX_SEL_L_GPIO2C1_SEL_MASK        (0xFU << BUS_IOC_GPIO2C_IOMUX_SEL_L_GPIO2C1_SEL_SHIFT)       /* 0x000000F0 */
#define BUS_IOC_GPIO2C_IOMUX_SEL_L_GPIO2C2_SEL_SHIFT       (8U)
#define BUS_IOC_GPIO2C_IOMUX_SEL_L_GPIO2C2_SEL_MASK        (0xFU << BUS_IOC_GPIO2C_IOMUX_SEL_L_GPIO2C2_SEL_SHIFT)       /* 0x00000F00 */
#define BUS_IOC_GPIO2C_IOMUX_SEL_L_GPIO2C3_SEL_SHIFT       (12U)
#define BUS_IOC_GPIO2C_IOMUX_SEL_L_GPIO2C3_SEL_MASK        (0xFU << BUS_IOC_GPIO2C_IOMUX_SEL_L_GPIO2C3_SEL_SHIFT)       /* 0x0000F000 */
/* GPIO2C_IOMUX_SEL_H */
#define BUS_IOC_GPIO2C_IOMUX_SEL_H_OFFSET                  (0x54U)
#define BUS_IOC_GPIO2C_IOMUX_SEL_H_GPIO2C4_SEL_SHIFT       (0U)
#define BUS_IOC_GPIO2C_IOMUX_SEL_H_GPIO2C4_SEL_MASK        (0xFU << BUS_IOC_GPIO2C_IOMUX_SEL_H_GPIO2C4_SEL_SHIFT)       /* 0x0000000F */
#define BUS_IOC_GPIO2C_IOMUX_SEL_H_GPIO2C5_SEL_SHIFT       (4U)
#define BUS_IOC_GPIO2C_IOMUX_SEL_H_GPIO2C5_SEL_MASK        (0xFU << BUS_IOC_GPIO2C_IOMUX_SEL_H_GPIO2C5_SEL_SHIFT)       /* 0x000000F0 */
/* GPIO2D_IOMUX_SEL_L */
#define BUS_IOC_GPIO2D_IOMUX_SEL_L_OFFSET                  (0x58U)
#define BUS_IOC_GPIO2D_IOMUX_SEL_L_GPIO2D0_SEL_SHIFT       (0U)
#define BUS_IOC_GPIO2D_IOMUX_SEL_L_GPIO2D0_SEL_MASK        (0xFU << BUS_IOC_GPIO2D_IOMUX_SEL_L_GPIO2D0_SEL_SHIFT)       /* 0x0000000F */
#define BUS_IOC_GPIO2D_IOMUX_SEL_L_GPIO2D1_SEL_SHIFT       (4U)
#define BUS_IOC_GPIO2D_IOMUX_SEL_L_GPIO2D1_SEL_MASK        (0xFU << BUS_IOC_GPIO2D_IOMUX_SEL_L_GPIO2D1_SEL_SHIFT)       /* 0x000000F0 */
#define BUS_IOC_GPIO2D_IOMUX_SEL_L_GPIO2D2_SEL_SHIFT       (8U)
#define BUS_IOC_GPIO2D_IOMUX_SEL_L_GPIO2D2_SEL_MASK        (0xFU << BUS_IOC_GPIO2D_IOMUX_SEL_L_GPIO2D2_SEL_SHIFT)       /* 0x00000F00 */
#define BUS_IOC_GPIO2D_IOMUX_SEL_L_GPIO2D3_SEL_SHIFT       (12U)
#define BUS_IOC_GPIO2D_IOMUX_SEL_L_GPIO2D3_SEL_MASK        (0xFU << BUS_IOC_GPIO2D_IOMUX_SEL_L_GPIO2D3_SEL_SHIFT)       /* 0x0000F000 */
/* GPIO2D_IOMUX_SEL_H */
#define BUS_IOC_GPIO2D_IOMUX_SEL_H_OFFSET                  (0x5CU)
#define BUS_IOC_GPIO2D_IOMUX_SEL_H_GPIO2D4_SEL_SHIFT       (0U)
#define BUS_IOC_GPIO2D_IOMUX_SEL_H_GPIO2D4_SEL_MASK        (0xFU << BUS_IOC_GPIO2D_IOMUX_SEL_H_GPIO2D4_SEL_SHIFT)       /* 0x0000000F */
#define BUS_IOC_GPIO2D_IOMUX_SEL_H_GPIO2D5_SEL_SHIFT       (4U)
#define BUS_IOC_GPIO2D_IOMUX_SEL_H_GPIO2D5_SEL_MASK        (0xFU << BUS_IOC_GPIO2D_IOMUX_SEL_H_GPIO2D5_SEL_SHIFT)       /* 0x000000F0 */
#define BUS_IOC_GPIO2D_IOMUX_SEL_H_GPIO2D6_SEL_SHIFT       (8U)
#define BUS_IOC_GPIO2D_IOMUX_SEL_H_GPIO2D6_SEL_MASK        (0xFU << BUS_IOC_GPIO2D_IOMUX_SEL_H_GPIO2D6_SEL_SHIFT)       /* 0x00000F00 */
#define BUS_IOC_GPIO2D_IOMUX_SEL_H_GPIO2D7_SEL_SHIFT       (12U)
#define BUS_IOC_GPIO2D_IOMUX_SEL_H_GPIO2D7_SEL_MASK        (0xFU << BUS_IOC_GPIO2D_IOMUX_SEL_H_GPIO2D7_SEL_SHIFT)       /* 0x0000F000 */
/* GPIO3A_IOMUX_SEL_L */
#define BUS_IOC_GPIO3A_IOMUX_SEL_L_OFFSET                  (0x60U)
#define BUS_IOC_GPIO3A_IOMUX_SEL_L_GPIO3A0_SEL_SHIFT       (0U)
#define BUS_IOC_GPIO3A_IOMUX_SEL_L_GPIO3A0_SEL_MASK        (0xFU << BUS_IOC_GPIO3A_IOMUX_SEL_L_GPIO3A0_SEL_SHIFT)       /* 0x0000000F */
#define BUS_IOC_GPIO3A_IOMUX_SEL_L_GPIO3A1_SEL_SHIFT       (4U)
#define BUS_IOC_GPIO3A_IOMUX_SEL_L_GPIO3A1_SEL_MASK        (0xFU << BUS_IOC_GPIO3A_IOMUX_SEL_L_GPIO3A1_SEL_SHIFT)       /* 0x000000F0 */
#define BUS_IOC_GPIO3A_IOMUX_SEL_L_GPIO3A2_SEL_SHIFT       (8U)
#define BUS_IOC_GPIO3A_IOMUX_SEL_L_GPIO3A2_SEL_MASK        (0xFU << BUS_IOC_GPIO3A_IOMUX_SEL_L_GPIO3A2_SEL_SHIFT)       /* 0x00000F00 */
#define BUS_IOC_GPIO3A_IOMUX_SEL_L_GPIO3A3_SEL_SHIFT       (12U)
#define BUS_IOC_GPIO3A_IOMUX_SEL_L_GPIO3A3_SEL_MASK        (0xFU << BUS_IOC_GPIO3A_IOMUX_SEL_L_GPIO3A3_SEL_SHIFT)       /* 0x0000F000 */
/* GPIO3A_IOMUX_SEL_H */
#define BUS_IOC_GPIO3A_IOMUX_SEL_H_OFFSET                  (0x64U)
#define BUS_IOC_GPIO3A_IOMUX_SEL_H_GPIO3A4_SEL_SHIFT       (0U)
#define BUS_IOC_GPIO3A_IOMUX_SEL_H_GPIO3A4_SEL_MASK        (0xFU << BUS_IOC_GPIO3A_IOMUX_SEL_H_GPIO3A4_SEL_SHIFT)       /* 0x0000000F */
#define BUS_IOC_GPIO3A_IOMUX_SEL_H_GPIO3A5_SEL_SHIFT       (4U)
#define BUS_IOC_GPIO3A_IOMUX_SEL_H_GPIO3A5_SEL_MASK        (0xFU << BUS_IOC_GPIO3A_IOMUX_SEL_H_GPIO3A5_SEL_SHIFT)       /* 0x000000F0 */
#define BUS_IOC_GPIO3A_IOMUX_SEL_H_GPIO3A6_SEL_SHIFT       (8U)
#define BUS_IOC_GPIO3A_IOMUX_SEL_H_GPIO3A6_SEL_MASK        (0xFU << BUS_IOC_GPIO3A_IOMUX_SEL_H_GPIO3A6_SEL_SHIFT)       /* 0x00000F00 */
#define BUS_IOC_GPIO3A_IOMUX_SEL_H_GPIO3A7_SEL_SHIFT       (12U)
#define BUS_IOC_GPIO3A_IOMUX_SEL_H_GPIO3A7_SEL_MASK        (0xFU << BUS_IOC_GPIO3A_IOMUX_SEL_H_GPIO3A7_SEL_SHIFT)       /* 0x0000F000 */
/* GPIO3B_IOMUX_SEL_L */
#define BUS_IOC_GPIO3B_IOMUX_SEL_L_OFFSET                  (0x68U)
#define BUS_IOC_GPIO3B_IOMUX_SEL_L_GPIO3B0_SEL_SHIFT       (0U)
#define BUS_IOC_GPIO3B_IOMUX_SEL_L_GPIO3B0_SEL_MASK        (0xFU << BUS_IOC_GPIO3B_IOMUX_SEL_L_GPIO3B0_SEL_SHIFT)       /* 0x0000000F */
#define BUS_IOC_GPIO3B_IOMUX_SEL_L_GPIO3B1_SEL_SHIFT       (4U)
#define BUS_IOC_GPIO3B_IOMUX_SEL_L_GPIO3B1_SEL_MASK        (0xFU << BUS_IOC_GPIO3B_IOMUX_SEL_L_GPIO3B1_SEL_SHIFT)       /* 0x000000F0 */
#define BUS_IOC_GPIO3B_IOMUX_SEL_L_GPIO3B2_SEL_SHIFT       (8U)
#define BUS_IOC_GPIO3B_IOMUX_SEL_L_GPIO3B2_SEL_MASK        (0xFU << BUS_IOC_GPIO3B_IOMUX_SEL_L_GPIO3B2_SEL_SHIFT)       /* 0x00000F00 */
#define BUS_IOC_GPIO3B_IOMUX_SEL_L_GPIO3B3_SEL_SHIFT       (12U)
#define BUS_IOC_GPIO3B_IOMUX_SEL_L_GPIO3B3_SEL_MASK        (0xFU << BUS_IOC_GPIO3B_IOMUX_SEL_L_GPIO3B3_SEL_SHIFT)       /* 0x0000F000 */
/* GPIO3B_IOMUX_SEL_H */
#define BUS_IOC_GPIO3B_IOMUX_SEL_H_OFFSET                  (0x6CU)
#define BUS_IOC_GPIO3B_IOMUX_SEL_H_GPIO3B4_SEL_SHIFT       (0U)
#define BUS_IOC_GPIO3B_IOMUX_SEL_H_GPIO3B4_SEL_MASK        (0xFU << BUS_IOC_GPIO3B_IOMUX_SEL_H_GPIO3B4_SEL_SHIFT)       /* 0x0000000F */
#define BUS_IOC_GPIO3B_IOMUX_SEL_H_GPIO3B5_SEL_SHIFT       (4U)
#define BUS_IOC_GPIO3B_IOMUX_SEL_H_GPIO3B5_SEL_MASK        (0xFU << BUS_IOC_GPIO3B_IOMUX_SEL_H_GPIO3B5_SEL_SHIFT)       /* 0x000000F0 */
#define BUS_IOC_GPIO3B_IOMUX_SEL_H_GPIO3B6_SEL_SHIFT       (8U)
#define BUS_IOC_GPIO3B_IOMUX_SEL_H_GPIO3B6_SEL_MASK        (0xFU << BUS_IOC_GPIO3B_IOMUX_SEL_H_GPIO3B6_SEL_SHIFT)       /* 0x00000F00 */
#define BUS_IOC_GPIO3B_IOMUX_SEL_H_GPIO3B7_SEL_SHIFT       (12U)
#define BUS_IOC_GPIO3B_IOMUX_SEL_H_GPIO3B7_SEL_MASK        (0xFU << BUS_IOC_GPIO3B_IOMUX_SEL_H_GPIO3B7_SEL_SHIFT)       /* 0x0000F000 */
/* GPIO3C_IOMUX_SEL_L */
#define BUS_IOC_GPIO3C_IOMUX_SEL_L_OFFSET                  (0x70U)
#define BUS_IOC_GPIO3C_IOMUX_SEL_L_GPIO3C0_SEL_SHIFT       (0U)
#define BUS_IOC_GPIO3C_IOMUX_SEL_L_GPIO3C0_SEL_MASK        (0xFU << BUS_IOC_GPIO3C_IOMUX_SEL_L_GPIO3C0_SEL_SHIFT)       /* 0x0000000F */
#define BUS_IOC_GPIO3C_IOMUX_SEL_L_GPIO3C1_SEL_SHIFT       (4U)
#define BUS_IOC_GPIO3C_IOMUX_SEL_L_GPIO3C1_SEL_MASK        (0xFU << BUS_IOC_GPIO3C_IOMUX_SEL_L_GPIO3C1_SEL_SHIFT)       /* 0x000000F0 */
#define BUS_IOC_GPIO3C_IOMUX_SEL_L_GPIO3C2_SEL_SHIFT       (8U)
#define BUS_IOC_GPIO3C_IOMUX_SEL_L_GPIO3C2_SEL_MASK        (0xFU << BUS_IOC_GPIO3C_IOMUX_SEL_L_GPIO3C2_SEL_SHIFT)       /* 0x00000F00 */
#define BUS_IOC_GPIO3C_IOMUX_SEL_L_GPIO3C3_SEL_SHIFT       (12U)
#define BUS_IOC_GPIO3C_IOMUX_SEL_L_GPIO3C3_SEL_MASK        (0xFU << BUS_IOC_GPIO3C_IOMUX_SEL_L_GPIO3C3_SEL_SHIFT)       /* 0x0000F000 */
/* GPIO3C_IOMUX_SEL_H */
#define BUS_IOC_GPIO3C_IOMUX_SEL_H_OFFSET                  (0x74U)
#define BUS_IOC_GPIO3C_IOMUX_SEL_H_GPIO3C4_SEL_SHIFT       (0U)
#define BUS_IOC_GPIO3C_IOMUX_SEL_H_GPIO3C4_SEL_MASK        (0xFU << BUS_IOC_GPIO3C_IOMUX_SEL_H_GPIO3C4_SEL_SHIFT)       /* 0x0000000F */
#define BUS_IOC_GPIO3C_IOMUX_SEL_H_GPIO3C5_SEL_SHIFT       (4U)
#define BUS_IOC_GPIO3C_IOMUX_SEL_H_GPIO3C5_SEL_MASK        (0xFU << BUS_IOC_GPIO3C_IOMUX_SEL_H_GPIO3C5_SEL_SHIFT)       /* 0x000000F0 */
#define BUS_IOC_GPIO3C_IOMUX_SEL_H_GPIO3C6_SEL_SHIFT       (8U)
#define BUS_IOC_GPIO3C_IOMUX_SEL_H_GPIO3C6_SEL_MASK        (0xFU << BUS_IOC_GPIO3C_IOMUX_SEL_H_GPIO3C6_SEL_SHIFT)       /* 0x00000F00 */
#define BUS_IOC_GPIO3C_IOMUX_SEL_H_GPIO3C7_SEL_SHIFT       (12U)
#define BUS_IOC_GPIO3C_IOMUX_SEL_H_GPIO3C7_SEL_MASK        (0xFU << BUS_IOC_GPIO3C_IOMUX_SEL_H_GPIO3C7_SEL_SHIFT)       /* 0x0000F000 */
/* GPIO3D_IOMUX_SEL_L */
#define BUS_IOC_GPIO3D_IOMUX_SEL_L_OFFSET                  (0x78U)
#define BUS_IOC_GPIO3D_IOMUX_SEL_L_GPIO3D0_SEL_SHIFT       (0U)
#define BUS_IOC_GPIO3D_IOMUX_SEL_L_GPIO3D0_SEL_MASK        (0xFU << BUS_IOC_GPIO3D_IOMUX_SEL_L_GPIO3D0_SEL_SHIFT)       /* 0x0000000F */
#define BUS_IOC_GPIO3D_IOMUX_SEL_L_GPIO3D1_SEL_SHIFT       (4U)
#define BUS_IOC_GPIO3D_IOMUX_SEL_L_GPIO3D1_SEL_MASK        (0xFU << BUS_IOC_GPIO3D_IOMUX_SEL_L_GPIO3D1_SEL_SHIFT)       /* 0x000000F0 */
#define BUS_IOC_GPIO3D_IOMUX_SEL_L_GPIO3D2_SEL_SHIFT       (8U)
#define BUS_IOC_GPIO3D_IOMUX_SEL_L_GPIO3D2_SEL_MASK        (0xFU << BUS_IOC_GPIO3D_IOMUX_SEL_L_GPIO3D2_SEL_SHIFT)       /* 0x00000F00 */
#define BUS_IOC_GPIO3D_IOMUX_SEL_L_GPIO3D3_SEL_SHIFT       (12U)
#define BUS_IOC_GPIO3D_IOMUX_SEL_L_GPIO3D3_SEL_MASK        (0xFU << BUS_IOC_GPIO3D_IOMUX_SEL_L_GPIO3D3_SEL_SHIFT)       /* 0x0000F000 */
/* GPIO3D_IOMUX_SEL_H */
#define BUS_IOC_GPIO3D_IOMUX_SEL_H_OFFSET                  (0x7CU)
#define BUS_IOC_GPIO3D_IOMUX_SEL_H_GPIO3D4_SEL_SHIFT       (0U)
#define BUS_IOC_GPIO3D_IOMUX_SEL_H_GPIO3D4_SEL_MASK        (0xFU << BUS_IOC_GPIO3D_IOMUX_SEL_H_GPIO3D4_SEL_SHIFT)       /* 0x0000000F */
#define BUS_IOC_GPIO3D_IOMUX_SEL_H_GPIO3D5_SEL_SHIFT       (4U)
#define BUS_IOC_GPIO3D_IOMUX_SEL_H_GPIO3D5_SEL_MASK        (0xFU << BUS_IOC_GPIO3D_IOMUX_SEL_H_GPIO3D5_SEL_SHIFT)       /* 0x000000F0 */
/* GPIO4A_IOMUX_SEL_L */
#define BUS_IOC_GPIO4A_IOMUX_SEL_L_OFFSET                  (0x80U)
#define BUS_IOC_GPIO4A_IOMUX_SEL_L_GPIO4A0_SEL_SHIFT       (0U)
#define BUS_IOC_GPIO4A_IOMUX_SEL_L_GPIO4A0_SEL_MASK        (0xFU << BUS_IOC_GPIO4A_IOMUX_SEL_L_GPIO4A0_SEL_SHIFT)       /* 0x0000000F */
#define BUS_IOC_GPIO4A_IOMUX_SEL_L_GPIO4A1_SEL_SHIFT       (4U)
#define BUS_IOC_GPIO4A_IOMUX_SEL_L_GPIO4A1_SEL_MASK        (0xFU << BUS_IOC_GPIO4A_IOMUX_SEL_L_GPIO4A1_SEL_SHIFT)       /* 0x000000F0 */
#define BUS_IOC_GPIO4A_IOMUX_SEL_L_GPIO4A2_SEL_SHIFT       (8U)
#define BUS_IOC_GPIO4A_IOMUX_SEL_L_GPIO4A2_SEL_MASK        (0xFU << BUS_IOC_GPIO4A_IOMUX_SEL_L_GPIO4A2_SEL_SHIFT)       /* 0x00000F00 */
#define BUS_IOC_GPIO4A_IOMUX_SEL_L_GPIO4A3_SEL_SHIFT       (12U)
#define BUS_IOC_GPIO4A_IOMUX_SEL_L_GPIO4A3_SEL_MASK        (0xFU << BUS_IOC_GPIO4A_IOMUX_SEL_L_GPIO4A3_SEL_SHIFT)       /* 0x0000F000 */
/* GPIO4A_IOMUX_SEL_H */
#define BUS_IOC_GPIO4A_IOMUX_SEL_H_OFFSET                  (0x84U)
#define BUS_IOC_GPIO4A_IOMUX_SEL_H_GPIO4A4_SEL_SHIFT       (0U)
#define BUS_IOC_GPIO4A_IOMUX_SEL_H_GPIO4A4_SEL_MASK        (0xFU << BUS_IOC_GPIO4A_IOMUX_SEL_H_GPIO4A4_SEL_SHIFT)       /* 0x0000000F */
#define BUS_IOC_GPIO4A_IOMUX_SEL_H_GPIO4A5_SEL_SHIFT       (4U)
#define BUS_IOC_GPIO4A_IOMUX_SEL_H_GPIO4A5_SEL_MASK        (0xFU << BUS_IOC_GPIO4A_IOMUX_SEL_H_GPIO4A5_SEL_SHIFT)       /* 0x000000F0 */
#define BUS_IOC_GPIO4A_IOMUX_SEL_H_GPIO4A6_SEL_SHIFT       (8U)
#define BUS_IOC_GPIO4A_IOMUX_SEL_H_GPIO4A6_SEL_MASK        (0xFU << BUS_IOC_GPIO4A_IOMUX_SEL_H_GPIO4A6_SEL_SHIFT)       /* 0x00000F00 */
#define BUS_IOC_GPIO4A_IOMUX_SEL_H_GPIO4A7_SEL_SHIFT       (12U)
#define BUS_IOC_GPIO4A_IOMUX_SEL_H_GPIO4A7_SEL_MASK        (0xFU << BUS_IOC_GPIO4A_IOMUX_SEL_H_GPIO4A7_SEL_SHIFT)       /* 0x0000F000 */
/* GPIO4B_IOMUX_SEL_L */
#define BUS_IOC_GPIO4B_IOMUX_SEL_L_OFFSET                  (0x88U)
#define BUS_IOC_GPIO4B_IOMUX_SEL_L_GPIO4B0_SEL_SHIFT       (0U)
#define BUS_IOC_GPIO4B_IOMUX_SEL_L_GPIO4B0_SEL_MASK        (0xFU << BUS_IOC_GPIO4B_IOMUX_SEL_L_GPIO4B0_SEL_SHIFT)       /* 0x0000000F */
#define BUS_IOC_GPIO4B_IOMUX_SEL_L_GPIO4B1_SEL_SHIFT       (4U)
#define BUS_IOC_GPIO4B_IOMUX_SEL_L_GPIO4B1_SEL_MASK        (0xFU << BUS_IOC_GPIO4B_IOMUX_SEL_L_GPIO4B1_SEL_SHIFT)       /* 0x000000F0 */
#define BUS_IOC_GPIO4B_IOMUX_SEL_L_GPIO4B2_SEL_SHIFT       (8U)
#define BUS_IOC_GPIO4B_IOMUX_SEL_L_GPIO4B2_SEL_MASK        (0xFU << BUS_IOC_GPIO4B_IOMUX_SEL_L_GPIO4B2_SEL_SHIFT)       /* 0x00000F00 */
#define BUS_IOC_GPIO4B_IOMUX_SEL_L_GPIO4B3_SEL_SHIFT       (12U)
#define BUS_IOC_GPIO4B_IOMUX_SEL_L_GPIO4B3_SEL_MASK        (0xFU << BUS_IOC_GPIO4B_IOMUX_SEL_L_GPIO4B3_SEL_SHIFT)       /* 0x0000F000 */
/* GPIO4B_IOMUX_SEL_H */
#define BUS_IOC_GPIO4B_IOMUX_SEL_H_OFFSET                  (0x8CU)
#define BUS_IOC_GPIO4B_IOMUX_SEL_H_GPIO4B4_SEL_SHIFT       (0U)
#define BUS_IOC_GPIO4B_IOMUX_SEL_H_GPIO4B4_SEL_MASK        (0xFU << BUS_IOC_GPIO4B_IOMUX_SEL_H_GPIO4B4_SEL_SHIFT)       /* 0x0000000F */
#define BUS_IOC_GPIO4B_IOMUX_SEL_H_GPIO4B5_SEL_SHIFT       (4U)
#define BUS_IOC_GPIO4B_IOMUX_SEL_H_GPIO4B5_SEL_MASK        (0xFU << BUS_IOC_GPIO4B_IOMUX_SEL_H_GPIO4B5_SEL_SHIFT)       /* 0x000000F0 */
#define BUS_IOC_GPIO4B_IOMUX_SEL_H_GPIO4B6_SEL_SHIFT       (8U)
#define BUS_IOC_GPIO4B_IOMUX_SEL_H_GPIO4B6_SEL_MASK        (0xFU << BUS_IOC_GPIO4B_IOMUX_SEL_H_GPIO4B6_SEL_SHIFT)       /* 0x00000F00 */
#define BUS_IOC_GPIO4B_IOMUX_SEL_H_GPIO4B7_SEL_SHIFT       (12U)
#define BUS_IOC_GPIO4B_IOMUX_SEL_H_GPIO4B7_SEL_MASK        (0xFU << BUS_IOC_GPIO4B_IOMUX_SEL_H_GPIO4B7_SEL_SHIFT)       /* 0x0000F000 */
/* GPIO4C_IOMUX_SEL_L */
#define BUS_IOC_GPIO4C_IOMUX_SEL_L_OFFSET                  (0x90U)
#define BUS_IOC_GPIO4C_IOMUX_SEL_L_GPIO4C0_SEL_SHIFT       (0U)
#define BUS_IOC_GPIO4C_IOMUX_SEL_L_GPIO4C0_SEL_MASK        (0xFU << BUS_IOC_GPIO4C_IOMUX_SEL_L_GPIO4C0_SEL_SHIFT)       /* 0x0000000F */
#define BUS_IOC_GPIO4C_IOMUX_SEL_L_GPIO4C1_SEL_SHIFT       (4U)
#define BUS_IOC_GPIO4C_IOMUX_SEL_L_GPIO4C1_SEL_MASK        (0xFU << BUS_IOC_GPIO4C_IOMUX_SEL_L_GPIO4C1_SEL_SHIFT)       /* 0x000000F0 */
#define BUS_IOC_GPIO4C_IOMUX_SEL_L_GPIO4C2_SEL_SHIFT       (8U)
#define BUS_IOC_GPIO4C_IOMUX_SEL_L_GPIO4C2_SEL_MASK        (0xFU << BUS_IOC_GPIO4C_IOMUX_SEL_L_GPIO4C2_SEL_SHIFT)       /* 0x00000F00 */
#define BUS_IOC_GPIO4C_IOMUX_SEL_L_GPIO4C3_SEL_SHIFT       (12U)
#define BUS_IOC_GPIO4C_IOMUX_SEL_L_GPIO4C3_SEL_MASK        (0xFU << BUS_IOC_GPIO4C_IOMUX_SEL_L_GPIO4C3_SEL_SHIFT)       /* 0x0000F000 */
/* GPIO4C_IOMUX_SEL_H */
#define BUS_IOC_GPIO4C_IOMUX_SEL_H_OFFSET                  (0x94U)
#define BUS_IOC_GPIO4C_IOMUX_SEL_H_GPIO4C4_SEL_SHIFT       (0U)
#define BUS_IOC_GPIO4C_IOMUX_SEL_H_GPIO4C4_SEL_MASK        (0xFU << BUS_IOC_GPIO4C_IOMUX_SEL_H_GPIO4C4_SEL_SHIFT)       /* 0x0000000F */
#define BUS_IOC_GPIO4C_IOMUX_SEL_H_GPIO4C5_SEL_SHIFT       (4U)
#define BUS_IOC_GPIO4C_IOMUX_SEL_H_GPIO4C5_SEL_MASK        (0xFU << BUS_IOC_GPIO4C_IOMUX_SEL_H_GPIO4C5_SEL_SHIFT)       /* 0x000000F0 */
#define BUS_IOC_GPIO4C_IOMUX_SEL_H_GPIO4C6_SEL_SHIFT       (8U)
#define BUS_IOC_GPIO4C_IOMUX_SEL_H_GPIO4C6_SEL_MASK        (0xFU << BUS_IOC_GPIO4C_IOMUX_SEL_H_GPIO4C6_SEL_SHIFT)       /* 0x00000F00 */
/* GPIO4D_IOMUX_SEL_L */
#define BUS_IOC_GPIO4D_IOMUX_SEL_L_OFFSET                  (0x98U)
#define BUS_IOC_GPIO4D_IOMUX_SEL_L_GPIO4D0_SEL_SHIFT       (0U)
#define BUS_IOC_GPIO4D_IOMUX_SEL_L_GPIO4D0_SEL_MASK        (0xFU << BUS_IOC_GPIO4D_IOMUX_SEL_L_GPIO4D0_SEL_SHIFT)       /* 0x0000000F */
#define BUS_IOC_GPIO4D_IOMUX_SEL_L_GPIO4D1_SEL_SHIFT       (4U)
#define BUS_IOC_GPIO4D_IOMUX_SEL_L_GPIO4D1_SEL_MASK        (0xFU << BUS_IOC_GPIO4D_IOMUX_SEL_L_GPIO4D1_SEL_SHIFT)       /* 0x000000F0 */
#define BUS_IOC_GPIO4D_IOMUX_SEL_L_GPIO4D2_SEL_SHIFT       (8U)
#define BUS_IOC_GPIO4D_IOMUX_SEL_L_GPIO4D2_SEL_MASK        (0xFU << BUS_IOC_GPIO4D_IOMUX_SEL_L_GPIO4D2_SEL_SHIFT)       /* 0x00000F00 */
#define BUS_IOC_GPIO4D_IOMUX_SEL_L_GPIO4D3_SEL_SHIFT       (12U)
#define BUS_IOC_GPIO4D_IOMUX_SEL_L_GPIO4D3_SEL_MASK        (0xFU << BUS_IOC_GPIO4D_IOMUX_SEL_L_GPIO4D3_SEL_SHIFT)       /* 0x0000F000 */
/* GPIO4D_IOMUX_SEL_H */
#define BUS_IOC_GPIO4D_IOMUX_SEL_H_OFFSET                  (0x9CU)
#define BUS_IOC_GPIO4D_IOMUX_SEL_H_GPIO4D4_SEL_SHIFT       (0U)
#define BUS_IOC_GPIO4D_IOMUX_SEL_H_GPIO4D4_SEL_MASK        (0xFU << BUS_IOC_GPIO4D_IOMUX_SEL_H_GPIO4D4_SEL_SHIFT)       /* 0x0000000F */
#define BUS_IOC_GPIO4D_IOMUX_SEL_H_GPIO4D5_SEL_SHIFT       (4U)
#define BUS_IOC_GPIO4D_IOMUX_SEL_H_GPIO4D5_SEL_MASK        (0xFU << BUS_IOC_GPIO4D_IOMUX_SEL_H_GPIO4D5_SEL_SHIFT)       /* 0x000000F0 */
/******************************************UART******************************************/
/* RBR */
#define UART_RBR_OFFSET                                    (0x0U)
#define UART_RBR                                           (0x0U)
#define UART_RBR_DATA_INPUT_SHIFT                          (0U)
#define UART_RBR_DATA_INPUT_MASK                           (0xFFU << UART_RBR_DATA_INPUT_SHIFT)                         /* 0x000000FF */
/* DLL */
#define UART_DLL_OFFSET                                    (0x0U)
#define UART_DLL_BAUD_RATE_DIVISOR_L_SHIFT                 (0U)
#define UART_DLL_BAUD_RATE_DIVISOR_L_MASK                  (0xFFU << UART_DLL_BAUD_RATE_DIVISOR_L_SHIFT)                /* 0x000000FF */
/* THR */
#define UART_THR_OFFSET                                    (0x0U)
#define UART_THR_DATA_OUTPUT_SHIFT                         (0U)
#define UART_THR_DATA_OUTPUT_MASK                          (0xFFU << UART_THR_DATA_OUTPUT_SHIFT)                        /* 0x000000FF */
/* DLH */
#define UART_DLH_OFFSET                                    (0x4U)
#define UART_DLH_BAUD_RATE_DIVISOR_H_SHIFT                 (0U)
#define UART_DLH_BAUD_RATE_DIVISOR_H_MASK                  (0xFFU << UART_DLH_BAUD_RATE_DIVISOR_H_SHIFT)                /* 0x000000FF */
/* IER */
#define UART_IER_OFFSET                                    (0x4U)
#define UART_IER_RECEIVE_DATA_AVAILABLE_INT_EN_SHIFT       (0U)
#define UART_IER_RECEIVE_DATA_AVAILABLE_INT_EN_MASK        (0x1U << UART_IER_RECEIVE_DATA_AVAILABLE_INT_EN_SHIFT)       /* 0x00000001 */
#define UART_IER_TRANS_HOLD_EMPTY_INT_EN_SHIFT             (1U)
#define UART_IER_TRANS_HOLD_EMPTY_INT_EN_MASK              (0x1U << UART_IER_TRANS_HOLD_EMPTY_INT_EN_SHIFT)             /* 0x00000002 */
#define UART_IER_RECEIVE_LINE_STATUS_INT_EN_SHIFT          (2U)
#define UART_IER_RECEIVE_LINE_STATUS_INT_EN_MASK           (0x1U << UART_IER_RECEIVE_LINE_STATUS_INT_EN_SHIFT)          /* 0x00000004 */
#define UART_IER_MODEM_STATUS_INT_EN_SHIFT                 (3U)
#define UART_IER_MODEM_STATUS_INT_EN_MASK                  (0x1U << UART_IER_MODEM_STATUS_INT_EN_SHIFT)                 /* 0x00000008 */
#define UART_IER_PROG_THRE_INT_EN_SHIFT                    (7U)
#define UART_IER_PROG_THRE_INT_EN_MASK                     (0x1U << UART_IER_PROG_THRE_INT_EN_SHIFT)                    /* 0x00000080 */
/* FCR */
#define UART_FCR_OFFSET                                    (0x8U)
#define UART_FCR_FIFO_EN_SHIFT                             (0U)
#define UART_FCR_FIFO_EN_MASK                              (0x1U << UART_FCR_FIFO_EN_SHIFT)                             /* 0x00000001 */
#define UART_FCR_RCVR_FIFO_RESET_SHIFT                     (1U)
#define UART_FCR_RCVR_FIFO_RESET_MASK                      (0x1U << UART_FCR_RCVR_FIFO_RESET_SHIFT)                     /* 0x00000002 */
#define UART_FCR_XMIT_FIFO_RESET_SHIFT                     (2U)
#define UART_FCR_XMIT_FIFO_RESET_MASK                      (0x1U << UART_FCR_XMIT_FIFO_RESET_SHIFT)                     /* 0x00000004 */
#define UART_FCR_DMA_MODE_SHIFT                            (3U)
#define UART_FCR_DMA_MODE_MASK                             (0x1U << UART_FCR_DMA_MODE_SHIFT)                            /* 0x00000008 */
#define UART_FCR_TX_EMPTY_TRIGGER_SHIFT                    (4U)
#define UART_FCR_TX_EMPTY_TRIGGER_MASK                     (0x3U << UART_FCR_TX_EMPTY_TRIGGER_SHIFT)                    /* 0x00000030 */
#define UART_FCR_RCVR_TRIGGER_SHIFT                        (6U)
#define UART_FCR_RCVR_TRIGGER_MASK                         (0x3U << UART_FCR_RCVR_TRIGGER_SHIFT)                        /* 0x000000C0 */
/* IIR */
#define UART_IIR_OFFSET                                    (0x8U)
#define UART_IIR                                           (0x1U)
#define UART_IIR_INT_ID_SHIFT                              (0U)
#define UART_IIR_INT_ID_MASK                               (0xFU << UART_IIR_INT_ID_SHIFT)                              /* 0x0000000F */
#define UART_IIR_FIFOS_EN_SHIFT                            (6U)
#define UART_IIR_FIFOS_EN_MASK                             (0x3U << UART_IIR_FIFOS_EN_SHIFT)                            /* 0x000000C0 */
/* LCR */
#define UART_LCR_OFFSET                                    (0xCU)
#define UART_LCR_DATA_LENGTH_SEL_SHIFT                     (0U)
#define UART_LCR_DATA_LENGTH_SEL_MASK                      (0x3U << UART_LCR_DATA_LENGTH_SEL_SHIFT)                     /* 0x00000003 */
#define UART_LCR_STOP_BITS_NUM_SHIFT                       (2U)
#define UART_LCR_STOP_BITS_NUM_MASK                        (0x1U << UART_LCR_STOP_BITS_NUM_SHIFT)                       /* 0x00000004 */
#define UART_LCR_PARITY_EN_SHIFT                           (3U)
#define UART_LCR_PARITY_EN_MASK                            (0x1U << UART_LCR_PARITY_EN_SHIFT)                           /* 0x00000008 */
#define UART_LCR_EVEN_PARITY_SEL_SHIFT                     (4U)
#define UART_LCR_EVEN_PARITY_SEL_MASK                      (0x1U << UART_LCR_EVEN_PARITY_SEL_SHIFT)                     /* 0x00000010 */
#define UART_LCR_STICK_PARITY_SHIFT                        (5U)
#define UART_LCR_STICK_PARITY_MASK                         (0x1U << UART_LCR_STICK_PARITY_SHIFT)                        /* 0x00000020 */
#define UART_LCR_BREAK_CTRL_SHIFT                          (6U)
#define UART_LCR_BREAK_CTRL_MASK                           (0x1U << UART_LCR_BREAK_CTRL_SHIFT)                          /* 0x00000040 */
#define UART_LCR_DIV_LAT_ACCESS_SHIFT                      (7U)
#define UART_LCR_DIV_LAT_ACCESS_MASK                       (0x1U << UART_LCR_DIV_LAT_ACCESS_SHIFT)                      /* 0x00000080 */
/* MCR */
#define UART_MCR_OFFSET                                    (0x10U)
#define UART_MCR_DATA_TERMINAL_READY_SHIFT                 (0U)
#define UART_MCR_DATA_TERMINAL_READY_MASK                  (0x1U << UART_MCR_DATA_TERMINAL_READY_SHIFT)                 /* 0x00000001 */
#define UART_MCR_REQ_TO_SEND_SHIFT                         (1U)
#define UART_MCR_REQ_TO_SEND_MASK                          (0x1U << UART_MCR_REQ_TO_SEND_SHIFT)                         /* 0x00000002 */
#define UART_MCR_OUT1_SHIFT                                (2U)
#define UART_MCR_OUT1_MASK                                 (0x1U << UART_MCR_OUT1_SHIFT)                                /* 0x00000004 */
#define UART_MCR_OUT2_SHIFT                                (3U)
#define UART_MCR_OUT2_MASK                                 (0x1U << UART_MCR_OUT2_SHIFT)                                /* 0x00000008 */
#define UART_MCR_LOOPBACK_SHIFT                            (4U)
#define UART_MCR_LOOPBACK_MASK                             (0x1U << UART_MCR_LOOPBACK_SHIFT)                            /* 0x00000010 */
#define UART_MCR_AUTO_FLOW_CTRL_EN_SHIFT                   (5U)
#define UART_MCR_AUTO_FLOW_CTRL_EN_MASK                    (0x1U << UART_MCR_AUTO_FLOW_CTRL_EN_SHIFT)                   /* 0x00000020 */
#define UART_MCR_SIR_MODE_EN_SHIFT                         (6U)
#define UART_MCR_SIR_MODE_EN_MASK                          (0x1U << UART_MCR_SIR_MODE_EN_SHIFT)                         /* 0x00000040 */
/* LSR */
#define UART_LSR_OFFSET                                    (0x14U)
#define UART_LSR                                           (0x60U)
#define UART_LSR_DATA_READY_SHIFT                          (0U)
#define UART_LSR_DATA_READY_MASK                           (0x1U << UART_LSR_DATA_READY_SHIFT)                          /* 0x00000001 */
#define UART_LSR_OVERRUN_ERROR_SHIFT                       (1U)
#define UART_LSR_OVERRUN_ERROR_MASK                        (0x1U << UART_LSR_OVERRUN_ERROR_SHIFT)                       /* 0x00000002 */
#define UART_LSR_PARITY_ERROR_SHIFT                        (2U)
#define UART_LSR_PARITY_ERROR_MASK                         (0x1U << UART_LSR_PARITY_ERROR_SHIFT)                        /* 0x00000004 */
#define UART_LSR_FRAMING_ERROR_SHIFT                       (3U)
#define UART_LSR_FRAMING_ERROR_MASK                        (0x1U << UART_LSR_FRAMING_ERROR_SHIFT)                       /* 0x00000008 */
#define UART_LSR_BREAK_INT_SHIFT                           (4U)
#define UART_LSR_BREAK_INT_MASK                            (0x1U << UART_LSR_BREAK_INT_SHIFT)                           /* 0x00000010 */
#define UART_LSR_TRANS_HOLD_REG_EMPTY_SHIFT                (5U)
#define UART_LSR_TRANS_HOLD_REG_EMPTY_MASK                 (0x1U << UART_LSR_TRANS_HOLD_REG_EMPTY_SHIFT)                /* 0x00000020 */
#define UART_LSR_TRANS_EMPTY_SHIFT                         (6U)
#define UART_LSR_TRANS_EMPTY_MASK                          (0x1U << UART_LSR_TRANS_EMPTY_SHIFT)                         /* 0x00000040 */
#define UART_LSR_RECEIVER_FIFO_ERROR_SHIFT                 (7U)
#define UART_LSR_RECEIVER_FIFO_ERROR_MASK                  (0x1U << UART_LSR_RECEIVER_FIFO_ERROR_SHIFT)                 /* 0x00000080 */
/* MSR */
#define UART_MSR_OFFSET                                    (0x18U)
#define UART_MSR                                           (0x0U)
#define UART_MSR_DELTA_CLEAR_TO_SEND_SHIFT                 (0U)
#define UART_MSR_DELTA_CLEAR_TO_SEND_MASK                  (0x1U << UART_MSR_DELTA_CLEAR_TO_SEND_SHIFT)                 /* 0x00000001 */
#define UART_MSR_DELTA_DATA_SET_READY_SHIFT                (1U)
#define UART_MSR_DELTA_DATA_SET_READY_MASK                 (0x1U << UART_MSR_DELTA_DATA_SET_READY_SHIFT)                /* 0x00000002 */
#define UART_MSR_TRAILING_EDGE_RING_INDICATOR_SHIFT        (2U)
#define UART_MSR_TRAILING_EDGE_RING_INDICATOR_MASK         (0x1U << UART_MSR_TRAILING_EDGE_RING_INDICATOR_SHIFT)        /* 0x00000004 */
#define UART_MSR_DELTA_DATA_CARRIER_DETECT_SHIFT           (3U)
#define UART_MSR_DELTA_DATA_CARRIER_DETECT_MASK            (0x1U << UART_MSR_DELTA_DATA_CARRIER_DETECT_SHIFT)           /* 0x00000008 */
#define UART_MSR_CLEAR_TO_SEND_SHIFT                       (4U)
#define UART_MSR_CLEAR_TO_SEND_MASK                        (0x1U << UART_MSR_CLEAR_TO_SEND_SHIFT)                       /* 0x00000010 */
#define UART_MSR_DATA_SET_READY_SHIFT                      (5U)
#define UART_MSR_DATA_SET_READY_MASK                       (0x1U << UART_MSR_DATA_SET_READY_SHIFT)                      /* 0x00000020 */
#define UART_MSR_RING_INDICATOR_SHIFT                      (6U)
#define UART_MSR_RING_INDICATOR_MASK                       (0x1U << UART_MSR_RING_INDICATOR_SHIFT)                      /* 0x00000040 */
#define UART_MSR_DATA_CARRIOR_DETECT_SHIFT                 (7U)
#define UART_MSR_DATA_CARRIOR_DETECT_MASK                  (0x1U << UART_MSR_DATA_CARRIOR_DETECT_SHIFT)                 /* 0x00000080 */
/* SCR */
#define UART_SCR_OFFSET                                    (0x1CU)
#define UART_SCR_TEMP_STORE_SPACE_SHIFT                    (0U)
#define UART_SCR_TEMP_STORE_SPACE_MASK                     (0xFFU << UART_SCR_TEMP_STORE_SPACE_SHIFT)                   /* 0x000000FF */
/* SRBR */
#define UART_SRBR_OFFSET                                   (0x30U)
#define UART_SRBR                                          (0x0U)
#define UART_SRBR_SHADOW_RBR_SHIFT                         (0U)
#define UART_SRBR_SHADOW_RBR_MASK                          (0xFFU << UART_SRBR_SHADOW_RBR_SHIFT)                        /* 0x000000FF */
/* STHR */
#define UART_STHR_OFFSET                                   (0x30U)
#define UART_STHR_SHADOW_THR_SHIFT                         (0U)
#define UART_STHR_SHADOW_THR_MASK                          (0xFFU << UART_STHR_SHADOW_THR_SHIFT)                        /* 0x000000FF */
/* FAR */
#define UART_FAR_OFFSET                                    (0x70U)
#define UART_FAR_FIFO_ACCESS_TEST_EN_SHIFT                 (0U)
#define UART_FAR_FIFO_ACCESS_TEST_EN_MASK                  (0x1U << UART_FAR_FIFO_ACCESS_TEST_EN_SHIFT)                 /* 0x00000001 */
/* TFR */
#define UART_TFR_OFFSET                                    (0x74U)
#define UART_TFR                                           (0x0U)
#define UART_TFR_TRANS_FIFO_READ_SHIFT                     (0U)
#define UART_TFR_TRANS_FIFO_READ_MASK                      (0xFFU << UART_TFR_TRANS_FIFO_READ_SHIFT)                    /* 0x000000FF */
/* RFW */
#define UART_RFW_OFFSET                                    (0x78U)
#define UART_RFW_RECEIVE_FIFO_WRITE_SHIFT                  (0U)
#define UART_RFW_RECEIVE_FIFO_WRITE_MASK                   (0xFFU << UART_RFW_RECEIVE_FIFO_WRITE_SHIFT)                 /* 0x000000FF */
#define UART_RFW_RECEIVE_FIFO_PARITY_ERROR_SHIFT           (8U)
#define UART_RFW_RECEIVE_FIFO_PARITY_ERROR_MASK            (0x1U << UART_RFW_RECEIVE_FIFO_PARITY_ERROR_SHIFT)           /* 0x00000100 */
#define UART_RFW_RECEIVE_FIFO_FRAMING_ERROR_SHIFT          (9U)
#define UART_RFW_RECEIVE_FIFO_FRAMING_ERROR_MASK           (0x1U << UART_RFW_RECEIVE_FIFO_FRAMING_ERROR_SHIFT)          /* 0x00000200 */
/* USR */
#define UART_USR_OFFSET                                    (0x7CU)
#define UART_USR                                           (0x6U)
#define UART_USR_UART_BUSY_SHIFT                           (0U)
#define UART_USR_UART_BUSY_MASK                            (0x1U << UART_USR_UART_BUSY_SHIFT)                           /* 0x00000001 */
#define UART_USR_TRANS_FIFO_NOT_FULL_SHIFT                 (1U)
#define UART_USR_TRANS_FIFO_NOT_FULL_MASK                  (0x1U << UART_USR_TRANS_FIFO_NOT_FULL_SHIFT)                 /* 0x00000002 */
#define UART_USR_TRASN_FIFO_EMPTY_SHIFT                    (2U)
#define UART_USR_TRASN_FIFO_EMPTY_MASK                     (0x1U << UART_USR_TRASN_FIFO_EMPTY_SHIFT)                    /* 0x00000004 */
#define UART_USR_RECEIVE_FIFO_NOT_EMPTY_SHIFT              (3U)
#define UART_USR_RECEIVE_FIFO_NOT_EMPTY_MASK               (0x1U << UART_USR_RECEIVE_FIFO_NOT_EMPTY_SHIFT)              /* 0x00000008 */
#define UART_USR_RECEIVE_FIFO_FULL_SHIFT                   (4U)
#define UART_USR_RECEIVE_FIFO_FULL_MASK                    (0x1U << UART_USR_RECEIVE_FIFO_FULL_SHIFT)                   /* 0x00000010 */
/* TFL */
#define UART_TFL_OFFSET                                    (0x80U)
#define UART_TFL                                           (0x0U)
#define UART_TFL_TRANS_FIFO_LEVEL_SHIFT                    (0U)
#define UART_TFL_TRANS_FIFO_LEVEL_MASK                     (0x3FU << UART_TFL_TRANS_FIFO_LEVEL_SHIFT)                   /* 0x0000003F */
/* RFL */
#define UART_RFL_OFFSET                                    (0x84U)
#define UART_RFL                                           (0x0U)
#define UART_RFL_RECEIVE_FIFO_LEVEL_SHIFT                  (0U)
#define UART_RFL_RECEIVE_FIFO_LEVEL_MASK                   (0x3FU << UART_RFL_RECEIVE_FIFO_LEVEL_SHIFT)                 /* 0x0000003F */
/* SRR */
#define UART_SRR_OFFSET                                    (0x88U)
#define UART_SRR_UART_RESET_SHIFT                          (0U)
#define UART_SRR_UART_RESET_MASK                           (0x1U << UART_SRR_UART_RESET_SHIFT)                          /* 0x00000001 */
#define UART_SRR_RCVR_FIFO_RESET_SHIFT                     (1U)
#define UART_SRR_RCVR_FIFO_RESET_MASK                      (0x1U << UART_SRR_RCVR_FIFO_RESET_SHIFT)                     /* 0x00000002 */
#define UART_SRR_XMIT_FIFO_RESET_SHIFT                     (2U)
#define UART_SRR_XMIT_FIFO_RESET_MASK                      (0x1U << UART_SRR_XMIT_FIFO_RESET_SHIFT)                     /* 0x00000004 */
/* SRTS */
#define UART_SRTS_OFFSET                                   (0x8CU)
#define UART_SRTS_SHADOW_REQ_TO_SEND_SHIFT                 (0U)
#define UART_SRTS_SHADOW_REQ_TO_SEND_MASK                  (0x1U << UART_SRTS_SHADOW_REQ_TO_SEND_SHIFT)                 /* 0x00000001 */
/* SBCR */
#define UART_SBCR_OFFSET                                   (0x90U)
#define UART_SBCR_SHADOW_BREAK_CTRL_SHIFT                  (0U)
#define UART_SBCR_SHADOW_BREAK_CTRL_MASK                   (0x1U << UART_SBCR_SHADOW_BREAK_CTRL_SHIFT)                  /* 0x00000001 */
/* SDMAM */
#define UART_SDMAM_OFFSET                                  (0x94U)
#define UART_SDMAM_SHADOW_DMA_MODE_SHIFT                   (0U)
#define UART_SDMAM_SHADOW_DMA_MODE_MASK                    (0x1U << UART_SDMAM_SHADOW_DMA_MODE_SHIFT)                   /* 0x00000001 */
/* SFE */
#define UART_SFE_OFFSET                                    (0x98U)
#define UART_SFE_SHADOW_FIFO_EN_SHIFT                      (0U)
#define UART_SFE_SHADOW_FIFO_EN_MASK                       (0x1U << UART_SFE_SHADOW_FIFO_EN_SHIFT)                      /* 0x00000001 */
/* SRT */
#define UART_SRT_OFFSET                                    (0x9CU)
#define UART_SRT_SHADOW_RCVR_TRIGGER_SHIFT                 (0U)
#define UART_SRT_SHADOW_RCVR_TRIGGER_MASK                  (0x3U << UART_SRT_SHADOW_RCVR_TRIGGER_SHIFT)                 /* 0x00000003 */
/* STET */
#define UART_STET_OFFSET                                   (0xA0U)
#define UART_STET_SHADOW_TX_EMPTY_TRIGGER_SHIFT            (0U)
#define UART_STET_SHADOW_TX_EMPTY_TRIGGER_MASK             (0x3U << UART_STET_SHADOW_TX_EMPTY_TRIGGER_SHIFT)            /* 0x00000003 */
/* HTX */
#define UART_HTX_OFFSET                                    (0xA4U)
#define UART_HTX_HALT_TX_EN_SHIFT                          (0U)
#define UART_HTX_HALT_TX_EN_MASK                           (0x1U << UART_HTX_HALT_TX_EN_SHIFT)                          /* 0x00000001 */
/* DMASA */
#define UART_DMASA_OFFSET                                  (0xA8U)
#define UART_DMASA_DMA_SOFTWARE_ACK_SHIFT                  (0U)
#define UART_DMASA_DMA_SOFTWARE_ACK_MASK                   (0x1U << UART_DMASA_DMA_SOFTWARE_ACK_SHIFT)                  /* 0x00000001 */
/* CPR */
#define UART_CPR_OFFSET                                    (0xF4U)
#define UART_CPR                                           (0x43FF2U)
#define UART_CPR_APB_DATA_WIDTH_SHIFT                      (0U)
#define UART_CPR_APB_DATA_WIDTH_MASK                       (0x3U << UART_CPR_APB_DATA_WIDTH_SHIFT)                      /* 0x00000003 */
#define UART_CPR_AFCE_MODE_SHIFT                           (4U)
#define UART_CPR_AFCE_MODE_MASK                            (0x1U << UART_CPR_AFCE_MODE_SHIFT)                           /* 0x00000010 */
#define UART_CPR_THRE_MODE_SHIFT                           (5U)
#define UART_CPR_THRE_MODE_MASK                            (0x1U << UART_CPR_THRE_MODE_SHIFT)                           /* 0x00000020 */
#define UART_CPR_SIR_MODE_SHIFT                            (6U)
#define UART_CPR_SIR_MODE_MASK                             (0x1U << UART_CPR_SIR_MODE_SHIFT)                            /* 0x00000040 */
#define UART_CPR_SIR_LP_MODE_SHIFT                         (7U)
#define UART_CPR_SIR_LP_MODE_MASK                          (0x1U << UART_CPR_SIR_LP_MODE_SHIFT)                         /* 0x00000080 */
#define UART_CPR_NEW_FEAT_SHIFT                            (8U)
#define UART_CPR_NEW_FEAT_MASK                             (0x1U << UART_CPR_NEW_FEAT_SHIFT)                            /* 0x00000100 */
#define UART_CPR_FIFO_ACCESS_SHIFT                         (9U)
#define UART_CPR_FIFO_ACCESS_MASK                          (0x1U << UART_CPR_FIFO_ACCESS_SHIFT)                         /* 0x00000200 */
#define UART_CPR_FIFO_STAT_SHIFT                           (10U)
#define UART_CPR_FIFO_STAT_MASK                            (0x1U << UART_CPR_FIFO_STAT_SHIFT)                           /* 0x00000400 */
#define UART_CPR_SHADOW_SHIFT                              (11U)
#define UART_CPR_SHADOW_MASK                               (0x1U << UART_CPR_SHADOW_SHIFT)                              /* 0x00000800 */
#define UART_CPR_UART_ADD_ENCODED_PARAMS_SHIFT             (12U)
#define UART_CPR_UART_ADD_ENCODED_PARAMS_MASK              (0x1U << UART_CPR_UART_ADD_ENCODED_PARAMS_SHIFT)             /* 0x00001000 */
#define UART_CPR_DMA_EXTRA_SHIFT                           (13U)
#define UART_CPR_DMA_EXTRA_MASK                            (0x1U << UART_CPR_DMA_EXTRA_SHIFT)                           /* 0x00002000 */
#define UART_CPR_FIFO_MODE_SHIFT                           (16U)
#define UART_CPR_FIFO_MODE_MASK                            (0xFFU << UART_CPR_FIFO_MODE_SHIFT)                          /* 0x00FF0000 */
/* UCV */
#define UART_UCV_OFFSET                                    (0xF8U)
#define UART_UCV                                           (0x3430322AU)
#define UART_UCV_VER_SHIFT                                 (0U)
#define UART_UCV_VER_MASK                                  (0xFFFFFFFFU << UART_UCV_VER_SHIFT)                          /* 0xFFFFFFFF */
/* CTR */
#define UART_CTR_OFFSET                                    (0xFCU)
#define UART_CTR                                           (0x44570110U)
#define UART_CTR_PERIPHERAL_ID_SHIFT                       (0U)
#define UART_CTR_PERIPHERAL_ID_MASK                        (0xFFFFFFFFU << UART_CTR_PERIPHERAL_ID_SHIFT)                /* 0xFFFFFFFF */
/******************************************WDT*******************************************/
/* CR */
#define WDT_CR_OFFSET                                      (0x0U)
#define WDT_CR_EN_SHIFT                                    (0U)
#define WDT_CR_EN_MASK                                     (0x1U << WDT_CR_EN_SHIFT)                                    /* 0x00000001 */
#define WDT_CR_RESP_MODE_SHIFT                             (1U)
#define WDT_CR_RESP_MODE_MASK                              (0x1U << WDT_CR_RESP_MODE_SHIFT)                             /* 0x00000002 */
#define WDT_CR_RST_PLUSE_LENGTH_SHIFT                      (2U)
#define WDT_CR_RST_PLUSE_LENGTH_MASK                       (0x7U << WDT_CR_RST_PLUSE_LENGTH_SHIFT)                      /* 0x0000001C */
/* TORR */
#define WDT_TORR_OFFSET                                    (0x4U)
#define WDT_TORR_TIMEOUT_PERIOD_SHIFT                      (0U)
#define WDT_TORR_TIMEOUT_PERIOD_MASK                       (0xFU << WDT_TORR_TIMEOUT_PERIOD_SHIFT)                      /* 0x0000000F */
/* CCVR */
#define WDT_CCVR_OFFSET                                    (0x8U)
#define WDT_CCVR                                           (0xFFFFU)
#define WDT_CCVR_CUR_CNT_SHIFT                             (0U)
#define WDT_CCVR_CUR_CNT_MASK                              (0xFFFFFFFFU << WDT_CCVR_CUR_CNT_SHIFT)                      /* 0xFFFFFFFF */
/* CRR */
#define WDT_CRR_OFFSET                                     (0xCU)
#define WDT_CRR_CNT_RESTART_SHIFT                          (0U)
#define WDT_CRR_CNT_RESTART_MASK                           (0xFFU << WDT_CRR_CNT_RESTART_SHIFT)                         /* 0x000000FF */
/* STAT */
#define WDT_STAT_OFFSET                                    (0x10U)
#define WDT_STAT                                           (0x0U)
#define WDT_STAT_STATUS_SHIFT                              (0U)
#define WDT_STAT_STATUS_MASK                               (0x1U << WDT_STAT_STATUS_SHIFT)                              /* 0x00000001 */
/* EOI */
#define WDT_EOI_OFFSET                                     (0x14U)
#define WDT_EOI                                            (0x0U)
#define WDT_EOI_INT_CLR_SHIFT                              (0U)
#define WDT_EOI_INT_CLR_MASK                               (0x1U << WDT_EOI_INT_CLR_SHIFT)                              /* 0x00000001 */
/*****************************************TIMER******************************************/
/* LOAD_COUNT0 */
#define TIMER_LOAD_COUNT0_OFFSET                           (0x0U)
#define TIMER_LOAD_COUNT0_COUNT0_SHIFT                     (0U)
#define TIMER_LOAD_COUNT0_COUNT0_MASK                      (0xFFFFFFFFU << TIMER_LOAD_COUNT0_COUNT0_SHIFT)              /* 0xFFFFFFFF */
/* LOAD_COUNT1 */
#define TIMER_LOAD_COUNT1_OFFSET                           (0x4U)
#define TIMER_LOAD_COUNT1_COUNT1_SHIFT                     (0U)
#define TIMER_LOAD_COUNT1_COUNT1_MASK                      (0xFFFFFFFFU << TIMER_LOAD_COUNT1_COUNT1_SHIFT)              /* 0xFFFFFFFF */
/* CURRENT_VALUE0 */
#define TIMER_CURRENT_VALUE0_OFFSET                        (0x8U)
#define TIMER_CURRENT_VALUE0                               (0x0U)
#define TIMER_CURRENT_VALUE0_CURRENT_VALUE0_SHIFT          (0U)
#define TIMER_CURRENT_VALUE0_CURRENT_VALUE0_MASK           (0xFFFFFFFFU << TIMER_CURRENT_VALUE0_CURRENT_VALUE0_SHIFT)   /* 0xFFFFFFFF */
/* CURRENT_VALUE1 */
#define TIMER_CURRENT_VALUE1_OFFSET                        (0xCU)
#define TIMER_CURRENT_VALUE1                               (0x0U)
#define TIMER_CURRENT_VALUE1_CURRENT_VALUE1_SHIFT          (0U)
#define TIMER_CURRENT_VALUE1_CURRENT_VALUE1_MASK           (0xFFFFFFFFU << TIMER_CURRENT_VALUE1_CURRENT_VALUE1_SHIFT)   /* 0xFFFFFFFF */
/* CONTROLREG */
#define TIMER_CONTROLREG_OFFSET                            (0x10U)
#define TIMER_CONTROLREG_TIMER_ENABLE_SHIFT                (0U)
#define TIMER_CONTROLREG_TIMER_ENABLE_MASK                 (0x1U << TIMER_CONTROLREG_TIMER_ENABLE_SHIFT)                /* 0x00000001 */
#define TIMER_CONTROLREG_TIMER_MODE_SHIFT                  (1U)
#define TIMER_CONTROLREG_TIMER_MODE_MASK                   (0x1U << TIMER_CONTROLREG_TIMER_MODE_SHIFT)                  /* 0x00000002 */
#define TIMER_CONTROLREG_TIMER_INT_MASK_SHIFT              (2U)
#define TIMER_CONTROLREG_TIMER_INT_MASK_MASK               (0x1U << TIMER_CONTROLREG_TIMER_INT_MASK_SHIFT)              /* 0x00000004 */
/* INTSTATUS */
#define TIMER_INTSTATUS_OFFSET                             (0x18U)
#define TIMER_INTSTATUS_INT_PD_SHIFT                       (0U)
#define TIMER_INTSTATUS_INT_PD_MASK                        (0x1U << TIMER_INTSTATUS_INT_PD_SHIFT)                       /* 0x00000001 */
/******************************************FSPI******************************************/
/* CTRL0 */
#define FSPI_CTRL0_OFFSET                                  (0x0U)
#define FSPI_CTRL0_SPIM_SHIFT                              (0U)
#define FSPI_CTRL0_SPIM_MASK                               (0x1U << FSPI_CTRL0_SPIM_SHIFT)                              /* 0x00000001 */
#define FSPI_CTRL0_SHIFTPHASE_SHIFT                        (1U)
#define FSPI_CTRL0_SHIFTPHASE_MASK                         (0x1U << FSPI_CTRL0_SHIFTPHASE_SHIFT)                        /* 0x00000002 */
#define FSPI_CTRL0_IDLE_CYCLE_SHIFT                        (4U)
#define FSPI_CTRL0_IDLE_CYCLE_MASK                         (0xFU << FSPI_CTRL0_IDLE_CYCLE_SHIFT)                        /* 0x000000F0 */
#define FSPI_CTRL0_CMDB_SHIFT                              (8U)
#define FSPI_CTRL0_CMDB_MASK                               (0x3U << FSPI_CTRL0_CMDB_SHIFT)                              /* 0x00000300 */
#define FSPI_CTRL0_ADRB_SHIFT                              (10U)
#define FSPI_CTRL0_ADRB_MASK                               (0x3U << FSPI_CTRL0_ADRB_SHIFT)                              /* 0x00000C00 */
#define FSPI_CTRL0_DATB_SHIFT                              (12U)
#define FSPI_CTRL0_DATB_MASK                               (0x3U << FSPI_CTRL0_DATB_SHIFT)                              /* 0x00003000 */
/* IMR */
#define FSPI_IMR_OFFSET                                    (0x4U)
#define FSPI_IMR_RXFM_SHIFT                                (0U)
#define FSPI_IMR_RXFM_MASK                                 (0x1U << FSPI_IMR_RXFM_SHIFT)                                /* 0x00000001 */
#define FSPI_IMR_RXUM_SHIFT                                (1U)
#define FSPI_IMR_RXUM_MASK                                 (0x1U << FSPI_IMR_RXUM_SHIFT)                                /* 0x00000002 */
#define FSPI_IMR_TXOM_SHIFT                                (2U)
#define FSPI_IMR_TXOM_MASK                                 (0x1U << FSPI_IMR_TXOM_SHIFT)                                /* 0x00000004 */
#define FSPI_IMR_TXEM_SHIFT                                (3U)
#define FSPI_IMR_TXEM_MASK                                 (0x1U << FSPI_IMR_TXEM_SHIFT)                                /* 0x00000008 */
#define FSPI_IMR_TRANSM_SHIFT                              (4U)
#define FSPI_IMR_TRANSM_MASK                               (0x1U << FSPI_IMR_TRANSM_SHIFT)                              /* 0x00000010 */
#define FSPI_IMR_AHBM_SHIFT                                (5U)
#define FSPI_IMR_AHBM_MASK                                 (0x1U << FSPI_IMR_AHBM_SHIFT)                                /* 0x00000020 */
#define FSPI_IMR_NSPIM_SHIFT                               (6U)
#define FSPI_IMR_NSPIM_MASK                                (0x1U << FSPI_IMR_NSPIM_SHIFT)                               /* 0x00000040 */
#define FSPI_IMR_DMAM_SHIFT                                (7U)
#define FSPI_IMR_DMAM_MASK                                 (0x1U << FSPI_IMR_DMAM_SHIFT)                                /* 0x00000080 */
/* ICLR */
#define FSPI_ICLR_OFFSET                                   (0x8U)
#define FSPI_ICLR_RXFC_SHIFT                               (0U)
#define FSPI_ICLR_RXFC_MASK                                (0x1U << FSPI_ICLR_RXFC_SHIFT)                               /* 0x00000001 */
#define FSPI_ICLR_RXUC_SHIFT                               (1U)
#define FSPI_ICLR_RXUC_MASK                                (0x1U << FSPI_ICLR_RXUC_SHIFT)                               /* 0x00000002 */
#define FSPI_ICLR_TXOC_SHIFT                               (2U)
#define FSPI_ICLR_TXOC_MASK                                (0x1U << FSPI_ICLR_TXOC_SHIFT)                               /* 0x00000004 */
#define FSPI_ICLR_TXEC_SHIFT                               (3U)
#define FSPI_ICLR_TXEC_MASK                                (0x1U << FSPI_ICLR_TXEC_SHIFT)                               /* 0x00000008 */
#define FSPI_ICLR_TRANSC_SHIFT                             (4U)
#define FSPI_ICLR_TRANSC_MASK                              (0x1U << FSPI_ICLR_TRANSC_SHIFT)                             /* 0x00000010 */
#define FSPI_ICLR_AHBC_SHIFT                               (5U)
#define FSPI_ICLR_AHBC_MASK                                (0x1U << FSPI_ICLR_AHBC_SHIFT)                               /* 0x00000020 */
#define FSPI_ICLR_NSPIC_SHIFT                              (6U)
#define FSPI_ICLR_NSPIC_MASK                               (0x1U << FSPI_ICLR_NSPIC_SHIFT)                              /* 0x00000040 */
#define FSPI_ICLR_DMAC_SHIFT                               (7U)
#define FSPI_ICLR_DMAC_MASK                                (0x1U << FSPI_ICLR_DMAC_SHIFT)                               /* 0x00000080 */
/* FTLR */
#define FSPI_FTLR_OFFSET                                   (0xCU)
#define FSPI_FTLR_TXFTLR_SHIFT                             (0U)
#define FSPI_FTLR_TXFTLR_MASK                              (0xFFU << FSPI_FTLR_TXFTLR_SHIFT)                            /* 0x000000FF */
#define FSPI_FTLR_RXFTLR_SHIFT                             (8U)
#define FSPI_FTLR_RXFTLR_MASK                              (0xFFU << FSPI_FTLR_RXFTLR_SHIFT)                            /* 0x0000FF00 */
/* RCVR */
#define FSPI_RCVR_OFFSET                                   (0x10U)
#define FSPI_RCVR_RCVR_SHIFT                               (0U)
#define FSPI_RCVR_RCVR_MASK                                (0x1U << FSPI_RCVR_RCVR_SHIFT)                               /* 0x00000001 */
/* AX0 */
#define FSPI_AX0_OFFSET                                    (0x14U)
#define FSPI_AX0_AX_SHIFT                                  (0U)
#define FSPI_AX0_AX_MASK                                   (0xFFU << FSPI_AX0_AX_SHIFT)                                 /* 0x000000FF */
/* ABIT0 */
#define FSPI_ABIT0_OFFSET                                  (0x18U)
#define FSPI_ABIT0_ABIT_SHIFT                              (0U)
#define FSPI_ABIT0_ABIT_MASK                               (0x1FU << FSPI_ABIT0_ABIT_SHIFT)                             /* 0x0000001F */
/* ISR */
#define FSPI_ISR_OFFSET                                    (0x1CU)
#define FSPI_ISR_RXFS_SHIFT                                (0U)
#define FSPI_ISR_RXFS_MASK                                 (0x1U << FSPI_ISR_RXFS_SHIFT)                                /* 0x00000001 */
#define FSPI_ISR_RXUS_SHIFT                                (1U)
#define FSPI_ISR_RXUS_MASK                                 (0x1U << FSPI_ISR_RXUS_SHIFT)                                /* 0x00000002 */
#define FSPI_ISR_TXOS_SHIFT                                (2U)
#define FSPI_ISR_TXOS_MASK                                 (0x1U << FSPI_ISR_TXOS_SHIFT)                                /* 0x00000004 */
#define FSPI_ISR_TXES_SHIFT                                (3U)
#define FSPI_ISR_TXES_MASK                                 (0x1U << FSPI_ISR_TXES_SHIFT)                                /* 0x00000008 */
#define FSPI_ISR_TRANSS_SHIFT                              (4U)
#define FSPI_ISR_TRANSS_MASK                               (0x1U << FSPI_ISR_TRANSS_SHIFT)                              /* 0x00000010 */
#define FSPI_ISR_AHBS_SHIFT                                (5U)
#define FSPI_ISR_AHBS_MASK                                 (0x1U << FSPI_ISR_AHBS_SHIFT)                                /* 0x00000020 */
#define FSPI_ISR_NSPIS_SHIFT                               (6U)
#define FSPI_ISR_NSPIS_MASK                                (0x1U << FSPI_ISR_NSPIS_SHIFT)                               /* 0x00000040 */
#define FSPI_ISR_DMAS_SHIFT                                (7U)
#define FSPI_ISR_DMAS_MASK                                 (0x1U << FSPI_ISR_DMAS_SHIFT)                                /* 0x00000080 */
/* FSR */
#define FSPI_FSR_OFFSET                                    (0x20U)
#define FSPI_FSR_TXFS_SHIFT                                (0U)
#define FSPI_FSR_TXFS_MASK                                 (0x1U << FSPI_FSR_TXFS_SHIFT)                                /* 0x00000001 */
#define FSPI_FSR_TXES_SHIFT                                (1U)
#define FSPI_FSR_TXES_MASK                                 (0x1U << FSPI_FSR_TXES_SHIFT)                                /* 0x00000002 */
#define FSPI_FSR_RXES_SHIFT                                (2U)
#define FSPI_FSR_RXES_MASK                                 (0x1U << FSPI_FSR_RXES_SHIFT)                                /* 0x00000004 */
#define FSPI_FSR_RXFS_SHIFT                                (3U)
#define FSPI_FSR_RXFS_MASK                                 (0x1U << FSPI_FSR_RXFS_SHIFT)                                /* 0x00000008 */
#define FSPI_FSR_TXWLVL_SHIFT                              (8U)
#define FSPI_FSR_TXWLVL_MASK                               (0x1FU << FSPI_FSR_TXWLVL_SHIFT)                             /* 0x00001F00 */
#define FSPI_FSR_RXWLVL_SHIFT                              (16U)
#define FSPI_FSR_RXWLVL_MASK                               (0x1FU << FSPI_FSR_RXWLVL_SHIFT)                             /* 0x001F0000 */
/* SR */
#define FSPI_SR_OFFSET                                     (0x24U)
#define FSPI_SR                                            (0x0U)
#define FSPI_SR_SR_SHIFT                                   (0U)
#define FSPI_SR_SR_MASK                                    (0x1U << FSPI_SR_SR_SHIFT)                                   /* 0x00000001 */
/* RISR */
#define FSPI_RISR_OFFSET                                   (0x28U)
#define FSPI_RISR                                          (0x0U)
#define FSPI_RISR_RXFS_SHIFT                               (0U)
#define FSPI_RISR_RXFS_MASK                                (0x1U << FSPI_RISR_RXFS_SHIFT)                               /* 0x00000001 */
#define FSPI_RISR_RXUS_SHIFT                               (1U)
#define FSPI_RISR_RXUS_MASK                                (0x1U << FSPI_RISR_RXUS_SHIFT)                               /* 0x00000002 */
#define FSPI_RISR_TXOS_SHIFT                               (2U)
#define FSPI_RISR_TXOS_MASK                                (0x1U << FSPI_RISR_TXOS_SHIFT)                               /* 0x00000004 */
#define FSPI_RISR_TXES_SHIFT                               (3U)
#define FSPI_RISR_TXES_MASK                                (0x1U << FSPI_RISR_TXES_SHIFT)                               /* 0x00000008 */
#define FSPI_RISR_TRANSS_SHIFT                             (4U)
#define FSPI_RISR_TRANSS_MASK                              (0x1U << FSPI_RISR_TRANSS_SHIFT)                             /* 0x00000010 */
#define FSPI_RISR_AHBS_SHIFT                               (5U)
#define FSPI_RISR_AHBS_MASK                                (0x1U << FSPI_RISR_AHBS_SHIFT)                               /* 0x00000020 */
#define FSPI_RISR_NSPIS_SHIFT                              (6U)
#define FSPI_RISR_NSPIS_MASK                               (0x1U << FSPI_RISR_NSPIS_SHIFT)                              /* 0x00000040 */
#define FSPI_RISR_DMAS_SHIFT                               (7U)
#define FSPI_RISR_DMAS_MASK                                (0x1U << FSPI_RISR_DMAS_SHIFT)                               /* 0x00000080 */
/* VER */
#define FSPI_VER_OFFSET                                    (0x2CU)
#define FSPI_VER                                           (0x5U)
#define FSPI_VER_VER_SHIFT                                 (0U)
#define FSPI_VER_VER_MASK                                  (0xFFFFU << FSPI_VER_VER_SHIFT)                              /* 0x0000FFFF */
/* QOP */
#define FSPI_QOP_OFFSET                                    (0x30U)
#define FSPI_QOP_SO123_SHIFT                               (0U)
#define FSPI_QOP_SO123_MASK                                (0x1U << FSPI_QOP_SO123_SHIFT)                               /* 0x00000001 */
#define FSPI_QOP_SO123BP_SHIFT                             (1U)
#define FSPI_QOP_SO123BP_MASK                              (0x1U << FSPI_QOP_SO123BP_SHIFT)                             /* 0x00000002 */
/* EXT_CTRL */
#define FSPI_EXT_CTRL_OFFSET                               (0x34U)
#define FSPI_EXT_CTRL_CS_DESEL_CTRL_SHIFT                  (0U)
#define FSPI_EXT_CTRL_CS_DESEL_CTRL_MASK                   (0xFU << FSPI_EXT_CTRL_CS_DESEL_CTRL_SHIFT)                  /* 0x0000000F */
#define FSPI_EXT_CTRL_SWITCH_IO_DUMM_CNT_SHIFT             (4U)
#define FSPI_EXT_CTRL_SWITCH_IO_DUMM_CNT_MASK              (0xFU << FSPI_EXT_CTRL_SWITCH_IO_DUMM_CNT_SHIFT)             /* 0x000000F0 */
#define FSPI_EXT_CTRL_SWITCH_IO_O2I_CNT_SHIFT              (8U)
#define FSPI_EXT_CTRL_SWITCH_IO_O2I_CNT_MASK               (0xFU << FSPI_EXT_CTRL_SWITCH_IO_O2I_CNT_SHIFT)              /* 0x00000F00 */
#define FSPI_EXT_CTRL_TRANS_INT_MODE_SHIFT                 (13U)
#define FSPI_EXT_CTRL_TRANS_INT_MODE_MASK                  (0x1U << FSPI_EXT_CTRL_TRANS_INT_MODE_SHIFT)                 /* 0x00002000 */
#define FSPI_EXT_CTRL_SR_GEN_MODE_SHIFT                    (14U)
#define FSPI_EXT_CTRL_SR_GEN_MODE_MASK                     (0x1U << FSPI_EXT_CTRL_SR_GEN_MODE_SHIFT)                    /* 0x00004000 */
/* DLL_CTRL0 */
#define FSPI_DLL_CTRL0_OFFSET                              (0x3CU)
#define FSPI_DLL_CTRL0_SMP_DLL_CFG_SHIFT                   (0U)
#define FSPI_DLL_CTRL0_SMP_DLL_CFG_MASK                    (0x1FFU << FSPI_DLL_CTRL0_SMP_DLL_CFG_SHIFT)                 /* 0x000001FF */
#define FSPI_DLL_CTRL0_SCLK_SMP_SEL_SHIFT                  (15U)
#define FSPI_DLL_CTRL0_SCLK_SMP_SEL_MASK                   (0x1U << FSPI_DLL_CTRL0_SCLK_SMP_SEL_SHIFT)                  /* 0x00008000 */
/* EXT_AX */
#define FSPI_EXT_AX_OFFSET                                 (0x44U)
#define FSPI_EXT_AX_AX_CANCEL_PAT_SHIFT                    (0U)
#define FSPI_EXT_AX_AX_CANCEL_PAT_MASK                     (0xFFU << FSPI_EXT_AX_AX_CANCEL_PAT_SHIFT)                   /* 0x000000FF */
#define FSPI_EXT_AX_AX_SETUP_PAT_SHIFT                     (8U)
#define FSPI_EXT_AX_AX_SETUP_PAT_MASK                      (0xFFU << FSPI_EXT_AX_AX_SETUP_PAT_SHIFT)                    /* 0x0000FF00 */
/* SCLK_INATM_CNT */
#define FSPI_SCLK_INATM_CNT_OFFSET                         (0x48U)
#define FSPI_SCLK_INATM_CNT_SCLK_INATM_CNT_SHIFT           (0U)
#define FSPI_SCLK_INATM_CNT_SCLK_INATM_CNT_MASK            (0xFFFFFFFFU << FSPI_SCLK_INATM_CNT_SCLK_INATM_CNT_SHIFT)    /* 0xFFFFFFFF */
/* XMMC_WCMD0 */
#define FSPI_XMMC_WCMD0_OFFSET                             (0x50U)
#define FSPI_XMMC_WCMD0_CMD_SHIFT                          (0U)
#define FSPI_XMMC_WCMD0_CMD_MASK                           (0xFFU << FSPI_XMMC_WCMD0_CMD_SHIFT)                         /* 0x000000FF */
#define FSPI_XMMC_WCMD0_DUMM_SHIFT                         (8U)
#define FSPI_XMMC_WCMD0_DUMM_MASK                          (0xFU << FSPI_XMMC_WCMD0_DUMM_SHIFT)                         /* 0x00000F00 */
#define FSPI_XMMC_WCMD0_CONT_SHIFT                         (13U)
#define FSPI_XMMC_WCMD0_CONT_MASK                          (0x1U << FSPI_XMMC_WCMD0_CONT_SHIFT)                         /* 0x00002000 */
#define FSPI_XMMC_WCMD0_ADDRB_SHIFT                        (14U)
#define FSPI_XMMC_WCMD0_ADDRB_MASK                         (0x3U << FSPI_XMMC_WCMD0_ADDRB_SHIFT)                        /* 0x0000C000 */
/* XMMC_RCMD0 */
#define FSPI_XMMC_RCMD0_OFFSET                             (0x54U)
#define FSPI_XMMC_RCMD0_CMD_SHIFT                          (0U)
#define FSPI_XMMC_RCMD0_CMD_MASK                           (0xFFU << FSPI_XMMC_RCMD0_CMD_SHIFT)                         /* 0x000000FF */
#define FSPI_XMMC_RCMD0_DUMM_SHIFT                         (8U)
#define FSPI_XMMC_RCMD0_DUMM_MASK                          (0xFU << FSPI_XMMC_RCMD0_DUMM_SHIFT)                         /* 0x00000F00 */
#define FSPI_XMMC_RCMD0_CONT_SHIFT                         (13U)
#define FSPI_XMMC_RCMD0_CONT_MASK                          (0x1U << FSPI_XMMC_RCMD0_CONT_SHIFT)                         /* 0x00002000 */
#define FSPI_XMMC_RCMD0_ADDRB_SHIFT                        (14U)
#define FSPI_XMMC_RCMD0_ADDRB_MASK                         (0x3U << FSPI_XMMC_RCMD0_ADDRB_SHIFT)                        /* 0x0000C000 */
/* XMMC_CTRL */
#define FSPI_XMMC_CTRL_OFFSET                              (0x58U)
#define FSPI_XMMC_CTRL_DEV_HWEN_SHIFT                      (5U)
#define FSPI_XMMC_CTRL_DEV_HWEN_MASK                       (0x1U << FSPI_XMMC_CTRL_DEV_HWEN_SHIFT)                      /* 0x00000020 */
#define FSPI_XMMC_CTRL_PFT_EN_SHIFT                        (6U)
#define FSPI_XMMC_CTRL_PFT_EN_MASK                         (0x1U << FSPI_XMMC_CTRL_PFT_EN_SHIFT)                        /* 0x00000040 */
/* MODE */
#define FSPI_MODE_OFFSET                                   (0x5CU)
#define FSPI_MODE_XMMC_MODE_EN_SHIFT                       (0U)
#define FSPI_MODE_XMMC_MODE_EN_MASK                        (0x1U << FSPI_MODE_XMMC_MODE_EN_SHIFT)                       /* 0x00000001 */
/* DEVRGN */
#define FSPI_DEVRGN_OFFSET                                 (0x60U)
#define FSPI_DEVRGN_RSIZE_SHIFT                            (0U)
#define FSPI_DEVRGN_RSIZE_MASK                             (0x1FU << FSPI_DEVRGN_RSIZE_SHIFT)                           /* 0x0000001F */
#define FSPI_DEVRGN_DEC_CTRL_SHIFT                         (8U)
#define FSPI_DEVRGN_DEC_CTRL_MASK                          (0x3U << FSPI_DEVRGN_DEC_CTRL_SHIFT)                         /* 0x00000300 */
/* DEVSIZE0 */
#define FSPI_DEVSIZE0_OFFSET                               (0x64U)
#define FSPI_DEVSIZE0_DSIZE_SHIFT                          (0U)
#define FSPI_DEVSIZE0_DSIZE_MASK                           (0x1FU << FSPI_DEVSIZE0_DSIZE_SHIFT)                         /* 0x0000001F */
/* TME0 */
#define FSPI_TME0_OFFSET                                   (0x68U)
#define FSPI_TME0_SCLK_INATM_EN_SHIFT                      (1U)
#define FSPI_TME0_SCLK_INATM_EN_MASK                       (0x1U << FSPI_TME0_SCLK_INATM_EN_SHIFT)                      /* 0x00000002 */
/* XMMC_RX_WTMRK */
#define FSPI_XMMC_RX_WTMRK_OFFSET                          (0x70U)
#define FSPI_XMMC_RX_WTMRK_RX_FULL_WTMRK_SHIFT             (0U)
#define FSPI_XMMC_RX_WTMRK_RX_FULL_WTMRK_MASK              (0xFFU << FSPI_XMMC_RX_WTMRK_RX_FULL_WTMRK_SHIFT)            /* 0x000000FF */
/* DMATR */
#define FSPI_DMATR_OFFSET                                  (0x80U)
#define FSPI_DMATR_DMATR_SHIFT                             (0U)
#define FSPI_DMATR_DMATR_MASK                              (0x1U << FSPI_DMATR_DMATR_SHIFT)                             /* 0x00000001 */
/* DMAADDR */
#define FSPI_DMAADDR_OFFSET                                (0x84U)
#define FSPI_DMAADDR_DMAADDR_SHIFT                         (0U)
#define FSPI_DMAADDR_DMAADDR_MASK                          (0xFFFFFFFFU << FSPI_DMAADDR_DMAADDR_SHIFT)                  /* 0xFFFFFFFF */
/* LEN_CTRL */
#define FSPI_LEN_CTRL_OFFSET                               (0x88U)
#define FSPI_LEN_CTRL_TRB_SEL_SHIFT                        (0U)
#define FSPI_LEN_CTRL_TRB_SEL_MASK                         (0x1U << FSPI_LEN_CTRL_TRB_SEL_SHIFT)                        /* 0x00000001 */
/* LEN_EXT */
#define FSPI_LEN_EXT_OFFSET                                (0x8CU)
#define FSPI_LEN_EXT_TRB_EXT_SHIFT                         (0U)
#define FSPI_LEN_EXT_TRB_EXT_MASK                          (0xFFFFFFFFU << FSPI_LEN_EXT_TRB_EXT_SHIFT)                  /* 0xFFFFFFFF */
/* XMMCSR */
#define FSPI_XMMCSR_OFFSET                                 (0x94U)
#define FSPI_XMMCSR_SLOPOVER0_SHIFT                        (0U)
#define FSPI_XMMCSR_SLOPOVER0_MASK                         (0x1U << FSPI_XMMCSR_SLOPOVER0_SHIFT)                        /* 0x00000001 */
#define FSPI_XMMCSR_SLOPOVER1_SHIFT                        (1U)
#define FSPI_XMMCSR_SLOPOVER1_MASK                         (0x1U << FSPI_XMMCSR_SLOPOVER1_SHIFT)                        /* 0x00000002 */
/* CMD */
#define FSPI_CMD_OFFSET                                    (0x100U)
#define FSPI_CMD_CMD_SHIFT                                 (0U)
#define FSPI_CMD_CMD_MASK                                  (0xFFU << FSPI_CMD_CMD_SHIFT)                                /* 0x000000FF */
#define FSPI_CMD_DUMM_SHIFT                                (8U)
#define FSPI_CMD_DUMM_MASK                                 (0xFU << FSPI_CMD_DUMM_SHIFT)                                /* 0x00000F00 */
#define FSPI_CMD_WR_SHIFT                                  (12U)
#define FSPI_CMD_WR_MASK                                   (0x1U << FSPI_CMD_WR_SHIFT)                                  /* 0x00001000 */
#define FSPI_CMD_CONT_SHIFT                                (13U)
#define FSPI_CMD_CONT_MASK                                 (0x1U << FSPI_CMD_CONT_SHIFT)                                /* 0x00002000 */
#define FSPI_CMD_ADDRB_SHIFT                               (14U)
#define FSPI_CMD_ADDRB_MASK                                (0x3U << FSPI_CMD_ADDRB_SHIFT)                               /* 0x0000C000 */
#define FSPI_CMD_TRB_SHIFT                                 (16U)
#define FSPI_CMD_TRB_MASK                                  (0x3FFFU << FSPI_CMD_TRB_SHIFT)                              /* 0x3FFF0000 */
#define FSPI_CMD_CS_SHIFT                                  (30U)
#define FSPI_CMD_CS_MASK                                   (0x3U << FSPI_CMD_CS_SHIFT)                                  /* 0xC0000000 */
/* ADDR */
#define FSPI_ADDR_OFFSET                                   (0x104U)
#define FSPI_ADDR_ADDR_SHIFT                               (0U)
#define FSPI_ADDR_ADDR_MASK                                (0xFFFFFFFFU << FSPI_ADDR_ADDR_SHIFT)                        /* 0xFFFFFFFF */
/* DATA */
#define FSPI_DATA_OFFSET                                   (0x108U)
#define FSPI_DATA_DATA_SHIFT                               (0U)
#define FSPI_DATA_DATA_MASK                                (0xFFFFFFFFU << FSPI_DATA_DATA_SHIFT)                        /* 0xFFFFFFFF */
/* CTRL1 */
#define FSPI_CTRL1_OFFSET                                  (0x200U)
#define FSPI_CTRL1_SPIM_SHIFT                              (0U)
#define FSPI_CTRL1_SPIM_MASK                               (0x1U << FSPI_CTRL1_SPIM_SHIFT)                              /* 0x00000001 */
#define FSPI_CTRL1_SHIFTPHASE_SHIFT                        (1U)
#define FSPI_CTRL1_SHIFTPHASE_MASK                         (0x1U << FSPI_CTRL1_SHIFTPHASE_SHIFT)                        /* 0x00000002 */
#define FSPI_CTRL1_IDLE_CYCLE_SHIFT                        (4U)
#define FSPI_CTRL1_IDLE_CYCLE_MASK                         (0xFU << FSPI_CTRL1_IDLE_CYCLE_SHIFT)                        /* 0x000000F0 */
#define FSPI_CTRL1_CMDB_SHIFT                              (8U)
#define FSPI_CTRL1_CMDB_MASK                               (0x3U << FSPI_CTRL1_CMDB_SHIFT)                              /* 0x00000300 */
#define FSPI_CTRL1_ADRB_SHIFT                              (10U)
#define FSPI_CTRL1_ADRB_MASK                               (0x3U << FSPI_CTRL1_ADRB_SHIFT)                              /* 0x00000C00 */
#define FSPI_CTRL1_DATB_SHIFT                              (12U)
#define FSPI_CTRL1_DATB_MASK                               (0x3U << FSPI_CTRL1_DATB_SHIFT)                              /* 0x00003000 */
/* AX1 */
#define FSPI_AX1_OFFSET                                    (0x214U)
#define FSPI_AX1_AX_SHIFT                                  (0U)
#define FSPI_AX1_AX_MASK                                   (0xFFU << FSPI_AX1_AX_SHIFT)                                 /* 0x000000FF */
/* ABIT1 */
#define FSPI_ABIT1_OFFSET                                  (0x218U)
#define FSPI_ABIT1_ABIT_SHIFT                              (0U)
#define FSPI_ABIT1_ABIT_MASK                               (0x1FU << FSPI_ABIT1_ABIT_SHIFT)                             /* 0x0000001F */
/* DLL_CTRL1 */
#define FSPI_DLL_CTRL1_OFFSET                              (0x23CU)
#define FSPI_DLL_CTRL1_SMP_DLL_CFG_SHIFT                   (0U)
#define FSPI_DLL_CTRL1_SMP_DLL_CFG_MASK                    (0x1FFU << FSPI_DLL_CTRL1_SMP_DLL_CFG_SHIFT)                 /* 0x000001FF */
#define FSPI_DLL_CTRL1_SCLK_SMP_SEL_SHIFT                  (15U)
#define FSPI_DLL_CTRL1_SCLK_SMP_SEL_MASK                   (0x1U << FSPI_DLL_CTRL1_SCLK_SMP_SEL_SHIFT)                  /* 0x00008000 */
/* XMMC_WCMD1 */
#define FSPI_XMMC_WCMD1_OFFSET                             (0x250U)
#define FSPI_XMMC_WCMD1_CMD_SHIFT                          (0U)
#define FSPI_XMMC_WCMD1_CMD_MASK                           (0xFFU << FSPI_XMMC_WCMD1_CMD_SHIFT)                         /* 0x000000FF */
#define FSPI_XMMC_WCMD1_DUMM_SHIFT                         (8U)
#define FSPI_XMMC_WCMD1_DUMM_MASK                          (0xFU << FSPI_XMMC_WCMD1_DUMM_SHIFT)                         /* 0x00000F00 */
#define FSPI_XMMC_WCMD1_CONT_SHIFT                         (13U)
#define FSPI_XMMC_WCMD1_CONT_MASK                          (0x1U << FSPI_XMMC_WCMD1_CONT_SHIFT)                         /* 0x00002000 */
#define FSPI_XMMC_WCMD1_ADDRB_SHIFT                        (14U)
#define FSPI_XMMC_WCMD1_ADDRB_MASK                         (0x3U << FSPI_XMMC_WCMD1_ADDRB_SHIFT)                        /* 0x0000C000 */
/* XMMC_RCMD1 */
#define FSPI_XMMC_RCMD1_OFFSET                             (0x254U)
#define FSPI_XMMC_RCMD1_CMD_SHIFT                          (0U)
#define FSPI_XMMC_RCMD1_CMD_MASK                           (0xFFU << FSPI_XMMC_RCMD1_CMD_SHIFT)                         /* 0x000000FF */
#define FSPI_XMMC_RCMD1_DUMM_SHIFT                         (8U)
#define FSPI_XMMC_RCMD1_DUMM_MASK                          (0xFU << FSPI_XMMC_RCMD1_DUMM_SHIFT)                         /* 0x00000F00 */
#define FSPI_XMMC_RCMD1_CONT_SHIFT                         (13U)
#define FSPI_XMMC_RCMD1_CONT_MASK                          (0x1U << FSPI_XMMC_RCMD1_CONT_SHIFT)                         /* 0x00002000 */
#define FSPI_XMMC_RCMD1_ADDRB_SHIFT                        (14U)
#define FSPI_XMMC_RCMD1_ADDRB_MASK                         (0x3U << FSPI_XMMC_RCMD1_ADDRB_SHIFT)                        /* 0x0000C000 */
/* DEVSIZE1 */
#define FSPI_DEVSIZE1_OFFSET                               (0x264U)
#define FSPI_DEVSIZE1_DSIZE_SHIFT                          (0U)
#define FSPI_DEVSIZE1_DSIZE_MASK                           (0x1FU << FSPI_DEVSIZE1_DSIZE_SHIFT)                         /* 0x0000001F */
/* TME1 */
#define FSPI_TME1_OFFSET                                   (0x268U)
#define FSPI_TME1_SCLK_INATM_EN_SHIFT                      (1U)
#define FSPI_TME1_SCLK_INATM_EN_MASK                       (0x1U << FSPI_TME1_SCLK_INATM_EN_SHIFT)                      /* 0x00000002 */
/******************************************SPI*******************************************/
/* CTRLR0 */
#define SPI_CTRLR0_OFFSET                                  (0x0U)
#define SPI_CTRLR0_DFS_SHIFT                               (0U)
#define SPI_CTRLR0_DFS_MASK                                (0x3U << SPI_CTRLR0_DFS_SHIFT)                               /* 0x00000003 */
#define SPI_CTRLR0_CFS_SHIFT                               (2U)
#define SPI_CTRLR0_CFS_MASK                                (0xFU << SPI_CTRLR0_CFS_SHIFT)                               /* 0x0000003C */
#define SPI_CTRLR0_SCPH_SHIFT                              (6U)
#define SPI_CTRLR0_SCPH_MASK                               (0x1U << SPI_CTRLR0_SCPH_SHIFT)                              /* 0x00000040 */
#define SPI_CTRLR0_SCPOL_SHIFT                             (7U)
#define SPI_CTRLR0_SCPOL_MASK                              (0x1U << SPI_CTRLR0_SCPOL_SHIFT)                             /* 0x00000080 */
#define SPI_CTRLR0_CSM_SHIFT                               (8U)
#define SPI_CTRLR0_CSM_MASK                                (0x3U << SPI_CTRLR0_CSM_SHIFT)                               /* 0x00000300 */
#define SPI_CTRLR0_SSD_SHIFT                               (10U)
#define SPI_CTRLR0_SSD_MASK                                (0x1U << SPI_CTRLR0_SSD_SHIFT)                               /* 0x00000400 */
#define SPI_CTRLR0_EM_SHIFT                                (11U)
#define SPI_CTRLR0_EM_MASK                                 (0x1U << SPI_CTRLR0_EM_SHIFT)                                /* 0x00000800 */
#define SPI_CTRLR0_FBM_SHIFT                               (12U)
#define SPI_CTRLR0_FBM_MASK                                (0x1U << SPI_CTRLR0_FBM_SHIFT)                               /* 0x00001000 */
#define SPI_CTRLR0_BHT_SHIFT                               (13U)
#define SPI_CTRLR0_BHT_MASK                                (0x1U << SPI_CTRLR0_BHT_SHIFT)                               /* 0x00002000 */
#define SPI_CTRLR0_RSD_SHIFT                               (14U)
#define SPI_CTRLR0_RSD_MASK                                (0x3U << SPI_CTRLR0_RSD_SHIFT)                               /* 0x0000C000 */
#define SPI_CTRLR0_FRF_SHIFT                               (16U)
#define SPI_CTRLR0_FRF_MASK                                (0x3U << SPI_CTRLR0_FRF_SHIFT)                               /* 0x00030000 */
#define SPI_CTRLR0_XFM_SHIFT                               (18U)
#define SPI_CTRLR0_XFM_MASK                                (0x3U << SPI_CTRLR0_XFM_SHIFT)                               /* 0x000C0000 */
#define SPI_CTRLR0_OPM_SHIFT                               (20U)
#define SPI_CTRLR0_OPM_MASK                                (0x1U << SPI_CTRLR0_OPM_SHIFT)                               /* 0x00100000 */
#define SPI_CTRLR0_MTM_SHIFT                               (21U)
#define SPI_CTRLR0_MTM_MASK                                (0x1U << SPI_CTRLR0_MTM_SHIFT)                               /* 0x00200000 */
#define SPI_CTRLR0_SOI_SHIFT                               (23U)
#define SPI_CTRLR0_SOI_MASK                                (0x3U << SPI_CTRLR0_SOI_SHIFT)                               /* 0x01800000 */
#define SPI_CTRLR0_LBK_SHIFT                               (25U)
#define SPI_CTRLR0_LBK_MASK                                (0x1U << SPI_CTRLR0_LBK_SHIFT)                               /* 0x02000000 */
/* CTRLR1 */
#define SPI_CTRLR1_OFFSET                                  (0x4U)
#define SPI_CTRLR1_NDM_SHIFT                               (0U)
#define SPI_CTRLR1_NDM_MASK                                (0xFFFFFFFFU << SPI_CTRLR1_NDM_SHIFT)                        /* 0xFFFFFFFF */
/* ENR */
#define SPI_ENR_OFFSET                                     (0x8U)
#define SPI_ENR_ENR_SHIFT                                  (0U)
#define SPI_ENR_ENR_MASK                                   (0x1U << SPI_ENR_ENR_SHIFT)                                  /* 0x00000001 */
/* SER */
#define SPI_SER_OFFSET                                     (0xCU)
#define SPI_SER_SER_SHIFT                                  (0U)
#define SPI_SER_SER_MASK                                   (0x3U << SPI_SER_SER_SHIFT)                                  /* 0x00000003 */
/* BAUDR */
#define SPI_BAUDR_OFFSET                                   (0x10U)
#define SPI_BAUDR_BAUDR_SHIFT                              (0U)
#define SPI_BAUDR_BAUDR_MASK                               (0xFFFFU << SPI_BAUDR_BAUDR_SHIFT)                           /* 0x0000FFFF */
/* TXFTLR */
#define SPI_TXFTLR_OFFSET                                  (0x14U)
#define SPI_TXFTLR_XFTLR_SHIFT                             (0U)
#define SPI_TXFTLR_XFTLR_MASK                              (0x3FU << SPI_TXFTLR_XFTLR_SHIFT)                            /* 0x0000003F */
/* RXFTLR */
#define SPI_RXFTLR_OFFSET                                  (0x18U)
#define SPI_RXFTLR_RXFTLR_SHIFT                            (0U)
#define SPI_RXFTLR_RXFTLR_MASK                             (0x3FU << SPI_RXFTLR_RXFTLR_SHIFT)                           /* 0x0000003F */
/* TXFLR */
#define SPI_TXFLR_OFFSET                                   (0x1CU)
#define SPI_TXFLR                                          (0x0U)
#define SPI_TXFLR_TXFLR_SHIFT                              (0U)
#define SPI_TXFLR_TXFLR_MASK                               (0x7FU << SPI_TXFLR_TXFLR_SHIFT)                             /* 0x0000007F */
/* RXFLR */
#define SPI_RXFLR_OFFSET                                   (0x20U)
#define SPI_RXFLR                                          (0x0U)
#define SPI_RXFLR_RXFLR_SHIFT                              (0U)
#define SPI_RXFLR_RXFLR_MASK                               (0x7FU << SPI_RXFLR_RXFLR_SHIFT)                             /* 0x0000007F */
/* SR */
#define SPI_SR_OFFSET                                      (0x24U)
#define SPI_SR                                             (0x4CU)
#define SPI_SR_BSF_SHIFT                                   (0U)
#define SPI_SR_BSF_MASK                                    (0x1U << SPI_SR_BSF_SHIFT)                                   /* 0x00000001 */
#define SPI_SR_TFF_SHIFT                                   (1U)
#define SPI_SR_TFF_MASK                                    (0x1U << SPI_SR_TFF_SHIFT)                                   /* 0x00000002 */
#define SPI_SR_TFE_SHIFT                                   (2U)
#define SPI_SR_TFE_MASK                                    (0x1U << SPI_SR_TFE_SHIFT)                                   /* 0x00000004 */
#define SPI_SR_RFE_SHIFT                                   (3U)
#define SPI_SR_RFE_MASK                                    (0x1U << SPI_SR_RFE_SHIFT)                                   /* 0x00000008 */
#define SPI_SR_RFF_SHIFT                                   (4U)
#define SPI_SR_RFF_MASK                                    (0x1U << SPI_SR_RFF_SHIFT)                                   /* 0x00000010 */
#define SPI_SR_STB_SHIFT                                   (5U)
#define SPI_SR_STB_MASK                                    (0x1U << SPI_SR_STB_SHIFT)                                   /* 0x00000020 */
#define SPI_SR_SSI_SHIFT                                   (6U)
#define SPI_SR_SSI_MASK                                    (0x1U << SPI_SR_SSI_SHIFT)                                   /* 0x00000040 */
/* IPR */
#define SPI_IPR_OFFSET                                     (0x28U)
#define SPI_IPR_IPR_SHIFT                                  (0U)
#define SPI_IPR_IPR_MASK                                   (0x1U << SPI_IPR_IPR_SHIFT)                                  /* 0x00000001 */
/* IMR */
#define SPI_IMR_OFFSET                                     (0x2CU)
#define SPI_IMR_TFEIM_SHIFT                                (0U)
#define SPI_IMR_TFEIM_MASK                                 (0x1U << SPI_IMR_TFEIM_SHIFT)                                /* 0x00000001 */
#define SPI_IMR_TFOIM_SHIFT                                (1U)
#define SPI_IMR_TFOIM_MASK                                 (0x1U << SPI_IMR_TFOIM_SHIFT)                                /* 0x00000002 */
#define SPI_IMR_RFUIM_SHIFT                                (2U)
#define SPI_IMR_RFUIM_MASK                                 (0x1U << SPI_IMR_RFUIM_SHIFT)                                /* 0x00000004 */
#define SPI_IMR_RFOIM_SHIFT                                (3U)
#define SPI_IMR_RFOIM_MASK                                 (0x1U << SPI_IMR_RFOIM_SHIFT)                                /* 0x00000008 */
#define SPI_IMR_RFFIM_SHIFT                                (4U)
#define SPI_IMR_RFFIM_MASK                                 (0x1U << SPI_IMR_RFFIM_SHIFT)                                /* 0x00000010 */
#define SPI_IMR_TOIM_SHIFT                                 (5U)
#define SPI_IMR_TOIM_MASK                                  (0x1U << SPI_IMR_TOIM_SHIFT)                                 /* 0x00000020 */
#define SPI_IMR_SSPIM_SHIFT                                (6U)
#define SPI_IMR_SSPIM_MASK                                 (0x1U << SPI_IMR_SSPIM_SHIFT)                                /* 0x00000040 */
#define SPI_IMR_TXFIM_SHIFT                                (7U)
#define SPI_IMR_TXFIM_MASK                                 (0x1U << SPI_IMR_TXFIM_SHIFT)                                /* 0x00000080 */
/* ISR */
#define SPI_ISR_OFFSET                                     (0x30U)
#define SPI_ISR_TFEIS_SHIFT                                (0U)
#define SPI_ISR_TFEIS_MASK                                 (0x1U << SPI_ISR_TFEIS_SHIFT)                                /* 0x00000001 */
#define SPI_ISR_TFOIS_SHIFT                                (1U)
#define SPI_ISR_TFOIS_MASK                                 (0x1U << SPI_ISR_TFOIS_SHIFT)                                /* 0x00000002 */
#define SPI_ISR_RFUIS_SHIFT                                (2U)
#define SPI_ISR_RFUIS_MASK                                 (0x1U << SPI_ISR_RFUIS_SHIFT)                                /* 0x00000004 */
#define SPI_ISR_RFOIS_SHIFT                                (3U)
#define SPI_ISR_RFOIS_MASK                                 (0x1U << SPI_ISR_RFOIS_SHIFT)                                /* 0x00000008 */
#define SPI_ISR_RFFIS_SHIFT                                (4U)
#define SPI_ISR_RFFIS_MASK                                 (0x1U << SPI_ISR_RFFIS_SHIFT)                                /* 0x00000010 */
#define SPI_ISR_TOIS_SHIFT                                 (5U)
#define SPI_ISR_TOIS_MASK                                  (0x1U << SPI_ISR_TOIS_SHIFT)                                 /* 0x00000020 */
#define SPI_ISR_SSPIS_SHIFT                                (6U)
#define SPI_ISR_SSPIS_MASK                                 (0x1U << SPI_ISR_SSPIS_SHIFT)                                /* 0x00000040 */
#define SPI_ISR_TXFIS_SHIFT                                (7U)
#define SPI_ISR_TXFIS_MASK                                 (0x1U << SPI_ISR_TXFIS_SHIFT)                                /* 0x00000080 */
/* RISR */
#define SPI_RISR_OFFSET                                    (0x34U)
#define SPI_RISR_TFERIS_SHIFT                              (0U)
#define SPI_RISR_TFERIS_MASK                               (0x1U << SPI_RISR_TFERIS_SHIFT)                              /* 0x00000001 */
#define SPI_RISR_TFORIS_SHIFT                              (1U)
#define SPI_RISR_TFORIS_MASK                               (0x1U << SPI_RISR_TFORIS_SHIFT)                              /* 0x00000002 */
#define SPI_RISR_RFURIS_SHIFT                              (2U)
#define SPI_RISR_RFURIS_MASK                               (0x1U << SPI_RISR_RFURIS_SHIFT)                              /* 0x00000004 */
#define SPI_RISR_RFORIS_SHIFT                              (3U)
#define SPI_RISR_RFORIS_MASK                               (0x1U << SPI_RISR_RFORIS_SHIFT)                              /* 0x00000008 */
#define SPI_RISR_RFFRIS_SHIFT                              (4U)
#define SPI_RISR_RFFRIS_MASK                               (0x1U << SPI_RISR_RFFRIS_SHIFT)                              /* 0x00000010 */
#define SPI_RISR_TORIS_SHIFT                               (5U)
#define SPI_RISR_TORIS_MASK                                (0x1U << SPI_RISR_TORIS_SHIFT)                               /* 0x00000020 */
#define SPI_RISR_SSPRIS_SHIFT                              (6U)
#define SPI_RISR_SSPRIS_MASK                               (0x1U << SPI_RISR_SSPRIS_SHIFT)                              /* 0x00000040 */
#define SPI_RISR_TXFRIS_SHIFT                              (7U)
#define SPI_RISR_TXFRIS_MASK                               (0x1U << SPI_RISR_TXFRIS_SHIFT)                              /* 0x00000080 */
/* ICR */
#define SPI_ICR_OFFSET                                     (0x38U)
#define SPI_ICR_CCI_SHIFT                                  (0U)
#define SPI_ICR_CCI_MASK                                   (0x1U << SPI_ICR_CCI_SHIFT)                                  /* 0x00000001 */
#define SPI_ICR_CRFUI_SHIFT                                (1U)
#define SPI_ICR_CRFUI_MASK                                 (0x1U << SPI_ICR_CRFUI_SHIFT)                                /* 0x00000002 */
#define SPI_ICR_CRFOI_SHIFT                                (2U)
#define SPI_ICR_CRFOI_MASK                                 (0x1U << SPI_ICR_CRFOI_SHIFT)                                /* 0x00000004 */
#define SPI_ICR_CTFOI_SHIFT                                (3U)
#define SPI_ICR_CTFOI_MASK                                 (0x1U << SPI_ICR_CTFOI_SHIFT)                                /* 0x00000008 */
#define SPI_ICR_CTOI_SHIFT                                 (4U)
#define SPI_ICR_CTOI_MASK                                  (0x1U << SPI_ICR_CTOI_SHIFT)                                 /* 0x00000010 */
#define SPI_ICR_CSSPI_SHIFT                                (5U)
#define SPI_ICR_CSSPI_MASK                                 (0x1U << SPI_ICR_CSSPI_SHIFT)                                /* 0x00000020 */
#define SPI_ICR_CTXFI_SHIFT                                (6U)
#define SPI_ICR_CTXFI_MASK                                 (0x1U << SPI_ICR_CTXFI_SHIFT)                                /* 0x00000040 */
/* DMACR */
#define SPI_DMACR_OFFSET                                   (0x3CU)
#define SPI_DMACR_RDE_SHIFT                                (0U)
#define SPI_DMACR_RDE_MASK                                 (0x1U << SPI_DMACR_RDE_SHIFT)                                /* 0x00000001 */
#define SPI_DMACR_TDE_SHIFT                                (1U)
#define SPI_DMACR_TDE_MASK                                 (0x1U << SPI_DMACR_TDE_SHIFT)                                /* 0x00000002 */
/* DMATDLR */
#define SPI_DMATDLR_OFFSET                                 (0x40U)
#define SPI_DMATDLR_TDL_SHIFT                              (0U)
#define SPI_DMATDLR_TDL_MASK                               (0x3FU << SPI_DMATDLR_TDL_SHIFT)                             /* 0x0000003F */
/* DMARDLR */
#define SPI_DMARDLR_OFFSET                                 (0x44U)
#define SPI_DMARDLR_RDL_SHIFT                              (0U)
#define SPI_DMARDLR_RDL_MASK                               (0x3FU << SPI_DMARDLR_RDL_SHIFT)                             /* 0x0000003F */
/* TIMEOUT */
#define SPI_TIMEOUT_OFFSET                                 (0x4CU)
#define SPI_TIMEOUT_TOV_SHIFT                              (0U)
#define SPI_TIMEOUT_TOV_MASK                               (0xFFFFU << SPI_TIMEOUT_TOV_SHIFT)                           /* 0x0000FFFF */
#define SPI_TIMEOUT_TOE_SHIFT                              (16U)
#define SPI_TIMEOUT_TOE_MASK                               (0x1U << SPI_TIMEOUT_TOE_SHIFT)                              /* 0x00010000 */
/* BYPASS */
#define SPI_BYPASS_OFFSET                                  (0x50U)
#define SPI_BYPASS_BYEN_SHIFT                              (0U)
#define SPI_BYPASS_BYEN_MASK                               (0x1U << SPI_BYPASS_BYEN_SHIFT)                              /* 0x00000001 */
#define SPI_BYPASS_FBM_SHIFT                               (1U)
#define SPI_BYPASS_FBM_MASK                                (0x1U << SPI_BYPASS_FBM_SHIFT)                               /* 0x00000002 */
#define SPI_BYPASS_END_SHIFT                               (2U)
#define SPI_BYPASS_END_MASK                                (0x1U << SPI_BYPASS_END_SHIFT)                               /* 0x00000004 */
#define SPI_BYPASS_RXCP_SHIFT                              (3U)
#define SPI_BYPASS_RXCP_MASK                               (0x1U << SPI_BYPASS_RXCP_SHIFT)                              /* 0x00000008 */
#define SPI_BYPASS_TXCP_SHIFT                              (4U)
#define SPI_BYPASS_TXCP_MASK                               (0x1U << SPI_BYPASS_TXCP_SHIFT)                              /* 0x00000010 */
/* TXDR */
#define SPI_TXDR_OFFSET                                    (0x400U)
#define SPI_TXDR_TXDR_SHIFT                                (0U)
#define SPI_TXDR_TXDR_MASK                                 (0xFFFFU << SPI_TXDR_TXDR_SHIFT)                             /* 0x0000FFFF */
/* RXDR */
#define SPI_RXDR_OFFSET                                    (0x800U)
#define SPI_RXDR                                           (0x0U)
#define SPI_RXDR_RXDR_SHIFT                                (0U)
#define SPI_RXDR_RXDR_MASK                                 (0xFFFFU << SPI_RXDR_RXDR_SHIFT)                             /* 0x0000FFFF */
/******************************************MBOX******************************************/
/* A2B_INTEN */
#define MBOX_A2B_INTEN_OFFSET                              (0x0U)
#define MBOX_A2B_INTEN_INT0_SHIFT                          (0U)
#define MBOX_A2B_INTEN_INT0_MASK                           (0x1U << MBOX_A2B_INTEN_INT0_SHIFT)                          /* 0x00000001 */
#define MBOX_A2B_INTEN_INT1_SHIFT                          (1U)
#define MBOX_A2B_INTEN_INT1_MASK                           (0x1U << MBOX_A2B_INTEN_INT1_SHIFT)                          /* 0x00000002 */
#define MBOX_A2B_INTEN_INT2_SHIFT                          (2U)
#define MBOX_A2B_INTEN_INT2_MASK                           (0x1U << MBOX_A2B_INTEN_INT2_SHIFT)                          /* 0x00000004 */
#define MBOX_A2B_INTEN_INT3_SHIFT                          (3U)
#define MBOX_A2B_INTEN_INT3_MASK                           (0x1U << MBOX_A2B_INTEN_INT3_SHIFT)                          /* 0x00000008 */
/* A2B_STATUS */
#define MBOX_A2B_STATUS_OFFSET                             (0x4U)
#define MBOX_A2B_STATUS_INT0_SHIFT                         (0U)
#define MBOX_A2B_STATUS_INT0_MASK                          (0x1U << MBOX_A2B_STATUS_INT0_SHIFT)                         /* 0x00000001 */
#define MBOX_A2B_STATUS_INT1_SHIFT                         (1U)
#define MBOX_A2B_STATUS_INT1_MASK                          (0x1U << MBOX_A2B_STATUS_INT1_SHIFT)                         /* 0x00000002 */
#define MBOX_A2B_STATUS_INT2_SHIFT                         (2U)
#define MBOX_A2B_STATUS_INT2_MASK                          (0x1U << MBOX_A2B_STATUS_INT2_SHIFT)                         /* 0x00000004 */
#define MBOX_A2B_STATUS_INT3_SHIFT                         (3U)
#define MBOX_A2B_STATUS_INT3_MASK                          (0x1U << MBOX_A2B_STATUS_INT3_SHIFT)                         /* 0x00000008 */
/* A2B_CMD_0 */
#define MBOX_A2B_CMD_0_OFFSET                              (0x8U)
#define MBOX_A2B_CMD_0_COMMAND_SHIFT                       (0U)
#define MBOX_A2B_CMD_0_COMMAND_MASK                        (0xFFFFFFFFU << MBOX_A2B_CMD_0_COMMAND_SHIFT)                /* 0xFFFFFFFF */
/* A2B_DAT_0 */
#define MBOX_A2B_DAT_0_OFFSET                              (0xCU)
#define MBOX_A2B_DAT_0_DATA_SHIFT                          (0U)
#define MBOX_A2B_DAT_0_DATA_MASK                           (0xFFFFFFFFU << MBOX_A2B_DAT_0_DATA_SHIFT)                   /* 0xFFFFFFFF */
/* A2B_CMD_1 */
#define MBOX_A2B_CMD_1_OFFSET                              (0x10U)
#define MBOX_A2B_CMD_1_COMMAND_SHIFT                       (0U)
#define MBOX_A2B_CMD_1_COMMAND_MASK                        (0xFFFFFFFFU << MBOX_A2B_CMD_1_COMMAND_SHIFT)                /* 0xFFFFFFFF */
/* A2B_DAT_1 */
#define MBOX_A2B_DAT_1_OFFSET                              (0x14U)
#define MBOX_A2B_DAT_1_DATA_SHIFT                          (0U)
#define MBOX_A2B_DAT_1_DATA_MASK                           (0xFFFFFFFFU << MBOX_A2B_DAT_1_DATA_SHIFT)                   /* 0xFFFFFFFF */
/* A2B_CMD_2 */
#define MBOX_A2B_CMD_2_OFFSET                              (0x18U)
#define MBOX_A2B_CMD_2_COMMAND_SHIFT                       (0U)
#define MBOX_A2B_CMD_2_COMMAND_MASK                        (0xFFFFFFFFU << MBOX_A2B_CMD_2_COMMAND_SHIFT)                /* 0xFFFFFFFF */
/* A2B_DAT_2 */
#define MBOX_A2B_DAT_2_OFFSET                              (0x1CU)
#define MBOX_A2B_DAT_2_DATA_SHIFT                          (0U)
#define MBOX_A2B_DAT_2_DATA_MASK                           (0xFFFFFFFFU << MBOX_A2B_DAT_2_DATA_SHIFT)                   /* 0xFFFFFFFF */
/* A2B_CMD_3 */
#define MBOX_A2B_CMD_3_OFFSET                              (0x20U)
#define MBOX_A2B_CMD_3_COMMAND_SHIFT                       (0U)
#define MBOX_A2B_CMD_3_COMMAND_MASK                        (0xFFFFFFFFU << MBOX_A2B_CMD_3_COMMAND_SHIFT)                /* 0xFFFFFFFF */
/* A2B_DAT_3 */
#define MBOX_A2B_DAT_3_OFFSET                              (0x24U)
#define MBOX_A2B_DAT_3_DATA_SHIFT                          (0U)
#define MBOX_A2B_DAT_3_DATA_MASK                           (0xFFFFFFFFU << MBOX_A2B_DAT_3_DATA_SHIFT)                   /* 0xFFFFFFFF */
/* B2A_INTEN */
#define MBOX_B2A_INTEN_OFFSET                              (0x28U)
#define MBOX_B2A_INTEN_INT0_SHIFT                          (0U)
#define MBOX_B2A_INTEN_INT0_MASK                           (0x1U << MBOX_B2A_INTEN_INT0_SHIFT)                          /* 0x00000001 */
#define MBOX_B2A_INTEN_INT1_SHIFT                          (1U)
#define MBOX_B2A_INTEN_INT1_MASK                           (0x1U << MBOX_B2A_INTEN_INT1_SHIFT)                          /* 0x00000002 */
#define MBOX_B2A_INTEN_INT2_SHIFT                          (2U)
#define MBOX_B2A_INTEN_INT2_MASK                           (0x1U << MBOX_B2A_INTEN_INT2_SHIFT)                          /* 0x00000004 */
#define MBOX_B2A_INTEN_INT3_SHIFT                          (3U)
#define MBOX_B2A_INTEN_INT3_MASK                           (0x1U << MBOX_B2A_INTEN_INT3_SHIFT)                          /* 0x00000008 */
/* B2A_STATUS */
#define MBOX_B2A_STATUS_OFFSET                             (0x2CU)
#define MBOX_B2A_STATUS_INT0_SHIFT                         (0U)
#define MBOX_B2A_STATUS_INT0_MASK                          (0x1U << MBOX_B2A_STATUS_INT0_SHIFT)                         /* 0x00000001 */
#define MBOX_B2A_STATUS_INT1_SHIFT                         (1U)
#define MBOX_B2A_STATUS_INT1_MASK                          (0x1U << MBOX_B2A_STATUS_INT1_SHIFT)                         /* 0x00000002 */
#define MBOX_B2A_STATUS_INT2_SHIFT                         (2U)
#define MBOX_B2A_STATUS_INT2_MASK                          (0x1U << MBOX_B2A_STATUS_INT2_SHIFT)                         /* 0x00000004 */
#define MBOX_B2A_STATUS_INT3_SHIFT                         (3U)
#define MBOX_B2A_STATUS_INT3_MASK                          (0x1U << MBOX_B2A_STATUS_INT3_SHIFT)                         /* 0x00000008 */
/* B2A_CMD_0 */
#define MBOX_B2A_CMD_0_OFFSET                              (0x30U)
#define MBOX_B2A_CMD_0_COMMAND_SHIFT                       (0U)
#define MBOX_B2A_CMD_0_COMMAND_MASK                        (0xFFFFFFFFU << MBOX_B2A_CMD_0_COMMAND_SHIFT)                /* 0xFFFFFFFF */
/* B2A_DAT_0 */
#define MBOX_B2A_DAT_0_OFFSET                              (0x34U)
#define MBOX_B2A_DAT_0_DATA_SHIFT                          (0U)
#define MBOX_B2A_DAT_0_DATA_MASK                           (0xFFFFFFFFU << MBOX_B2A_DAT_0_DATA_SHIFT)                   /* 0xFFFFFFFF */
/* B2A_CMD_1 */
#define MBOX_B2A_CMD_1_OFFSET                              (0x38U)
#define MBOX_B2A_CMD_1_COMMAND_SHIFT                       (0U)
#define MBOX_B2A_CMD_1_COMMAND_MASK                        (0xFFFFFFFFU << MBOX_B2A_CMD_1_COMMAND_SHIFT)                /* 0xFFFFFFFF */
/* B2A_DAT_1 */
#define MBOX_B2A_DAT_1_OFFSET                              (0x3CU)
#define MBOX_B2A_DAT_1_DATA_SHIFT                          (0U)
#define MBOX_B2A_DAT_1_DATA_MASK                           (0xFFFFFFFFU << MBOX_B2A_DAT_1_DATA_SHIFT)                   /* 0xFFFFFFFF */
/* B2A_CMD_2 */
#define MBOX_B2A_CMD_2_OFFSET                              (0x40U)
#define MBOX_B2A_CMD_2_COMMAND_SHIFT                       (0U)
#define MBOX_B2A_CMD_2_COMMAND_MASK                        (0xFFFFFFFFU << MBOX_B2A_CMD_2_COMMAND_SHIFT)                /* 0xFFFFFFFF */
/* B2A_DAT_2 */
#define MBOX_B2A_DAT_2_OFFSET                              (0x44U)
#define MBOX_B2A_DAT_2_DATA_SHIFT                          (0U)
#define MBOX_B2A_DAT_2_DATA_MASK                           (0xFFFFFFFFU << MBOX_B2A_DAT_2_DATA_SHIFT)                   /* 0xFFFFFFFF */
/* B2A_CMD_3 */
#define MBOX_B2A_CMD_3_OFFSET                              (0x48U)
#define MBOX_B2A_CMD_3_COMMAND_SHIFT                       (0U)
#define MBOX_B2A_CMD_3_COMMAND_MASK                        (0xFFFFFFFFU << MBOX_B2A_CMD_3_COMMAND_SHIFT)                /* 0xFFFFFFFF */
/* B2A_DAT_3 */
#define MBOX_B2A_DAT_3_OFFSET                              (0x4CU)
#define MBOX_B2A_DAT_3_DATA_SHIFT                          (0U)
#define MBOX_B2A_DAT_3_DATA_MASK                           (0xFFFFFFFFU << MBOX_B2A_DAT_3_DATA_SHIFT)                   /* 0xFFFFFFFF */
/* ATOMIC_LOCK_00 */
#define MBOX_ATOMIC_LOCK_00_OFFSET                         (0x100U)
#define MBOX_ATOMIC_LOCK_00_ATOMIC_LOCK_00_SHIFT           (0U)
#define MBOX_ATOMIC_LOCK_00_ATOMIC_LOCK_00_MASK            (0x1U << MBOX_ATOMIC_LOCK_00_ATOMIC_LOCK_00_SHIFT)           /* 0x00000001 */
/* ATOMIC_LOCK_01 */
#define MBOX_ATOMIC_LOCK_01_OFFSET                         (0x104U)
#define MBOX_ATOMIC_LOCK_01_ATOMIC_LOCK_01_SHIFT           (0U)
#define MBOX_ATOMIC_LOCK_01_ATOMIC_LOCK_01_MASK            (0x1U << MBOX_ATOMIC_LOCK_01_ATOMIC_LOCK_01_SHIFT)           /* 0x00000001 */
/* ATOMIC_LOCK_02 */
#define MBOX_ATOMIC_LOCK_02_OFFSET                         (0x108U)
#define MBOX_ATOMIC_LOCK_02_ATOMIC_LOCK_02_SHIFT           (0U)
#define MBOX_ATOMIC_LOCK_02_ATOMIC_LOCK_02_MASK            (0x1U << MBOX_ATOMIC_LOCK_02_ATOMIC_LOCK_02_SHIFT)           /* 0x00000001 */
/* ATOMIC_LOCK_03 */
#define MBOX_ATOMIC_LOCK_03_OFFSET                         (0x10CU)
#define MBOX_ATOMIC_LOCK_03_ATOMIC_LOCK_03_SHIFT           (0U)
#define MBOX_ATOMIC_LOCK_03_ATOMIC_LOCK_03_MASK            (0x1U << MBOX_ATOMIC_LOCK_03_ATOMIC_LOCK_03_SHIFT)           /* 0x00000001 */
/* ATOMIC_LOCK_04 */
#define MBOX_ATOMIC_LOCK_04_OFFSET                         (0x110U)
#define MBOX_ATOMIC_LOCK_04_ATOMIC_LOCK_04_SHIFT           (0U)
#define MBOX_ATOMIC_LOCK_04_ATOMIC_LOCK_04_MASK            (0x1U << MBOX_ATOMIC_LOCK_04_ATOMIC_LOCK_04_SHIFT)           /* 0x00000001 */
/* ATOMIC_LOCK_05 */
#define MBOX_ATOMIC_LOCK_05_OFFSET                         (0x114U)
#define MBOX_ATOMIC_LOCK_05_ATOMIC_LOCK_05_SHIFT           (0U)
#define MBOX_ATOMIC_LOCK_05_ATOMIC_LOCK_05_MASK            (0x1U << MBOX_ATOMIC_LOCK_05_ATOMIC_LOCK_05_SHIFT)           /* 0x00000001 */
/* ATOMIC_LOCK_06 */
#define MBOX_ATOMIC_LOCK_06_OFFSET                         (0x118U)
#define MBOX_ATOMIC_LOCK_06_ATOMIC_LOCK_06_SHIFT           (0U)
#define MBOX_ATOMIC_LOCK_06_ATOMIC_LOCK_06_MASK            (0x1U << MBOX_ATOMIC_LOCK_06_ATOMIC_LOCK_06_SHIFT)           /* 0x00000001 */
/* ATOMIC_LOCK_07 */
#define MBOX_ATOMIC_LOCK_07_OFFSET                         (0x11CU)
#define MBOX_ATOMIC_LOCK_07_ATOMIC_LOCK_07_SHIFT           (0U)
#define MBOX_ATOMIC_LOCK_07_ATOMIC_LOCK_07_MASK            (0x1U << MBOX_ATOMIC_LOCK_07_ATOMIC_LOCK_07_SHIFT)           /* 0x00000001 */
/* ATOMIC_LOCK_08 */
#define MBOX_ATOMIC_LOCK_08_OFFSET                         (0x120U)
#define MBOX_ATOMIC_LOCK_08_ATOMIC_LOCK_08_SHIFT           (0U)
#define MBOX_ATOMIC_LOCK_08_ATOMIC_LOCK_08_MASK            (0x1U << MBOX_ATOMIC_LOCK_08_ATOMIC_LOCK_08_SHIFT)           /* 0x00000001 */
/* ATOMIC_LOCK_09 */
#define MBOX_ATOMIC_LOCK_09_OFFSET                         (0x124U)
#define MBOX_ATOMIC_LOCK_09_ATOMIC_LOCK_09_SHIFT           (0U)
#define MBOX_ATOMIC_LOCK_09_ATOMIC_LOCK_09_MASK            (0x1U << MBOX_ATOMIC_LOCK_09_ATOMIC_LOCK_09_SHIFT)           /* 0x00000001 */
/* ATOMIC_LOCK_10 */
#define MBOX_ATOMIC_LOCK_10_OFFSET                         (0x128U)
#define MBOX_ATOMIC_LOCK_10_ATOMIC_LOCK_10_SHIFT           (0U)
#define MBOX_ATOMIC_LOCK_10_ATOMIC_LOCK_10_MASK            (0x1U << MBOX_ATOMIC_LOCK_10_ATOMIC_LOCK_10_SHIFT)           /* 0x00000001 */
/* ATOMIC_LOCK_11 */
#define MBOX_ATOMIC_LOCK_11_OFFSET                         (0x12CU)
#define MBOX_ATOMIC_LOCK_11_ATOMIC_LOCK_11_SHIFT           (0U)
#define MBOX_ATOMIC_LOCK_11_ATOMIC_LOCK_11_MASK            (0x1U << MBOX_ATOMIC_LOCK_11_ATOMIC_LOCK_11_SHIFT)           /* 0x00000001 */
/* ATOMIC_LOCK_12 */
#define MBOX_ATOMIC_LOCK_12_OFFSET                         (0x130U)
#define MBOX_ATOMIC_LOCK_12_ATOMIC_LOCK_12_SHIFT           (0U)
#define MBOX_ATOMIC_LOCK_12_ATOMIC_LOCK_12_MASK            (0x1U << MBOX_ATOMIC_LOCK_12_ATOMIC_LOCK_12_SHIFT)           /* 0x00000001 */
/* ATOMIC_LOCK_13 */
#define MBOX_ATOMIC_LOCK_13_OFFSET                         (0x134U)
#define MBOX_ATOMIC_LOCK_13_ATOMIC_LOCK_13_SHIFT           (0U)
#define MBOX_ATOMIC_LOCK_13_ATOMIC_LOCK_13_MASK            (0x1U << MBOX_ATOMIC_LOCK_13_ATOMIC_LOCK_13_SHIFT)           /* 0x00000001 */
/* ATOMIC_LOCK_14 */
#define MBOX_ATOMIC_LOCK_14_OFFSET                         (0x138U)
#define MBOX_ATOMIC_LOCK_14_ATOMIC_LOCK_14_SHIFT           (0U)
#define MBOX_ATOMIC_LOCK_14_ATOMIC_LOCK_14_MASK            (0x1U << MBOX_ATOMIC_LOCK_14_ATOMIC_LOCK_14_SHIFT)           /* 0x00000001 */
/* ATOMIC_LOCK_15 */
#define MBOX_ATOMIC_LOCK_15_OFFSET                         (0x13CU)
#define MBOX_ATOMIC_LOCK_15_ATOMIC_LOCK_15_SHIFT           (0U)
#define MBOX_ATOMIC_LOCK_15_ATOMIC_LOCK_15_MASK            (0x1U << MBOX_ATOMIC_LOCK_15_ATOMIC_LOCK_15_SHIFT)           /* 0x00000001 */
/* ATOMIC_LOCK_16 */
#define MBOX_ATOMIC_LOCK_16_OFFSET                         (0x140U)
#define MBOX_ATOMIC_LOCK_16_ATOMIC_LOCK_16_SHIFT           (0U)
#define MBOX_ATOMIC_LOCK_16_ATOMIC_LOCK_16_MASK            (0x1U << MBOX_ATOMIC_LOCK_16_ATOMIC_LOCK_16_SHIFT)           /* 0x00000001 */
/* ATOMIC_LOCK_17 */
#define MBOX_ATOMIC_LOCK_17_OFFSET                         (0x144U)
#define MBOX_ATOMIC_LOCK_17_ATOMIC_LOCK_17_SHIFT           (0U)
#define MBOX_ATOMIC_LOCK_17_ATOMIC_LOCK_17_MASK            (0x1U << MBOX_ATOMIC_LOCK_17_ATOMIC_LOCK_17_SHIFT)           /* 0x00000001 */
/* ATOMIC_LOCK_18 */
#define MBOX_ATOMIC_LOCK_18_OFFSET                         (0x148U)
#define MBOX_ATOMIC_LOCK_18_ATOMIC_LOCK_18_SHIFT           (0U)
#define MBOX_ATOMIC_LOCK_18_ATOMIC_LOCK_18_MASK            (0x1U << MBOX_ATOMIC_LOCK_18_ATOMIC_LOCK_18_SHIFT)           /* 0x00000001 */
/* ATOMIC_LOCK_19 */
#define MBOX_ATOMIC_LOCK_19_OFFSET                         (0x14CU)
#define MBOX_ATOMIC_LOCK_19_ATOMIC_LOCK_19_SHIFT           (0U)
#define MBOX_ATOMIC_LOCK_19_ATOMIC_LOCK_19_MASK            (0x1U << MBOX_ATOMIC_LOCK_19_ATOMIC_LOCK_19_SHIFT)           /* 0x00000001 */
/* ATOMIC_LOCK_20 */
#define MBOX_ATOMIC_LOCK_20_OFFSET                         (0x150U)
#define MBOX_ATOMIC_LOCK_20_ATOMIC_LOCK_20_SHIFT           (0U)
#define MBOX_ATOMIC_LOCK_20_ATOMIC_LOCK_20_MASK            (0x1U << MBOX_ATOMIC_LOCK_20_ATOMIC_LOCK_20_SHIFT)           /* 0x00000001 */
/* ATOMIC_LOCK_21 */
#define MBOX_ATOMIC_LOCK_21_OFFSET                         (0x154U)
#define MBOX_ATOMIC_LOCK_21_ATOMIC_LOCK_21_SHIFT           (0U)
#define MBOX_ATOMIC_LOCK_21_ATOMIC_LOCK_21_MASK            (0x1U << MBOX_ATOMIC_LOCK_21_ATOMIC_LOCK_21_SHIFT)           /* 0x00000001 */
/* ATOMIC_LOCK_22 */
#define MBOX_ATOMIC_LOCK_22_OFFSET                         (0x158U)
#define MBOX_ATOMIC_LOCK_22_ATOMIC_LOCK_22_SHIFT           (0U)
#define MBOX_ATOMIC_LOCK_22_ATOMIC_LOCK_22_MASK            (0x1U << MBOX_ATOMIC_LOCK_22_ATOMIC_LOCK_22_SHIFT)           /* 0x00000001 */
/* ATOMIC_LOCK_23 */
#define MBOX_ATOMIC_LOCK_23_OFFSET                         (0x15CU)
#define MBOX_ATOMIC_LOCK_23_ATOMIC_LOCK_23_SHIFT           (0U)
#define MBOX_ATOMIC_LOCK_23_ATOMIC_LOCK_23_MASK            (0x1U << MBOX_ATOMIC_LOCK_23_ATOMIC_LOCK_23_SHIFT)           /* 0x00000001 */
/* ATOMIC_LOCK_24 */
#define MBOX_ATOMIC_LOCK_24_OFFSET                         (0x160U)
#define MBOX_ATOMIC_LOCK_24_ATOMIC_LOCK_24_SHIFT           (0U)
#define MBOX_ATOMIC_LOCK_24_ATOMIC_LOCK_24_MASK            (0x1U << MBOX_ATOMIC_LOCK_24_ATOMIC_LOCK_24_SHIFT)           /* 0x00000001 */
/* ATOMIC_LOCK_25 */
#define MBOX_ATOMIC_LOCK_25_OFFSET                         (0x164U)
#define MBOX_ATOMIC_LOCK_25_ATOMIC_LOCK_25_SHIFT           (0U)
#define MBOX_ATOMIC_LOCK_25_ATOMIC_LOCK_25_MASK            (0x1U << MBOX_ATOMIC_LOCK_25_ATOMIC_LOCK_25_SHIFT)           /* 0x00000001 */
/* ATOMIC_LOCK_26 */
#define MBOX_ATOMIC_LOCK_26_OFFSET                         (0x168U)
#define MBOX_ATOMIC_LOCK_26_ATOMIC_LOCK_26_SHIFT           (0U)
#define MBOX_ATOMIC_LOCK_26_ATOMIC_LOCK_26_MASK            (0x1U << MBOX_ATOMIC_LOCK_26_ATOMIC_LOCK_26_SHIFT)           /* 0x00000001 */
/* ATOMIC_LOCK_27 */
#define MBOX_ATOMIC_LOCK_27_OFFSET                         (0x16CU)
#define MBOX_ATOMIC_LOCK_27_ATOMIC_LOCK_27_SHIFT           (0U)
#define MBOX_ATOMIC_LOCK_27_ATOMIC_LOCK_27_MASK            (0x1U << MBOX_ATOMIC_LOCK_27_ATOMIC_LOCK_27_SHIFT)           /* 0x00000001 */
/* ATOMIC_LOCK_28 */
#define MBOX_ATOMIC_LOCK_28_OFFSET                         (0x170U)
#define MBOX_ATOMIC_LOCK_28_ATOMIC_LOCK_28_SHIFT           (0U)
#define MBOX_ATOMIC_LOCK_28_ATOMIC_LOCK_28_MASK            (0x1U << MBOX_ATOMIC_LOCK_28_ATOMIC_LOCK_28_SHIFT)           /* 0x00000001 */
/* ATOMIC_LOCK_29 */
#define MBOX_ATOMIC_LOCK_29_OFFSET                         (0x174U)
#define MBOX_ATOMIC_LOCK_29_ATOMIC_LOCK_29_SHIFT           (0U)
#define MBOX_ATOMIC_LOCK_29_ATOMIC_LOCK_29_MASK            (0x1U << MBOX_ATOMIC_LOCK_29_ATOMIC_LOCK_29_SHIFT)           /* 0x00000001 */
/* ATOMIC_LOCK_30 */
#define MBOX_ATOMIC_LOCK_30_OFFSET                         (0x178U)
#define MBOX_ATOMIC_LOCK_30_ATOMIC_LOCK_30_SHIFT           (0U)
#define MBOX_ATOMIC_LOCK_30_ATOMIC_LOCK_30_MASK            (0x1U << MBOX_ATOMIC_LOCK_30_ATOMIC_LOCK_30_SHIFT)           /* 0x00000001 */
/* ATOMIC_LOCK_31 */
#define MBOX_ATOMIC_LOCK_31_OFFSET                         (0x17CU)
#define MBOX_ATOMIC_LOCK_31_ATOMIC_LOCK_31_SHIFT           (0U)
#define MBOX_ATOMIC_LOCK_31_ATOMIC_LOCK_31_MASK            (0x1U << MBOX_ATOMIC_LOCK_31_ATOMIC_LOCK_31_SHIFT)           /* 0x00000001 */
/*****************************************INTMUX*****************************************/
/****************************************INTMUX0_****************************************/
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* __RK3588_H */