/** @file LcdHwLib.h

  This file contains interface functions for LcdHwLib of ArmPlatformPkg

  Copyright (c) 2017, ARM Ltd. All rights reserved.<BR>

  SPDX-License-Identifier: BSD-2-Clause-Patent

**/
#ifndef __ANALOGIXDP_H__
#define __ANALOGIXDP_H__

#include <Library/RockchipDisplayLib.h>

#define ARMPC 0
#define RK3588S_EVB1 1
#define REG_DUMP 0

#define EREMOTEIO       121     /* Remote I/O error */ 
#define EINVAL          22      /* Invalid argument */

#define ANALOGIX_DP_REG_BASE                    0xFDEC0000

#define ANALOGIX_DP_TX_SW_RESET                 0x14
#define ANALOGIX_DP_FUNC_EN_1                   0x18
#define ANALOGIX_DP_FUNC_EN_2                   0x1C
#define ANALOGIX_DP_VIDEO_CTL_1                 0x20
#define ANALOGIX_DP_VIDEO_CTL_2                 0x24
#define ANALOGIX_DP_VIDEO_CTL_3                 0x28

#define ANALOGIX_DP_VIDEO_CTL_8                 0x3C
#define ANALOGIX_DP_VIDEO_CTL_10                0x44

#define ANALOGIX_DP_PLL_REG_1                   0xfc
#define ANALOGIX_DP_PLL_REG_2                   0x9e4
#define ANALOGIX_DP_PLL_REG_3                   0x9e8
#define ANALOGIX_DP_PLL_REG_4                   0x9ec
#define ANALOGIX_DP_PLL_REG_5                   0xa00

#define ANALOGIX_DP_BIAS                        0x124
#define ANALOGIX_DP_PD                          0x12c

#define ANALOGIX_DP_LANE_MAP                    0x35C

#define ANALOGIX_DP_ANALOG_CTL_1                0x370
#define ANALOGIX_DP_ANALOG_CTL_2                0x374
#define ANALOGIX_DP_ANALOG_CTL_3                0x378
#define ANALOGIX_DP_PLL_FILTER_CTL_1            0x37C
#define ANALOGIX_DP_TX_AMP_TUNING_CTL           0x380

#define ANALOGIX_DP_AUX_HW_RETRY_CTL            0x390

#define ANALOGIX_DP_COMMON_INT_STA_1            0x3C4
#define ANALOGIX_DP_COMMON_INT_STA_2            0x3C8
#define ANALOGIX_DP_COMMON_INT_STA_3            0x3CC
#define ANALOGIX_DP_COMMON_INT_STA_4            0x3D0

#define ANALOGIX_DP_INT_STA                     0x3DC
#define ANALOGIX_DP_COMMON_INT_MASK_1           0x3E0
#define ANALOGIX_DP_COMMON_INT_MASK_2           0x3E4
#define ANALOGIX_DP_COMMON_INT_MASK_3           0x3E8
#define ANALOGIX_DP_COMMON_INT_MASK_4           0x3EC
#define ANALOGIX_DP_INT_STA_MASK                0x3F8
#define ANALOGIX_DP_INT_CTL                     0x3FC

#define ANALOGIX_DP_SYS_CTL_1                   0x600
#define ANALOGIX_DP_SYS_CTL_2                   0x604
#define ANALOGIX_DP_SYS_CTL_3                   0x608
#define ANALOGIX_DP_SYS_CTL_4                   0x60C

#define ANALOGIX_DP_PKT_SEND_CTL                0x640
#define ANALOGIX_DP_HDCP_CTL                    0x648

#define ANALOGIX_DP_LINK_BW_SET                 0x680
#define ANALOGIX_DP_LANE_COUNT_SET              0x684
#define ANALOGIX_DP_TRAINING_PTN_SET            0x688
#define ANALOGIX_DP_LN0_LINK_TRAINING_CTL       0x68C
#define ANALOGIX_DP_LN1_LINK_TRAINING_CTL       0x690
#define ANALOGIX_DP_LN2_LINK_TRAINING_CTL       0x694
#define ANALOGIX_DP_LN3_LINK_TRAINING_CTL       0x698

#define ANALOGIX_DP_DEBUG_CTL                   0x6C0
#define ANALOGIX_DP_HPD_DEGLITCH_L              0x6C4
#define ANALOGIX_DP_HPD_DEGLITCH_H              0x6C8
#define ANALOGIX_DP_LINK_DEBUG_CTL              0x6E0

#define ANALOGIX_DP_M_VID_0                     0x700
#define ANALOGIX_DP_M_VID_1                     0x704
#define ANALOGIX_DP_M_VID_2                     0x708
#define ANALOGIX_DP_N_VID_0                     0x70C
#define ANALOGIX_DP_N_VID_1                     0x710
#define ANALOGIX_DP_N_VID_2                     0x714

#define ANALOGIX_DP_PLL_CTL			0x71C
#define ANALOGIX_DP_PHY_PD			0x720
#define ANALOGIX_DP_PHY_TEST			0x724

#define ANALOGIX_DP_VIDEO_FIFO_THRD		0x730
#define ANALOGIX_DP_AUDIO_MARGIN		0x73C

#define ANALOGIX_DP_M_VID_GEN_FILTER_TH		0x764
#define ANALOGIX_DP_M_AUD_GEN_FILTER_TH		0x778
#define ANALOGIX_DP_AUX_CH_STA			0x780
#define ANALOGIX_DP_AUX_CH_DEFER_CTL		0x788
#define ANALOGIX_DP_AUX_RX_COMM			0x78C
#define ANALOGIX_DP_BUFFER_DATA_CTL		0x790
#define ANALOGIX_DP_AUX_CH_CTL_1		0x794
#define ANALOGIX_DP_AUX_ADDR_7_0		0x798
#define ANALOGIX_DP_AUX_ADDR_15_8		0x79C
#define ANALOGIX_DP_AUX_ADDR_19_16		0x7A0
#define ANALOGIX_DP_AUX_CH_CTL_2		0x7A4

#define ANALOGIX_DP_BUF_DATA_0			0x7C0

#define ANALOGIX_DP_SOC_GENERAL_CTL		0x800

/* ANALOGIX_DP_TX_SW_RESET */
#define RESET_DP_TX				(0x1 << 0)

/* ANALOGIX_DP_FUNC_EN_1 */
#define MASTER_VID_FUNC_EN_N			(0x1 << 7)
#define SLAVE_VID_FUNC_EN_N			(0x1 << 5)
#define AUD_FIFO_FUNC_EN_N			(0x1 << 4)
#define AUD_FUNC_EN_N				(0x1 << 3)
#define HDCP_FUNC_EN_N				(0x1 << 2)
#define CRC_FUNC_EN_N				(0x1 << 1)
#define SW_FUNC_EN_N				(0x1 << 0)

/* ANALOGIX_DP_FUNC_EN_2 */
#define SSC_FUNC_EN_N				(0x1 << 7)
#define AUX_FUNC_EN_N				(0x1 << 2)
#define SERDES_FIFO_FUNC_EN_N			(0x1 << 1)
#define LS_CLK_DOMAIN_FUNC_EN_N			(0x1 << 0)

/* ANALOGIX_DP_VIDEO_CTL_1 */
#define VIDEO_EN				(0x1 << 7)
#define HDCP_VIDEO_MUTE				(0x1 << 6)

/* ANALOGIX_DP_VIDEO_CTL_1 */
#define IN_D_RANGE_MASK				(0x1 << 7)
#define IN_D_RANGE_SHIFT			(7)
#define IN_D_RANGE_CEA				(0x1 << 7)
#define IN_D_RANGE_VESA				(0x0 << 7)
#define IN_BPC_MASK				(0x7 << 4)
#define IN_BPC_SHIFT				(4)
#define IN_BPC_12_BITS				(0x3 << 4)
#define IN_BPC_10_BITS				(0x2 << 4)
#define IN_BPC_8_BITS				(0x1 << 4)
#define IN_BPC_6_BITS				(0x0 << 4)
#define IN_COLOR_F_MASK				(0x3 << 0)
#define IN_COLOR_F_SHIFT			(0)
#define IN_COLOR_F_YCBCR444			(0x2 << 0)
#define IN_COLOR_F_YCBCR422			(0x1 << 0)
#define IN_COLOR_F_RGB				(0x0 << 0)

/* ANALOGIX_DP_VIDEO_CTL_3 */
#define IN_YC_COEFFI_MASK			(0x1 << 7)
#define IN_YC_COEFFI_SHIFT			(7)
#define IN_YC_COEFFI_ITU709			(0x1 << 7)
#define IN_YC_COEFFI_ITU601			(0x0 << 7)
#define VID_CHK_UPDATE_TYPE_MASK		(0x1 << 4)
#define VID_CHK_UPDATE_TYPE_SHIFT		(4)
#define VID_CHK_UPDATE_TYPE_1			(0x1 << 4)
#define VID_CHK_UPDATE_TYPE_0			(0x0 << 4)

/* ANALOGIX_DP_VIDEO_CTL_8 */
#define VID_HRES_TH(x)				(((x) & 0xf) << 4)
#define VID_VRES_TH(x)				(((x) & 0xf) << 0)

/* ANALOGIX_DP_VIDEO_CTL_10 */
#define FORMAT_SEL				(0x1 << 4)
#define INTERACE_SCAN_CFG			(0x1 << 2)
#define VSYNC_POLARITY_CFG			(0x1 << 1)
#define HSYNC_POLARITY_CFG			(0x1 << 0)

/* ANALOGIX_DP_PLL_REG_1 */
#define REF_CLK_24M				(0x1 << 0)
#define REF_CLK_27M				(0x0 << 0)
#define REF_CLK_MASK				(0x1 << 0)

/* ANALOGIX_DP_LANE_MAP */
#define LANE3_MAP_LOGIC_LANE_0			(0x0 << 6)
#define LANE3_MAP_LOGIC_LANE_1			(0x1 << 6)
#define LANE3_MAP_LOGIC_LANE_2			(0x2 << 6)
#define LANE3_MAP_LOGIC_LANE_3			(0x3 << 6)
#define LANE2_MAP_LOGIC_LANE_0			(0x0 << 4)
#define LANE2_MAP_LOGIC_LANE_1			(0x1 << 4)
#define LANE2_MAP_LOGIC_LANE_2			(0x2 << 4)
#define LANE2_MAP_LOGIC_LANE_3			(0x3 << 4)
#define LANE1_MAP_LOGIC_LANE_0			(0x0 << 2)
#define LANE1_MAP_LOGIC_LANE_1			(0x1 << 2)
#define LANE1_MAP_LOGIC_LANE_2			(0x2 << 2)
#define LANE1_MAP_LOGIC_LANE_3			(0x3 << 2)
#define LANE0_MAP_LOGIC_LANE_0			(0x0 << 0)
#define LANE0_MAP_LOGIC_LANE_1			(0x1 << 0)
#define LANE0_MAP_LOGIC_LANE_2			(0x2 << 0)
#define LANE0_MAP_LOGIC_LANE_3			(0x3 << 0)

/* ANALOGIX_DP_ANALOG_CTL_1 */
#define TX_TERMINAL_CTRL_50_OHM			(0x1 << 4)

/* ANALOGIX_DP_ANALOG_CTL_2 */
#define SEL_24M					(0x1 << 3)
#define TX_DVDD_BIT_1_0625V			(0x4 << 0)

/* ANALOGIX_DP_ANALOG_CTL_3 */
#define DRIVE_DVDD_BIT_1_0625V			(0x4 << 5)
#define VCO_BIT_600_MICRO			(0x5 << 0)

/* ANALOGIX_DP_PLL_FILTER_CTL_1 */
#define PD_RING_OSC				(0x1 << 6)
#define AUX_TERMINAL_CTRL_50_OHM		(0x2 << 4)
#define TX_CUR1_2X				(0x1 << 2)
#define TX_CUR_16_MA				(0x3 << 0)

/* ANALOGIX_DP_TX_AMP_TUNING_CTL */
#define CH3_AMP_400_MV				(0x0 << 24)
#define CH2_AMP_400_MV				(0x0 << 16)
#define CH1_AMP_400_MV				(0x0 << 8)
#define CH0_AMP_400_MV				(0x0 << 0)

/* ANALOGIX_DP_AUX_HW_RETRY_CTL */
#define AUX_BIT_PERIOD_EXPECTED_DELAY(x)	(((x) & 0x7) << 8)
#define AUX_HW_RETRY_INTERVAL_MASK		(0x3 << 3)
#define AUX_HW_RETRY_INTERVAL_600_MICROSECONDS	(0x0 << 3)
#define AUX_HW_RETRY_INTERVAL_800_MICROSECONDS	(0x1 << 3)
#define AUX_HW_RETRY_INTERVAL_1000_MICROSECONDS	(0x2 << 3)
#define AUX_HW_RETRY_INTERVAL_1800_MICROSECONDS	(0x3 << 3)
#define AUX_HW_RETRY_COUNT_SEL(x)		(((x) & 0x7) << 0)

/* ANALOGIX_DP_COMMON_INT_STA_1 */
#define VSYNC_DET				(0x1 << 7)
#define PLL_LOCK_CHG				(0x1 << 6)
#define SPDIF_ERR				(0x1 << 5)
#define SPDIF_UNSTBL				(0x1 << 4)
#define VID_FORMAT_CHG				(0x1 << 3)
#define AUD_CLK_CHG				(0x1 << 2)
#define VID_CLK_CHG				(0x1 << 1)
#define SW_INT					(0x1 << 0)

/* ANALOGIX_DP_COMMON_INT_STA_2 */
#define ENC_EN_CHG				(0x1 << 6)
#define HW_BKSV_RDY				(0x1 << 3)
#define HW_SHA_DONE				(0x1 << 2)
#define HW_AUTH_STATE_CHG			(0x1 << 1)
#define HW_AUTH_DONE				(0x1 << 0)

/* ANALOGIX_DP_COMMON_INT_STA_3 */
#define AFIFO_UNDER				(0x1 << 7)
#define AFIFO_OVER				(0x1 << 6)
#define R0_CHK_FLAG				(0x1 << 5)

/* ANALOGIX_DP_COMMON_INT_STA_4 */
#define PSR_ACTIVE				(0x1 << 7)
#define PSR_INACTIVE				(0x1 << 6)
#define SPDIF_BI_PHASE_ERR			(0x1 << 5)
#define HOTPLUG_CHG				(0x1 << 2)
#define HPD_LOST				(0x1 << 1)
#define PLUG					(0x1 << 0)

/* ANALOGIX_DP_INT_STA */
#define INT_HPD					(0x1 << 6)
#define HW_TRAINING_FINISH			(0x1 << 5)
#define RPLY_RECEIV				(0x1 << 1)
#define AUX_ERR					(0x1 << 0)

/* ANALOGIX_DP_INT_CTL */
#define SOFT_INT_CTRL				(0x1 << 2)
#define INT_POL1				(0x1 << 1)
#define INT_POL0				(0x1 << 0)

/* ANALOGIX_DP_SYS_CTL_1 */
#define DET_STA					(0x1 << 2)
#define FORCE_DET				(0x1 << 1)
#define DET_CTRL				(0x1 << 0)

/* ANALOGIX_DP_SYS_CTL_2 */
#define CHA_CRI(x)				(((x) & 0xf) << 4)
#define CHA_STA					(0x1 << 2)
#define FORCE_CHA				(0x1 << 1)
#define CHA_CTRL				(0x1 << 0)

/* ANALOGIX_DP_SYS_CTL_3 */
#define HPD_STATUS				(0x1 << 6)
#define F_HPD					(0x1 << 5)
#define HPD_CTRL				(0x1 << 4)
#define HDCP_RDY				(0x1 << 3)
#define STRM_VALID				(0x1 << 2)
#define F_VALID					(0x1 << 1)
#define VALID_CTRL				(0x1 << 0)

/* ANALOGIX_DP_SYS_CTL_4 */
#define FIX_M_AUD				(0x1 << 4)
#define ENHANCED				(0x1 << 3)
#define FIX_M_VID				(0x1 << 2)
#define M_VID_UPDATE_CTRL			(0x3 << 0)

/* ANALOGIX_DP_TRAINING_PTN_SET */
#define SCRAMBLER_TYPE				(0x1 << 9)
#define HW_LINK_TRAINING_PATTERN		(0x1 << 8)
#define SCRAMBLING_DISABLE			(0x1 << 5)
#define SCRAMBLING_ENABLE			(0x0 << 5)
#define LINK_QUAL_PATTERN_SET_MASK		(0x3 << 2)
#define LINK_QUAL_PATTERN_SET_PRBS7		(0x3 << 2)
#define LINK_QUAL_PATTERN_SET_D10_2		(0x1 << 2)
#define LINK_QUAL_PATTERN_SET_DISABLE		(0x0 << 2)
#define SW_TRAINING_PATTERN_SET_MASK		(0x3 << 0)
#define SW_TRAINING_PATTERN_SET_PTN3		(0x3 << 0)
#define SW_TRAINING_PATTERN_SET_PTN2		(0x2 << 0)
#define SW_TRAINING_PATTERN_SET_PTN1		(0x1 << 0)
#define SW_TRAINING_PATTERN_SET_NORMAL		(0x0 << 0)

/* ANALOGIX_DP_LN0_LINK_TRAINING_CTL */
#define PRE_EMPHASIS_SET_MASK			(0x3 << 3)
#define PRE_EMPHASIS_SET_SHIFT			(3)

/* ANALOGIX_DP_DEBUG_CTL */
#define PLL_LOCK				(0x1 << 4)
#define F_PLL_LOCK				(0x1 << 3)
#define PLL_LOCK_CTRL				(0x1 << 2)
#define PN_INV					(0x1 << 0)

/* ANALOGIX_DP_PLL_CTL */
#define DP_PLL_PD				(0x1 << 7)
#define DP_PLL_RESET				(0x1 << 6)
#define DP_PLL_LOOP_BIT_DEFAULT			(0x1 << 4)
#define DP_PLL_REF_BIT_1_1250V			(0x5 << 0)
#define DP_PLL_REF_BIT_1_2500V			(0x7 << 0)

/* ANALOGIX_DP_PHY_PD */
#define DP_PHY_PD				(0x1 << 5)
#define AUX_PD					(0x1 << 4)
#define CH3_PD					(0x1 << 3)
#define CH2_PD					(0x1 << 2)
#define CH1_PD					(0x1 << 1)
#define CH0_PD					(0x1 << 0)

/* ANALOGIX_DP_PHY_TEST */
#define MACRO_RST				(0x1 << 5)
#define CH1_TEST				(0x1 << 1)
#define CH0_TEST				(0x1 << 0)

/* ANALOGIX_DP_AUX_CH_STA */
#define AUX_BUSY				(0x1 << 4)
#define AUX_STATUS_MASK				(0xf << 0)

/* ANALOGIX_DP_AUX_CH_DEFER_CTL */
#define DEFER_CTRL_EN				(0x1 << 7)
#define DEFER_COUNT(x)				(((x) & 0x7f) << 0)

/* ANALOGIX_DP_AUX_RX_COMM */
#define AUX_RX_COMM_I2C_DEFER			(0x2 << 2)
#define AUX_RX_COMM_AUX_DEFER			(0x2 << 0)

/* ANALOGIX_DP_BUFFER_DATA_CTL */
#define BUF_CLR					(0x1 << 7)
#define BUF_DATA_COUNT(x)			(((x) & 0x1f) << 0)

/* ANALOGIX_DP_AUX_CH_CTL_1 */
#define AUX_LENGTH(x)				(((x - 1) & 0xf) << 4)
#define AUX_TX_COMM_MASK			(0xf << 0)
#define AUX_TX_COMM_DP_TRANSACTION		(0x1 << 3)
#define AUX_TX_COMM_I2C_TRANSACTION		(0x0 << 3)
#define AUX_TX_COMM_MOT				(0x1 << 2)
#define AUX_TX_COMM_WRITE			(0x0 << 0)
#define AUX_TX_COMM_READ			(0x1 << 0)

/* ANALOGIX_DP_AUX_ADDR_7_0 */
#define AUX_ADDR_7_0(x)				(((x) >> 0) & 0xff)

/* ANALOGIX_DP_AUX_ADDR_15_8 */
#define AUX_ADDR_15_8(x)			(((x) >> 8) & 0xff)

/* ANALOGIX_DP_AUX_ADDR_19_16 */
#define AUX_ADDR_19_16(x)			(((x) >> 16) & 0x0f)

/* ANALOGIX_DP_AUX_CH_CTL_2 */
#define ADDR_ONLY				(0x1 << 1)
#define AUX_EN					(0x1 << 0)

/* ANALOGIX_DP_SOC_GENERAL_CTL */
#define AUDIO_MODE_SPDIF_MODE			(0x1 << 8)
#define AUDIO_MODE_MASTER_MODE			(0x0 << 8)
#define MASTER_VIDEO_INTERLACE_EN		(0x1 << 4)
#define VIDEO_MASTER_CLK_SEL			(0x1 << 2)
#define VIDEO_MASTER_MODE_EN			(0x1 << 1)
#define VIDEO_MODE_MASK				(0x1 << 0)
#define VIDEO_MODE_SLAVE_MODE			(0x1 << 0)
#define VIDEO_MODE_MASTER_MODE			(0x0 << 0)

#define DP_TIMEOUT_LOOP_COUNT 200
#define MAX_CR_LOOP 5
#define MAX_EQ_LOOP 5

/* I2C EDID Chip ID, Slave Address */
#define I2C_EDID_DEVICE_ADDR			0x50
#define I2C_E_EDID_DEVICE_ADDR			0x30

#define EDID_BLOCK_LENGTH			0x80
#define EDID_HEADER_PATTERN			0x00
#define EDID_EXTENSION_FLAG			0x7e
#define EDID_CHECKSUM				0x7f

/* DP_MAX_LANE_COUNT */
#define DPCD_ENHANCED_FRAME_CAP(x)		(((x) >> 7) & 0x1)
#define DPCD_MAX_LANE_COUNT(x)			((x) & 0x1f)

/* DP_LANE_COUNT_SET */
#define DPCD_LANE_COUNT_SET(x)			((x) & 0x1f)

/* DP_TRAINING_LANE0_SET */
#define DPCD_PRE_EMPHASIS_SET(x)		(((x) & 0x3) << 3)
#define DPCD_PRE_EMPHASIS_GET(x)		(((x) >> 3) & 0x3)
#define DPCD_VOLTAGE_SWING_SET(x)		(((x) & 0x3) << 0)
#define DPCD_VOLTAGE_SWING_GET(x)		(((x) >> 0) & 0x3)

/* HDPTXPHy_GRF*/
#define HDPTXPHY0_GRF_BASE                      0xFD5E0000
#define HDPTXPHY_GRF_CON0                       0x00
#define HDPTXPHY_GRF_CON1                       0x04
#define HDPTXPHY_GRF_STATUS0                    0x80
#define PCS_BIASES                              0x27c
#define O_PLL_LOCK                              0x280
#define O_PLL_LOCK_done                         (0x1<<3)
#define O_PHY_RDY                               ((0x1<<1)&(0x1<<3))
/* ENABLE_BIASES */
#define ENABLE_BIASES_LANE6                     (0x1<<6)
#define ENABLE_BIASES_LANE7                     (0x1<<7)

/* INITIAL POR RESET*/
#define INITIAL_POR_RESET_LANE2                 (0X1<<2)
#define INITIAL_POR_RESET_LANE3                 (0X1<<3)

#define EDPTX_PHY_BASE                          0xFED60000

enum LinkLaneCountType {
	LANE_COUNT1 = 1,
	LANE_COUNT2 = 2,
	LANE_COUNT4 = 4
};

enum LinkTrainingState {
	START,
	CLOCK_RECOVERY,
	EQUALIZER_TRAINING,
	FINISHED,
	FAILED
};

enum VoltageSwingLevel {
	VOLTAGE_LEVEL_0,
	VOLTAGE_LEVEL_1,
	VOLTAGE_LEVEL_2,
	VOLTAGE_LEVEL_3,
};

enum PreEmphasisLevel {
	PRE_EMPHASIS_LEVEL_0,
	PRE_EMPHASIS_LEVEL_1,
	PRE_EMPHASIS_LEVEL_2,
	PRE_EMPHASIS_LEVEL_3,
};

enum PatternSet {
	PRBS7,
	D10_2,
	TRAINING_PTN1,
	TRAINING_PTN2,
	TRAINING_PTN3,
	DP_NONE
};

enum ColorSpace {
	COLOR_RGB,
	COLOR_YCBCR422,
	COLOR_YCBCR444
};

enum ColorDepth {
	COLOR_6,
	COLOR_8,
	COLOR_10,
	COLOR_12
};

enum ColorCoefficient {
	COLOR_YCBCR601,
	COLOR_YCBCR709
};

enum DynamicRange {
	VESA,
	CEA
};

enum PllStatus {
	PLL_UNLOCKED,
	PLL_LOCKED
};

enum ClockRecoveryMValueType {
	CALCULATED_M,
	REGISTER_M
};

enum VideoTimingRecognitionType {
	VIDEO_TIMING_FROM_CAPTURE,
	VIDEO_TIMING_FROM_REGISTER
};

enum AnalogPowerBlock {
	AUX_BLOCK,
	CH0_BLOCK,
	CH1_BLOCK,
	CH2_BLOCK,
	CH3_BLOCK,
	ANALOG_TOTAL,
	POWER_ALL
};

enum DpIrqType {
	DP_IRQ_TYPE_HP_CABLE_IN  = BIT0,
	DP_IRQ_TYPE_HP_CABLE_OUT = BIT1,
	DP_IRQ_TYPE_HP_CHANGE    = BIT2,
	DP_IRQ_TYPE_UNKNOWN      = BIT3,
};


struct VideoInfo {
char *Name;

	BOOLEAN H_Sync_Polarity;
	BOOLEAN V_Sync_Polarity;
	BOOLEAN Interlaced;

	enum ColorSpace ColorSpace;
	enum DynamicRange DynamicRange;
	enum ColorCoefficient Ycbcr_Coeff;
	enum ColorDepth ColorDepth;

	UINTN MaxLinkRate;
	enum LinkLaneCountType MaxLaneCount;
};

struct LinkTrain {
	UINTN Eq_Loop;
	UINTN Cr_Loop[4];

	UINT8 Link_Rate;
	UINT8 LaneCount;
	UINT8 TrainingLane[4];
	BOOLEAN SSC;

	enum LinkTrainingState LtState;
};

enum AnalogixDp_Devtype {
	EXYNOS_DP,
	ROCKCHIP_DP,
};

enum AnalogixDp_Sub_Devtype {
	RK3288_DP,
	RK3368_EDP,
	RK3399_EDP,
	RK3568_EDP,
	RK3588_EDP
};

struct AnalogixDp_Plat_Data {
	enum AnalogixDp_Devtype Dev_Type;
	enum AnalogixDp_Sub_Devtype SubDev_Type;
	BOOLEAN SSC;
};

struct AnalogixDpDevice {
	int ID;
	struct Udevice *dev;
	VOID *Reg_Base;
	struct Regmap *GRF;
	BOOLEAN Force_Hpd;
	struct VideoInfo	VideoInfo;
	struct LinkTrain	LinkTrain;
	struct DRM_DSIPALY_MODE *MODE;
	struct AnalogixDp_Plat_Data Plat_Data;
	unsigned char edID[EDID_BLOCK_LENGTH * 2];
}; 

/* AnalogixDp_reg.c */
VOID AnalogixDpRegWrite(IN  UINT32 Offset, IN  UINT32 Value);
UINT32 AnalogixDpRegRead (IN  UINT32 Offset);
VOID EnablePwm(VOID);
VOID AnalogixDpEnableVideoMute(BOOLEAN Enable);
VOID AnalogixDpLaneSwap(BOOLEAN Enable);
VOID AnalogixDpStopVideo(VOID);
VOID AnalogixDpReset(VOID);
VOID AnalogixDpSwreset(VOID);
VOID AnalogixDpInitAnalogParam(VOID);
VOID AnalogixDpInitInterrupt(VOID);
VOID AnalogixDpEnableSwFunction(VOID);
VOID AnalogixDpConfigInterrupt(VOID);
VOID AnalogixDpSetPllPowerDown(BOOLEAN Enable);
VOID AnalogixDpInitHpd(VOID);
VOID AnalogixDpClearHotplugInterrupts(VOID);
VOID AnalogixDpInitAux(VOID);
VOID AnalogixDpResetAux(VOID);
VOID AnalogixDpInitAnalogFunc(VOID);
VOID AnalogixDpSetAnalogPowerDown(VOID);

VOID PrintkHDptxReg(VOID);
UINTN AnalogixDpReadByteFromDpcd(OUT struct AnalogixDpDevice *Dp,IN UINTN Reg_Addr,IN UINT8 *Data);
UINTN AnalogixDpStartAuxTransaction(VOID);
UINTN AnalogixDpReadBytesFromDpcd(OUT struct AnalogixDpDevice *Dp,IN  UINTN Reg_Addr, IN  UINTN Count,IN  UINT8 Data[] );
UINTN AnalogixDpWriteBytesToDpcd(OUT struct AnalogixDpDevice *Dp,IN  UINTN Reg_Addr, IN  UINTN Count,IN  UINT8 Data[] );
VOID  AnalogixDpSetTrainingPattern(OUT struct AnalogixDpDevice *Dp,OUT enum PatternSet Pattern);
UINT32 AnalogixDpGetLaneLinkTraining(OUT struct AnalogixDpDevice *Dp,IN UINT8 Lane);
VOID AnalogixDpGetLinkBandwidth(OUT struct AnalogixDpDevice *Dp,UINT32 *bwtype);
VOID AnalogixDpGetLaneCount(OUT struct AnalogixDpDevice *Dp,UINT32 *Count);
VOID AnalogixDpEnableVideoMaster(OUT struct AnalogixDpDevice *Dp,BOOLEAN Enable);
VOID AnalogixDpStartVideo(OUT struct AnalogixDpDevice *Dp);
INTN AnalogixDpIsVideoStreamOn(OUT struct AnalogixDpDevice *Dp);
VOID AnalogixDpSetVideoFormat(OUT struct AnalogixDpDevice *Dp);
VOID RockchipHdptxPhySetVoltage(VOID);
VOID RockchipHdptxPhyInit(VOID);
VOID RockchipHdpPhySetRate(VOID);
VOID Initialize(VOID);
VOID PrinteDPReg(VOID);
VOID PrintCruReg(VOID);

INT32
AnalogixDpConnectorPreInit (
  OUT DISPLAY_STATE                        *DisplayState 
  );

INT32
AnalogixDpConnectorInit (
  OUT DISPLAY_STATE                        *DisplayState  
  );

INT32
AnalogixDpConnectorGetEdid (
  OUT DISPLAY_STATE                        *DisplayState
  );

INT32
AnalogixDpConnectorEnable (
  OUT DISPLAY_STATE                        *DisplayState,
  OUT struct AnalogixDpDevice            *Dp
  );

INT32
AnalogixDpConnectorDisable (
  OUT DISPLAY_STATE                        *DisplayState
  );

INT32
AnalogixDpConnectorDetect (
  OUT DISPLAY_STATE                        *DisplayState
  );

#endif
