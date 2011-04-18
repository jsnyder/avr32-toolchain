/*****************************************************************************
 *
 * Copyright (C) 2006-2009 Atmel Corporation
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * * Redistributions of source code must retain the above copyright
 *   notice, this list of conditions and the following disclaimer.
 *
 * * Redistributions in binary form must reproduce the above copyright
 *   notice, this list of conditions and the following disclaimer in
 *   the documentation and/or other materials provided with the
 *   distribution.
 *
 * * Neither the name of the copyright holders nor the names of
 *   contributors may be used to endorse or promote products derived
 *   from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 * Model        : AP7000
 * Revision     : $Revision: 62595 $
 * Checkin Date : $Date: 2009-10-21 13:31:31 +0200 (Wed, 21 Oct 2009) $
 *
 ****************************************************************************/
#ifndef AVR32_AP7000_H_INCLUDED
#define AVR32_AP7000_H_INCLUDED


/* Core */
#include "avr32/core_c3_100.h"
/* OCD */
#include "avr32/ocd_o3_100.h"

/* CORE */ 
#define AVR32_CORE_CLK_CPU_PICO            0
#define AVR32_CORE_COMPARE_IRQ             0
#define AVR32_CORE_PERFCTR_IRQ             1
#define AVR32_CORE_JTAG_DR_MSB             34
#define AVR32_CORE_PORT_MSB                195
#define AVR32_CORE_SCAN_CHAIN_MSB          19
#define AVR32_CORE_SCAN_CLOCK_MSB          15


/* OCD */ 

/* Memories */
#define AVR32_EBI_CS0_ADDRESS              0x00000000
#define AVR32_EBI_CS0_SIZE                 0x04000000
#define AVR32_EBI_CS0                      ((unsigned char *)AVR32_EBI_CS0_ADDRESS)
#define AVR32_EBI_CS1_ADDRESS              0x10000000
#define AVR32_EBI_CS1_SIZE                 0x10000000
#define AVR32_EBI_CS1                      ((unsigned char *)AVR32_EBI_CS1_ADDRESS)
#define AVR32_EBI_CS2_ADDRESS              0x08000000
#define AVR32_EBI_CS2_SIZE                 0x04000000
#define AVR32_EBI_CS2                      ((unsigned char *)AVR32_EBI_CS2_ADDRESS)
#define AVR32_EBI_CS3_ADDRESS              0x0C000000
#define AVR32_EBI_CS3_SIZE                 0x04000000
#define AVR32_EBI_CS3                      ((unsigned char *)AVR32_EBI_CS3_ADDRESS)
#define AVR32_EBI_CS4_ADDRESS              0x04000000
#define AVR32_EBI_CS4_SIZE                 0x04000000
#define AVR32_EBI_CS4                      ((unsigned char *)AVR32_EBI_CS4_ADDRESS)
#define AVR32_EBI_CS5_ADDRESS              0x20000000
#define AVR32_EBI_CS5_SIZE                 0x04000000
#define AVR32_EBI_CS5                      ((unsigned char *)AVR32_EBI_CS5_ADDRESS)
#define AVR32_SRAM0_ADDRESS                0x24000000
#define AVR32_SRAM0_SIZE                   0x00004000
#define AVR32_SRAM0                        ((unsigned char *)AVR32_SRAM0_ADDRESS)
#define AVR32_SRAM1_ADDRESS                0x24004000
#define AVR32_SRAM1_SIZE                   0x00004000
#define AVR32_SRAM1                        ((unsigned char *)AVR32_SRAM1_ADDRESS)

/* Interrupt Controller */
#define AVR32_INTC_NUM                     1
#define AVR32_INTC_ADDRESS                 0xFFF00400
#define AVR32_INTC                         (*((volatile avr32_intc_t*)AVR32_INTC_ADDRESS))
#define AVR32_INTC_CLK_PBB                 97
#define AVR32_INTC_NUM_INT_GRPS            33
#define AVR32_INTC_NUM_IRQS_PER_GRP0       2
#define AVR32_INTC_NUM_IRQS_PER_GRP1       6
#define AVR32_INTC_NUM_IRQS_PER_GRP10      1
#define AVR32_INTC_NUM_IRQS_PER_GRP11      1
#define AVR32_INTC_NUM_IRQS_PER_GRP12      1
#define AVR32_INTC_NUM_IRQS_PER_GRP13      1
#define AVR32_INTC_NUM_IRQS_PER_GRP14      1
#define AVR32_INTC_NUM_IRQS_PER_GRP15      1
#define AVR32_INTC_NUM_IRQS_PER_GRP16      1
#define AVR32_INTC_NUM_IRQS_PER_GRP17      1
#define AVR32_INTC_NUM_IRQS_PER_GRP18      1
#define AVR32_INTC_NUM_IRQS_PER_GRP19      4
#define AVR32_INTC_NUM_IRQS_PER_GRP2       5
#define AVR32_INTC_NUM_IRQS_PER_GRP20      1
#define AVR32_INTC_NUM_IRQS_PER_GRP21      1
#define AVR32_INTC_NUM_IRQS_PER_GRP22      3
#define AVR32_INTC_NUM_IRQS_PER_GRP23      3
#define AVR32_INTC_NUM_IRQS_PER_GRP24      1
#define AVR32_INTC_NUM_IRQS_PER_GRP25      1
#define AVR32_INTC_NUM_IRQS_PER_GRP26      1
#define AVR32_INTC_NUM_IRQS_PER_GRP27      1
#define AVR32_INTC_NUM_IRQS_PER_GRP28      1
#define AVR32_INTC_NUM_IRQS_PER_GRP29      1
#define AVR32_INTC_NUM_IRQS_PER_GRP3       1
#define AVR32_INTC_NUM_IRQS_PER_GRP30      1
#define AVR32_INTC_NUM_IRQS_PER_GRP31      1
#define AVR32_INTC_NUM_IRQS_PER_GRP32      1
#define AVR32_INTC_NUM_IRQS_PER_GRP4       1
#define AVR32_INTC_NUM_IRQS_PER_GRP5       1
#define AVR32_INTC_NUM_IRQS_PER_GRP6       1
#define AVR32_INTC_NUM_IRQS_PER_GRP7       1
#define AVR32_INTC_NUM_IRQS_PER_GRP8       1
#define AVR32_INTC_NUM_IRQS_PER_GRP9       1
#define AVR32_INTC_NUM_NMI                 1

#include "avr32/intc_101.h"


/* ABDAC */
#define AVR32_ABDAC_NUM                    1

/* ABDAC */ 
#define AVR32_ABDAC_ADDRESS                0xFFF02000
#define AVR32_ABDAC                        (*((volatile avr32_abdac_t*)AVR32_ABDAC_ADDRESS))
#define AVR32_ABDAC_CLK_PBB                104
#define AVR32_ABDAC_IRQ                    864
#define AVR32_ABDAC_PADDR_MSB              0
#define AVR32_ABDAC_PDATA_SIZE             0
#define AVR32_ABDAC_DATA_1_PIN             52
#define AVR32_ABDAC_DATA_1_FUNCTION        0
#define AVR32_ABDAC_DATA_0_PIN             53
#define AVR32_ABDAC_DATA_0_FUNCTION        0
#define AVR32_ABDAC_DATAN_1_PIN            54
#define AVR32_ABDAC_DATAN_1_FUNCTION       0
#define AVR32_ABDAC_DATAN_0_PIN            55
#define AVR32_ABDAC_DATAN_0_FUNCTION       0

#include "avr32/abdac_101.h"


/* AC97C */
#define AVR32_AC97C_NUM                    1

/* AC97C */ 
#define AVR32_AC97C_ADDRESS                0xFFF02800
#define AVR32_AC97C                        (*((volatile avr32_ac97c_t*)AVR32_AC97C_ADDRESS))
#define AVR32_AC97C_CLK_PBB                106
#define AVR32_AC97C_IRQ                    928
#define AVR32_AC97C_AUDIOC_DMA_CHANNELS    0
#define AVR32_AC97C_AUDIOC_DMA_SIZE_SIZE   0
#define AVR32_AC97C_SCAN_CLOCK_0_PIN       54
#define AVR32_AC97C_SCLK_0_PIN             54
#define AVR32_AC97C_SCLK_0_FUNCTION        1
#define AVR32_AC97C_SDI_0_PIN              55
#define AVR32_AC97C_SDI_0_FUNCTION         1
#define AVR32_AC97C_SDO_0_PIN              52
#define AVR32_AC97C_SDO_0_FUNCTION         1
#define AVR32_AC97C_SYNC_0_PIN             53
#define AVR32_AC97C_SYNC_0_FUNCTION        1

#include "avr32/ac97c_210.h"


/* DMACA */
#define AVR32_DMACA_NUM                    1

/* DMACA */ 
#define AVR32_DMACA_ADDRESS                0xFF200000
#define AVR32_DMACA                        (*((volatile avr32_dmaca_t*)AVR32_DMACA_ADDRESS))
#define AVR32_DMACA_CLK_HSB                42
#define AVR32_DMACA_BLOCK_IRQ              64
#define AVR32_DMACA_DSTT_IRQ               65
#define AVR32_DMACA_ERR_IRQ                66
#define AVR32_DMACA_SRCT_IRQ               67
#define AVR32_DMACA_TFR_IRQ                68
#define AVR32_DMACA_CH_AUDIOC_RXA          3
#define AVR32_DMACA_CH_AUDIOC_RXB          5
#define AVR32_DMACA_CH_AUDIOC_TXA          4
#define AVR32_DMACA_CH_AUDIOC_TXB          6
#define AVR32_DMACA_CH_DAC_TX              2
#define AVR32_DMACA_CH_EXTRQ0              7
#define AVR32_DMACA_CH_EXTRQ1              8
#define AVR32_DMACA_CH_EXTRQ2              9
#define AVR32_DMACA_CH_EXTRQ3              10
#define AVR32_DMACA_CH_MMCI_RX             0
#define AVR32_DMACA_CH_MMCI_TX             1
#define AVR32_DMACA_MAX_BLK_SIZE           4095
#define AVR32_DMACA_NUM_CHANNELS           3
#define AVR32_DMACA_DMARQ_0_PIN            56
#define AVR32_DMACA_DMARQ_0_FUNCTION       1
#define AVR32_DMACA_DMARQ_1_PIN            57
#define AVR32_DMACA_DMARQ_1_FUNCTION       1
#define AVR32_DMACA_DMARQ_2_PIN            69
#define AVR32_DMACA_DMARQ_2_FUNCTION       1
#define AVR32_DMACA_DMARQ_3_PIN            70
#define AVR32_DMACA_DMARQ_3_FUNCTION       1

#include "avr32/dmaca_206a.h"


/* EBI */

/* EBI */ 
#define AVR32_EBI_CLK_HSB                  32
#define AVR32_EBI_CF0_CS                   4
#define AVR32_EBI_CF1_CS                   5
#define AVR32_EBI_HEBI_CS_MSB              5
#define AVR32_EBI_HMATRIX_NR               4
#define AVR32_EBI_NAND_CS                  3
#define AVR32_EBI_SDRAM_CS                 1
#define AVR32_EBI_SMC0_CS                  0
#define AVR32_EBI_SMC1_CS                  1
#define AVR32_EBI_SMC2_CS                  2
#define AVR32_EBI_SMC3_CS                  3
#define AVR32_EBI_SMC4_CS                  4
#define AVR32_EBI_SMC5_CS                  5
#define AVR32_EBI_ADDR_23_PIN              144
#define AVR32_EBI_ADDR_23_FUNCTION         0
#define AVR32_EBI_ADDR_24_PIN              145
#define AVR32_EBI_ADDR_24_FUNCTION         0
#define AVR32_EBI_ADDR_25_PIN              146
#define AVR32_EBI_ADDR_25_FUNCTION         0
#define AVR32_EBI_CFCE1_0_PIN              147
#define AVR32_EBI_CFCE1_0_FUNCTION         0
#define AVR32_EBI_CFCE2_0_PIN              148
#define AVR32_EBI_CFCE2_0_FUNCTION         0
#define AVR32_EBI_CFRNW_0_PIN              151
#define AVR32_EBI_CFRNW_0_FUNCTION         0
#define AVR32_EBI_DATA_16_PIN              128
#define AVR32_EBI_DATA_16_FUNCTION         0
#define AVR32_EBI_DATA_17_PIN              129
#define AVR32_EBI_DATA_17_FUNCTION         0
#define AVR32_EBI_DATA_18_PIN              130
#define AVR32_EBI_DATA_18_FUNCTION         0
#define AVR32_EBI_DATA_19_PIN              131
#define AVR32_EBI_DATA_19_FUNCTION         0
#define AVR32_EBI_DATA_20_PIN              132
#define AVR32_EBI_DATA_20_FUNCTION         0
#define AVR32_EBI_DATA_21_PIN              133
#define AVR32_EBI_DATA_21_FUNCTION         0
#define AVR32_EBI_DATA_22_PIN              134
#define AVR32_EBI_DATA_22_FUNCTION         0
#define AVR32_EBI_DATA_23_PIN              135
#define AVR32_EBI_DATA_23_FUNCTION         0
#define AVR32_EBI_DATA_24_PIN              136
#define AVR32_EBI_DATA_24_FUNCTION         0
#define AVR32_EBI_DATA_25_PIN              137
#define AVR32_EBI_DATA_25_FUNCTION         0
#define AVR32_EBI_DATA_26_PIN              138
#define AVR32_EBI_DATA_26_FUNCTION         0
#define AVR32_EBI_DATA_27_PIN              139
#define AVR32_EBI_DATA_27_FUNCTION         0
#define AVR32_EBI_DATA_28_PIN              140
#define AVR32_EBI_DATA_28_FUNCTION         0
#define AVR32_EBI_DATA_29_PIN              141
#define AVR32_EBI_DATA_29_FUNCTION         0
#define AVR32_EBI_DATA_30_PIN              142
#define AVR32_EBI_DATA_30_FUNCTION         0
#define AVR32_EBI_DATA_31_PIN              143
#define AVR32_EBI_DATA_31_FUNCTION         0
#define AVR32_EBI_NCS_4_PIN                149
#define AVR32_EBI_NCS_4_FUNCTION           0
#define AVR32_EBI_NCS_5_PIN                150
#define AVR32_EBI_NCS_5_FUNCTION           0
#define AVR32_EBI_NCS_2_PIN                153
#define AVR32_EBI_NCS_2_FUNCTION           0
#define AVR32_EBI_NWAIT_0_PIN              152
#define AVR32_EBI_NWAIT_0_FUNCTION         0
#define AVR32_EBI_SDCS_0_PIN               154
#define AVR32_EBI_SDCS_0_FUNCTION          0



/* ECC */
#define AVR32_ECC_NUM                      1

/* ECC */ 
#define AVR32_ECC_ADDRESS                  0xFFF03C00
#define AVR32_ECC                          (*((volatile avr32_ecc_t*)AVR32_ECC_ADDRESS))
#define AVR32_ECC_CLK_PBB                  111
#define AVR32_ECC_HADDR_MSB                0
#define AVR32_ECC_HBURST_MSB               0
#define AVR32_ECC_HDATA_MSB                0
#define AVR32_ECC_HMATRIX_NR               4
#define AVR32_ECC_HPROT_MSB                0
#define AVR32_ECC_HRESP_MSB                0
#define AVR32_ECC_HSIZE_MSB                0
#define AVR32_ECC_HTRANS_MSB               0
#define AVR32_ECC_PADDR_MSB                0
#define AVR32_ECC_PDATA_MSB                0

#include "avr32/ecc_100.h"


/* EIC */
#define AVR32_EIC_NUM                      1

/* EIC */ 
#define AVR32_EIC_ADDRESS                  0xFFF00100
#define AVR32_EIC                          (*((volatile avr32_eic_t*)AVR32_EIC_ADDRESS))
#define AVR32_EIC_CLK_PBB                  96
#define AVR32_EIC_IRQ_0                   608
#define AVR32_EIC_IRQ_1                   609
#define AVR32_EIC_IRQ_2                   610
#define AVR32_EIC_IRQ_3                   611
#define AVR32_EIC_INT_MSB                  3

#include "avr32/eic_100.h"


/* HMATRIX */
#define AVR32_HMATRIX_NUM                  1

/* HMATRIX */ 
#define AVR32_HMATRIX_ADDRESS              0xFFF00800
#define AVR32_HMATRIX                      (*((volatile avr32_hmatrix_t*)AVR32_HMATRIX_ADDRESS))
#define AVR32_HMATRIX_CLK_HSB_PBA_BRIDGE   33
#define AVR32_HMATRIX_CLK_HSB_PBB_BRIDGE   34
#define AVR32_HMATRIX_CLK_HSB_HSB_BRIDGE   36
#define AVR32_HMATRIX_CLK_PBB              98
#define AVR32_HMATRIX_MASTER_CPU_DCACHE    0
#define AVR32_HMATRIX_MASTER_CPU_ICACHE    1
#define AVR32_HMATRIX_MASTER_DMACA_CH0     8
#define AVR32_HMATRIX_MASTER_DMACA_CH1     9
#define AVR32_HMATRIX_MASTER_ISI_DMA       3
#define AVR32_HMATRIX_MASTER_LCDC_DMA      5
#define AVR32_HMATRIX_MASTER_MACB0_DMA     6
#define AVR32_HMATRIX_MASTER_MACB1_DMA     7
#define AVR32_HMATRIX_MASTER_NUM           10
#define AVR32_HMATRIX_MASTER_PDC           2
#define AVR32_HMATRIX_MASTER_USBA_DMA      4
#define AVR32_HMATRIX_SLAVE_DMACA_CFG      7
#define AVR32_HMATRIX_SLAVE_EBI            4
#define AVR32_HMATRIX_SLAVE_LCDC_CFG       6
#define AVR32_HMATRIX_SLAVE_NUM            8
#define AVR32_HMATRIX_SLAVE_PBA            2
#define AVR32_HMATRIX_SLAVE_PBB            3
#define AVR32_HMATRIX_SLAVE_SRAM0          0
#define AVR32_HMATRIX_SLAVE_SRAM1          1
#define AVR32_HMATRIX_SLAVE_USBA_DPRAM     5

#include "avr32/hmatrix_220.h"


/* ISI */
#define AVR32_ISI_NUM                      1

/* ISI */ 
#define AVR32_ISI_ADDRESS                  0xFFF02C00
#define AVR32_ISI                          (*((volatile avr32_isi_t*)AVR32_ISI_ADDRESS))
#define AVR32_ISI_CLK_HSB                  37
#define AVR32_ISI_CLK_PBB                  107
#define AVR32_ISI_IRQ                      960
#define AVR32_ISI_DATA_WIDTH               12
#define AVR32_ISI_DATA_0_PIN               32
#define AVR32_ISI_DATA_0_FUNCTION          0
#define AVR32_ISI_DATA_1_PIN               33
#define AVR32_ISI_DATA_1_FUNCTION          0
#define AVR32_ISI_DATA_2_PIN               34
#define AVR32_ISI_DATA_2_FUNCTION          0
#define AVR32_ISI_DATA_3_PIN               35
#define AVR32_ISI_DATA_3_FUNCTION          0
#define AVR32_ISI_DATA_4_PIN               36
#define AVR32_ISI_DATA_4_FUNCTION          0
#define AVR32_ISI_DATA_5_PIN               37
#define AVR32_ISI_DATA_5_FUNCTION          0
#define AVR32_ISI_DATA_6_PIN               38
#define AVR32_ISI_DATA_6_FUNCTION          0
#define AVR32_ISI_DATA_7_PIN               39
#define AVR32_ISI_DATA_7_FUNCTION          0
#define AVR32_ISI_DATA_8_PIN               43
#define AVR32_ISI_DATA_8_FUNCTION          1
#define AVR32_ISI_DATA_9_PIN               44
#define AVR32_ISI_DATA_9_FUNCTION          1
#define AVR32_ISI_DATA_10_PIN              45
#define AVR32_ISI_DATA_10_FUNCTION         1
#define AVR32_ISI_DATA_11_PIN              46
#define AVR32_ISI_DATA_11_FUNCTION         1
#define AVR32_ISI_HSYNC_0_PIN              40
#define AVR32_ISI_HSYNC_0_FUNCTION         0
#define AVR32_ISI_PCLK_0_PIN               42
#define AVR32_ISI_PCLK_0_FUNCTION          0
#define AVR32_ISI_SCAN_CLOCK_0_PIN         42
#define AVR32_ISI_VSYNC_0_PIN              41
#define AVR32_ISI_VSYNC_0_FUNCTION         0

#include "avr32/isi_005.h"


/* LCDC */
#define AVR32_LCDC_NUM                     1

/* LCDC */ 
#define AVR32_LCDC_ADDRESS                 0xFF000000
#define AVR32_LCDC                         (*((volatile avr32_lcdc_t*)AVR32_LCDC_ADDRESS))
#define AVR32_LCDC_CLK_HSB                 39
#define AVR32_LCDC_EOF_IRQ                 32
#define AVR32_LCDC_LN_IRQ                  33
#define AVR32_LCDC_LSTLN_IRQ               34
#define AVR32_LCDC_MER_IRQ                 35
#define AVR32_LCDC_OWR_IRQ                 36
#define AVR32_LCDC_UFLW_IRQ                37
#define AVR32_LCDC_FIFOA_MSB               8
#define AVR32_LCDC_CC_0_0_PIN              83
#define AVR32_LCDC_CC_0_0_FUNCTION         0
#define AVR32_LCDC_CC_0_1_PIN              128
#define AVR32_LCDC_CC_0_1_FUNCTION         1
#define AVR32_LCDC_DATA_0_0_PIN            90
#define AVR32_LCDC_DATA_0_0_FUNCTION       0
#define AVR32_LCDC_DATA_1_0_PIN            91
#define AVR32_LCDC_DATA_1_0_FUNCTION       0
#define AVR32_LCDC_DATA_2_0_PIN            92
#define AVR32_LCDC_DATA_2_0_FUNCTION       0
#define AVR32_LCDC_DATA_3_0_PIN            93
#define AVR32_LCDC_DATA_3_0_FUNCTION       0
#define AVR32_LCDC_DATA_4_0_PIN            94
#define AVR32_LCDC_DATA_4_0_FUNCTION       0
#define AVR32_LCDC_DATA_5_PIN              95
#define AVR32_LCDC_DATA_5_FUNCTION         0
#define AVR32_LCDC_DATA_6_PIN              96
#define AVR32_LCDC_DATA_6_FUNCTION         0
#define AVR32_LCDC_DATA_7_PIN              97
#define AVR32_LCDC_DATA_7_FUNCTION         0
#define AVR32_LCDC_DATA_8_0_PIN            98
#define AVR32_LCDC_DATA_8_0_FUNCTION       0
#define AVR32_LCDC_DATA_9_0_PIN            99
#define AVR32_LCDC_DATA_9_0_FUNCTION       0
#define AVR32_LCDC_DATA_10_0_PIN           100
#define AVR32_LCDC_DATA_10_0_FUNCTION      0
#define AVR32_LCDC_DATA_11_0_PIN           101
#define AVR32_LCDC_DATA_11_0_FUNCTION      0
#define AVR32_LCDC_DATA_12_0_PIN           102
#define AVR32_LCDC_DATA_12_0_FUNCTION      0
#define AVR32_LCDC_DATA_13_PIN             103
#define AVR32_LCDC_DATA_13_FUNCTION        0
#define AVR32_LCDC_DATA_14_PIN             104
#define AVR32_LCDC_DATA_14_FUNCTION        0
#define AVR32_LCDC_DATA_15_PIN             105
#define AVR32_LCDC_DATA_15_FUNCTION        0
#define AVR32_LCDC_DATA_16_0_PIN           106
#define AVR32_LCDC_DATA_16_0_FUNCTION      0
#define AVR32_LCDC_DATA_17_0_PIN           107
#define AVR32_LCDC_DATA_17_0_FUNCTION      0
#define AVR32_LCDC_DATA_18_0_PIN           108
#define AVR32_LCDC_DATA_18_0_FUNCTION      0
#define AVR32_LCDC_DATA_19_0_PIN           109
#define AVR32_LCDC_DATA_19_0_FUNCTION      0
#define AVR32_LCDC_DATA_20_0_PIN           110
#define AVR32_LCDC_DATA_20_0_FUNCTION      0
#define AVR32_LCDC_DATA_21_0_PIN           111
#define AVR32_LCDC_DATA_21_0_FUNCTION      0
#define AVR32_LCDC_DATA_22_PIN             112
#define AVR32_LCDC_DATA_22_FUNCTION        0
#define AVR32_LCDC_DATA_23_PIN             113
#define AVR32_LCDC_DATA_23_FUNCTION        0
#define AVR32_LCDC_DATA_0_1_PIN            131
#define AVR32_LCDC_DATA_0_1_FUNCTION       1
#define AVR32_LCDC_DATA_1_1_PIN            132
#define AVR32_LCDC_DATA_1_1_FUNCTION       1
#define AVR32_LCDC_DATA_2_1_PIN            133
#define AVR32_LCDC_DATA_2_1_FUNCTION       1
#define AVR32_LCDC_DATA_3_1_PIN            134
#define AVR32_LCDC_DATA_3_1_FUNCTION       1
#define AVR32_LCDC_DATA_4_1_PIN            135
#define AVR32_LCDC_DATA_4_1_FUNCTION       1
#define AVR32_LCDC_DATA_8_1_PIN            136
#define AVR32_LCDC_DATA_8_1_FUNCTION       1
#define AVR32_LCDC_DATA_9_1_PIN            137
#define AVR32_LCDC_DATA_9_1_FUNCTION       1
#define AVR32_LCDC_DATA_10_1_PIN           138
#define AVR32_LCDC_DATA_10_1_FUNCTION      1
#define AVR32_LCDC_DATA_11_1_PIN           139
#define AVR32_LCDC_DATA_11_1_FUNCTION      1
#define AVR32_LCDC_DATA_12_1_PIN           140
#define AVR32_LCDC_DATA_12_1_FUNCTION      1
#define AVR32_LCDC_DATA_16_1_PIN           141
#define AVR32_LCDC_DATA_16_1_FUNCTION      1
#define AVR32_LCDC_DATA_17_1_PIN           142
#define AVR32_LCDC_DATA_17_1_FUNCTION      1
#define AVR32_LCDC_DATA_18_1_PIN           143
#define AVR32_LCDC_DATA_18_1_FUNCTION      1
#define AVR32_LCDC_DATA_19_1_PIN           144
#define AVR32_LCDC_DATA_19_1_FUNCTION      1
#define AVR32_LCDC_DATA_20_1_PIN           145
#define AVR32_LCDC_DATA_20_1_FUNCTION      1
#define AVR32_LCDC_DATA_21_1_PIN           146
#define AVR32_LCDC_DATA_21_1_FUNCTION      1
#define AVR32_LCDC_DVAL_0_0_PIN            87
#define AVR32_LCDC_DVAL_0_0_FUNCTION       0
#define AVR32_LCDC_DVAL_0_1_PIN            129
#define AVR32_LCDC_DVAL_0_1_FUNCTION       1
#define AVR32_LCDC_HSYNC_0_PIN             84
#define AVR32_LCDC_HSYNC_0_FUNCTION        0
#define AVR32_LCDC_MODE_0_0_PIN            88
#define AVR32_LCDC_MODE_0_0_FUNCTION       0
#define AVR32_LCDC_MODE_0_1_PIN            130
#define AVR32_LCDC_MODE_0_1_FUNCTION       1
#define AVR32_LCDC_PCLK_0_PIN              85
#define AVR32_LCDC_PCLK_0_FUNCTION         0
#define AVR32_LCDC_PWR_0_PIN               89
#define AVR32_LCDC_PWR_0_FUNCTION          0
#define AVR32_LCDC_VSYNC_0_PIN             86
#define AVR32_LCDC_VSYNC_0_FUNCTION        0

#include "avr32/lcdc_170.h"


/* MACB */
#define AVR32_MACB_NUM                     2

/* MACB0 */ 
#define AVR32_MACB0_ADDRESS                0xFFF01800
#define AVR32_MACB0                        (*((volatile avr32_macb_t*)AVR32_MACB0_ADDRESS))
#define AVR32_MACB0_CLK_HSB                40
#define AVR32_MACB0_CLK_PBB                102
#define AVR32_MACB0_IRQ                    800
#define AVR32_MACB0_COL_0_PIN              64
#define AVR32_MACB0_COL_0_FUNCTION         0
#define AVR32_MACB0_CRS_0_PIN              65
#define AVR32_MACB0_CRS_0_FUNCTION         0
#define AVR32_MACB0_MDC_0_PIN              80
#define AVR32_MACB0_MDC_0_FUNCTION         0
#define AVR32_MACB0_MDIO_0_PIN             81
#define AVR32_MACB0_MDIO_0_FUNCTION        0
#define AVR32_MACB0_RXD_0_PIN              73
#define AVR32_MACB0_RXD_0_FUNCTION         0
#define AVR32_MACB0_RXD_1_PIN              74
#define AVR32_MACB0_RXD_1_FUNCTION         0
#define AVR32_MACB0_RXD_2_PIN              75
#define AVR32_MACB0_RXD_2_FUNCTION         0
#define AVR32_MACB0_RXD_3_PIN              76
#define AVR32_MACB0_RXD_3_FUNCTION         0
#define AVR32_MACB0_RX_CLK_0_PIN           78
#define AVR32_MACB0_RX_CLK_0_FUNCTION      0
#define AVR32_MACB0_RX_DV_0_PIN            79
#define AVR32_MACB0_RX_DV_0_FUNCTION       0
#define AVR32_MACB0_RX_ER_0_PIN            77
#define AVR32_MACB0_RX_ER_0_FUNCTION       0
#define AVR32_MACB0_SCAN_CLOCK_0_0_PIN     72
#define AVR32_MACB0_SCAN_CLOCK_0_1_PIN     78
#define AVR32_MACB0_SPEED_0_PIN            82
#define AVR32_MACB0_SPEED_0_FUNCTION       0
#define AVR32_MACB0_TXD_0_PIN              67
#define AVR32_MACB0_TXD_0_FUNCTION         0
#define AVR32_MACB0_TXD_1_PIN              68
#define AVR32_MACB0_TXD_1_FUNCTION         0
#define AVR32_MACB0_TXD_2_PIN              69
#define AVR32_MACB0_TXD_2_FUNCTION         0
#define AVR32_MACB0_TXD_3_PIN              70
#define AVR32_MACB0_TXD_3_FUNCTION         0
#define AVR32_MACB0_TX_CLK_0_PIN           72
#define AVR32_MACB0_TX_CLK_0_FUNCTION      0
#define AVR32_MACB0_TX_EN_0_PIN            71
#define AVR32_MACB0_TX_EN_0_FUNCTION       0
#define AVR32_MACB0_TX_ER_0_PIN            66
#define AVR32_MACB0_TX_ER_0_FUNCTION       0


/* MACB1 */ 
#define AVR32_MACB1_ADDRESS                0xFFF01C00
#define AVR32_MACB1                        (*((volatile avr32_macb_t*)AVR32_MACB1_ADDRESS))
#define AVR32_MACB1_CLK_HSB                41
#define AVR32_MACB1_CLK_PBB                103
#define AVR32_MACB1_IRQ                    832
#define AVR32_MACB1_COL_0_PIN              83
#define AVR32_MACB1_COL_0_FUNCTION         1
#define AVR32_MACB1_CRS_0_PIN              87
#define AVR32_MACB1_CRS_0_FUNCTION         1
#define AVR32_MACB1_MDC_0_PIN              99
#define AVR32_MACB1_MDC_0_FUNCTION         1
#define AVR32_MACB1_MDIO_0_PIN             98
#define AVR32_MACB1_MDIO_0_FUNCTION        1
#define AVR32_MACB1_RXD_2_PIN              93
#define AVR32_MACB1_RXD_2_FUNCTION         1
#define AVR32_MACB1_RXD_3_PIN              94
#define AVR32_MACB1_RXD_3_FUNCTION         1
#define AVR32_MACB1_RXD_1_PIN              102
#define AVR32_MACB1_RXD_1_FUNCTION         1
#define AVR32_MACB1_RXD_0_PIN              106
#define AVR32_MACB1_RXD_0_FUNCTION         1
#define AVR32_MACB1_RX_CLK_0_PIN           88
#define AVR32_MACB1_RX_CLK_0_FUNCTION      1
#define AVR32_MACB1_RX_DV_0_PIN            100
#define AVR32_MACB1_RX_DV_0_FUNCTION       1
#define AVR32_MACB1_RX_ER_0_PIN            101
#define AVR32_MACB1_RX_ER_0_FUNCTION       1
#define AVR32_MACB1_SCAN_CLOCK_0_0_PIN     88
#define AVR32_MACB1_SCAN_CLOCK_0_1_PIN     108
#define AVR32_MACB1_SPEED_0_PIN            111
#define AVR32_MACB1_SPEED_0_FUNCTION       1
#define AVR32_MACB1_TXD_2_PIN              91
#define AVR32_MACB1_TXD_2_FUNCTION         1
#define AVR32_MACB1_TXD_3_PIN              92
#define AVR32_MACB1_TXD_3_FUNCTION         1
#define AVR32_MACB1_TXD_0_PIN              109
#define AVR32_MACB1_TXD_0_FUNCTION         1
#define AVR32_MACB1_TXD_1_PIN              110
#define AVR32_MACB1_TXD_1_FUNCTION         1
#define AVR32_MACB1_TX_CLK_0_PIN           108
#define AVR32_MACB1_TX_CLK_0_FUNCTION      1
#define AVR32_MACB1_TX_EN_0_PIN            107
#define AVR32_MACB1_TX_EN_0_FUNCTION       1
#define AVR32_MACB1_TX_ER_0_PIN            90
#define AVR32_MACB1_TX_ER_0_FUNCTION       1

#include "avr32/macb_112.h"


/* PDC */

/* PDC */ 
#define AVR32_PDC_CLK_PBA                  80


/* MCI */
#define AVR32_MCI_NUM                      1

/* MCI */ 
#define AVR32_MCI_ADDRESS                  0xFFF02400
#define AVR32_MCI                          (*((volatile avr32_mci_t*)AVR32_MCI_ADDRESS))
#define AVR32_MCI_CLK_PBB                  105
#define AVR32_MCI_IRQ                      896
#define AVR32_MCI_PADDR_MSB                0
#define AVR32_MCI_SDCARD                   2
#define AVR32_MCI_PDATA_SIZE               0
#define AVR32_MCI_CLK_0_PIN                10
#define AVR32_MCI_CLK_0_FUNCTION           0
#define AVR32_MCI_CMD_0_PIN                11
#define AVR32_MCI_CMD_0_FUNCTION           0
#define AVR32_MCI_CMD_1_PIN                38
#define AVR32_MCI_CMD_1_FUNCTION           1
#define AVR32_MCI_DATA_0_PIN               12
#define AVR32_MCI_DATA_0_FUNCTION          0
#define AVR32_MCI_DATA_1_PIN               13
#define AVR32_MCI_DATA_1_FUNCTION          0
#define AVR32_MCI_DATA_2_PIN               14
#define AVR32_MCI_DATA_2_FUNCTION          0
#define AVR32_MCI_DATA_3_PIN               15
#define AVR32_MCI_DATA_3_FUNCTION          0
#define AVR32_MCI_DATA_4_PIN               39
#define AVR32_MCI_DATA_4_FUNCTION          1
#define AVR32_MCI_DATA_5_PIN               40
#define AVR32_MCI_DATA_5_FUNCTION          1
#define AVR32_MCI_DATA_6_PIN               41
#define AVR32_MCI_DATA_6_FUNCTION          1
#define AVR32_MCI_DATA_7_PIN               42
#define AVR32_MCI_DATA_7_FUNCTION          1
#define AVR32_MCI_SCAN_CLOCK_0_PIN         10

#include "avr32/mci_210.h"


/* PIO */
#define AVR32_PIO_NUM                      5

/* PIOA */ 
#define AVR32_PIOA_ADDRESS                 0xFFE02800
#define AVR32_PIOA                         (*((volatile avr32_pio_t*)AVR32_PIOA_ADDRESS))
#define AVR32_PIOA_CLK_PBA                 74
#define AVR32_PIOA_IRQ                     416
#define AVR32_PIOA_PADDR_MSB               0
#define AVR32_PIOA_PDATA_SIZE              0
#define AVR32_PIOA_LINES                   32
#define AVR32_PIOA_P_0_PIN                 0
#define AVR32_PIOA_P_1_PIN                 1
#define AVR32_PIOA_P_2_PIN                 2
#define AVR32_PIOA_P_3_PIN                 3
#define AVR32_PIOA_P_4_PIN                 4
#define AVR32_PIOA_P_5_PIN                 5
#define AVR32_PIOA_P_6_PIN                 6
#define AVR32_PIOA_P_7_PIN                 7
#define AVR32_PIOA_P_8_PIN                 8
#define AVR32_PIOA_P_9_PIN                 9
#define AVR32_PIOA_P_10_PIN                10
#define AVR32_PIOA_P_11_PIN                11
#define AVR32_PIOA_P_12_PIN                12
#define AVR32_PIOA_P_13_PIN                13
#define AVR32_PIOA_P_14_PIN                14
#define AVR32_PIOA_P_15_PIN                15
#define AVR32_PIOA_P_16_PIN                16
#define AVR32_PIOA_P_17_PIN                17
#define AVR32_PIOA_P_18_PIN                18
#define AVR32_PIOA_P_19_PIN                19
#define AVR32_PIOA_P_20_PIN                20
#define AVR32_PIOA_P_21_PIN                21
#define AVR32_PIOA_P_22_PIN                22
#define AVR32_PIOA_P_23_PIN                23
#define AVR32_PIOA_P_24_PIN                24
#define AVR32_PIOA_P_25_PIN                25
#define AVR32_PIOA_P_26_PIN                26
#define AVR32_PIOA_P_27_PIN                27
#define AVR32_PIOA_P_28_PIN                28
#define AVR32_PIOA_P_29_PIN                29
#define AVR32_PIOA_P_30_PIN                30
#define AVR32_PIOA_P_31_PIN                31


/* PIOB */ 
#define AVR32_PIOB_ADDRESS                 0xFFE02C00
#define AVR32_PIOB                         (*((volatile avr32_pio_t*)AVR32_PIOB_ADDRESS))
#define AVR32_PIOB_CLK_PBA                 75
#define AVR32_PIOB_IRQ                     448
#define AVR32_PIOB_PADDR_MSB               0
#define AVR32_PIOB_PDATA_SIZE              0
#define AVR32_PIOB_LINES                   31
#define AVR32_PIOB_P_0_PIN                 32
#define AVR32_PIOB_P_1_PIN                 33
#define AVR32_PIOB_P_2_PIN                 34
#define AVR32_PIOB_P_3_PIN                 35
#define AVR32_PIOB_P_4_PIN                 36
#define AVR32_PIOB_P_5_PIN                 37
#define AVR32_PIOB_P_6_PIN                 38
#define AVR32_PIOB_P_7_PIN                 39
#define AVR32_PIOB_P_8_PIN                 40
#define AVR32_PIOB_P_9_PIN                 41
#define AVR32_PIOB_P_10_PIN                42
#define AVR32_PIOB_P_11_PIN                43
#define AVR32_PIOB_P_12_PIN                44
#define AVR32_PIOB_P_13_PIN                45
#define AVR32_PIOB_P_14_PIN                46
#define AVR32_PIOB_P_15_PIN                47
#define AVR32_PIOB_P_16_PIN                48
#define AVR32_PIOB_P_17_PIN                49
#define AVR32_PIOB_P_18_PIN                50
#define AVR32_PIOB_P_19_PIN                51
#define AVR32_PIOB_P_20_PIN                52
#define AVR32_PIOB_P_21_PIN                53
#define AVR32_PIOB_P_22_PIN                54
#define AVR32_PIOB_P_23_PIN                55
#define AVR32_PIOB_P_24_PIN                56
#define AVR32_PIOB_P_25_PIN                57
#define AVR32_PIOB_P_26_PIN                58
#define AVR32_PIOB_P_27_PIN                59
#define AVR32_PIOB_P_28_PIN                60
#define AVR32_PIOB_P_29_PIN                61
#define AVR32_PIOB_P_30_PIN                62


/* PIOC */ 
#define AVR32_PIOC_ADDRESS                 0xFFE03000
#define AVR32_PIOC                         (*((volatile avr32_pio_t*)AVR32_PIOC_ADDRESS))
#define AVR32_PIOC_CLK_PBA                 76
#define AVR32_PIOC_IRQ                     480
#define AVR32_PIOC_PADDR_MSB               0
#define AVR32_PIOC_PDATA_SIZE              0
#define AVR32_PIOC_LINES                   32
#define AVR32_PIOC_P_0_PIN                 64
#define AVR32_PIOC_P_1_PIN                 65
#define AVR32_PIOC_P_2_PIN                 66
#define AVR32_PIOC_P_3_PIN                 67
#define AVR32_PIOC_P_4_PIN                 68
#define AVR32_PIOC_P_5_PIN                 69
#define AVR32_PIOC_P_6_PIN                 70
#define AVR32_PIOC_P_7_PIN                 71
#define AVR32_PIOC_P_8_PIN                 72
#define AVR32_PIOC_P_9_PIN                 73
#define AVR32_PIOC_P_10_PIN                74
#define AVR32_PIOC_P_11_PIN                75
#define AVR32_PIOC_P_12_PIN                76
#define AVR32_PIOC_P_13_PIN                77
#define AVR32_PIOC_P_14_PIN                78
#define AVR32_PIOC_P_15_PIN                79
#define AVR32_PIOC_P_16_PIN                80
#define AVR32_PIOC_P_17_PIN                81
#define AVR32_PIOC_P_18_PIN                82
#define AVR32_PIOC_P_19_PIN                83
#define AVR32_PIOC_P_20_PIN                84
#define AVR32_PIOC_P_21_PIN                85
#define AVR32_PIOC_P_22_PIN                86
#define AVR32_PIOC_P_23_PIN                87
#define AVR32_PIOC_P_24_PIN                88
#define AVR32_PIOC_P_25_PIN                89
#define AVR32_PIOC_P_26_PIN                90
#define AVR32_PIOC_P_27_PIN                91
#define AVR32_PIOC_P_28_PIN                92
#define AVR32_PIOC_P_29_PIN                93
#define AVR32_PIOC_P_30_PIN                94
#define AVR32_PIOC_P_31_PIN                95


/* PIOD */ 
#define AVR32_PIOD_ADDRESS                 0xFFE03400
#define AVR32_PIOD                         (*((volatile avr32_pio_t*)AVR32_PIOD_ADDRESS))
#define AVR32_PIOD_CLK_PBA                 77
#define AVR32_PIOD_IRQ                     512
#define AVR32_PIOD_PADDR_MSB               0
#define AVR32_PIOD_PDATA_SIZE              0
#define AVR32_PIOD_LINES                   19
#define AVR32_PIOD_P_0_PIN                 96
#define AVR32_PIOD_P_1_PIN                 97
#define AVR32_PIOD_P_2_PIN                 98
#define AVR32_PIOD_P_3_PIN                 99
#define AVR32_PIOD_P_4_PIN                 100
#define AVR32_PIOD_P_5_PIN                 101
#define AVR32_PIOD_P_6_PIN                 102
#define AVR32_PIOD_P_7_PIN                 103
#define AVR32_PIOD_P_8_PIN                 104
#define AVR32_PIOD_P_9_PIN                 105
#define AVR32_PIOD_P_10_PIN                106
#define AVR32_PIOD_P_11_PIN                107
#define AVR32_PIOD_P_12_PIN                108
#define AVR32_PIOD_P_13_PIN                109
#define AVR32_PIOD_P_14_PIN                110
#define AVR32_PIOD_P_15_PIN                111
#define AVR32_PIOD_P_16_PIN                112
#define AVR32_PIOD_P_17_PIN                113


/* PIOE */ 
#define AVR32_PIOE_ADDRESS                 0xFFE03800
#define AVR32_PIOE                         (*((volatile avr32_pio_t*)AVR32_PIOE_ADDRESS))
#define AVR32_PIOE_CLK_PBA                 78
#define AVR32_PIOE_IRQ                     544
#define AVR32_PIOE_PADDR_MSB               0
#define AVR32_PIOE_PDATA_SIZE              0
#define AVR32_PIOE_LINES                   27
#define AVR32_PIOE_P_0_PIN                 128
#define AVR32_PIOE_P_1_PIN                 129
#define AVR32_PIOE_P_2_PIN                 130
#define AVR32_PIOE_P_3_PIN                 131
#define AVR32_PIOE_P_4_PIN                 132
#define AVR32_PIOE_P_5_PIN                 133
#define AVR32_PIOE_P_6_PIN                 134
#define AVR32_PIOE_P_7_PIN                 135
#define AVR32_PIOE_P_8_PIN                 136
#define AVR32_PIOE_P_9_PIN                 137
#define AVR32_PIOE_P_10_PIN                138
#define AVR32_PIOE_P_11_PIN                139
#define AVR32_PIOE_P_12_PIN                140
#define AVR32_PIOE_P_13_PIN                141
#define AVR32_PIOE_P_14_PIN                142
#define AVR32_PIOE_P_15_PIN                143
#define AVR32_PIOE_P_16_PIN                144
#define AVR32_PIOE_P_17_PIN                145
#define AVR32_PIOE_P_18_PIN                146
#define AVR32_PIOE_P_19_PIN                147
#define AVR32_PIOE_P_20_PIN                148
#define AVR32_PIOE_P_21_PIN                149
#define AVR32_PIOE_P_22_PIN                150
#define AVR32_PIOE_P_23_PIN                151
#define AVR32_PIOE_P_24_PIN                152
#define AVR32_PIOE_P_25_PIN                153
#define AVR32_PIOE_P_26_PIN                154

#include "avr32/pio_202.h"


/* PM */
#define AVR32_PM_NUM                       1

/* PM */ 
#define AVR32_PM_ADDRESS                   0xFFF00000
#define AVR32_PM                           (*((volatile avr32_pm_t*)AVR32_PM_ADDRESS))
#define AVR32_PM_CLK_PBB                   96
#define AVR32_PM_IRQ                       640
#define AVR32_PM_GCLK_ABDAC                6
#define AVR32_PM_GCLK_LCDC                 7
#define AVR32_PM_GCLK_MSB                  4
#define AVR32_PM_GCLK_NUM                  8
#define AVR32_PM_CPU_MAX_FREQ              150000000
#define AVR32_PM_HSB_MAX_FREQ              75000000
#define AVR32_PM_PBA_MAX_FREQ              37500000
#define AVR32_PM_PBB_MAX_FREQ              75000000
#define AVR32_PM_PLL_VCO_RANGE0_MAX_FREQ   160000000
#define AVR32_PM_PLL_VCO_RANGE0_MIN_FREQ   80000000
#define AVR32_PM_GCLK_0_PIN                30
#define AVR32_PM_GCLK_0_FUNCTION           0
#define AVR32_PM_GCLK_1_PIN                31
#define AVR32_PM_GCLK_1_FUNCTION           0
#define AVR32_PM_GCLK_2_PIN                51
#define AVR32_PM_GCLK_2_FUNCTION           0
#define AVR32_PM_GCLK_3_PIN                61
#define AVR32_PM_GCLK_3_FUNCTION           0
#define AVR32_PM_GCLK_4_PIN                62
#define AVR32_PM_GCLK_4_FUNCTION           0
#define AVR32_PM_CLK_GRP_CPU               0
#define AVR32_PM_CLK_GRP_HSB               1
#define AVR32_PM_CLK_GRP_PBA               2
#define AVR32_PM_CLK_GRP_PBB               3
#define AVR32_PM_NUM_CLK_GRPS              4
#define AVR32_PM_NUM_CLKS_PER_GRP0         1
#define AVR32_PM_NUM_CLKS_PER_GRP1         11
#define AVR32_PM_NUM_CLKS_PER_GRP2         17
#define AVR32_PM_NUM_CLKS_PER_GRP3         16

#include "avr32/pm_100.h"


/* PSIF */
#define AVR32_PSIF_NUM                     1

/* PSIF */ 
#define AVR32_PSIF_ADDRESS                 0xFFE03C00
#define AVR32_PSIF                         (*((volatile avr32_psif_t*)AVR32_PSIF_ADDRESS))
#define AVR32_PSIF_CLK_PBA                 79
#define AVR32_PSIF_IRQ                     576
#define AVR32_PSIF_CLOCK_0_PIN             8
#define AVR32_PSIF_CLOCK_0_FUNCTION        0
#define AVR32_PSIF_CLOCK_1_PIN             43
#define AVR32_PSIF_CLOCK_1_FUNCTION        0
#define AVR32_PSIF_DATA_0_PIN              9
#define AVR32_PSIF_DATA_0_FUNCTION         0
#define AVR32_PSIF_DATA_1_PIN              44
#define AVR32_PSIF_DATA_1_FUNCTION         0

#include "avr32/psif_100.h"


/* PWM */
#define AVR32_PWM_NUM                      1

/* PWM */ 
#define AVR32_PWM_ADDRESS                  0xFFF01400
#define AVR32_PWM                          (*((volatile avr32_pwm_t*)AVR32_PWM_ADDRESS))
#define AVR32_PWM_CLK_PBB                  101
#define AVR32_PWM_IRQ                      768
#define AVR32_PWM_CHANNEL_LENGTH           0x4
#define AVR32_PWM_LINES_MSB                3
#define AVR32_PWM_0_PIN                    28
#define AVR32_PWM_0_FUNCTION               0
#define AVR32_PWM_1_PIN                    29
#define AVR32_PWM_1_FUNCTION               0
#define AVR32_PWM_2_PIN                    21
#define AVR32_PWM_2_FUNCTION               1
#define AVR32_PWM_3_PIN                    22
#define AVR32_PWM_3_FUNCTION               1

#include "avr32/pwm_120.h"


/* RTC */
#define AVR32_RTC_NUM                      1

/* RTC */ 
#define AVR32_RTC_ADDRESS                  0xFFF00080
#define AVR32_RTC                          (*((volatile avr32_rtc_t*)AVR32_RTC_ADDRESS))
#define AVR32_RTC_CLK_PBB                  96
#define AVR32_RTC_IRQ                      672

#include "avr32/rtc_100.h"


/* RAMC */

/* RAMC */ 
#define AVR32_RAMC_CLK_HSB                 35


/* SDRAMC */
#define AVR32_SDRAMC_NUM                   1

/* SDRAMC */ 
#define AVR32_SDRAMC_ADDRESS               0xFFF03800
#define AVR32_SDRAMC                       (*((volatile avr32_sdramc_t*)AVR32_SDRAMC_ADDRESS))
#define AVR32_SDRAMC_CLK_PBB               110
#define AVR32_SDRAMC_IRQ                   1024
#define AVR32_SDRAMC_HMATRIX_NR            4

#include "avr32/sdramc_200.h"


/* SMC */
#define AVR32_SMC_NUM                      1

/* SMC */ 
#define AVR32_SMC_ADDRESS                  0xFFF03400
#define AVR32_SMC                          (*((volatile avr32_smc_t*)AVR32_SMC_ADDRESS))
#define AVR32_SMC_CLK_PBB                  109
#define AVR32_SMC_HMATRIX_NR               4

#include "avr32/smc_104.h"


/* SPI */
#define AVR32_SPI_NUM                      2

/* SPI0 */ 
#define AVR32_SPI0_ADDRESS                 0xFFE00000
#define AVR32_SPI0                         (*((volatile avr32_spi_t*)AVR32_SPI0_ADDRESS))
#define AVR32_SPI0_CLK_PBA                 64
#define AVR32_SPI0_IRQ                     96
#define AVR32_SPI0_SPI_CS_MSB              3
#define AVR32_SPI0_MISO_0_PIN              0
#define AVR32_SPI0_MISO_0_FUNCTION         0
#define AVR32_SPI0_MOSI_0_PIN              1
#define AVR32_SPI0_MOSI_0_FUNCTION         0
#define AVR32_SPI0_NPCS_0_PIN              3
#define AVR32_SPI0_NPCS_0_FUNCTION         0
#define AVR32_SPI0_NPCS_1_PIN              4
#define AVR32_SPI0_NPCS_1_FUNCTION         0
#define AVR32_SPI0_NPCS_2_PIN              5
#define AVR32_SPI0_NPCS_2_FUNCTION         0
#define AVR32_SPI0_NPCS_3_PIN              20
#define AVR32_SPI0_NPCS_3_FUNCTION         1
#define AVR32_SPI0_SCAN_CLOCK_0_PIN        2
#define AVR32_SPI0_SCK_0_PIN               2
#define AVR32_SPI0_SCK_0_FUNCTION          0


/* SPI1 */ 
#define AVR32_SPI1_ADDRESS                 0xFFE00400
#define AVR32_SPI1                         (*((volatile avr32_spi_t*)AVR32_SPI1_ADDRESS))
#define AVR32_SPI1_CLK_PBA                 65
#define AVR32_SPI1_IRQ                     128
#define AVR32_SPI1_SPI_CS_MSB              3
#define AVR32_SPI1_MISO_0_PIN              32
#define AVR32_SPI1_MISO_0_FUNCTION         1
#define AVR32_SPI1_MOSI_0_PIN              33
#define AVR32_SPI1_MOSI_0_FUNCTION         1
#define AVR32_SPI1_NPCS_3_PIN              27
#define AVR32_SPI1_NPCS_3_FUNCTION         0
#define AVR32_SPI1_NPCS_0_PIN              34
#define AVR32_SPI1_NPCS_0_FUNCTION         1
#define AVR32_SPI1_NPCS_1_PIN              35
#define AVR32_SPI1_NPCS_1_FUNCTION         1
#define AVR32_SPI1_NPCS_2_PIN              36
#define AVR32_SPI1_NPCS_2_FUNCTION         1
#define AVR32_SPI1_SCAN_CLOCK_0_PIN        37
#define AVR32_SPI1_SCK_0_PIN               37
#define AVR32_SPI1_SCK_0_FUNCTION          1

#include "avr32/spi_171.h"


/* SSC */
#define AVR32_SSC_NUM                      3

/* SSC0 */ 
#define AVR32_SSC0_ADDRESS                 0xFFE01C00
#define AVR32_SSC0                         (*((volatile avr32_ssc_t*)AVR32_SSC0_ADDRESS))
#define AVR32_SSC0_CLK_PBA                 71
#define AVR32_SSC0_IRQ                     320
#define AVR32_SSC0_RX_CLOCK_0_PIN          22
#define AVR32_SSC0_RX_CLOCK_0_FUNCTION     0
#define AVR32_SSC0_RX_DATA_0_PIN           26
#define AVR32_SSC0_RX_DATA_0_FUNCTION      0
#define AVR32_SSC0_RX_FRAME_SYNC_0_PIN     21
#define AVR32_SSC0_RX_FRAME_SYNC_0_FUNCTION 0
#define AVR32_SSC0_TX_CLOCK_0_PIN          23
#define AVR32_SSC0_TX_CLOCK_0_FUNCTION     0
#define AVR32_SSC0_TX_DATA_0_PIN           25
#define AVR32_SSC0_TX_DATA_0_FUNCTION      0
#define AVR32_SSC0_TX_FRAME_SYNC_0_PIN     24
#define AVR32_SSC0_TX_FRAME_SYNC_0_FUNCTION 0


/* SSC1 */ 
#define AVR32_SSC1_ADDRESS                 0xFFE02000
#define AVR32_SSC1                         (*((volatile avr32_ssc_t*)AVR32_SSC1_ADDRESS))
#define AVR32_SSC1_CLK_PBA                 72
#define AVR32_SSC1_IRQ                     352
#define AVR32_SSC1_RX_CLOCK_0_PIN          3
#define AVR32_SSC1_RX_CLOCK_0_FUNCTION     1
#define AVR32_SSC1_RX_DATA_0_PIN           5
#define AVR32_SSC1_RX_DATA_0_FUNCTION      1
#define AVR32_SSC1_RX_FRAME_SYNC_0_PIN     0
#define AVR32_SSC1_RX_FRAME_SYNC_0_FUNCTION 1
#define AVR32_SSC1_TX_CLOCK_0_PIN          2
#define AVR32_SSC1_TX_CLOCK_0_FUNCTION     1
#define AVR32_SSC1_TX_DATA_0_PIN           4
#define AVR32_SSC1_TX_DATA_0_FUNCTION      1
#define AVR32_SSC1_TX_FRAME_SYNC_0_PIN     1
#define AVR32_SSC1_TX_FRAME_SYNC_0_FUNCTION 1


/* SSC2 */ 
#define AVR32_SSC2_ADDRESS                 0xFFE02400
#define AVR32_SSC2                         (*((volatile avr32_ssc_t*)AVR32_SSC2_ADDRESS))
#define AVR32_SSC2_CLK_PBA                 73
#define AVR32_SSC2_IRQ                     384
#define AVR32_SSC2_RX_CLOCK_0_PIN          50
#define AVR32_SSC2_RX_CLOCK_0_FUNCTION     0
#define AVR32_SSC2_RX_DATA_0_PIN           46
#define AVR32_SSC2_RX_DATA_0_FUNCTION      0
#define AVR32_SSC2_RX_FRAME_SYNC_0_PIN     49
#define AVR32_SSC2_RX_FRAME_SYNC_0_FUNCTION 0
#define AVR32_SSC2_TX_CLOCK_0_PIN          47
#define AVR32_SSC2_TX_CLOCK_0_FUNCTION     0
#define AVR32_SSC2_TX_DATA_0_PIN           45
#define AVR32_SSC2_TX_DATA_0_FUNCTION      0
#define AVR32_SSC2_TX_FRAME_SYNC_0_PIN     48
#define AVR32_SSC2_TX_FRAME_SYNC_0_FUNCTION 0

#include "avr32/ssc_220.h"


/* TC */
#define AVR32_TC_NUM                       2

/* TC0 */ 
#define AVR32_TC0_ADDRESS                  0xFFF00C00
#define AVR32_TC0                          (*((volatile avr32_tc_t*)AVR32_TC0_ADDRESS))
#define AVR32_TC0_CLK_PBB                  99
#define AVR32_TC0_IRQ0                     704
#define AVR32_TC0_IRQ1                     705
#define AVR32_TC0_IRQ2                     706
#define AVR32_TC0_A0_0_PIN                 12
#define AVR32_TC0_A0_0_FUNCTION            1
#define AVR32_TC0_A1_0_PIN                 13
#define AVR32_TC0_A1_0_FUNCTION            1
#define AVR32_TC0_A2_0_PIN                 14
#define AVR32_TC0_A2_0_FUNCTION            1
#define AVR32_TC0_B0_0_PIN                 15
#define AVR32_TC0_B0_0_FUNCTION            1
#define AVR32_TC0_B1_0_PIN                 16
#define AVR32_TC0_B1_0_FUNCTION            1
#define AVR32_TC0_B2_0_PIN                 17
#define AVR32_TC0_B2_0_FUNCTION            1
#define AVR32_TC0_CLK0_0_PIN               11
#define AVR32_TC0_CLK0_0_FUNCTION          1
#define AVR32_TC0_CLK1_0_PIN               19
#define AVR32_TC0_CLK1_0_FUNCTION          1
#define AVR32_TC0_CLK2_0_PIN               18
#define AVR32_TC0_CLK2_0_FUNCTION          1


/* TC1 */ 
#define AVR32_TC1_ADDRESS                  0xFFF01000
#define AVR32_TC1                          (*((volatile avr32_tc_t*)AVR32_TC1_ADDRESS))
#define AVR32_TC1_CLK_PBB                  100
#define AVR32_TC1_IRQ0                     736
#define AVR32_TC1_IRQ1                     737
#define AVR32_TC1_IRQ2                     738
#define AVR32_TC1_A0_0_PIN                 23
#define AVR32_TC1_A0_0_FUNCTION            1
#define AVR32_TC1_A1_0_PIN                 24
#define AVR32_TC1_A1_0_FUNCTION            1
#define AVR32_TC1_A2_0_PIN                 28
#define AVR32_TC1_A2_0_FUNCTION            1
#define AVR32_TC1_B0_0_PIN                 25
#define AVR32_TC1_B0_0_FUNCTION            1
#define AVR32_TC1_B1_0_PIN                 26
#define AVR32_TC1_B1_0_FUNCTION            1
#define AVR32_TC1_B2_0_PIN                 29
#define AVR32_TC1_B2_0_FUNCTION            1
#define AVR32_TC1_CLK0_0_PIN               27
#define AVR32_TC1_CLK0_0_FUNCTION          1
#define AVR32_TC1_CLK1_0_PIN               30
#define AVR32_TC1_CLK1_0_FUNCTION          1
#define AVR32_TC1_CLK2_0_PIN               31
#define AVR32_TC1_CLK2_0_FUNCTION          1

#include "avr32/tc_221.h"


/* TWI */
#define AVR32_TWI_NUM                      1

/* TWI */ 
#define AVR32_TWI_ADDRESS                  0xFFE00800
#define AVR32_TWI                          (*((volatile avr32_twi_t*)AVR32_TWI_ADDRESS))
#define AVR32_TWI_CLK_PBA                  66
#define AVR32_TWI_IRQ                      160
#define AVR32_TWI_SCL_0_PIN                7
#define AVR32_TWI_SCL_0_FUNCTION           0
#define AVR32_TWI_SDA_0_PIN                6
#define AVR32_TWI_SDA_0_FUNCTION           0

#include "avr32/twi_180.h"


/* USART */
#define AVR32_USART_NUM                    4

/* USART0 */ 
#define AVR32_USART0_ADDRESS               0xFFE00C00
#define AVR32_USART0                       (*((volatile avr32_usart_t*)AVR32_USART0_ADDRESS))
#define AVR32_USART0_CLK_PBA               67
#define AVR32_USART0_IRQ                   192
#define AVR32_USART0_CLK_0_PIN             10
#define AVR32_USART0_CLK_0_FUNCTION        1
#define AVR32_USART0_CTS_0_PIN             7
#define AVR32_USART0_CTS_0_FUNCTION        1
#define AVR32_USART0_RTS_0_PIN             6
#define AVR32_USART0_RTS_0_FUNCTION        1
#define AVR32_USART0_RXD_0_PIN             8
#define AVR32_USART0_RXD_0_FUNCTION        1
#define AVR32_USART0_TXD_0_PIN             9
#define AVR32_USART0_TXD_0_FUNCTION        1


/* USART1 */ 
#define AVR32_USART1_ADDRESS               0xFFE01000
#define AVR32_USART1                       (*((volatile avr32_usart_t*)AVR32_USART1_ADDRESS))
#define AVR32_USART1_CLK_PBA               68
#define AVR32_USART1_IRQ                   224
#define AVR32_USART1_CLK_0_PIN             16
#define AVR32_USART1_CLK_0_FUNCTION        0
#define AVR32_USART1_CTS_0_PIN             20
#define AVR32_USART1_CTS_0_FUNCTION        0
#define AVR32_USART1_RTS_0_PIN             19
#define AVR32_USART1_RTS_0_FUNCTION        0
#define AVR32_USART1_RXD_0_PIN             17
#define AVR32_USART1_RXD_0_FUNCTION        0
#define AVR32_USART1_TXD_0_PIN             18
#define AVR32_USART1_TXD_0_FUNCTION        0


/* USART2 */ 
#define AVR32_USART2_ADDRESS               0xFFE01400
#define AVR32_USART2                       (*((volatile avr32_usart_t*)AVR32_USART2_ADDRESS))
#define AVR32_USART2_CLK_PBA               69
#define AVR32_USART2_IRQ                   256
#define AVR32_USART2_CLK_0_PIN             60
#define AVR32_USART2_CLK_0_FUNCTION        1
#define AVR32_USART2_CTS_0_PIN             61
#define AVR32_USART2_CTS_0_FUNCTION        1
#define AVR32_USART2_RTS_0_PIN             62
#define AVR32_USART2_RTS_0_FUNCTION        1
#define AVR32_USART2_RXD_0_PIN             58
#define AVR32_USART2_RXD_0_FUNCTION        1
#define AVR32_USART2_TXD_0_PIN             59
#define AVR32_USART2_TXD_0_FUNCTION        1


/* USART3 */ 
#define AVR32_USART3_ADDRESS               0xFFE01800
#define AVR32_USART3                       (*((volatile avr32_usart_t*)AVR32_USART3_ADDRESS))
#define AVR32_USART3_CLK_PBA               70
#define AVR32_USART3_IRQ                   288
#define AVR32_USART3_CLK_0_PIN             51
#define AVR32_USART3_CLK_0_FUNCTION        1
#define AVR32_USART3_CTS_0_PIN             47
#define AVR32_USART3_CTS_0_FUNCTION        1
#define AVR32_USART3_RTS_0_PIN             48
#define AVR32_USART3_RTS_0_FUNCTION        1
#define AVR32_USART3_RXD_0_PIN             50
#define AVR32_USART3_RXD_0_FUNCTION        1
#define AVR32_USART3_TXD_0_PIN             49
#define AVR32_USART3_TXD_0_FUNCTION        1

#include "avr32/usart_302.h"


/* USBA */
#define AVR32_USBA_NUM                     1

/* USBA */ 
#define AVR32_USBA_ADDRESS                 0xFFF03000
#define AVR32_USBA                         (*((volatile avr32_usba_t*)AVR32_USBA_ADDRESS))
#define AVR32_USBA_FIFO_ADDRESS            0xFF300000
#define AVR32_USBA_FIFO_SIZE               0x100000
#define AVR32_USBA_FIFO                    (*((volatile avr32_usba_FIFO_t*)AVR32_USBA_FIFO_ADDRESS))
#define AVR32_USBA_CLK_HSB                 38
#define AVR32_USBA_CLK_PBB                 108
#define AVR32_USBA_IRQ                     992
#define AVR32_USBA_SCAN_CKUSB_0_PIN        96

#include "avr32/usba_140.h"


/* WDT */
#define AVR32_WDT_NUM                      1

/* WDT */ 
#define AVR32_WDT_ADDRESS                  0xFFF000B0
#define AVR32_WDT                          (*((volatile avr32_wdt_t*)AVR32_WDT_ADDRESS))

#include "avr32/wdt_100.h"


/* PAD->GPIO bits mapping */


#if !defined (DEPRECATED_DISABLE)

#define AVR32_ABDAC_COUNT                  1
#define AVR32_AC97C_COUNT                  1
#define AVR32_DMACA_COUNT                  1
#define AVR32_EBI_COUNT                    1
#define AVR32_ECC_COUNT                    1
#define AVR32_EIC_COUNT                    1
#define AVR32_HMATRIX_COUNT                1
#define AVR32_ISI_COUNT                    1
#define AVR32_LCDC_COUNT                   1
#define AVR32_MACB_COUNT                   2
#define AVR32_MCI_COUNT                    1
#define AVR32_PIO_COUNT                    5
#define AVR32_PM_COUNT                     1
#define AVR32_PSIF_COUNT                   1
#define AVR32_PWM_COUNT                    1
#define AVR32_RTC_COUNT                    1
#define AVR32_SDRAMC_COUNT                 1
#define AVR32_SMC_COUNT                    1
#define AVR32_SPI_COUNT                    2
#define AVR32_SSC_COUNT                    3
#define AVR32_TC_COUNT                     2
#define AVR32_TWI_COUNT                    1
#define AVR32_USART_COUNT                  4
#define AVR32_USBA_COUNT                   1
#define AVR32_WDT_COUNT                    1

#define AVR32_EBI0_ADDRESS                 0x00000000
#define AVR32_EBI0_SIZE                    0x04000000
#define AVR32_EBI0                         ((unsigned char *)AVR32_EBI0_ADDRESS)
#define AVR32_EBI1_ADDRESS                 0x10000000
#define AVR32_EBI1_SIZE                    0x10000000
#define AVR32_EBI1                         ((unsigned char *)AVR32_EBI1_ADDRESS)
#define AVR32_EBI2_ADDRESS                 0x08000000
#define AVR32_EBI2_SIZE                    0x04000000
#define AVR32_EBI2                         ((unsigned char *)AVR32_EBI2_ADDRESS)
#define AVR32_EBI3_ADDRESS                 0x0C000000
#define AVR32_EBI3_SIZE                    0x04000000
#define AVR32_EBI3                         ((unsigned char *)AVR32_EBI3_ADDRESS)
#define AVR32_EBI4_ADDRESS                 0x04000000
#define AVR32_EBI4_SIZE                    0x04000000
#define AVR32_EBI4                         ((unsigned char *)AVR32_EBI4_ADDRESS)
#define AVR32_EBI5_ADDRESS                 0x20000000
#define AVR32_EBI5_SIZE                    0x04000000
#define AVR32_EBI5                         ((unsigned char *)AVR32_EBI5_ADDRESS)

#define AVR32_ABDAC_APB_DAC_PADDR_MSB      0

#define AVR32_EIC_EIM_INT_MSB              3

#define AVR32_ISI_HISI_DATA_WIDTH          12

#define AVR32_LCDC_LCDC_FIFOA_MSB          8

#define AVR32_MCI_APB_MMCI_PADDR_MSB       0
#define AVR32_MCI_MMCI_SDCARD              2

#define AVR32_PIOA_APB_PIO2_PADDR_MSB      0

#define AVR32_PIOA_PIOA_LINES              32

#define AVR32_PIOB_APB_PIO2_PADDR_MSB      0

#define AVR32_PIOB_PIOB_LINES              31

#define AVR32_PIOC_APB_PIO2_PADDR_MSB      0

#define AVR32_PIOC_PIOC_LINES              32

#define AVR32_PIOD_APB_PIO2_PADDR_MSB      0

#define AVR32_PIOD_PIOD_LINES              19

#define AVR32_PIOE_APB_PIO2_PADDR_MSB      0

#define AVR32_PIOE_PIOE_LINES              27

#define AVR32_PWM_PWM_LINES_MSB            3
#define AVR32_PWM_PWM_0_PIN                28
#define AVR32_PWM_PWM_0_FUNCTION           0
#define AVR32_PWM_PWM_1_PIN                29
#define AVR32_PWM_PWM_1_FUNCTION           0
#define AVR32_PWM_PWM_2_PIN                21
#define AVR32_PWM_PWM_2_FUNCTION           1
#define AVR32_PWM_PWM_3_PIN                22
#define AVR32_PWM_PWM_3_FUNCTION           1

#endif


/* #ifndef AVR32_AP7000_H_INCLUDED */
#endif
