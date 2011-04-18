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
 * Model        : AP7200
 * Revision     : $Revision $
 * Checkin Date : $Date $
 *
 ****************************************************************************/
#ifndef AVR32_AP7200_H_INCLUDED
#define AVR32_AP7200_H_INCLUDED


/* Instance count */
#define AVR32_AC97C_NUM                    1
#define AVR32_AST_NUM                      2
#define AVR32_BUSMON_NUM                   1
#define AVR32_DMACA_NUM                    1
#define AVR32_EBI_NUM                      1
#define AVR32_ECC_NUM                      1
#define AVR32_EIC_NUM                      1
#define AVR32_FREQM_NUM                    1
#define AVR32_GPIO_NUM                     1
#define AVR32_HMATRIX_NUM                  1
#define AVR32_ISI_NUM                      1
#define AVR32_JTAG_NUM                     1
#define AVR32_KEYPAD_NUM                   1
#define AVR32_LCDC_NUM                     1
#define AVR32_MACB_NUM                     1
#define AVR32_MCI_NUM                      1
#define AVR32_MPOP_NUM                     1
#define AVR32_PDCA_NUM                     1
#define AVR32_PLL_NUM                      3
#define AVR32_PM_NUM                       1
#define AVR32_SCAN_NUM                     1
#define AVR32_SDC_NUM                      1
#define AVR32_SDRAMC_NUM                   1
#define AVR32_SMC_NUM                      1
#define AVR32_SPI_NUM                      4
#define AVR32_SSC_NUM                      3
#define AVR32_TC_NUM                       2
#define AVR32_TSADCC_NUM                   1
#define AVR32_TWI_NUM                      2
#define AVR32_USART_NUM                    6
#define AVR32_USBB_NUM                     1
#define AVR32_USBH_NUM                     1
#define AVR32_UTMI_NUM                     2
#define AVR32_WDT_NUM                      1

/* Maskable module clocks */
#define AVR32_PM_CLK_GRP_CPU               0
#define AVR32_PM_CLK_GRP_HSB               1
#define AVR32_PM_CLK_GRP_PBA               2
#define AVR32_PM_CLK_GRP_PBB               3
#define AVR32_PM_NUM_CLK_GRPS              4
#define AVR32_PM_NUM_CLKS_PER_GRP0         2
#define AVR32_PM_NUM_CLKS_PER_GRP1         15
#define AVR32_PM_NUM_CLKS_PER_GRP2         23
#define AVR32_PM_NUM_CLKS_PER_GRP3         17

/* CPU clocks */
#define AVR32_OCD_CLOCK_CLK_CPU            0
#define AVR32_OCD_CLK_CPU                  1

/* HSB clocks */
#define AVR32_HEBI_CLK_HSB                 32
#define AVR32_HMATRIX_CLK_HSB_PBA_BRIDGE   33
#define AVR32_HMATRIX_CLK_HSB_PBB_BRIDGE   34
#define AVR32_HMATRIX_CLK_HSB_PBC_BRIDGE   35
#define AVR32_HRAMC_CLK_HSB                36
#define AVR32_USBB_CLK_HSB                 37
#define AVR32_USBH_CLK_HSB                 38
#define AVR32_LCDC_CLK_HSB                 39
#define AVR32_MACB_CLK_HSB                 40
#define AVR32_PDMA_CLK_HSB                 41
#define AVR32_DMACA_CLK_HSB                42
#define AVR32_HROMC_CLK_HSB                43
#define AVR32_MPOP_CLK_HSB                 44
#define AVR32_BUSMON_CLK_HSB               46

/* PBA clocks */
#define AVR32_INTC_CLK_PBA                 64
#define AVR32_PM_CLK_PBA                   65
#define AVR32_SDC_CLK_PBA                  66
#define AVR32_AST0_CLK_PBA                 67
#define AVR32_AST1_CLK_PBA                 68
#define AVR32_WDT_CLK_PBA                  69
#define AVR32_EIC_CLK_PBA                  70
#define AVR32_FREQM_CLK_PBA                71
#define AVR32_GPIO_CLK_PBA                 72
#define AVR32_USART0_CLK_PBA               73
#define AVR32_USART1_CLK_PBA               74
#define AVR32_USART2_CLK_PBA               75
#define AVR32_USART3_CLK_PBA               76
#define AVR32_USART4_CLK_PBA               77
#define AVR32_USART5_CLK_PBA               78
#define AVR32_TWI0_CLK_PBA                 79
#define AVR32_TWI1_CLK_PBA                 80
#define AVR32_TC0_CLK_PBA                  81
#define AVR32_TC1_CLK_PBA                  82
#define AVR32_TSADCC_CLK_PBA               83
#define AVR32_KEYPAD_CLK_PBA               84
#define AVR32_AC97C_CLK_PBA                85
#define AVR32_BUSMON_CLK_PBA               86

/* PBB clocks */
#define AVR32_PDMA_CLK_PBB                 96
#define AVR32_MPOP_CLK_PBB                 98
#define AVR32_USBB_CLK_PBB                 99
#define AVR32_MACB_CLK_PBB                 100
#define AVR32_HSMC_CLK_PBB                 101
#define AVR32_HSDRAMC_CLK_PBB              102
#define AVR32_HECC_CLK_PBB                 103
#define AVR32_HMATRIX_CLK_PBB              104
#define AVR32_SPI0_CLK_PBB                 105
#define AVR32_SPI1_CLK_PBB                 106
#define AVR32_SPI2_CLK_PBB                 107
#define AVR32_SPI3_CLK_PBB                 108
#define AVR32_SSC0_CLK_PBB                 109
#define AVR32_SSC1_CLK_PBB                 110
#define AVR32_SSC2_CLK_PBB                 111
#define AVR32_MCI_CLK_PBB                  112

/* Generic clocks */
#define AVR32_PM_GCLK_GCLK0                0
#define AVR32_PM_GCLK_USBH                 0
#define AVR32_PM_GCLK_GCLK1                1
#define AVR32_PM_GCLK_GCLK2                2
#define AVR32_PM_GCLK_GCLK3                3
#define AVR32_PM_GCLK_GCLK4                4
#define AVR32_PM_GCLK_GCLK5                5
#define AVR32_PM_GCLK_GCLK6                6
#define AVR32_PM_GCLK_LCDC                 6
#define AVR32_PM_GCLK_GCLK7                7
#define AVR32_PM_GCLK_AST                  7

/* Core */
#include "avr32/core_c3_200.h"
/* OCD */
#include "avr32/ocd_o3_200.h"

/* CORE */ 
#define AVR32_CORE_COMPARE_IRQ             0
#define AVR32_CORE_PERFCTR_IRQ             1
#define AVR32_CORE_DC_MEMMAP_BASE          0xFB000000
#define AVR32_CORE_DC_SET_I_BITS           7
#define AVR32_CORE_IC_SET_I_BITS           7
#define AVR32_CORE_SCAN_CHAIN_MSB          19
#define AVR32_CORE_SCAN_CLOCK_MSB          1


/* OCD */ 

/* Memories */
#define AVR32_EBI_CS0_ADDRESS              0x04000000
#define AVR32_EBI_CS0_SIZE                 0x04000000
#define AVR32_EBI_CS0                      ((unsigned char *)AVR32_EBI_CS0_ADDRESS)
#define AVR32_EBI_CS0_EB_ADDRESS           0x00000000
#define AVR32_EBI_CS0_EB_SIZE              0x04000000
#define AVR32_EBI_CS0_EB                   ((unsigned char *)AVR32_EBI_CS0_EB_ADDRESS)
#define AVR32_EBI_CS1_ADDRESS              0x10000000
#define AVR32_EBI_CS1_SIZE                 0x10000000
#define AVR32_EBI_CS1                      ((unsigned char *)AVR32_EBI_CS1_ADDRESS)
#define AVR32_EBI_CS2_ADDRESS              0x20000000
#define AVR32_EBI_CS2_SIZE                 0x04000000
#define AVR32_EBI_CS2                      ((unsigned char *)AVR32_EBI_CS2_ADDRESS)
#define AVR32_EBI_CS3_ADDRESS              0x24000000
#define AVR32_EBI_CS3_SIZE                 0x04000000
#define AVR32_EBI_CS3                      ((unsigned char *)AVR32_EBI_CS3_ADDRESS)
#define AVR32_EBI_CS4_ADDRESS              0x0C000000
#define AVR32_EBI_CS4_SIZE                 0x04000000
#define AVR32_EBI_CS4                      ((unsigned char *)AVR32_EBI_CS4_ADDRESS)
#define AVR32_EBI_CS5_ADDRESS              0x28000000
#define AVR32_EBI_CS5_SIZE                 0x04000000
#define AVR32_EBI_CS5                      ((unsigned char *)AVR32_EBI_CS5_ADDRESS)
#define AVR32_INTRAM_ADDRESS               0x08000000
#define AVR32_INTRAM_SIZE                  0x00010000
#define AVR32_INTRAM                       ((unsigned char *)AVR32_INTRAM_ADDRESS)
#define AVR32_INTRAM0_ADDRESS              0x08000000
#define AVR32_INTRAM0_SIZE                 0x00008000
#define AVR32_INTRAM0                      ((unsigned char *)AVR32_INTRAM0_ADDRESS)
#define AVR32_INTRAM1_ADDRESS              0x08008000
#define AVR32_INTRAM1_SIZE                 0x00008000
#define AVR32_INTRAM1                      ((unsigned char *)AVR32_INTRAM1_ADDRESS)
#define AVR32_ROM_ADDRESS                  0x00000000
#define AVR32_ROM_SIZE                     0x00008000
#define AVR32_ROM                          ((unsigned char *)AVR32_ROM_ADDRESS)
#define AVR32_ROM_EB_ADDRESS               0x04000000
#define AVR32_ROM_EB_SIZE                  0x00008000
#define AVR32_ROM_EB                       ((unsigned char *)AVR32_ROM_EB_ADDRESS)

/* Interrupt Controller */
#define AVR32_INTC_ADDRESS                 0xFFD00000
#define AVR32_INTC                         (*((volatile avr32_intc_t*)AVR32_INTC_ADDRESS))
#define AVR32_INTC_NUM_INT_GRPS            46
#define AVR32_INTC_NUM_IRQS_PER_GRP0       2
#define AVR32_INTC_NUM_IRQS_PER_GRP1       20
#define AVR32_INTC_NUM_IRQS_PER_GRP10      1
#define AVR32_INTC_NUM_IRQS_PER_GRP11      5
#define AVR32_INTC_NUM_IRQS_PER_GRP12      5
#define AVR32_INTC_NUM_IRQS_PER_GRP13      15
#define AVR32_INTC_NUM_IRQS_PER_GRP14      1
#define AVR32_INTC_NUM_IRQS_PER_GRP15      0
#define AVR32_INTC_NUM_IRQS_PER_GRP16      4
#define AVR32_INTC_NUM_IRQS_PER_GRP17      4
#define AVR32_INTC_NUM_IRQS_PER_GRP18      3
#define AVR32_INTC_NUM_IRQS_PER_GRP19      4
#define AVR32_INTC_NUM_IRQS_PER_GRP2       1
#define AVR32_INTC_NUM_IRQS_PER_GRP20      0
#define AVR32_INTC_NUM_IRQS_PER_GRP21      0
#define AVR32_INTC_NUM_IRQS_PER_GRP22      0
#define AVR32_INTC_NUM_IRQS_PER_GRP23      0
#define AVR32_INTC_NUM_IRQS_PER_GRP24      1
#define AVR32_INTC_NUM_IRQS_PER_GRP25      1
#define AVR32_INTC_NUM_IRQS_PER_GRP26      1
#define AVR32_INTC_NUM_IRQS_PER_GRP27      1
#define AVR32_INTC_NUM_IRQS_PER_GRP28      1
#define AVR32_INTC_NUM_IRQS_PER_GRP29      1
#define AVR32_INTC_NUM_IRQS_PER_GRP3       6
#define AVR32_INTC_NUM_IRQS_PER_GRP30      1
#define AVR32_INTC_NUM_IRQS_PER_GRP31      1
#define AVR32_INTC_NUM_IRQS_PER_GRP32      3
#define AVR32_INTC_NUM_IRQS_PER_GRP33      3
#define AVR32_INTC_NUM_IRQS_PER_GRP34      1
#define AVR32_INTC_NUM_IRQS_PER_GRP35      1
#define AVR32_INTC_NUM_IRQS_PER_GRP36      1
#define AVR32_INTC_NUM_IRQS_PER_GRP37      1
#define AVR32_INTC_NUM_IRQS_PER_GRP38      1
#define AVR32_INTC_NUM_IRQS_PER_GRP39      1
#define AVR32_INTC_NUM_IRQS_PER_GRP4       1
#define AVR32_INTC_NUM_IRQS_PER_GRP40      1
#define AVR32_INTC_NUM_IRQS_PER_GRP41      1
#define AVR32_INTC_NUM_IRQS_PER_GRP42      1
#define AVR32_INTC_NUM_IRQS_PER_GRP43      1
#define AVR32_INTC_NUM_IRQS_PER_GRP44      1
#define AVR32_INTC_NUM_IRQS_PER_GRP45      1
#define AVR32_INTC_NUM_IRQS_PER_GRP5       5
#define AVR32_INTC_NUM_IRQS_PER_GRP6       1
#define AVR32_INTC_NUM_IRQS_PER_GRP7       3
#define AVR32_INTC_NUM_IRQS_PER_GRP8       1
#define AVR32_INTC_NUM_IRQS_PER_GRP9       1
#define AVR32_INTC_NUM_NMI                 1

#include "avr32/intc_101.h"


/* AC97C */

/* AC97C */ 
#define AVR32_AC97C_ADDRESS                0xFFD05C00
#define AVR32_AC97C                        (*((volatile avr32_ac97c_t*)AVR32_AC97C_ADDRESS))
#define AVR32_AC97C_IRQ                    1408
#define AVR32_AC97C_DMA_CHANNELS           4
#define AVR32_AC97C_DMA_SIZE_SIZE          2
#define AVR32_AC97C_SCLK_0_PIN             40
#define AVR32_AC97C_SCLK_0_FUNCTION        2
#define AVR32_AC97C_SDI_0_PIN              41
#define AVR32_AC97C_SDI_0_FUNCTION         2
#define AVR32_AC97C_SDO_0_PIN              42
#define AVR32_AC97C_SDO_0_FUNCTION         2
#define AVR32_AC97C_SYNC_0_PIN             43
#define AVR32_AC97C_SYNC_0_FUNCTION        2

#include "avr32/ac97c_220.h"


/* AST */

/* AST0 */ 
#define AVR32_AST0_ADDRESS                 0xFFD00C00
#define AVR32_AST0                         (*((volatile avr32_ast_t*)AVR32_AST0_ADDRESS))
#define AVR32_AST0_ALARM_IRQ               352
#define AVR32_AST0_CLKREADY_IRQ            356
#define AVR32_AST0_OVF_IRQ                 354
#define AVR32_AST0_PER_IRQ                 353
#define AVR32_AST0_READY_IRQ               355
#define AVR32_AST0_APB                     1
#define AVR32_AST0_CLK32                   1
#define AVR32_AST0_GENCLK                  3
#define AVR32_AST0_RCOSC                   0


/* AST1 */ 
#define AVR32_AST1_ADDRESS                 0xFFD01000
#define AVR32_AST1                         (*((volatile avr32_ast_t*)AVR32_AST1_ADDRESS))
#define AVR32_AST1_ALARM_IRQ               384
#define AVR32_AST1_CLKREADY_IRQ            388
#define AVR32_AST1_OVF_IRQ                 386
#define AVR32_AST1_PER_IRQ                 385
#define AVR32_AST1_READY_IRQ               387
#define AVR32_AST1_APB                     2
#define AVR32_AST1_CLK32                   1
#define AVR32_AST1_GENCLK                  3
#define AVR32_AST1_RCOSC                   0

#include "avr32/ast_100.h"


/* BUSMON */

/* BUSMONITOR */ 
#define AVR32_BUSMONITOR_ADDRESS           0xFFD06400
#define AVR32_BUSMONITOR                   (*((volatile avr32_busmon_t*)AVR32_BUSMONITOR_ADDRESS))
#define AVR32_BUSMONITOR_BUSMON_CH0_IMPL   1
#define AVR32_BUSMONITOR_BUSMON_CH1_IMPL   1
#define AVR32_BUSMONITOR_BUSMON_CH2_IMPL   1
#define AVR32_BUSMONITOR_BUSMON_CH3_IMPL   1

#include "avr32/busmon_100.h"


/* DMACA */

/* DMACA */ 
#define AVR32_DMACA_ADDRESS                0xFF100000
#define AVR32_DMACA                        (*((volatile avr32_dmaca_t*)AVR32_DMACA_ADDRESS))
#define AVR32_DMACA_BLOCK_IRQ              160
#define AVR32_DMACA_DSTT_IRQ               161
#define AVR32_DMACA_ERR_IRQ                162
#define AVR32_DMACA_SRCT_IRQ               163
#define AVR32_DMACA_TFR_IRQ                164
#define AVR32_DMACA_CH_AUDIOC_RXA          -1
#define AVR32_DMACA_CH_AUDIOC_RXB          -1
#define AVR32_DMACA_CH_AUDIOC_TXA          -1
#define AVR32_DMACA_CH_AUDIOC_TXB          -1
#define AVR32_DMACA_CH_DAC_TX              -1
#define AVR32_DMACA_CH_EXTRQ0              4
#define AVR32_DMACA_CH_EXTRQ1              5
#define AVR32_DMACA_CH_EXTRQ2              -1
#define AVR32_DMACA_CH_EXTRQ3              -1
#define AVR32_DMACA_CH_MMCI_RX             0
#define AVR32_DMACA_CH_MMCI_TX             1
#define AVR32_DMACA_CH_SPI0_RX             2
#define AVR32_DMACA_CH_SPI0_TX             3
#define AVR32_DMACA_NUM_CHANNELS           4
#define AVR32_DMACA_DMAACK_0_PIN           56
#define AVR32_DMACA_DMAACK_0_FUNCTION      0
#define AVR32_DMACA_DMAACK_1_PIN           86
#define AVR32_DMACA_DMAACK_1_FUNCTION      2
#define AVR32_DMACA_DMARQ_0_PIN            55
#define AVR32_DMACA_DMARQ_0_FUNCTION       0
#define AVR32_DMACA_DMARQ_1_PIN            85
#define AVR32_DMACA_DMARQ_1_FUNCTION       2

#include "avr32/dmaca_206a.h"


/* EBI */

/* EBI */ 
#define AVR32_EBI_CF0_CS                   4
#define AVR32_EBI_CF1_CS                   5
#define AVR32_EBI_HADDR_MSB                31
#define AVR32_EBI_HBURST_MSB               2
#define AVR32_EBI_HDATA_MSB                31
#define AVR32_EBI_HEBI_CS_MSB              5
#define AVR32_EBI_HMATRIX_NR               6
#define AVR32_EBI_HPROT_MSB                3
#define AVR32_EBI_HRESP_MSB                1
#define AVR32_EBI_HSIZE_MSB                2
#define AVR32_EBI_HTRANS_MSB               1
#define AVR32_EBI_NAND_CS                  3
#define AVR32_EBI_PADDR_MSB                31
#define AVR32_EBI_PDATA_MSB                31
#define AVR32_EBI_SDRAM_CS                 1
#define AVR32_EBI_SMC0_CS                  0
#define AVR32_EBI_SMC1_CS                  1
#define AVR32_EBI_SMC2_CS                  2
#define AVR32_EBI_SMC3_CS                  3
#define AVR32_EBI_SMC4_CS                  4
#define AVR32_EBI_SMC5_CS                  5
#define AVR32_EBI_ADDR_14_PIN              128
#define AVR32_EBI_ADDR_14_FUNCTION         0
#define AVR32_EBI_ADDR_15_PIN              129
#define AVR32_EBI_ADDR_15_FUNCTION         0
#define AVR32_EBI_ADDR_16_PIN              130
#define AVR32_EBI_ADDR_16_FUNCTION         0
#define AVR32_EBI_ADDR_17_PIN              131
#define AVR32_EBI_ADDR_17_FUNCTION         0
#define AVR32_EBI_ADDR_18_PIN              132
#define AVR32_EBI_ADDR_18_FUNCTION         0
#define AVR32_EBI_ADDR_19_PIN              133
#define AVR32_EBI_ADDR_19_FUNCTION         0
#define AVR32_EBI_ADDR_20_PIN              134
#define AVR32_EBI_ADDR_20_FUNCTION         0
#define AVR32_EBI_ADDR_21_PIN              135
#define AVR32_EBI_ADDR_21_FUNCTION         0
#define AVR32_EBI_ADDR_22_PIN              136
#define AVR32_EBI_ADDR_22_FUNCTION         0
#define AVR32_EBI_ADDR_23_PIN              137
#define AVR32_EBI_ADDR_23_FUNCTION         0
#define AVR32_EBI_ADDR_24_PIN              138
#define AVR32_EBI_ADDR_24_FUNCTION         0
#define AVR32_EBI_ADDR_25_PIN              139
#define AVR32_EBI_ADDR_25_FUNCTION         0
#define AVR32_EBI_ADDR_0_PIN               192
#define AVR32_EBI_ADDR_0_FUNCTION          0
#define AVR32_EBI_ADDR_1_PIN               193
#define AVR32_EBI_ADDR_1_FUNCTION          0
#define AVR32_EBI_ADDR_2_PIN               194
#define AVR32_EBI_ADDR_2_FUNCTION          0
#define AVR32_EBI_ADDR_3_PIN               195
#define AVR32_EBI_ADDR_3_FUNCTION          0
#define AVR32_EBI_ADDR_4_PIN               196
#define AVR32_EBI_ADDR_4_FUNCTION          0
#define AVR32_EBI_ADDR_5_PIN               197
#define AVR32_EBI_ADDR_5_FUNCTION          0
#define AVR32_EBI_ADDR_6_PIN               198
#define AVR32_EBI_ADDR_6_FUNCTION          0
#define AVR32_EBI_ADDR_7_PIN               199
#define AVR32_EBI_ADDR_7_FUNCTION          0
#define AVR32_EBI_ADDR_8_PIN               200
#define AVR32_EBI_ADDR_8_FUNCTION          0
#define AVR32_EBI_ADDR_9_PIN               201
#define AVR32_EBI_ADDR_9_FUNCTION          0
#define AVR32_EBI_ADDR_10_PIN              202
#define AVR32_EBI_ADDR_10_FUNCTION         0
#define AVR32_EBI_ADDR_11_PIN              203
#define AVR32_EBI_ADDR_11_FUNCTION         0
#define AVR32_EBI_ADDR_12_PIN              204
#define AVR32_EBI_ADDR_12_FUNCTION         0
#define AVR32_EBI_ADDR_13_PIN              205
#define AVR32_EBI_ADDR_13_FUNCTION         0
#define AVR32_EBI_CAS_0_PIN                231
#define AVR32_EBI_CAS_0_FUNCTION           0
#define AVR32_EBI_CFCE1_0_PIN              73
#define AVR32_EBI_CFCE1_0_FUNCTION         3
#define AVR32_EBI_CFCE2_0_PIN              72
#define AVR32_EBI_CFCE2_0_FUNCTION         3
#define AVR32_EBI_CFRNW_0_PIN              71
#define AVR32_EBI_CFRNW_0_FUNCTION         3
#define AVR32_EBI_DATA_16_PIN              140
#define AVR32_EBI_DATA_16_FUNCTION         0
#define AVR32_EBI_DATA_17_PIN              141
#define AVR32_EBI_DATA_17_FUNCTION         0
#define AVR32_EBI_DATA_18_PIN              142
#define AVR32_EBI_DATA_18_FUNCTION         0
#define AVR32_EBI_DATA_19_PIN              143
#define AVR32_EBI_DATA_19_FUNCTION         0
#define AVR32_EBI_DATA_20_PIN              144
#define AVR32_EBI_DATA_20_FUNCTION         0
#define AVR32_EBI_DATA_21_PIN              145
#define AVR32_EBI_DATA_21_FUNCTION         0
#define AVR32_EBI_DATA_22_PIN              146
#define AVR32_EBI_DATA_22_FUNCTION         0
#define AVR32_EBI_DATA_23_PIN              147
#define AVR32_EBI_DATA_23_FUNCTION         0
#define AVR32_EBI_DATA_24_PIN              148
#define AVR32_EBI_DATA_24_FUNCTION         0
#define AVR32_EBI_DATA_25_PIN              149
#define AVR32_EBI_DATA_25_FUNCTION         0
#define AVR32_EBI_DATA_26_PIN              150
#define AVR32_EBI_DATA_26_FUNCTION         0
#define AVR32_EBI_DATA_27_PIN              151
#define AVR32_EBI_DATA_27_FUNCTION         0
#define AVR32_EBI_DATA_28_PIN              152
#define AVR32_EBI_DATA_28_FUNCTION         0
#define AVR32_EBI_DATA_29_PIN              153
#define AVR32_EBI_DATA_29_FUNCTION         0
#define AVR32_EBI_DATA_30_PIN              154
#define AVR32_EBI_DATA_30_FUNCTION         0
#define AVR32_EBI_DATA_31_PIN              155
#define AVR32_EBI_DATA_31_FUNCTION         0
#define AVR32_EBI_DATA_0_PIN               206
#define AVR32_EBI_DATA_0_FUNCTION          0
#define AVR32_EBI_DATA_1_PIN               207
#define AVR32_EBI_DATA_1_FUNCTION          0
#define AVR32_EBI_DATA_2_PIN               208
#define AVR32_EBI_DATA_2_FUNCTION          0
#define AVR32_EBI_DATA_3_PIN               209
#define AVR32_EBI_DATA_3_FUNCTION          0
#define AVR32_EBI_DATA_4_PIN               210
#define AVR32_EBI_DATA_4_FUNCTION          0
#define AVR32_EBI_DATA_5_PIN               211
#define AVR32_EBI_DATA_5_FUNCTION          0
#define AVR32_EBI_DATA_6_PIN               212
#define AVR32_EBI_DATA_6_FUNCTION          0
#define AVR32_EBI_DATA_7_PIN               213
#define AVR32_EBI_DATA_7_FUNCTION          0
#define AVR32_EBI_DATA_8_PIN               214
#define AVR32_EBI_DATA_8_FUNCTION          0
#define AVR32_EBI_DATA_9_PIN               215
#define AVR32_EBI_DATA_9_FUNCTION          0
#define AVR32_EBI_DATA_10_PIN              216
#define AVR32_EBI_DATA_10_FUNCTION         0
#define AVR32_EBI_DATA_11_PIN              217
#define AVR32_EBI_DATA_11_FUNCTION         0
#define AVR32_EBI_DATA_12_PIN              218
#define AVR32_EBI_DATA_12_FUNCTION         0
#define AVR32_EBI_DATA_13_PIN              219
#define AVR32_EBI_DATA_13_FUNCTION         0
#define AVR32_EBI_DATA_14_PIN              220
#define AVR32_EBI_DATA_14_FUNCTION         0
#define AVR32_EBI_DATA_15_PIN              221
#define AVR32_EBI_DATA_15_FUNCTION         0
#define AVR32_EBI_NANDOE_0_PIN             160
#define AVR32_EBI_NANDOE_0_FUNCTION        0
#define AVR32_EBI_NANDWE_0_PIN             161
#define AVR32_EBI_NANDWE_0_FUNCTION        0
#define AVR32_EBI_NCS_2_PIN                157
#define AVR32_EBI_NCS_2_FUNCTION           0
#define AVR32_EBI_NCS_4_PIN                158
#define AVR32_EBI_NCS_4_FUNCTION           0
#define AVR32_EBI_NCS_5_PIN                159
#define AVR32_EBI_NCS_5_FUNCTION           0
#define AVR32_EBI_NCS_3_PIN                162
#define AVR32_EBI_NCS_3_FUNCTION           0
#define AVR32_EBI_NCS_0_PIN                222
#define AVR32_EBI_NCS_0_FUNCTION           0
#define AVR32_EBI_NCS_1_PIN                228
#define AVR32_EBI_NCS_1_FUNCTION           0
#define AVR32_EBI_NRD_0_PIN                223
#define AVR32_EBI_NRD_0_FUNCTION           0
#define AVR32_EBI_NWAIT_0_PIN              70
#define AVR32_EBI_NWAIT_0_FUNCTION         3
#define AVR32_EBI_NWE0_0_PIN               224
#define AVR32_EBI_NWE0_0_FUNCTION          0
#define AVR32_EBI_NWE1_0_PIN               225
#define AVR32_EBI_NWE1_0_FUNCTION          0
#define AVR32_EBI_NWE3_0_PIN               156
#define AVR32_EBI_NWE3_0_FUNCTION          0
#define AVR32_EBI_RAS_0_PIN                230
#define AVR32_EBI_RAS_0_FUNCTION           0
#define AVR32_EBI_SDA10_0_PIN              232
#define AVR32_EBI_SDA10_0_FUNCTION         0
#define AVR32_EBI_SDCK_0_PIN               226
#define AVR32_EBI_SDCK_0_FUNCTION          0
#define AVR32_EBI_SDCKE_0_PIN              227
#define AVR32_EBI_SDCKE_0_FUNCTION         0
#define AVR32_EBI_SDCS_0_PIN               157
#define AVR32_EBI_SDCS_0_FUNCTION          1
#define AVR32_EBI_SDWE_0_PIN               229
#define AVR32_EBI_SDWE_0_FUNCTION          0



/* ECC */

/* ECC */ 
#define AVR32_ECC_ADDRESS                  0xFFE04C00
#define AVR32_ECC                          (*((volatile avr32_ecc_t*)AVR32_ECC_ADDRESS))

#include "avr32/ecc_200.h"


/* EIC */

/* EIC */ 
#define AVR32_EIC_ADDRESS                  0xFFD01800
#define AVR32_EIC                          (*((volatile avr32_eic_t*)AVR32_EIC_ADDRESS))
#define AVR32_EIC_IRQ_1                   416
#define AVR32_EIC_IRQ_2                   417
#define AVR32_EIC_IRQ_3                   418
#define AVR32_EIC_IRQ_4                   419
#define AVR32_EIC_IRQ_5                   420
#define AVR32_EIC_IRQ_6                   421
#define AVR32_EIC_IRQ_7                   422
#define AVR32_EIC_IRQ_8                   423
#define AVR32_EIC_IRQ_9                   424
#define AVR32_EIC_IRQ_10                  425
#define AVR32_EIC_IRQ_11                  426
#define AVR32_EIC_IRQ_12                  427
#define AVR32_EIC_IRQ_13                  428
#define AVR32_EIC_IRQ_14                  429
#define AVR32_EIC_IRQ_15                  430
#define AVR32_EIC_INT_MSB                  15
#define AVR32_EIC_SCAN_MSB                 7
#define AVR32_EIC_STD_NUM                  15
#define AVR32_EIC_EXTINT_10_PIN            54
#define AVR32_EIC_EXTINT_10_FUNCTION       0
#define AVR32_EIC_EXTINT_2_PIN             83
#define AVR32_EIC_EXTINT_2_FUNCTION        0
#define AVR32_EIC_EXTINT_0_PIN             84
#define AVR32_EIC_EXTINT_0_FUNCTION        0
#define AVR32_EIC_EXTINT_11_PIN            8
#define AVR32_EIC_EXTINT_11_FUNCTION       1
#define AVR32_EIC_EXTINT_15_PIN            9
#define AVR32_EIC_EXTINT_15_FUNCTION       1
#define AVR32_EIC_EXTINT_14_PIN            11
#define AVR32_EIC_EXTINT_14_FUNCTION       1
#define AVR32_EIC_EXTINT_13_PIN            12
#define AVR32_EIC_EXTINT_13_FUNCTION       1
#define AVR32_EIC_EXTINT_4_PIN             19
#define AVR32_EIC_EXTINT_4_FUNCTION        1
#define AVR32_EIC_EXTINT_5_PIN             20
#define AVR32_EIC_EXTINT_5_FUNCTION        1
#define AVR32_EIC_EXTINT_1_PIN             86
#define AVR32_EIC_EXTINT_1_FUNCTION        1
#define AVR32_EIC_EXTINT_7_PIN             44
#define AVR32_EIC_EXTINT_7_FUNCTION        2
#define AVR32_EIC_EXTINT_8_PIN             46
#define AVR32_EIC_EXTINT_8_FUNCTION        2
#define AVR32_EIC_EXTINT_9_PIN             47
#define AVR32_EIC_EXTINT_9_FUNCTION        2
#define AVR32_EIC_EXTINT_6_PIN             36
#define AVR32_EIC_EXTINT_6_FUNCTION        3
#define AVR32_EIC_EXTINT_12_PIN            67
#define AVR32_EIC_EXTINT_12_FUNCTION       3
#define AVR32_EIC_EXTINT_3_PIN             68
#define AVR32_EIC_EXTINT_3_FUNCTION        3

#include "avr32/eic_300.h"


/* FREQM */

/* FREQM */ 
#define AVR32_FREQM_ADDRESS                0xFFD01C00
#define AVR32_FREQM                        (*((volatile avr32_freqm_t*)AVR32_FREQM_ADDRESS))
#define AVR32_FREQM_IRQ                    448
#define AVR32_FREQM_CPU                    0
#define AVR32_FREQM_CRIPEL                 12
#define AVR32_FREQM_GENCLK0                13
#define AVR32_FREQM_GENCLK1                14
#define AVR32_FREQM_GENCLK10               0
#define AVR32_FREQM_GENCLK2                15
#define AVR32_FREQM_GENCLK3                16
#define AVR32_FREQM_GENCLK4                17
#define AVR32_FREQM_GENCLK5                18
#define AVR32_FREQM_GENCLK6                19
#define AVR32_FREQM_GENCLK7                20
#define AVR32_FREQM_GENCLK8                0
#define AVR32_FREQM_GENCLK9                0
#define AVR32_FREQM_GENCLKDIV0             21
#define AVR32_FREQM_GENCLKDIV1             0
#define AVR32_FREQM_GENCLKDIV10            0
#define AVR32_FREQM_GENCLKDIV2             0
#define AVR32_FREQM_GENCLKDIV3             0
#define AVR32_FREQM_GENCLKDIV4             0
#define AVR32_FREQM_GENCLKDIV5             0
#define AVR32_FREQM_GENCLKDIV6             0
#define AVR32_FREQM_GENCLKDIV7             0
#define AVR32_FREQM_GENCLKDIV8             8
#define AVR32_FREQM_GENCLKDIV9             0
#define AVR32_FREQM_HSB                    1
#define AVR32_FREQM_NUM_CLK                22
#define AVR32_FREQM_OSC0                   4
#define AVR32_FREQM_OSC1                   5
#define AVR32_FREQM_OSC2                   6
#define AVR32_FREQM_OSC3                   0
#define AVR32_FREQM_OSC32                  7
#define AVR32_FREQM_OSC4                   0
#define AVR32_FREQM_PBA                    2
#define AVR32_FREQM_PBB                    3
#define AVR32_FREQM_PLL0                   9
#define AVR32_FREQM_PLL1                   10
#define AVR32_FREQM_PLL2                   11
#define AVR32_FREQM_PLL3                   0
#define AVR32_FREQM_RCOSC                  8
#define AVR32_FREQM_REFSEL_BITS            3
#define AVR32_FREQM_REF_OSC0               2
#define AVR32_FREQM_REF_OSC1               3
#define AVR32_FREQM_REF_OSC2               4
#define AVR32_FREQM_REF_OSC32              1
#define AVR32_FREQM_REF_RCOSC              0

#include "avr32/freqm_300.h"


/* GPIO */

/* GPIO */ 
#define AVR32_GPIO_ADDRESS                 0xFFD02000
#define AVR32_GPIO                         (*((volatile avr32_gpio_t*)AVR32_GPIO_ADDRESS))
#define AVR32_GPIO_IRQ_0                  512
#define AVR32_GPIO_IRQ_1                  513
#define AVR32_GPIO_IRQ_2                  514
#define AVR32_GPIO_IRQ_3                  515
#define AVR32_GPIO_IRQ_4                  544
#define AVR32_GPIO_IRQ_5                  545
#define AVR32_GPIO_IRQ_6                  546
#define AVR32_GPIO_IRQ_7                  547
#define AVR32_GPIO_IRQ_8                  576
#define AVR32_GPIO_IRQ_9                  577
#define AVR32_GPIO_IRQ_10                 578
#define AVR32_GPIO_IRQ_12                 608
#define AVR32_GPIO_IRQ_13                 609
#define AVR32_GPIO_IRQ_14                 610
#define AVR32_GPIO_IRQ_15                 611
#define AVR32_GPIO_IRQ_MSB                 29
#define AVR32_GPIO_MAX_IRQ_MSB             31
#define AVR32_GPIO_PADDR_BITS              12
#define AVR32_GPIO_PINS_MSB               234
#define AVR32_GPIO_IRQS_PER_GROUP          8
#define AVR32_GPIO_NUMBER_OF_PINS          235
#define AVR32_GPIO_PADDR_MSB               11
#define AVR32_GPIO_PDATA_MSB               31
#define AVR32_GPIO_PORT_LENGTH             8

#include "avr32/gpio_200.h"


/* HMATRIX */

/* HMATRIX */ 
#define AVR32_HMATRIX_ADDRESS              0xFFE05000
#define AVR32_HMATRIX                      (*((volatile avr32_hmatrix_t*)AVR32_HMATRIX_ADDRESS))

#include "avr32/hmatrix_230.h"


/* ISI */

/* ISI */ 
#define AVR32_ISI_ADDRESS                  0xFFE01000
#define AVR32_ISI                          (*((volatile avr32_isi_t*)AVR32_ISI_ADDRESS))
#define AVR32_ISI_IRQ                      64
#define AVR32_ISI_HISI_DATA_WIDTH          12
#define AVR32_ISI_DATA_8_PIN               24
#define AVR32_ISI_DATA_8_FUNCTION          1
#define AVR32_ISI_DATA_9_PIN               25
#define AVR32_ISI_DATA_9_FUNCTION          1
#define AVR32_ISI_DATA_10_PIN              26
#define AVR32_ISI_DATA_10_FUNCTION         1
#define AVR32_ISI_DATA_11_PIN              27
#define AVR32_ISI_DATA_11_FUNCTION         1
#define AVR32_ISI_DATA_0_PIN               48
#define AVR32_ISI_DATA_0_FUNCTION          3
#define AVR32_ISI_DATA_1_PIN               49
#define AVR32_ISI_DATA_1_FUNCTION          3
#define AVR32_ISI_DATA_2_PIN               50
#define AVR32_ISI_DATA_2_FUNCTION          3
#define AVR32_ISI_DATA_3_PIN               51
#define AVR32_ISI_DATA_3_FUNCTION          3
#define AVR32_ISI_DATA_4_PIN               52
#define AVR32_ISI_DATA_4_FUNCTION          3
#define AVR32_ISI_DATA_5_PIN               53
#define AVR32_ISI_DATA_5_FUNCTION          3
#define AVR32_ISI_DATA_6_PIN               54
#define AVR32_ISI_DATA_6_FUNCTION          3
#define AVR32_ISI_DATA_7_PIN               55
#define AVR32_ISI_DATA_7_FUNCTION          3
#define AVR32_ISI_HSYNC_0_PIN              37
#define AVR32_ISI_HSYNC_0_FUNCTION         3
#define AVR32_ISI_PCLK_0_PIN               39
#define AVR32_ISI_PCLK_0_FUNCTION          3
#define AVR32_ISI_VSYNC_0_PIN              38
#define AVR32_ISI_VSYNC_0_FUNCTION         3

#include "avr32/isi_0051.h"


/* JTAG */

/* JTAG */ 



/* KEYPAD */

/* KEYPAD */ 
#define AVR32_KEYPAD_ADDRESS               0xFFD06000
#define AVR32_KEYPAD                       (*((volatile avr32_keypad_t*)AVR32_KEYPAD_ADDRESS))
#define AVR32_KEYPAD_IRQ                   1120
#define AVR32_KEYPAD_DIRECT_MSB            7
#define AVR32_KEYPAD_SCAN_MSB              7
#define AVR32_KEYPAD_SENSE_MSB             7
#define AVR32_KEYPAD_DIRECT_0_PIN          74
#define AVR32_KEYPAD_DIRECT_0_FUNCTION        3
#define AVR32_KEYPAD_DIRECT_1_PIN          75
#define AVR32_KEYPAD_DIRECT_1_FUNCTION        3
#define AVR32_KEYPAD_DIRECT_2_PIN          76
#define AVR32_KEYPAD_DIRECT_2_FUNCTION        3
#define AVR32_KEYPAD_DIRECT_3_PIN          77
#define AVR32_KEYPAD_DIRECT_3_FUNCTION        3
#define AVR32_KEYPAD_DIRECT_4_PIN          78
#define AVR32_KEYPAD_DIRECT_4_FUNCTION        3
#define AVR32_KEYPAD_DIRECT_5_PIN          79
#define AVR32_KEYPAD_DIRECT_5_FUNCTION        3
#define AVR32_KEYPAD_DIRECT_6_PIN          80
#define AVR32_KEYPAD_DIRECT_6_FUNCTION        3
#define AVR32_KEYPAD_DIRECT_7_PIN          81
#define AVR32_KEYPAD_DIRECT_7_FUNCTION        3
#define AVR32_KEYPAD_ROT0A_0_PIN           24
#define AVR32_KEYPAD_ROT0A_0_FUNCTION        3
#define AVR32_KEYPAD_ROT0B_0_PIN           25
#define AVR32_KEYPAD_ROT0B_0_FUNCTION        3
#define AVR32_KEYPAD_ROT1A_0_PIN           26
#define AVR32_KEYPAD_ROT1A_0_FUNCTION        3
#define AVR32_KEYPAD_ROT1B_0_PIN           27
#define AVR32_KEYPAD_ROT1B_0_FUNCTION        3
#define AVR32_KEYPAD_SCAN_4_PIN            64
#define AVR32_KEYPAD_SCAN_4_FUNCTION        1
#define AVR32_KEYPAD_SCAN_3_PIN            66
#define AVR32_KEYPAD_SCAN_3_FUNCTION        1
#define AVR32_KEYPAD_SCAN_2_PIN            68
#define AVR32_KEYPAD_SCAN_2_FUNCTION        1
#define AVR32_KEYPAD_SCAN_1_PIN            70
#define AVR32_KEYPAD_SCAN_1_FUNCTION        1
#define AVR32_KEYPAD_SCAN_0_PIN            72
#define AVR32_KEYPAD_SCAN_0_FUNCTION        1
#define AVR32_KEYPAD_SCAN_5_PIN            28
#define AVR32_KEYPAD_SCAN_5_FUNCTION        3
#define AVR32_KEYPAD_SCAN_6_PIN            30
#define AVR32_KEYPAD_SCAN_6_FUNCTION        3
#define AVR32_KEYPAD_SCAN_7_PIN            47
#define AVR32_KEYPAD_SCAN_7_FUNCTION        3
#define AVR32_KEYPAD_SENSE_4_PIN           65
#define AVR32_KEYPAD_SENSE_4_FUNCTION        1
#define AVR32_KEYPAD_SENSE_3_PIN           67
#define AVR32_KEYPAD_SENSE_3_FUNCTION        1
#define AVR32_KEYPAD_SENSE_2_PIN           69
#define AVR32_KEYPAD_SENSE_2_FUNCTION        1
#define AVR32_KEYPAD_SENSE_1_PIN           71
#define AVR32_KEYPAD_SENSE_1_FUNCTION        1
#define AVR32_KEYPAD_SENSE_0_PIN           73
#define AVR32_KEYPAD_SENSE_0_FUNCTION        1
#define AVR32_KEYPAD_SENSE_5_PIN           29
#define AVR32_KEYPAD_SENSE_5_FUNCTION        3
#define AVR32_KEYPAD_SENSE_6_PIN           31
#define AVR32_KEYPAD_SENSE_6_FUNCTION        3
#define AVR32_KEYPAD_SENSE_7_PIN           46
#define AVR32_KEYPAD_SENSE_7_FUNCTION        3

#include "avr32/keypad_100.h"


/* LCDC */

/* LCDC */ 
#define AVR32_LCDC_ADDRESS                 0xFF000000
#define AVR32_LCDC                         (*((volatile avr32_lcdc_t*)AVR32_LCDC_ADDRESS))
#define AVR32_LCDC_EOF_IRQ                 96
#define AVR32_LCDC_LN_IRQ                  97
#define AVR32_LCDC_LSTLN_IRQ               98
#define AVR32_LCDC_MER_IRQ                 99
#define AVR32_LCDC_OWR_IRQ                 100
#define AVR32_LCDC_UFLW_IRQ                101
#define AVR32_LCDC_FIFOA_MSB               8
#define AVR32_LCDC_CC_0_PIN                96
#define AVR32_LCDC_CC_0_FUNCTION           0
#define AVR32_LCDC_DATA_0_PIN              97
#define AVR32_LCDC_DATA_0_FUNCTION         0
#define AVR32_LCDC_DATA_1_PIN              98
#define AVR32_LCDC_DATA_1_FUNCTION         0
#define AVR32_LCDC_DATA_2_PIN              99
#define AVR32_LCDC_DATA_2_FUNCTION         0
#define AVR32_LCDC_DATA_3_PIN              100
#define AVR32_LCDC_DATA_3_FUNCTION         0
#define AVR32_LCDC_DATA_4_PIN              101
#define AVR32_LCDC_DATA_4_FUNCTION         0
#define AVR32_LCDC_DATA_5_PIN              102
#define AVR32_LCDC_DATA_5_FUNCTION         0
#define AVR32_LCDC_DATA_6_PIN              103
#define AVR32_LCDC_DATA_6_FUNCTION         0
#define AVR32_LCDC_DATA_7_PIN              104
#define AVR32_LCDC_DATA_7_FUNCTION         0
#define AVR32_LCDC_DATA_8_PIN              105
#define AVR32_LCDC_DATA_8_FUNCTION         0
#define AVR32_LCDC_DATA_9_PIN              106
#define AVR32_LCDC_DATA_9_FUNCTION         0
#define AVR32_LCDC_DATA_10_PIN             107
#define AVR32_LCDC_DATA_10_FUNCTION        0
#define AVR32_LCDC_DATA_11_PIN             108
#define AVR32_LCDC_DATA_11_FUNCTION        0
#define AVR32_LCDC_DATA_12_PIN             109
#define AVR32_LCDC_DATA_12_FUNCTION        0
#define AVR32_LCDC_DATA_13_PIN             110
#define AVR32_LCDC_DATA_13_FUNCTION        0
#define AVR32_LCDC_DATA_14_PIN             111
#define AVR32_LCDC_DATA_14_FUNCTION        0
#define AVR32_LCDC_DATA_15_PIN             112
#define AVR32_LCDC_DATA_15_FUNCTION        0
#define AVR32_LCDC_DATA_16_PIN             113
#define AVR32_LCDC_DATA_16_FUNCTION        0
#define AVR32_LCDC_DATA_17_PIN             114
#define AVR32_LCDC_DATA_17_FUNCTION        0
#define AVR32_LCDC_DATA_18_PIN             115
#define AVR32_LCDC_DATA_18_FUNCTION        0
#define AVR32_LCDC_DATA_19_PIN             116
#define AVR32_LCDC_DATA_19_FUNCTION        0
#define AVR32_LCDC_DATA_20_PIN             117
#define AVR32_LCDC_DATA_20_FUNCTION        0
#define AVR32_LCDC_DATA_21_PIN             118
#define AVR32_LCDC_DATA_21_FUNCTION        0
#define AVR32_LCDC_DATA_22_PIN             119
#define AVR32_LCDC_DATA_22_FUNCTION        0
#define AVR32_LCDC_DATA_23_PIN             120
#define AVR32_LCDC_DATA_23_FUNCTION        0
#define AVR32_LCDC_DVAL_0_PIN              121
#define AVR32_LCDC_DVAL_0_FUNCTION         0
#define AVR32_LCDC_HSYNC_0_PIN             122
#define AVR32_LCDC_HSYNC_0_FUNCTION        0
#define AVR32_LCDC_MODE_0_PIN              123
#define AVR32_LCDC_MODE_0_FUNCTION         0
#define AVR32_LCDC_PCLK_0_PIN              124
#define AVR32_LCDC_PCLK_0_FUNCTION         0
#define AVR32_LCDC_PWR_0_PIN               125
#define AVR32_LCDC_PWR_0_FUNCTION          0
#define AVR32_LCDC_VSYNC_0_PIN             126
#define AVR32_LCDC_VSYNC_0_FUNCTION        0

#include "avr32/lcdc_172.h"


/* MACB */

/* MACB */ 
#define AVR32_MACB_ADDRESS                 0xFFE04000
#define AVR32_MACB                         (*((volatile avr32_macb_t*)AVR32_MACB_ADDRESS))
#define AVR32_MACB_IRQ                     256
#define AVR32_MACB_COL_0_PIN               0
#define AVR32_MACB_COL_0_FUNCTION          1
#define AVR32_MACB_CRS_0_PIN               77
#define AVR32_MACB_CRS_0_FUNCTION          2
#define AVR32_MACB_MDC_0_PIN               74
#define AVR32_MACB_MDC_0_FUNCTION          2
#define AVR32_MACB_MDIO_0_PIN              75
#define AVR32_MACB_MDIO_0_FUNCTION         2
#define AVR32_MACB_RXD_2_PIN               1
#define AVR32_MACB_RXD_2_FUNCTION          1
#define AVR32_MACB_RXD_3_PIN               2
#define AVR32_MACB_RXD_3_FUNCTION          1
#define AVR32_MACB_RXD_0_PIN               78
#define AVR32_MACB_RXD_0_FUNCTION          2
#define AVR32_MACB_RXD_1_PIN               79
#define AVR32_MACB_RXD_1_FUNCTION          2
#define AVR32_MACB_RX_CLK_0_PIN            3
#define AVR32_MACB_RX_CLK_0_FUNCTION       1
#define AVR32_MACB_RX_DV_0_PIN             4
#define AVR32_MACB_RX_DV_0_FUNCTION        1
#define AVR32_MACB_RX_ER_0_PIN             80
#define AVR32_MACB_RX_ER_0_FUNCTION        2
#define AVR32_MACB_SPEED_0_PIN             81
#define AVR32_MACB_SPEED_0_FUNCTION        2
#define AVR32_MACB_TXD_2_PIN               6
#define AVR32_MACB_TXD_2_FUNCTION          1
#define AVR32_MACB_TXD_3_PIN               7
#define AVR32_MACB_TXD_3_FUNCTION          1
#define AVR32_MACB_TXD_0_PIN               83
#define AVR32_MACB_TXD_0_FUNCTION          2
#define AVR32_MACB_TXD_1_PIN               84
#define AVR32_MACB_TXD_1_FUNCTION          2
#define AVR32_MACB_TX_CLK_0_PIN            76
#define AVR32_MACB_TX_CLK_0_FUNCTION       2
#define AVR32_MACB_TX_EN_0_PIN             82
#define AVR32_MACB_TX_EN_0_FUNCTION        2
#define AVR32_MACB_TX_ER_0_PIN             5
#define AVR32_MACB_TX_ER_0_FUNCTION        1
#define AVR32_MACB_WOL_0_PIN               44
#define AVR32_MACB_WOL_0_FUNCTION          3

#include "avr32/macb_1121.h"


/* MCI */

/* MCI */ 
#define AVR32_MCI_ADDRESS                  0xFFF00000
#define AVR32_MCI                          (*((volatile avr32_mci_t*)AVR32_MCI_ADDRESS))
#define AVR32_MCI_IRQ                      1376
#define AVR32_MCI_MMCI_SDCARD              2
#define AVR32_MCI_CLK_0_0_PIN              48
#define AVR32_MCI_CLK_0_0_FUNCTION         0
#define AVR32_MCI_CLK_0_1_PIN              64
#define AVR32_MCI_CLK_0_1_FUNCTION         0
#define AVR32_MCI_CMD_0_PIN                49
#define AVR32_MCI_CMD_0_FUNCTION           0
#define AVR32_MCI_CMD_1_PIN                65
#define AVR32_MCI_CMD_1_FUNCTION           0
#define AVR32_MCI_DATA_0_PIN               50
#define AVR32_MCI_DATA_0_FUNCTION          0
#define AVR32_MCI_DATA_1_PIN               51
#define AVR32_MCI_DATA_1_FUNCTION          0
#define AVR32_MCI_DATA_2_PIN               52
#define AVR32_MCI_DATA_2_FUNCTION          0
#define AVR32_MCI_DATA_3_PIN               53
#define AVR32_MCI_DATA_3_FUNCTION          0
#define AVR32_MCI_DATA_8_PIN               66
#define AVR32_MCI_DATA_8_FUNCTION          0
#define AVR32_MCI_DATA_9_PIN               67
#define AVR32_MCI_DATA_9_FUNCTION          0
#define AVR32_MCI_DATA_10_PIN              68
#define AVR32_MCI_DATA_10_FUNCTION         0
#define AVR32_MCI_DATA_11_PIN              69
#define AVR32_MCI_DATA_11_FUNCTION         0
#define AVR32_MCI_DATA_12_PIN              70
#define AVR32_MCI_DATA_12_FUNCTION         0
#define AVR32_MCI_DATA_13_PIN              71
#define AVR32_MCI_DATA_13_FUNCTION         0
#define AVR32_MCI_DATA_14_PIN              72
#define AVR32_MCI_DATA_14_FUNCTION         0
#define AVR32_MCI_DATA_15_PIN              73
#define AVR32_MCI_DATA_15_FUNCTION         0
#define AVR32_MCI_DATA_4_PIN               20
#define AVR32_MCI_DATA_4_FUNCTION          3
#define AVR32_MCI_DATA_5_PIN               21
#define AVR32_MCI_DATA_5_FUNCTION          3
#define AVR32_MCI_DATA_6_PIN               22
#define AVR32_MCI_DATA_6_FUNCTION          3
#define AVR32_MCI_DATA_7_PIN               23
#define AVR32_MCI_DATA_7_FUNCTION          3

#include "avr32/mci_300.h"


/* MPOP */

/* MPOP */ 
#define AVR32_MPOP_ADDRESS                 0xFFE02000
#define AVR32_MPOP                         (*((volatile avr32_mpop_t*)AVR32_MPOP_ADDRESS))
#define AVR32_MPOP_SLAVE_ADDRESS           0xF0000000
#define AVR32_MPOP_SLAVE_SIZE              0x400000
#define AVR32_MPOP_SLAVE                   (*((volatile avr32_mpop_slave_t*)AVR32_MPOP_SLAVE_ADDRESS))
#define AVR32_MPOP_IRQ                     128

#include "avr32/mpop_100.h"


/* PDCA */

/* PDCA */ 
#define AVR32_PDCA_ADDRESS                 0xFFE00000
#define AVR32_PDCA                         (*((volatile avr32_pdca_t*)AVR32_PDCA_ADDRESS))
#define AVR32_PDCA_IRQ_0                  32
#define AVR32_PDCA_IRQ_1                  33
#define AVR32_PDCA_IRQ_2                  34
#define AVR32_PDCA_IRQ_3                  35
#define AVR32_PDCA_IRQ_4                  36
#define AVR32_PDCA_IRQ_5                  37
#define AVR32_PDCA_IRQ_6                  38
#define AVR32_PDCA_IRQ_7                  39
#define AVR32_PDCA_IRQ_8                  40
#define AVR32_PDCA_IRQ_9                  41
#define AVR32_PDCA_IRQ_10                 42
#define AVR32_PDCA_IRQ_11                 43
#define AVR32_PDCA_IRQ_12                 44
#define AVR32_PDCA_IRQ_13                 45
#define AVR32_PDCA_IRQ_14                 46
#define AVR32_PDCA_IRQ_15                 47
#define AVR32_PDCA_IRQ_16                 48
#define AVR32_PDCA_IRQ_17                 49
#define AVR32_PDCA_IRQ_18                 50
#define AVR32_PDCA_IRQ_19                 51
#define AVR32_PDCA_CHANNEL_LENGTH          20
#define AVR32_PDCA_PID_AC97C_RXA           15
#define AVR32_PDCA_PID_AC97C_RXB           16
#define AVR32_PDCA_PID_AC97C_TXA           31
#define AVR32_PDCA_PID_AC97C_TXB           32
#define AVR32_PDCA_PID_SPI1_RX             6
#define AVR32_PDCA_PID_SPI1_TX             17
#define AVR32_PDCA_PID_SPI2_RX             7
#define AVR32_PDCA_PID_SPI2_TX             18
#define AVR32_PDCA_PID_SPI3_RX             8
#define AVR32_PDCA_PID_SPI3_TX             19
#define AVR32_PDCA_PID_SSC0_RX             11
#define AVR32_PDCA_PID_SSC0_TX             26
#define AVR32_PDCA_PID_SSC1_RX             12
#define AVR32_PDCA_PID_SSC1_TX             27
#define AVR32_PDCA_PID_SSC2_RX             13
#define AVR32_PDCA_PID_SSC2_TX             28
#define AVR32_PDCA_PID_TSADCC_RX           14
#define AVR32_PDCA_PID_TWI0_RX             9
#define AVR32_PDCA_PID_TWI0_TX             29
#define AVR32_PDCA_PID_TWI1_RX             10
#define AVR32_PDCA_PID_TWI1_TX             30
#define AVR32_PDCA_PID_USART0_RX           0
#define AVR32_PDCA_PID_USART0_TX           20
#define AVR32_PDCA_PID_USART1_RX           1
#define AVR32_PDCA_PID_USART1_TX           21
#define AVR32_PDCA_PID_USART2_RX           2
#define AVR32_PDCA_PID_USART2_TX           22
#define AVR32_PDCA_PID_USART3_RX           3
#define AVR32_PDCA_PID_USART3_TX           23
#define AVR32_PDCA_PID_USART4_RX           4
#define AVR32_PDCA_PID_USART4_TX           24
#define AVR32_PDCA_PID_USART5_RX           5
#define AVR32_PDCA_PID_USART5_TX           25

#include "avr32/pdca_110.h"


/* PLL */

/* PLL0 */ 
#define AVR32_PLL0_TEST_CKOUT_0_PIN        8
#define AVR32_PLL0_TEST_FRANGE_0_PIN       22
#define AVR32_PLL0_TEST_FRANGE_1_PIN       23
#define AVR32_PLL0_TEST_FREF_0_PIN         9
#define AVR32_PLL0_TEST_MODE_0_PIN         10
#define AVR32_PLL0_TEST_TCKI_0_PIN         11
#define AVR32_PLL0_TEST_TCKO_0_PIN         12


/* PLL1 */ 
#define AVR32_PLL1_TEST_CKOUT_0_PIN        13
#define AVR32_PLL1_TEST_FRANGE_0_PIN       24
#define AVR32_PLL1_TEST_FRANGE_1_PIN       25
#define AVR32_PLL1_TEST_FREF_0_PIN         14
#define AVR32_PLL1_TEST_MODE_0_PIN         15
#define AVR32_PLL1_TEST_TCKI_0_PIN         16
#define AVR32_PLL1_TEST_TCKO_0_PIN         17


/* PLL2 */ 
#define AVR32_PLL2_TEST_CKOUT_0_PIN        18
#define AVR32_PLL2_TEST_FRANGE_0_PIN       26
#define AVR32_PLL2_TEST_FRANGE_1_PIN       27
#define AVR32_PLL2_TEST_FREF_0_PIN         19
#define AVR32_PLL2_TEST_MODE_0_PIN         20
#define AVR32_PLL2_TEST_TCKI_0_PIN         21
#define AVR32_PLL2_TEST_TCKO_0_PIN         22



/* PM */

/* PM */ 
#define AVR32_PM_ADDRESS                   0xFFD00400
#define AVR32_PM                           (*((volatile avr32_pm_t*)AVR32_PM_ADDRESS))
#define AVR32_PM_IRQ                       320
#define AVR32_PM_CPU_MAX_FREQ              200000000
#define AVR32_PM_GCLK_MSB                  7
#define AVR32_PM_GCLK_NUM                  8
#define AVR32_PM_GC_USES_CLK_32            1
#define AVR32_PM_GC_USES_CLK_CPU           8
#define AVR32_PM_GC_USES_CLK_HSB           9
#define AVR32_PM_GC_USES_CLK_PBA           10
#define AVR32_PM_GC_USES_CLK_PBB           11
#define AVR32_PM_GC_USES_CLK_SLOW          0
#define AVR32_PM_GC_USES_OSC0              2
#define AVR32_PM_GC_USES_OSC1              3
#define AVR32_PM_GC_USES_OSC2              4
#define AVR32_PM_GC_USES_OSC3              0
#define AVR32_PM_GC_USES_OSC4              0
#define AVR32_PM_GC_USES_PLL0              5
#define AVR32_PM_GC_USES_PLL1              6
#define AVR32_PM_GC_USES_PLL2              7
#define AVR32_PM_GC_USES_PLL3              0
#define AVR32_PM_GC_USES_PLL4              0
#define AVR32_PM_GPLP_NUM                  2
#define AVR32_PM_HSB_MAX_FREQ              133000000
#define AVR32_PM_OSC_NUM                   3
#define AVR32_PM_PBA_MAX_FREQ              100000000
#define AVR32_PM_PBB_MAX_FREQ              133000000
#define AVR32_PM_PBC_MAX_FREQ              133000000
#define AVR32_PM_PLL_NUM                   3
#define AVR32_PM_PLL_VCO_RANGE0_MAX_FREQ   50000000
#define AVR32_PM_PLL_VCO_RANGE0_MIN_FREQ   25000000
#define AVR32_PM_PLL_VCO_RANGE1_MAX_FREQ   100000000
#define AVR32_PM_PLL_VCO_RANGE1_MIN_FREQ   50000000
#define AVR32_PM_PLL_VCO_RANGE2_MAX_FREQ   200000000
#define AVR32_PM_PLL_VCO_RANGE2_MIN_FREQ   100000000
#define AVR32_PM_PLL_VCO_RANGE3_MAX_FREQ   400000000
#define AVR32_PM_PLL_VCO_RANGE3_MIN_FREQ   200000000
#define AVR32_PM_RCOSC_CALIBRATION_BITS    2
#define AVR32_PM_WAKEUP_EN_KEYPAD          1
#define AVR32_PM_WAKEUP_EN_USB_DEVICE      0
#define AVR32_PM_WAKEUP_EN_USB_HOST        3
#define AVR32_PM_GCLK_1_PIN                31
#define AVR32_PM_GCLK_1_FUNCTION           0
#define AVR32_PM_GCLK_2_PIN                39
#define AVR32_PM_GCLK_2_FUNCTION           0
#define AVR32_PM_GCLK_6_PIN                82
#define AVR32_PM_GCLK_6_FUNCTION           0
#define AVR32_PM_GCLK_7_PIN                85
#define AVR32_PM_GCLK_7_FUNCTION           1
#define AVR32_PM_GCLK_0_PIN                18
#define AVR32_PM_GCLK_0_FUNCTION           2
#define AVR32_PM_GCLK_3_PIN                45
#define AVR32_PM_GCLK_3_FUNCTION           3
#define AVR32_PM_GCLK_4_PIN                56
#define AVR32_PM_GCLK_4_FUNCTION           3
#define AVR32_PM_GCLK_5_PIN                64
#define AVR32_PM_GCLK_5_FUNCTION           3
#define AVR32_PM_RSTM_N_0_PIN              34

#include "avr32/pm_300.h"


/* SCAN */

/* SCAN */ 
#define AVR32_SCAN_BURN_IN_0_PIN           85
#define AVR32_SCAN_BURN_IN_CLOCK_0_PIN      84
#define AVR32_SCAN_CLOCKS_32_PIN           33
#define AVR32_SCAN_CLOCKS_0_PIN            40
#define AVR32_SCAN_CLOCKS_1_PIN            41
#define AVR32_SCAN_CLOCKS_2_PIN            42
#define AVR32_SCAN_CLOCKS_3_PIN            43
#define AVR32_SCAN_CLOCKS_4_PIN            44
#define AVR32_SCAN_CLOCKS_5_PIN            45
#define AVR32_SCAN_CLOCKS_6_PIN            46
#define AVR32_SCAN_CLOCKS_7_PIN            47
#define AVR32_SCAN_CLOCKS_9_PIN            49
#define AVR32_SCAN_CLOCKS_11_PIN           51
#define AVR32_SCAN_CLOCKS_12_PIN           52
#define AVR32_SCAN_CLOCKS_14_PIN           54
#define AVR32_SCAN_CLOCKS_15_PIN           55
#define AVR32_SCAN_CLOCKS_17_PIN           64
#define AVR32_SCAN_CLOCKS_18_PIN           65
#define AVR32_SCAN_CLOCKS_19_PIN           66
#define AVR32_SCAN_CLOCKS_20_PIN           67
#define AVR32_SCAN_CLOCKS_21_PIN           68
#define AVR32_SCAN_CLOCKS_22_PIN           69
#define AVR32_SCAN_CLOCKS_10_PIN           79
#define AVR32_SCAN_CLOCKS_13_PIN           80
#define AVR32_SCAN_CLOCKS_16_PIN           81
#define AVR32_SCAN_CLOCKS_29_PIN           96
#define AVR32_SCAN_CLOCKS_30_PIN           97
#define AVR32_SCAN_CLOCKS_31_PIN           98
#define AVR32_SCAN_CLOCKS_28_PIN           99
#define AVR32_SCAN_CLOCKS_27_PIN           100
#define AVR32_SCAN_CLOCKS_8_PIN            101
#define AVR32_SCAN_CLOCKS_23_PIN           123
#define AVR32_SCAN_CLOCKS_24_PIN           124
#define AVR32_SCAN_CLOCKS_25_PIN           125
#define AVR32_SCAN_CLOCKS_26_PIN           126
#define AVR32_SCAN_CONTROL_RAM_WE_0_PIN      122
#define AVR32_SCAN_ENABLE_FROM_PAD_0_PIN      77
#define AVR32_SCAN_FRANGE_2_PIN            6
#define AVR32_SCAN_FRANGE_3_PIN            7
#define AVR32_SCAN_FRANGE_4_PIN            8
#define AVR32_SCAN_FRANGE_5_PIN            9
#define AVR32_SCAN_FRANGE_0_PIN            10
#define AVR32_SCAN_FRANGE_1_PIN            11
#define AVR32_SCAN_IDDQ_0_PIN              83
#define AVR32_SCAN_IN_0_PIN                102
#define AVR32_SCAN_IN_1_PIN                103
#define AVR32_SCAN_IN_2_PIN                104
#define AVR32_SCAN_IN_3_PIN                105
#define AVR32_SCAN_IN_4_PIN                106
#define AVR32_SCAN_IN_5_PIN                107
#define AVR32_SCAN_IN_6_PIN                108
#define AVR32_SCAN_IN_7_PIN                109
#define AVR32_SCAN_IN_8_PIN                110
#define AVR32_SCAN_IN_9_PIN                111
#define AVR32_SCAN_IN_10_PIN               112
#define AVR32_SCAN_IN_11_PIN               113
#define AVR32_SCAN_IN_12_PIN               114
#define AVR32_SCAN_IN_13_PIN               115
#define AVR32_SCAN_IN_14_PIN               116
#define AVR32_SCAN_IN_15_PIN               117
#define AVR32_SCAN_IN_16_PIN               118
#define AVR32_SCAN_IN_17_PIN               119
#define AVR32_SCAN_IN_18_PIN               120
#define AVR32_SCAN_IN_19_PIN               121
#define AVR32_SCAN_OCC_MODE_0_PIN          32
#define AVR32_SCAN_OUT_0_PIN               12
#define AVR32_SCAN_OUT_1_PIN               13
#define AVR32_SCAN_OUT_2_PIN               14
#define AVR32_SCAN_OUT_3_PIN               15
#define AVR32_SCAN_OUT_4_PIN               16
#define AVR32_SCAN_OUT_5_PIN               17
#define AVR32_SCAN_OUT_6_PIN               18
#define AVR32_SCAN_OUT_7_PIN               19
#define AVR32_SCAN_OUT_8_PIN               20
#define AVR32_SCAN_OUT_9_PIN               21
#define AVR32_SCAN_OUT_10_PIN              22
#define AVR32_SCAN_OUT_11_PIN              23
#define AVR32_SCAN_OUT_12_PIN              24
#define AVR32_SCAN_OUT_13_PIN              25
#define AVR32_SCAN_OUT_14_PIN              26
#define AVR32_SCAN_OUT_15_PIN              27
#define AVR32_SCAN_OUT_16_PIN              28
#define AVR32_SCAN_OUT_17_PIN              29
#define AVR32_SCAN_OUT_18_PIN              30
#define AVR32_SCAN_OUT_19_PIN              38
#define AVR32_SCAN_PLL_BYPASS_0_PIN        78
#define AVR32_SCAN_PLL_OUTPUT_0_PIN        35
#define AVR32_SCAN_PLL_OUTPUT_1_PIN        36
#define AVR32_SCAN_PLL_OUTPUT_2_PIN        74
#define AVR32_SCAN_PLL_RESET_0_PIN         37
#define AVR32_SCAN_RAM_WE_0_PIN            86
#define AVR32_SCAN_REF_CLOCK_0_PIN         31
#define AVR32_SCAN_REF_CLOCK_1_PIN         39
#define AVR32_SCAN_REF_CLOCK_2_PIN         75



/* SDC */

/* SDC */ 
#define AVR32_SDC_ADDRESS                  0xFFD00800
#define AVR32_SDC                          (*((volatile avr32_sdc_t*)AVR32_SDC_ADDRESS))
#define AVR32_SDC_IRQ                      1440
#define AVR32_SDC_GPLP_NUM                 2
#define AVR32_SDC_WAKEPIN_NUMBER           1

#include "avr32/sdc_100.h"


/* SDRAMC */

/* SDRAMC */ 
#define AVR32_SDRAMC_ADDRESS               0xFFE04800
#define AVR32_SDRAMC                       (*((volatile avr32_sdramc_t*)AVR32_SDRAMC_ADDRESS))
#define AVR32_SDRAMC_IRQ                   288

#include "avr32/sdramc_220.h"


/* SMC */

/* SMC */ 
#define AVR32_SMC_ADDRESS                  0xFFE04400
#define AVR32_SMC                          (*((volatile avr32_smc_t*)AVR32_SMC_ADDRESS))

#include "avr32/smc_106.h"


/* SPI */

/* SPI0 */ 
#define AVR32_SPI0_ADDRESS                 0xFFE05400
#define AVR32_SPI0                         (*((volatile avr32_spi_t*)AVR32_SPI0_ADDRESS))
#define AVR32_SPI0_IRQ                     1152
#define AVR32_SPI0_SPI_CS_MSB              3
#define AVR32_SPI0_MISO_0_PIN              33
#define AVR32_SPI0_MISO_0_FUNCTION         0
#define AVR32_SPI0_MOSI_0_PIN              32
#define AVR32_SPI0_MOSI_0_FUNCTION         0
#define AVR32_SPI0_NPCS_0_PIN              35
#define AVR32_SPI0_NPCS_0_FUNCTION         0
#define AVR32_SPI0_NPCS_1_PIN              36
#define AVR32_SPI0_NPCS_1_FUNCTION         0
#define AVR32_SPI0_NPCS_2_PIN              37
#define AVR32_SPI0_NPCS_2_FUNCTION         0
#define AVR32_SPI0_NPCS_3_PIN              38
#define AVR32_SPI0_NPCS_3_FUNCTION         0
#define AVR32_SPI0_SCK_0_PIN               34
#define AVR32_SPI0_SCK_0_FUNCTION          0


/* SPI1 */ 
#define AVR32_SPI1_ADDRESS                 0xFFE05800
#define AVR32_SPI1                         (*((volatile avr32_spi_t*)AVR32_SPI1_ADDRESS))
#define AVR32_SPI1_IRQ                     1184
#define AVR32_SPI1_SPI_CS_MSB              3
#define AVR32_SPI1_MISO_0_PIN              39
#define AVR32_SPI1_MISO_0_FUNCTION         1
#define AVR32_SPI1_MOSI_0_PIN              38
#define AVR32_SPI1_MOSI_0_FUNCTION         1
#define AVR32_SPI1_NPCS_0_PIN              36
#define AVR32_SPI1_NPCS_0_FUNCTION         1
#define AVR32_SPI1_SCK_0_PIN               37
#define AVR32_SPI1_SCK_0_FUNCTION          1


/* SPI2 */ 
#define AVR32_SPI2_ADDRESS                 0xFFE05C00
#define AVR32_SPI2                         (*((volatile avr32_spi_t*)AVR32_SPI2_ADDRESS))
#define AVR32_SPI2_IRQ                     1216
#define AVR32_SPI2_SPI_CS_MSB              3
#define AVR32_SPI2_MISO_0_PIN              30
#define AVR32_SPI2_MISO_0_FUNCTION         1
#define AVR32_SPI2_MOSI_0_PIN              31
#define AVR32_SPI2_MOSI_0_FUNCTION         1
#define AVR32_SPI2_NPCS_0_PIN              28
#define AVR32_SPI2_NPCS_0_FUNCTION         1
#define AVR32_SPI2_SCK_0_PIN               29
#define AVR32_SPI2_SCK_0_FUNCTION          1


/* SPI3 */ 
#define AVR32_SPI3_ADDRESS                 0xFFE06000
#define AVR32_SPI3                         (*((volatile avr32_spi_t*)AVR32_SPI3_ADDRESS))
#define AVR32_SPI3_IRQ                     1248
#define AVR32_SPI3_SPI_CS_MSB              3
#define AVR32_SPI3_MISO_0_0_PIN            25
#define AVR32_SPI3_MISO_0_0_FUNCTION       0
#define AVR32_SPI3_MISO_0_1_PIN            22
#define AVR32_SPI3_MISO_0_1_FUNCTION       2
#define AVR32_SPI3_MOSI_0_0_PIN            24
#define AVR32_SPI3_MOSI_0_0_FUNCTION       0
#define AVR32_SPI3_MOSI_0_1_PIN            23
#define AVR32_SPI3_MOSI_0_1_FUNCTION       2
#define AVR32_SPI3_NPCS_0_PIN              27
#define AVR32_SPI3_NPCS_0_FUNCTION         0
#define AVR32_SPI3_NPCS_1_0_PIN            28
#define AVR32_SPI3_NPCS_1_0_FUNCTION       0
#define AVR32_SPI3_NPCS_2_PIN              29
#define AVR32_SPI3_NPCS_2_FUNCTION         0
#define AVR32_SPI3_NPCS_3_PIN              30
#define AVR32_SPI3_NPCS_3_FUNCTION         0
#define AVR32_SPI3_NPCS_1_1_PIN            20
#define AVR32_SPI3_NPCS_1_1_FUNCTION       2
#define AVR32_SPI3_SCK_0_0_PIN             26
#define AVR32_SPI3_SCK_0_0_FUNCTION        0
#define AVR32_SPI3_SCK_0_1_PIN             21
#define AVR32_SPI3_SCK_0_1_FUNCTION        2

#include "avr32/spi_200.h"


/* SSC */

/* SSC0 */ 
#define AVR32_SSC0_ADDRESS                 0xFFE06400
#define AVR32_SSC0                         (*((volatile avr32_ssc_t*)AVR32_SSC0_ADDRESS))
#define AVR32_SSC0_IRQ                     1280
#define AVR32_SSC0_RX_CLOCK_0_PIN          40
#define AVR32_SSC0_RX_CLOCK_0_FUNCTION     0
#define AVR32_SSC0_RX_DATA_0_PIN           41
#define AVR32_SSC0_RX_DATA_0_FUNCTION      0
#define AVR32_SSC0_RX_FRAME_SYNC_0_PIN     42
#define AVR32_SSC0_RX_FRAME_SYNC_0_FUNCTION 0
#define AVR32_SSC0_TX_CLOCK_0_PIN          45
#define AVR32_SSC0_TX_CLOCK_0_FUNCTION     0
#define AVR32_SSC0_TX_DATA_0_PIN           44
#define AVR32_SSC0_TX_DATA_0_FUNCTION      0
#define AVR32_SSC0_TX_FRAME_SYNC_0_PIN     43
#define AVR32_SSC0_TX_FRAME_SYNC_0_FUNCTION 0


/* SSC1 */ 
#define AVR32_SSC1_ADDRESS                 0xFFE06800
#define AVR32_SSC1                         (*((volatile avr32_ssc_t*)AVR32_SSC1_ADDRESS))
#define AVR32_SSC1_IRQ                     1312
#define AVR32_SSC1_RX_CLOCK_0_PIN          56
#define AVR32_SSC1_RX_CLOCK_0_FUNCTION     1
#define AVR32_SSC1_RX_DATA_0_PIN           55
#define AVR32_SSC1_RX_DATA_0_FUNCTION      1
#define AVR32_SSC1_RX_FRAME_SYNC_0_PIN     54
#define AVR32_SSC1_RX_FRAME_SYNC_0_FUNCTION 1
#define AVR32_SSC1_TX_CLOCK_0_PIN          51
#define AVR32_SSC1_TX_CLOCK_0_FUNCTION     1
#define AVR32_SSC1_TX_DATA_0_PIN           52
#define AVR32_SSC1_TX_DATA_0_FUNCTION      1
#define AVR32_SSC1_TX_FRAME_SYNC_0_PIN     53
#define AVR32_SSC1_TX_FRAME_SYNC_0_FUNCTION 1


/* SSC2 */ 
#define AVR32_SSC2_ADDRESS                 0xFFE06C00
#define AVR32_SSC2                         (*((volatile avr32_ssc_t*)AVR32_SSC2_ADDRESS))
#define AVR32_SSC2_IRQ                     1344
#define AVR32_SSC2_RX_CLOCK_0_PIN          13
#define AVR32_SSC2_RX_CLOCK_0_FUNCTION     2
#define AVR32_SSC2_RX_DATA_0_PIN           15
#define AVR32_SSC2_RX_DATA_0_FUNCTION      2
#define AVR32_SSC2_RX_FRAME_SYNC_0_PIN     14
#define AVR32_SSC2_RX_FRAME_SYNC_0_FUNCTION 2
#define AVR32_SSC2_TX_CLOCK_0_PIN          10
#define AVR32_SSC2_TX_CLOCK_0_FUNCTION     2
#define AVR32_SSC2_TX_DATA_0_PIN           12
#define AVR32_SSC2_TX_DATA_0_FUNCTION      2
#define AVR32_SSC2_TX_FRAME_SYNC_0_PIN     11
#define AVR32_SSC2_TX_FRAME_SYNC_0_FUNCTION 2

#include "avr32/ssc_320.h"


/* TC */

/* TC0 */ 
#define AVR32_TC0_ADDRESS                  0xFFD05000
#define AVR32_TC0                          (*((volatile avr32_tc_t*)AVR32_TC0_ADDRESS))
#define AVR32_TC0_IRQ0                     1024
#define AVR32_TC0_IRQ1                     1025
#define AVR32_TC0_IRQ2                     1026
#define AVR32_TC0_A0_0_PIN                 48
#define AVR32_TC0_A0_0_FUNCTION            2
#define AVR32_TC0_A1_0_PIN                 51
#define AVR32_TC0_A1_0_FUNCTION            2
#define AVR32_TC0_A2_0_PIN                 54
#define AVR32_TC0_A2_0_FUNCTION            2
#define AVR32_TC0_B0_0_PIN                 49
#define AVR32_TC0_B0_0_FUNCTION            2
#define AVR32_TC0_B1_0_PIN                 52
#define AVR32_TC0_B1_0_FUNCTION            2
#define AVR32_TC0_B2_0_PIN                 55
#define AVR32_TC0_B2_0_FUNCTION            2
#define AVR32_TC0_CLK0_0_PIN               50
#define AVR32_TC0_CLK0_0_FUNCTION          2
#define AVR32_TC0_CLK1_0_PIN               53
#define AVR32_TC0_CLK1_0_FUNCTION          2
#define AVR32_TC0_CLK2_0_PIN               56
#define AVR32_TC0_CLK2_0_FUNCTION          2


/* TC1 */ 
#define AVR32_TC1_ADDRESS                  0xFFD05400
#define AVR32_TC1                          (*((volatile avr32_tc_t*)AVR32_TC1_ADDRESS))
#define AVR32_TC1_IRQ0                     1056
#define AVR32_TC1_IRQ1                     1057
#define AVR32_TC1_IRQ2                     1058
#define AVR32_TC1_A0_0_PIN                 24
#define AVR32_TC1_A0_0_FUNCTION            2
#define AVR32_TC1_A1_0_PIN                 26
#define AVR32_TC1_A1_0_FUNCTION            2
#define AVR32_TC1_A2_0_PIN                 28
#define AVR32_TC1_A2_0_FUNCTION            2
#define AVR32_TC1_B0_0_PIN                 25
#define AVR32_TC1_B0_0_FUNCTION            2
#define AVR32_TC1_B1_0_PIN                 27
#define AVR32_TC1_B1_0_FUNCTION            2
#define AVR32_TC1_B2_0_PIN                 29
#define AVR32_TC1_B2_0_FUNCTION            2
#define AVR32_TC1_CLK0_0_PIN               30
#define AVR32_TC1_CLK0_0_FUNCTION          2
#define AVR32_TC1_CLK1_0_PIN               31
#define AVR32_TC1_CLK1_0_FUNCTION          2
#define AVR32_TC1_CLK2_0_PIN               39
#define AVR32_TC1_CLK2_0_FUNCTION          2

#include "avr32/tc_222.h"


/* TSADCC */

/* TSADCC */ 
#define AVR32_TSADCC_ADDRESS               0xFFD05800
#define AVR32_TSADCC                       (*((volatile avr32_tsadcc_t*)AVR32_TSADCC_ADDRESS))
#define AVR32_TSADCC_IRQ                   1088
#define AVR32_TSADCC_ADC_CHANNELS_MSB      5
#define AVR32_TSADCC_ADC_DATA_MSB          9
#define AVR32_TSADCC_AD_0_PIN              0
#define AVR32_TSADCC_AD_0_FUNCTION         0
#define AVR32_TSADCC_AD_1_PIN              1
#define AVR32_TSADCC_AD_1_FUNCTION         0
#define AVR32_TSADCC_AD_2_PIN              2
#define AVR32_TSADCC_AD_2_FUNCTION         0
#define AVR32_TSADCC_AD_3_PIN              3
#define AVR32_TSADCC_AD_3_FUNCTION         0
#define AVR32_TSADCC_AD_4_PIN              4
#define AVR32_TSADCC_AD_4_FUNCTION         0
#define AVR32_TSADCC_AD_5_PIN              5
#define AVR32_TSADCC_AD_5_FUNCTION         0
#define AVR32_TSADCC_TEST_CLK_0_PIN        11
#define AVR32_TSADCC_TEST_DATA_0_PIN       16
#define AVR32_TSADCC_TEST_DATA_1_PIN       17
#define AVR32_TSADCC_TEST_DATA_2_PIN       18
#define AVR32_TSADCC_TEST_DATA_3_PIN       19
#define AVR32_TSADCC_TEST_DATA_4_PIN       20
#define AVR32_TSADCC_TEST_DATA_5_PIN       21
#define AVR32_TSADCC_TEST_DATA_6_PIN       22
#define AVR32_TSADCC_TEST_DATA_7_PIN       23
#define AVR32_TSADCC_TEST_DATA_8_PIN       24
#define AVR32_TSADCC_TEST_DATA_9_PIN       25
#define AVR32_TSADCC_TEST_EOC_0_PIN        15
#define AVR32_TSADCC_TEST_ONAD_0_PIN       9
#define AVR32_TSADCC_TEST_ONSAR_0_PIN      10
#define AVR32_TSADCC_TEST_PENDETECT_0_PIN  31
#define AVR32_TSADCC_TEST_SEL_0_PIN        12
#define AVR32_TSADCC_TEST_SEL_1_PIN        13
#define AVR32_TSADCC_TEST_SEL_2_PIN        14
#define AVR32_TSADCC_TEST_START_0_PIN      8
#define AVR32_TSADCC_TEST_TRIGON_0_PIN     30
#define AVR32_TSADCC_TEST_XMINUS_0_PIN     27
#define AVR32_TSADCC_TEST_XPLUS_0_PIN      26
#define AVR32_TSADCC_TEST_YMINUS_0_PIN     29
#define AVR32_TSADCC_TEST_YPLUS_0_PIN      28
#define AVR32_TSADCC_TRIGGER_0_0_PIN       49
#define AVR32_TSADCC_TRIGGER_0_0_FUNCTION  1
#define AVR32_TSADCC_TRIGGER_0_1_PIN       36
#define AVR32_TSADCC_TRIGGER_0_1_FUNCTION  2

#include "avr32/tsadcc_101.h"


/* TWI */

/* TWI0 */ 
#define AVR32_TWI0_ADDRESS                 0xFFD04800
#define AVR32_TWI0                         (*((volatile avr32_twi_t*)AVR32_TWI0_ADDRESS))
#define AVR32_TWI0_IRQ                     960
#define AVR32_TWI0_SCL_0_PIN               46
#define AVR32_TWI0_SCL_0_FUNCTION          0
#define AVR32_TWI0_SDA_0_PIN               47
#define AVR32_TWI0_SDA_0_FUNCTION          0


/* TWI1 */ 
#define AVR32_TWI1_ADDRESS                 0xFFD04C00
#define AVR32_TWI1                         (*((volatile avr32_twi_t*)AVR32_TWI1_ADDRESS))
#define AVR32_TWI1_IRQ                     992
#define AVR32_TWI1_SCL_0_PIN               37
#define AVR32_TWI1_SCL_0_FUNCTION          2
#define AVR32_TWI1_SDA_0_PIN               38
#define AVR32_TWI1_SDA_0_FUNCTION          2

#include "avr32/twi_300.h"


/* USART */

/* USART0 */ 
#define AVR32_USART0_ADDRESS               0xFFD03000
#define AVR32_USART0                       (*((volatile avr32_usart_t*)AVR32_USART0_ADDRESS))
#define AVR32_USART0_IRQ                   768
#define AVR32_USART0_CLK_0_PIN             45
#define AVR32_USART0_CLK_0_FUNCTION        2
#define AVR32_USART0_CTS_0_PIN             45
#define AVR32_USART0_CTS_0_FUNCTION        1
#define AVR32_USART0_RTS_0_PIN             44
#define AVR32_USART0_RTS_0_FUNCTION        1
#define AVR32_USART0_RXD_0_PIN             46
#define AVR32_USART0_RXD_0_FUNCTION        1
#define AVR32_USART0_TXD_0_PIN             47
#define AVR32_USART0_TXD_0_FUNCTION        1


/* USART1 */ 
#define AVR32_USART1_ADDRESS               0xFFD03400
#define AVR32_USART1                       (*((volatile avr32_usart_t*)AVR32_USART1_ADDRESS))
#define AVR32_USART1_IRQ                   800
#define AVR32_USART1_CLK_0_PIN             10
#define AVR32_USART1_CLK_0_FUNCTION        1
#define AVR32_USART1_CTS_0_PIN             10
#define AVR32_USART1_CTS_0_FUNCTION        0
#define AVR32_USART1_RTS_0_PIN             11
#define AVR32_USART1_RTS_0_FUNCTION        0
#define AVR32_USART1_RXD_0_PIN             9
#define AVR32_USART1_RXD_0_FUNCTION        0
#define AVR32_USART1_TXD_0_PIN             8
#define AVR32_USART1_TXD_0_FUNCTION        0


/* USART2 */ 
#define AVR32_USART2_ADDRESS               0xFFD03800
#define AVR32_USART2                       (*((volatile avr32_usart_t*)AVR32_USART2_ADDRESS))
#define AVR32_USART2_IRQ                   832
#define AVR32_USART2_CLK_0_PIN             18
#define AVR32_USART2_CLK_0_FUNCTION        1
#define AVR32_USART2_CTS_0_PIN             18
#define AVR32_USART2_CTS_0_FUNCTION        0
#define AVR32_USART2_RTS_0_PIN             19
#define AVR32_USART2_RTS_0_FUNCTION        0
#define AVR32_USART2_RXD_0_PIN             17
#define AVR32_USART2_RXD_0_FUNCTION        0
#define AVR32_USART2_TXD_0_PIN             16
#define AVR32_USART2_TXD_0_FUNCTION        0


/* USART3 */ 
#define AVR32_USART3_ADDRESS               0xFFD03C00
#define AVR32_USART3                       (*((volatile avr32_usart_t*)AVR32_USART3_ADDRESS))
#define AVR32_USART3_IRQ                   864
#define AVR32_USART3_CLK_0_PIN             76
#define AVR32_USART3_CLK_0_FUNCTION        1
#define AVR32_USART3_CTS_0_PIN             76
#define AVR32_USART3_CTS_0_FUNCTION        0
#define AVR32_USART3_DCD_0_PIN             78
#define AVR32_USART3_DCD_0_FUNCTION        0
#define AVR32_USART3_DSR_0_PIN             79
#define AVR32_USART3_DSR_0_FUNCTION        0
#define AVR32_USART3_DTR_0_PIN             80
#define AVR32_USART3_DTR_0_FUNCTION        0
#define AVR32_USART3_RI_0_PIN              81
#define AVR32_USART3_RI_0_FUNCTION         0
#define AVR32_USART3_RTS_0_PIN             77
#define AVR32_USART3_RTS_0_FUNCTION        0
#define AVR32_USART3_RXD_0_PIN             74
#define AVR32_USART3_RXD_0_FUNCTION        0
#define AVR32_USART3_TXD_0_PIN             75
#define AVR32_USART3_TXD_0_FUNCTION        0


/* USART4 */ 
#define AVR32_USART4_ADDRESS               0xFFD04000
#define AVR32_USART4                       (*((volatile avr32_usart_t*)AVR32_USART4_ADDRESS))
#define AVR32_USART4_IRQ                   896
#define AVR32_USART4_CLK_0_PIN             13
#define AVR32_USART4_CLK_0_FUNCTION        1
#define AVR32_USART4_CTS_0_PIN             13
#define AVR32_USART4_CTS_0_FUNCTION        0
#define AVR32_USART4_RTS_0_PIN             12
#define AVR32_USART4_RTS_0_FUNCTION        0
#define AVR32_USART4_RXD_0_PIN             15
#define AVR32_USART4_RXD_0_FUNCTION        0
#define AVR32_USART4_TXD_0_PIN             14
#define AVR32_USART4_TXD_0_FUNCTION        0


/* USART5 */ 
#define AVR32_USART5_ADDRESS               0xFFD04400
#define AVR32_USART5                       (*((volatile avr32_usart_t*)AVR32_USART5_ADDRESS))
#define AVR32_USART5_IRQ                   928
#define AVR32_USART5_CLK_0_PIN             21
#define AVR32_USART5_CLK_0_FUNCTION        1
#define AVR32_USART5_CTS_0_PIN             21
#define AVR32_USART5_CTS_0_FUNCTION        0
#define AVR32_USART5_RTS_0_PIN             20
#define AVR32_USART5_RTS_0_FUNCTION        0
#define AVR32_USART5_RXD_0_PIN             22
#define AVR32_USART5_RXD_0_FUNCTION        0
#define AVR32_USART5_TXD_0_PIN             23
#define AVR32_USART5_TXD_0_FUNCTION        0

#include "avr32/usart_410.h"


/* USBB */

/* USBB */ 
#define AVR32_USBB_ADDRESS                 0xFFE03000
#define AVR32_USBB                         (*((volatile avr32_usbb_t*)AVR32_USBB_ADDRESS))
#define AVR32_USBB_SLAVE_ADDRESS           0xFF200000
#define AVR32_USBB_SLAVE_SIZE              0x1000
#define AVR32_USBB_SLAVE                   (*((volatile avr32_usbb_slave_t*)AVR32_USBB_SLAVE_ADDRESS))
#define AVR32_USBB_IRQ                     192
#define AVR32_USBB_ENABLE_TEST_0_PIN       8
#define AVR32_USBB_SESSVLD_TEST_0_PIN      9
#define AVR32_USBB_USB_ID_0_PIN            85
#define AVR32_USBB_USB_ID_0_FUNCTION       0
#define AVR32_USBB_USB_VBOF_0_PIN          86
#define AVR32_USBB_USB_VBOF_0_FUNCTION     0
#define AVR32_USBB_VAVBUSVLD_TEST_0_PIN    10
#define AVR32_USBB_VBUSDISCHARGE_TEST_0_PIN 11
#define AVR32_USBB_VBUSPULSING_TEST_0_PIN  12

#include "avr32/usbb_3112.h"


/* USBH */

/* USBH */ 
#define AVR32_USBH_EHCI_ADDRESS            0xFF300000
#define AVR32_USBH_EHCI_SIZE               0x400
#define AVR32_USBH_EHCI                    (*((volatile avr32_usbh_ehci_t*)AVR32_USBH_EHCI_ADDRESS))
#define AVR32_USBH_OHCI_ADDRESS            0xFF400000
#define AVR32_USBH_OHCI_SIZE               0x400
#define AVR32_USBH_OHCI                    (*((volatile avr32_usbh_ohci_t*)AVR32_USBH_OHCI_ADDRESS))
#define AVR32_USBH_EHCI_IRQ                224
#define AVR32_USBH_OHCI_GENERAL_IRQ        225
#define AVR32_USBH_OHCI_SMI_IRQ            226
#define AVR32_USBH_OC_EN_N_0_0_PIN         6
#define AVR32_USBH_OC_EN_N_0_0_FUNCTION      0
#define AVR32_USBH_OC_EN_N_0_1_PIN         18
#define AVR32_USBH_OC_EN_N_0_1_FUNCTION      3
#define AVR32_USBH_OC_FLAG_N_0_0_PIN       7
#define AVR32_USBH_OC_FLAG_N_0_0_FUNCTION      0
#define AVR32_USBH_OC_FLAG_N_0_1_PIN       19
#define AVR32_USBH_OC_FLAG_N_0_1_FUNCTION      3

#include "avr32/usbh_291a.h"


/* UTMI */

/* UTMI0 */ 
#define AVR32_UTMI0_TEST_BIST_DONE_0_PIN   124
#define AVR32_UTMI0_TEST_BIST_RESULT_0_PIN 69
#define AVR32_UTMI0_TEST_CLKUSABLE_0_PIN   76
#define AVR32_UTMI0_TEST_CLKUSABLE_BIST_0_PIN 123
#define AVR32_UTMI0_TEST_CLK_12M_IN_0_PIN  126
#define AVR32_UTMI0_TEST_CLK_OUT_0_PIN     75
#define AVR32_UTMI0_TEST_DATAIN_0_PIN      77
#define AVR32_UTMI0_TEST_DATAIN_1_PIN      78
#define AVR32_UTMI0_TEST_DATAIN_2_PIN      79
#define AVR32_UTMI0_TEST_DATAIN_3_PIN      80
#define AVR32_UTMI0_TEST_DATAIN_4_PIN      81
#define AVR32_UTMI0_TEST_DATAIN_5_PIN      82
#define AVR32_UTMI0_TEST_DATAIN_6_PIN      83
#define AVR32_UTMI0_TEST_DATAIN_7_PIN      84
#define AVR32_UTMI0_TEST_DATAIN_8_PIN      85
#define AVR32_UTMI0_TEST_DATAIN_9_PIN      86
#define AVR32_UTMI0_TEST_DATAIN_10_PIN     96
#define AVR32_UTMI0_TEST_DATAIN_11_PIN     97
#define AVR32_UTMI0_TEST_DATAIN_12_PIN     98
#define AVR32_UTMI0_TEST_DATAIN_13_PIN     99
#define AVR32_UTMI0_TEST_DATAIN_14_PIN     100
#define AVR32_UTMI0_TEST_DATAIN_15_PIN     101
#define AVR32_UTMI0_TEST_DATAOUT_0_PIN     8
#define AVR32_UTMI0_TEST_DATAOUT_1_PIN     9
#define AVR32_UTMI0_TEST_DATAOUT_2_PIN     10
#define AVR32_UTMI0_TEST_DATAOUT_3_PIN     11
#define AVR32_UTMI0_TEST_DATAOUT_4_PIN     12
#define AVR32_UTMI0_TEST_DATAOUT_5_PIN     13
#define AVR32_UTMI0_TEST_DATAOUT_6_PIN     14
#define AVR32_UTMI0_TEST_DATAOUT_7_PIN     15
#define AVR32_UTMI0_TEST_DATAOUT_8_PIN     16
#define AVR32_UTMI0_TEST_DATAOUT_9_PIN     17
#define AVR32_UTMI0_TEST_DATAOUT_10_PIN    18
#define AVR32_UTMI0_TEST_DATAOUT_11_PIN    19
#define AVR32_UTMI0_TEST_DATAOUT_12_PIN    20
#define AVR32_UTMI0_TEST_DATAOUT_13_PIN    21
#define AVR32_UTMI0_TEST_DATAOUT_14_PIN    22
#define AVR32_UTMI0_TEST_DATAOUT_15_PIN    23
#define AVR32_UTMI0_TEST_DB16N8_0_0_PIN    24
#define AVR32_UTMI0_TEST_DB16N8_0_1_PIN    64
#define AVR32_UTMI0_TEST_DLLTESTMODE_0_PIN 25
#define AVR32_UTMI0_TEST_DMPULLDOWN_0_PIN  26
#define AVR32_UTMI0_TEST_DOCP8_0_PIN       27
#define AVR32_UTMI0_TEST_DPPULLDOWN_0_PIN  28
#define AVR32_UTMI0_TEST_FSLSSERIALMODE_0_PIN 29
#define AVR32_UTMI0_TEST_HOSTDISCONNECT_0_PIN 30
#define AVR32_UTMI0_TEST_HSREADY_0_PIN     31
#define AVR32_UTMI0_TEST_LINESTATE_0_PIN   32
#define AVR32_UTMI0_TEST_LINESTATE_1_PIN   33
#define AVR32_UTMI0_TEST_LOOPBACK_0_0_PIN  34
#define AVR32_UTMI0_TEST_LOOPBACK_0_1_PIN  54
#define AVR32_UTMI0_TEST_ONNDLL_0_PIN      35
#define AVR32_UTMI0_TEST_ONOSC_0_PIN       36
#define AVR32_UTMI0_TEST_ONPLL_0_0_PIN     37
#define AVR32_UTMI0_TEST_ONPLL_0_1_PIN     78
#define AVR32_UTMI0_TEST_OPMODE_0_PIN      38
#define AVR32_UTMI0_TEST_OPMODE_1_PIN      39
#define AVR32_UTMI0_TEST_OSCBYPASSN_0_PIN  40
#define AVR32_UTMI0_TEST_PLLCLK_IN_0_PIN   74
#define AVR32_UTMI0_TEST_PLL_CK_0_PIN      79
#define AVR32_UTMI0_TEST_PLL_DIVOUT_0_PIN  126
#define AVR32_UTMI0_TEST_PLL_DIVTEST_0_PIN 54
#define AVR32_UTMI0_TEST_PLL_DOWN_0_PIN    74
#define AVR32_UTMI0_TEST_PLL_ICP_0_PIN     55
#define AVR32_UTMI0_TEST_PLL_ICP_1_PIN     56
#define AVR32_UTMI0_TEST_PLL_IVCO_0_PIN    64
#define AVR32_UTMI0_TEST_PLL_IVCO_1_PIN    65
#define AVR32_UTMI0_TEST_PLL_LOCK_0_PIN    66
#define AVR32_UTMI0_TEST_PLL_MODE_0_PIN    75
#define AVR32_UTMI0_TEST_PLL_MODE_1_PIN    76
#define AVR32_UTMI0_TEST_PLL_ND_0_PIN      67
#define AVR32_UTMI0_TEST_PLL_ND_1_PIN      68
#define AVR32_UTMI0_TEST_PLL_ND_2_PIN      69
#define AVR32_UTMI0_TEST_PLL_ND_3_PIN      123
#define AVR32_UTMI0_TEST_PLL_ND_4_PIN      124
#define AVR32_UTMI0_TEST_PLL_ND_5_PIN      125
#define AVR32_UTMI0_TEST_PLL_UP_0_PIN      77
#define AVR32_UTMI0_TEST_POR_0_0_PIN       41
#define AVR32_UTMI0_TEST_POR_0_1_PIN       66
#define AVR32_UTMI0_TEST_RESET_0_0_PIN     42
#define AVR32_UTMI0_TEST_RESET_0_1_PIN     65
#define AVR32_UTMI0_TEST_RXACTIVE_0_PIN    43
#define AVR32_UTMI0_TEST_RXBISTE_0_PIN     67
#define AVR32_UTMI0_TEST_RXDM_0_PIN        44
#define AVR32_UTMI0_TEST_RXDP_0_PIN        45
#define AVR32_UTMI0_TEST_RXERROR_0_PIN     46
#define AVR32_UTMI0_TEST_RXRCV_0_PIN       47
#define AVR32_UTMI0_TEST_RXVALID_0_PIN     48
#define AVR32_UTMI0_TEST_RXVALIDH_0_PIN    49
#define AVR32_UTMI0_TEST_SPH_0_PIN         50
#define AVR32_UTMI0_TEST_SPH_1_PIN         51
#define AVR32_UTMI0_TEST_SPH_2_PIN         52
#define AVR32_UTMI0_TEST_SUSPENDM_0_PIN    53
#define AVR32_UTMI0_TEST_SUSPENDMSYNC_0_PIN 54
#define AVR32_UTMI0_TEST_TERMSELECT_0_PIN  55
#define AVR32_UTMI0_TEST_TXBISTE_0_PIN     68
#define AVR32_UTMI0_TEST_TXBITSTUFFENABLE_0_PIN 56
#define AVR32_UTMI0_TEST_TXBITSTUFFENABLEH_0_PIN 64
#define AVR32_UTMI0_TEST_TXDAT_0_PIN       65
#define AVR32_UTMI0_TEST_TXENABLEN_0_PIN   66
#define AVR32_UTMI0_TEST_TXREADY_0_PIN     67
#define AVR32_UTMI0_TEST_TXSE0_0_PIN       68
#define AVR32_UTMI0_TEST_TXVALID_0_PIN     69
#define AVR32_UTMI0_TEST_TXVALIDH_0_PIN    123
#define AVR32_UTMI0_TEST_XCVRSELECT_0_0_PIN 124
#define AVR32_UTMI0_TEST_XCVRSELECT_1_0_PIN 125
#define AVR32_UTMI0_TEST_XCVRSELECT_0_1_PIN 55
#define AVR32_UTMI0_TEST_XCVRSELECT_1_1_PIN 56


/* UTMI1 */ 
#define AVR32_UTMI1_TEST_BIST_DONE_0_PIN   32
#define AVR32_UTMI1_TEST_BIST_RESULT_0_PIN 30
#define AVR32_UTMI1_TEST_CLKUSABLE_0_PIN   76
#define AVR32_UTMI1_TEST_CLKUSABLE_BIST_0_PIN 31
#define AVR32_UTMI1_TEST_CLK_12M_IN_0_PIN  126
#define AVR32_UTMI1_TEST_CLK_OUT_0_PIN     75
#define AVR32_UTMI1_TEST_DATAIN_0_PIN      77
#define AVR32_UTMI1_TEST_DATAIN_1_PIN      78
#define AVR32_UTMI1_TEST_DATAIN_2_PIN      79
#define AVR32_UTMI1_TEST_DATAIN_3_PIN      80
#define AVR32_UTMI1_TEST_DATAIN_4_PIN      81
#define AVR32_UTMI1_TEST_DATAIN_5_PIN      82
#define AVR32_UTMI1_TEST_DATAIN_6_PIN      83
#define AVR32_UTMI1_TEST_DATAIN_7_PIN      84
#define AVR32_UTMI1_TEST_DATAIN_8_PIN      85
#define AVR32_UTMI1_TEST_DATAIN_9_PIN      86
#define AVR32_UTMI1_TEST_DATAIN_10_PIN     96
#define AVR32_UTMI1_TEST_DATAIN_11_PIN     97
#define AVR32_UTMI1_TEST_DATAIN_12_PIN     98
#define AVR32_UTMI1_TEST_DATAIN_13_PIN     99
#define AVR32_UTMI1_TEST_DATAIN_14_PIN     100
#define AVR32_UTMI1_TEST_DATAIN_15_PIN     101
#define AVR32_UTMI1_TEST_DATAOUT_0_PIN     8
#define AVR32_UTMI1_TEST_DATAOUT_1_PIN     9
#define AVR32_UTMI1_TEST_DATAOUT_2_PIN     10
#define AVR32_UTMI1_TEST_DATAOUT_3_PIN     11
#define AVR32_UTMI1_TEST_DATAOUT_4_PIN     12
#define AVR32_UTMI1_TEST_DATAOUT_5_PIN     13
#define AVR32_UTMI1_TEST_DATAOUT_6_PIN     14
#define AVR32_UTMI1_TEST_DATAOUT_7_PIN     15
#define AVR32_UTMI1_TEST_DATAOUT_8_PIN     16
#define AVR32_UTMI1_TEST_DATAOUT_9_PIN     17
#define AVR32_UTMI1_TEST_DATAOUT_10_PIN    18
#define AVR32_UTMI1_TEST_DATAOUT_11_PIN    19
#define AVR32_UTMI1_TEST_DATAOUT_12_PIN    20
#define AVR32_UTMI1_TEST_DATAOUT_13_PIN    21
#define AVR32_UTMI1_TEST_DATAOUT_14_PIN    22
#define AVR32_UTMI1_TEST_DATAOUT_15_PIN    23
#define AVR32_UTMI1_TEST_DB16N8_0_0_PIN    24
#define AVR32_UTMI1_TEST_DB16N8_0_1_PIN    25
#define AVR32_UTMI1_TEST_DLLTESTMODE_0_PIN 25
#define AVR32_UTMI1_TEST_DMPULLDOWN_0_PIN  26
#define AVR32_UTMI1_TEST_DOCP8_0_PIN       27
#define AVR32_UTMI1_TEST_DPPULLDOWN_0_PIN  28
#define AVR32_UTMI1_TEST_FSLSSERIALMODE_0_PIN 29
#define AVR32_UTMI1_TEST_HOSTDISCONNECT_0_PIN 30
#define AVR32_UTMI1_TEST_HSREADY_0_PIN     31
#define AVR32_UTMI1_TEST_LINESTATE_0_PIN   32
#define AVR32_UTMI1_TEST_LINESTATE_1_PIN   33
#define AVR32_UTMI1_TEST_LOOPBACK_0_0_PIN  34
#define AVR32_UTMI1_TEST_LOOPBACK_0_1_PIN  22
#define AVR32_UTMI1_TEST_ONNDLL_0_PIN      35
#define AVR32_UTMI1_TEST_ONOSC_0_PIN       36
#define AVR32_UTMI1_TEST_ONPLL_0_0_PIN     37
#define AVR32_UTMI1_TEST_ONPLL_0_1_PIN     39
#define AVR32_UTMI1_TEST_OPMODE_0_PIN      38
#define AVR32_UTMI1_TEST_OPMODE_1_PIN      39
#define AVR32_UTMI1_TEST_OSCBYPASSN_0_PIN  40
#define AVR32_UTMI1_TEST_PLLCLK_IN_0_PIN   74
#define AVR32_UTMI1_TEST_PLL_CK_0_PIN      40
#define AVR32_UTMI1_TEST_PLL_DIVOUT_0_PIN  34
#define AVR32_UTMI1_TEST_PLL_DIVTEST_0_PIN 22
#define AVR32_UTMI1_TEST_PLL_DOWN_0_PIN    35
#define AVR32_UTMI1_TEST_PLL_ICP_0_PIN     23
#define AVR32_UTMI1_TEST_PLL_ICP_1_PIN     24
#define AVR32_UTMI1_TEST_PLL_IVCO_0_PIN    25
#define AVR32_UTMI1_TEST_PLL_IVCO_1_PIN    26
#define AVR32_UTMI1_TEST_PLL_LOCK_0_PIN    27
#define AVR32_UTMI1_TEST_PLL_MODE_0_PIN    36
#define AVR32_UTMI1_TEST_PLL_MODE_1_PIN    37
#define AVR32_UTMI1_TEST_PLL_ND_0_PIN      28
#define AVR32_UTMI1_TEST_PLL_ND_1_PIN      29
#define AVR32_UTMI1_TEST_PLL_ND_2_PIN      30
#define AVR32_UTMI1_TEST_PLL_ND_3_PIN      31
#define AVR32_UTMI1_TEST_PLL_ND_4_PIN      32
#define AVR32_UTMI1_TEST_PLL_ND_5_PIN      33
#define AVR32_UTMI1_TEST_PLL_UP_0_PIN      38
#define AVR32_UTMI1_TEST_POR_0_0_PIN       41
#define AVR32_UTMI1_TEST_POR_0_1_PIN       26
#define AVR32_UTMI1_TEST_RESET_0_0_PIN     42
#define AVR32_UTMI1_TEST_RESET_0_1_PIN     27
#define AVR32_UTMI1_TEST_RXACTIVE_0_PIN    43
#define AVR32_UTMI1_TEST_RXBISTE_0_PIN     28
#define AVR32_UTMI1_TEST_RXDM_0_PIN        44
#define AVR32_UTMI1_TEST_RXDP_0_PIN        45
#define AVR32_UTMI1_TEST_RXERROR_0_PIN     46
#define AVR32_UTMI1_TEST_RXRCV_0_PIN       47
#define AVR32_UTMI1_TEST_RXVALID_0_PIN     48
#define AVR32_UTMI1_TEST_RXVALIDH_0_PIN    49
#define AVR32_UTMI1_TEST_SPH_0_PIN         50
#define AVR32_UTMI1_TEST_SPH_1_PIN         51
#define AVR32_UTMI1_TEST_SPH_2_PIN         52
#define AVR32_UTMI1_TEST_SUSPENDM_0_PIN    53
#define AVR32_UTMI1_TEST_SUSPENDMSYNC_0_PIN 54
#define AVR32_UTMI1_TEST_TERMSELECT_0_PIN  55
#define AVR32_UTMI1_TEST_TXBISTE_0_PIN     29
#define AVR32_UTMI1_TEST_TXBITSTUFFENABLE_0_PIN 56
#define AVR32_UTMI1_TEST_TXBITSTUFFENABLEH_0_PIN 64
#define AVR32_UTMI1_TEST_TXDAT_0_PIN       65
#define AVR32_UTMI1_TEST_TXENABLEN_0_PIN   66
#define AVR32_UTMI1_TEST_TXREADY_0_PIN     67
#define AVR32_UTMI1_TEST_TXSE0_0_PIN       68
#define AVR32_UTMI1_TEST_TXVALID_0_PIN     69
#define AVR32_UTMI1_TEST_TXVALIDH_0_PIN    123
#define AVR32_UTMI1_TEST_XCVRSELECT_0_0_PIN 124
#define AVR32_UTMI1_TEST_XCVRSELECT_1_0_PIN 125
#define AVR32_UTMI1_TEST_XCVRSELECT_0_1_PIN 23
#define AVR32_UTMI1_TEST_XCVRSELECT_1_1_PIN 24



/* WDT */

/* WDT */ 
#define AVR32_WDT_ADDRESS                  0xFFD01400
#define AVR32_WDT                          (*((volatile avr32_wdt_t*)AVR32_WDT_ADDRESS))
#define AVR32_WDT_WDTEXTRST_MSB            1

#include "avr32/wdt_300.h"


/* PAD->GPIO bits mapping */
#define AVR32_PIN_BOOT_SEL0   233
#define AVR32_PIN_BOOT_SEL1   234
#define AVR32_PIN_PA00   0
#define AVR32_PIN_PA01   1
#define AVR32_PIN_PA02   2
#define AVR32_PIN_PA03   3
#define AVR32_PIN_PA04   4
#define AVR32_PIN_PA05   5
#define AVR32_PIN_PA06   6
#define AVR32_PIN_PA07   7
#define AVR32_PIN_PA08   8
#define AVR32_PIN_PA09   9
#define AVR32_PIN_PA10   10
#define AVR32_PIN_PA11   11
#define AVR32_PIN_PA12   12
#define AVR32_PIN_PA13   13
#define AVR32_PIN_PA14   14
#define AVR32_PIN_PA15   15
#define AVR32_PIN_PA16   16
#define AVR32_PIN_PA17   17
#define AVR32_PIN_PA18   18
#define AVR32_PIN_PA19   19
#define AVR32_PIN_PA20   20
#define AVR32_PIN_PA21   21
#define AVR32_PIN_PA22   22
#define AVR32_PIN_PA23   23
#define AVR32_PIN_PA24   24
#define AVR32_PIN_PA25   25
#define AVR32_PIN_PA26   26
#define AVR32_PIN_PA27   27
#define AVR32_PIN_PA28   28
#define AVR32_PIN_PA29   29
#define AVR32_PIN_PA30   30
#define AVR32_PIN_PA31   31
#define AVR32_PIN_PB00   32
#define AVR32_PIN_PB01   33
#define AVR32_PIN_PB02   34
#define AVR32_PIN_PB03   35
#define AVR32_PIN_PB04   36
#define AVR32_PIN_PB05   37
#define AVR32_PIN_PB06   38
#define AVR32_PIN_PB07   39
#define AVR32_PIN_PB08   40
#define AVR32_PIN_PB09   41
#define AVR32_PIN_PB10   42
#define AVR32_PIN_PB11   43
#define AVR32_PIN_PB12   44
#define AVR32_PIN_PB13   45
#define AVR32_PIN_PB14   46
#define AVR32_PIN_PB15   47
#define AVR32_PIN_PB16   48
#define AVR32_PIN_PB17   49
#define AVR32_PIN_PB18   50
#define AVR32_PIN_PB19   51
#define AVR32_PIN_PB20   52
#define AVR32_PIN_PB21   53
#define AVR32_PIN_PB22   54
#define AVR32_PIN_PB23   55
#define AVR32_PIN_PB24   56
#define AVR32_PIN_PC00   64
#define AVR32_PIN_PC01   65
#define AVR32_PIN_PC02   66
#define AVR32_PIN_PC03   67
#define AVR32_PIN_PC04   68
#define AVR32_PIN_PC05   69
#define AVR32_PIN_PC06   70
#define AVR32_PIN_PC07   71
#define AVR32_PIN_PC08   72
#define AVR32_PIN_PC09   73
#define AVR32_PIN_PC10   74
#define AVR32_PIN_PC11   75
#define AVR32_PIN_PC12   76
#define AVR32_PIN_PC13   77
#define AVR32_PIN_PC14   78
#define AVR32_PIN_PC15   79
#define AVR32_PIN_PC16   80
#define AVR32_PIN_PC17   81
#define AVR32_PIN_PC18   82
#define AVR32_PIN_PC19   83
#define AVR32_PIN_PC20   84
#define AVR32_PIN_PC21   85
#define AVR32_PIN_PC22   86
#define AVR32_PIN_PD00   96
#define AVR32_PIN_PD01   97
#define AVR32_PIN_PD02   98
#define AVR32_PIN_PD03   99
#define AVR32_PIN_PD04   100
#define AVR32_PIN_PD05   101
#define AVR32_PIN_PD06   102
#define AVR32_PIN_PD07   103
#define AVR32_PIN_PD08   104
#define AVR32_PIN_PD09   105
#define AVR32_PIN_PD10   106
#define AVR32_PIN_PD11   107
#define AVR32_PIN_PD12   108
#define AVR32_PIN_PD13   109
#define AVR32_PIN_PD14   110
#define AVR32_PIN_PD15   111
#define AVR32_PIN_PD16   112
#define AVR32_PIN_PD17   113
#define AVR32_PIN_PD18   114
#define AVR32_PIN_PD19   115
#define AVR32_PIN_PD20   116
#define AVR32_PIN_PD21   117
#define AVR32_PIN_PD22   118
#define AVR32_PIN_PD23   119
#define AVR32_PIN_PD24   120
#define AVR32_PIN_PD25   121
#define AVR32_PIN_PD26   122
#define AVR32_PIN_PD27   123
#define AVR32_PIN_PD28   124
#define AVR32_PIN_PD29   125
#define AVR32_PIN_PD30   126
#define AVR32_PIN_PE00   128
#define AVR32_PIN_PE01   129
#define AVR32_PIN_PE02   130
#define AVR32_PIN_PE03   131
#define AVR32_PIN_PE04   132
#define AVR32_PIN_PE05   133
#define AVR32_PIN_PE06   134
#define AVR32_PIN_PE07   135
#define AVR32_PIN_PE08   136
#define AVR32_PIN_PE09   137
#define AVR32_PIN_PE10   138
#define AVR32_PIN_PE11   139
#define AVR32_PIN_PE12   140
#define AVR32_PIN_PE13   141
#define AVR32_PIN_PE14   142
#define AVR32_PIN_PE15   143
#define AVR32_PIN_PE16   144
#define AVR32_PIN_PE17   145
#define AVR32_PIN_PE18   146
#define AVR32_PIN_PE19   147
#define AVR32_PIN_PE20   148
#define AVR32_PIN_PE21   149
#define AVR32_PIN_PE22   150
#define AVR32_PIN_PE23   151
#define AVR32_PIN_PE24   152
#define AVR32_PIN_PE25   153
#define AVR32_PIN_PE26   154
#define AVR32_PIN_PE27   155
#define AVR32_PIN_PE28   156
#define AVR32_PIN_PE29   157
#define AVR32_PIN_PE30   158
#define AVR32_PIN_PE31   159
#define AVR32_PIN_PF00   160
#define AVR32_PIN_PF01   161
#define AVR32_PIN_PF02   162
#define AVR32_PIN_PX00   192
#define AVR32_PIN_PX01   193
#define AVR32_PIN_PX02   194
#define AVR32_PIN_PX03   195
#define AVR32_PIN_PX04   196
#define AVR32_PIN_PX05   197
#define AVR32_PIN_PX06   198
#define AVR32_PIN_PX07   199
#define AVR32_PIN_PX08   200
#define AVR32_PIN_PX09   201
#define AVR32_PIN_PX10   202
#define AVR32_PIN_PX11   203
#define AVR32_PIN_PX12   204
#define AVR32_PIN_PX13   205
#define AVR32_PIN_PX14   206
#define AVR32_PIN_PX15   207
#define AVR32_PIN_PX16   208
#define AVR32_PIN_PX17   209
#define AVR32_PIN_PX18   210
#define AVR32_PIN_PX19   211
#define AVR32_PIN_PX20   212
#define AVR32_PIN_PX21   213
#define AVR32_PIN_PX22   214
#define AVR32_PIN_PX23   215
#define AVR32_PIN_PX24   216
#define AVR32_PIN_PX25   217
#define AVR32_PIN_PX26   218
#define AVR32_PIN_PX27   219
#define AVR32_PIN_PX28   220
#define AVR32_PIN_PX29   221
#define AVR32_PIN_PX30   222
#define AVR32_PIN_PX31   223
#define AVR32_PIN_PX32   224
#define AVR32_PIN_PX33   225
#define AVR32_PIN_PX34   226
#define AVR32_PIN_PX35   227
#define AVR32_PIN_PX36   228
#define AVR32_PIN_PX37   229
#define AVR32_PIN_PX38   230
#define AVR32_PIN_PX39   231
#define AVR32_PIN_PX40   232


/* #ifndef AVR32_AP7200_H_INCLUDED */
#endif
