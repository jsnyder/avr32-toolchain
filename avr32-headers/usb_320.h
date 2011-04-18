/*****************************************************************************
 *
 * Copyright (C) 2009-2010 Atmel Corporation
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
 * Model        : UC3C0128C
 * Revision     : $Revision: 74772 $
 * Checkin Date : $Date: 2010-05-14 06:51:12 +0200 (Fri, 14 May 2010) $ 
 *
 ****************************************************************************/
#ifndef AVR32_USB_320_H_INCLUDED
#define AVR32_USB_320_H_INCLUDED

#define AVR32_USB_H_VERSION 320

#include "avr32/abi.h"


/*
 Note to user:

 The following defines are always generated:
 - Register offset: AVR32_USB_<register>
 - Bitfield mask:   AVR32_USB_<register>_<bitfield>
 - Bitfield offset: AVR32_USB_<register>_<bitfield>_OFFSET
 - Bitfield size:   AVR32_USB_<register>_<bitfield>_SIZE
 - Bitfield values: AVR32_USB_<register>_<bitfield>_<value name>

 The following defines are generated if they don't cause ambiguities,
 i.e. the name is unique, or all values with that name are the same.
 - Bitfield mask:   AVR32_USB_<bitfield>
 - Bitfield offset: AVR32_USB_<bitfield>_OFFSET
 - Bitfield size:   AVR32_USB_<bitfield>_SIZE
 - Bitfield values: AVR32_USB_<bitfield>_<value name>
 - Bitfield values: AVR32_USB_<value name>

 All defines are sorted alphabetically.
*/


#define AVR32_USB_1024                                     0x00000007
#define AVR32_USB_128                                      0x00000004
#define AVR32_USB_16                                       0x00000001
#define AVR32_USB_16_BITS                                  0x00000000
#define AVR32_USB_24_BITS                                  0x00000001
#define AVR32_USB_256                                      0x00000005
#define AVR32_USB_32                                       0x00000002
#define AVR32_USB_512                                      0x00000006
#define AVR32_USB_64                                       0x00000003
#define AVR32_USB_8                                        0x00000000
#define AVR32_USB_ADDEN                                             7
#define AVR32_USB_ADDEN_MASK                               0x00000080
#define AVR32_USB_ADDEN_OFFSET                                      7
#define AVR32_USB_ADDEN_SIZE                                        1
#define AVR32_USB_ALLOC                                             1
#define AVR32_USB_ALLOC_MASK                               0x00000002
#define AVR32_USB_ALLOC_OFFSET                                      1
#define AVR32_USB_ALLOC_SIZE                                        1
#define AVR32_USB_AUTOSW_SIZE                                       1
#define AVR32_USB_A_HOST                                   0x00000003
#define AVR32_USB_A_IDLE                                   0x00000000
#define AVR32_USB_A_PERIPHERAL                             0x00000005
#define AVR32_USB_A_SUSPEND                                0x00000004
#define AVR32_USB_A_VBUS_ERR                               0x00000007
#define AVR32_USB_A_WAIT_BCON                              0x00000002
#define AVR32_USB_A_WAIT_DISCHARGE                         0x00000008
#define AVR32_USB_A_WAIT_VFALL                             0x00000006
#define AVR32_USB_BCERRE                                            4
#define AVR32_USB_BCERRE_MASK                              0x00000010
#define AVR32_USB_BCERRE_OFFSET                                     4
#define AVR32_USB_BCERRE_SIZE                                       1
#define AVR32_USB_BCERRI                                            4
#define AVR32_USB_BCERRIC                                           4
#define AVR32_USB_BCERRIC_MASK                             0x00000010
#define AVR32_USB_BCERRIC_OFFSET                                    4
#define AVR32_USB_BCERRIC_SIZE                                      1
#define AVR32_USB_BCERRIS                                           4
#define AVR32_USB_BCERRIS_MASK                             0x00000010
#define AVR32_USB_BCERRIS_OFFSET                                    4
#define AVR32_USB_BCERRIS_SIZE                                      1
#define AVR32_USB_BCERRI_MASK                              0x00000010
#define AVR32_USB_BCERRI_OFFSET                                     4
#define AVR32_USB_BCERRI_SIZE                                       1
#define AVR32_USB_BUFF_CLOSE_IN_EN                                  2
#define AVR32_USB_BUFF_CLOSE_IN_EN_MASK                    0x00000004
#define AVR32_USB_BUFF_CLOSE_IN_EN_OFFSET                           2
#define AVR32_USB_BUFF_CLOSE_IN_EN_SIZE                             1
#define AVR32_USB_BULK                                     0x00000002
#define AVR32_USB_BURST_LOCK_EN                                     7
#define AVR32_USB_BURST_LOCK_EN_MASK                       0x00000080
#define AVR32_USB_BURST_LOCK_EN_OFFSET                              7
#define AVR32_USB_BURST_LOCK_EN_SIZE                                1
#define AVR32_USB_BYCT                                             20
#define AVR32_USB_BYCT_MASK                                0x7ff00000
#define AVR32_USB_BYCT_OFFSET                                      20
#define AVR32_USB_BYCT_SIZE                                        11
#define AVR32_USB_BYPASSDPLL                                        5
#define AVR32_USB_BYPASSDPLL_MASK                          0x00000020
#define AVR32_USB_BYPASSDPLL_OFFSET                                 5
#define AVR32_USB_BYPASSDPLL_SIZE                                   1
#define AVR32_USB_BYTE_WRITE_DPRAM                                 15
#define AVR32_USB_BYTE_WRITE_DPRAM_MASK                    0x00008000
#define AVR32_USB_BYTE_WRITE_DPRAM_OFFSET                          15
#define AVR32_USB_BYTE_WRITE_DPRAM_SIZE                             1
#define AVR32_USB_B_HOST                                   0x0000000e
#define AVR32_USB_B_IDLE                                   0x00000009
#define AVR32_USB_B_PERIPHERAL                             0x0000000a
#define AVR32_USB_B_SRP_INIT                               0x0000000f
#define AVR32_USB_B_WAIT_ACON                              0x0000000d
#define AVR32_USB_B_WAIT_BEGIN_HNP                         0x0000000b
#define AVR32_USB_B_WAIT_DISCHARGE                         0x0000000c
#define AVR32_USB_CFGOK                                            18
#define AVR32_USB_CFGOK_MASK                               0x00040000
#define AVR32_USB_CFGOK_OFFSET                                     18
#define AVR32_USB_CFGOK_SIZE                                        1
#define AVR32_USB_CH_ACTIVE                                         1
#define AVR32_USB_CH_ACTIVE_MASK                           0x00000002
#define AVR32_USB_CH_ACTIVE_OFFSET                                  1
#define AVR32_USB_CH_ACTIVE_SIZE                                    1
#define AVR32_USB_CH_BYTE_CNT                                      16
#define AVR32_USB_CH_BYTE_CNT_MASK                         0xffff0000
#define AVR32_USB_CH_BYTE_CNT_OFFSET                               16
#define AVR32_USB_CH_BYTE_CNT_SIZE                                 16
#define AVR32_USB_CH_BYTE_LENGTH                                   16
#define AVR32_USB_CH_BYTE_LENGTH_MASK                      0xffff0000
#define AVR32_USB_CH_BYTE_LENGTH_OFFSET                            16
#define AVR32_USB_CH_BYTE_LENGTH_SIZE                              16
#define AVR32_USB_CH_EN                                             0
#define AVR32_USB_CH_EN_MASK                               0x00000001
#define AVR32_USB_CH_EN_OFFSET                                      0
#define AVR32_USB_CH_EN_SIZE                                        1
#define AVR32_USB_CLKUSABLE_SIZE                                    1
#define AVR32_USB_CONTROL                                  0x00000000
#define AVR32_USB_COUNTER                                           5
#define AVR32_USB_COUNTERA                                          0
#define AVR32_USB_COUNTERA_MASK                            0x00007fff
#define AVR32_USB_COUNTERA_OFFSET                                   0
#define AVR32_USB_COUNTERA_SIZE                                    15
#define AVR32_USB_COUNTERB                                         16
#define AVR32_USB_COUNTERB_MASK                            0x003f0000
#define AVR32_USB_COUNTERB_OFFSET                                  16
#define AVR32_USB_COUNTERB_SIZE                                     6
#define AVR32_USB_COUNTER_MASK                             0x00000060
#define AVR32_USB_COUNTER_OFFSET                                    5
#define AVR32_USB_COUNTER_SIZE                                      2
#define AVR32_USB_CRC16                                             4
#define AVR32_USB_CRC16_MASK                               0x00000010
#define AVR32_USB_CRC16_OFFSET                                      4
#define AVR32_USB_CRC16_SIZE                                        1
#define AVR32_USB_CTRLDIR                                          17
#define AVR32_USB_CTRLDIR_IN                               0x00000001
#define AVR32_USB_CTRLDIR_MASK                             0x00020000
#define AVR32_USB_CTRLDIR_OFFSET                                   17
#define AVR32_USB_CTRLDIR_OUT                              0x00000000
#define AVR32_USB_CTRLDIR_SIZE                                      1
#define AVR32_USB_CURRBK                                           14
#define AVR32_USB_CURRBK_MASK                              0x0000c000
#define AVR32_USB_CURRBK_OFFSET                                    14
#define AVR32_USB_CURRBK_SIZE                                       2
#define AVR32_USB_DAM6INTEC                                        30
#define AVR32_USB_DAM6INTEC_MASK                           0x40000000
#define AVR32_USB_DAM6INTEC_OFFSET                                 30
#define AVR32_USB_DAM6INTEC_SIZE                                    1
#define AVR32_USB_DAM7INTEC                                        31
#define AVR32_USB_DAM7INTEC_MASK                           0x80000000
#define AVR32_USB_DAM7INTEC_OFFSET                                 31
#define AVR32_USB_DAM7INTEC_SIZE                                    1
#define AVR32_USB_DATAPID                                           1
#define AVR32_USB_DATAPID_MASK                             0x00000002
#define AVR32_USB_DATAPID_OFFSET                                    1
#define AVR32_USB_DATAPID_SIZE                                      1
#define AVR32_USB_DATASIZERDWR_SIZE                                 2
#define AVR32_USB_DATATGL                                           0
#define AVR32_USB_DATATGL_MASK                             0x00000001
#define AVR32_USB_DATATGL_OFFSET                                    0
#define AVR32_USB_DATATGL_SIZE                                      1
#define AVR32_USB_DATAXE                                            9
#define AVR32_USB_DATAXEC                                           9
#define AVR32_USB_DATAXEC_MASK                             0x00000200
#define AVR32_USB_DATAXEC_OFFSET                                    9
#define AVR32_USB_DATAXEC_SIZE                                      1
#define AVR32_USB_DATAXES                                           9
#define AVR32_USB_DATAXES_MASK                             0x00000200
#define AVR32_USB_DATAXES_OFFSET                                    9
#define AVR32_USB_DATAXES_SIZE                                      1
#define AVR32_USB_DATAXE_MASK                              0x00000200
#define AVR32_USB_DATAXE_OFFSET                                     9
#define AVR32_USB_DATAXE_SIZE                                       1
#define AVR32_USB_DATA_BUS_8_16                                    16
#define AVR32_USB_DATA_BUS_8_16_MASK                       0x00010000
#define AVR32_USB_DATA_BUS_8_16_OFFSET                             16
#define AVR32_USB_DATA_BUS_8_16_SIZE                                1
#define AVR32_USB_DCONNI                                            0
#define AVR32_USB_DCONNIC                                           0
#define AVR32_USB_DCONNIC_MASK                             0x00000001
#define AVR32_USB_DCONNIC_OFFSET                                    0
#define AVR32_USB_DCONNIC_SIZE                                      1
#define AVR32_USB_DCONNIE                                           0
#define AVR32_USB_DCONNIEC                                          0
#define AVR32_USB_DCONNIEC_MASK                            0x00000001
#define AVR32_USB_DCONNIEC_OFFSET                                   0
#define AVR32_USB_DCONNIEC_SIZE                                     1
#define AVR32_USB_DCONNIES                                          0
#define AVR32_USB_DCONNIES_MASK                            0x00000001
#define AVR32_USB_DCONNIES_OFFSET                                   0
#define AVR32_USB_DCONNIES_SIZE                                     1
#define AVR32_USB_DCONNIE_MASK                             0x00000001
#define AVR32_USB_DCONNIE_OFFSET                                    0
#define AVR32_USB_DCONNIE_SIZE                                      1
#define AVR32_USB_DCONNIS                                           0
#define AVR32_USB_DCONNIS_MASK                             0x00000001
#define AVR32_USB_DCONNIS_OFFSET                                    0
#define AVR32_USB_DCONNIS_SIZE                                      1
#define AVR32_USB_DCONNI_MASK                              0x00000001
#define AVR32_USB_DCONNI_OFFSET                                     0
#define AVR32_USB_DCONNI_SIZE                                       1
#define AVR32_USB_DDISCI                                            1
#define AVR32_USB_DDISCIC                                           1
#define AVR32_USB_DDISCIC_MASK                             0x00000002
#define AVR32_USB_DDISCIC_OFFSET                                    1
#define AVR32_USB_DDISCIC_SIZE                                      1
#define AVR32_USB_DDISCIE                                           1
#define AVR32_USB_DDISCIEC                                          1
#define AVR32_USB_DDISCIEC_MASK                            0x00000002
#define AVR32_USB_DDISCIEC_OFFSET                                   1
#define AVR32_USB_DDISCIEC_SIZE                                     1
#define AVR32_USB_DDISCIES                                          1
#define AVR32_USB_DDISCIES_MASK                            0x00000002
#define AVR32_USB_DDISCIES_OFFSET                                   1
#define AVR32_USB_DDISCIES_SIZE                                     1
#define AVR32_USB_DDISCIE_MASK                             0x00000002
#define AVR32_USB_DDISCIE_OFFSET                                    1
#define AVR32_USB_DDISCIE_SIZE                                      1
#define AVR32_USB_DDISCIS                                           1
#define AVR32_USB_DDISCIS_MASK                             0x00000002
#define AVR32_USB_DDISCIS_OFFSET                                    1
#define AVR32_USB_DDISCIS_SIZE                                      1
#define AVR32_USB_DDISCI_MASK                              0x00000002
#define AVR32_USB_DDISCI_OFFSET                                     1
#define AVR32_USB_DDISCI_SIZE                                       1
#define AVR32_USB_DESC_LD_IRQ_EN                                    6
#define AVR32_USB_DESC_LD_IRQ_EN_MASK                      0x00000040
#define AVR32_USB_DESC_LD_IRQ_EN_OFFSET                             6
#define AVR32_USB_DESC_LD_IRQ_EN_SIZE                               1
#define AVR32_USB_DESC_LD_STA                                       6
#define AVR32_USB_DESC_LD_STA_MASK                         0x00000040
#define AVR32_USB_DESC_LD_STA_OFFSET                                6
#define AVR32_USB_DESC_LD_STA_SIZE                                  1
#define AVR32_USB_DETACH                                            8
#define AVR32_USB_DETACH_MASK                              0x00000100
#define AVR32_USB_DETACH_OFFSET                                     8
#define AVR32_USB_DETACH_SIZE                                       1
#define AVR32_USB_DISBALEGATEDCLOCK                                 3
#define AVR32_USB_DISBALEGATEDCLOCK_MASK                   0x00000008
#define AVR32_USB_DISBALEGATEDCLOCK_OFFSET                          3
#define AVR32_USB_DISBALEGATEDCLOCK_SIZE                            1
#define AVR32_USB_DMA1INT                                          25
#define AVR32_USB_DMA1INTE                                         25
#define AVR32_USB_DMA1INTEC                                        25
#define AVR32_USB_DMA1INTEC_MASK                           0x02000000
#define AVR32_USB_DMA1INTEC_OFFSET                                 25
#define AVR32_USB_DMA1INTEC_SIZE                                    1
#define AVR32_USB_DMA1INTES                                        25
#define AVR32_USB_DMA1INTES_MASK                           0x02000000
#define AVR32_USB_DMA1INTES_OFFSET                                 25
#define AVR32_USB_DMA1INTES_SIZE                                    1
#define AVR32_USB_DMA1INTE_MASK                            0x02000000
#define AVR32_USB_DMA1INTE_OFFSET                                  25
#define AVR32_USB_DMA1INTE_SIZE                                     1
#define AVR32_USB_DMA1INTS                                         25
#define AVR32_USB_DMA1INTS_MASK                            0x02000000
#define AVR32_USB_DMA1INTS_OFFSET                                  25
#define AVR32_USB_DMA1INTS_SIZE                                     1
#define AVR32_USB_DMA1INT_MASK                             0x02000000
#define AVR32_USB_DMA1INT_OFFSET                                   25
#define AVR32_USB_DMA1INT_SIZE                                      1
#define AVR32_USB_DMA2INT                                          26
#define AVR32_USB_DMA2INTE                                         26
#define AVR32_USB_DMA2INTEC                                        26
#define AVR32_USB_DMA2INTEC_MASK                           0x04000000
#define AVR32_USB_DMA2INTEC_OFFSET                                 26
#define AVR32_USB_DMA2INTEC_SIZE                                    1
#define AVR32_USB_DMA2INTES                                        26
#define AVR32_USB_DMA2INTES_MASK                           0x04000000
#define AVR32_USB_DMA2INTES_OFFSET                                 26
#define AVR32_USB_DMA2INTES_SIZE                                    1
#define AVR32_USB_DMA2INTE_MASK                            0x04000000
#define AVR32_USB_DMA2INTE_OFFSET                                  26
#define AVR32_USB_DMA2INTE_SIZE                                     1
#define AVR32_USB_DMA2INTS                                         26
#define AVR32_USB_DMA2INTS_MASK                            0x04000000
#define AVR32_USB_DMA2INTS_OFFSET                                  26
#define AVR32_USB_DMA2INTS_SIZE                                     1
#define AVR32_USB_DMA2INT_MASK                             0x04000000
#define AVR32_USB_DMA2INT_OFFSET                                   26
#define AVR32_USB_DMA2INT_SIZE                                      1
#define AVR32_USB_DMA3INT                                          27
#define AVR32_USB_DMA3INTE                                         27
#define AVR32_USB_DMA3INTEC                                        27
#define AVR32_USB_DMA3INTEC_MASK                           0x08000000
#define AVR32_USB_DMA3INTEC_OFFSET                                 27
#define AVR32_USB_DMA3INTEC_SIZE                                    1
#define AVR32_USB_DMA3INTES                                        27
#define AVR32_USB_DMA3INTES_MASK                           0x08000000
#define AVR32_USB_DMA3INTES_OFFSET                                 27
#define AVR32_USB_DMA3INTES_SIZE                                    1
#define AVR32_USB_DMA3INTE_MASK                            0x08000000
#define AVR32_USB_DMA3INTE_OFFSET                                  27
#define AVR32_USB_DMA3INTE_SIZE                                     1
#define AVR32_USB_DMA3INTS                                         27
#define AVR32_USB_DMA3INTS_MASK                            0x08000000
#define AVR32_USB_DMA3INTS_OFFSET                                  27
#define AVR32_USB_DMA3INTS_SIZE                                     1
#define AVR32_USB_DMA3INT_MASK                             0x08000000
#define AVR32_USB_DMA3INT_OFFSET                                   27
#define AVR32_USB_DMA3INT_SIZE                                      1
#define AVR32_USB_DMA4INT                                          28
#define AVR32_USB_DMA4INTE                                         28
#define AVR32_USB_DMA4INTEC                                        28
#define AVR32_USB_DMA4INTEC_MASK                           0x10000000
#define AVR32_USB_DMA4INTEC_OFFSET                                 28
#define AVR32_USB_DMA4INTEC_SIZE                                    1
#define AVR32_USB_DMA4INTES                                        28
#define AVR32_USB_DMA4INTES_MASK                           0x10000000
#define AVR32_USB_DMA4INTES_OFFSET                                 28
#define AVR32_USB_DMA4INTES_SIZE                                    1
#define AVR32_USB_DMA4INTE_MASK                            0x10000000
#define AVR32_USB_DMA4INTE_OFFSET                                  28
#define AVR32_USB_DMA4INTE_SIZE                                     1
#define AVR32_USB_DMA4INTS                                         28
#define AVR32_USB_DMA4INTS_MASK                            0x10000000
#define AVR32_USB_DMA4INTS_OFFSET                                  28
#define AVR32_USB_DMA4INTS_SIZE                                     1
#define AVR32_USB_DMA4INT_MASK                             0x10000000
#define AVR32_USB_DMA4INT_OFFSET                                   28
#define AVR32_USB_DMA4INT_SIZE                                      1
#define AVR32_USB_DMA5INT                                          29
#define AVR32_USB_DMA5INTE                                         29
#define AVR32_USB_DMA5INTEC                                        29
#define AVR32_USB_DMA5INTEC_MASK                           0x20000000
#define AVR32_USB_DMA5INTEC_OFFSET                                 29
#define AVR32_USB_DMA5INTEC_SIZE                                    1
#define AVR32_USB_DMA5INTES                                        29
#define AVR32_USB_DMA5INTES_MASK                           0x20000000
#define AVR32_USB_DMA5INTES_OFFSET                                 29
#define AVR32_USB_DMA5INTES_SIZE                                    1
#define AVR32_USB_DMA5INTE_MASK                            0x20000000
#define AVR32_USB_DMA5INTE_OFFSET                                  29
#define AVR32_USB_DMA5INTE_SIZE                                     1
#define AVR32_USB_DMA5INTS                                         29
#define AVR32_USB_DMA5INTS_MASK                            0x20000000
#define AVR32_USB_DMA5INTS_OFFSET                                  29
#define AVR32_USB_DMA5INTS_SIZE                                     1
#define AVR32_USB_DMA5INT_MASK                             0x20000000
#define AVR32_USB_DMA5INT_OFFSET                                   29
#define AVR32_USB_DMA5INT_SIZE                                      1
#define AVR32_USB_DMA6INT                                          30
#define AVR32_USB_DMA6INTE                                         30
#define AVR32_USB_DMA6INTEC                                        30
#define AVR32_USB_DMA6INTEC_MASK                           0x40000000
#define AVR32_USB_DMA6INTEC_OFFSET                                 30
#define AVR32_USB_DMA6INTEC_SIZE                                    1
#define AVR32_USB_DMA6INTES                                        30
#define AVR32_USB_DMA6INTES_MASK                           0x40000000
#define AVR32_USB_DMA6INTES_OFFSET                                 30
#define AVR32_USB_DMA6INTES_SIZE                                    1
#define AVR32_USB_DMA6INTE_MASK                            0x40000000
#define AVR32_USB_DMA6INTE_OFFSET                                  30
#define AVR32_USB_DMA6INTE_SIZE                                     1
#define AVR32_USB_DMA6INTS                                         30
#define AVR32_USB_DMA6INTS_MASK                            0x40000000
#define AVR32_USB_DMA6INTS_OFFSET                                  30
#define AVR32_USB_DMA6INTS_SIZE                                     1
#define AVR32_USB_DMA6INT_MASK                             0x40000000
#define AVR32_USB_DMA6INT_OFFSET                                   30
#define AVR32_USB_DMA6INT_SIZE                                      1
#define AVR32_USB_DMA7INT                                          31
#define AVR32_USB_DMA7INTE                                         31
#define AVR32_USB_DMA7INTEC                                        31
#define AVR32_USB_DMA7INTEC_MASK                           0x80000000
#define AVR32_USB_DMA7INTEC_OFFSET                                 31
#define AVR32_USB_DMA7INTEC_SIZE                                    1
#define AVR32_USB_DMA7INTES                                        31
#define AVR32_USB_DMA7INTES_MASK                           0x80000000
#define AVR32_USB_DMA7INTES_OFFSET                                 31
#define AVR32_USB_DMA7INTES_SIZE                                    1
#define AVR32_USB_DMA7INTE_MASK                            0x80000000
#define AVR32_USB_DMA7INTE_OFFSET                                  31
#define AVR32_USB_DMA7INTE_SIZE                                     1
#define AVR32_USB_DMA7INTS                                         31
#define AVR32_USB_DMA7INTS_MASK                            0x80000000
#define AVR32_USB_DMA7INTS_OFFSET                                  31
#define AVR32_USB_DMA7INTS_SIZE                                     1
#define AVR32_USB_DMA7INT_MASK                             0x80000000
#define AVR32_USB_DMA7INT_OFFSET                                   31
#define AVR32_USB_DMA7INT_SIZE                                      1
#define AVR32_USB_DMAEND_EN                                         3
#define AVR32_USB_DMAEND_EN_MASK                           0x00000008
#define AVR32_USB_DMAEND_EN_OFFSET                                  3
#define AVR32_USB_DMAEND_EN_SIZE                                    1
#define AVR32_USB_DMA_BUFFER_SIZE                                   7
#define AVR32_USB_DMA_BUFFER_SIZE_16_BITS                  0x00000000
#define AVR32_USB_DMA_BUFFER_SIZE_24_BITS                  0x00000001
#define AVR32_USB_DMA_BUFFER_SIZE_MASK                     0x00000080
#define AVR32_USB_DMA_BUFFER_SIZE_OFFSET                            7
#define AVR32_USB_DMA_BUFFER_SIZE_SIZE                              1
#define AVR32_USB_DMA_CHANNEL_NBR                                   4
#define AVR32_USB_DMA_CHANNEL_NBR_MASK                     0x00000070
#define AVR32_USB_DMA_CHANNEL_NBR_OFFSET                            4
#define AVR32_USB_DMA_CHANNEL_NBR_SIZE                              3
#define AVR32_USB_DMA_FIFO_WORD_DEPTH                               8
#define AVR32_USB_DMA_FIFO_WORD_DEPTH_MASK                 0x00000f00
#define AVR32_USB_DMA_FIFO_WORD_DEPTH_OFFSET                        8
#define AVR32_USB_DMA_FIFO_WORD_DEPTH_SIZE                          4
#define AVR32_USB_DOUBLE                                   0x00000001
#define AVR32_USB_DRDSTATE                                          0
#define AVR32_USB_DRDSTATE_A_HOST                          0x00000003
#define AVR32_USB_DRDSTATE_A_IDLE                          0x00000000
#define AVR32_USB_DRDSTATE_A_PERIPHERAL                    0x00000005
#define AVR32_USB_DRDSTATE_A_SUSPEND                       0x00000004
#define AVR32_USB_DRDSTATE_A_VBUS_ERR                      0x00000007
#define AVR32_USB_DRDSTATE_A_WAIT_BCON                     0x00000002
#define AVR32_USB_DRDSTATE_A_WAIT_DISCHARGE                0x00000008
#define AVR32_USB_DRDSTATE_A_WAIT_VFALL                    0x00000006
#define AVR32_USB_DRDSTATE_A_WAIT_VRISE                    0x00000001
#define AVR32_USB_DRDSTATE_B_HOST                          0x0000000e
#define AVR32_USB_DRDSTATE_B_IDLE                          0x00000009
#define AVR32_USB_DRDSTATE_B_PERIPHERAL                    0x0000000a
#define AVR32_USB_DRDSTATE_B_SRP_INIT                      0x0000000f
#define AVR32_USB_DRDSTATE_B_WAIT_ACON                     0x0000000d
#define AVR32_USB_DRDSTATE_B_WAIT_BEGIN_HNP                0x0000000b
#define AVR32_USB_DRDSTATE_B_WAIT_DISCHARGE                0x0000000c
#define AVR32_USB_DRDSTATE_MASK                            0x0000000f
#define AVR32_USB_DRDSTATE_OFFSET                                   0
#define AVR32_USB_DRDSTATE_SIZE                                     4
#define AVR32_USB_DTSEQ                                             8
#define AVR32_USB_DTSEQ_MASK                               0x00000300
#define AVR32_USB_DTSEQ_OFFSET                                      8
#define AVR32_USB_DTSEQ_SIZE                                        2
#define AVR32_USB_EN_HIGH_BD_ISO_EPT_1                             17
#define AVR32_USB_EN_HIGH_BD_ISO_EPT_10                            26
#define AVR32_USB_EN_HIGH_BD_ISO_EPT_10_MASK               0x04000000
#define AVR32_USB_EN_HIGH_BD_ISO_EPT_10_OFFSET                     26
#define AVR32_USB_EN_HIGH_BD_ISO_EPT_10_SIZE                        1
#define AVR32_USB_EN_HIGH_BD_ISO_EPT_11                            27
#define AVR32_USB_EN_HIGH_BD_ISO_EPT_11_MASK               0x08000000
#define AVR32_USB_EN_HIGH_BD_ISO_EPT_11_OFFSET                     27
#define AVR32_USB_EN_HIGH_BD_ISO_EPT_11_SIZE                        1
#define AVR32_USB_EN_HIGH_BD_ISO_EPT_12                            28
#define AVR32_USB_EN_HIGH_BD_ISO_EPT_12_MASK               0x10000000
#define AVR32_USB_EN_HIGH_BD_ISO_EPT_12_OFFSET                     28
#define AVR32_USB_EN_HIGH_BD_ISO_EPT_12_SIZE                        1
#define AVR32_USB_EN_HIGH_BD_ISO_EPT_13                            29
#define AVR32_USB_EN_HIGH_BD_ISO_EPT_13_MASK               0x20000000
#define AVR32_USB_EN_HIGH_BD_ISO_EPT_13_OFFSET                     29
#define AVR32_USB_EN_HIGH_BD_ISO_EPT_13_SIZE                        1
#define AVR32_USB_EN_HIGH_BD_ISO_EPT_14                            30
#define AVR32_USB_EN_HIGH_BD_ISO_EPT_14_MASK               0x40000000
#define AVR32_USB_EN_HIGH_BD_ISO_EPT_14_OFFSET                     30
#define AVR32_USB_EN_HIGH_BD_ISO_EPT_14_SIZE                        1
#define AVR32_USB_EN_HIGH_BD_ISO_EPT_15                            31
#define AVR32_USB_EN_HIGH_BD_ISO_EPT_15_MASK               0x80000000
#define AVR32_USB_EN_HIGH_BD_ISO_EPT_15_OFFSET                     31
#define AVR32_USB_EN_HIGH_BD_ISO_EPT_15_SIZE                        1
#define AVR32_USB_EN_HIGH_BD_ISO_EPT_1_MASK                0x00020000
#define AVR32_USB_EN_HIGH_BD_ISO_EPT_1_OFFSET                      17
#define AVR32_USB_EN_HIGH_BD_ISO_EPT_1_SIZE                         1
#define AVR32_USB_EN_HIGH_BD_ISO_EPT_2                             18
#define AVR32_USB_EN_HIGH_BD_ISO_EPT_2_MASK                0x00040000
#define AVR32_USB_EN_HIGH_BD_ISO_EPT_2_OFFSET                      18
#define AVR32_USB_EN_HIGH_BD_ISO_EPT_2_SIZE                         1
#define AVR32_USB_EN_HIGH_BD_ISO_EPT_3                             19
#define AVR32_USB_EN_HIGH_BD_ISO_EPT_3_MASK                0x00080000
#define AVR32_USB_EN_HIGH_BD_ISO_EPT_3_OFFSET                      19
#define AVR32_USB_EN_HIGH_BD_ISO_EPT_3_SIZE                         1
#define AVR32_USB_EN_HIGH_BD_ISO_EPT_4                             20
#define AVR32_USB_EN_HIGH_BD_ISO_EPT_4_MASK                0x00100000
#define AVR32_USB_EN_HIGH_BD_ISO_EPT_4_OFFSET                      20
#define AVR32_USB_EN_HIGH_BD_ISO_EPT_4_SIZE                         1
#define AVR32_USB_EN_HIGH_BD_ISO_EPT_5                             21
#define AVR32_USB_EN_HIGH_BD_ISO_EPT_5_MASK                0x00200000
#define AVR32_USB_EN_HIGH_BD_ISO_EPT_5_OFFSET                      21
#define AVR32_USB_EN_HIGH_BD_ISO_EPT_5_SIZE                         1
#define AVR32_USB_EN_HIGH_BD_ISO_EPT_6                             22
#define AVR32_USB_EN_HIGH_BD_ISO_EPT_6_MASK                0x00400000
#define AVR32_USB_EN_HIGH_BD_ISO_EPT_6_OFFSET                      22
#define AVR32_USB_EN_HIGH_BD_ISO_EPT_6_SIZE                         1
#define AVR32_USB_EN_HIGH_BD_ISO_EPT_7                             23
#define AVR32_USB_EN_HIGH_BD_ISO_EPT_7_MASK                0x00800000
#define AVR32_USB_EN_HIGH_BD_ISO_EPT_7_OFFSET                      23
#define AVR32_USB_EN_HIGH_BD_ISO_EPT_7_SIZE                         1
#define AVR32_USB_EN_HIGH_BD_ISO_EPT_8                             24
#define AVR32_USB_EN_HIGH_BD_ISO_EPT_8_MASK                0x01000000
#define AVR32_USB_EN_HIGH_BD_ISO_EPT_8_OFFSET                      24
#define AVR32_USB_EN_HIGH_BD_ISO_EPT_8_SIZE                         1
#define AVR32_USB_EN_HIGH_BD_ISO_EPT_9                             25
#define AVR32_USB_EN_HIGH_BD_ISO_EPT_9_MASK                0x02000000
#define AVR32_USB_EN_HIGH_BD_ISO_EPT_9_OFFSET                      25
#define AVR32_USB_EN_HIGH_BD_ISO_EPT_9_SIZE                         1
#define AVR32_USB_EOBUFF_IRQ_EN                                     5
#define AVR32_USB_EOBUFF_IRQ_EN_MASK                       0x00000020
#define AVR32_USB_EOBUFF_IRQ_EN_OFFSET                              5
#define AVR32_USB_EOBUFF_IRQ_EN_SIZE                                1
#define AVR32_USB_EOCH_BUFF_STA                                     5
#define AVR32_USB_EOCH_BUFF_STA_MASK                       0x00000020
#define AVR32_USB_EOCH_BUFF_STA_OFFSET                              5
#define AVR32_USB_EOCH_BUFF_STA_SIZE                                1
#define AVR32_USB_EORSM                                             5
#define AVR32_USB_EORSMC                                            5
#define AVR32_USB_EORSMC_MASK                              0x00000020
#define AVR32_USB_EORSMC_OFFSET                                     5
#define AVR32_USB_EORSMC_SIZE                                       1
#define AVR32_USB_EORSME                                            5
#define AVR32_USB_EORSMEC                                           5
#define AVR32_USB_EORSMEC_MASK                             0x00000020
#define AVR32_USB_EORSMEC_OFFSET                                    5
#define AVR32_USB_EORSMEC_SIZE                                      1
#define AVR32_USB_EORSMES                                           5
#define AVR32_USB_EORSMES_MASK                             0x00000020
#define AVR32_USB_EORSMES_OFFSET                                    5
#define AVR32_USB_EORSMES_SIZE                                      1
#define AVR32_USB_EORSME_MASK                              0x00000020
#define AVR32_USB_EORSME_OFFSET                                     5
#define AVR32_USB_EORSME_SIZE                                       1
#define AVR32_USB_EORSMS                                            5
#define AVR32_USB_EORSMS_MASK                              0x00000020
#define AVR32_USB_EORSMS_OFFSET                                     5
#define AVR32_USB_EORSMS_SIZE                                       1
#define AVR32_USB_EORSM_MASK                               0x00000020
#define AVR32_USB_EORSM_OFFSET                                      5
#define AVR32_USB_EORSM_SIZE                                        1
#define AVR32_USB_EORST                                             3
#define AVR32_USB_EORSTC                                            3
#define AVR32_USB_EORSTC_MASK                              0x00000008
#define AVR32_USB_EORSTC_OFFSET                                     3
#define AVR32_USB_EORSTC_SIZE                                       1
#define AVR32_USB_EORSTE                                            3
#define AVR32_USB_EORSTEC                                           3
#define AVR32_USB_EORSTEC_MASK                             0x00000008
#define AVR32_USB_EORSTEC_OFFSET                                    3
#define AVR32_USB_EORSTEC_SIZE                                      1
#define AVR32_USB_EORSTES                                           3
#define AVR32_USB_EORSTES_MASK                             0x00000008
#define AVR32_USB_EORSTES_OFFSET                                    3
#define AVR32_USB_EORSTES_SIZE                                      1
#define AVR32_USB_EORSTE_MASK                              0x00000008
#define AVR32_USB_EORSTE_OFFSET                                     3
#define AVR32_USB_EORSTE_SIZE                                       1
#define AVR32_USB_EORSTS                                            3
#define AVR32_USB_EORSTS_MASK                              0x00000008
#define AVR32_USB_EORSTS_OFFSET                                     3
#define AVR32_USB_EORSTS_SIZE                                       1
#define AVR32_USB_EORST_MASK                               0x00000008
#define AVR32_USB_EORST_OFFSET                                      3
#define AVR32_USB_EORST_SIZE                                        1
#define AVR32_USB_EOT_IRQ_EN                                        4
#define AVR32_USB_EOT_IRQ_EN_MASK                          0x00000010
#define AVR32_USB_EOT_IRQ_EN_OFFSET                                 4
#define AVR32_USB_EOT_IRQ_EN_SIZE                                   1
#define AVR32_USB_EOT_STA                                           4
#define AVR32_USB_EOT_STA_MASK                             0x00000010
#define AVR32_USB_EOT_STA_OFFSET                                    4
#define AVR32_USB_EOT_STA_SIZE                                      1
#define AVR32_USB_EP0INT                                           12
#define AVR32_USB_EP0INTE                                          12
#define AVR32_USB_EP0INTEC                                         12
#define AVR32_USB_EP0INTEC_MASK                            0x00001000
#define AVR32_USB_EP0INTEC_OFFSET                                  12
#define AVR32_USB_EP0INTEC_SIZE                                     1
#define AVR32_USB_EP0INTES                                         12
#define AVR32_USB_EP0INTES_MASK                            0x00001000
#define AVR32_USB_EP0INTES_OFFSET                                  12
#define AVR32_USB_EP0INTES_SIZE                                     1
#define AVR32_USB_EP0INTE_MASK                             0x00001000
#define AVR32_USB_EP0INTE_OFFSET                                   12
#define AVR32_USB_EP0INTE_SIZE                                      1
#define AVR32_USB_EP0INT_MASK                              0x00001000
#define AVR32_USB_EP0INT_OFFSET                                    12
#define AVR32_USB_EP0INT_SIZE                                       1
#define AVR32_USB_EP1INT                                           13
#define AVR32_USB_EP1INTE                                          13
#define AVR32_USB_EP1INTEC                                         13
#define AVR32_USB_EP1INTEC_MASK                            0x00002000
#define AVR32_USB_EP1INTEC_OFFSET                                  13
#define AVR32_USB_EP1INTEC_SIZE                                     1
#define AVR32_USB_EP1INTES                                         13
#define AVR32_USB_EP1INTES_MASK                            0x00002000
#define AVR32_USB_EP1INTES_OFFSET                                  13
#define AVR32_USB_EP1INTES_SIZE                                     1
#define AVR32_USB_EP1INTE_MASK                             0x00002000
#define AVR32_USB_EP1INTE_OFFSET                                   13
#define AVR32_USB_EP1INTE_SIZE                                      1
#define AVR32_USB_EP1INT_MASK                              0x00002000
#define AVR32_USB_EP1INT_OFFSET                                    13
#define AVR32_USB_EP1INT_SIZE                                       1
#define AVR32_USB_EP2INT                                           14
#define AVR32_USB_EP2INTE                                          14
#define AVR32_USB_EP2INTEC                                         14
#define AVR32_USB_EP2INTEC_MASK                            0x00004000
#define AVR32_USB_EP2INTEC_OFFSET                                  14
#define AVR32_USB_EP2INTEC_SIZE                                     1
#define AVR32_USB_EP2INTES                                         14
#define AVR32_USB_EP2INTES_MASK                            0x00004000
#define AVR32_USB_EP2INTES_OFFSET                                  14
#define AVR32_USB_EP2INTES_SIZE                                     1
#define AVR32_USB_EP2INTE_MASK                             0x00004000
#define AVR32_USB_EP2INTE_OFFSET                                   14
#define AVR32_USB_EP2INTE_SIZE                                      1
#define AVR32_USB_EP2INT_MASK                              0x00004000
#define AVR32_USB_EP2INT_OFFSET                                    14
#define AVR32_USB_EP2INT_SIZE                                       1
#define AVR32_USB_EP3INT                                           15
#define AVR32_USB_EP3INTE                                          15
#define AVR32_USB_EP3INTEC                                         15
#define AVR32_USB_EP3INTEC_MASK                            0x00008000
#define AVR32_USB_EP3INTEC_OFFSET                                  15
#define AVR32_USB_EP3INTEC_SIZE                                     1
#define AVR32_USB_EP3INTES                                         15
#define AVR32_USB_EP3INTES_MASK                            0x00008000
#define AVR32_USB_EP3INTES_OFFSET                                  15
#define AVR32_USB_EP3INTES_SIZE                                     1
#define AVR32_USB_EP3INTE_MASK                             0x00008000
#define AVR32_USB_EP3INTE_OFFSET                                   15
#define AVR32_USB_EP3INTE_SIZE                                      1
#define AVR32_USB_EP3INT_MASK                              0x00008000
#define AVR32_USB_EP3INT_OFFSET                                    15
#define AVR32_USB_EP3INT_SIZE                                       1
#define AVR32_USB_EP4INT                                           16
#define AVR32_USB_EP4INTE                                          16
#define AVR32_USB_EP4INTEC                                         16
#define AVR32_USB_EP4INTEC_MASK                            0x00010000
#define AVR32_USB_EP4INTEC_OFFSET                                  16
#define AVR32_USB_EP4INTEC_SIZE                                     1
#define AVR32_USB_EP4INTES                                         16
#define AVR32_USB_EP4INTES_MASK                            0x00010000
#define AVR32_USB_EP4INTES_OFFSET                                  16
#define AVR32_USB_EP4INTES_SIZE                                     1
#define AVR32_USB_EP4INTE_MASK                             0x00010000
#define AVR32_USB_EP4INTE_OFFSET                                   16
#define AVR32_USB_EP4INTE_SIZE                                      1
#define AVR32_USB_EP4INT_MASK                              0x00010000
#define AVR32_USB_EP4INT_OFFSET                                    16
#define AVR32_USB_EP4INT_SIZE                                       1
#define AVR32_USB_EP5INT                                           17
#define AVR32_USB_EP5INTE                                          17
#define AVR32_USB_EP5INTEC                                         17
#define AVR32_USB_EP5INTEC_MASK                            0x00020000
#define AVR32_USB_EP5INTEC_OFFSET                                  17
#define AVR32_USB_EP5INTEC_SIZE                                     1
#define AVR32_USB_EP5INTES                                         17
#define AVR32_USB_EP5INTES_MASK                            0x00020000
#define AVR32_USB_EP5INTES_OFFSET                                  17
#define AVR32_USB_EP5INTES_SIZE                                     1
#define AVR32_USB_EP5INTE_MASK                             0x00020000
#define AVR32_USB_EP5INTE_OFFSET                                   17
#define AVR32_USB_EP5INTE_SIZE                                      1
#define AVR32_USB_EP5INT_MASK                              0x00020000
#define AVR32_USB_EP5INT_OFFSET                                    17
#define AVR32_USB_EP5INT_SIZE                                       1
#define AVR32_USB_EP6INT                                           18
#define AVR32_USB_EP6INTE                                          18
#define AVR32_USB_EP6INTEC                                         18
#define AVR32_USB_EP6INTEC_MASK                            0x00040000
#define AVR32_USB_EP6INTEC_OFFSET                                  18
#define AVR32_USB_EP6INTEC_SIZE                                     1
#define AVR32_USB_EP6INTES                                         18
#define AVR32_USB_EP6INTES_MASK                            0x00040000
#define AVR32_USB_EP6INTES_OFFSET                                  18
#define AVR32_USB_EP6INTES_SIZE                                     1
#define AVR32_USB_EP6INTE_MASK                             0x00040000
#define AVR32_USB_EP6INTE_OFFSET                                   18
#define AVR32_USB_EP6INTE_SIZE                                      1
#define AVR32_USB_EP6INT_MASK                              0x00040000
#define AVR32_USB_EP6INT_OFFSET                                    18
#define AVR32_USB_EP6INT_SIZE                                       1
#define AVR32_USB_EP7INT                                           19
#define AVR32_USB_EP7INTE                                          19
#define AVR32_USB_EP7INTEC                                         19
#define AVR32_USB_EP7INTEC_MASK                            0x00080000
#define AVR32_USB_EP7INTEC_OFFSET                                  19
#define AVR32_USB_EP7INTEC_SIZE                                     1
#define AVR32_USB_EP7INTES                                         19
#define AVR32_USB_EP7INTES_MASK                            0x00080000
#define AVR32_USB_EP7INTES_OFFSET                                  19
#define AVR32_USB_EP7INTES_SIZE                                     1
#define AVR32_USB_EP7INTE_MASK                             0x00080000
#define AVR32_USB_EP7INTE_OFFSET                                   19
#define AVR32_USB_EP7INTE_SIZE                                      1
#define AVR32_USB_EP7INT_MASK                              0x00080000
#define AVR32_USB_EP7INT_OFFSET                                    19
#define AVR32_USB_EP7INT_SIZE                                       1
#define AVR32_USB_EPBK                                              2
#define AVR32_USB_EPBK_DOUBLE                              0x00000001
#define AVR32_USB_EPBK_MASK                                0x0000000c
#define AVR32_USB_EPBK_OFFSET                                       2
#define AVR32_USB_EPBK_SINGLE                              0x00000000
#define AVR32_USB_EPBK_SIZE                                         2
#define AVR32_USB_EPBK_TRIPLE                              0x00000002
#define AVR32_USB_EPDIR                                             8
#define AVR32_USB_EPDIR_IN                                 0x00000001
#define AVR32_USB_EPDIR_MASK                               0x00000100
#define AVR32_USB_EPDIR_OFFSET                                      8
#define AVR32_USB_EPDIR_OUT                                0x00000000
#define AVR32_USB_EPDIR_SIZE                                        1
#define AVR32_USB_EPDISHDMA                                        16
#define AVR32_USB_EPDISHDMAC                                       16
#define AVR32_USB_EPDISHDMAC_MASK                          0x00010000
#define AVR32_USB_EPDISHDMAC_OFFSET                                16
#define AVR32_USB_EPDISHDMAC_SIZE                                   1
#define AVR32_USB_EPDISHDMAS                                       16
#define AVR32_USB_EPDISHDMAS_MASK                          0x00010000
#define AVR32_USB_EPDISHDMAS_OFFSET                                16
#define AVR32_USB_EPDISHDMAS_SIZE                                   1
#define AVR32_USB_EPDISHDMA_MASK                           0x00010000
#define AVR32_USB_EPDISHDMA_OFFSET                                 16
#define AVR32_USB_EPDISHDMA_SIZE                                    1
#define AVR32_USB_EPEN0                                             0
#define AVR32_USB_EPEN0_MASK                               0x00000001
#define AVR32_USB_EPEN0_OFFSET                                      0
#define AVR32_USB_EPEN0_SIZE                                        1
#define AVR32_USB_EPEN1                                             1
#define AVR32_USB_EPEN1_MASK                               0x00000002
#define AVR32_USB_EPEN1_OFFSET                                      1
#define AVR32_USB_EPEN1_SIZE                                        1
#define AVR32_USB_EPEN2                                             2
#define AVR32_USB_EPEN2_MASK                               0x00000004
#define AVR32_USB_EPEN2_OFFSET                                      2
#define AVR32_USB_EPEN2_SIZE                                        1
#define AVR32_USB_EPEN3                                             3
#define AVR32_USB_EPEN3_MASK                               0x00000008
#define AVR32_USB_EPEN3_OFFSET                                      3
#define AVR32_USB_EPEN3_SIZE                                        1
#define AVR32_USB_EPEN4                                             4
#define AVR32_USB_EPEN4_MASK                               0x00000010
#define AVR32_USB_EPEN4_OFFSET                                      4
#define AVR32_USB_EPEN4_SIZE                                        1
#define AVR32_USB_EPEN5                                             5
#define AVR32_USB_EPEN5_MASK                               0x00000020
#define AVR32_USB_EPEN5_OFFSET                                      5
#define AVR32_USB_EPEN5_SIZE                                        1
#define AVR32_USB_EPEN6                                             6
#define AVR32_USB_EPEN6_MASK                               0x00000040
#define AVR32_USB_EPEN6_OFFSET                                      6
#define AVR32_USB_EPEN6_SIZE                                        1
#define AVR32_USB_EPEN7                                             7
#define AVR32_USB_EPEN7_MASK                               0x00000080
#define AVR32_USB_EPEN7_OFFSET                                      7
#define AVR32_USB_EPEN7_SIZE                                        1
#define AVR32_USB_EPRST0                                           16
#define AVR32_USB_EPRST0_MASK                              0x00010000
#define AVR32_USB_EPRST0_OFFSET                                    16
#define AVR32_USB_EPRST0_SIZE                                       1
#define AVR32_USB_EPRST1                                           17
#define AVR32_USB_EPRST1_MASK                              0x00020000
#define AVR32_USB_EPRST1_OFFSET                                    17
#define AVR32_USB_EPRST1_SIZE                                       1
#define AVR32_USB_EPRST2                                           18
#define AVR32_USB_EPRST2_MASK                              0x00040000
#define AVR32_USB_EPRST2_OFFSET                                    18
#define AVR32_USB_EPRST2_SIZE                                       1
#define AVR32_USB_EPRST3                                           19
#define AVR32_USB_EPRST3_MASK                              0x00080000
#define AVR32_USB_EPRST3_OFFSET                                    19
#define AVR32_USB_EPRST3_SIZE                                       1
#define AVR32_USB_EPRST4                                           20
#define AVR32_USB_EPRST4_MASK                              0x00100000
#define AVR32_USB_EPRST4_OFFSET                                    20
#define AVR32_USB_EPRST4_SIZE                                       1
#define AVR32_USB_EPRST5                                           21
#define AVR32_USB_EPRST5_MASK                              0x00200000
#define AVR32_USB_EPRST5_OFFSET                                    21
#define AVR32_USB_EPRST5_SIZE                                       1
#define AVR32_USB_EPRST6                                           22
#define AVR32_USB_EPRST6_MASK                              0x00400000
#define AVR32_USB_EPRST6_OFFSET                                    22
#define AVR32_USB_EPRST6_SIZE                                       1
#define AVR32_USB_EPRST7                                           23
#define AVR32_USB_EPRST7_MASK                              0x00800000
#define AVR32_USB_EPRST7_OFFSET                                    23
#define AVR32_USB_EPRST7_SIZE                                       1
#define AVR32_USB_EPSIZE                                            4
#define AVR32_USB_EPSIZE_1024                              0x00000007
#define AVR32_USB_EPSIZE_128                               0x00000004
#define AVR32_USB_EPSIZE_16                                0x00000001
#define AVR32_USB_EPSIZE_256                               0x00000005
#define AVR32_USB_EPSIZE_32                                0x00000002
#define AVR32_USB_EPSIZE_512                               0x00000006
#define AVR32_USB_EPSIZE_64                                0x00000003
#define AVR32_USB_EPSIZE_8                                 0x00000000
#define AVR32_USB_EPSIZE_MASK                              0x00000070
#define AVR32_USB_EPSIZE_OFFSET                                     4
#define AVR32_USB_EPSIZE_SIZE                                       3
#define AVR32_USB_EPTYPE                                           11
#define AVR32_USB_EPTYPE_BULK                              0x00000002
#define AVR32_USB_EPTYPE_CONTROL                           0x00000000
#define AVR32_USB_EPTYPE_INTERRUPT                         0x00000003
#define AVR32_USB_EPTYPE_ISOCHRONOUS                       0x00000001
#define AVR32_USB_EPTYPE_MASK                              0x00001800
#define AVR32_USB_EPTYPE_OFFSET                                    11
#define AVR32_USB_EPTYPE_SIZE                                       2
#define AVR32_USB_EPT_NBR_MAX                                       0
#define AVR32_USB_EPT_NBR_MAX_MASK                         0x0000000f
#define AVR32_USB_EPT_NBR_MAX_OFFSET                                0
#define AVR32_USB_EPT_NBR_MAX_SIZE                                  4
#define AVR32_USB_EP_DATA                                           0
#define AVR32_USB_EP_DATA_MASK                             0xffffffff
#define AVR32_USB_EP_DATA_OFFSET                                    0
#define AVR32_USB_EP_DATA_SIZE                                     32
#define AVR32_USB_ERRORTRANS                                       10
#define AVR32_USB_ERRORTRANSE                                      10
#define AVR32_USB_ERRORTRANSEC                                     10
#define AVR32_USB_ERRORTRANSEC_MASK                        0x00000400
#define AVR32_USB_ERRORTRANSEC_OFFSET                              10
#define AVR32_USB_ERRORTRANSEC_SIZE                                 1
#define AVR32_USB_ERRORTRANSES                                     10
#define AVR32_USB_ERRORTRANSES_MASK                        0x00000400
#define AVR32_USB_ERRORTRANSES_OFFSET                              10
#define AVR32_USB_ERRORTRANSES_SIZE                                 1
#define AVR32_USB_ERRORTRANSE_MASK                         0x00000400
#define AVR32_USB_ERRORTRANSE_OFFSET                               10
#define AVR32_USB_ERRORTRANSE_SIZE                                  1
#define AVR32_USB_ERRORTRANSS                                      10
#define AVR32_USB_ERRORTRANSS_MASK                         0x00000400
#define AVR32_USB_ERRORTRANSS_OFFSET                               10
#define AVR32_USB_ERRORTRANSS_SIZE                                  1
#define AVR32_USB_ERRORTRANS_MASK                          0x00000400
#define AVR32_USB_ERRORTRANS_OFFSET                                10
#define AVR32_USB_ERRORTRANS_SIZE                                   1
#define AVR32_USB_FIFOCON                                          14
#define AVR32_USB_FIFOCONC                                         14
#define AVR32_USB_FIFOCONC_MASK                            0x00004000
#define AVR32_USB_FIFOCONC_OFFSET                                  14
#define AVR32_USB_FIFOCONC_SIZE                                     1
#define AVR32_USB_FIFOCON_MASK                             0x00004000
#define AVR32_USB_FIFOCON_OFFSET                                   14
#define AVR32_USB_FIFOCON_SIZE                                      1
#define AVR32_USB_FIFO_MAX_SIZE                                    12
#define AVR32_USB_FIFO_MAX_SIZE_GE_16384                   0x00000007
#define AVR32_USB_FIFO_MAX_SIZE_GT_16384                   0x00000006
#define AVR32_USB_FIFO_MAX_SIZE_LT_1024                    0x00000002
#define AVR32_USB_FIFO_MAX_SIZE_LT_2048                    0x00000003
#define AVR32_USB_FIFO_MAX_SIZE_LT_256                     0x00000000
#define AVR32_USB_FIFO_MAX_SIZE_LT_512                     0x00000001
#define AVR32_USB_FIFO_MAX_SIZE_MASK                       0x00007000
#define AVR32_USB_FIFO_MAX_SIZE_OFFSET                             12
#define AVR32_USB_FIFO_MAX_SIZE_SIZE                                3
#define AVR32_USB_FLENHIGH                                         16
#define AVR32_USB_FLENHIGH_MASK                            0x00ff0000
#define AVR32_USB_FLENHIGH_OFFSET                                  16
#define AVR32_USB_FLENHIGH_SIZE                                     8
#define AVR32_USB_FNCERR                                           15
#define AVR32_USB_FNCERR_MASK                              0x00008000
#define AVR32_USB_FNCERR_OFFSET                                    15
#define AVR32_USB_FNCERR_SIZE                                       1
#define AVR32_USB_FNUM                                              3
#define AVR32_USB_FNUM_MASK                                0x00003ff8
#define AVR32_USB_FNUM_OFFSET                                       3
#define AVR32_USB_FNUM_SIZE                                        11
#define AVR32_USB_FORCEHSRESETTO50MS                                7
#define AVR32_USB_FORCEHSRESETTO50MS_MASK                  0x00000080
#define AVR32_USB_FORCEHSRESETTO50MS_OFFSET                         7
#define AVR32_USB_FORCEHSRESETTO50MS_SIZE                           1
#define AVR32_USB_FORCESUSPENDMTO1                                  4
#define AVR32_USB_FORCESUSPENDMTO1_MASK                    0x00000010
#define AVR32_USB_FORCESUSPENDMTO1_OFFSET                           4
#define AVR32_USB_FORCESUSPENDMTO1_SIZE                             1
#define AVR32_USB_FRZCLK_SIZE                                       1
#define AVR32_USB_FULL                                     0x00000000
#define AVR32_USB_FULLDETACHEN                                      0
#define AVR32_USB_FULLDETACHEN_MASK                        0x00000001
#define AVR32_USB_FULLDETACHEN_OFFSET                               0
#define AVR32_USB_FULLDETACHEN_SIZE                                 1
#define AVR32_USB_GE_16384                                 0x00000007
#define AVR32_USB_GT_16384                                 0x00000006
#define AVR32_USB_HNPERRE                                           6
#define AVR32_USB_HNPERRE_MASK                             0x00000040
#define AVR32_USB_HNPERRE_OFFSET                                    6
#define AVR32_USB_HNPERRE_SIZE                                      1
#define AVR32_USB_HNPERRI                                           6
#define AVR32_USB_HNPERRIC                                          6
#define AVR32_USB_HNPERRIC_MASK                            0x00000040
#define AVR32_USB_HNPERRIC_OFFSET                                   6
#define AVR32_USB_HNPERRIC_SIZE                                     1
#define AVR32_USB_HNPERRIS                                          6
#define AVR32_USB_HNPERRIS_MASK                            0x00000040
#define AVR32_USB_HNPERRIS_OFFSET                                   6
#define AVR32_USB_HNPERRIS_SIZE                                     1
#define AVR32_USB_HNPERRI_MASK                             0x00000040
#define AVR32_USB_HNPERRI_OFFSET                                    6
#define AVR32_USB_HNPERRI_SIZE                                      1
#define AVR32_USB_HNPREQ                                           11
#define AVR32_USB_HNPREQ_MASK                              0x00000800
#define AVR32_USB_HNPREQ_OFFSET                                    11
#define AVR32_USB_HNPREQ_SIZE                                       1
#define AVR32_USB_HOSTHSDISCONNECTDISABLE                           6
#define AVR32_USB_HOSTHSDISCONNECTDISABLE_MASK             0x00000040
#define AVR32_USB_HOSTHSDISCONNECTDISABLE_OFFSET                    6
#define AVR32_USB_HOSTHSDISCONNECTDISABLE_SIZE                      1
#define AVR32_USB_HSB_ADDR                                          0
#define AVR32_USB_HSB_ADDR_MASK                            0xffffffff
#define AVR32_USB_HSB_ADDR_OFFSET                                   0
#define AVR32_USB_HSB_ADDR_SIZE                                    32
#define AVR32_USB_HSOFI                                             5
#define AVR32_USB_HSOFIC                                            5
#define AVR32_USB_HSOFIC_MASK                              0x00000020
#define AVR32_USB_HSOFIC_OFFSET                                     5
#define AVR32_USB_HSOFIC_SIZE                                       1
#define AVR32_USB_HSOFIE                                            5
#define AVR32_USB_HSOFIEC                                           5
#define AVR32_USB_HSOFIEC_MASK                             0x00000020
#define AVR32_USB_HSOFIEC_OFFSET                                    5
#define AVR32_USB_HSOFIEC_SIZE                                      1
#define AVR32_USB_HSOFIES                                           5
#define AVR32_USB_HSOFIES_MASK                             0x00000020
#define AVR32_USB_HSOFIES_OFFSET                                    5
#define AVR32_USB_HSOFIES_SIZE                                      1
#define AVR32_USB_HSOFIE_MASK                              0x00000020
#define AVR32_USB_HSOFIE_OFFSET                                     5
#define AVR32_USB_HSOFIE_SIZE                                       1
#define AVR32_USB_HSOFIS                                            5
#define AVR32_USB_HSOFIS_MASK                              0x00000020
#define AVR32_USB_HSOFIS_OFFSET                                     5
#define AVR32_USB_HSOFIS_SIZE                                       1
#define AVR32_USB_HSOFI_MASK                               0x00000020
#define AVR32_USB_HSOFI_OFFSET                                      5
#define AVR32_USB_HSOFI_SIZE                                        1
#define AVR32_USB_HSSERIALMODE                                      1
#define AVR32_USB_HSSERIALMODE_MASK                        0x00000002
#define AVR32_USB_HSSERIALMODE_OFFSET                               1
#define AVR32_USB_HSSERIALMODE_SIZE                                 1
#define AVR32_USB_HWUPI                                             6
#define AVR32_USB_HWUPIC                                            6
#define AVR32_USB_HWUPIC_MASK                              0x00000040
#define AVR32_USB_HWUPIC_OFFSET                                     6
#define AVR32_USB_HWUPIC_SIZE                                       1
#define AVR32_USB_HWUPIE                                            6
#define AVR32_USB_HWUPIEC                                           6
#define AVR32_USB_HWUPIEC_MASK                             0x00000040
#define AVR32_USB_HWUPIEC_OFFSET                                    6
#define AVR32_USB_HWUPIEC_SIZE                                      1
#define AVR32_USB_HWUPIES                                           6
#define AVR32_USB_HWUPIES_MASK                             0x00000040
#define AVR32_USB_HWUPIES_OFFSET                                    6
#define AVR32_USB_HWUPIES_SIZE                                      1
#define AVR32_USB_HWUPIE_MASK                              0x00000040
#define AVR32_USB_HWUPIE_OFFSET                                     6
#define AVR32_USB_HWUPIE_SIZE                                       1
#define AVR32_USB_HWUPIS                                            6
#define AVR32_USB_HWUPIS_MASK                              0x00000040
#define AVR32_USB_HWUPIS_OFFSET                                     6
#define AVR32_USB_HWUPIS_SIZE                                       1
#define AVR32_USB_HWUPI_MASK                               0x00000040
#define AVR32_USB_HWUPI_OFFSET                                      6
#define AVR32_USB_HWUPI_SIZE                                        1
#define AVR32_USB_ID                                               10
#define AVR32_USB_IDTE                                              0
#define AVR32_USB_IDTE_MASK                                0x00000001
#define AVR32_USB_IDTE_OFFSET                                       0
#define AVR32_USB_IDTE_SIZE                                         1
#define AVR32_USB_IDTI                                              0
#define AVR32_USB_IDTIC                                             0
#define AVR32_USB_IDTIC_MASK                               0x00000001
#define AVR32_USB_IDTIC_OFFSET                                      0
#define AVR32_USB_IDTIC_SIZE                                        1
#define AVR32_USB_IDTIS                                             0
#define AVR32_USB_IDTIS_MASK                               0x00000001
#define AVR32_USB_IDTIS_OFFSET                                      0
#define AVR32_USB_IDTIS_SIZE                                        1
#define AVR32_USB_IDTI_MASK                                0x00000001
#define AVR32_USB_IDTI_OFFSET                                       0
#define AVR32_USB_IDTI_SIZE                                         1
#define AVR32_USB_ID_MASK                                  0x00000400
#define AVR32_USB_ID_OFFSET                                        10
#define AVR32_USB_ID_SIZE                                           1
#define AVR32_USB_IN                                       0x00000001
#define AVR32_USB_INMODE                                            8
#define AVR32_USB_INMODE_MASK                              0x00000100
#define AVR32_USB_INMODE_OFFSET                                     8
#define AVR32_USB_INMODE_SIZE                                       1
#define AVR32_USB_INRQ                                              0
#define AVR32_USB_INRQ_MASK                                0x000000ff
#define AVR32_USB_INRQ_OFFSET                                       0
#define AVR32_USB_INRQ_SIZE                                         8
#define AVR32_USB_INTERRUPT                                0x00000003
#define AVR32_USB_INTFRQ                                           24
#define AVR32_USB_INTFRQ_MASK                              0xff000000
#define AVR32_USB_INTFRQ_OFFSET                                    24
#define AVR32_USB_INTFRQ_SIZE                                       8
#define AVR32_USB_ISOCHRONOUS                              0x00000001
#define AVR32_USB_KILLBK                                           13
#define AVR32_USB_KILLBKS                                          13
#define AVR32_USB_KILLBKS_MASK                             0x00002000
#define AVR32_USB_KILLBKS_OFFSET                                   13
#define AVR32_USB_KILLBKS_SIZE                                      1
#define AVR32_USB_KILLBK_MASK                              0x00002000
#define AVR32_USB_KILLBK_OFFSET                                    13
#define AVR32_USB_KILLBK_SIZE                                       1
#define AVR32_USB_LD_NXT_CH_DESC_EN                                 1
#define AVR32_USB_LD_NXT_CH_DESC_EN_MASK                   0x00000002
#define AVR32_USB_LD_NXT_CH_DESC_EN_OFFSET                          1
#define AVR32_USB_LD_NXT_CH_DESC_EN_SIZE                            1
#define AVR32_USB_LOADCNTA                                         15
#define AVR32_USB_LOADCNTA_MASK                            0x00008000
#define AVR32_USB_LOADCNTA_OFFSET                                  15
#define AVR32_USB_LOADCNTA_SIZE                                     1
#define AVR32_USB_LOADCNTB                                         23
#define AVR32_USB_LOADCNTB_MASK                            0x00800000
#define AVR32_USB_LOADCNTB_OFFSET                                  23
#define AVR32_USB_LOADCNTB_SIZE                                     1
#define AVR32_USB_LOADSOFCNT                                       31
#define AVR32_USB_LOADSOFCNT_MASK                          0x80000000
#define AVR32_USB_LOADSOFCNT_OFFSET                                31
#define AVR32_USB_LOADSOFCNT_SIZE                                   1
#define AVR32_USB_LOOPBACKMODE                                      2
#define AVR32_USB_LOOPBACKMODE_MASK                        0x00000004
#define AVR32_USB_LOOPBACKMODE_OFFSET                               2
#define AVR32_USB_LOOPBACKMODE_SIZE                                 1
#define AVR32_USB_LOW                                      0x00000002
#define AVR32_USB_LS                                               12
#define AVR32_USB_LS_MASK                                  0x00001000
#define AVR32_USB_LS_OFFSET                                        12
#define AVR32_USB_LS_SIZE                                           1
#define AVR32_USB_LT_1024                                  0x00000002
#define AVR32_USB_LT_2048                                  0x00000003
#define AVR32_USB_LT_256                                   0x00000000
#define AVR32_USB_LT_512                                   0x00000001
#define AVR32_USB_MDATAE                                            8
#define AVR32_USB_MDATAEC                                           8
#define AVR32_USB_MDATAEC_MASK                             0x00000100
#define AVR32_USB_MDATAEC_OFFSET                                    8
#define AVR32_USB_MDATAEC_SIZE                                      1
#define AVR32_USB_MDATAES                                           8
#define AVR32_USB_MDATAES_MASK                             0x00000100
#define AVR32_USB_MDATAES_OFFSET                                    8
#define AVR32_USB_MDATAES_SIZE                                      1
#define AVR32_USB_MDATAE_MASK                              0x00000100
#define AVR32_USB_MDATAE_OFFSET                                     8
#define AVR32_USB_MDATAE_SIZE                                       1
#define AVR32_USB_METAL_FIX_NUM                                    16
#define AVR32_USB_METAL_FIX_NUM_MASK                       0x00070000
#define AVR32_USB_METAL_FIX_NUM_OFFSET                             16
#define AVR32_USB_METAL_FIX_NUM_SIZE                                3
#define AVR32_USB_MFNUM                                             0
#define AVR32_USB_MFNUM_MASK                               0x00000007
#define AVR32_USB_MFNUM_OFFSET                                      0
#define AVR32_USB_MFNUM_SIZE                                        3
#define AVR32_USB_MSOF                                              1
#define AVR32_USB_MSOFC                                             1
#define AVR32_USB_MSOFC_MASK                               0x00000002
#define AVR32_USB_MSOFC_OFFSET                                      1
#define AVR32_USB_MSOFC_SIZE                                        1
#define AVR32_USB_MSOFE                                             1
#define AVR32_USB_MSOFEC                                            1
#define AVR32_USB_MSOFEC_MASK                              0x00000002
#define AVR32_USB_MSOFEC_OFFSET                                     1
#define AVR32_USB_MSOFEC_SIZE                                       1
#define AVR32_USB_MSOFES                                            1
#define AVR32_USB_MSOFES_MASK                              0x00000002
#define AVR32_USB_MSOFES_OFFSET                                     1
#define AVR32_USB_MSOFES_SIZE                                       1
#define AVR32_USB_MSOFE_MASK                               0x00000002
#define AVR32_USB_MSOFE_OFFSET                                      1
#define AVR32_USB_MSOFE_SIZE                                        1
#define AVR32_USB_MSOFS                                             1
#define AVR32_USB_MSOFS_MASK                               0x00000002
#define AVR32_USB_MSOFS_OFFSET                                      1
#define AVR32_USB_MSOFS_SIZE                                        1
#define AVR32_USB_MSOF_MASK                                0x00000002
#define AVR32_USB_MSOF_OFFSET                                       1
#define AVR32_USB_MSOF_SIZE                                         1
#define AVR32_USB_NAKEDE                                            4
#define AVR32_USB_NAKEDEC                                           4
#define AVR32_USB_NAKEDEC_MASK                             0x00000010
#define AVR32_USB_NAKEDEC_OFFSET                                    4
#define AVR32_USB_NAKEDEC_SIZE                                      1
#define AVR32_USB_NAKEDES                                           4
#define AVR32_USB_NAKEDES_MASK                             0x00000010
#define AVR32_USB_NAKEDES_OFFSET                                    4
#define AVR32_USB_NAKEDES_SIZE                                      1
#define AVR32_USB_NAKEDE_MASK                              0x00000010
#define AVR32_USB_NAKEDE_OFFSET                                     4
#define AVR32_USB_NAKEDE_SIZE                                       1
#define AVR32_USB_NAKEDI                                            4
#define AVR32_USB_NAKEDIC                                           4
#define AVR32_USB_NAKEDIC_MASK                             0x00000010
#define AVR32_USB_NAKEDIC_OFFSET                                    4
#define AVR32_USB_NAKEDIC_SIZE                                      1
#define AVR32_USB_NAKEDIS                                           4
#define AVR32_USB_NAKEDIS_MASK                             0x00000010
#define AVR32_USB_NAKEDIS_OFFSET                                    4
#define AVR32_USB_NAKEDIS_SIZE                                      1
#define AVR32_USB_NAKEDI_MASK                              0x00000010
#define AVR32_USB_NAKEDI_OFFSET                                     4
#define AVR32_USB_NAKEDI_SIZE                                       1
#define AVR32_USB_NAKINE                                            4
#define AVR32_USB_NAKINEC                                           4
#define AVR32_USB_NAKINEC_MASK                             0x00000010
#define AVR32_USB_NAKINEC_OFFSET                                    4
#define AVR32_USB_NAKINEC_SIZE                                      1
#define AVR32_USB_NAKINES                                           4
#define AVR32_USB_NAKINES_MASK                             0x00000010
#define AVR32_USB_NAKINES_OFFSET                                    4
#define AVR32_USB_NAKINES_SIZE                                      1
#define AVR32_USB_NAKINE_MASK                              0x00000010
#define AVR32_USB_NAKINE_OFFSET                                     4
#define AVR32_USB_NAKINE_SIZE                                       1
#define AVR32_USB_NAKINI                                            4
#define AVR32_USB_NAKINIC                                           4
#define AVR32_USB_NAKINIC_MASK                             0x00000010
#define AVR32_USB_NAKINIC_OFFSET                                    4
#define AVR32_USB_NAKINIC_SIZE                                      1
#define AVR32_USB_NAKINIS                                           4
#define AVR32_USB_NAKINIS_MASK                             0x00000010
#define AVR32_USB_NAKINIS_OFFSET                                    4
#define AVR32_USB_NAKINIS_SIZE                                      1
#define AVR32_USB_NAKINI_MASK                              0x00000010
#define AVR32_USB_NAKINI_OFFSET                                     4
#define AVR32_USB_NAKINI_SIZE                                       1
#define AVR32_USB_NAKOUTE                                           3
#define AVR32_USB_NAKOUTEC                                          3
#define AVR32_USB_NAKOUTEC_MASK                            0x00000008
#define AVR32_USB_NAKOUTEC_OFFSET                                   3
#define AVR32_USB_NAKOUTEC_SIZE                                     1
#define AVR32_USB_NAKOUTES                                          3
#define AVR32_USB_NAKOUTES_MASK                            0x00000008
#define AVR32_USB_NAKOUTES_OFFSET                                   3
#define AVR32_USB_NAKOUTES_SIZE                                     1
#define AVR32_USB_NAKOUTE_MASK                             0x00000008
#define AVR32_USB_NAKOUTE_OFFSET                                    3
#define AVR32_USB_NAKOUTE_SIZE                                      1
#define AVR32_USB_NAKOUTI                                           3
#define AVR32_USB_NAKOUTIC                                          3
#define AVR32_USB_NAKOUTIC_MASK                            0x00000008
#define AVR32_USB_NAKOUTIC_OFFSET                                   3
#define AVR32_USB_NAKOUTIC_SIZE                                     1
#define AVR32_USB_NAKOUTIS                                          3
#define AVR32_USB_NAKOUTIS_MASK                            0x00000008
#define AVR32_USB_NAKOUTIS_OFFSET                                   3
#define AVR32_USB_NAKOUTIS_SIZE                                     1
#define AVR32_USB_NAKOUTI_MASK                             0x00000008
#define AVR32_USB_NAKOUTI_OFFSET                                    3
#define AVR32_USB_NAKOUTI_SIZE                                      1
#define AVR32_USB_NBTRANS                                          13
#define AVR32_USB_NBTRANS_MASK                             0x00006000
#define AVR32_USB_NBTRANS_OFFSET                                   13
#define AVR32_USB_NBTRANS_SIZE                                      2
#define AVR32_USB_NBUSYBK                                          12
#define AVR32_USB_NBUSYBKE                                         12
#define AVR32_USB_NBUSYBKEC                                        12
#define AVR32_USB_NBUSYBKEC_MASK                           0x00001000
#define AVR32_USB_NBUSYBKEC_OFFSET                                 12
#define AVR32_USB_NBUSYBKEC_SIZE                                    1
#define AVR32_USB_NBUSYBKES                                        12
#define AVR32_USB_NBUSYBKES_MASK                           0x00001000
#define AVR32_USB_NBUSYBKES_OFFSET                                 12
#define AVR32_USB_NBUSYBKES_SIZE                                    1
#define AVR32_USB_NBUSYBKE_MASK                            0x00001000
#define AVR32_USB_NBUSYBKE_OFFSET                                  12
#define AVR32_USB_NBUSYBKE_SIZE                                     1
#define AVR32_USB_NBUSYBKS                                         12
#define AVR32_USB_NBUSYBKS_MASK                            0x00001000
#define AVR32_USB_NBUSYBKS_OFFSET                                  12
#define AVR32_USB_NBUSYBKS_SIZE                                     1
#define AVR32_USB_NBUSYBK_MASK                             0x00003000
#define AVR32_USB_NBUSYBK_OFFSET                                   12
#define AVR32_USB_NBUSYBK_SIZE                                      2
#define AVR32_USB_NOTHOSTDISCONNECT                                 6
#define AVR32_USB_NOTHOSTDISCONNECT_MASK                   0x00000040
#define AVR32_USB_NOTHOSTDISCONNECT_OFFSET                          6
#define AVR32_USB_NOTHOSTDISCONNECT_SIZE                            1
#define AVR32_USB_NXT_DESC_ADDR                                     4
#define AVR32_USB_NXT_DESC_ADDR_MASK                       0xfffffff0
#define AVR32_USB_NXT_DESC_ADDR_OFFSET                              4
#define AVR32_USB_NXT_DESC_ADDR_SIZE                               28
#define AVR32_USB_NYETDIS                                          17
#define AVR32_USB_NYETDISC                                         17
#define AVR32_USB_NYETDISC_MASK                            0x00020000
#define AVR32_USB_NYETDISC_OFFSET                                  17
#define AVR32_USB_NYETDISC_SIZE                                     1
#define AVR32_USB_NYETDISS                                         17
#define AVR32_USB_NYETDISS_MASK                            0x00020000
#define AVR32_USB_NYETDISS_OFFSET                                  17
#define AVR32_USB_NYETDISS_SIZE                                     1
#define AVR32_USB_NYETDIS_MASK                             0x00020000
#define AVR32_USB_NYETDIS_OFFSET                                   17
#define AVR32_USB_NYETDIS_SIZE                                      1
#define AVR32_USB_OPMODE2                                          16
#define AVR32_USB_OPMODE2_MASK                             0x00010000
#define AVR32_USB_OPMODE2_OFFSET                                   16
#define AVR32_USB_OPMODE2_SIZE                                      1
#define AVR32_USB_OTGPADE                                          12
#define AVR32_USB_OTGPADE_MASK                             0x00001000
#define AVR32_USB_OTGPADE_OFFSET                                   12
#define AVR32_USB_OTGPADE_SIZE                                      1
#define AVR32_USB_OVERFE                                            5
#define AVR32_USB_OVERFEC                                           5
#define AVR32_USB_OVERFEC_MASK                             0x00000020
#define AVR32_USB_OVERFEC_OFFSET                                    5
#define AVR32_USB_OVERFEC_SIZE                                      1
#define AVR32_USB_OVERFES                                           5
#define AVR32_USB_OVERFES_MASK                             0x00000020
#define AVR32_USB_OVERFES_OFFSET                                    5
#define AVR32_USB_OVERFES_SIZE                                      1
#define AVR32_USB_OVERFE_MASK                              0x00000020
#define AVR32_USB_OVERFE_OFFSET                                     5
#define AVR32_USB_OVERFE_SIZE                                       1
#define AVR32_USB_OVERFI                                            5
#define AVR32_USB_OVERFIC                                           5
#define AVR32_USB_OVERFIC_MASK                             0x00000020
#define AVR32_USB_OVERFIC_OFFSET                                    5
#define AVR32_USB_OVERFIC_SIZE                                      1
#define AVR32_USB_OVERFIE                                           5
#define AVR32_USB_OVERFIEC                                          5
#define AVR32_USB_OVERFIEC_MASK                            0x00000020
#define AVR32_USB_OVERFIEC_OFFSET                                   5
#define AVR32_USB_OVERFIEC_SIZE                                     1
#define AVR32_USB_OVERFIES                                          5
#define AVR32_USB_OVERFIES_MASK                            0x00000020
#define AVR32_USB_OVERFIES_OFFSET                                   5
#define AVR32_USB_OVERFIES_SIZE                                     1
#define AVR32_USB_OVERFIE_MASK                             0x00000020
#define AVR32_USB_OVERFIE_OFFSET                                    5
#define AVR32_USB_OVERFIE_SIZE                                      1
#define AVR32_USB_OVERFIS                                           5
#define AVR32_USB_OVERFIS_MASK                             0x00000020
#define AVR32_USB_OVERFIS_OFFSET                                    5
#define AVR32_USB_OVERFIS_SIZE                                      1
#define AVR32_USB_OVERFI_MASK                              0x00000020
#define AVR32_USB_OVERFI_OFFSET                                     5
#define AVR32_USB_OVERFI_SIZE                                       1
#define AVR32_USB_P0INT                                             8
#define AVR32_USB_P0INTE                                            8
#define AVR32_USB_P0INTEC                                           8
#define AVR32_USB_P0INTEC_MASK                             0x00000100
#define AVR32_USB_P0INTEC_OFFSET                                    8
#define AVR32_USB_P0INTEC_SIZE                                      1
#define AVR32_USB_P0INTES                                           8
#define AVR32_USB_P0INTES_MASK                             0x00000100
#define AVR32_USB_P0INTES_OFFSET                                    8
#define AVR32_USB_P0INTES_SIZE                                      1
#define AVR32_USB_P0INTE_MASK                              0x00000100
#define AVR32_USB_P0INTE_OFFSET                                     8
#define AVR32_USB_P0INTE_SIZE                                       1
#define AVR32_USB_P0INT_MASK                               0x00000100
#define AVR32_USB_P0INT_OFFSET                                      8
#define AVR32_USB_P0INT_SIZE                                        1
#define AVR32_USB_P1INT                                             9
#define AVR32_USB_P1INTE                                            9
#define AVR32_USB_P1INTEC                                           9
#define AVR32_USB_P1INTEC_MASK                             0x00000200
#define AVR32_USB_P1INTEC_OFFSET                                    9
#define AVR32_USB_P1INTEC_SIZE                                      1
#define AVR32_USB_P1INTES                                           9
#define AVR32_USB_P1INTES_MASK                             0x00000200
#define AVR32_USB_P1INTES_OFFSET                                    9
#define AVR32_USB_P1INTES_SIZE                                      1
#define AVR32_USB_P1INTE_MASK                              0x00000200
#define AVR32_USB_P1INTE_OFFSET                                     9
#define AVR32_USB_P1INTE_SIZE                                       1
#define AVR32_USB_P1INT_MASK                               0x00000200
#define AVR32_USB_P1INT_OFFSET                                      9
#define AVR32_USB_P1INT_SIZE                                        1
#define AVR32_USB_P2INT                                            10
#define AVR32_USB_P2INTE                                           10
#define AVR32_USB_P2INTEC                                          10
#define AVR32_USB_P2INTEC_MASK                             0x00000400
#define AVR32_USB_P2INTEC_OFFSET                                   10
#define AVR32_USB_P2INTEC_SIZE                                      1
#define AVR32_USB_P2INTES                                          10
#define AVR32_USB_P2INTES_MASK                             0x00000400
#define AVR32_USB_P2INTES_OFFSET                                   10
#define AVR32_USB_P2INTES_SIZE                                      1
#define AVR32_USB_P2INTE_MASK                              0x00000400
#define AVR32_USB_P2INTE_OFFSET                                    10
#define AVR32_USB_P2INTE_SIZE                                       1
#define AVR32_USB_P2INT_MASK                               0x00000400
#define AVR32_USB_P2INT_OFFSET                                     10
#define AVR32_USB_P2INT_SIZE                                        1
#define AVR32_USB_P3INT                                            11
#define AVR32_USB_P3INTE                                           11
#define AVR32_USB_P3INTEC                                          11
#define AVR32_USB_P3INTEC_MASK                             0x00000800
#define AVR32_USB_P3INTEC_OFFSET                                   11
#define AVR32_USB_P3INTEC_SIZE                                      1
#define AVR32_USB_P3INTES                                          11
#define AVR32_USB_P3INTES_MASK                             0x00000800
#define AVR32_USB_P3INTES_OFFSET                                   11
#define AVR32_USB_P3INTES_SIZE                                      1
#define AVR32_USB_P3INTE_MASK                              0x00000800
#define AVR32_USB_P3INTE_OFFSET                                    11
#define AVR32_USB_P3INTE_SIZE                                       1
#define AVR32_USB_P3INT_MASK                               0x00000800
#define AVR32_USB_P3INT_OFFSET                                     11
#define AVR32_USB_P3INT_SIZE                                        1
#define AVR32_USB_P4INT                                            12
#define AVR32_USB_P4INTE                                           12
#define AVR32_USB_P4INTEC                                          12
#define AVR32_USB_P4INTEC_MASK                             0x00001000
#define AVR32_USB_P4INTEC_OFFSET                                   12
#define AVR32_USB_P4INTEC_SIZE                                      1
#define AVR32_USB_P4INTES                                          12
#define AVR32_USB_P4INTES_MASK                             0x00001000
#define AVR32_USB_P4INTES_OFFSET                                   12
#define AVR32_USB_P4INTES_SIZE                                      1
#define AVR32_USB_P4INTE_MASK                              0x00001000
#define AVR32_USB_P4INTE_OFFSET                                    12
#define AVR32_USB_P4INTE_SIZE                                       1
#define AVR32_USB_P4INT_MASK                               0x00001000
#define AVR32_USB_P4INT_OFFSET                                     12
#define AVR32_USB_P4INT_SIZE                                        1
#define AVR32_USB_P5INT                                            13
#define AVR32_USB_P5INTE                                           13
#define AVR32_USB_P5INTEC                                          13
#define AVR32_USB_P5INTEC_MASK                             0x00002000
#define AVR32_USB_P5INTEC_OFFSET                                   13
#define AVR32_USB_P5INTEC_SIZE                                      1
#define AVR32_USB_P5INTES                                          13
#define AVR32_USB_P5INTES_MASK                             0x00002000
#define AVR32_USB_P5INTES_OFFSET                                   13
#define AVR32_USB_P5INTES_SIZE                                      1
#define AVR32_USB_P5INTE_MASK                              0x00002000
#define AVR32_USB_P5INTE_OFFSET                                    13
#define AVR32_USB_P5INTE_SIZE                                       1
#define AVR32_USB_P5INT_MASK                               0x00002000
#define AVR32_USB_P5INT_OFFSET                                     13
#define AVR32_USB_P5INT_SIZE                                        1
#define AVR32_USB_P6INT                                            14
#define AVR32_USB_P6INTE                                           14
#define AVR32_USB_P6INTEC                                          14
#define AVR32_USB_P6INTEC_MASK                             0x00004000
#define AVR32_USB_P6INTEC_OFFSET                                   14
#define AVR32_USB_P6INTEC_SIZE                                      1
#define AVR32_USB_P6INTES                                          14
#define AVR32_USB_P6INTES_MASK                             0x00004000
#define AVR32_USB_P6INTES_OFFSET                                   14
#define AVR32_USB_P6INTES_SIZE                                      1
#define AVR32_USB_P6INTE_MASK                              0x00004000
#define AVR32_USB_P6INTE_OFFSET                                    14
#define AVR32_USB_P6INTE_SIZE                                       1
#define AVR32_USB_P6INT_MASK                               0x00004000
#define AVR32_USB_P6INT_OFFSET                                     14
#define AVR32_USB_P6INT_SIZE                                        1
#define AVR32_USB_P7INTE                                           15
#define AVR32_USB_P7INTEC                                          15
#define AVR32_USB_P7INTEC_MASK                             0x00008000
#define AVR32_USB_P7INTEC_OFFSET                                   15
#define AVR32_USB_P7INTEC_SIZE                                      1
#define AVR32_USB_P7INTES                                          15
#define AVR32_USB_P7INTES_MASK                             0x00008000
#define AVR32_USB_P7INTES_OFFSET                                   15
#define AVR32_USB_P7INTES_SIZE                                      1
#define AVR32_USB_P7INTE_MASK                              0x00008000
#define AVR32_USB_P7INTE_OFFSET                                    15
#define AVR32_USB_P7INTE_SIZE                                       1
#define AVR32_USB_PBK                                               2
#define AVR32_USB_PBK_DOUBLE                               0x00000001
#define AVR32_USB_PBK_MASK                                 0x0000000c
#define AVR32_USB_PBK_OFFSET                                        2
#define AVR32_USB_PBK_SINGLE                               0x00000000
#define AVR32_USB_PBK_SIZE                                          2
#define AVR32_USB_PBK_TRIPLE                               0x00000002
#define AVR32_USB_PBYCT                                            20
#define AVR32_USB_PBYCT_MASK                               0x7ff00000
#define AVR32_USB_PBYCT_OFFSET                                     20
#define AVR32_USB_PBYCT_SIZE                                       11
#define AVR32_USB_PDISHDMA                                         16
#define AVR32_USB_PDISHDMAC                                        16
#define AVR32_USB_PDISHDMAC_MASK                           0x00010000
#define AVR32_USB_PDISHDMAC_OFFSET                                 16
#define AVR32_USB_PDISHDMAC_SIZE                                    1
#define AVR32_USB_PDISHDMAS                                        16
#define AVR32_USB_PDISHDMAS_MASK                           0x00010000
#define AVR32_USB_PDISHDMAS_OFFSET                                 16
#define AVR32_USB_PDISHDMAS_SIZE                                    1
#define AVR32_USB_PDISHDMA_MASK                            0x00010000
#define AVR32_USB_PDISHDMA_OFFSET                                  16
#define AVR32_USB_PDISHDMA_SIZE                                     1
#define AVR32_USB_PD_TMOUT_CNT                             0x00000002
#define AVR32_USB_PEN0                                              0
#define AVR32_USB_PEN0_MASK                                0x00000001
#define AVR32_USB_PEN0_OFFSET                                       0
#define AVR32_USB_PEN0_SIZE                                         1
#define AVR32_USB_PEN1                                              1
#define AVR32_USB_PEN1_MASK                                0x00000002
#define AVR32_USB_PEN1_OFFSET                                       1
#define AVR32_USB_PEN1_SIZE                                         1
#define AVR32_USB_PEN2                                              2
#define AVR32_USB_PEN2_MASK                                0x00000004
#define AVR32_USB_PEN2_OFFSET                                       2
#define AVR32_USB_PEN2_SIZE                                         1
#define AVR32_USB_PEN3                                              3
#define AVR32_USB_PEN3_MASK                                0x00000008
#define AVR32_USB_PEN3_OFFSET                                       3
#define AVR32_USB_PEN3_SIZE                                         1
#define AVR32_USB_PEN4                                              4
#define AVR32_USB_PEN4_MASK                                0x00000010
#define AVR32_USB_PEN4_OFFSET                                       4
#define AVR32_USB_PEN4_SIZE                                         1
#define AVR32_USB_PEN5                                              5
#define AVR32_USB_PEN5_MASK                                0x00000020
#define AVR32_USB_PEN5_OFFSET                                       5
#define AVR32_USB_PEN5_SIZE                                         1
#define AVR32_USB_PEN6                                              6
#define AVR32_USB_PEN6_MASK                                0x00000040
#define AVR32_USB_PEN6_OFFSET                                       6
#define AVR32_USB_PEN6_SIZE                                         1
#define AVR32_USB_PEN7                                              7
#define AVR32_USB_PEN7_MASK                                0x00000080
#define AVR32_USB_PEN7_OFFSET                                       7
#define AVR32_USB_PEN7_SIZE                                         1
#define AVR32_USB_PEPNUM                                           16
#define AVR32_USB_PEPNUM_MASK                              0x000f0000
#define AVR32_USB_PEPNUM_OFFSET                                    16
#define AVR32_USB_PEPNUM_SIZE                                       4
#define AVR32_USB_PERRE                                             3
#define AVR32_USB_PERREC                                            3
#define AVR32_USB_PERREC_MASK                              0x00000008
#define AVR32_USB_PERREC_OFFSET                                     3
#define AVR32_USB_PERREC_SIZE                                       1
#define AVR32_USB_PERRES                                            3
#define AVR32_USB_PERRES_MASK                              0x00000008
#define AVR32_USB_PERRES_OFFSET                                     3
#define AVR32_USB_PERRES_SIZE                                       1
#define AVR32_USB_PERRE_MASK                               0x00000008
#define AVR32_USB_PERRE_OFFSET                                      3
#define AVR32_USB_PERRE_SIZE                                        1
#define AVR32_USB_PERRI                                             3
#define AVR32_USB_PERRIS                                            3
#define AVR32_USB_PERRIS_MASK                              0x00000008
#define AVR32_USB_PERRIS_OFFSET                                     3
#define AVR32_USB_PERRIS_SIZE                                       1
#define AVR32_USB_PERRI_MASK                               0x00000008
#define AVR32_USB_PERRI_OFFSET                                      3
#define AVR32_USB_PERRI_SIZE                                        1
#define AVR32_USB_PFREEZE                                          17
#define AVR32_USB_PFREEZEC                                         17
#define AVR32_USB_PFREEZEC_MASK                            0x00020000
#define AVR32_USB_PFREEZEC_OFFSET                                  17
#define AVR32_USB_PFREEZEC_SIZE                                     1
#define AVR32_USB_PFREEZES                                         17
#define AVR32_USB_PFREEZES_MASK                            0x00020000
#define AVR32_USB_PFREEZES_OFFSET                                  17
#define AVR32_USB_PFREEZES_SIZE                                     1
#define AVR32_USB_PFREEZE_MASK                             0x00020000
#define AVR32_USB_PFREEZE_OFFSET                                   17
#define AVR32_USB_PFREEZE_SIZE                                      1
#define AVR32_USB_PID                                               2
#define AVR32_USB_PID_MASK                                 0x00000004
#define AVR32_USB_PID_OFFSET                                        2
#define AVR32_USB_PID_SIZE                                          1
#define AVR32_USB_PINGEN                                           20
#define AVR32_USB_PINGEN_MASK                              0x00100000
#define AVR32_USB_PINGEN_OFFSET                                    20
#define AVR32_USB_PINGEN_SIZE                                       1
#define AVR32_USB_PRST0                                            16
#define AVR32_USB_PRST0_MASK                               0x00010000
#define AVR32_USB_PRST0_OFFSET                                     16
#define AVR32_USB_PRST0_SIZE                                        1
#define AVR32_USB_PRST1                                            17
#define AVR32_USB_PRST1_MASK                               0x00020000
#define AVR32_USB_PRST1_OFFSET                                     17
#define AVR32_USB_PRST1_SIZE                                        1
#define AVR32_USB_PRST2                                            18
#define AVR32_USB_PRST2_MASK                               0x00040000
#define AVR32_USB_PRST2_OFFSET                                     18
#define AVR32_USB_PRST2_SIZE                                        1
#define AVR32_USB_PRST3                                            19
#define AVR32_USB_PRST3_MASK                               0x00080000
#define AVR32_USB_PRST3_OFFSET                                     19
#define AVR32_USB_PRST3_SIZE                                        1
#define AVR32_USB_PRST4                                            20
#define AVR32_USB_PRST4_MASK                               0x00100000
#define AVR32_USB_PRST4_OFFSET                                     20
#define AVR32_USB_PRST4_SIZE                                        1
#define AVR32_USB_PRST5                                            21
#define AVR32_USB_PRST5_MASK                               0x00200000
#define AVR32_USB_PRST5_OFFSET                                     21
#define AVR32_USB_PRST5_SIZE                                        1
#define AVR32_USB_PRST6                                            22
#define AVR32_USB_PRST6_MASK                               0x00400000
#define AVR32_USB_PRST6_OFFSET                                     22
#define AVR32_USB_PRST6_SIZE                                        1
#define AVR32_USB_PRST7                                            23
#define AVR32_USB_PRST7_MASK                               0x00800000
#define AVR32_USB_PRST7_OFFSET                                     23
#define AVR32_USB_PRST7_SIZE                                        1
#define AVR32_USB_PSIZE                                             4
#define AVR32_USB_PSIZE_1024                               0x00000007
#define AVR32_USB_PSIZE_128                                0x00000004
#define AVR32_USB_PSIZE_16                                 0x00000001
#define AVR32_USB_PSIZE_256                                0x00000005
#define AVR32_USB_PSIZE_32                                 0x00000002
#define AVR32_USB_PSIZE_512                                0x00000006
#define AVR32_USB_PSIZE_64                                 0x00000003
#define AVR32_USB_PSIZE_8                                  0x00000000
#define AVR32_USB_PSIZE_MASK                               0x00000070
#define AVR32_USB_PSIZE_OFFSET                                      4
#define AVR32_USB_PSIZE_SIZE                                        3
#define AVR32_USB_PTOKEN                                            8
#define AVR32_USB_PTOKEN_IN                                0x00000001
#define AVR32_USB_PTOKEN_MASK                              0x00000300
#define AVR32_USB_PTOKEN_OFFSET                                     8
#define AVR32_USB_PTOKEN_OUT                               0x00000002
#define AVR32_USB_PTOKEN_SETUP                             0x00000000
#define AVR32_USB_PTOKEN_SIZE                                       2
#define AVR32_USB_PTYPE                                            12
#define AVR32_USB_PTYPE_BULK                               0x00000002
#define AVR32_USB_PTYPE_CONTROL                            0x00000000
#define AVR32_USB_PTYPE_INTERRUPT                          0x00000003
#define AVR32_USB_PTYPE_ISOCHRONOUS                        0x00000001
#define AVR32_USB_PTYPE_MASK                               0x00003000
#define AVR32_USB_PTYPE_OFFSET                                     12
#define AVR32_USB_PTYPE_SIZE                                        2
#define AVR32_USB_P_DATA                                            0
#define AVR32_USB_P_DATA_MASK                              0xffffffff
#define AVR32_USB_P_DATA_OFFSET                                     0
#define AVR32_USB_P_DATA_SIZE                                      32
#define AVR32_USB_REMOVEPUONTX                                      9
#define AVR32_USB_REMOVEPUONTX_MASK                        0x00000200
#define AVR32_USB_REMOVEPUONTX_OFFSET                               9
#define AVR32_USB_REMOVEPUONTX_SIZE                                 1
#define AVR32_USB_RESET                                             9
#define AVR32_USB_RESET_MASK                               0x00000200
#define AVR32_USB_RESET_OFFSET                                      9
#define AVR32_USB_RESET_SIZE                                        1
#define AVR32_USB_RESUME                                           10
#define AVR32_USB_RESUME_MASK                              0x00000400
#define AVR32_USB_RESUME_OFFSET                                    10
#define AVR32_USB_RESUME_SIZE                                       1
#define AVR32_USB_RMWKUP                                            9
#define AVR32_USB_RMWKUP_MASK                              0x00000200
#define AVR32_USB_RMWKUP_OFFSET                                     9
#define AVR32_USB_RMWKUP_SIZE                                       1
#define AVR32_USB_ROLEEXE                                           5
#define AVR32_USB_ROLEEXE_MASK                             0x00000020
#define AVR32_USB_ROLEEXE_OFFSET                                    5
#define AVR32_USB_ROLEEXE_SIZE                                      1
#define AVR32_USB_ROLEEXI                                           5
#define AVR32_USB_ROLEEXIC                                          5
#define AVR32_USB_ROLEEXIC_MASK                            0x00000020
#define AVR32_USB_ROLEEXIC_OFFSET                                   5
#define AVR32_USB_ROLEEXIC_SIZE                                     1
#define AVR32_USB_ROLEEXIS                                          5
#define AVR32_USB_ROLEEXIS_MASK                            0x00000020
#define AVR32_USB_ROLEEXIS_OFFSET                                   5
#define AVR32_USB_ROLEEXIS_SIZE                                     1
#define AVR32_USB_ROLEEXI_MASK                             0x00000020
#define AVR32_USB_ROLEEXI_OFFSET                                    5
#define AVR32_USB_ROLEEXI_SIZE                                      1
#define AVR32_USB_RSMEDI                                            3
#define AVR32_USB_RSMEDIC                                           3
#define AVR32_USB_RSMEDIC_MASK                             0x00000008
#define AVR32_USB_RSMEDIC_OFFSET                                    3
#define AVR32_USB_RSMEDIC_SIZE                                      1
#define AVR32_USB_RSMEDIE                                           3
#define AVR32_USB_RSMEDIEC                                          3
#define AVR32_USB_RSMEDIEC_MASK                            0x00000008
#define AVR32_USB_RSMEDIEC_OFFSET                                   3
#define AVR32_USB_RSMEDIEC_SIZE                                     1
#define AVR32_USB_RSMEDIES                                          3
#define AVR32_USB_RSMEDIES_MASK                            0x00000008
#define AVR32_USB_RSMEDIES_OFFSET                                   3
#define AVR32_USB_RSMEDIES_SIZE                                     1
#define AVR32_USB_RSMEDIE_MASK                             0x00000008
#define AVR32_USB_RSMEDIE_OFFSET                                    3
#define AVR32_USB_RSMEDIE_SIZE                                      1
#define AVR32_USB_RSMEDIS                                           3
#define AVR32_USB_RSMEDIS_MASK                             0x00000008
#define AVR32_USB_RSMEDIS_OFFSET                                    3
#define AVR32_USB_RSMEDIS_SIZE                                      1
#define AVR32_USB_RSMEDI_MASK                              0x00000008
#define AVR32_USB_RSMEDI_OFFSET                                     3
#define AVR32_USB_RSMEDI_SIZE                                       1
#define AVR32_USB_RSTDT                                            18
#define AVR32_USB_RSTDTS                                           18
#define AVR32_USB_RSTDTS_MASK                              0x00040000
#define AVR32_USB_RSTDTS_OFFSET                                    18
#define AVR32_USB_RSTDTS_SIZE                                       1
#define AVR32_USB_RSTDT_MASK                               0x00040000
#define AVR32_USB_RSTDT_OFFSET                                     18
#define AVR32_USB_RSTDT_SIZE                                        1
#define AVR32_USB_RSTI                                              2
#define AVR32_USB_RSTIC                                             2
#define AVR32_USB_RSTIC_MASK                               0x00000004
#define AVR32_USB_RSTIC_OFFSET                                      2
#define AVR32_USB_RSTIC_SIZE                                        1
#define AVR32_USB_RSTIE                                             2
#define AVR32_USB_RSTIEC                                            2
#define AVR32_USB_RSTIEC_MASK                              0x00000004
#define AVR32_USB_RSTIEC_OFFSET                                     2
#define AVR32_USB_RSTIEC_SIZE                                       1
#define AVR32_USB_RSTIES                                            2
#define AVR32_USB_RSTIES_MASK                              0x00000004
#define AVR32_USB_RSTIES_OFFSET                                     2
#define AVR32_USB_RSTIES_SIZE                                       1
#define AVR32_USB_RSTIE_MASK                               0x00000004
#define AVR32_USB_RSTIE_OFFSET                                      2
#define AVR32_USB_RSTIE_SIZE                                        1
#define AVR32_USB_RSTIS                                             2
#define AVR32_USB_RSTIS_MASK                               0x00000004
#define AVR32_USB_RSTIS_OFFSET                                      2
#define AVR32_USB_RSTIS_SIZE                                        1
#define AVR32_USB_RSTI_MASK                                0x00000004
#define AVR32_USB_RSTI_OFFSET                                       2
#define AVR32_USB_RSTI_SIZE                                         1
#define AVR32_USB_RWALL                                            16
#define AVR32_USB_RWALL_MASK                               0x00010000
#define AVR32_USB_RWALL_OFFSET                                     16
#define AVR32_USB_RWALL_SIZE                                        1
#define AVR32_USB_RXINE                                             0
#define AVR32_USB_RXINEC                                            0
#define AVR32_USB_RXINEC_MASK                              0x00000001
#define AVR32_USB_RXINEC_OFFSET                                     0
#define AVR32_USB_RXINEC_SIZE                                       1
#define AVR32_USB_RXINES                                            0
#define AVR32_USB_RXINES_MASK                              0x00000001
#define AVR32_USB_RXINES_OFFSET                                     0
#define AVR32_USB_RXINES_SIZE                                       1
#define AVR32_USB_RXINE_MASK                               0x00000001
#define AVR32_USB_RXINE_OFFSET                                      0
#define AVR32_USB_RXINE_SIZE                                        1
#define AVR32_USB_RXINI                                             0
#define AVR32_USB_RXINIC                                            0
#define AVR32_USB_RXINIC_MASK                              0x00000001
#define AVR32_USB_RXINIC_OFFSET                                     0
#define AVR32_USB_RXINIC_SIZE                                       1
#define AVR32_USB_RXINIS                                            0
#define AVR32_USB_RXINIS_MASK                              0x00000001
#define AVR32_USB_RXINIS_OFFSET                                     0
#define AVR32_USB_RXINIS_SIZE                                       1
#define AVR32_USB_RXINI_MASK                               0x00000001
#define AVR32_USB_RXINI_OFFSET                                      0
#define AVR32_USB_RXINI_SIZE                                        1
#define AVR32_USB_RXOUTE                                            1
#define AVR32_USB_RXOUTEC                                           1
#define AVR32_USB_RXOUTEC_MASK                             0x00000002
#define AVR32_USB_RXOUTEC_OFFSET                                    1
#define AVR32_USB_RXOUTEC_SIZE                                      1
#define AVR32_USB_RXOUTES                                           1
#define AVR32_USB_RXOUTES_MASK                             0x00000002
#define AVR32_USB_RXOUTES_OFFSET                                    1
#define AVR32_USB_RXOUTES_SIZE                                      1
#define AVR32_USB_RXOUTE_MASK                              0x00000002
#define AVR32_USB_RXOUTE_OFFSET                                     1
#define AVR32_USB_RXOUTE_SIZE                                       1
#define AVR32_USB_RXOUTI                                            1
#define AVR32_USB_RXOUTIC                                           1
#define AVR32_USB_RXOUTIC_MASK                             0x00000002
#define AVR32_USB_RXOUTIC_OFFSET                                    1
#define AVR32_USB_RXOUTIC_SIZE                                      1
#define AVR32_USB_RXOUTIS                                           1
#define AVR32_USB_RXOUTIS_MASK                             0x00000002
#define AVR32_USB_RXOUTIS_OFFSET                                    1
#define AVR32_USB_RXOUTIS_SIZE                                      1
#define AVR32_USB_RXOUTI_MASK                              0x00000002
#define AVR32_USB_RXOUTI_OFFSET                                     1
#define AVR32_USB_RXOUTI_SIZE                                       1
#define AVR32_USB_RXRSMI                                            4
#define AVR32_USB_RXRSMIC                                           4
#define AVR32_USB_RXRSMIC_MASK                             0x00000010
#define AVR32_USB_RXRSMIC_OFFSET                                    4
#define AVR32_USB_RXRSMIC_SIZE                                      1
#define AVR32_USB_RXRSMIE                                           4
#define AVR32_USB_RXRSMIEC                                          4
#define AVR32_USB_RXRSMIEC_MASK                            0x00000010
#define AVR32_USB_RXRSMIEC_OFFSET                                   4
#define AVR32_USB_RXRSMIEC_SIZE                                     1
#define AVR32_USB_RXRSMIES                                          4
#define AVR32_USB_RXRSMIES_MASK                            0x00000010
#define AVR32_USB_RXRSMIES_OFFSET                                   4
#define AVR32_USB_RXRSMIES_SIZE                                     1
#define AVR32_USB_RXRSMIE_MASK                             0x00000010
#define AVR32_USB_RXRSMIE_OFFSET                                    4
#define AVR32_USB_RXRSMIE_SIZE                                      1
#define AVR32_USB_RXRSMIS                                           4
#define AVR32_USB_RXRSMIS_MASK                             0x00000010
#define AVR32_USB_RXRSMIS_OFFSET                                    4
#define AVR32_USB_RXRSMIS_SIZE                                      1
#define AVR32_USB_RXRSMI_MASK                              0x00000010
#define AVR32_USB_RXRSMI_OFFSET                                     4
#define AVR32_USB_RXRSMI_SIZE                                       1
#define AVR32_USB_RXSTALLDE                                         6
#define AVR32_USB_RXSTALLDEC                                        6
#define AVR32_USB_RXSTALLDEC_MASK                          0x00000040
#define AVR32_USB_RXSTALLDEC_OFFSET                                 6
#define AVR32_USB_RXSTALLDEC_SIZE                                   1
#define AVR32_USB_RXSTALLDES                                        6
#define AVR32_USB_RXSTALLDES_MASK                          0x00000040
#define AVR32_USB_RXSTALLDES_OFFSET                                 6
#define AVR32_USB_RXSTALLDES_SIZE                                   1
#define AVR32_USB_RXSTALLDE_MASK                           0x00000040
#define AVR32_USB_RXSTALLDE_OFFSET                                  6
#define AVR32_USB_RXSTALLDE_SIZE                                    1
#define AVR32_USB_RXSTALLDI                                         6
#define AVR32_USB_RXSTALLDIC                                        6
#define AVR32_USB_RXSTALLDIC_MASK                          0x00000040
#define AVR32_USB_RXSTALLDIC_OFFSET                                 6
#define AVR32_USB_RXSTALLDIC_SIZE                                   1
#define AVR32_USB_RXSTALLDIS                                        6
#define AVR32_USB_RXSTALLDIS_MASK                          0x00000040
#define AVR32_USB_RXSTALLDIS_OFFSET                                 6
#define AVR32_USB_RXSTALLDIS_SIZE                                   1
#define AVR32_USB_RXSTALLDI_MASK                           0x00000040
#define AVR32_USB_RXSTALLDI_OFFSET                                  6
#define AVR32_USB_RXSTALLDI_SIZE                                    1
#define AVR32_USB_RXSTPE                                            2
#define AVR32_USB_RXSTPEC                                           2
#define AVR32_USB_RXSTPEC_MASK                             0x00000004
#define AVR32_USB_RXSTPEC_OFFSET                                    2
#define AVR32_USB_RXSTPEC_SIZE                                      1
#define AVR32_USB_RXSTPES                                           2
#define AVR32_USB_RXSTPES_MASK                             0x00000004
#define AVR32_USB_RXSTPES_OFFSET                                    2
#define AVR32_USB_RXSTPES_SIZE                                      1
#define AVR32_USB_RXSTPE_MASK                              0x00000004
#define AVR32_USB_RXSTPE_OFFSET                                     2
#define AVR32_USB_RXSTPE_SIZE                                       1
#define AVR32_USB_RXSTPI                                            2
#define AVR32_USB_RXSTPIC                                           2
#define AVR32_USB_RXSTPIC_MASK                             0x00000004
#define AVR32_USB_RXSTPIC_OFFSET                                    2
#define AVR32_USB_RXSTPIC_SIZE                                      1
#define AVR32_USB_RXSTPIS                                           2
#define AVR32_USB_RXSTPIS_MASK                             0x00000004
#define AVR32_USB_RXSTPIS_OFFSET                                    2
#define AVR32_USB_RXSTPIS_SIZE                                      1
#define AVR32_USB_RXSTPI_MASK                              0x00000004
#define AVR32_USB_RXSTPI_OFFSET                                     2
#define AVR32_USB_RXSTPI_SIZE                                       1
#define AVR32_USB_SETMDATA                                          8
#define AVR32_USB_SETMDATA_MASK                            0x00000100
#define AVR32_USB_SETMDATA_OFFSET                                   8
#define AVR32_USB_SETMDATA_SIZE                                     1
#define AVR32_USB_SETUP                                    0x00000000
#define AVR32_USB_SHORTPACKET                                       7
#define AVR32_USB_SHORTPACKETC                                      7
#define AVR32_USB_SHORTPACKETC_MASK                        0x00000080
#define AVR32_USB_SHORTPACKETC_OFFSET                               7
#define AVR32_USB_SHORTPACKETC_SIZE                                 1
#define AVR32_USB_SHORTPACKETE                                      7
#define AVR32_USB_SHORTPACKETEC                                     7
#define AVR32_USB_SHORTPACKETEC_MASK                       0x00000080
#define AVR32_USB_SHORTPACKETEC_OFFSET                              7
#define AVR32_USB_SHORTPACKETEC_SIZE                                1
#define AVR32_USB_SHORTPACKETES                                     7
#define AVR32_USB_SHORTPACKETES_MASK                       0x00000080
#define AVR32_USB_SHORTPACKETES_OFFSET                              7
#define AVR32_USB_SHORTPACKETES_SIZE                                1
#define AVR32_USB_SHORTPACKETE_MASK                        0x00000080
#define AVR32_USB_SHORTPACKETE_OFFSET                               7
#define AVR32_USB_SHORTPACKETE_SIZE                                 1
#define AVR32_USB_SHORTPACKETI                                      7
#define AVR32_USB_SHORTPACKETIC                                     7
#define AVR32_USB_SHORTPACKETIC_MASK                       0x00000080
#define AVR32_USB_SHORTPACKETIC_OFFSET                              7
#define AVR32_USB_SHORTPACKETIC_SIZE                                1
#define AVR32_USB_SHORTPACKETIE                                     7
#define AVR32_USB_SHORTPACKETIEC                                    7
#define AVR32_USB_SHORTPACKETIEC_MASK                      0x00000080
#define AVR32_USB_SHORTPACKETIEC_OFFSET                             7
#define AVR32_USB_SHORTPACKETIEC_SIZE                               1
#define AVR32_USB_SHORTPACKETIES                                    7
#define AVR32_USB_SHORTPACKETIES_MASK                      0x00000080
#define AVR32_USB_SHORTPACKETIES_OFFSET                             7
#define AVR32_USB_SHORTPACKETIES_SIZE                               1
#define AVR32_USB_SHORTPACKETIE_MASK                       0x00000080
#define AVR32_USB_SHORTPACKETIE_OFFSET                              7
#define AVR32_USB_SHORTPACKETIE_SIZE                                1
#define AVR32_USB_SHORTPACKETIS                                     7
#define AVR32_USB_SHORTPACKETIS_MASK                       0x00000080
#define AVR32_USB_SHORTPACKETIS_OFFSET                              7
#define AVR32_USB_SHORTPACKETIS_SIZE                                1
#define AVR32_USB_SHORTPACKETI_MASK                        0x00000080
#define AVR32_USB_SHORTPACKETI_OFFSET                               7
#define AVR32_USB_SHORTPACKETI_SIZE                                 1
#define AVR32_USB_SHORTPACKETS                                      7
#define AVR32_USB_SHORTPACKETS_MASK                        0x00000080
#define AVR32_USB_SHORTPACKETS_OFFSET                               7
#define AVR32_USB_SHORTPACKETS_SIZE                                 1
#define AVR32_USB_SHORTPACKET_MASK                         0x00000080
#define AVR32_USB_SHORTPACKET_OFFSET                                7
#define AVR32_USB_SHORTPACKET_SIZE                                  1
#define AVR32_USB_SINGLE                                   0x00000000
#define AVR32_USB_SOF                                               2
#define AVR32_USB_SOFC                                              2
#define AVR32_USB_SOFCNTMAX                                        24
#define AVR32_USB_SOFCNTMAX_MASK                           0x7f000000
#define AVR32_USB_SOFCNTMAX_OFFSET                                 24
#define AVR32_USB_SOFCNTMAX_SIZE                                    7
#define AVR32_USB_SOFC_MASK                                0x00000004
#define AVR32_USB_SOFC_OFFSET                                       2
#define AVR32_USB_SOFC_SIZE                                         1
#define AVR32_USB_SOFEC                                             2
#define AVR32_USB_SOFEC_MASK                               0x00000004
#define AVR32_USB_SOFEC_OFFSET                                      2
#define AVR32_USB_SOFEC_SIZE                                        1
#define AVR32_USB_SOFES                                             2
#define AVR32_USB_SOFES_MASK                               0x00000004
#define AVR32_USB_SOFES_OFFSET                                      2
#define AVR32_USB_SOFES_SIZE                                        1
#define AVR32_USB_SOFE_SIZE                                         1
#define AVR32_USB_SOFS                                              2
#define AVR32_USB_SOFS_MASK                                0x00000004
#define AVR32_USB_SOFS_OFFSET                                       2
#define AVR32_USB_SOFS_SIZE                                         1
#define AVR32_USB_SOF_MASK                                 0x00000004
#define AVR32_USB_SOF_OFFSET                                        2
#define AVR32_USB_SOF_SIZE                                          1
#define AVR32_USB_SPDCONF_SIZE                                      2
#define AVR32_USB_SPEED_FULL                               0x00000000
#define AVR32_USB_SPEED_LOW                                0x00000002
#define AVR32_USB_SRPE                                              2
#define AVR32_USB_SRPE_MASK                                0x00000004
#define AVR32_USB_SRPE_OFFSET                                       2
#define AVR32_USB_SRPE_SIZE                                         1
#define AVR32_USB_SRPI                                              2
#define AVR32_USB_SRPIC                                             2
#define AVR32_USB_SRPIC_MASK                               0x00000004
#define AVR32_USB_SRPIC_OFFSET                                      2
#define AVR32_USB_SRPIC_SIZE                                        1
#define AVR32_USB_SRPIS                                             2
#define AVR32_USB_SRPIS_MASK                               0x00000004
#define AVR32_USB_SRPIS_OFFSET                                      2
#define AVR32_USB_SRPIS_SIZE                                        1
#define AVR32_USB_SRPI_MASK                                0x00000004
#define AVR32_USB_SRPI_OFFSET                                       2
#define AVR32_USB_SRPI_SIZE                                         1
#define AVR32_USB_SRPREQ                                           10
#define AVR32_USB_SRPREQ_MASK                              0x00000400
#define AVR32_USB_SRPREQ_OFFSET                                    10
#define AVR32_USB_SRPREQ_SIZE                                       1
#define AVR32_USB_SRPSEL                                            9
#define AVR32_USB_SRPSEL_MASK                              0x00000200
#define AVR32_USB_SRPSEL_OFFSET                                     9
#define AVR32_USB_SRPSEL_SIZE                                       1
#define AVR32_USB_SRP_DET_TMOUT                            0x00000003
#define AVR32_USB_STALLEDE                                          6
#define AVR32_USB_STALLEDEC                                         6
#define AVR32_USB_STALLEDEC_MASK                           0x00000040
#define AVR32_USB_STALLEDEC_OFFSET                                  6
#define AVR32_USB_STALLEDEC_SIZE                                    1
#define AVR32_USB_STALLEDES                                         6
#define AVR32_USB_STALLEDES_MASK                           0x00000040
#define AVR32_USB_STALLEDES_OFFSET                                  6
#define AVR32_USB_STALLEDES_SIZE                                    1
#define AVR32_USB_STALLEDE_MASK                            0x00000040
#define AVR32_USB_STALLEDE_OFFSET                                   6
#define AVR32_USB_STALLEDE_SIZE                                     1
#define AVR32_USB_STALLEDI                                          6
#define AVR32_USB_STALLEDIC                                         6
#define AVR32_USB_STALLEDIC_MASK                           0x00000040
#define AVR32_USB_STALLEDIC_OFFSET                                  6
#define AVR32_USB_STALLEDIC_SIZE                                    1
#define AVR32_USB_STALLEDIS                                         6
#define AVR32_USB_STALLEDIS_MASK                           0x00000040
#define AVR32_USB_STALLEDIS_OFFSET                                  6
#define AVR32_USB_STALLEDIS_SIZE                                    1
#define AVR32_USB_STALLEDI_MASK                            0x00000040
#define AVR32_USB_STALLEDI_OFFSET                                   6
#define AVR32_USB_STALLEDI_SIZE                                     1
#define AVR32_USB_STALLRQ                                          19
#define AVR32_USB_STALLRQC                                         19
#define AVR32_USB_STALLRQC_MASK                            0x00080000
#define AVR32_USB_STALLRQC_OFFSET                                  19
#define AVR32_USB_STALLRQC_SIZE                                     1
#define AVR32_USB_STALLRQS                                         19
#define AVR32_USB_STALLRQS_MASK                            0x00080000
#define AVR32_USB_STALLRQS_OFFSET                                  19
#define AVR32_USB_STALLRQS_SIZE                                     1
#define AVR32_USB_STALLRQ_MASK                             0x00080000
#define AVR32_USB_STALLRQ_OFFSET                                   19
#define AVR32_USB_STALLRQ_SIZE                                      1
#define AVR32_USB_STOE                                              7
#define AVR32_USB_STOE_MASK                                0x00000080
#define AVR32_USB_STOE_OFFSET                                       7
#define AVR32_USB_STOE_SIZE                                         1
#define AVR32_USB_STOI                                              7
#define AVR32_USB_STOIC                                             7
#define AVR32_USB_STOIC_MASK                               0x00000080
#define AVR32_USB_STOIC_OFFSET                                      7
#define AVR32_USB_STOIC_SIZE                                        1
#define AVR32_USB_STOIS                                             7
#define AVR32_USB_STOIS_MASK                               0x00000080
#define AVR32_USB_STOIS_OFFSET                                      7
#define AVR32_USB_STOIS_SIZE                                        1
#define AVR32_USB_STOI_MASK                                0x00000080
#define AVR32_USB_STOI_OFFSET                                       7
#define AVR32_USB_STOI_SIZE                                         1
#define AVR32_USB_SUSP                                              0
#define AVR32_USB_SUSPC                                             0
#define AVR32_USB_SUSPC_MASK                               0x00000001
#define AVR32_USB_SUSPC_OFFSET                                      0
#define AVR32_USB_SUSPC_SIZE                                        1
#define AVR32_USB_SUSPE                                             0
#define AVR32_USB_SUSPEC                                            0
#define AVR32_USB_SUSPEC_MASK                              0x00000001
#define AVR32_USB_SUSPEC_OFFSET                                     0
#define AVR32_USB_SUSPEC_SIZE                                       1
#define AVR32_USB_SUSPES                                            0
#define AVR32_USB_SUSPES_MASK                              0x00000001
#define AVR32_USB_SUSPES_OFFSET                                     0
#define AVR32_USB_SUSPES_SIZE                                       1
#define AVR32_USB_SUSPE_MASK                               0x00000001
#define AVR32_USB_SUSPE_OFFSET                                      0
#define AVR32_USB_SUSPE_SIZE                                        1
#define AVR32_USB_SUSPS                                             0
#define AVR32_USB_SUSPS_MASK                               0x00000001
#define AVR32_USB_SUSPS_OFFSET                                      0
#define AVR32_USB_SUSPS_SIZE                                        1
#define AVR32_USB_SUSP_MASK                                0x00000001
#define AVR32_USB_SUSP_OFFSET                                       0
#define AVR32_USB_SUSP_SIZE                                         1
#define AVR32_USB_TIMEOUT                                           3
#define AVR32_USB_TIMEOUT_MASK                             0x00000008
#define AVR32_USB_TIMEOUT_OFFSET                                    3
#define AVR32_USB_TIMEOUT_SIZE                                      1
#define AVR32_USB_TIMPAGE                                          20
#define AVR32_USB_TIMPAGE_A_WAIT_VRISE                     0x00000000
#define AVR32_USB_TIMPAGE_MASK                             0x00300000
#define AVR32_USB_TIMPAGE_OFFSET                                   20
#define AVR32_USB_TIMPAGE_PD_TMOUT_CNT                     0x00000002
#define AVR32_USB_TIMPAGE_SIZE                                      2
#define AVR32_USB_TIMPAGE_SRP_DET_TMOUT                    0x00000003
#define AVR32_USB_TIMPAGE_VB_BUS_PULSING                   0x00000001
#define AVR32_USB_TIMVALUE                                         16
#define AVR32_USB_TIMVALUE_MASK                            0x00030000
#define AVR32_USB_TIMVALUE_OFFSET                                  16
#define AVR32_USB_TIMVALUE_SIZE                                     2
#define AVR32_USB_TRIPLE                                   0x00000002
#define AVR32_USB_TSTJ                                             13
#define AVR32_USB_TSTJ_MASK                                0x00002000
#define AVR32_USB_TSTJ_OFFSET                                      13
#define AVR32_USB_TSTJ_SIZE                                         1
#define AVR32_USB_TSTK                                             14
#define AVR32_USB_TSTK_MASK                                0x00004000
#define AVR32_USB_TSTK_OFFSET                                      14
#define AVR32_USB_TSTK_SIZE                                         1
#define AVR32_USB_TSTPCKT                                          15
#define AVR32_USB_TSTPCKT_MASK                             0x00008000
#define AVR32_USB_TSTPCKT_OFFSET                                   15
#define AVR32_USB_TSTPCKT_SIZE                                      1
#define AVR32_USB_TXINE                                             0
#define AVR32_USB_TXINEC                                            0
#define AVR32_USB_TXINEC_MASK                              0x00000001
#define AVR32_USB_TXINEC_OFFSET                                     0
#define AVR32_USB_TXINEC_SIZE                                       1
#define AVR32_USB_TXINES                                            0
#define AVR32_USB_TXINES_MASK                              0x00000001
#define AVR32_USB_TXINES_OFFSET                                     0
#define AVR32_USB_TXINES_SIZE                                       1
#define AVR32_USB_TXINE_MASK                               0x00000001
#define AVR32_USB_TXINE_OFFSET                                      0
#define AVR32_USB_TXINE_SIZE                                        1
#define AVR32_USB_TXINI                                             0
#define AVR32_USB_TXINIC                                            0
#define AVR32_USB_TXINIC_MASK                              0x00000001
#define AVR32_USB_TXINIC_OFFSET                                     0
#define AVR32_USB_TXINIC_SIZE                                       1
#define AVR32_USB_TXINIS                                            0
#define AVR32_USB_TXINIS_MASK                              0x00000001
#define AVR32_USB_TXINIS_OFFSET                                     0
#define AVR32_USB_TXINIS_SIZE                                       1
#define AVR32_USB_TXINI_MASK                               0x00000001
#define AVR32_USB_TXINI_OFFSET                                      0
#define AVR32_USB_TXINI_SIZE                                        1
#define AVR32_USB_TXOUTE                                            1
#define AVR32_USB_TXOUTEC                                           1
#define AVR32_USB_TXOUTEC_MASK                             0x00000002
#define AVR32_USB_TXOUTEC_OFFSET                                    1
#define AVR32_USB_TXOUTEC_SIZE                                      1
#define AVR32_USB_TXOUTES                                           1
#define AVR32_USB_TXOUTES_MASK                             0x00000002
#define AVR32_USB_TXOUTES_OFFSET                                    1
#define AVR32_USB_TXOUTES_SIZE                                      1
#define AVR32_USB_TXOUTE_MASK                              0x00000002
#define AVR32_USB_TXOUTE_OFFSET                                     1
#define AVR32_USB_TXOUTE_SIZE                                       1
#define AVR32_USB_TXOUTI                                            1
#define AVR32_USB_TXOUTIC                                           1
#define AVR32_USB_TXOUTIC_MASK                             0x00000002
#define AVR32_USB_TXOUTIC_OFFSET                                    1
#define AVR32_USB_TXOUTIC_SIZE                                      1
#define AVR32_USB_TXOUTIS                                           1
#define AVR32_USB_TXOUTIS_MASK                             0x00000002
#define AVR32_USB_TXOUTIS_OFFSET                                    1
#define AVR32_USB_TXOUTIS_SIZE                                      1
#define AVR32_USB_TXOUTI_MASK                              0x00000002
#define AVR32_USB_TXOUTI_OFFSET                                     1
#define AVR32_USB_TXOUTI_SIZE                                       1
#define AVR32_USB_TXSTPE                                            2
#define AVR32_USB_TXSTPEC                                           2
#define AVR32_USB_TXSTPEC_MASK                             0x00000004
#define AVR32_USB_TXSTPEC_OFFSET                                    2
#define AVR32_USB_TXSTPEC_SIZE                                      1
#define AVR32_USB_TXSTPES                                           2
#define AVR32_USB_TXSTPES_MASK                             0x00000004
#define AVR32_USB_TXSTPES_OFFSET                                    2
#define AVR32_USB_TXSTPES_SIZE                                      1
#define AVR32_USB_TXSTPE_MASK                              0x00000004
#define AVR32_USB_TXSTPE_OFFSET                                     2
#define AVR32_USB_TXSTPE_SIZE                                       1
#define AVR32_USB_TXSTPI                                            2
#define AVR32_USB_TXSTPIC                                           2
#define AVR32_USB_TXSTPIC_MASK                             0x00000004
#define AVR32_USB_TXSTPIC_OFFSET                                    2
#define AVR32_USB_TXSTPIC_SIZE                                      1
#define AVR32_USB_TXSTPIS                                           2
#define AVR32_USB_TXSTPIS_MASK                             0x00000004
#define AVR32_USB_TXSTPIS_OFFSET                                    2
#define AVR32_USB_TXSTPIS_SIZE                                      1
#define AVR32_USB_TXSTPI_MASK                              0x00000004
#define AVR32_USB_TXSTPI_OFFSET                                     2
#define AVR32_USB_TXSTPI_SIZE                                       1
#define AVR32_USB_UADD                                              0
#define AVR32_USB_UADDRSIZE                                0x00000820
#define AVR32_USB_UADDRSIZE_MASK                           0xffffffff
#define AVR32_USB_UADDRSIZE_OFFSET                                  0
#define AVR32_USB_UADDRSIZE_RESETVALUE                     0x00001000
#define AVR32_USB_UADDRSIZE_SIZE                                   32
#define AVR32_USB_UADDRSIZE_UADDRSIZE                               0
#define AVR32_USB_UADDRSIZE_UADDRSIZE_MASK                 0xffffffff
#define AVR32_USB_UADDRSIZE_UADDRSIZE_OFFSET                        0
#define AVR32_USB_UADDRSIZE_UADDRSIZE_SIZE                         32
#define AVR32_USB_UADD_MASK                                0x0000007f
#define AVR32_USB_UADD_OFFSET                                       0
#define AVR32_USB_UADD_SIZE                                         7
#define AVR32_USB_UATST1                                   0x00000810
#define AVR32_USB_UATST1_COUNTERA                                   0
#define AVR32_USB_UATST1_COUNTERA_MASK                     0x00007fff
#define AVR32_USB_UATST1_COUNTERA_OFFSET                            0
#define AVR32_USB_UATST1_COUNTERA_SIZE                             15
#define AVR32_USB_UATST1_COUNTERB                                  16
#define AVR32_USB_UATST1_COUNTERB_MASK                     0x003f0000
#define AVR32_USB_UATST1_COUNTERB_OFFSET                           16
#define AVR32_USB_UATST1_COUNTERB_SIZE                              6
#define AVR32_USB_UATST1_LOADCNTA                                  15
#define AVR32_USB_UATST1_LOADCNTA_MASK                     0x00008000
#define AVR32_USB_UATST1_LOADCNTA_OFFSET                           15
#define AVR32_USB_UATST1_LOADCNTA_SIZE                              1
#define AVR32_USB_UATST1_LOADCNTB                                  23
#define AVR32_USB_UATST1_LOADCNTB_MASK                     0x00800000
#define AVR32_USB_UATST1_LOADCNTB_OFFSET                           23
#define AVR32_USB_UATST1_LOADCNTB_SIZE                              1
#define AVR32_USB_UATST1_LOADSOFCNT                                31
#define AVR32_USB_UATST1_LOADSOFCNT_MASK                   0x80000000
#define AVR32_USB_UATST1_LOADSOFCNT_OFFSET                         31
#define AVR32_USB_UATST1_LOADSOFCNT_SIZE                            1
#define AVR32_USB_UATST1_MASK                              0xffbfffff
#define AVR32_USB_UATST1_RESETVALUE                        0x00000000
#define AVR32_USB_UATST1_SOFCNTMAX                                 24
#define AVR32_USB_UATST1_SOFCNTMAX_MASK                    0x7f000000
#define AVR32_USB_UATST1_SOFCNTMAX_OFFSET                          24
#define AVR32_USB_UATST1_SOFCNTMAX_SIZE                             7
#define AVR32_USB_UATST2                                   0x00000814
#define AVR32_USB_UATST2_BYPASSDPLL                                 5
#define AVR32_USB_UATST2_BYPASSDPLL_MASK                   0x00000020
#define AVR32_USB_UATST2_BYPASSDPLL_OFFSET                          5
#define AVR32_USB_UATST2_BYPASSDPLL_SIZE                            1
#define AVR32_USB_UATST2_DISBALEGATEDCLOCK                          3
#define AVR32_USB_UATST2_DISBALEGATEDCLOCK_MASK            0x00000008
#define AVR32_USB_UATST2_DISBALEGATEDCLOCK_OFFSET                   3
#define AVR32_USB_UATST2_DISBALEGATEDCLOCK_SIZE                     1
#define AVR32_USB_UATST2_FORCEHSRESETTO50MS                         7
#define AVR32_USB_UATST2_FORCEHSRESETTO50MS_MASK           0x00000080
#define AVR32_USB_UATST2_FORCEHSRESETTO50MS_OFFSET                  7
#define AVR32_USB_UATST2_FORCEHSRESETTO50MS_SIZE                    1
#define AVR32_USB_UATST2_FORCESUSPENDMTO1                           4
#define AVR32_USB_UATST2_FORCESUSPENDMTO1_MASK             0x00000010
#define AVR32_USB_UATST2_FORCESUSPENDMTO1_OFFSET                    4
#define AVR32_USB_UATST2_FORCESUSPENDMTO1_SIZE                      1
#define AVR32_USB_UATST2_FULLDETACHEN                               0
#define AVR32_USB_UATST2_FULLDETACHEN_MASK                 0x00000001
#define AVR32_USB_UATST2_FULLDETACHEN_OFFSET                        0
#define AVR32_USB_UATST2_FULLDETACHEN_SIZE                          1
#define AVR32_USB_UATST2_HOSTHSDISCONNECTDISABLE                    6
#define AVR32_USB_UATST2_HOSTHSDISCONNECTDISABLE_MASK      0x00000040
#define AVR32_USB_UATST2_HOSTHSDISCONNECTDISABLE_OFFSET             6
#define AVR32_USB_UATST2_HOSTHSDISCONNECTDISABLE_SIZE               1
#define AVR32_USB_UATST2_HSSERIALMODE                               1
#define AVR32_USB_UATST2_HSSERIALMODE_MASK                 0x00000002
#define AVR32_USB_UATST2_HSSERIALMODE_OFFSET                        1
#define AVR32_USB_UATST2_HSSERIALMODE_SIZE                          1
#define AVR32_USB_UATST2_LOOPBACKMODE                               2
#define AVR32_USB_UATST2_LOOPBACKMODE_MASK                 0x00000004
#define AVR32_USB_UATST2_LOOPBACKMODE_OFFSET                        2
#define AVR32_USB_UATST2_LOOPBACKMODE_SIZE                          1
#define AVR32_USB_UATST2_MASK                              0x000003ff
#define AVR32_USB_UATST2_REMOVEPUONTX                               9
#define AVR32_USB_UATST2_REMOVEPUONTX_MASK                 0x00000200
#define AVR32_USB_UATST2_REMOVEPUONTX_OFFSET                        9
#define AVR32_USB_UATST2_REMOVEPUONTX_SIZE                          1
#define AVR32_USB_UATST2_RESETVALUE                        0x00000000
#define AVR32_USB_UATST2_UTMIRESET                                  8
#define AVR32_USB_UATST2_UTMIRESET_MASK                    0x00000100
#define AVR32_USB_UATST2_UTMIRESET_OFFSET                           8
#define AVR32_USB_UATST2_UTMIRESET_SIZE                             1
#define AVR32_USB_UDADDRSIZE                               0x00000034
#define AVR32_USB_UDADDRSIZE_MASK                          0x00000000
#define AVR32_USB_UDADDRSIZE_RESETVALUE                    0x00001000
#define AVR32_USB_UDCON                                    0x00000000
#define AVR32_USB_UDCON_ADDEN                                       7
#define AVR32_USB_UDCON_ADDEN_MASK                         0x00000080
#define AVR32_USB_UDCON_ADDEN_OFFSET                                7
#define AVR32_USB_UDCON_ADDEN_SIZE                                  1
#define AVR32_USB_UDCON_DETACH                                      8
#define AVR32_USB_UDCON_DETACH_MASK                        0x00000100
#define AVR32_USB_UDCON_DETACH_OFFSET                               8
#define AVR32_USB_UDCON_DETACH_SIZE                                 1
#define AVR32_USB_UDCON_FRZCLK                                     18
#define AVR32_USB_UDCON_FRZCLK_MASK                        0x00040000
#define AVR32_USB_UDCON_FRZCLK_OFFSET                              18
#define AVR32_USB_UDCON_FRZCLK_SIZE                                 1
#define AVR32_USB_UDCON_LS                                         12
#define AVR32_USB_UDCON_LS_MASK                            0x00001000
#define AVR32_USB_UDCON_LS_OFFSET                                  12
#define AVR32_USB_UDCON_LS_SIZE                                     1
#define AVR32_USB_UDCON_MASK                               0x0007ffff
#define AVR32_USB_UDCON_OPMODE2                                    16
#define AVR32_USB_UDCON_OPMODE2_MASK                       0x00010000
#define AVR32_USB_UDCON_OPMODE2_OFFSET                             16
#define AVR32_USB_UDCON_OPMODE2_SIZE                                1
#define AVR32_USB_UDCON_RESETVALUE                         0x00000100
#define AVR32_USB_UDCON_RMWKUP                                      9
#define AVR32_USB_UDCON_RMWKUP_MASK                        0x00000200
#define AVR32_USB_UDCON_RMWKUP_OFFSET                               9
#define AVR32_USB_UDCON_RMWKUP_SIZE                                 1
#define AVR32_USB_UDCON_SPDCONF                                    10
#define AVR32_USB_UDCON_SPDCONF_MASK                       0x00000c00
#define AVR32_USB_UDCON_SPDCONF_OFFSET                             10
#define AVR32_USB_UDCON_SPDCONF_SIZE                                2
#define AVR32_USB_UDCON_TSTJ                                       13
#define AVR32_USB_UDCON_TSTJ_MASK                          0x00002000
#define AVR32_USB_UDCON_TSTJ_OFFSET                                13
#define AVR32_USB_UDCON_TSTJ_SIZE                                   1
#define AVR32_USB_UDCON_TSTK                                       14
#define AVR32_USB_UDCON_TSTK_MASK                          0x00004000
#define AVR32_USB_UDCON_TSTK_OFFSET                                14
#define AVR32_USB_UDCON_TSTK_SIZE                                   1
#define AVR32_USB_UDCON_TSTPCKT                                    15
#define AVR32_USB_UDCON_TSTPCKT_MASK                       0x00008000
#define AVR32_USB_UDCON_TSTPCKT_OFFSET                             15
#define AVR32_USB_UDCON_TSTPCKT_SIZE                                1
#define AVR32_USB_UDCON_UADD                                        0
#define AVR32_USB_UDCON_UADD_MASK                          0x0000007f
#define AVR32_USB_UDCON_UADD_OFFSET                                 0
#define AVR32_USB_UDCON_UADD_SIZE                                   7
#define AVR32_USB_UDCON_USBE                                       17
#define AVR32_USB_UDCON_USBE_MASK                          0x00020000
#define AVR32_USB_UDCON_USBE_OFFSET                                17
#define AVR32_USB_UDCON_USBE_SIZE                                   1
#define AVR32_USB_UDDMA1_ADDR                              0x00000314
#define AVR32_USB_UDDMA1_ADDR_HSB_ADDR                              0
#define AVR32_USB_UDDMA1_ADDR_HSB_ADDR_MASK                0xffffffff
#define AVR32_USB_UDDMA1_ADDR_HSB_ADDR_OFFSET                       0
#define AVR32_USB_UDDMA1_ADDR_HSB_ADDR_SIZE                        32
#define AVR32_USB_UDDMA1_ADDR_MASK                         0xffffffff
#define AVR32_USB_UDDMA1_ADDR_RESETVALUE                   0x00000000
#define AVR32_USB_UDDMA1_CONTROL                           0x00000318
#define AVR32_USB_UDDMA1_CONTROL_BUFF_CLOSE_IN_EN                   2
#define AVR32_USB_UDDMA1_CONTROL_BUFF_CLOSE_IN_EN_MASK     0x00000004
#define AVR32_USB_UDDMA1_CONTROL_BUFF_CLOSE_IN_EN_OFFSET            2
#define AVR32_USB_UDDMA1_CONTROL_BUFF_CLOSE_IN_EN_SIZE              1
#define AVR32_USB_UDDMA1_CONTROL_BURST_LOCK_EN                      7
#define AVR32_USB_UDDMA1_CONTROL_BURST_LOCK_EN_MASK        0x00000080
#define AVR32_USB_UDDMA1_CONTROL_BURST_LOCK_EN_OFFSET               7
#define AVR32_USB_UDDMA1_CONTROL_BURST_LOCK_EN_SIZE                 1
#define AVR32_USB_UDDMA1_CONTROL_CH_BYTE_LENGTH                    16
#define AVR32_USB_UDDMA1_CONTROL_CH_BYTE_LENGTH_MASK       0xffff0000
#define AVR32_USB_UDDMA1_CONTROL_CH_BYTE_LENGTH_OFFSET             16
#define AVR32_USB_UDDMA1_CONTROL_CH_BYTE_LENGTH_SIZE               16
#define AVR32_USB_UDDMA1_CONTROL_CH_EN                              0
#define AVR32_USB_UDDMA1_CONTROL_CH_EN_MASK                0x00000001
#define AVR32_USB_UDDMA1_CONTROL_CH_EN_OFFSET                       0
#define AVR32_USB_UDDMA1_CONTROL_CH_EN_SIZE                         1
#define AVR32_USB_UDDMA1_CONTROL_DESC_LD_IRQ_EN                     6
#define AVR32_USB_UDDMA1_CONTROL_DESC_LD_IRQ_EN_MASK       0x00000040
#define AVR32_USB_UDDMA1_CONTROL_DESC_LD_IRQ_EN_OFFSET              6
#define AVR32_USB_UDDMA1_CONTROL_DESC_LD_IRQ_EN_SIZE                1
#define AVR32_USB_UDDMA1_CONTROL_DMAEND_EN                          3
#define AVR32_USB_UDDMA1_CONTROL_DMAEND_EN_MASK            0x00000008
#define AVR32_USB_UDDMA1_CONTROL_DMAEND_EN_OFFSET                   3
#define AVR32_USB_UDDMA1_CONTROL_DMAEND_EN_SIZE                     1
#define AVR32_USB_UDDMA1_CONTROL_EOBUFF_IRQ_EN                      5
#define AVR32_USB_UDDMA1_CONTROL_EOBUFF_IRQ_EN_MASK        0x00000020
#define AVR32_USB_UDDMA1_CONTROL_EOBUFF_IRQ_EN_OFFSET               5
#define AVR32_USB_UDDMA1_CONTROL_EOBUFF_IRQ_EN_SIZE                 1
#define AVR32_USB_UDDMA1_CONTROL_EOT_IRQ_EN                         4
#define AVR32_USB_UDDMA1_CONTROL_EOT_IRQ_EN_MASK           0x00000010
#define AVR32_USB_UDDMA1_CONTROL_EOT_IRQ_EN_OFFSET                  4
#define AVR32_USB_UDDMA1_CONTROL_EOT_IRQ_EN_SIZE                    1
#define AVR32_USB_UDDMA1_CONTROL_LD_NXT_CH_DESC_EN                  1
#define AVR32_USB_UDDMA1_CONTROL_LD_NXT_CH_DESC_EN_MASK    0x00000002
#define AVR32_USB_UDDMA1_CONTROL_LD_NXT_CH_DESC_EN_OFFSET           1
#define AVR32_USB_UDDMA1_CONTROL_LD_NXT_CH_DESC_EN_SIZE             1
#define AVR32_USB_UDDMA1_CONTROL_MASK                      0xffff00ff
#define AVR32_USB_UDDMA1_CONTROL_RESETVALUE                0x00000000
#define AVR32_USB_UDDMA1_NEXTDESC                          0x00000310
#define AVR32_USB_UDDMA1_NEXTDESC_MASK                     0xfffffff0
#define AVR32_USB_UDDMA1_NEXTDESC_NXT_DESC_ADDR                     4
#define AVR32_USB_UDDMA1_NEXTDESC_NXT_DESC_ADDR_MASK       0xfffffff0
#define AVR32_USB_UDDMA1_NEXTDESC_NXT_DESC_ADDR_OFFSET              4
#define AVR32_USB_UDDMA1_NEXTDESC_NXT_DESC_ADDR_SIZE               28
#define AVR32_USB_UDDMA1_NEXTDESC_RESETVALUE               0x00000000
#define AVR32_USB_UDDMA1_STATUS                            0x0000031c
#define AVR32_USB_UDDMA1_STATUS_CH_ACTIVE                           1
#define AVR32_USB_UDDMA1_STATUS_CH_ACTIVE_MASK             0x00000002
#define AVR32_USB_UDDMA1_STATUS_CH_ACTIVE_OFFSET                    1
#define AVR32_USB_UDDMA1_STATUS_CH_ACTIVE_SIZE                      1
#define AVR32_USB_UDDMA1_STATUS_CH_BYTE_CNT                        16
#define AVR32_USB_UDDMA1_STATUS_CH_BYTE_CNT_MASK           0xffff0000
#define AVR32_USB_UDDMA1_STATUS_CH_BYTE_CNT_OFFSET                 16
#define AVR32_USB_UDDMA1_STATUS_CH_BYTE_CNT_SIZE                   16
#define AVR32_USB_UDDMA1_STATUS_CH_EN                               0
#define AVR32_USB_UDDMA1_STATUS_CH_EN_MASK                 0x00000001
#define AVR32_USB_UDDMA1_STATUS_CH_EN_OFFSET                        0
#define AVR32_USB_UDDMA1_STATUS_CH_EN_SIZE                          1
#define AVR32_USB_UDDMA1_STATUS_DESC_LD_STA                         6
#define AVR32_USB_UDDMA1_STATUS_DESC_LD_STA_MASK           0x00000040
#define AVR32_USB_UDDMA1_STATUS_DESC_LD_STA_OFFSET                  6
#define AVR32_USB_UDDMA1_STATUS_DESC_LD_STA_SIZE                    1
#define AVR32_USB_UDDMA1_STATUS_EOCH_BUFF_STA                       5
#define AVR32_USB_UDDMA1_STATUS_EOCH_BUFF_STA_MASK         0x00000020
#define AVR32_USB_UDDMA1_STATUS_EOCH_BUFF_STA_OFFSET                5
#define AVR32_USB_UDDMA1_STATUS_EOCH_BUFF_STA_SIZE                  1
#define AVR32_USB_UDDMA1_STATUS_EOT_STA                             4
#define AVR32_USB_UDDMA1_STATUS_EOT_STA_MASK               0x00000010
#define AVR32_USB_UDDMA1_STATUS_EOT_STA_OFFSET                      4
#define AVR32_USB_UDDMA1_STATUS_EOT_STA_SIZE                        1
#define AVR32_USB_UDDMA1_STATUS_MASK                       0xffff0073
#define AVR32_USB_UDDMA1_STATUS_RESETVALUE                 0x00000000
#define AVR32_USB_UDDMA2_ADDR                              0x00000324
#define AVR32_USB_UDDMA2_ADDR_HSB_ADDR                              0
#define AVR32_USB_UDDMA2_ADDR_HSB_ADDR_MASK                0xffffffff
#define AVR32_USB_UDDMA2_ADDR_HSB_ADDR_OFFSET                       0
#define AVR32_USB_UDDMA2_ADDR_HSB_ADDR_SIZE                        32
#define AVR32_USB_UDDMA2_ADDR_MASK                         0xffffffff
#define AVR32_USB_UDDMA2_ADDR_RESETVALUE                   0x00000000
#define AVR32_USB_UDDMA2_CONTROL                           0x00000328
#define AVR32_USB_UDDMA2_CONTROL_BUFF_CLOSE_IN_EN                   2
#define AVR32_USB_UDDMA2_CONTROL_BUFF_CLOSE_IN_EN_MASK     0x00000004
#define AVR32_USB_UDDMA2_CONTROL_BUFF_CLOSE_IN_EN_OFFSET            2
#define AVR32_USB_UDDMA2_CONTROL_BUFF_CLOSE_IN_EN_SIZE              1
#define AVR32_USB_UDDMA2_CONTROL_BURST_LOCK_EN                      7
#define AVR32_USB_UDDMA2_CONTROL_BURST_LOCK_EN_MASK        0x00000080
#define AVR32_USB_UDDMA2_CONTROL_BURST_LOCK_EN_OFFSET               7
#define AVR32_USB_UDDMA2_CONTROL_BURST_LOCK_EN_SIZE                 1
#define AVR32_USB_UDDMA2_CONTROL_CH_BYTE_LENGTH                    16
#define AVR32_USB_UDDMA2_CONTROL_CH_BYTE_LENGTH_MASK       0xffff0000
#define AVR32_USB_UDDMA2_CONTROL_CH_BYTE_LENGTH_OFFSET             16
#define AVR32_USB_UDDMA2_CONTROL_CH_BYTE_LENGTH_SIZE               16
#define AVR32_USB_UDDMA2_CONTROL_CH_EN                              0
#define AVR32_USB_UDDMA2_CONTROL_CH_EN_MASK                0x00000001
#define AVR32_USB_UDDMA2_CONTROL_CH_EN_OFFSET                       0
#define AVR32_USB_UDDMA2_CONTROL_CH_EN_SIZE                         1
#define AVR32_USB_UDDMA2_CONTROL_DESC_LD_IRQ_EN                     6
#define AVR32_USB_UDDMA2_CONTROL_DESC_LD_IRQ_EN_MASK       0x00000040
#define AVR32_USB_UDDMA2_CONTROL_DESC_LD_IRQ_EN_OFFSET              6
#define AVR32_USB_UDDMA2_CONTROL_DESC_LD_IRQ_EN_SIZE                1
#define AVR32_USB_UDDMA2_CONTROL_DMAEND_EN                          3
#define AVR32_USB_UDDMA2_CONTROL_DMAEND_EN_MASK            0x00000008
#define AVR32_USB_UDDMA2_CONTROL_DMAEND_EN_OFFSET                   3
#define AVR32_USB_UDDMA2_CONTROL_DMAEND_EN_SIZE                     1
#define AVR32_USB_UDDMA2_CONTROL_EOBUFF_IRQ_EN                      5
#define AVR32_USB_UDDMA2_CONTROL_EOBUFF_IRQ_EN_MASK        0x00000020
#define AVR32_USB_UDDMA2_CONTROL_EOBUFF_IRQ_EN_OFFSET               5
#define AVR32_USB_UDDMA2_CONTROL_EOBUFF_IRQ_EN_SIZE                 1
#define AVR32_USB_UDDMA2_CONTROL_EOT_IRQ_EN                         4
#define AVR32_USB_UDDMA2_CONTROL_EOT_IRQ_EN_MASK           0x00000010
#define AVR32_USB_UDDMA2_CONTROL_EOT_IRQ_EN_OFFSET                  4
#define AVR32_USB_UDDMA2_CONTROL_EOT_IRQ_EN_SIZE                    1
#define AVR32_USB_UDDMA2_CONTROL_LD_NXT_CH_DESC_EN                  1
#define AVR32_USB_UDDMA2_CONTROL_LD_NXT_CH_DESC_EN_MASK    0x00000002
#define AVR32_USB_UDDMA2_CONTROL_LD_NXT_CH_DESC_EN_OFFSET           1
#define AVR32_USB_UDDMA2_CONTROL_LD_NXT_CH_DESC_EN_SIZE             1
#define AVR32_USB_UDDMA2_CONTROL_MASK                      0xffff00ff
#define AVR32_USB_UDDMA2_CONTROL_RESETVALUE                0x00000000
#define AVR32_USB_UDDMA2_NEXTDESC                          0x00000320
#define AVR32_USB_UDDMA2_NEXTDESC_MASK                     0xfffffff0
#define AVR32_USB_UDDMA2_NEXTDESC_NXT_DESC_ADDR                     4
#define AVR32_USB_UDDMA2_NEXTDESC_NXT_DESC_ADDR_MASK       0xfffffff0
#define AVR32_USB_UDDMA2_NEXTDESC_NXT_DESC_ADDR_OFFSET              4
#define AVR32_USB_UDDMA2_NEXTDESC_NXT_DESC_ADDR_SIZE               28
#define AVR32_USB_UDDMA2_NEXTDESC_RESETVALUE               0x00000000
#define AVR32_USB_UDDMA2_STATUS                            0x0000032c
#define AVR32_USB_UDDMA2_STATUS_CH_ACTIVE                           1
#define AVR32_USB_UDDMA2_STATUS_CH_ACTIVE_MASK             0x00000002
#define AVR32_USB_UDDMA2_STATUS_CH_ACTIVE_OFFSET                    1
#define AVR32_USB_UDDMA2_STATUS_CH_ACTIVE_SIZE                      1
#define AVR32_USB_UDDMA2_STATUS_CH_BYTE_CNT                        16
#define AVR32_USB_UDDMA2_STATUS_CH_BYTE_CNT_MASK           0xffff0000
#define AVR32_USB_UDDMA2_STATUS_CH_BYTE_CNT_OFFSET                 16
#define AVR32_USB_UDDMA2_STATUS_CH_BYTE_CNT_SIZE                   16
#define AVR32_USB_UDDMA2_STATUS_CH_EN                               0
#define AVR32_USB_UDDMA2_STATUS_CH_EN_MASK                 0x00000001
#define AVR32_USB_UDDMA2_STATUS_CH_EN_OFFSET                        0
#define AVR32_USB_UDDMA2_STATUS_CH_EN_SIZE                          1
#define AVR32_USB_UDDMA2_STATUS_DESC_LD_STA                         6
#define AVR32_USB_UDDMA2_STATUS_DESC_LD_STA_MASK           0x00000040
#define AVR32_USB_UDDMA2_STATUS_DESC_LD_STA_OFFSET                  6
#define AVR32_USB_UDDMA2_STATUS_DESC_LD_STA_SIZE                    1
#define AVR32_USB_UDDMA2_STATUS_EOCH_BUFF_STA                       5
#define AVR32_USB_UDDMA2_STATUS_EOCH_BUFF_STA_MASK         0x00000020
#define AVR32_USB_UDDMA2_STATUS_EOCH_BUFF_STA_OFFSET                5
#define AVR32_USB_UDDMA2_STATUS_EOCH_BUFF_STA_SIZE                  1
#define AVR32_USB_UDDMA2_STATUS_EOT_STA                             4
#define AVR32_USB_UDDMA2_STATUS_EOT_STA_MASK               0x00000010
#define AVR32_USB_UDDMA2_STATUS_EOT_STA_OFFSET                      4
#define AVR32_USB_UDDMA2_STATUS_EOT_STA_SIZE                        1
#define AVR32_USB_UDDMA2_STATUS_MASK                       0xffff0073
#define AVR32_USB_UDDMA2_STATUS_RESETVALUE                 0x00000000
#define AVR32_USB_UDDMA3_ADDR                              0x00000334
#define AVR32_USB_UDDMA3_ADDR_HSB_ADDR                              0
#define AVR32_USB_UDDMA3_ADDR_HSB_ADDR_MASK                0xffffffff
#define AVR32_USB_UDDMA3_ADDR_HSB_ADDR_OFFSET                       0
#define AVR32_USB_UDDMA3_ADDR_HSB_ADDR_SIZE                        32
#define AVR32_USB_UDDMA3_ADDR_MASK                         0xffffffff
#define AVR32_USB_UDDMA3_ADDR_RESETVALUE                   0x00000000
#define AVR32_USB_UDDMA3_CONTROL                           0x00000338
#define AVR32_USB_UDDMA3_CONTROL_BUFF_CLOSE_IN_EN                   2
#define AVR32_USB_UDDMA3_CONTROL_BUFF_CLOSE_IN_EN_MASK     0x00000004
#define AVR32_USB_UDDMA3_CONTROL_BUFF_CLOSE_IN_EN_OFFSET            2
#define AVR32_USB_UDDMA3_CONTROL_BUFF_CLOSE_IN_EN_SIZE              1
#define AVR32_USB_UDDMA3_CONTROL_BURST_LOCK_EN                      7
#define AVR32_USB_UDDMA3_CONTROL_BURST_LOCK_EN_MASK        0x00000080
#define AVR32_USB_UDDMA3_CONTROL_BURST_LOCK_EN_OFFSET               7
#define AVR32_USB_UDDMA3_CONTROL_BURST_LOCK_EN_SIZE                 1
#define AVR32_USB_UDDMA3_CONTROL_CH_BYTE_LENGTH                    16
#define AVR32_USB_UDDMA3_CONTROL_CH_BYTE_LENGTH_MASK       0xffff0000
#define AVR32_USB_UDDMA3_CONTROL_CH_BYTE_LENGTH_OFFSET             16
#define AVR32_USB_UDDMA3_CONTROL_CH_BYTE_LENGTH_SIZE               16
#define AVR32_USB_UDDMA3_CONTROL_CH_EN                              0
#define AVR32_USB_UDDMA3_CONTROL_CH_EN_MASK                0x00000001
#define AVR32_USB_UDDMA3_CONTROL_CH_EN_OFFSET                       0
#define AVR32_USB_UDDMA3_CONTROL_CH_EN_SIZE                         1
#define AVR32_USB_UDDMA3_CONTROL_DESC_LD_IRQ_EN                     6
#define AVR32_USB_UDDMA3_CONTROL_DESC_LD_IRQ_EN_MASK       0x00000040
#define AVR32_USB_UDDMA3_CONTROL_DESC_LD_IRQ_EN_OFFSET              6
#define AVR32_USB_UDDMA3_CONTROL_DESC_LD_IRQ_EN_SIZE                1
#define AVR32_USB_UDDMA3_CONTROL_DMAEND_EN                          3
#define AVR32_USB_UDDMA3_CONTROL_DMAEND_EN_MASK            0x00000008
#define AVR32_USB_UDDMA3_CONTROL_DMAEND_EN_OFFSET                   3
#define AVR32_USB_UDDMA3_CONTROL_DMAEND_EN_SIZE                     1
#define AVR32_USB_UDDMA3_CONTROL_EOBUFF_IRQ_EN                      5
#define AVR32_USB_UDDMA3_CONTROL_EOBUFF_IRQ_EN_MASK        0x00000020
#define AVR32_USB_UDDMA3_CONTROL_EOBUFF_IRQ_EN_OFFSET               5
#define AVR32_USB_UDDMA3_CONTROL_EOBUFF_IRQ_EN_SIZE                 1
#define AVR32_USB_UDDMA3_CONTROL_EOT_IRQ_EN                         4
#define AVR32_USB_UDDMA3_CONTROL_EOT_IRQ_EN_MASK           0x00000010
#define AVR32_USB_UDDMA3_CONTROL_EOT_IRQ_EN_OFFSET                  4
#define AVR32_USB_UDDMA3_CONTROL_EOT_IRQ_EN_SIZE                    1
#define AVR32_USB_UDDMA3_CONTROL_LD_NXT_CH_DESC_EN                  1
#define AVR32_USB_UDDMA3_CONTROL_LD_NXT_CH_DESC_EN_MASK    0x00000002
#define AVR32_USB_UDDMA3_CONTROL_LD_NXT_CH_DESC_EN_OFFSET           1
#define AVR32_USB_UDDMA3_CONTROL_LD_NXT_CH_DESC_EN_SIZE             1
#define AVR32_USB_UDDMA3_CONTROL_MASK                      0xffff00ff
#define AVR32_USB_UDDMA3_CONTROL_RESETVALUE                0x00000000
#define AVR32_USB_UDDMA3_NEXTDESC                          0x00000330
#define AVR32_USB_UDDMA3_NEXTDESC_MASK                     0xfffffff0
#define AVR32_USB_UDDMA3_NEXTDESC_NXT_DESC_ADDR                     4
#define AVR32_USB_UDDMA3_NEXTDESC_NXT_DESC_ADDR_MASK       0xfffffff0
#define AVR32_USB_UDDMA3_NEXTDESC_NXT_DESC_ADDR_OFFSET              4
#define AVR32_USB_UDDMA3_NEXTDESC_NXT_DESC_ADDR_SIZE               28
#define AVR32_USB_UDDMA3_NEXTDESC_RESETVALUE               0x00000000
#define AVR32_USB_UDDMA3_STATUS                            0x0000033c
#define AVR32_USB_UDDMA3_STATUS_CH_ACTIVE                           1
#define AVR32_USB_UDDMA3_STATUS_CH_ACTIVE_MASK             0x00000002
#define AVR32_USB_UDDMA3_STATUS_CH_ACTIVE_OFFSET                    1
#define AVR32_USB_UDDMA3_STATUS_CH_ACTIVE_SIZE                      1
#define AVR32_USB_UDDMA3_STATUS_CH_BYTE_CNT                        16
#define AVR32_USB_UDDMA3_STATUS_CH_BYTE_CNT_MASK           0xffff0000
#define AVR32_USB_UDDMA3_STATUS_CH_BYTE_CNT_OFFSET                 16
#define AVR32_USB_UDDMA3_STATUS_CH_BYTE_CNT_SIZE                   16
#define AVR32_USB_UDDMA3_STATUS_CH_EN                               0
#define AVR32_USB_UDDMA3_STATUS_CH_EN_MASK                 0x00000001
#define AVR32_USB_UDDMA3_STATUS_CH_EN_OFFSET                        0
#define AVR32_USB_UDDMA3_STATUS_CH_EN_SIZE                          1
#define AVR32_USB_UDDMA3_STATUS_DESC_LD_STA                         6
#define AVR32_USB_UDDMA3_STATUS_DESC_LD_STA_MASK           0x00000040
#define AVR32_USB_UDDMA3_STATUS_DESC_LD_STA_OFFSET                  6
#define AVR32_USB_UDDMA3_STATUS_DESC_LD_STA_SIZE                    1
#define AVR32_USB_UDDMA3_STATUS_EOCH_BUFF_STA                       5
#define AVR32_USB_UDDMA3_STATUS_EOCH_BUFF_STA_MASK         0x00000020
#define AVR32_USB_UDDMA3_STATUS_EOCH_BUFF_STA_OFFSET                5
#define AVR32_USB_UDDMA3_STATUS_EOCH_BUFF_STA_SIZE                  1
#define AVR32_USB_UDDMA3_STATUS_EOT_STA                             4
#define AVR32_USB_UDDMA3_STATUS_EOT_STA_MASK               0x00000010
#define AVR32_USB_UDDMA3_STATUS_EOT_STA_OFFSET                      4
#define AVR32_USB_UDDMA3_STATUS_EOT_STA_SIZE                        1
#define AVR32_USB_UDDMA3_STATUS_MASK                       0xffff0073
#define AVR32_USB_UDDMA3_STATUS_RESETVALUE                 0x00000000
#define AVR32_USB_UDDMA4_ADDR                              0x00000344
#define AVR32_USB_UDDMA4_ADDR_HSB_ADDR                              0
#define AVR32_USB_UDDMA4_ADDR_HSB_ADDR_MASK                0xffffffff
#define AVR32_USB_UDDMA4_ADDR_HSB_ADDR_OFFSET                       0
#define AVR32_USB_UDDMA4_ADDR_HSB_ADDR_SIZE                        32
#define AVR32_USB_UDDMA4_ADDR_MASK                         0xffffffff
#define AVR32_USB_UDDMA4_ADDR_RESETVALUE                   0x00000000
#define AVR32_USB_UDDMA4_CONTROL                           0x00000348
#define AVR32_USB_UDDMA4_CONTROL_BUFF_CLOSE_IN_EN                   2
#define AVR32_USB_UDDMA4_CONTROL_BUFF_CLOSE_IN_EN_MASK     0x00000004
#define AVR32_USB_UDDMA4_CONTROL_BUFF_CLOSE_IN_EN_OFFSET            2
#define AVR32_USB_UDDMA4_CONTROL_BUFF_CLOSE_IN_EN_SIZE              1
#define AVR32_USB_UDDMA4_CONTROL_BURST_LOCK_EN                      7
#define AVR32_USB_UDDMA4_CONTROL_BURST_LOCK_EN_MASK        0x00000080
#define AVR32_USB_UDDMA4_CONTROL_BURST_LOCK_EN_OFFSET               7
#define AVR32_USB_UDDMA4_CONTROL_BURST_LOCK_EN_SIZE                 1
#define AVR32_USB_UDDMA4_CONTROL_CH_BYTE_LENGTH                    16
#define AVR32_USB_UDDMA4_CONTROL_CH_BYTE_LENGTH_MASK       0xffff0000
#define AVR32_USB_UDDMA4_CONTROL_CH_BYTE_LENGTH_OFFSET             16
#define AVR32_USB_UDDMA4_CONTROL_CH_BYTE_LENGTH_SIZE               16
#define AVR32_USB_UDDMA4_CONTROL_CH_EN                              0
#define AVR32_USB_UDDMA4_CONTROL_CH_EN_MASK                0x00000001
#define AVR32_USB_UDDMA4_CONTROL_CH_EN_OFFSET                       0
#define AVR32_USB_UDDMA4_CONTROL_CH_EN_SIZE                         1
#define AVR32_USB_UDDMA4_CONTROL_DESC_LD_IRQ_EN                     6
#define AVR32_USB_UDDMA4_CONTROL_DESC_LD_IRQ_EN_MASK       0x00000040
#define AVR32_USB_UDDMA4_CONTROL_DESC_LD_IRQ_EN_OFFSET              6
#define AVR32_USB_UDDMA4_CONTROL_DESC_LD_IRQ_EN_SIZE                1
#define AVR32_USB_UDDMA4_CONTROL_DMAEND_EN                          3
#define AVR32_USB_UDDMA4_CONTROL_DMAEND_EN_MASK            0x00000008
#define AVR32_USB_UDDMA4_CONTROL_DMAEND_EN_OFFSET                   3
#define AVR32_USB_UDDMA4_CONTROL_DMAEND_EN_SIZE                     1
#define AVR32_USB_UDDMA4_CONTROL_EOBUFF_IRQ_EN                      5
#define AVR32_USB_UDDMA4_CONTROL_EOBUFF_IRQ_EN_MASK        0x00000020
#define AVR32_USB_UDDMA4_CONTROL_EOBUFF_IRQ_EN_OFFSET               5
#define AVR32_USB_UDDMA4_CONTROL_EOBUFF_IRQ_EN_SIZE                 1
#define AVR32_USB_UDDMA4_CONTROL_EOT_IRQ_EN                         4
#define AVR32_USB_UDDMA4_CONTROL_EOT_IRQ_EN_MASK           0x00000010
#define AVR32_USB_UDDMA4_CONTROL_EOT_IRQ_EN_OFFSET                  4
#define AVR32_USB_UDDMA4_CONTROL_EOT_IRQ_EN_SIZE                    1
#define AVR32_USB_UDDMA4_CONTROL_LD_NXT_CH_DESC_EN                  1
#define AVR32_USB_UDDMA4_CONTROL_LD_NXT_CH_DESC_EN_MASK    0x00000002
#define AVR32_USB_UDDMA4_CONTROL_LD_NXT_CH_DESC_EN_OFFSET           1
#define AVR32_USB_UDDMA4_CONTROL_LD_NXT_CH_DESC_EN_SIZE             1
#define AVR32_USB_UDDMA4_CONTROL_MASK                      0xffff00ff
#define AVR32_USB_UDDMA4_CONTROL_RESETVALUE                0x00000000
#define AVR32_USB_UDDMA4_NEXTDESC                          0x00000340
#define AVR32_USB_UDDMA4_NEXTDESC_MASK                     0xfffffff0
#define AVR32_USB_UDDMA4_NEXTDESC_NXT_DESC_ADDR                     4
#define AVR32_USB_UDDMA4_NEXTDESC_NXT_DESC_ADDR_MASK       0xfffffff0
#define AVR32_USB_UDDMA4_NEXTDESC_NXT_DESC_ADDR_OFFSET              4
#define AVR32_USB_UDDMA4_NEXTDESC_NXT_DESC_ADDR_SIZE               28
#define AVR32_USB_UDDMA4_NEXTDESC_RESETVALUE               0x00000000
#define AVR32_USB_UDDMA4_STATUS                            0x0000034c
#define AVR32_USB_UDDMA4_STATUS_CH_ACTIVE                           1
#define AVR32_USB_UDDMA4_STATUS_CH_ACTIVE_MASK             0x00000002
#define AVR32_USB_UDDMA4_STATUS_CH_ACTIVE_OFFSET                    1
#define AVR32_USB_UDDMA4_STATUS_CH_ACTIVE_SIZE                      1
#define AVR32_USB_UDDMA4_STATUS_CH_BYTE_CNT                        16
#define AVR32_USB_UDDMA4_STATUS_CH_BYTE_CNT_MASK           0xffff0000
#define AVR32_USB_UDDMA4_STATUS_CH_BYTE_CNT_OFFSET                 16
#define AVR32_USB_UDDMA4_STATUS_CH_BYTE_CNT_SIZE                   16
#define AVR32_USB_UDDMA4_STATUS_CH_EN                               0
#define AVR32_USB_UDDMA4_STATUS_CH_EN_MASK                 0x00000001
#define AVR32_USB_UDDMA4_STATUS_CH_EN_OFFSET                        0
#define AVR32_USB_UDDMA4_STATUS_CH_EN_SIZE                          1
#define AVR32_USB_UDDMA4_STATUS_DESC_LD_STA                         6
#define AVR32_USB_UDDMA4_STATUS_DESC_LD_STA_MASK           0x00000040
#define AVR32_USB_UDDMA4_STATUS_DESC_LD_STA_OFFSET                  6
#define AVR32_USB_UDDMA4_STATUS_DESC_LD_STA_SIZE                    1
#define AVR32_USB_UDDMA4_STATUS_EOCH_BUFF_STA                       5
#define AVR32_USB_UDDMA4_STATUS_EOCH_BUFF_STA_MASK         0x00000020
#define AVR32_USB_UDDMA4_STATUS_EOCH_BUFF_STA_OFFSET                5
#define AVR32_USB_UDDMA4_STATUS_EOCH_BUFF_STA_SIZE                  1
#define AVR32_USB_UDDMA4_STATUS_EOT_STA                             4
#define AVR32_USB_UDDMA4_STATUS_EOT_STA_MASK               0x00000010
#define AVR32_USB_UDDMA4_STATUS_EOT_STA_OFFSET                      4
#define AVR32_USB_UDDMA4_STATUS_EOT_STA_SIZE                        1
#define AVR32_USB_UDDMA4_STATUS_MASK                       0xffff0073
#define AVR32_USB_UDDMA4_STATUS_RESETVALUE                 0x00000000
#define AVR32_USB_UDDMA5_ADDR                              0x00000354
#define AVR32_USB_UDDMA5_ADDR_HSB_ADDR                              0
#define AVR32_USB_UDDMA5_ADDR_HSB_ADDR_MASK                0xffffffff
#define AVR32_USB_UDDMA5_ADDR_HSB_ADDR_OFFSET                       0
#define AVR32_USB_UDDMA5_ADDR_HSB_ADDR_SIZE                        32
#define AVR32_USB_UDDMA5_ADDR_MASK                         0xffffffff
#define AVR32_USB_UDDMA5_ADDR_RESETVALUE                   0x00000000
#define AVR32_USB_UDDMA5_CONTROL                           0x00000358
#define AVR32_USB_UDDMA5_CONTROL_BUFF_CLOSE_IN_EN                   2
#define AVR32_USB_UDDMA5_CONTROL_BUFF_CLOSE_IN_EN_MASK     0x00000004
#define AVR32_USB_UDDMA5_CONTROL_BUFF_CLOSE_IN_EN_OFFSET            2
#define AVR32_USB_UDDMA5_CONTROL_BUFF_CLOSE_IN_EN_SIZE              1
#define AVR32_USB_UDDMA5_CONTROL_BURST_LOCK_EN                      7
#define AVR32_USB_UDDMA5_CONTROL_BURST_LOCK_EN_MASK        0x00000080
#define AVR32_USB_UDDMA5_CONTROL_BURST_LOCK_EN_OFFSET               7
#define AVR32_USB_UDDMA5_CONTROL_BURST_LOCK_EN_SIZE                 1
#define AVR32_USB_UDDMA5_CONTROL_CH_BYTE_LENGTH                    16
#define AVR32_USB_UDDMA5_CONTROL_CH_BYTE_LENGTH_MASK       0xffff0000
#define AVR32_USB_UDDMA5_CONTROL_CH_BYTE_LENGTH_OFFSET             16
#define AVR32_USB_UDDMA5_CONTROL_CH_BYTE_LENGTH_SIZE               16
#define AVR32_USB_UDDMA5_CONTROL_CH_EN                              0
#define AVR32_USB_UDDMA5_CONTROL_CH_EN_MASK                0x00000001
#define AVR32_USB_UDDMA5_CONTROL_CH_EN_OFFSET                       0
#define AVR32_USB_UDDMA5_CONTROL_CH_EN_SIZE                         1
#define AVR32_USB_UDDMA5_CONTROL_DESC_LD_IRQ_EN                     6
#define AVR32_USB_UDDMA5_CONTROL_DESC_LD_IRQ_EN_MASK       0x00000040
#define AVR32_USB_UDDMA5_CONTROL_DESC_LD_IRQ_EN_OFFSET              6
#define AVR32_USB_UDDMA5_CONTROL_DESC_LD_IRQ_EN_SIZE                1
#define AVR32_USB_UDDMA5_CONTROL_DMAEND_EN                          3
#define AVR32_USB_UDDMA5_CONTROL_DMAEND_EN_MASK            0x00000008
#define AVR32_USB_UDDMA5_CONTROL_DMAEND_EN_OFFSET                   3
#define AVR32_USB_UDDMA5_CONTROL_DMAEND_EN_SIZE                     1
#define AVR32_USB_UDDMA5_CONTROL_EOBUFF_IRQ_EN                      5
#define AVR32_USB_UDDMA5_CONTROL_EOBUFF_IRQ_EN_MASK        0x00000020
#define AVR32_USB_UDDMA5_CONTROL_EOBUFF_IRQ_EN_OFFSET               5
#define AVR32_USB_UDDMA5_CONTROL_EOBUFF_IRQ_EN_SIZE                 1
#define AVR32_USB_UDDMA5_CONTROL_EOT_IRQ_EN                         4
#define AVR32_USB_UDDMA5_CONTROL_EOT_IRQ_EN_MASK           0x00000010
#define AVR32_USB_UDDMA5_CONTROL_EOT_IRQ_EN_OFFSET                  4
#define AVR32_USB_UDDMA5_CONTROL_EOT_IRQ_EN_SIZE                    1
#define AVR32_USB_UDDMA5_CONTROL_LD_NXT_CH_DESC_EN                  1
#define AVR32_USB_UDDMA5_CONTROL_LD_NXT_CH_DESC_EN_MASK    0x00000002
#define AVR32_USB_UDDMA5_CONTROL_LD_NXT_CH_DESC_EN_OFFSET           1
#define AVR32_USB_UDDMA5_CONTROL_LD_NXT_CH_DESC_EN_SIZE             1
#define AVR32_USB_UDDMA5_CONTROL_MASK                      0xffff00ff
#define AVR32_USB_UDDMA5_CONTROL_RESETVALUE                0x00000000
#define AVR32_USB_UDDMA5_NEXTDESC                          0x00000350
#define AVR32_USB_UDDMA5_NEXTDESC_MASK                     0xfffffff0
#define AVR32_USB_UDDMA5_NEXTDESC_NXT_DESC_ADDR                     4
#define AVR32_USB_UDDMA5_NEXTDESC_NXT_DESC_ADDR_MASK       0xfffffff0
#define AVR32_USB_UDDMA5_NEXTDESC_NXT_DESC_ADDR_OFFSET              4
#define AVR32_USB_UDDMA5_NEXTDESC_NXT_DESC_ADDR_SIZE               28
#define AVR32_USB_UDDMA5_NEXTDESC_RESETVALUE               0x00000000
#define AVR32_USB_UDDMA5_STATUS                            0x0000035c
#define AVR32_USB_UDDMA5_STATUS_CH_ACTIVE                           1
#define AVR32_USB_UDDMA5_STATUS_CH_ACTIVE_MASK             0x00000002
#define AVR32_USB_UDDMA5_STATUS_CH_ACTIVE_OFFSET                    1
#define AVR32_USB_UDDMA5_STATUS_CH_ACTIVE_SIZE                      1
#define AVR32_USB_UDDMA5_STATUS_CH_BYTE_CNT                        16
#define AVR32_USB_UDDMA5_STATUS_CH_BYTE_CNT_MASK           0xffff0000
#define AVR32_USB_UDDMA5_STATUS_CH_BYTE_CNT_OFFSET                 16
#define AVR32_USB_UDDMA5_STATUS_CH_BYTE_CNT_SIZE                   16
#define AVR32_USB_UDDMA5_STATUS_CH_EN                               0
#define AVR32_USB_UDDMA5_STATUS_CH_EN_MASK                 0x00000001
#define AVR32_USB_UDDMA5_STATUS_CH_EN_OFFSET                        0
#define AVR32_USB_UDDMA5_STATUS_CH_EN_SIZE                          1
#define AVR32_USB_UDDMA5_STATUS_DESC_LD_STA                         6
#define AVR32_USB_UDDMA5_STATUS_DESC_LD_STA_MASK           0x00000040
#define AVR32_USB_UDDMA5_STATUS_DESC_LD_STA_OFFSET                  6
#define AVR32_USB_UDDMA5_STATUS_DESC_LD_STA_SIZE                    1
#define AVR32_USB_UDDMA5_STATUS_EOCH_BUFF_STA                       5
#define AVR32_USB_UDDMA5_STATUS_EOCH_BUFF_STA_MASK         0x00000020
#define AVR32_USB_UDDMA5_STATUS_EOCH_BUFF_STA_OFFSET                5
#define AVR32_USB_UDDMA5_STATUS_EOCH_BUFF_STA_SIZE                  1
#define AVR32_USB_UDDMA5_STATUS_EOT_STA                             4
#define AVR32_USB_UDDMA5_STATUS_EOT_STA_MASK               0x00000010
#define AVR32_USB_UDDMA5_STATUS_EOT_STA_OFFSET                      4
#define AVR32_USB_UDDMA5_STATUS_EOT_STA_SIZE                        1
#define AVR32_USB_UDDMA5_STATUS_MASK                       0xffff0073
#define AVR32_USB_UDDMA5_STATUS_RESETVALUE                 0x00000000
#define AVR32_USB_UDDMA6_ADDR                              0x00000364
#define AVR32_USB_UDDMA6_ADDR_HSB_ADDR                              0
#define AVR32_USB_UDDMA6_ADDR_HSB_ADDR_MASK                0xffffffff
#define AVR32_USB_UDDMA6_ADDR_HSB_ADDR_OFFSET                       0
#define AVR32_USB_UDDMA6_ADDR_HSB_ADDR_SIZE                        32
#define AVR32_USB_UDDMA6_ADDR_MASK                         0xffffffff
#define AVR32_USB_UDDMA6_ADDR_RESETVALUE                   0x00000000
#define AVR32_USB_UDDMA6_CONTROL                           0x00000368
#define AVR32_USB_UDDMA6_CONTROL_BUFF_CLOSE_IN_EN                   2
#define AVR32_USB_UDDMA6_CONTROL_BUFF_CLOSE_IN_EN_MASK     0x00000004
#define AVR32_USB_UDDMA6_CONTROL_BUFF_CLOSE_IN_EN_OFFSET            2
#define AVR32_USB_UDDMA6_CONTROL_BUFF_CLOSE_IN_EN_SIZE              1
#define AVR32_USB_UDDMA6_CONTROL_BURST_LOCK_EN                      7
#define AVR32_USB_UDDMA6_CONTROL_BURST_LOCK_EN_MASK        0x00000080
#define AVR32_USB_UDDMA6_CONTROL_BURST_LOCK_EN_OFFSET               7
#define AVR32_USB_UDDMA6_CONTROL_BURST_LOCK_EN_SIZE                 1
#define AVR32_USB_UDDMA6_CONTROL_CH_BYTE_LENGTH                    16
#define AVR32_USB_UDDMA6_CONTROL_CH_BYTE_LENGTH_MASK       0xffff0000
#define AVR32_USB_UDDMA6_CONTROL_CH_BYTE_LENGTH_OFFSET             16
#define AVR32_USB_UDDMA6_CONTROL_CH_BYTE_LENGTH_SIZE               16
#define AVR32_USB_UDDMA6_CONTROL_CH_EN                              0
#define AVR32_USB_UDDMA6_CONTROL_CH_EN_MASK                0x00000001
#define AVR32_USB_UDDMA6_CONTROL_CH_EN_OFFSET                       0
#define AVR32_USB_UDDMA6_CONTROL_CH_EN_SIZE                         1
#define AVR32_USB_UDDMA6_CONTROL_DESC_LD_IRQ_EN                     6
#define AVR32_USB_UDDMA6_CONTROL_DESC_LD_IRQ_EN_MASK       0x00000040
#define AVR32_USB_UDDMA6_CONTROL_DESC_LD_IRQ_EN_OFFSET              6
#define AVR32_USB_UDDMA6_CONTROL_DESC_LD_IRQ_EN_SIZE                1
#define AVR32_USB_UDDMA6_CONTROL_DMAEND_EN                          3
#define AVR32_USB_UDDMA6_CONTROL_DMAEND_EN_MASK            0x00000008
#define AVR32_USB_UDDMA6_CONTROL_DMAEND_EN_OFFSET                   3
#define AVR32_USB_UDDMA6_CONTROL_DMAEND_EN_SIZE                     1
#define AVR32_USB_UDDMA6_CONTROL_EOBUFF_IRQ_EN                      5
#define AVR32_USB_UDDMA6_CONTROL_EOBUFF_IRQ_EN_MASK        0x00000020
#define AVR32_USB_UDDMA6_CONTROL_EOBUFF_IRQ_EN_OFFSET               5
#define AVR32_USB_UDDMA6_CONTROL_EOBUFF_IRQ_EN_SIZE                 1
#define AVR32_USB_UDDMA6_CONTROL_EOT_IRQ_EN                         4
#define AVR32_USB_UDDMA6_CONTROL_EOT_IRQ_EN_MASK           0x00000010
#define AVR32_USB_UDDMA6_CONTROL_EOT_IRQ_EN_OFFSET                  4
#define AVR32_USB_UDDMA6_CONTROL_EOT_IRQ_EN_SIZE                    1
#define AVR32_USB_UDDMA6_CONTROL_LD_NXT_CH_DESC_EN                  1
#define AVR32_USB_UDDMA6_CONTROL_LD_NXT_CH_DESC_EN_MASK    0x00000002
#define AVR32_USB_UDDMA6_CONTROL_LD_NXT_CH_DESC_EN_OFFSET           1
#define AVR32_USB_UDDMA6_CONTROL_LD_NXT_CH_DESC_EN_SIZE             1
#define AVR32_USB_UDDMA6_CONTROL_MASK                      0xffff00ff
#define AVR32_USB_UDDMA6_CONTROL_RESETVALUE                0x00000000
#define AVR32_USB_UDDMA6_NEXTDESC                          0x00000360
#define AVR32_USB_UDDMA6_NEXTDESC_MASK                     0xfffffff0
#define AVR32_USB_UDDMA6_NEXTDESC_NXT_DESC_ADDR                     4
#define AVR32_USB_UDDMA6_NEXTDESC_NXT_DESC_ADDR_MASK       0xfffffff0
#define AVR32_USB_UDDMA6_NEXTDESC_NXT_DESC_ADDR_OFFSET              4
#define AVR32_USB_UDDMA6_NEXTDESC_NXT_DESC_ADDR_SIZE               28
#define AVR32_USB_UDDMA6_NEXTDESC_RESETVALUE               0x00000000
#define AVR32_USB_UDDMA6_STATUS                            0x0000036c
#define AVR32_USB_UDDMA6_STATUS_CH_ACTIVE                           1
#define AVR32_USB_UDDMA6_STATUS_CH_ACTIVE_MASK             0x00000002
#define AVR32_USB_UDDMA6_STATUS_CH_ACTIVE_OFFSET                    1
#define AVR32_USB_UDDMA6_STATUS_CH_ACTIVE_SIZE                      1
#define AVR32_USB_UDDMA6_STATUS_CH_BYTE_CNT                        16
#define AVR32_USB_UDDMA6_STATUS_CH_BYTE_CNT_MASK           0xffff0000
#define AVR32_USB_UDDMA6_STATUS_CH_BYTE_CNT_OFFSET                 16
#define AVR32_USB_UDDMA6_STATUS_CH_BYTE_CNT_SIZE                   16
#define AVR32_USB_UDDMA6_STATUS_CH_EN                               0
#define AVR32_USB_UDDMA6_STATUS_CH_EN_MASK                 0x00000001
#define AVR32_USB_UDDMA6_STATUS_CH_EN_OFFSET                        0
#define AVR32_USB_UDDMA6_STATUS_CH_EN_SIZE                          1
#define AVR32_USB_UDDMA6_STATUS_DESC_LD_STA                         6
#define AVR32_USB_UDDMA6_STATUS_DESC_LD_STA_MASK           0x00000040
#define AVR32_USB_UDDMA6_STATUS_DESC_LD_STA_OFFSET                  6
#define AVR32_USB_UDDMA6_STATUS_DESC_LD_STA_SIZE                    1
#define AVR32_USB_UDDMA6_STATUS_EOCH_BUFF_STA                       5
#define AVR32_USB_UDDMA6_STATUS_EOCH_BUFF_STA_MASK         0x00000020
#define AVR32_USB_UDDMA6_STATUS_EOCH_BUFF_STA_OFFSET                5
#define AVR32_USB_UDDMA6_STATUS_EOCH_BUFF_STA_SIZE                  1
#define AVR32_USB_UDDMA6_STATUS_EOT_STA                             4
#define AVR32_USB_UDDMA6_STATUS_EOT_STA_MASK               0x00000010
#define AVR32_USB_UDDMA6_STATUS_EOT_STA_OFFSET                      4
#define AVR32_USB_UDDMA6_STATUS_EOT_STA_SIZE                        1
#define AVR32_USB_UDDMA6_STATUS_MASK                       0xffff0073
#define AVR32_USB_UDDMA6_STATUS_RESETVALUE                 0x00000000
#define AVR32_USB_UDDMA7_ADDR                              0x00000374
#define AVR32_USB_UDDMA7_ADDR_HSB_ADDR                              0
#define AVR32_USB_UDDMA7_ADDR_HSB_ADDR_MASK                0xffffffff
#define AVR32_USB_UDDMA7_ADDR_HSB_ADDR_OFFSET                       0
#define AVR32_USB_UDDMA7_ADDR_HSB_ADDR_SIZE                        32
#define AVR32_USB_UDDMA7_ADDR_MASK                         0xffffffff
#define AVR32_USB_UDDMA7_ADDR_RESETVALUE                   0x00000000
#define AVR32_USB_UDDMA7_CONTROL                           0x00000378
#define AVR32_USB_UDDMA7_CONTROL_BUFF_CLOSE_IN_EN                   2
#define AVR32_USB_UDDMA7_CONTROL_BUFF_CLOSE_IN_EN_MASK     0x00000004
#define AVR32_USB_UDDMA7_CONTROL_BUFF_CLOSE_IN_EN_OFFSET            2
#define AVR32_USB_UDDMA7_CONTROL_BUFF_CLOSE_IN_EN_SIZE              1
#define AVR32_USB_UDDMA7_CONTROL_BURST_LOCK_EN                      7
#define AVR32_USB_UDDMA7_CONTROL_BURST_LOCK_EN_MASK        0x00000080
#define AVR32_USB_UDDMA7_CONTROL_BURST_LOCK_EN_OFFSET               7
#define AVR32_USB_UDDMA7_CONTROL_BURST_LOCK_EN_SIZE                 1
#define AVR32_USB_UDDMA7_CONTROL_CH_BYTE_LENGTH                    16
#define AVR32_USB_UDDMA7_CONTROL_CH_BYTE_LENGTH_MASK       0xffff0000
#define AVR32_USB_UDDMA7_CONTROL_CH_BYTE_LENGTH_OFFSET             16
#define AVR32_USB_UDDMA7_CONTROL_CH_BYTE_LENGTH_SIZE               16
#define AVR32_USB_UDDMA7_CONTROL_CH_EN                              0
#define AVR32_USB_UDDMA7_CONTROL_CH_EN_MASK                0x00000001
#define AVR32_USB_UDDMA7_CONTROL_CH_EN_OFFSET                       0
#define AVR32_USB_UDDMA7_CONTROL_CH_EN_SIZE                         1
#define AVR32_USB_UDDMA7_CONTROL_DESC_LD_IRQ_EN                     6
#define AVR32_USB_UDDMA7_CONTROL_DESC_LD_IRQ_EN_MASK       0x00000040
#define AVR32_USB_UDDMA7_CONTROL_DESC_LD_IRQ_EN_OFFSET              6
#define AVR32_USB_UDDMA7_CONTROL_DESC_LD_IRQ_EN_SIZE                1
#define AVR32_USB_UDDMA7_CONTROL_DMAEND_EN                          3
#define AVR32_USB_UDDMA7_CONTROL_DMAEND_EN_MASK            0x00000008
#define AVR32_USB_UDDMA7_CONTROL_DMAEND_EN_OFFSET                   3
#define AVR32_USB_UDDMA7_CONTROL_DMAEND_EN_SIZE                     1
#define AVR32_USB_UDDMA7_CONTROL_EOBUFF_IRQ_EN                      5
#define AVR32_USB_UDDMA7_CONTROL_EOBUFF_IRQ_EN_MASK        0x00000020
#define AVR32_USB_UDDMA7_CONTROL_EOBUFF_IRQ_EN_OFFSET               5
#define AVR32_USB_UDDMA7_CONTROL_EOBUFF_IRQ_EN_SIZE                 1
#define AVR32_USB_UDDMA7_CONTROL_EOT_IRQ_EN                         4
#define AVR32_USB_UDDMA7_CONTROL_EOT_IRQ_EN_MASK           0x00000010
#define AVR32_USB_UDDMA7_CONTROL_EOT_IRQ_EN_OFFSET                  4
#define AVR32_USB_UDDMA7_CONTROL_EOT_IRQ_EN_SIZE                    1
#define AVR32_USB_UDDMA7_CONTROL_LD_NXT_CH_DESC_EN                  1
#define AVR32_USB_UDDMA7_CONTROL_LD_NXT_CH_DESC_EN_MASK    0x00000002
#define AVR32_USB_UDDMA7_CONTROL_LD_NXT_CH_DESC_EN_OFFSET           1
#define AVR32_USB_UDDMA7_CONTROL_LD_NXT_CH_DESC_EN_SIZE             1
#define AVR32_USB_UDDMA7_CONTROL_MASK                      0xffff00ff
#define AVR32_USB_UDDMA7_CONTROL_RESETVALUE                0x00000000
#define AVR32_USB_UDDMA7_NEXTDESC                          0x00000370
#define AVR32_USB_UDDMA7_NEXTDESC_MASK                     0xfffffff0
#define AVR32_USB_UDDMA7_NEXTDESC_NXT_DESC_ADDR                     4
#define AVR32_USB_UDDMA7_NEXTDESC_NXT_DESC_ADDR_MASK       0xfffffff0
#define AVR32_USB_UDDMA7_NEXTDESC_NXT_DESC_ADDR_OFFSET              4
#define AVR32_USB_UDDMA7_NEXTDESC_NXT_DESC_ADDR_SIZE               28
#define AVR32_USB_UDDMA7_NEXTDESC_RESETVALUE               0x00000000
#define AVR32_USB_UDDMA7_STATUS                            0x0000037c
#define AVR32_USB_UDDMA7_STATUS_CH_ACTIVE                           1
#define AVR32_USB_UDDMA7_STATUS_CH_ACTIVE_MASK             0x00000002
#define AVR32_USB_UDDMA7_STATUS_CH_ACTIVE_OFFSET                    1
#define AVR32_USB_UDDMA7_STATUS_CH_ACTIVE_SIZE                      1
#define AVR32_USB_UDDMA7_STATUS_CH_BYTE_CNT                        16
#define AVR32_USB_UDDMA7_STATUS_CH_BYTE_CNT_MASK           0xffff0000
#define AVR32_USB_UDDMA7_STATUS_CH_BYTE_CNT_OFFSET                 16
#define AVR32_USB_UDDMA7_STATUS_CH_BYTE_CNT_SIZE                   16
#define AVR32_USB_UDDMA7_STATUS_CH_EN                               0
#define AVR32_USB_UDDMA7_STATUS_CH_EN_MASK                 0x00000001
#define AVR32_USB_UDDMA7_STATUS_CH_EN_OFFSET                        0
#define AVR32_USB_UDDMA7_STATUS_CH_EN_SIZE                          1
#define AVR32_USB_UDDMA7_STATUS_DESC_LD_STA                         6
#define AVR32_USB_UDDMA7_STATUS_DESC_LD_STA_MASK           0x00000040
#define AVR32_USB_UDDMA7_STATUS_DESC_LD_STA_OFFSET                  6
#define AVR32_USB_UDDMA7_STATUS_DESC_LD_STA_SIZE                    1
#define AVR32_USB_UDDMA7_STATUS_EOCH_BUFF_STA                       5
#define AVR32_USB_UDDMA7_STATUS_EOCH_BUFF_STA_MASK         0x00000020
#define AVR32_USB_UDDMA7_STATUS_EOCH_BUFF_STA_OFFSET                5
#define AVR32_USB_UDDMA7_STATUS_EOCH_BUFF_STA_SIZE                  1
#define AVR32_USB_UDDMA7_STATUS_EOT_STA                             4
#define AVR32_USB_UDDMA7_STATUS_EOT_STA_MASK               0x00000010
#define AVR32_USB_UDDMA7_STATUS_EOT_STA_OFFSET                      4
#define AVR32_USB_UDDMA7_STATUS_EOT_STA_SIZE                        1
#define AVR32_USB_UDDMA7_STATUS_MASK                       0xffff0073
#define AVR32_USB_UDDMA7_STATUS_RESETVALUE                 0x00000000
#define AVR32_USB_UDFEATURES                               0x00000030
#define AVR32_USB_UDFEATURES_BYTE_WRITE_DPRAM                      15
#define AVR32_USB_UDFEATURES_BYTE_WRITE_DPRAM_MASK         0x00008000
#define AVR32_USB_UDFEATURES_BYTE_WRITE_DPRAM_OFFSET               15
#define AVR32_USB_UDFEATURES_BYTE_WRITE_DPRAM_SIZE                  1
#define AVR32_USB_UDFEATURES_DATA_BUS_8_16                         16
#define AVR32_USB_UDFEATURES_DATA_BUS_8_16_MASK            0x00010000
#define AVR32_USB_UDFEATURES_DATA_BUS_8_16_OFFSET                  16
#define AVR32_USB_UDFEATURES_DATA_BUS_8_16_SIZE                     1
#define AVR32_USB_UDFEATURES_DMA_BUFFER_SIZE                        7
#define AVR32_USB_UDFEATURES_DMA_BUFFER_SIZE_16_BITS       0x00000000
#define AVR32_USB_UDFEATURES_DMA_BUFFER_SIZE_24_BITS       0x00000001
#define AVR32_USB_UDFEATURES_DMA_BUFFER_SIZE_MASK          0x00000080
#define AVR32_USB_UDFEATURES_DMA_BUFFER_SIZE_OFFSET                 7
#define AVR32_USB_UDFEATURES_DMA_BUFFER_SIZE_SIZE                   1
#define AVR32_USB_UDFEATURES_DMA_CHANNEL_NBR                        4
#define AVR32_USB_UDFEATURES_DMA_CHANNEL_NBR_MASK          0x00000070
#define AVR32_USB_UDFEATURES_DMA_CHANNEL_NBR_OFFSET                 4
#define AVR32_USB_UDFEATURES_DMA_CHANNEL_NBR_SIZE                   3
#define AVR32_USB_UDFEATURES_DMA_FIFO_WORD_DEPTH                    8
#define AVR32_USB_UDFEATURES_DMA_FIFO_WORD_DEPTH_MASK      0x00000f00
#define AVR32_USB_UDFEATURES_DMA_FIFO_WORD_DEPTH_OFFSET             8
#define AVR32_USB_UDFEATURES_DMA_FIFO_WORD_DEPTH_SIZE               4
#define AVR32_USB_UDFEATURES_EN_HIGH_BD_ISO_EPT_1                  17
#define AVR32_USB_UDFEATURES_EN_HIGH_BD_ISO_EPT_10                 26
#define AVR32_USB_UDFEATURES_EN_HIGH_BD_ISO_EPT_10_MASK    0x04000000
#define AVR32_USB_UDFEATURES_EN_HIGH_BD_ISO_EPT_10_OFFSET          26
#define AVR32_USB_UDFEATURES_EN_HIGH_BD_ISO_EPT_10_SIZE             1
#define AVR32_USB_UDFEATURES_EN_HIGH_BD_ISO_EPT_11                 27
#define AVR32_USB_UDFEATURES_EN_HIGH_BD_ISO_EPT_11_MASK    0x08000000
#define AVR32_USB_UDFEATURES_EN_HIGH_BD_ISO_EPT_11_OFFSET          27
#define AVR32_USB_UDFEATURES_EN_HIGH_BD_ISO_EPT_11_SIZE             1
#define AVR32_USB_UDFEATURES_EN_HIGH_BD_ISO_EPT_12                 28
#define AVR32_USB_UDFEATURES_EN_HIGH_BD_ISO_EPT_12_MASK    0x10000000
#define AVR32_USB_UDFEATURES_EN_HIGH_BD_ISO_EPT_12_OFFSET          28
#define AVR32_USB_UDFEATURES_EN_HIGH_BD_ISO_EPT_12_SIZE             1
#define AVR32_USB_UDFEATURES_EN_HIGH_BD_ISO_EPT_13                 29
#define AVR32_USB_UDFEATURES_EN_HIGH_BD_ISO_EPT_13_MASK    0x20000000
#define AVR32_USB_UDFEATURES_EN_HIGH_BD_ISO_EPT_13_OFFSET          29
#define AVR32_USB_UDFEATURES_EN_HIGH_BD_ISO_EPT_13_SIZE             1
#define AVR32_USB_UDFEATURES_EN_HIGH_BD_ISO_EPT_14                 30
#define AVR32_USB_UDFEATURES_EN_HIGH_BD_ISO_EPT_14_MASK    0x40000000
#define AVR32_USB_UDFEATURES_EN_HIGH_BD_ISO_EPT_14_OFFSET          30
#define AVR32_USB_UDFEATURES_EN_HIGH_BD_ISO_EPT_14_SIZE             1
#define AVR32_USB_UDFEATURES_EN_HIGH_BD_ISO_EPT_15                 31
#define AVR32_USB_UDFEATURES_EN_HIGH_BD_ISO_EPT_15_MASK    0x80000000
#define AVR32_USB_UDFEATURES_EN_HIGH_BD_ISO_EPT_15_OFFSET          31
#define AVR32_USB_UDFEATURES_EN_HIGH_BD_ISO_EPT_15_SIZE             1
#define AVR32_USB_UDFEATURES_EN_HIGH_BD_ISO_EPT_1_MASK     0x00020000
#define AVR32_USB_UDFEATURES_EN_HIGH_BD_ISO_EPT_1_OFFSET           17
#define AVR32_USB_UDFEATURES_EN_HIGH_BD_ISO_EPT_1_SIZE              1
#define AVR32_USB_UDFEATURES_EN_HIGH_BD_ISO_EPT_2                  18
#define AVR32_USB_UDFEATURES_EN_HIGH_BD_ISO_EPT_2_MASK     0x00040000
#define AVR32_USB_UDFEATURES_EN_HIGH_BD_ISO_EPT_2_OFFSET           18
#define AVR32_USB_UDFEATURES_EN_HIGH_BD_ISO_EPT_2_SIZE              1
#define AVR32_USB_UDFEATURES_EN_HIGH_BD_ISO_EPT_3                  19
#define AVR32_USB_UDFEATURES_EN_HIGH_BD_ISO_EPT_3_MASK     0x00080000
#define AVR32_USB_UDFEATURES_EN_HIGH_BD_ISO_EPT_3_OFFSET           19
#define AVR32_USB_UDFEATURES_EN_HIGH_BD_ISO_EPT_3_SIZE              1
#define AVR32_USB_UDFEATURES_EN_HIGH_BD_ISO_EPT_4                  20
#define AVR32_USB_UDFEATURES_EN_HIGH_BD_ISO_EPT_4_MASK     0x00100000
#define AVR32_USB_UDFEATURES_EN_HIGH_BD_ISO_EPT_4_OFFSET           20
#define AVR32_USB_UDFEATURES_EN_HIGH_BD_ISO_EPT_4_SIZE              1
#define AVR32_USB_UDFEATURES_EN_HIGH_BD_ISO_EPT_5                  21
#define AVR32_USB_UDFEATURES_EN_HIGH_BD_ISO_EPT_5_MASK     0x00200000
#define AVR32_USB_UDFEATURES_EN_HIGH_BD_ISO_EPT_5_OFFSET           21
#define AVR32_USB_UDFEATURES_EN_HIGH_BD_ISO_EPT_5_SIZE              1
#define AVR32_USB_UDFEATURES_EN_HIGH_BD_ISO_EPT_6                  22
#define AVR32_USB_UDFEATURES_EN_HIGH_BD_ISO_EPT_6_MASK     0x00400000
#define AVR32_USB_UDFEATURES_EN_HIGH_BD_ISO_EPT_6_OFFSET           22
#define AVR32_USB_UDFEATURES_EN_HIGH_BD_ISO_EPT_6_SIZE              1
#define AVR32_USB_UDFEATURES_EN_HIGH_BD_ISO_EPT_7                  23
#define AVR32_USB_UDFEATURES_EN_HIGH_BD_ISO_EPT_7_MASK     0x00800000
#define AVR32_USB_UDFEATURES_EN_HIGH_BD_ISO_EPT_7_OFFSET           23
#define AVR32_USB_UDFEATURES_EN_HIGH_BD_ISO_EPT_7_SIZE              1
#define AVR32_USB_UDFEATURES_EN_HIGH_BD_ISO_EPT_8                  24
#define AVR32_USB_UDFEATURES_EN_HIGH_BD_ISO_EPT_8_MASK     0x01000000
#define AVR32_USB_UDFEATURES_EN_HIGH_BD_ISO_EPT_8_OFFSET           24
#define AVR32_USB_UDFEATURES_EN_HIGH_BD_ISO_EPT_8_SIZE              1
#define AVR32_USB_UDFEATURES_EN_HIGH_BD_ISO_EPT_9                  25
#define AVR32_USB_UDFEATURES_EN_HIGH_BD_ISO_EPT_9_MASK     0x02000000
#define AVR32_USB_UDFEATURES_EN_HIGH_BD_ISO_EPT_9_OFFSET           25
#define AVR32_USB_UDFEATURES_EN_HIGH_BD_ISO_EPT_9_SIZE              1
#define AVR32_USB_UDFEATURES_EPT_NBR_MAX                            0
#define AVR32_USB_UDFEATURES_EPT_NBR_MAX_MASK              0x0000000f
#define AVR32_USB_UDFEATURES_EPT_NBR_MAX_OFFSET                     0
#define AVR32_USB_UDFEATURES_EPT_NBR_MAX_SIZE                       4
#define AVR32_USB_UDFEATURES_FIFO_MAX_SIZE                         12
#define AVR32_USB_UDFEATURES_FIFO_MAX_SIZE_GT_16384        0x00000006
#define AVR32_USB_UDFEATURES_FIFO_MAX_SIZE_LT_1024         0x00000002
#define AVR32_USB_UDFEATURES_FIFO_MAX_SIZE_LT_16384        0x00000005
#define AVR32_USB_UDFEATURES_FIFO_MAX_SIZE_LT_256          0x00000000
#define AVR32_USB_UDFEATURES_FIFO_MAX_SIZE_LT_4096         0x00000003
#define AVR32_USB_UDFEATURES_FIFO_MAX_SIZE_LT_512          0x00000001
#define AVR32_USB_UDFEATURES_FIFO_MAX_SIZE_LT_8192         0x00000004
#define AVR32_USB_UDFEATURES_FIFO_MAX_SIZE_MASK            0x00007000
#define AVR32_USB_UDFEATURES_FIFO_MAX_SIZE_OFFSET                  12
#define AVR32_USB_UDFEATURES_FIFO_MAX_SIZE_SIZE                     3
#define AVR32_USB_UDFEATURES_MASK                          0xffffffff
#define AVR32_USB_UDFEATURES_RESETVALUE                    0x0001b467
#define AVR32_USB_UDFNUM                                   0x00000020
#define AVR32_USB_UDFNUM_FNCERR                                    15
#define AVR32_USB_UDFNUM_FNCERR_MASK                       0x00008000
#define AVR32_USB_UDFNUM_FNCERR_OFFSET                             15
#define AVR32_USB_UDFNUM_FNCERR_SIZE                                1
#define AVR32_USB_UDFNUM_FNUM                                       3
#define AVR32_USB_UDFNUM_FNUM_MASK                         0x00003ff8
#define AVR32_USB_UDFNUM_FNUM_OFFSET                                3
#define AVR32_USB_UDFNUM_FNUM_SIZE                                 11
#define AVR32_USB_UDFNUM_MASK                              0x0000bfff
#define AVR32_USB_UDFNUM_MFNUM                                      0
#define AVR32_USB_UDFNUM_MFNUM_MASK                        0x00000007
#define AVR32_USB_UDFNUM_MFNUM_OFFSET                               0
#define AVR32_USB_UDFNUM_MFNUM_SIZE                                 3
#define AVR32_USB_UDFNUM_RESETVALUE                        0x00000000
#define AVR32_USB_UDINT                                    0x00000004
#define AVR32_USB_UDINTCLR                                 0x00000008
#define AVR32_USB_UDINTCLR_EORSMC                                   5
#define AVR32_USB_UDINTCLR_EORSMC_MASK                     0x00000020
#define AVR32_USB_UDINTCLR_EORSMC_OFFSET                            5
#define AVR32_USB_UDINTCLR_EORSMC_SIZE                              1
#define AVR32_USB_UDINTCLR_EORSTC                                   3
#define AVR32_USB_UDINTCLR_EORSTC_MASK                     0x00000008
#define AVR32_USB_UDINTCLR_EORSTC_OFFSET                            3
#define AVR32_USB_UDINTCLR_EORSTC_SIZE                              1
#define AVR32_USB_UDINTCLR_MASK                            0x000000ff
#define AVR32_USB_UDINTCLR_MSOFC                                    1
#define AVR32_USB_UDINTCLR_MSOFC_MASK                      0x00000002
#define AVR32_USB_UDINTCLR_MSOFC_OFFSET                             1
#define AVR32_USB_UDINTCLR_MSOFC_SIZE                               1
#define AVR32_USB_UDINTCLR_RESETVALUE                      0x00000000
#define AVR32_USB_UDINTCLR_SOFC                                     2
#define AVR32_USB_UDINTCLR_SOFC_MASK                       0x00000004
#define AVR32_USB_UDINTCLR_SOFC_OFFSET                              2
#define AVR32_USB_UDINTCLR_SOFC_SIZE                                1
#define AVR32_USB_UDINTCLR_SUSPC                                    0
#define AVR32_USB_UDINTCLR_SUSPC_MASK                      0x00000001
#define AVR32_USB_UDINTCLR_SUSPC_OFFSET                             0
#define AVR32_USB_UDINTCLR_SUSPC_SIZE                               1
#define AVR32_USB_UDINTCLR_UPRSMC                                   6
#define AVR32_USB_UDINTCLR_UPRSMC_MASK                     0x00000040
#define AVR32_USB_UDINTCLR_UPRSMC_OFFSET                            6
#define AVR32_USB_UDINTCLR_UPRSMC_SIZE                              1
#define AVR32_USB_UDINTCLR_VBUSTIC                                  7
#define AVR32_USB_UDINTCLR_VBUSTIC_MASK                    0x00000080
#define AVR32_USB_UDINTCLR_VBUSTIC_OFFSET                           7
#define AVR32_USB_UDINTCLR_VBUSTIC_SIZE                             1
#define AVR32_USB_UDINTCLR_WAKEUPC                                  4
#define AVR32_USB_UDINTCLR_WAKEUPC_MASK                    0x00000010
#define AVR32_USB_UDINTCLR_WAKEUPC_OFFSET                           4
#define AVR32_USB_UDINTCLR_WAKEUPC_SIZE                             1
#define AVR32_USB_UDINTE                                   0x00000010
#define AVR32_USB_UDINTECLR                                0x00000014
#define AVR32_USB_UDINTECLR_DAM6INTEC                              30
#define AVR32_USB_UDINTECLR_DAM6INTEC_MASK                 0x40000000
#define AVR32_USB_UDINTECLR_DAM6INTEC_OFFSET                       30
#define AVR32_USB_UDINTECLR_DAM6INTEC_SIZE                          1
#define AVR32_USB_UDINTECLR_DAM7INTEC                              31
#define AVR32_USB_UDINTECLR_DAM7INTEC_MASK                 0x80000000
#define AVR32_USB_UDINTECLR_DAM7INTEC_OFFSET                       31
#define AVR32_USB_UDINTECLR_DAM7INTEC_SIZE                          1
#define AVR32_USB_UDINTECLR_DMA1INTEC                              25
#define AVR32_USB_UDINTECLR_DMA1INTEC_MASK                 0x02000000
#define AVR32_USB_UDINTECLR_DMA1INTEC_OFFSET                       25
#define AVR32_USB_UDINTECLR_DMA1INTEC_SIZE                          1
#define AVR32_USB_UDINTECLR_DMA2INTEC                              26
#define AVR32_USB_UDINTECLR_DMA2INTEC_MASK                 0x04000000
#define AVR32_USB_UDINTECLR_DMA2INTEC_OFFSET                       26
#define AVR32_USB_UDINTECLR_DMA2INTEC_SIZE                          1
#define AVR32_USB_UDINTECLR_DMA3INTEC                              27
#define AVR32_USB_UDINTECLR_DMA3INTEC_MASK                 0x08000000
#define AVR32_USB_UDINTECLR_DMA3INTEC_OFFSET                       27
#define AVR32_USB_UDINTECLR_DMA3INTEC_SIZE                          1
#define AVR32_USB_UDINTECLR_DMA4INTEC                              28
#define AVR32_USB_UDINTECLR_DMA4INTEC_MASK                 0x10000000
#define AVR32_USB_UDINTECLR_DMA4INTEC_OFFSET                       28
#define AVR32_USB_UDINTECLR_DMA4INTEC_SIZE                          1
#define AVR32_USB_UDINTECLR_DMA5INTEC                              29
#define AVR32_USB_UDINTECLR_DMA5INTEC_MASK                 0x20000000
#define AVR32_USB_UDINTECLR_DMA5INTEC_OFFSET                       29
#define AVR32_USB_UDINTECLR_DMA5INTEC_SIZE                          1
#define AVR32_USB_UDINTECLR_EORSMEC                                 5
#define AVR32_USB_UDINTECLR_EORSMEC_MASK                   0x00000020
#define AVR32_USB_UDINTECLR_EORSMEC_OFFSET                          5
#define AVR32_USB_UDINTECLR_EORSMEC_SIZE                            1
#define AVR32_USB_UDINTECLR_EORSTEC                                 3
#define AVR32_USB_UDINTECLR_EORSTEC_MASK                   0x00000008
#define AVR32_USB_UDINTECLR_EORSTEC_OFFSET                          3
#define AVR32_USB_UDINTECLR_EORSTEC_SIZE                            1
#define AVR32_USB_UDINTECLR_EP0INTEC                               12
#define AVR32_USB_UDINTECLR_EP0INTEC_MASK                  0x00001000
#define AVR32_USB_UDINTECLR_EP0INTEC_OFFSET                        12
#define AVR32_USB_UDINTECLR_EP0INTEC_SIZE                           1
#define AVR32_USB_UDINTECLR_EP1INTEC                               13
#define AVR32_USB_UDINTECLR_EP1INTEC_MASK                  0x00002000
#define AVR32_USB_UDINTECLR_EP1INTEC_OFFSET                        13
#define AVR32_USB_UDINTECLR_EP1INTEC_SIZE                           1
#define AVR32_USB_UDINTECLR_EP2INTEC                               14
#define AVR32_USB_UDINTECLR_EP2INTEC_MASK                  0x00004000
#define AVR32_USB_UDINTECLR_EP2INTEC_OFFSET                        14
#define AVR32_USB_UDINTECLR_EP2INTEC_SIZE                           1
#define AVR32_USB_UDINTECLR_EP3INTEC                               15
#define AVR32_USB_UDINTECLR_EP3INTEC_MASK                  0x00008000
#define AVR32_USB_UDINTECLR_EP3INTEC_OFFSET                        15
#define AVR32_USB_UDINTECLR_EP3INTEC_SIZE                           1
#define AVR32_USB_UDINTECLR_EP4INTEC                               16
#define AVR32_USB_UDINTECLR_EP4INTEC_MASK                  0x00010000
#define AVR32_USB_UDINTECLR_EP4INTEC_OFFSET                        16
#define AVR32_USB_UDINTECLR_EP4INTEC_SIZE                           1
#define AVR32_USB_UDINTECLR_EP5INTEC                               17
#define AVR32_USB_UDINTECLR_EP5INTEC_MASK                  0x00020000
#define AVR32_USB_UDINTECLR_EP5INTEC_OFFSET                        17
#define AVR32_USB_UDINTECLR_EP5INTEC_SIZE                           1
#define AVR32_USB_UDINTECLR_EP6INTEC                               18
#define AVR32_USB_UDINTECLR_EP6INTEC_MASK                  0x00040000
#define AVR32_USB_UDINTECLR_EP6INTEC_OFFSET                        18
#define AVR32_USB_UDINTECLR_EP6INTEC_SIZE                           1
#define AVR32_USB_UDINTECLR_EP7INTEC                               19
#define AVR32_USB_UDINTECLR_EP7INTEC_MASK                  0x00080000
#define AVR32_USB_UDINTECLR_EP7INTEC_OFFSET                        19
#define AVR32_USB_UDINTECLR_EP7INTEC_SIZE                           1
#define AVR32_USB_UDINTECLR_MASK                           0xfe0ff0ff
#define AVR32_USB_UDINTECLR_MSOFEC                                  1
#define AVR32_USB_UDINTECLR_MSOFEC_MASK                    0x00000002
#define AVR32_USB_UDINTECLR_MSOFEC_OFFSET                           1
#define AVR32_USB_UDINTECLR_MSOFEC_SIZE                             1
#define AVR32_USB_UDINTECLR_RESETVALUE                     0x00000000
#define AVR32_USB_UDINTECLR_SOFEC                                   2
#define AVR32_USB_UDINTECLR_SOFEC_MASK                     0x00000004
#define AVR32_USB_UDINTECLR_SOFEC_OFFSET                            2
#define AVR32_USB_UDINTECLR_SOFEC_SIZE                              1
#define AVR32_USB_UDINTECLR_SUSPEC                                  0
#define AVR32_USB_UDINTECLR_SUSPEC_MASK                    0x00000001
#define AVR32_USB_UDINTECLR_SUSPEC_OFFSET                           0
#define AVR32_USB_UDINTECLR_SUSPEC_SIZE                             1
#define AVR32_USB_UDINTECLR_UPRSMEC                                 6
#define AVR32_USB_UDINTECLR_UPRSMEC_MASK                   0x00000040
#define AVR32_USB_UDINTECLR_UPRSMEC_OFFSET                          6
#define AVR32_USB_UDINTECLR_UPRSMEC_SIZE                            1
#define AVR32_USB_UDINTECLR_VBUSEC                                  7
#define AVR32_USB_UDINTECLR_VBUSEC_MASK                    0x00000080
#define AVR32_USB_UDINTECLR_VBUSEC_OFFSET                           7
#define AVR32_USB_UDINTECLR_VBUSEC_SIZE                             1
#define AVR32_USB_UDINTECLR_WAKEUPEC                                4
#define AVR32_USB_UDINTECLR_WAKEUPEC_MASK                  0x00000010
#define AVR32_USB_UDINTECLR_WAKEUPEC_OFFSET                         4
#define AVR32_USB_UDINTECLR_WAKEUPEC_SIZE                           1
#define AVR32_USB_UDINTESET                                0x00000018
#define AVR32_USB_UDINTESET_DMA1INTES                              25
#define AVR32_USB_UDINTESET_DMA1INTES_MASK                 0x02000000
#define AVR32_USB_UDINTESET_DMA1INTES_OFFSET                       25
#define AVR32_USB_UDINTESET_DMA1INTES_SIZE                          1
#define AVR32_USB_UDINTESET_DMA2INTES                              26
#define AVR32_USB_UDINTESET_DMA2INTES_MASK                 0x04000000
#define AVR32_USB_UDINTESET_DMA2INTES_OFFSET                       26
#define AVR32_USB_UDINTESET_DMA2INTES_SIZE                          1
#define AVR32_USB_UDINTESET_DMA3INTES                              27
#define AVR32_USB_UDINTESET_DMA3INTES_MASK                 0x08000000
#define AVR32_USB_UDINTESET_DMA3INTES_OFFSET                       27
#define AVR32_USB_UDINTESET_DMA3INTES_SIZE                          1
#define AVR32_USB_UDINTESET_DMA4INTES                              28
#define AVR32_USB_UDINTESET_DMA4INTES_MASK                 0x10000000
#define AVR32_USB_UDINTESET_DMA4INTES_OFFSET                       28
#define AVR32_USB_UDINTESET_DMA4INTES_SIZE                          1
#define AVR32_USB_UDINTESET_DMA5INTES                              29
#define AVR32_USB_UDINTESET_DMA5INTES_MASK                 0x20000000
#define AVR32_USB_UDINTESET_DMA5INTES_OFFSET                       29
#define AVR32_USB_UDINTESET_DMA5INTES_SIZE                          1
#define AVR32_USB_UDINTESET_DMA6INTES                              30
#define AVR32_USB_UDINTESET_DMA6INTES_MASK                 0x40000000
#define AVR32_USB_UDINTESET_DMA6INTES_OFFSET                       30
#define AVR32_USB_UDINTESET_DMA6INTES_SIZE                          1
#define AVR32_USB_UDINTESET_DMA7INTES                              31
#define AVR32_USB_UDINTESET_DMA7INTES_MASK                 0x80000000
#define AVR32_USB_UDINTESET_DMA7INTES_OFFSET                       31
#define AVR32_USB_UDINTESET_DMA7INTES_SIZE                          1
#define AVR32_USB_UDINTESET_EORSMES                                 5
#define AVR32_USB_UDINTESET_EORSMES_MASK                   0x00000020
#define AVR32_USB_UDINTESET_EORSMES_OFFSET                          5
#define AVR32_USB_UDINTESET_EORSMES_SIZE                            1
#define AVR32_USB_UDINTESET_EORSTES                                 3
#define AVR32_USB_UDINTESET_EORSTES_MASK                   0x00000008
#define AVR32_USB_UDINTESET_EORSTES_OFFSET                          3
#define AVR32_USB_UDINTESET_EORSTES_SIZE                            1
#define AVR32_USB_UDINTESET_EP0INTES                               12
#define AVR32_USB_UDINTESET_EP0INTES_MASK                  0x00001000
#define AVR32_USB_UDINTESET_EP0INTES_OFFSET                        12
#define AVR32_USB_UDINTESET_EP0INTES_SIZE                           1
#define AVR32_USB_UDINTESET_EP1INTES                               13
#define AVR32_USB_UDINTESET_EP1INTES_MASK                  0x00002000
#define AVR32_USB_UDINTESET_EP1INTES_OFFSET                        13
#define AVR32_USB_UDINTESET_EP1INTES_SIZE                           1
#define AVR32_USB_UDINTESET_EP2INTES                               14
#define AVR32_USB_UDINTESET_EP2INTES_MASK                  0x00004000
#define AVR32_USB_UDINTESET_EP2INTES_OFFSET                        14
#define AVR32_USB_UDINTESET_EP2INTES_SIZE                           1
#define AVR32_USB_UDINTESET_EP3INTES                               15
#define AVR32_USB_UDINTESET_EP3INTES_MASK                  0x00008000
#define AVR32_USB_UDINTESET_EP3INTES_OFFSET                        15
#define AVR32_USB_UDINTESET_EP3INTES_SIZE                           1
#define AVR32_USB_UDINTESET_EP4INTES                               16
#define AVR32_USB_UDINTESET_EP4INTES_MASK                  0x00010000
#define AVR32_USB_UDINTESET_EP4INTES_OFFSET                        16
#define AVR32_USB_UDINTESET_EP4INTES_SIZE                           1
#define AVR32_USB_UDINTESET_EP5INTES                               17
#define AVR32_USB_UDINTESET_EP5INTES_MASK                  0x00020000
#define AVR32_USB_UDINTESET_EP5INTES_OFFSET                        17
#define AVR32_USB_UDINTESET_EP5INTES_SIZE                           1
#define AVR32_USB_UDINTESET_EP6INTES                               18
#define AVR32_USB_UDINTESET_EP6INTES_MASK                  0x00040000
#define AVR32_USB_UDINTESET_EP6INTES_OFFSET                        18
#define AVR32_USB_UDINTESET_EP6INTES_SIZE                           1
#define AVR32_USB_UDINTESET_EP7INTES                               19
#define AVR32_USB_UDINTESET_EP7INTES_MASK                  0x00080000
#define AVR32_USB_UDINTESET_EP7INTES_OFFSET                        19
#define AVR32_USB_UDINTESET_EP7INTES_SIZE                           1
#define AVR32_USB_UDINTESET_MASK                           0xfe0ff0ff
#define AVR32_USB_UDINTESET_MSOFES                                  1
#define AVR32_USB_UDINTESET_MSOFES_MASK                    0x00000002
#define AVR32_USB_UDINTESET_MSOFES_OFFSET                           1
#define AVR32_USB_UDINTESET_MSOFES_SIZE                             1
#define AVR32_USB_UDINTESET_RESETVALUE                     0x00000000
#define AVR32_USB_UDINTESET_SOFES                                   2
#define AVR32_USB_UDINTESET_SOFES_MASK                     0x00000004
#define AVR32_USB_UDINTESET_SOFES_OFFSET                            2
#define AVR32_USB_UDINTESET_SOFES_SIZE                              1
#define AVR32_USB_UDINTESET_SUSPES                                  0
#define AVR32_USB_UDINTESET_SUSPES_MASK                    0x00000001
#define AVR32_USB_UDINTESET_SUSPES_OFFSET                           0
#define AVR32_USB_UDINTESET_SUSPES_SIZE                             1
#define AVR32_USB_UDINTESET_UPRSMES                                 6
#define AVR32_USB_UDINTESET_UPRSMES_MASK                   0x00000040
#define AVR32_USB_UDINTESET_UPRSMES_OFFSET                          6
#define AVR32_USB_UDINTESET_UPRSMES_SIZE                            1
#define AVR32_USB_UDINTESET_VBUSES                                  7
#define AVR32_USB_UDINTESET_VBUSES_MASK                    0x00000080
#define AVR32_USB_UDINTESET_VBUSES_OFFSET                           7
#define AVR32_USB_UDINTESET_VBUSES_SIZE                             1
#define AVR32_USB_UDINTESET_WAKEUPES                                4
#define AVR32_USB_UDINTESET_WAKEUPES_MASK                  0x00000010
#define AVR32_USB_UDINTESET_WAKEUPES_OFFSET                         4
#define AVR32_USB_UDINTESET_WAKEUPES_SIZE                           1
#define AVR32_USB_UDINTE_DMA1INTE                                  25
#define AVR32_USB_UDINTE_DMA1INTE_MASK                     0x02000000
#define AVR32_USB_UDINTE_DMA1INTE_OFFSET                           25
#define AVR32_USB_UDINTE_DMA1INTE_SIZE                              1
#define AVR32_USB_UDINTE_DMA2INTE                                  26
#define AVR32_USB_UDINTE_DMA2INTE_MASK                     0x04000000
#define AVR32_USB_UDINTE_DMA2INTE_OFFSET                           26
#define AVR32_USB_UDINTE_DMA2INTE_SIZE                              1
#define AVR32_USB_UDINTE_DMA3INTE                                  27
#define AVR32_USB_UDINTE_DMA3INTE_MASK                     0x08000000
#define AVR32_USB_UDINTE_DMA3INTE_OFFSET                           27
#define AVR32_USB_UDINTE_DMA3INTE_SIZE                              1
#define AVR32_USB_UDINTE_DMA4INTE                                  28
#define AVR32_USB_UDINTE_DMA4INTE_MASK                     0x10000000
#define AVR32_USB_UDINTE_DMA4INTE_OFFSET                           28
#define AVR32_USB_UDINTE_DMA4INTE_SIZE                              1
#define AVR32_USB_UDINTE_DMA5INTE                                  29
#define AVR32_USB_UDINTE_DMA5INTE_MASK                     0x20000000
#define AVR32_USB_UDINTE_DMA5INTE_OFFSET                           29
#define AVR32_USB_UDINTE_DMA5INTE_SIZE                              1
#define AVR32_USB_UDINTE_DMA6INTE                                  30
#define AVR32_USB_UDINTE_DMA6INTE_MASK                     0x40000000
#define AVR32_USB_UDINTE_DMA6INTE_OFFSET                           30
#define AVR32_USB_UDINTE_DMA6INTE_SIZE                              1
#define AVR32_USB_UDINTE_DMA7INTE                                  31
#define AVR32_USB_UDINTE_DMA7INTE_MASK                     0x80000000
#define AVR32_USB_UDINTE_DMA7INTE_OFFSET                           31
#define AVR32_USB_UDINTE_DMA7INTE_SIZE                              1
#define AVR32_USB_UDINTE_EORSME                                     5
#define AVR32_USB_UDINTE_EORSME_MASK                       0x00000020
#define AVR32_USB_UDINTE_EORSME_OFFSET                              5
#define AVR32_USB_UDINTE_EORSME_SIZE                                1
#define AVR32_USB_UDINTE_EORSTE                                     3
#define AVR32_USB_UDINTE_EORSTE_MASK                       0x00000008
#define AVR32_USB_UDINTE_EORSTE_OFFSET                              3
#define AVR32_USB_UDINTE_EORSTE_SIZE                                1
#define AVR32_USB_UDINTE_EP0INTE                                   12
#define AVR32_USB_UDINTE_EP0INTE_MASK                      0x00001000
#define AVR32_USB_UDINTE_EP0INTE_OFFSET                            12
#define AVR32_USB_UDINTE_EP0INTE_SIZE                               1
#define AVR32_USB_UDINTE_EP1INTE                                   13
#define AVR32_USB_UDINTE_EP1INTE_MASK                      0x00002000
#define AVR32_USB_UDINTE_EP1INTE_OFFSET                            13
#define AVR32_USB_UDINTE_EP1INTE_SIZE                               1
#define AVR32_USB_UDINTE_EP2INTE                                   14
#define AVR32_USB_UDINTE_EP2INTE_MASK                      0x00004000
#define AVR32_USB_UDINTE_EP2INTE_OFFSET                            14
#define AVR32_USB_UDINTE_EP2INTE_SIZE                               1
#define AVR32_USB_UDINTE_EP3INTE                                   15
#define AVR32_USB_UDINTE_EP3INTE_MASK                      0x00008000
#define AVR32_USB_UDINTE_EP3INTE_OFFSET                            15
#define AVR32_USB_UDINTE_EP3INTE_SIZE                               1
#define AVR32_USB_UDINTE_EP4INTE                                   16
#define AVR32_USB_UDINTE_EP4INTE_MASK                      0x00010000
#define AVR32_USB_UDINTE_EP4INTE_OFFSET                            16
#define AVR32_USB_UDINTE_EP4INTE_SIZE                               1
#define AVR32_USB_UDINTE_EP5INTE                                   17
#define AVR32_USB_UDINTE_EP5INTE_MASK                      0x00020000
#define AVR32_USB_UDINTE_EP5INTE_OFFSET                            17
#define AVR32_USB_UDINTE_EP5INTE_SIZE                               1
#define AVR32_USB_UDINTE_EP6INTE                                   18
#define AVR32_USB_UDINTE_EP6INTE_MASK                      0x00040000
#define AVR32_USB_UDINTE_EP6INTE_OFFSET                            18
#define AVR32_USB_UDINTE_EP6INTE_SIZE                               1
#define AVR32_USB_UDINTE_EP7INTE                                   19
#define AVR32_USB_UDINTE_EP7INTE_MASK                      0x00080000
#define AVR32_USB_UDINTE_EP7INTE_OFFSET                            19
#define AVR32_USB_UDINTE_EP7INTE_SIZE                               1
#define AVR32_USB_UDINTE_MASK                              0xfe0ff0ff
#define AVR32_USB_UDINTE_MSOFE                                      1
#define AVR32_USB_UDINTE_MSOFE_MASK                        0x00000002
#define AVR32_USB_UDINTE_MSOFE_OFFSET                               1
#define AVR32_USB_UDINTE_MSOFE_SIZE                                 1
#define AVR32_USB_UDINTE_RESETVALUE                        0x00000000
#define AVR32_USB_UDINTE_SOFE                                       2
#define AVR32_USB_UDINTE_SOFE_MASK                         0x00000004
#define AVR32_USB_UDINTE_SOFE_OFFSET                                2
#define AVR32_USB_UDINTE_SOFE_SIZE                                  1
#define AVR32_USB_UDINTE_SUSPE                                      0
#define AVR32_USB_UDINTE_SUSPE_MASK                        0x00000001
#define AVR32_USB_UDINTE_SUSPE_OFFSET                               0
#define AVR32_USB_UDINTE_SUSPE_SIZE                                 1
#define AVR32_USB_UDINTE_UPRSME                                     6
#define AVR32_USB_UDINTE_UPRSME_MASK                       0x00000040
#define AVR32_USB_UDINTE_UPRSME_OFFSET                              6
#define AVR32_USB_UDINTE_UPRSME_SIZE                                1
#define AVR32_USB_UDINTE_VBUSE                                      7
#define AVR32_USB_UDINTE_VBUSE_MASK                        0x00000080
#define AVR32_USB_UDINTE_VBUSE_OFFSET                               7
#define AVR32_USB_UDINTE_VBUSE_SIZE                                 1
#define AVR32_USB_UDINTE_WAKEUPE                                    4
#define AVR32_USB_UDINTE_WAKEUPE_MASK                      0x00000010
#define AVR32_USB_UDINTE_WAKEUPE_OFFSET                             4
#define AVR32_USB_UDINTE_WAKEUPE_SIZE                               1
#define AVR32_USB_UDINTSET                                 0x0000000c
#define AVR32_USB_UDINTSET_DMA1INTS                                25
#define AVR32_USB_UDINTSET_DMA1INTS_MASK                   0x02000000
#define AVR32_USB_UDINTSET_DMA1INTS_OFFSET                         25
#define AVR32_USB_UDINTSET_DMA1INTS_SIZE                            1
#define AVR32_USB_UDINTSET_DMA2INTS                                26
#define AVR32_USB_UDINTSET_DMA2INTS_MASK                   0x04000000
#define AVR32_USB_UDINTSET_DMA2INTS_OFFSET                         26
#define AVR32_USB_UDINTSET_DMA2INTS_SIZE                            1
#define AVR32_USB_UDINTSET_DMA3INTS                                27
#define AVR32_USB_UDINTSET_DMA3INTS_MASK                   0x08000000
#define AVR32_USB_UDINTSET_DMA3INTS_OFFSET                         27
#define AVR32_USB_UDINTSET_DMA3INTS_SIZE                            1
#define AVR32_USB_UDINTSET_DMA4INTS                                28
#define AVR32_USB_UDINTSET_DMA4INTS_MASK                   0x10000000
#define AVR32_USB_UDINTSET_DMA4INTS_OFFSET                         28
#define AVR32_USB_UDINTSET_DMA4INTS_SIZE                            1
#define AVR32_USB_UDINTSET_DMA5INTS                                29
#define AVR32_USB_UDINTSET_DMA5INTS_MASK                   0x20000000
#define AVR32_USB_UDINTSET_DMA5INTS_OFFSET                         29
#define AVR32_USB_UDINTSET_DMA5INTS_SIZE                            1
#define AVR32_USB_UDINTSET_DMA6INTS                                30
#define AVR32_USB_UDINTSET_DMA6INTS_MASK                   0x40000000
#define AVR32_USB_UDINTSET_DMA6INTS_OFFSET                         30
#define AVR32_USB_UDINTSET_DMA6INTS_SIZE                            1
#define AVR32_USB_UDINTSET_DMA7INTS                                31
#define AVR32_USB_UDINTSET_DMA7INTS_MASK                   0x80000000
#define AVR32_USB_UDINTSET_DMA7INTS_OFFSET                         31
#define AVR32_USB_UDINTSET_DMA7INTS_SIZE                            1
#define AVR32_USB_UDINTSET_EORSMS                                   5
#define AVR32_USB_UDINTSET_EORSMS_MASK                     0x00000020
#define AVR32_USB_UDINTSET_EORSMS_OFFSET                            5
#define AVR32_USB_UDINTSET_EORSMS_SIZE                              1
#define AVR32_USB_UDINTSET_EORSTS                                   3
#define AVR32_USB_UDINTSET_EORSTS_MASK                     0x00000008
#define AVR32_USB_UDINTSET_EORSTS_OFFSET                            3
#define AVR32_USB_UDINTSET_EORSTS_SIZE                              1
#define AVR32_USB_UDINTSET_MASK                            0xfe0000ff
#define AVR32_USB_UDINTSET_MSOFS                                    1
#define AVR32_USB_UDINTSET_MSOFS_MASK                      0x00000002
#define AVR32_USB_UDINTSET_MSOFS_OFFSET                             1
#define AVR32_USB_UDINTSET_MSOFS_SIZE                               1
#define AVR32_USB_UDINTSET_RESETVALUE                      0x00000000
#define AVR32_USB_UDINTSET_SOFS                                     2
#define AVR32_USB_UDINTSET_SOFS_MASK                       0x00000004
#define AVR32_USB_UDINTSET_SOFS_OFFSET                              2
#define AVR32_USB_UDINTSET_SOFS_SIZE                                1
#define AVR32_USB_UDINTSET_SUSPS                                    0
#define AVR32_USB_UDINTSET_SUSPS_MASK                      0x00000001
#define AVR32_USB_UDINTSET_SUSPS_OFFSET                             0
#define AVR32_USB_UDINTSET_SUSPS_SIZE                               1
#define AVR32_USB_UDINTSET_UPRSMS                                   6
#define AVR32_USB_UDINTSET_UPRSMS_MASK                     0x00000040
#define AVR32_USB_UDINTSET_UPRSMS_OFFSET                            6
#define AVR32_USB_UDINTSET_UPRSMS_SIZE                              1
#define AVR32_USB_UDINTSET_VBUSTIS                                  7
#define AVR32_USB_UDINTSET_VBUSTIS_MASK                    0x00000080
#define AVR32_USB_UDINTSET_VBUSTIS_OFFSET                           7
#define AVR32_USB_UDINTSET_VBUSTIS_SIZE                             1
#define AVR32_USB_UDINTSET_WAKEUPS                                  4
#define AVR32_USB_UDINTSET_WAKEUPS_MASK                    0x00000010
#define AVR32_USB_UDINTSET_WAKEUPS_OFFSET                           4
#define AVR32_USB_UDINTSET_WAKEUPS_SIZE                             1
#define AVR32_USB_UDINT_CLKUSABLE                                  10
#define AVR32_USB_UDINT_CLKUSABLE_MASK                     0x00000400
#define AVR32_USB_UDINT_CLKUSABLE_OFFSET                           10
#define AVR32_USB_UDINT_CLKUSABLE_SIZE                              1
#define AVR32_USB_UDINT_DMA1INT                                    25
#define AVR32_USB_UDINT_DMA1INT_MASK                       0x02000000
#define AVR32_USB_UDINT_DMA1INT_OFFSET                             25
#define AVR32_USB_UDINT_DMA1INT_SIZE                                1
#define AVR32_USB_UDINT_DMA2INT                                    26
#define AVR32_USB_UDINT_DMA2INT_MASK                       0x04000000
#define AVR32_USB_UDINT_DMA2INT_OFFSET                             26
#define AVR32_USB_UDINT_DMA2INT_SIZE                                1
#define AVR32_USB_UDINT_DMA3INT                                    27
#define AVR32_USB_UDINT_DMA3INT_MASK                       0x08000000
#define AVR32_USB_UDINT_DMA3INT_OFFSET                             27
#define AVR32_USB_UDINT_DMA3INT_SIZE                                1
#define AVR32_USB_UDINT_DMA4INT                                    28
#define AVR32_USB_UDINT_DMA4INT_MASK                       0x10000000
#define AVR32_USB_UDINT_DMA4INT_OFFSET                             28
#define AVR32_USB_UDINT_DMA4INT_SIZE                                1
#define AVR32_USB_UDINT_DMA5INT                                    29
#define AVR32_USB_UDINT_DMA5INT_MASK                       0x20000000
#define AVR32_USB_UDINT_DMA5INT_OFFSET                             29
#define AVR32_USB_UDINT_DMA5INT_SIZE                                1
#define AVR32_USB_UDINT_DMA6INT                                    30
#define AVR32_USB_UDINT_DMA6INT_MASK                       0x40000000
#define AVR32_USB_UDINT_DMA6INT_OFFSET                             30
#define AVR32_USB_UDINT_DMA6INT_SIZE                                1
#define AVR32_USB_UDINT_DMA7INT                                    31
#define AVR32_USB_UDINT_DMA7INT_MASK                       0x80000000
#define AVR32_USB_UDINT_DMA7INT_OFFSET                             31
#define AVR32_USB_UDINT_DMA7INT_SIZE                                1
#define AVR32_USB_UDINT_EORSM                                       5
#define AVR32_USB_UDINT_EORSM_MASK                         0x00000020
#define AVR32_USB_UDINT_EORSM_OFFSET                                5
#define AVR32_USB_UDINT_EORSM_SIZE                                  1
#define AVR32_USB_UDINT_EORST                                       3
#define AVR32_USB_UDINT_EORST_MASK                         0x00000008
#define AVR32_USB_UDINT_EORST_OFFSET                                3
#define AVR32_USB_UDINT_EORST_SIZE                                  1
#define AVR32_USB_UDINT_EP0INT                                     12
#define AVR32_USB_UDINT_EP0INT_MASK                        0x00001000
#define AVR32_USB_UDINT_EP0INT_OFFSET                              12
#define AVR32_USB_UDINT_EP0INT_SIZE                                 1
#define AVR32_USB_UDINT_EP1INT                                     13
#define AVR32_USB_UDINT_EP1INT_MASK                        0x00002000
#define AVR32_USB_UDINT_EP1INT_OFFSET                              13
#define AVR32_USB_UDINT_EP1INT_SIZE                                 1
#define AVR32_USB_UDINT_EP2INT                                     14
#define AVR32_USB_UDINT_EP2INT_MASK                        0x00004000
#define AVR32_USB_UDINT_EP2INT_OFFSET                              14
#define AVR32_USB_UDINT_EP2INT_SIZE                                 1
#define AVR32_USB_UDINT_EP3INT                                     15
#define AVR32_USB_UDINT_EP3INT_MASK                        0x00008000
#define AVR32_USB_UDINT_EP3INT_OFFSET                              15
#define AVR32_USB_UDINT_EP3INT_SIZE                                 1
#define AVR32_USB_UDINT_EP4INT                                     16
#define AVR32_USB_UDINT_EP4INT_MASK                        0x00010000
#define AVR32_USB_UDINT_EP4INT_OFFSET                              16
#define AVR32_USB_UDINT_EP4INT_SIZE                                 1
#define AVR32_USB_UDINT_EP5INT                                     17
#define AVR32_USB_UDINT_EP5INT_MASK                        0x00020000
#define AVR32_USB_UDINT_EP5INT_OFFSET                              17
#define AVR32_USB_UDINT_EP5INT_SIZE                                 1
#define AVR32_USB_UDINT_EP6INT                                     18
#define AVR32_USB_UDINT_EP6INT_MASK                        0x00040000
#define AVR32_USB_UDINT_EP6INT_OFFSET                              18
#define AVR32_USB_UDINT_EP6INT_SIZE                                 1
#define AVR32_USB_UDINT_EP7INT                                     19
#define AVR32_USB_UDINT_EP7INT_MASK                        0x00080000
#define AVR32_USB_UDINT_EP7INT_OFFSET                              19
#define AVR32_USB_UDINT_EP7INT_SIZE                                 1
#define AVR32_USB_UDINT_MASK                               0xfe0ff7ff
#define AVR32_USB_UDINT_MSOF                                        1
#define AVR32_USB_UDINT_MSOF_MASK                          0x00000002
#define AVR32_USB_UDINT_MSOF_OFFSET                                 1
#define AVR32_USB_UDINT_MSOF_SIZE                                   1
#define AVR32_USB_UDINT_RESETVALUE                         0x00000000
#define AVR32_USB_UDINT_SOF                                         2
#define AVR32_USB_UDINT_SOF_MASK                           0x00000004
#define AVR32_USB_UDINT_SOF_OFFSET                                  2
#define AVR32_USB_UDINT_SOF_SIZE                                    1
#define AVR32_USB_UDINT_SPEED                                       9
#define AVR32_USB_UDINT_SPEED_MASK                         0x00000200
#define AVR32_USB_UDINT_SPEED_OFFSET                                9
#define AVR32_USB_UDINT_SPEED_SIZE                                  1
#define AVR32_USB_UDINT_SUSP                                        0
#define AVR32_USB_UDINT_SUSP_MASK                          0x00000001
#define AVR32_USB_UDINT_SUSP_OFFSET                                 0
#define AVR32_USB_UDINT_SUSP_SIZE                                   1
#define AVR32_USB_UDINT_UPRSM                                       6
#define AVR32_USB_UDINT_UPRSM_MASK                         0x00000040
#define AVR32_USB_UDINT_UPRSM_OFFSET                                6
#define AVR32_USB_UDINT_UPRSM_SIZE                                  1
#define AVR32_USB_UDINT_VBUS                                        8
#define AVR32_USB_UDINT_VBUSTI                                      7
#define AVR32_USB_UDINT_VBUSTI_MASK                        0x00000080
#define AVR32_USB_UDINT_VBUSTI_OFFSET                               7
#define AVR32_USB_UDINT_VBUSTI_SIZE                                 1
#define AVR32_USB_UDINT_VBUS_MASK                          0x00000100
#define AVR32_USB_UDINT_VBUS_OFFSET                                 8
#define AVR32_USB_UDINT_VBUS_SIZE                                   1
#define AVR32_USB_UDINT_WAKEUP                                      4
#define AVR32_USB_UDINT_WAKEUP_MASK                        0x00000010
#define AVR32_USB_UDINT_WAKEUP_OFFSET                               4
#define AVR32_USB_UDINT_WAKEUP_SIZE                                 1
#define AVR32_USB_UDNAME1                                  0x00000038
#define AVR32_USB_UDNAME1_MASK                             0x00000000
#define AVR32_USB_UDNAME1_RESETVALUE                       0x48555342
#define AVR32_USB_UDNAME2                                  0x0000003c
#define AVR32_USB_UDNAME2_MASK                             0x00000000
#define AVR32_USB_UDNAME2_RESETVALUE                       0x004f5447
#define AVR32_USB_UDTST1                                   0x00000024
#define AVR32_USB_UDTST1_COUNTERA                                   0
#define AVR32_USB_UDTST1_COUNTERA_MASK                     0x00007fff
#define AVR32_USB_UDTST1_COUNTERA_OFFSET                            0
#define AVR32_USB_UDTST1_COUNTERA_SIZE                             15
#define AVR32_USB_UDTST1_COUNTERB                                  16
#define AVR32_USB_UDTST1_COUNTERB_MASK                     0x003f0000
#define AVR32_USB_UDTST1_COUNTERB_OFFSET                           16
#define AVR32_USB_UDTST1_COUNTERB_SIZE                              6
#define AVR32_USB_UDTST1_LOADCNTA                                  15
#define AVR32_USB_UDTST1_LOADCNTA_MASK                     0x00008000
#define AVR32_USB_UDTST1_LOADCNTA_OFFSET                           15
#define AVR32_USB_UDTST1_LOADCNTA_SIZE                              1
#define AVR32_USB_UDTST1_LOADCNTB                                  23
#define AVR32_USB_UDTST1_LOADCNTB_MASK                     0x00800000
#define AVR32_USB_UDTST1_LOADCNTB_OFFSET                           23
#define AVR32_USB_UDTST1_LOADCNTB_SIZE                              1
#define AVR32_USB_UDTST1_LOADSOFCNT                                31
#define AVR32_USB_UDTST1_LOADSOFCNT_MASK                   0x80000000
#define AVR32_USB_UDTST1_LOADSOFCNT_OFFSET                         31
#define AVR32_USB_UDTST1_LOADSOFCNT_SIZE                            1
#define AVR32_USB_UDTST1_MASK                              0xffbfffff
#define AVR32_USB_UDTST1_RESETVALUE                        0x00000000
#define AVR32_USB_UDTST1_SOFCNTMAX                                 24
#define AVR32_USB_UDTST1_SOFCNTMAX_MASK                    0x7f000000
#define AVR32_USB_UDTST1_SOFCNTMAX_OFFSET                          24
#define AVR32_USB_UDTST1_SOFCNTMAX_SIZE                             7
#define AVR32_USB_UDTST2                                   0x00000028
#define AVR32_USB_UDTST2_BYPASSDPLL                                 5
#define AVR32_USB_UDTST2_BYPASSDPLL_MASK                   0x00000020
#define AVR32_USB_UDTST2_BYPASSDPLL_OFFSET                          5
#define AVR32_USB_UDTST2_BYPASSDPLL_SIZE                            1
#define AVR32_USB_UDTST2_DISBALEGATEDCLOCK                          3
#define AVR32_USB_UDTST2_DISBALEGATEDCLOCK_MASK            0x00000008
#define AVR32_USB_UDTST2_DISBALEGATEDCLOCK_OFFSET                   3
#define AVR32_USB_UDTST2_DISBALEGATEDCLOCK_SIZE                     1
#define AVR32_USB_UDTST2_FORCESUSPENDMTO1                           4
#define AVR32_USB_UDTST2_FORCESUSPENDMTO1_MASK             0x00000010
#define AVR32_USB_UDTST2_FORCESUSPENDMTO1_OFFSET                    4
#define AVR32_USB_UDTST2_FORCESUSPENDMTO1_SIZE                      1
#define AVR32_USB_UDTST2_FULLDETACHEN                               0
#define AVR32_USB_UDTST2_FULLDETACHEN_MASK                 0x00000001
#define AVR32_USB_UDTST2_FULLDETACHEN_OFFSET                        0
#define AVR32_USB_UDTST2_FULLDETACHEN_SIZE                          1
#define AVR32_USB_UDTST2_HSSERIALMODE                               1
#define AVR32_USB_UDTST2_HSSERIALMODE_MASK                 0x00000002
#define AVR32_USB_UDTST2_HSSERIALMODE_OFFSET                        1
#define AVR32_USB_UDTST2_HSSERIALMODE_SIZE                          1
#define AVR32_USB_UDTST2_LOOPBACKMODE                               2
#define AVR32_USB_UDTST2_LOOPBACKMODE_MASK                 0x00000004
#define AVR32_USB_UDTST2_LOOPBACKMODE_OFFSET                        2
#define AVR32_USB_UDTST2_LOOPBACKMODE_SIZE                          1
#define AVR32_USB_UDTST2_MASK                              0x0000007f
#define AVR32_USB_UDTST2_NOTHOSTDISCONNECT                          6
#define AVR32_USB_UDTST2_NOTHOSTDISCONNECT_MASK            0x00000040
#define AVR32_USB_UDTST2_NOTHOSTDISCONNECT_OFFSET                   6
#define AVR32_USB_UDTST2_NOTHOSTDISCONNECT_SIZE                     1
#define AVR32_USB_UDTST2_RESETVALUE                        0x00000000
#define AVR32_USB_UDVERS                                   0x0000002c
#define AVR32_USB_UDVERS_MASK                              0x00000000
#define AVR32_USB_UDVERS_RESETVALUE                        0x00000260
#define AVR32_USB_UECFG0                                   0x00000100
#define AVR32_USB_UECFG0_ALLOC                                      1
#define AVR32_USB_UECFG0_ALLOC_MASK                        0x00000002
#define AVR32_USB_UECFG0_ALLOC_OFFSET                               1
#define AVR32_USB_UECFG0_ALLOC_SIZE                                 1
#define AVR32_USB_UECFG0_AUTOSW                                     9
#define AVR32_USB_UECFG0_AUTOSW_MASK                       0x00000200
#define AVR32_USB_UECFG0_AUTOSW_OFFSET                              9
#define AVR32_USB_UECFG0_AUTOSW_SIZE                                1
#define AVR32_USB_UECFG0_DATASIZERDWR                              30
#define AVR32_USB_UECFG0_DATASIZERDWR_MASK                 0xc0000000
#define AVR32_USB_UECFG0_DATASIZERDWR_OFFSET                       30
#define AVR32_USB_UECFG0_DATASIZERDWR_SIZE                          2
#define AVR32_USB_UECFG0_EPBK                                       2
#define AVR32_USB_UECFG0_EPBK_DOUBLE                       0x00000001
#define AVR32_USB_UECFG0_EPBK_MASK                         0x0000000c
#define AVR32_USB_UECFG0_EPBK_OFFSET                                2
#define AVR32_USB_UECFG0_EPBK_SINGLE                       0x00000000
#define AVR32_USB_UECFG0_EPBK_SIZE                                  2
#define AVR32_USB_UECFG0_EPBK_TRIPLE                       0x00000002
#define AVR32_USB_UECFG0_EPDIR                                      8
#define AVR32_USB_UECFG0_EPDIR_IN                          0x00000001
#define AVR32_USB_UECFG0_EPDIR_MASK                        0x00000100
#define AVR32_USB_UECFG0_EPDIR_OFFSET                               8
#define AVR32_USB_UECFG0_EPDIR_OUT                         0x00000000
#define AVR32_USB_UECFG0_EPDIR_SIZE                                 1
#define AVR32_USB_UECFG0_EPSIZE                                     4
#define AVR32_USB_UECFG0_EPSIZE_1024                       0x00000007
#define AVR32_USB_UECFG0_EPSIZE_128                        0x00000004
#define AVR32_USB_UECFG0_EPSIZE_16                         0x00000001
#define AVR32_USB_UECFG0_EPSIZE_256                        0x00000005
#define AVR32_USB_UECFG0_EPSIZE_32                         0x00000002
#define AVR32_USB_UECFG0_EPSIZE_512                        0x00000006
#define AVR32_USB_UECFG0_EPSIZE_64                         0x00000003
#define AVR32_USB_UECFG0_EPSIZE_8                          0x00000000
#define AVR32_USB_UECFG0_EPSIZE_MASK                       0x00000070
#define AVR32_USB_UECFG0_EPSIZE_OFFSET                              4
#define AVR32_USB_UECFG0_EPSIZE_SIZE                                3
#define AVR32_USB_UECFG0_EPTYPE                                    11
#define AVR32_USB_UECFG0_EPTYPE_BULK                       0x00000002
#define AVR32_USB_UECFG0_EPTYPE_CONTROL                    0x00000000
#define AVR32_USB_UECFG0_EPTYPE_INTERRUPT                  0x00000003
#define AVR32_USB_UECFG0_EPTYPE_ISOCHRONOUS                0x00000001
#define AVR32_USB_UECFG0_EPTYPE_MASK                       0x00001800
#define AVR32_USB_UECFG0_EPTYPE_OFFSET                             11
#define AVR32_USB_UECFG0_EPTYPE_SIZE                                2
#define AVR32_USB_UECFG0_MASK                              0xc0007b7e
#define AVR32_USB_UECFG0_NBTRANS                                   13
#define AVR32_USB_UECFG0_NBTRANS_MASK                      0x00006000
#define AVR32_USB_UECFG0_NBTRANS_OFFSET                            13
#define AVR32_USB_UECFG0_NBTRANS_SIZE                               2
#define AVR32_USB_UECFG0_RESETVALUE                        0x00002000
#define AVR32_USB_UECFG1                                   0x00000104
#define AVR32_USB_UECFG1_ALLOC                                      1
#define AVR32_USB_UECFG1_ALLOC_MASK                        0x00000002
#define AVR32_USB_UECFG1_ALLOC_OFFSET                               1
#define AVR32_USB_UECFG1_ALLOC_SIZE                                 1
#define AVR32_USB_UECFG1_AUTOSW                                     9
#define AVR32_USB_UECFG1_AUTOSW_MASK                       0x00000200
#define AVR32_USB_UECFG1_AUTOSW_OFFSET                              9
#define AVR32_USB_UECFG1_AUTOSW_SIZE                                1
#define AVR32_USB_UECFG1_DATASIZERDWR                              30
#define AVR32_USB_UECFG1_DATASIZERDWR_MASK                 0xc0000000
#define AVR32_USB_UECFG1_DATASIZERDWR_OFFSET                       30
#define AVR32_USB_UECFG1_DATASIZERDWR_SIZE                          2
#define AVR32_USB_UECFG1_EPBK                                       2
#define AVR32_USB_UECFG1_EPBK_DOUBLE                       0x00000001
#define AVR32_USB_UECFG1_EPBK_MASK                         0x0000000c
#define AVR32_USB_UECFG1_EPBK_OFFSET                                2
#define AVR32_USB_UECFG1_EPBK_SINGLE                       0x00000000
#define AVR32_USB_UECFG1_EPBK_SIZE                                  2
#define AVR32_USB_UECFG1_EPBK_TRIPLE                       0x00000002
#define AVR32_USB_UECFG1_EPDIR                                      8
#define AVR32_USB_UECFG1_EPDIR_IN                          0x00000001
#define AVR32_USB_UECFG1_EPDIR_MASK                        0x00000100
#define AVR32_USB_UECFG1_EPDIR_OFFSET                               8
#define AVR32_USB_UECFG1_EPDIR_OUT                         0x00000000
#define AVR32_USB_UECFG1_EPDIR_SIZE                                 1
#define AVR32_USB_UECFG1_EPSIZE                                     4
#define AVR32_USB_UECFG1_EPSIZE_1024                       0x00000007
#define AVR32_USB_UECFG1_EPSIZE_128                        0x00000004
#define AVR32_USB_UECFG1_EPSIZE_16                         0x00000001
#define AVR32_USB_UECFG1_EPSIZE_256                        0x00000005
#define AVR32_USB_UECFG1_EPSIZE_32                         0x00000002
#define AVR32_USB_UECFG1_EPSIZE_512                        0x00000006
#define AVR32_USB_UECFG1_EPSIZE_64                         0x00000003
#define AVR32_USB_UECFG1_EPSIZE_8                          0x00000000
#define AVR32_USB_UECFG1_EPSIZE_MASK                       0x00000070
#define AVR32_USB_UECFG1_EPSIZE_OFFSET                              4
#define AVR32_USB_UECFG1_EPSIZE_SIZE                                3
#define AVR32_USB_UECFG1_EPTYPE                                    11
#define AVR32_USB_UECFG1_EPTYPE_BULK                       0x00000002
#define AVR32_USB_UECFG1_EPTYPE_CONTROL                    0x00000000
#define AVR32_USB_UECFG1_EPTYPE_INTERRUPT                  0x00000003
#define AVR32_USB_UECFG1_EPTYPE_ISOCHRONOUS                0x00000001
#define AVR32_USB_UECFG1_EPTYPE_MASK                       0x00001800
#define AVR32_USB_UECFG1_EPTYPE_OFFSET                             11
#define AVR32_USB_UECFG1_EPTYPE_SIZE                                2
#define AVR32_USB_UECFG1_MASK                              0xc0007b7e
#define AVR32_USB_UECFG1_NBTRANS                                   13
#define AVR32_USB_UECFG1_NBTRANS_MASK                      0x00006000
#define AVR32_USB_UECFG1_NBTRANS_OFFSET                            13
#define AVR32_USB_UECFG1_NBTRANS_SIZE                               2
#define AVR32_USB_UECFG1_RESETVALUE                        0x00002000
#define AVR32_USB_UECFG2                                   0x00000108
#define AVR32_USB_UECFG2_ALLOC                                      1
#define AVR32_USB_UECFG2_ALLOC_MASK                        0x00000002
#define AVR32_USB_UECFG2_ALLOC_OFFSET                               1
#define AVR32_USB_UECFG2_ALLOC_SIZE                                 1
#define AVR32_USB_UECFG2_AUTOSW                                     9
#define AVR32_USB_UECFG2_AUTOSW_MASK                       0x00000200
#define AVR32_USB_UECFG2_AUTOSW_OFFSET                              9
#define AVR32_USB_UECFG2_AUTOSW_SIZE                                1
#define AVR32_USB_UECFG2_DATASIZERDWR                              30
#define AVR32_USB_UECFG2_DATASIZERDWR_MASK                 0xc0000000
#define AVR32_USB_UECFG2_DATASIZERDWR_OFFSET                       30
#define AVR32_USB_UECFG2_DATASIZERDWR_SIZE                          2
#define AVR32_USB_UECFG2_EPBK                                       2
#define AVR32_USB_UECFG2_EPBK_DOUBLE                       0x00000001
#define AVR32_USB_UECFG2_EPBK_MASK                         0x0000000c
#define AVR32_USB_UECFG2_EPBK_OFFSET                                2
#define AVR32_USB_UECFG2_EPBK_SINGLE                       0x00000000
#define AVR32_USB_UECFG2_EPBK_SIZE                                  2
#define AVR32_USB_UECFG2_EPBK_TRIPLE                       0x00000002
#define AVR32_USB_UECFG2_EPDIR                                      8
#define AVR32_USB_UECFG2_EPDIR_IN                          0x00000001
#define AVR32_USB_UECFG2_EPDIR_MASK                        0x00000100
#define AVR32_USB_UECFG2_EPDIR_OFFSET                               8
#define AVR32_USB_UECFG2_EPDIR_OUT                         0x00000000
#define AVR32_USB_UECFG2_EPDIR_SIZE                                 1
#define AVR32_USB_UECFG2_EPSIZE                                     4
#define AVR32_USB_UECFG2_EPSIZE_1024                       0x00000007
#define AVR32_USB_UECFG2_EPSIZE_128                        0x00000004
#define AVR32_USB_UECFG2_EPSIZE_16                         0x00000001
#define AVR32_USB_UECFG2_EPSIZE_256                        0x00000005
#define AVR32_USB_UECFG2_EPSIZE_32                         0x00000002
#define AVR32_USB_UECFG2_EPSIZE_512                        0x00000006
#define AVR32_USB_UECFG2_EPSIZE_64                         0x00000003
#define AVR32_USB_UECFG2_EPSIZE_8                          0x00000000
#define AVR32_USB_UECFG2_EPSIZE_MASK                       0x00000070
#define AVR32_USB_UECFG2_EPSIZE_OFFSET                              4
#define AVR32_USB_UECFG2_EPSIZE_SIZE                                3
#define AVR32_USB_UECFG2_EPTYPE                                    11
#define AVR32_USB_UECFG2_EPTYPE_BULK                       0x00000002
#define AVR32_USB_UECFG2_EPTYPE_CONTROL                    0x00000000
#define AVR32_USB_UECFG2_EPTYPE_INTERRUPT                  0x00000003
#define AVR32_USB_UECFG2_EPTYPE_ISOCHRONOUS                0x00000001
#define AVR32_USB_UECFG2_EPTYPE_MASK                       0x00001800
#define AVR32_USB_UECFG2_EPTYPE_OFFSET                             11
#define AVR32_USB_UECFG2_EPTYPE_SIZE                                2
#define AVR32_USB_UECFG2_MASK                              0xc0007b7e
#define AVR32_USB_UECFG2_NBTRANS                                   13
#define AVR32_USB_UECFG2_NBTRANS_MASK                      0x00006000
#define AVR32_USB_UECFG2_NBTRANS_OFFSET                            13
#define AVR32_USB_UECFG2_NBTRANS_SIZE                               2
#define AVR32_USB_UECFG2_RESETVALUE                        0x00002000
#define AVR32_USB_UECFG3                                   0x0000010c
#define AVR32_USB_UECFG3_ALLOC                                      1
#define AVR32_USB_UECFG3_ALLOC_MASK                        0x00000002
#define AVR32_USB_UECFG3_ALLOC_OFFSET                               1
#define AVR32_USB_UECFG3_ALLOC_SIZE                                 1
#define AVR32_USB_UECFG3_AUTOSW                                     9
#define AVR32_USB_UECFG3_AUTOSW_MASK                       0x00000200
#define AVR32_USB_UECFG3_AUTOSW_OFFSET                              9
#define AVR32_USB_UECFG3_AUTOSW_SIZE                                1
#define AVR32_USB_UECFG3_DATASIZERDWR                              30
#define AVR32_USB_UECFG3_DATASIZERDWR_MASK                 0xc0000000
#define AVR32_USB_UECFG3_DATASIZERDWR_OFFSET                       30
#define AVR32_USB_UECFG3_DATASIZERDWR_SIZE                          2
#define AVR32_USB_UECFG3_EPBK                                       2
#define AVR32_USB_UECFG3_EPBK_DOUBLE                       0x00000001
#define AVR32_USB_UECFG3_EPBK_MASK                         0x0000000c
#define AVR32_USB_UECFG3_EPBK_OFFSET                                2
#define AVR32_USB_UECFG3_EPBK_SINGLE                       0x00000000
#define AVR32_USB_UECFG3_EPBK_SIZE                                  2
#define AVR32_USB_UECFG3_EPBK_TRIPLE                       0x00000002
#define AVR32_USB_UECFG3_EPDIR                                      8
#define AVR32_USB_UECFG3_EPDIR_IN                          0x00000001
#define AVR32_USB_UECFG3_EPDIR_MASK                        0x00000100
#define AVR32_USB_UECFG3_EPDIR_OFFSET                               8
#define AVR32_USB_UECFG3_EPDIR_OUT                         0x00000000
#define AVR32_USB_UECFG3_EPDIR_SIZE                                 1
#define AVR32_USB_UECFG3_EPSIZE                                     4
#define AVR32_USB_UECFG3_EPSIZE_1024                       0x00000007
#define AVR32_USB_UECFG3_EPSIZE_128                        0x00000004
#define AVR32_USB_UECFG3_EPSIZE_16                         0x00000001
#define AVR32_USB_UECFG3_EPSIZE_256                        0x00000005
#define AVR32_USB_UECFG3_EPSIZE_32                         0x00000002
#define AVR32_USB_UECFG3_EPSIZE_512                        0x00000006
#define AVR32_USB_UECFG3_EPSIZE_64                         0x00000003
#define AVR32_USB_UECFG3_EPSIZE_8                          0x00000000
#define AVR32_USB_UECFG3_EPSIZE_MASK                       0x00000070
#define AVR32_USB_UECFG3_EPSIZE_OFFSET                              4
#define AVR32_USB_UECFG3_EPSIZE_SIZE                                3
#define AVR32_USB_UECFG3_EPTYPE                                    11
#define AVR32_USB_UECFG3_EPTYPE_BULK                       0x00000002
#define AVR32_USB_UECFG3_EPTYPE_CONTROL                    0x00000000
#define AVR32_USB_UECFG3_EPTYPE_INTERRUPT                  0x00000003
#define AVR32_USB_UECFG3_EPTYPE_ISOCHRONOUS                0x00000001
#define AVR32_USB_UECFG3_EPTYPE_MASK                       0x00001800
#define AVR32_USB_UECFG3_EPTYPE_OFFSET                             11
#define AVR32_USB_UECFG3_EPTYPE_SIZE                                2
#define AVR32_USB_UECFG3_MASK                              0xc0007b7e
#define AVR32_USB_UECFG3_NBTRANS                                   13
#define AVR32_USB_UECFG3_NBTRANS_MASK                      0x00006000
#define AVR32_USB_UECFG3_NBTRANS_OFFSET                            13
#define AVR32_USB_UECFG3_NBTRANS_SIZE                               2
#define AVR32_USB_UECFG3_RESETVALUE                        0x00002000
#define AVR32_USB_UECFG4                                   0x00000110
#define AVR32_USB_UECFG4_ALLOC                                      1
#define AVR32_USB_UECFG4_ALLOC_MASK                        0x00000002
#define AVR32_USB_UECFG4_ALLOC_OFFSET                               1
#define AVR32_USB_UECFG4_ALLOC_SIZE                                 1
#define AVR32_USB_UECFG4_AUTOSW                                     9
#define AVR32_USB_UECFG4_AUTOSW_MASK                       0x00000200
#define AVR32_USB_UECFG4_AUTOSW_OFFSET                              9
#define AVR32_USB_UECFG4_AUTOSW_SIZE                                1
#define AVR32_USB_UECFG4_DATASIZERDWR                              30
#define AVR32_USB_UECFG4_DATASIZERDWR_MASK                 0xc0000000
#define AVR32_USB_UECFG4_DATASIZERDWR_OFFSET                       30
#define AVR32_USB_UECFG4_DATASIZERDWR_SIZE                          2
#define AVR32_USB_UECFG4_EPBK                                       2
#define AVR32_USB_UECFG4_EPBK_DOUBLE                       0x00000001
#define AVR32_USB_UECFG4_EPBK_MASK                         0x0000000c
#define AVR32_USB_UECFG4_EPBK_OFFSET                                2
#define AVR32_USB_UECFG4_EPBK_SINGLE                       0x00000000
#define AVR32_USB_UECFG4_EPBK_SIZE                                  2
#define AVR32_USB_UECFG4_EPBK_TRIPLE                       0x00000002
#define AVR32_USB_UECFG4_EPDIR                                      8
#define AVR32_USB_UECFG4_EPDIR_IN                          0x00000001
#define AVR32_USB_UECFG4_EPDIR_MASK                        0x00000100
#define AVR32_USB_UECFG4_EPDIR_OFFSET                               8
#define AVR32_USB_UECFG4_EPDIR_OUT                         0x00000000
#define AVR32_USB_UECFG4_EPDIR_SIZE                                 1
#define AVR32_USB_UECFG4_EPSIZE                                     4
#define AVR32_USB_UECFG4_EPSIZE_1024                       0x00000007
#define AVR32_USB_UECFG4_EPSIZE_128                        0x00000004
#define AVR32_USB_UECFG4_EPSIZE_16                         0x00000001
#define AVR32_USB_UECFG4_EPSIZE_256                        0x00000005
#define AVR32_USB_UECFG4_EPSIZE_32                         0x00000002
#define AVR32_USB_UECFG4_EPSIZE_512                        0x00000006
#define AVR32_USB_UECFG4_EPSIZE_64                         0x00000003
#define AVR32_USB_UECFG4_EPSIZE_8                          0x00000000
#define AVR32_USB_UECFG4_EPSIZE_MASK                       0x00000070
#define AVR32_USB_UECFG4_EPSIZE_OFFSET                              4
#define AVR32_USB_UECFG4_EPSIZE_SIZE                                3
#define AVR32_USB_UECFG4_EPTYPE                                    11
#define AVR32_USB_UECFG4_EPTYPE_BULK                       0x00000002
#define AVR32_USB_UECFG4_EPTYPE_CONTROL                    0x00000000
#define AVR32_USB_UECFG4_EPTYPE_INTERRUPT                  0x00000003
#define AVR32_USB_UECFG4_EPTYPE_ISOCHRONOUS                0x00000001
#define AVR32_USB_UECFG4_EPTYPE_MASK                       0x00001800
#define AVR32_USB_UECFG4_EPTYPE_OFFSET                             11
#define AVR32_USB_UECFG4_EPTYPE_SIZE                                2
#define AVR32_USB_UECFG4_MASK                              0xc0007b7e
#define AVR32_USB_UECFG4_NBTRANS                                   13
#define AVR32_USB_UECFG4_NBTRANS_MASK                      0x00006000
#define AVR32_USB_UECFG4_NBTRANS_OFFSET                            13
#define AVR32_USB_UECFG4_NBTRANS_SIZE                               2
#define AVR32_USB_UECFG4_RESETVALUE                        0x00002000
#define AVR32_USB_UECFG5                                   0x00000114
#define AVR32_USB_UECFG5_ALLOC                                      1
#define AVR32_USB_UECFG5_ALLOC_MASK                        0x00000002
#define AVR32_USB_UECFG5_ALLOC_OFFSET                               1
#define AVR32_USB_UECFG5_ALLOC_SIZE                                 1
#define AVR32_USB_UECFG5_AUTOSW                                     9
#define AVR32_USB_UECFG5_AUTOSW_MASK                       0x00000200
#define AVR32_USB_UECFG5_AUTOSW_OFFSET                              9
#define AVR32_USB_UECFG5_AUTOSW_SIZE                                1
#define AVR32_USB_UECFG5_DATASIZERDWR                              30
#define AVR32_USB_UECFG5_DATASIZERDWR_MASK                 0xc0000000
#define AVR32_USB_UECFG5_DATASIZERDWR_OFFSET                       30
#define AVR32_USB_UECFG5_DATASIZERDWR_SIZE                          2
#define AVR32_USB_UECFG5_EPBK                                       2
#define AVR32_USB_UECFG5_EPBK_DOUBLE                       0x00000001
#define AVR32_USB_UECFG5_EPBK_MASK                         0x0000000c
#define AVR32_USB_UECFG5_EPBK_OFFSET                                2
#define AVR32_USB_UECFG5_EPBK_SINGLE                       0x00000000
#define AVR32_USB_UECFG5_EPBK_SIZE                                  2
#define AVR32_USB_UECFG5_EPBK_TRIPLE                       0x00000002
#define AVR32_USB_UECFG5_EPDIR                                      8
#define AVR32_USB_UECFG5_EPDIR_IN                          0x00000001
#define AVR32_USB_UECFG5_EPDIR_MASK                        0x00000100
#define AVR32_USB_UECFG5_EPDIR_OFFSET                               8
#define AVR32_USB_UECFG5_EPDIR_OUT                         0x00000000
#define AVR32_USB_UECFG5_EPDIR_SIZE                                 1
#define AVR32_USB_UECFG5_EPSIZE                                     4
#define AVR32_USB_UECFG5_EPSIZE_1024                       0x00000007
#define AVR32_USB_UECFG5_EPSIZE_128                        0x00000004
#define AVR32_USB_UECFG5_EPSIZE_16                         0x00000001
#define AVR32_USB_UECFG5_EPSIZE_256                        0x00000005
#define AVR32_USB_UECFG5_EPSIZE_32                         0x00000002
#define AVR32_USB_UECFG5_EPSIZE_512                        0x00000006
#define AVR32_USB_UECFG5_EPSIZE_64                         0x00000003
#define AVR32_USB_UECFG5_EPSIZE_8                          0x00000000
#define AVR32_USB_UECFG5_EPSIZE_MASK                       0x00000070
#define AVR32_USB_UECFG5_EPSIZE_OFFSET                              4
#define AVR32_USB_UECFG5_EPSIZE_SIZE                                3
#define AVR32_USB_UECFG5_EPTYPE                                    11
#define AVR32_USB_UECFG5_EPTYPE_BULK                       0x00000002
#define AVR32_USB_UECFG5_EPTYPE_CONTROL                    0x00000000
#define AVR32_USB_UECFG5_EPTYPE_INTERRUPT                  0x00000003
#define AVR32_USB_UECFG5_EPTYPE_ISOCHRONOUS                0x00000001
#define AVR32_USB_UECFG5_EPTYPE_MASK                       0x00001800
#define AVR32_USB_UECFG5_EPTYPE_OFFSET                             11
#define AVR32_USB_UECFG5_EPTYPE_SIZE                                2
#define AVR32_USB_UECFG5_MASK                              0xc0007b7e
#define AVR32_USB_UECFG5_NBTRANS                                   13
#define AVR32_USB_UECFG5_NBTRANS_MASK                      0x00006000
#define AVR32_USB_UECFG5_NBTRANS_OFFSET                            13
#define AVR32_USB_UECFG5_NBTRANS_SIZE                               2
#define AVR32_USB_UECFG5_RESETVALUE                        0x00002000
#define AVR32_USB_UECFG6                                   0x00000118
#define AVR32_USB_UECFG6_ALLOC                                      1
#define AVR32_USB_UECFG6_ALLOC_MASK                        0x00000002
#define AVR32_USB_UECFG6_ALLOC_OFFSET                               1
#define AVR32_USB_UECFG6_ALLOC_SIZE                                 1
#define AVR32_USB_UECFG6_AUTOSW                                     9
#define AVR32_USB_UECFG6_AUTOSW_MASK                       0x00000200
#define AVR32_USB_UECFG6_AUTOSW_OFFSET                              9
#define AVR32_USB_UECFG6_AUTOSW_SIZE                                1
#define AVR32_USB_UECFG6_DATASIZERDWR                              30
#define AVR32_USB_UECFG6_DATASIZERDWR_MASK                 0xc0000000
#define AVR32_USB_UECFG6_DATASIZERDWR_OFFSET                       30
#define AVR32_USB_UECFG6_DATASIZERDWR_SIZE                          2
#define AVR32_USB_UECFG6_EPBK                                       2
#define AVR32_USB_UECFG6_EPBK_DOUBLE                       0x00000001
#define AVR32_USB_UECFG6_EPBK_MASK                         0x0000000c
#define AVR32_USB_UECFG6_EPBK_OFFSET                                2
#define AVR32_USB_UECFG6_EPBK_SINGLE                       0x00000000
#define AVR32_USB_UECFG6_EPBK_SIZE                                  2
#define AVR32_USB_UECFG6_EPBK_TRIPLE                       0x00000002
#define AVR32_USB_UECFG6_EPDIR                                      8
#define AVR32_USB_UECFG6_EPDIR_IN                          0x00000001
#define AVR32_USB_UECFG6_EPDIR_MASK                        0x00000100
#define AVR32_USB_UECFG6_EPDIR_OFFSET                               8
#define AVR32_USB_UECFG6_EPDIR_OUT                         0x00000000
#define AVR32_USB_UECFG6_EPDIR_SIZE                                 1
#define AVR32_USB_UECFG6_EPSIZE                                     4
#define AVR32_USB_UECFG6_EPSIZE_1024                       0x00000007
#define AVR32_USB_UECFG6_EPSIZE_128                        0x00000004
#define AVR32_USB_UECFG6_EPSIZE_16                         0x00000001
#define AVR32_USB_UECFG6_EPSIZE_256                        0x00000005
#define AVR32_USB_UECFG6_EPSIZE_32                         0x00000002
#define AVR32_USB_UECFG6_EPSIZE_512                        0x00000006
#define AVR32_USB_UECFG6_EPSIZE_64                         0x00000003
#define AVR32_USB_UECFG6_EPSIZE_8                          0x00000000
#define AVR32_USB_UECFG6_EPSIZE_MASK                       0x00000070
#define AVR32_USB_UECFG6_EPSIZE_OFFSET                              4
#define AVR32_USB_UECFG6_EPSIZE_SIZE                                3
#define AVR32_USB_UECFG6_EPTYPE                                    11
#define AVR32_USB_UECFG6_EPTYPE_BULK                       0x00000002
#define AVR32_USB_UECFG6_EPTYPE_CONTROL                    0x00000000
#define AVR32_USB_UECFG6_EPTYPE_INTERRUPT                  0x00000003
#define AVR32_USB_UECFG6_EPTYPE_ISOCHRONOUS                0x00000001
#define AVR32_USB_UECFG6_EPTYPE_MASK                       0x00001800
#define AVR32_USB_UECFG6_EPTYPE_OFFSET                             11
#define AVR32_USB_UECFG6_EPTYPE_SIZE                                2
#define AVR32_USB_UECFG6_MASK                              0xc0007b7e
#define AVR32_USB_UECFG6_NBTRANS                                   13
#define AVR32_USB_UECFG6_NBTRANS_MASK                      0x00006000
#define AVR32_USB_UECFG6_NBTRANS_OFFSET                            13
#define AVR32_USB_UECFG6_NBTRANS_SIZE                               2
#define AVR32_USB_UECFG6_RESETVALUE                        0x00002000
#define AVR32_USB_UECFG7                                   0x0000011c
#define AVR32_USB_UECFG7_ALLOC                                      1
#define AVR32_USB_UECFG7_ALLOC_MASK                        0x00000002
#define AVR32_USB_UECFG7_ALLOC_OFFSET                               1
#define AVR32_USB_UECFG7_ALLOC_SIZE                                 1
#define AVR32_USB_UECFG7_AUTOSW                                     9
#define AVR32_USB_UECFG7_AUTOSW_MASK                       0x00000200
#define AVR32_USB_UECFG7_AUTOSW_OFFSET                              9
#define AVR32_USB_UECFG7_AUTOSW_SIZE                                1
#define AVR32_USB_UECFG7_DATASIZERDWR                              30
#define AVR32_USB_UECFG7_DATASIZERDWR_MASK                 0xc0000000
#define AVR32_USB_UECFG7_DATASIZERDWR_OFFSET                       30
#define AVR32_USB_UECFG7_DATASIZERDWR_SIZE                          2
#define AVR32_USB_UECFG7_EPBK                                       2
#define AVR32_USB_UECFG7_EPBK_DOUBLE                       0x00000001
#define AVR32_USB_UECFG7_EPBK_MASK                         0x0000000c
#define AVR32_USB_UECFG7_EPBK_OFFSET                                2
#define AVR32_USB_UECFG7_EPBK_SINGLE                       0x00000000
#define AVR32_USB_UECFG7_EPBK_SIZE                                  2
#define AVR32_USB_UECFG7_EPBK_TRIPLE                       0x00000002
#define AVR32_USB_UECFG7_EPDIR                                      8
#define AVR32_USB_UECFG7_EPDIR_IN                          0x00000001
#define AVR32_USB_UECFG7_EPDIR_MASK                        0x00000100
#define AVR32_USB_UECFG7_EPDIR_OFFSET                               8
#define AVR32_USB_UECFG7_EPDIR_OUT                         0x00000000
#define AVR32_USB_UECFG7_EPDIR_SIZE                                 1
#define AVR32_USB_UECFG7_EPSIZE                                     4
#define AVR32_USB_UECFG7_EPSIZE_1024                       0x00000007
#define AVR32_USB_UECFG7_EPSIZE_128                        0x00000004
#define AVR32_USB_UECFG7_EPSIZE_16                         0x00000001
#define AVR32_USB_UECFG7_EPSIZE_256                        0x00000005
#define AVR32_USB_UECFG7_EPSIZE_32                         0x00000002
#define AVR32_USB_UECFG7_EPSIZE_512                        0x00000006
#define AVR32_USB_UECFG7_EPSIZE_64                         0x00000003
#define AVR32_USB_UECFG7_EPSIZE_8                          0x00000000
#define AVR32_USB_UECFG7_EPSIZE_MASK                       0x00000070
#define AVR32_USB_UECFG7_EPSIZE_OFFSET                              4
#define AVR32_USB_UECFG7_EPSIZE_SIZE                                3
#define AVR32_USB_UECFG7_EPTYPE                                    11
#define AVR32_USB_UECFG7_EPTYPE_BULK                       0x00000002
#define AVR32_USB_UECFG7_EPTYPE_CONTROL                    0x00000000
#define AVR32_USB_UECFG7_EPTYPE_INTERRUPT                  0x00000003
#define AVR32_USB_UECFG7_EPTYPE_ISOCHRONOUS                0x00000001
#define AVR32_USB_UECFG7_EPTYPE_MASK                       0x00001800
#define AVR32_USB_UECFG7_EPTYPE_OFFSET                             11
#define AVR32_USB_UECFG7_EPTYPE_SIZE                                2
#define AVR32_USB_UECFG7_MASK                              0xc0007b7e
#define AVR32_USB_UECFG7_NBTRANS                                   13
#define AVR32_USB_UECFG7_NBTRANS_MASK                      0x00006000
#define AVR32_USB_UECFG7_NBTRANS_OFFSET                            13
#define AVR32_USB_UECFG7_NBTRANS_SIZE                               2
#define AVR32_USB_UECFG7_RESETVALUE                        0x00002000
#define AVR32_USB_UECON0                                   0x000001c0
#define AVR32_USB_UECON0CLR                                0x00000220
#define AVR32_USB_UECON0CLR_DATAXEC                                 9
#define AVR32_USB_UECON0CLR_DATAXEC_MASK                   0x00000200
#define AVR32_USB_UECON0CLR_DATAXEC_OFFSET                          9
#define AVR32_USB_UECON0CLR_DATAXEC_SIZE                            1
#define AVR32_USB_UECON0CLR_EPDISHDMAC                             16
#define AVR32_USB_UECON0CLR_EPDISHDMAC_MASK                0x00010000
#define AVR32_USB_UECON0CLR_EPDISHDMAC_OFFSET                      16
#define AVR32_USB_UECON0CLR_EPDISHDMAC_SIZE                         1
#define AVR32_USB_UECON0CLR_ERRORTRANSEC                           10
#define AVR32_USB_UECON0CLR_ERRORTRANSEC_MASK              0x00000400
#define AVR32_USB_UECON0CLR_ERRORTRANSEC_OFFSET                    10
#define AVR32_USB_UECON0CLR_ERRORTRANSEC_SIZE                       1
#define AVR32_USB_UECON0CLR_FIFOCONC                               14
#define AVR32_USB_UECON0CLR_FIFOCONC_MASK                  0x00004000
#define AVR32_USB_UECON0CLR_FIFOCONC_OFFSET                        14
#define AVR32_USB_UECON0CLR_FIFOCONC_SIZE                           1
#define AVR32_USB_UECON0CLR_MASK                           0x000b57ff
#define AVR32_USB_UECON0CLR_MDATAEC                                 8
#define AVR32_USB_UECON0CLR_MDATAEC_MASK                   0x00000100
#define AVR32_USB_UECON0CLR_MDATAEC_OFFSET                          8
#define AVR32_USB_UECON0CLR_MDATAEC_SIZE                            1
#define AVR32_USB_UECON0CLR_NAKINEC                                 4
#define AVR32_USB_UECON0CLR_NAKINEC_MASK                   0x00000010
#define AVR32_USB_UECON0CLR_NAKINEC_OFFSET                          4
#define AVR32_USB_UECON0CLR_NAKINEC_SIZE                            1
#define AVR32_USB_UECON0CLR_NAKOUTEC                                3
#define AVR32_USB_UECON0CLR_NAKOUTEC_MASK                  0x00000008
#define AVR32_USB_UECON0CLR_NAKOUTEC_OFFSET                         3
#define AVR32_USB_UECON0CLR_NAKOUTEC_SIZE                           1
#define AVR32_USB_UECON0CLR_NBUSYBKEC                              12
#define AVR32_USB_UECON0CLR_NBUSYBKEC_MASK                 0x00001000
#define AVR32_USB_UECON0CLR_NBUSYBKEC_OFFSET                       12
#define AVR32_USB_UECON0CLR_NBUSYBKEC_SIZE                          1
#define AVR32_USB_UECON0CLR_NYETDISC                               17
#define AVR32_USB_UECON0CLR_NYETDISC_MASK                  0x00020000
#define AVR32_USB_UECON0CLR_NYETDISC_OFFSET                        17
#define AVR32_USB_UECON0CLR_NYETDISC_SIZE                           1
#define AVR32_USB_UECON0CLR_OVERFEC                                 5
#define AVR32_USB_UECON0CLR_OVERFEC_MASK                   0x00000020
#define AVR32_USB_UECON0CLR_OVERFEC_OFFSET                          5
#define AVR32_USB_UECON0CLR_OVERFEC_SIZE                            1
#define AVR32_USB_UECON0CLR_RESETVALUE                     0x00000000
#define AVR32_USB_UECON0CLR_RXOUTEC                                 1
#define AVR32_USB_UECON0CLR_RXOUTEC_MASK                   0x00000002
#define AVR32_USB_UECON0CLR_RXOUTEC_OFFSET                          1
#define AVR32_USB_UECON0CLR_RXOUTEC_SIZE                            1
#define AVR32_USB_UECON0CLR_RXSTPEC                                 2
#define AVR32_USB_UECON0CLR_RXSTPEC_MASK                   0x00000004
#define AVR32_USB_UECON0CLR_RXSTPEC_OFFSET                          2
#define AVR32_USB_UECON0CLR_RXSTPEC_SIZE                            1
#define AVR32_USB_UECON0CLR_SHORTPACKETEC                           7
#define AVR32_USB_UECON0CLR_SHORTPACKETEC_MASK             0x00000080
#define AVR32_USB_UECON0CLR_SHORTPACKETEC_OFFSET                    7
#define AVR32_USB_UECON0CLR_SHORTPACKETEC_SIZE                      1
#define AVR32_USB_UECON0CLR_STALLEDEC                               6
#define AVR32_USB_UECON0CLR_STALLEDEC_MASK                 0x00000040
#define AVR32_USB_UECON0CLR_STALLEDEC_OFFSET                        6
#define AVR32_USB_UECON0CLR_STALLEDEC_SIZE                          1
#define AVR32_USB_UECON0CLR_STALLRQC                               19
#define AVR32_USB_UECON0CLR_STALLRQC_MASK                  0x00080000
#define AVR32_USB_UECON0CLR_STALLRQC_OFFSET                        19
#define AVR32_USB_UECON0CLR_STALLRQC_SIZE                           1
#define AVR32_USB_UECON0CLR_TXINEC                                  0
#define AVR32_USB_UECON0CLR_TXINEC_MASK                    0x00000001
#define AVR32_USB_UECON0CLR_TXINEC_OFFSET                           0
#define AVR32_USB_UECON0CLR_TXINEC_SIZE                             1
#define AVR32_USB_UECON0SET                                0x000001f0
#define AVR32_USB_UECON0SET_DATAXES                                 9
#define AVR32_USB_UECON0SET_DATAXES_MASK                   0x00000200
#define AVR32_USB_UECON0SET_DATAXES_OFFSET                          9
#define AVR32_USB_UECON0SET_DATAXES_SIZE                            1
#define AVR32_USB_UECON0SET_EPDISHDMAS                             16
#define AVR32_USB_UECON0SET_EPDISHDMAS_MASK                0x00010000
#define AVR32_USB_UECON0SET_EPDISHDMAS_OFFSET                      16
#define AVR32_USB_UECON0SET_EPDISHDMAS_SIZE                         1
#define AVR32_USB_UECON0SET_ERRORTRANSES                           10
#define AVR32_USB_UECON0SET_ERRORTRANSES_MASK              0x00000400
#define AVR32_USB_UECON0SET_ERRORTRANSES_OFFSET                    10
#define AVR32_USB_UECON0SET_ERRORTRANSES_SIZE                       1
#define AVR32_USB_UECON0SET_KILLBKS                                13
#define AVR32_USB_UECON0SET_KILLBKS_MASK                   0x00002000
#define AVR32_USB_UECON0SET_KILLBKS_OFFSET                         13
#define AVR32_USB_UECON0SET_KILLBKS_SIZE                            1
#define AVR32_USB_UECON0SET_MASK                           0x000f37ff
#define AVR32_USB_UECON0SET_MDATAES                                 8
#define AVR32_USB_UECON0SET_MDATAES_MASK                   0x00000100
#define AVR32_USB_UECON0SET_MDATAES_OFFSET                          8
#define AVR32_USB_UECON0SET_MDATAES_SIZE                            1
#define AVR32_USB_UECON0SET_NAKINES                                 4
#define AVR32_USB_UECON0SET_NAKINES_MASK                   0x00000010
#define AVR32_USB_UECON0SET_NAKINES_OFFSET                          4
#define AVR32_USB_UECON0SET_NAKINES_SIZE                            1
#define AVR32_USB_UECON0SET_NAKOUTES                                3
#define AVR32_USB_UECON0SET_NAKOUTES_MASK                  0x00000008
#define AVR32_USB_UECON0SET_NAKOUTES_OFFSET                         3
#define AVR32_USB_UECON0SET_NAKOUTES_SIZE                           1
#define AVR32_USB_UECON0SET_NBUSYBKES                              12
#define AVR32_USB_UECON0SET_NBUSYBKES_MASK                 0x00001000
#define AVR32_USB_UECON0SET_NBUSYBKES_OFFSET                       12
#define AVR32_USB_UECON0SET_NBUSYBKES_SIZE                          1
#define AVR32_USB_UECON0SET_NYETDISS                               17
#define AVR32_USB_UECON0SET_NYETDISS_MASK                  0x00020000
#define AVR32_USB_UECON0SET_NYETDISS_OFFSET                        17
#define AVR32_USB_UECON0SET_NYETDISS_SIZE                           1
#define AVR32_USB_UECON0SET_OVERFES                                 5
#define AVR32_USB_UECON0SET_OVERFES_MASK                   0x00000020
#define AVR32_USB_UECON0SET_OVERFES_OFFSET                          5
#define AVR32_USB_UECON0SET_OVERFES_SIZE                            1
#define AVR32_USB_UECON0SET_RESETVALUE                     0x00000000
#define AVR32_USB_UECON0SET_RSTDTS                                 18
#define AVR32_USB_UECON0SET_RSTDTS_MASK                    0x00040000
#define AVR32_USB_UECON0SET_RSTDTS_OFFSET                          18
#define AVR32_USB_UECON0SET_RSTDTS_SIZE                             1
#define AVR32_USB_UECON0SET_RXOUTES                                 1
#define AVR32_USB_UECON0SET_RXOUTES_MASK                   0x00000002
#define AVR32_USB_UECON0SET_RXOUTES_OFFSET                          1
#define AVR32_USB_UECON0SET_RXOUTES_SIZE                            1
#define AVR32_USB_UECON0SET_RXSTPES                                 2
#define AVR32_USB_UECON0SET_RXSTPES_MASK                   0x00000004
#define AVR32_USB_UECON0SET_RXSTPES_OFFSET                          2
#define AVR32_USB_UECON0SET_RXSTPES_SIZE                            1
#define AVR32_USB_UECON0SET_SHORTPACKETES                           7
#define AVR32_USB_UECON0SET_SHORTPACKETES_MASK             0x00000080
#define AVR32_USB_UECON0SET_SHORTPACKETES_OFFSET                    7
#define AVR32_USB_UECON0SET_SHORTPACKETES_SIZE                      1
#define AVR32_USB_UECON0SET_STALLEDES                               6
#define AVR32_USB_UECON0SET_STALLEDES_MASK                 0x00000040
#define AVR32_USB_UECON0SET_STALLEDES_OFFSET                        6
#define AVR32_USB_UECON0SET_STALLEDES_SIZE                          1
#define AVR32_USB_UECON0SET_STALLRQS                               19
#define AVR32_USB_UECON0SET_STALLRQS_MASK                  0x00080000
#define AVR32_USB_UECON0SET_STALLRQS_OFFSET                        19
#define AVR32_USB_UECON0SET_STALLRQS_SIZE                           1
#define AVR32_USB_UECON0SET_TXINES                                  0
#define AVR32_USB_UECON0SET_TXINES_MASK                    0x00000001
#define AVR32_USB_UECON0SET_TXINES_OFFSET                           0
#define AVR32_USB_UECON0SET_TXINES_SIZE                             1
#define AVR32_USB_UECON0_DATAXE                                     9
#define AVR32_USB_UECON0_DATAXE_MASK                       0x00000200
#define AVR32_USB_UECON0_DATAXE_OFFSET                              9
#define AVR32_USB_UECON0_DATAXE_SIZE                                1
#define AVR32_USB_UECON0_EPDISHDMA                                 16
#define AVR32_USB_UECON0_EPDISHDMA_MASK                    0x00010000
#define AVR32_USB_UECON0_EPDISHDMA_OFFSET                          16
#define AVR32_USB_UECON0_EPDISHDMA_SIZE                             1
#define AVR32_USB_UECON0_ERRORTRANSE                               10
#define AVR32_USB_UECON0_ERRORTRANSE_MASK                  0x00000400
#define AVR32_USB_UECON0_ERRORTRANSE_OFFSET                        10
#define AVR32_USB_UECON0_ERRORTRANSE_SIZE                           1
#define AVR32_USB_UECON0_FIFOCON                                   14
#define AVR32_USB_UECON0_FIFOCON_MASK                      0x00004000
#define AVR32_USB_UECON0_FIFOCON_OFFSET                            14
#define AVR32_USB_UECON0_FIFOCON_SIZE                               1
#define AVR32_USB_UECON0_KILLBK                                    13
#define AVR32_USB_UECON0_KILLBK_MASK                       0x00002000
#define AVR32_USB_UECON0_KILLBK_OFFSET                             13
#define AVR32_USB_UECON0_KILLBK_SIZE                                1
#define AVR32_USB_UECON0_MASK                              0x000f77ff
#define AVR32_USB_UECON0_MDATAE                                     8
#define AVR32_USB_UECON0_MDATAE_MASK                       0x00000100
#define AVR32_USB_UECON0_MDATAE_OFFSET                              8
#define AVR32_USB_UECON0_MDATAE_SIZE                                1
#define AVR32_USB_UECON0_NAKINE                                     4
#define AVR32_USB_UECON0_NAKINE_MASK                       0x00000010
#define AVR32_USB_UECON0_NAKINE_OFFSET                              4
#define AVR32_USB_UECON0_NAKINE_SIZE                                1
#define AVR32_USB_UECON0_NAKOUTE                                    3
#define AVR32_USB_UECON0_NAKOUTE_MASK                      0x00000008
#define AVR32_USB_UECON0_NAKOUTE_OFFSET                             3
#define AVR32_USB_UECON0_NAKOUTE_SIZE                               1
#define AVR32_USB_UECON0_NBUSYBKE                                  12
#define AVR32_USB_UECON0_NBUSYBKE_MASK                     0x00001000
#define AVR32_USB_UECON0_NBUSYBKE_OFFSET                           12
#define AVR32_USB_UECON0_NBUSYBKE_SIZE                              1
#define AVR32_USB_UECON0_NYETDIS                                   17
#define AVR32_USB_UECON0_NYETDIS_MASK                      0x00020000
#define AVR32_USB_UECON0_NYETDIS_OFFSET                            17
#define AVR32_USB_UECON0_NYETDIS_SIZE                               1
#define AVR32_USB_UECON0_OVERFE                                     5
#define AVR32_USB_UECON0_OVERFE_MASK                       0x00000020
#define AVR32_USB_UECON0_OVERFE_OFFSET                              5
#define AVR32_USB_UECON0_OVERFE_SIZE                                1
#define AVR32_USB_UECON0_RESETVALUE                        0x00000000
#define AVR32_USB_UECON0_RSTDT                                     18
#define AVR32_USB_UECON0_RSTDT_MASK                        0x00040000
#define AVR32_USB_UECON0_RSTDT_OFFSET                              18
#define AVR32_USB_UECON0_RSTDT_SIZE                                 1
#define AVR32_USB_UECON0_RXOUTE                                     1
#define AVR32_USB_UECON0_RXOUTE_MASK                       0x00000002
#define AVR32_USB_UECON0_RXOUTE_OFFSET                              1
#define AVR32_USB_UECON0_RXOUTE_SIZE                                1
#define AVR32_USB_UECON0_RXSTPE                                     2
#define AVR32_USB_UECON0_RXSTPE_MASK                       0x00000004
#define AVR32_USB_UECON0_RXSTPE_OFFSET                              2
#define AVR32_USB_UECON0_RXSTPE_SIZE                                1
#define AVR32_USB_UECON0_SHORTPACKETE                               7
#define AVR32_USB_UECON0_SHORTPACKETE_MASK                 0x00000080
#define AVR32_USB_UECON0_SHORTPACKETE_OFFSET                        7
#define AVR32_USB_UECON0_SHORTPACKETE_SIZE                          1
#define AVR32_USB_UECON0_STALLEDE                                   6
#define AVR32_USB_UECON0_STALLEDE_MASK                     0x00000040
#define AVR32_USB_UECON0_STALLEDE_OFFSET                            6
#define AVR32_USB_UECON0_STALLEDE_SIZE                              1
#define AVR32_USB_UECON0_STALLRQ                                   19
#define AVR32_USB_UECON0_STALLRQ_MASK                      0x00080000
#define AVR32_USB_UECON0_STALLRQ_OFFSET                            19
#define AVR32_USB_UECON0_STALLRQ_SIZE                               1
#define AVR32_USB_UECON0_TXINE                                      0
#define AVR32_USB_UECON0_TXINE_MASK                        0x00000001
#define AVR32_USB_UECON0_TXINE_OFFSET                               0
#define AVR32_USB_UECON0_TXINE_SIZE                                 1
#define AVR32_USB_UECON1                                   0x000001c4
#define AVR32_USB_UECON1CLR                                0x00000224
#define AVR32_USB_UECON1CLR_DATAXEC                                 9
#define AVR32_USB_UECON1CLR_DATAXEC_MASK                   0x00000200
#define AVR32_USB_UECON1CLR_DATAXEC_OFFSET                          9
#define AVR32_USB_UECON1CLR_DATAXEC_SIZE                            1
#define AVR32_USB_UECON1CLR_EPDISHDMAC                             16
#define AVR32_USB_UECON1CLR_EPDISHDMAC_MASK                0x00010000
#define AVR32_USB_UECON1CLR_EPDISHDMAC_OFFSET                      16
#define AVR32_USB_UECON1CLR_EPDISHDMAC_SIZE                         1
#define AVR32_USB_UECON1CLR_ERRORTRANSEC                           10
#define AVR32_USB_UECON1CLR_ERRORTRANSEC_MASK              0x00000400
#define AVR32_USB_UECON1CLR_ERRORTRANSEC_OFFSET                    10
#define AVR32_USB_UECON1CLR_ERRORTRANSEC_SIZE                       1
#define AVR32_USB_UECON1CLR_FIFOCONC                               14
#define AVR32_USB_UECON1CLR_FIFOCONC_MASK                  0x00004000
#define AVR32_USB_UECON1CLR_FIFOCONC_OFFSET                        14
#define AVR32_USB_UECON1CLR_FIFOCONC_SIZE                           1
#define AVR32_USB_UECON1CLR_MASK                           0x000b57ff
#define AVR32_USB_UECON1CLR_MDATAEC                                 8
#define AVR32_USB_UECON1CLR_MDATAEC_MASK                   0x00000100
#define AVR32_USB_UECON1CLR_MDATAEC_OFFSET                          8
#define AVR32_USB_UECON1CLR_MDATAEC_SIZE                            1
#define AVR32_USB_UECON1CLR_NAKINEC                                 4
#define AVR32_USB_UECON1CLR_NAKINEC_MASK                   0x00000010
#define AVR32_USB_UECON1CLR_NAKINEC_OFFSET                          4
#define AVR32_USB_UECON1CLR_NAKINEC_SIZE                            1
#define AVR32_USB_UECON1CLR_NAKOUTEC                                3
#define AVR32_USB_UECON1CLR_NAKOUTEC_MASK                  0x00000008
#define AVR32_USB_UECON1CLR_NAKOUTEC_OFFSET                         3
#define AVR32_USB_UECON1CLR_NAKOUTEC_SIZE                           1
#define AVR32_USB_UECON1CLR_NBUSYBKEC                              12
#define AVR32_USB_UECON1CLR_NBUSYBKEC_MASK                 0x00001000
#define AVR32_USB_UECON1CLR_NBUSYBKEC_OFFSET                       12
#define AVR32_USB_UECON1CLR_NBUSYBKEC_SIZE                          1
#define AVR32_USB_UECON1CLR_NYETDISC                               17
#define AVR32_USB_UECON1CLR_NYETDISC_MASK                  0x00020000
#define AVR32_USB_UECON1CLR_NYETDISC_OFFSET                        17
#define AVR32_USB_UECON1CLR_NYETDISC_SIZE                           1
#define AVR32_USB_UECON1CLR_OVERFEC                                 5
#define AVR32_USB_UECON1CLR_OVERFEC_MASK                   0x00000020
#define AVR32_USB_UECON1CLR_OVERFEC_OFFSET                          5
#define AVR32_USB_UECON1CLR_OVERFEC_SIZE                            1
#define AVR32_USB_UECON1CLR_RESETVALUE                     0x00000000
#define AVR32_USB_UECON1CLR_RXOUTEC                                 1
#define AVR32_USB_UECON1CLR_RXOUTEC_MASK                   0x00000002
#define AVR32_USB_UECON1CLR_RXOUTEC_OFFSET                          1
#define AVR32_USB_UECON1CLR_RXOUTEC_SIZE                            1
#define AVR32_USB_UECON1CLR_RXSTPEC                                 2
#define AVR32_USB_UECON1CLR_RXSTPEC_MASK                   0x00000004
#define AVR32_USB_UECON1CLR_RXSTPEC_OFFSET                          2
#define AVR32_USB_UECON1CLR_RXSTPEC_SIZE                            1
#define AVR32_USB_UECON1CLR_SHORTPACKETEC                           7
#define AVR32_USB_UECON1CLR_SHORTPACKETEC_MASK             0x00000080
#define AVR32_USB_UECON1CLR_SHORTPACKETEC_OFFSET                    7
#define AVR32_USB_UECON1CLR_SHORTPACKETEC_SIZE                      1
#define AVR32_USB_UECON1CLR_STALLEDEC                               6
#define AVR32_USB_UECON1CLR_STALLEDEC_MASK                 0x00000040
#define AVR32_USB_UECON1CLR_STALLEDEC_OFFSET                        6
#define AVR32_USB_UECON1CLR_STALLEDEC_SIZE                          1
#define AVR32_USB_UECON1CLR_STALLRQC                               19
#define AVR32_USB_UECON1CLR_STALLRQC_MASK                  0x00080000
#define AVR32_USB_UECON1CLR_STALLRQC_OFFSET                        19
#define AVR32_USB_UECON1CLR_STALLRQC_SIZE                           1
#define AVR32_USB_UECON1CLR_TXINEC                                  0
#define AVR32_USB_UECON1CLR_TXINEC_MASK                    0x00000001
#define AVR32_USB_UECON1CLR_TXINEC_OFFSET                           0
#define AVR32_USB_UECON1CLR_TXINEC_SIZE                             1
#define AVR32_USB_UECON1SET                                0x000001f4
#define AVR32_USB_UECON1SET_DATAXES                                 9
#define AVR32_USB_UECON1SET_DATAXES_MASK                   0x00000200
#define AVR32_USB_UECON1SET_DATAXES_OFFSET                          9
#define AVR32_USB_UECON1SET_DATAXES_SIZE                            1
#define AVR32_USB_UECON1SET_EPDISHDMAS                             16
#define AVR32_USB_UECON1SET_EPDISHDMAS_MASK                0x00010000
#define AVR32_USB_UECON1SET_EPDISHDMAS_OFFSET                      16
#define AVR32_USB_UECON1SET_EPDISHDMAS_SIZE                         1
#define AVR32_USB_UECON1SET_ERRORTRANSES                           10
#define AVR32_USB_UECON1SET_ERRORTRANSES_MASK              0x00000400
#define AVR32_USB_UECON1SET_ERRORTRANSES_OFFSET                    10
#define AVR32_USB_UECON1SET_ERRORTRANSES_SIZE                       1
#define AVR32_USB_UECON1SET_KILLBKS                                13
#define AVR32_USB_UECON1SET_KILLBKS_MASK                   0x00002000
#define AVR32_USB_UECON1SET_KILLBKS_OFFSET                         13
#define AVR32_USB_UECON1SET_KILLBKS_SIZE                            1
#define AVR32_USB_UECON1SET_MASK                           0x000f37ff
#define AVR32_USB_UECON1SET_MDATAES                                 8
#define AVR32_USB_UECON1SET_MDATAES_MASK                   0x00000100
#define AVR32_USB_UECON1SET_MDATAES_OFFSET                          8
#define AVR32_USB_UECON1SET_MDATAES_SIZE                            1
#define AVR32_USB_UECON1SET_NAKINES                                 4
#define AVR32_USB_UECON1SET_NAKINES_MASK                   0x00000010
#define AVR32_USB_UECON1SET_NAKINES_OFFSET                          4
#define AVR32_USB_UECON1SET_NAKINES_SIZE                            1
#define AVR32_USB_UECON1SET_NAKOUTES                                3
#define AVR32_USB_UECON1SET_NAKOUTES_MASK                  0x00000008
#define AVR32_USB_UECON1SET_NAKOUTES_OFFSET                         3
#define AVR32_USB_UECON1SET_NAKOUTES_SIZE                           1
#define AVR32_USB_UECON1SET_NBUSYBKES                              12
#define AVR32_USB_UECON1SET_NBUSYBKES_MASK                 0x00001000
#define AVR32_USB_UECON1SET_NBUSYBKES_OFFSET                       12
#define AVR32_USB_UECON1SET_NBUSYBKES_SIZE                          1
#define AVR32_USB_UECON1SET_NYETDISS                               17
#define AVR32_USB_UECON1SET_NYETDISS_MASK                  0x00020000
#define AVR32_USB_UECON1SET_NYETDISS_OFFSET                        17
#define AVR32_USB_UECON1SET_NYETDISS_SIZE                           1
#define AVR32_USB_UECON1SET_OVERFES                                 5
#define AVR32_USB_UECON1SET_OVERFES_MASK                   0x00000020
#define AVR32_USB_UECON1SET_OVERFES_OFFSET                          5
#define AVR32_USB_UECON1SET_OVERFES_SIZE                            1
#define AVR32_USB_UECON1SET_RESETVALUE                     0x00000000
#define AVR32_USB_UECON1SET_RSTDTS                                 18
#define AVR32_USB_UECON1SET_RSTDTS_MASK                    0x00040000
#define AVR32_USB_UECON1SET_RSTDTS_OFFSET                          18
#define AVR32_USB_UECON1SET_RSTDTS_SIZE                             1
#define AVR32_USB_UECON1SET_RXOUTES                                 1
#define AVR32_USB_UECON1SET_RXOUTES_MASK                   0x00000002
#define AVR32_USB_UECON1SET_RXOUTES_OFFSET                          1
#define AVR32_USB_UECON1SET_RXOUTES_SIZE                            1
#define AVR32_USB_UECON1SET_RXSTPES                                 2
#define AVR32_USB_UECON1SET_RXSTPES_MASK                   0x00000004
#define AVR32_USB_UECON1SET_RXSTPES_OFFSET                          2
#define AVR32_USB_UECON1SET_RXSTPES_SIZE                            1
#define AVR32_USB_UECON1SET_SHORTPACKETES                           7
#define AVR32_USB_UECON1SET_SHORTPACKETES_MASK             0x00000080
#define AVR32_USB_UECON1SET_SHORTPACKETES_OFFSET                    7
#define AVR32_USB_UECON1SET_SHORTPACKETES_SIZE                      1
#define AVR32_USB_UECON1SET_STALLEDES                               6
#define AVR32_USB_UECON1SET_STALLEDES_MASK                 0x00000040
#define AVR32_USB_UECON1SET_STALLEDES_OFFSET                        6
#define AVR32_USB_UECON1SET_STALLEDES_SIZE                          1
#define AVR32_USB_UECON1SET_STALLRQS                               19
#define AVR32_USB_UECON1SET_STALLRQS_MASK                  0x00080000
#define AVR32_USB_UECON1SET_STALLRQS_OFFSET                        19
#define AVR32_USB_UECON1SET_STALLRQS_SIZE                           1
#define AVR32_USB_UECON1SET_TXINES                                  0
#define AVR32_USB_UECON1SET_TXINES_MASK                    0x00000001
#define AVR32_USB_UECON1SET_TXINES_OFFSET                           0
#define AVR32_USB_UECON1SET_TXINES_SIZE                             1
#define AVR32_USB_UECON1_DATAXE                                     9
#define AVR32_USB_UECON1_DATAXE_MASK                       0x00000200
#define AVR32_USB_UECON1_DATAXE_OFFSET                              9
#define AVR32_USB_UECON1_DATAXE_SIZE                                1
#define AVR32_USB_UECON1_EPDISHDMA                                 16
#define AVR32_USB_UECON1_EPDISHDMA_MASK                    0x00010000
#define AVR32_USB_UECON1_EPDISHDMA_OFFSET                          16
#define AVR32_USB_UECON1_EPDISHDMA_SIZE                             1
#define AVR32_USB_UECON1_ERRORTRANSE                               10
#define AVR32_USB_UECON1_ERRORTRANSE_MASK                  0x00000400
#define AVR32_USB_UECON1_ERRORTRANSE_OFFSET                        10
#define AVR32_USB_UECON1_ERRORTRANSE_SIZE                           1
#define AVR32_USB_UECON1_FIFOCON                                   14
#define AVR32_USB_UECON1_FIFOCON_MASK                      0x00004000
#define AVR32_USB_UECON1_FIFOCON_OFFSET                            14
#define AVR32_USB_UECON1_FIFOCON_SIZE                               1
#define AVR32_USB_UECON1_KILLBK                                    13
#define AVR32_USB_UECON1_KILLBK_MASK                       0x00002000
#define AVR32_USB_UECON1_KILLBK_OFFSET                             13
#define AVR32_USB_UECON1_KILLBK_SIZE                                1
#define AVR32_USB_UECON1_MASK                              0x000f77ff
#define AVR32_USB_UECON1_MDATAE                                     8
#define AVR32_USB_UECON1_MDATAE_MASK                       0x00000100
#define AVR32_USB_UECON1_MDATAE_OFFSET                              8
#define AVR32_USB_UECON1_MDATAE_SIZE                                1
#define AVR32_USB_UECON1_NAKINE                                     4
#define AVR32_USB_UECON1_NAKINE_MASK                       0x00000010
#define AVR32_USB_UECON1_NAKINE_OFFSET                              4
#define AVR32_USB_UECON1_NAKINE_SIZE                                1
#define AVR32_USB_UECON1_NAKOUTE                                    3
#define AVR32_USB_UECON1_NAKOUTE_MASK                      0x00000008
#define AVR32_USB_UECON1_NAKOUTE_OFFSET                             3
#define AVR32_USB_UECON1_NAKOUTE_SIZE                               1
#define AVR32_USB_UECON1_NBUSYBKE                                  12
#define AVR32_USB_UECON1_NBUSYBKE_MASK                     0x00001000
#define AVR32_USB_UECON1_NBUSYBKE_OFFSET                           12
#define AVR32_USB_UECON1_NBUSYBKE_SIZE                              1
#define AVR32_USB_UECON1_NYETDIS                                   17
#define AVR32_USB_UECON1_NYETDIS_MASK                      0x00020000
#define AVR32_USB_UECON1_NYETDIS_OFFSET                            17
#define AVR32_USB_UECON1_NYETDIS_SIZE                               1
#define AVR32_USB_UECON1_OVERFE                                     5
#define AVR32_USB_UECON1_OVERFE_MASK                       0x00000020
#define AVR32_USB_UECON1_OVERFE_OFFSET                              5
#define AVR32_USB_UECON1_OVERFE_SIZE                                1
#define AVR32_USB_UECON1_RESETVALUE                        0x00000000
#define AVR32_USB_UECON1_RSTDT                                     18
#define AVR32_USB_UECON1_RSTDT_MASK                        0x00040000
#define AVR32_USB_UECON1_RSTDT_OFFSET                              18
#define AVR32_USB_UECON1_RSTDT_SIZE                                 1
#define AVR32_USB_UECON1_RXOUTE                                     1
#define AVR32_USB_UECON1_RXOUTE_MASK                       0x00000002
#define AVR32_USB_UECON1_RXOUTE_OFFSET                              1
#define AVR32_USB_UECON1_RXOUTE_SIZE                                1
#define AVR32_USB_UECON1_RXSTPE                                     2
#define AVR32_USB_UECON1_RXSTPE_MASK                       0x00000004
#define AVR32_USB_UECON1_RXSTPE_OFFSET                              2
#define AVR32_USB_UECON1_RXSTPE_SIZE                                1
#define AVR32_USB_UECON1_SHORTPACKETE                               7
#define AVR32_USB_UECON1_SHORTPACKETE_MASK                 0x00000080
#define AVR32_USB_UECON1_SHORTPACKETE_OFFSET                        7
#define AVR32_USB_UECON1_SHORTPACKETE_SIZE                          1
#define AVR32_USB_UECON1_STALLEDE                                   6
#define AVR32_USB_UECON1_STALLEDE_MASK                     0x00000040
#define AVR32_USB_UECON1_STALLEDE_OFFSET                            6
#define AVR32_USB_UECON1_STALLEDE_SIZE                              1
#define AVR32_USB_UECON1_STALLRQ                                   19
#define AVR32_USB_UECON1_STALLRQ_MASK                      0x00080000
#define AVR32_USB_UECON1_STALLRQ_OFFSET                            19
#define AVR32_USB_UECON1_STALLRQ_SIZE                               1
#define AVR32_USB_UECON1_TXINE                                      0
#define AVR32_USB_UECON1_TXINE_MASK                        0x00000001
#define AVR32_USB_UECON1_TXINE_OFFSET                               0
#define AVR32_USB_UECON1_TXINE_SIZE                                 1
#define AVR32_USB_UECON2                                   0x000001c8
#define AVR32_USB_UECON2CLR                                0x00000228
#define AVR32_USB_UECON2CLR_DATAXEC                                 9
#define AVR32_USB_UECON2CLR_DATAXEC_MASK                   0x00000200
#define AVR32_USB_UECON2CLR_DATAXEC_OFFSET                          9
#define AVR32_USB_UECON2CLR_DATAXEC_SIZE                            1
#define AVR32_USB_UECON2CLR_EPDISHDMAC                             16
#define AVR32_USB_UECON2CLR_EPDISHDMAC_MASK                0x00010000
#define AVR32_USB_UECON2CLR_EPDISHDMAC_OFFSET                      16
#define AVR32_USB_UECON2CLR_EPDISHDMAC_SIZE                         1
#define AVR32_USB_UECON2CLR_ERRORTRANSEC                           10
#define AVR32_USB_UECON2CLR_ERRORTRANSEC_MASK              0x00000400
#define AVR32_USB_UECON2CLR_ERRORTRANSEC_OFFSET                    10
#define AVR32_USB_UECON2CLR_ERRORTRANSEC_SIZE                       1
#define AVR32_USB_UECON2CLR_FIFOCONC                               14
#define AVR32_USB_UECON2CLR_FIFOCONC_MASK                  0x00004000
#define AVR32_USB_UECON2CLR_FIFOCONC_OFFSET                        14
#define AVR32_USB_UECON2CLR_FIFOCONC_SIZE                           1
#define AVR32_USB_UECON2CLR_MASK                           0x000b57ff
#define AVR32_USB_UECON2CLR_MDATAEC                                 8
#define AVR32_USB_UECON2CLR_MDATAEC_MASK                   0x00000100
#define AVR32_USB_UECON2CLR_MDATAEC_OFFSET                          8
#define AVR32_USB_UECON2CLR_MDATAEC_SIZE                            1
#define AVR32_USB_UECON2CLR_NAKINEC                                 4
#define AVR32_USB_UECON2CLR_NAKINEC_MASK                   0x00000010
#define AVR32_USB_UECON2CLR_NAKINEC_OFFSET                          4
#define AVR32_USB_UECON2CLR_NAKINEC_SIZE                            1
#define AVR32_USB_UECON2CLR_NAKOUTEC                                3
#define AVR32_USB_UECON2CLR_NAKOUTEC_MASK                  0x00000008
#define AVR32_USB_UECON2CLR_NAKOUTEC_OFFSET                         3
#define AVR32_USB_UECON2CLR_NAKOUTEC_SIZE                           1
#define AVR32_USB_UECON2CLR_NBUSYBKEC                              12
#define AVR32_USB_UECON2CLR_NBUSYBKEC_MASK                 0x00001000
#define AVR32_USB_UECON2CLR_NBUSYBKEC_OFFSET                       12
#define AVR32_USB_UECON2CLR_NBUSYBKEC_SIZE                          1
#define AVR32_USB_UECON2CLR_NYETDISC                               17
#define AVR32_USB_UECON2CLR_NYETDISC_MASK                  0x00020000
#define AVR32_USB_UECON2CLR_NYETDISC_OFFSET                        17
#define AVR32_USB_UECON2CLR_NYETDISC_SIZE                           1
#define AVR32_USB_UECON2CLR_OVERFEC                                 5
#define AVR32_USB_UECON2CLR_OVERFEC_MASK                   0x00000020
#define AVR32_USB_UECON2CLR_OVERFEC_OFFSET                          5
#define AVR32_USB_UECON2CLR_OVERFEC_SIZE                            1
#define AVR32_USB_UECON2CLR_RESETVALUE                     0x00000000
#define AVR32_USB_UECON2CLR_RXOUTEC                                 1
#define AVR32_USB_UECON2CLR_RXOUTEC_MASK                   0x00000002
#define AVR32_USB_UECON2CLR_RXOUTEC_OFFSET                          1
#define AVR32_USB_UECON2CLR_RXOUTEC_SIZE                            1
#define AVR32_USB_UECON2CLR_RXSTPEC                                 2
#define AVR32_USB_UECON2CLR_RXSTPEC_MASK                   0x00000004
#define AVR32_USB_UECON2CLR_RXSTPEC_OFFSET                          2
#define AVR32_USB_UECON2CLR_RXSTPEC_SIZE                            1
#define AVR32_USB_UECON2CLR_SHORTPACKETEC                           7
#define AVR32_USB_UECON2CLR_SHORTPACKETEC_MASK             0x00000080
#define AVR32_USB_UECON2CLR_SHORTPACKETEC_OFFSET                    7
#define AVR32_USB_UECON2CLR_SHORTPACKETEC_SIZE                      1
#define AVR32_USB_UECON2CLR_STALLEDEC                               6
#define AVR32_USB_UECON2CLR_STALLEDEC_MASK                 0x00000040
#define AVR32_USB_UECON2CLR_STALLEDEC_OFFSET                        6
#define AVR32_USB_UECON2CLR_STALLEDEC_SIZE                          1
#define AVR32_USB_UECON2CLR_STALLRQC                               19
#define AVR32_USB_UECON2CLR_STALLRQC_MASK                  0x00080000
#define AVR32_USB_UECON2CLR_STALLRQC_OFFSET                        19
#define AVR32_USB_UECON2CLR_STALLRQC_SIZE                           1
#define AVR32_USB_UECON2CLR_TXINEC                                  0
#define AVR32_USB_UECON2CLR_TXINEC_MASK                    0x00000001
#define AVR32_USB_UECON2CLR_TXINEC_OFFSET                           0
#define AVR32_USB_UECON2CLR_TXINEC_SIZE                             1
#define AVR32_USB_UECON2SET                                0x000001f8
#define AVR32_USB_UECON2SET_DATAXES                                 9
#define AVR32_USB_UECON2SET_DATAXES_MASK                   0x00000200
#define AVR32_USB_UECON2SET_DATAXES_OFFSET                          9
#define AVR32_USB_UECON2SET_DATAXES_SIZE                            1
#define AVR32_USB_UECON2SET_EPDISHDMAS                             16
#define AVR32_USB_UECON2SET_EPDISHDMAS_MASK                0x00010000
#define AVR32_USB_UECON2SET_EPDISHDMAS_OFFSET                      16
#define AVR32_USB_UECON2SET_EPDISHDMAS_SIZE                         1
#define AVR32_USB_UECON2SET_ERRORTRANSES                           10
#define AVR32_USB_UECON2SET_ERRORTRANSES_MASK              0x00000400
#define AVR32_USB_UECON2SET_ERRORTRANSES_OFFSET                    10
#define AVR32_USB_UECON2SET_ERRORTRANSES_SIZE                       1
#define AVR32_USB_UECON2SET_KILLBKS                                13
#define AVR32_USB_UECON2SET_KILLBKS_MASK                   0x00002000
#define AVR32_USB_UECON2SET_KILLBKS_OFFSET                         13
#define AVR32_USB_UECON2SET_KILLBKS_SIZE                            1
#define AVR32_USB_UECON2SET_MASK                           0x000f37ff
#define AVR32_USB_UECON2SET_MDATAES                                 8
#define AVR32_USB_UECON2SET_MDATAES_MASK                   0x00000100
#define AVR32_USB_UECON2SET_MDATAES_OFFSET                          8
#define AVR32_USB_UECON2SET_MDATAES_SIZE                            1
#define AVR32_USB_UECON2SET_NAKINES                                 4
#define AVR32_USB_UECON2SET_NAKINES_MASK                   0x00000010
#define AVR32_USB_UECON2SET_NAKINES_OFFSET                          4
#define AVR32_USB_UECON2SET_NAKINES_SIZE                            1
#define AVR32_USB_UECON2SET_NAKOUTES                                3
#define AVR32_USB_UECON2SET_NAKOUTES_MASK                  0x00000008
#define AVR32_USB_UECON2SET_NAKOUTES_OFFSET                         3
#define AVR32_USB_UECON2SET_NAKOUTES_SIZE                           1
#define AVR32_USB_UECON2SET_NBUSYBKES                              12
#define AVR32_USB_UECON2SET_NBUSYBKES_MASK                 0x00001000
#define AVR32_USB_UECON2SET_NBUSYBKES_OFFSET                       12
#define AVR32_USB_UECON2SET_NBUSYBKES_SIZE                          1
#define AVR32_USB_UECON2SET_NYETDISS                               17
#define AVR32_USB_UECON2SET_NYETDISS_MASK                  0x00020000
#define AVR32_USB_UECON2SET_NYETDISS_OFFSET                        17
#define AVR32_USB_UECON2SET_NYETDISS_SIZE                           1
#define AVR32_USB_UECON2SET_OVERFES                                 5
#define AVR32_USB_UECON2SET_OVERFES_MASK                   0x00000020
#define AVR32_USB_UECON2SET_OVERFES_OFFSET                          5
#define AVR32_USB_UECON2SET_OVERFES_SIZE                            1
#define AVR32_USB_UECON2SET_RESETVALUE                     0x00000000
#define AVR32_USB_UECON2SET_RSTDTS                                 18
#define AVR32_USB_UECON2SET_RSTDTS_MASK                    0x00040000
#define AVR32_USB_UECON2SET_RSTDTS_OFFSET                          18
#define AVR32_USB_UECON2SET_RSTDTS_SIZE                             1
#define AVR32_USB_UECON2SET_RXOUTES                                 1
#define AVR32_USB_UECON2SET_RXOUTES_MASK                   0x00000002
#define AVR32_USB_UECON2SET_RXOUTES_OFFSET                          1
#define AVR32_USB_UECON2SET_RXOUTES_SIZE                            1
#define AVR32_USB_UECON2SET_RXSTPES                                 2
#define AVR32_USB_UECON2SET_RXSTPES_MASK                   0x00000004
#define AVR32_USB_UECON2SET_RXSTPES_OFFSET                          2
#define AVR32_USB_UECON2SET_RXSTPES_SIZE                            1
#define AVR32_USB_UECON2SET_SHORTPACKETES                           7
#define AVR32_USB_UECON2SET_SHORTPACKETES_MASK             0x00000080
#define AVR32_USB_UECON2SET_SHORTPACKETES_OFFSET                    7
#define AVR32_USB_UECON2SET_SHORTPACKETES_SIZE                      1
#define AVR32_USB_UECON2SET_STALLEDES                               6
#define AVR32_USB_UECON2SET_STALLEDES_MASK                 0x00000040
#define AVR32_USB_UECON2SET_STALLEDES_OFFSET                        6
#define AVR32_USB_UECON2SET_STALLEDES_SIZE                          1
#define AVR32_USB_UECON2SET_STALLRQS                               19
#define AVR32_USB_UECON2SET_STALLRQS_MASK                  0x00080000
#define AVR32_USB_UECON2SET_STALLRQS_OFFSET                        19
#define AVR32_USB_UECON2SET_STALLRQS_SIZE                           1
#define AVR32_USB_UECON2SET_TXINES                                  0
#define AVR32_USB_UECON2SET_TXINES_MASK                    0x00000001
#define AVR32_USB_UECON2SET_TXINES_OFFSET                           0
#define AVR32_USB_UECON2SET_TXINES_SIZE                             1
#define AVR32_USB_UECON2_DATAXE                                     9
#define AVR32_USB_UECON2_DATAXE_MASK                       0x00000200
#define AVR32_USB_UECON2_DATAXE_OFFSET                              9
#define AVR32_USB_UECON2_DATAXE_SIZE                                1
#define AVR32_USB_UECON2_EPDISHDMA                                 16
#define AVR32_USB_UECON2_EPDISHDMA_MASK                    0x00010000
#define AVR32_USB_UECON2_EPDISHDMA_OFFSET                          16
#define AVR32_USB_UECON2_EPDISHDMA_SIZE                             1
#define AVR32_USB_UECON2_ERRORTRANSE                               10
#define AVR32_USB_UECON2_ERRORTRANSE_MASK                  0x00000400
#define AVR32_USB_UECON2_ERRORTRANSE_OFFSET                        10
#define AVR32_USB_UECON2_ERRORTRANSE_SIZE                           1
#define AVR32_USB_UECON2_FIFOCON                                   14
#define AVR32_USB_UECON2_FIFOCON_MASK                      0x00004000
#define AVR32_USB_UECON2_FIFOCON_OFFSET                            14
#define AVR32_USB_UECON2_FIFOCON_SIZE                               1
#define AVR32_USB_UECON2_KILLBK                                    13
#define AVR32_USB_UECON2_KILLBK_MASK                       0x00002000
#define AVR32_USB_UECON2_KILLBK_OFFSET                             13
#define AVR32_USB_UECON2_KILLBK_SIZE                                1
#define AVR32_USB_UECON2_MASK                              0x000f77ff
#define AVR32_USB_UECON2_MDATAE                                     8
#define AVR32_USB_UECON2_MDATAE_MASK                       0x00000100
#define AVR32_USB_UECON2_MDATAE_OFFSET                              8
#define AVR32_USB_UECON2_MDATAE_SIZE                                1
#define AVR32_USB_UECON2_NAKINE                                     4
#define AVR32_USB_UECON2_NAKINE_MASK                       0x00000010
#define AVR32_USB_UECON2_NAKINE_OFFSET                              4
#define AVR32_USB_UECON2_NAKINE_SIZE                                1
#define AVR32_USB_UECON2_NAKOUTE                                    3
#define AVR32_USB_UECON2_NAKOUTE_MASK                      0x00000008
#define AVR32_USB_UECON2_NAKOUTE_OFFSET                             3
#define AVR32_USB_UECON2_NAKOUTE_SIZE                               1
#define AVR32_USB_UECON2_NBUSYBKE                                  12
#define AVR32_USB_UECON2_NBUSYBKE_MASK                     0x00001000
#define AVR32_USB_UECON2_NBUSYBKE_OFFSET                           12
#define AVR32_USB_UECON2_NBUSYBKE_SIZE                              1
#define AVR32_USB_UECON2_NYETDIS                                   17
#define AVR32_USB_UECON2_NYETDIS_MASK                      0x00020000
#define AVR32_USB_UECON2_NYETDIS_OFFSET                            17
#define AVR32_USB_UECON2_NYETDIS_SIZE                               1
#define AVR32_USB_UECON2_OVERFE                                     5
#define AVR32_USB_UECON2_OVERFE_MASK                       0x00000020
#define AVR32_USB_UECON2_OVERFE_OFFSET                              5
#define AVR32_USB_UECON2_OVERFE_SIZE                                1
#define AVR32_USB_UECON2_RESETVALUE                        0x00000000
#define AVR32_USB_UECON2_RSTDT                                     18
#define AVR32_USB_UECON2_RSTDT_MASK                        0x00040000
#define AVR32_USB_UECON2_RSTDT_OFFSET                              18
#define AVR32_USB_UECON2_RSTDT_SIZE                                 1
#define AVR32_USB_UECON2_RXOUTE                                     1
#define AVR32_USB_UECON2_RXOUTE_MASK                       0x00000002
#define AVR32_USB_UECON2_RXOUTE_OFFSET                              1
#define AVR32_USB_UECON2_RXOUTE_SIZE                                1
#define AVR32_USB_UECON2_RXSTPE                                     2
#define AVR32_USB_UECON2_RXSTPE_MASK                       0x00000004
#define AVR32_USB_UECON2_RXSTPE_OFFSET                              2
#define AVR32_USB_UECON2_RXSTPE_SIZE                                1
#define AVR32_USB_UECON2_SHORTPACKETE                               7
#define AVR32_USB_UECON2_SHORTPACKETE_MASK                 0x00000080
#define AVR32_USB_UECON2_SHORTPACKETE_OFFSET                        7
#define AVR32_USB_UECON2_SHORTPACKETE_SIZE                          1
#define AVR32_USB_UECON2_STALLEDE                                   6
#define AVR32_USB_UECON2_STALLEDE_MASK                     0x00000040
#define AVR32_USB_UECON2_STALLEDE_OFFSET                            6
#define AVR32_USB_UECON2_STALLEDE_SIZE                              1
#define AVR32_USB_UECON2_STALLRQ                                   19
#define AVR32_USB_UECON2_STALLRQ_MASK                      0x00080000
#define AVR32_USB_UECON2_STALLRQ_OFFSET                            19
#define AVR32_USB_UECON2_STALLRQ_SIZE                               1
#define AVR32_USB_UECON2_TXINE                                      0
#define AVR32_USB_UECON2_TXINE_MASK                        0x00000001
#define AVR32_USB_UECON2_TXINE_OFFSET                               0
#define AVR32_USB_UECON2_TXINE_SIZE                                 1
#define AVR32_USB_UECON3                                   0x000001cc
#define AVR32_USB_UECON3CLR                                0x0000022c
#define AVR32_USB_UECON3CLR_DATAXEC                                 9
#define AVR32_USB_UECON3CLR_DATAXEC_MASK                   0x00000200
#define AVR32_USB_UECON3CLR_DATAXEC_OFFSET                          9
#define AVR32_USB_UECON3CLR_DATAXEC_SIZE                            1
#define AVR32_USB_UECON3CLR_EPDISHDMAC                             16
#define AVR32_USB_UECON3CLR_EPDISHDMAC_MASK                0x00010000
#define AVR32_USB_UECON3CLR_EPDISHDMAC_OFFSET                      16
#define AVR32_USB_UECON3CLR_EPDISHDMAC_SIZE                         1
#define AVR32_USB_UECON3CLR_ERRORTRANSEC                           10
#define AVR32_USB_UECON3CLR_ERRORTRANSEC_MASK              0x00000400
#define AVR32_USB_UECON3CLR_ERRORTRANSEC_OFFSET                    10
#define AVR32_USB_UECON3CLR_ERRORTRANSEC_SIZE                       1
#define AVR32_USB_UECON3CLR_FIFOCONC                               14
#define AVR32_USB_UECON3CLR_FIFOCONC_MASK                  0x00004000
#define AVR32_USB_UECON3CLR_FIFOCONC_OFFSET                        14
#define AVR32_USB_UECON3CLR_FIFOCONC_SIZE                           1
#define AVR32_USB_UECON3CLR_MASK                           0x000b57ff
#define AVR32_USB_UECON3CLR_MDATAEC                                 8
#define AVR32_USB_UECON3CLR_MDATAEC_MASK                   0x00000100
#define AVR32_USB_UECON3CLR_MDATAEC_OFFSET                          8
#define AVR32_USB_UECON3CLR_MDATAEC_SIZE                            1
#define AVR32_USB_UECON3CLR_NAKINEC                                 4
#define AVR32_USB_UECON3CLR_NAKINEC_MASK                   0x00000010
#define AVR32_USB_UECON3CLR_NAKINEC_OFFSET                          4
#define AVR32_USB_UECON3CLR_NAKINEC_SIZE                            1
#define AVR32_USB_UECON3CLR_NAKOUTEC                                3
#define AVR32_USB_UECON3CLR_NAKOUTEC_MASK                  0x00000008
#define AVR32_USB_UECON3CLR_NAKOUTEC_OFFSET                         3
#define AVR32_USB_UECON3CLR_NAKOUTEC_SIZE                           1
#define AVR32_USB_UECON3CLR_NBUSYBKEC                              12
#define AVR32_USB_UECON3CLR_NBUSYBKEC_MASK                 0x00001000
#define AVR32_USB_UECON3CLR_NBUSYBKEC_OFFSET                       12
#define AVR32_USB_UECON3CLR_NBUSYBKEC_SIZE                          1
#define AVR32_USB_UECON3CLR_NYETDISC                               17
#define AVR32_USB_UECON3CLR_NYETDISC_MASK                  0x00020000
#define AVR32_USB_UECON3CLR_NYETDISC_OFFSET                        17
#define AVR32_USB_UECON3CLR_NYETDISC_SIZE                           1
#define AVR32_USB_UECON3CLR_OVERFEC                                 5
#define AVR32_USB_UECON3CLR_OVERFEC_MASK                   0x00000020
#define AVR32_USB_UECON3CLR_OVERFEC_OFFSET                          5
#define AVR32_USB_UECON3CLR_OVERFEC_SIZE                            1
#define AVR32_USB_UECON3CLR_RESETVALUE                     0x00000000
#define AVR32_USB_UECON3CLR_RXOUTEC                                 1
#define AVR32_USB_UECON3CLR_RXOUTEC_MASK                   0x00000002
#define AVR32_USB_UECON3CLR_RXOUTEC_OFFSET                          1
#define AVR32_USB_UECON3CLR_RXOUTEC_SIZE                            1
#define AVR32_USB_UECON3CLR_RXSTPEC                                 2
#define AVR32_USB_UECON3CLR_RXSTPEC_MASK                   0x00000004
#define AVR32_USB_UECON3CLR_RXSTPEC_OFFSET                          2
#define AVR32_USB_UECON3CLR_RXSTPEC_SIZE                            1
#define AVR32_USB_UECON3CLR_SHORTPACKETEC                           7
#define AVR32_USB_UECON3CLR_SHORTPACKETEC_MASK             0x00000080
#define AVR32_USB_UECON3CLR_SHORTPACKETEC_OFFSET                    7
#define AVR32_USB_UECON3CLR_SHORTPACKETEC_SIZE                      1
#define AVR32_USB_UECON3CLR_STALLEDEC                               6
#define AVR32_USB_UECON3CLR_STALLEDEC_MASK                 0x00000040
#define AVR32_USB_UECON3CLR_STALLEDEC_OFFSET                        6
#define AVR32_USB_UECON3CLR_STALLEDEC_SIZE                          1
#define AVR32_USB_UECON3CLR_STALLRQC                               19
#define AVR32_USB_UECON3CLR_STALLRQC_MASK                  0x00080000
#define AVR32_USB_UECON3CLR_STALLRQC_OFFSET                        19
#define AVR32_USB_UECON3CLR_STALLRQC_SIZE                           1
#define AVR32_USB_UECON3CLR_TXINEC                                  0
#define AVR32_USB_UECON3CLR_TXINEC_MASK                    0x00000001
#define AVR32_USB_UECON3CLR_TXINEC_OFFSET                           0
#define AVR32_USB_UECON3CLR_TXINEC_SIZE                             1
#define AVR32_USB_UECON3SET                                0x000001fc
#define AVR32_USB_UECON3SET_DATAXES                                 9
#define AVR32_USB_UECON3SET_DATAXES_MASK                   0x00000200
#define AVR32_USB_UECON3SET_DATAXES_OFFSET                          9
#define AVR32_USB_UECON3SET_DATAXES_SIZE                            1
#define AVR32_USB_UECON3SET_EPDISHDMAS                             16
#define AVR32_USB_UECON3SET_EPDISHDMAS_MASK                0x00010000
#define AVR32_USB_UECON3SET_EPDISHDMAS_OFFSET                      16
#define AVR32_USB_UECON3SET_EPDISHDMAS_SIZE                         1
#define AVR32_USB_UECON3SET_ERRORTRANSES                           10
#define AVR32_USB_UECON3SET_ERRORTRANSES_MASK              0x00000400
#define AVR32_USB_UECON3SET_ERRORTRANSES_OFFSET                    10
#define AVR32_USB_UECON3SET_ERRORTRANSES_SIZE                       1
#define AVR32_USB_UECON3SET_KILLBKS                                13
#define AVR32_USB_UECON3SET_KILLBKS_MASK                   0x00002000
#define AVR32_USB_UECON3SET_KILLBKS_OFFSET                         13
#define AVR32_USB_UECON3SET_KILLBKS_SIZE                            1
#define AVR32_USB_UECON3SET_MASK                           0x000f37ff
#define AVR32_USB_UECON3SET_MDATAES                                 8
#define AVR32_USB_UECON3SET_MDATAES_MASK                   0x00000100
#define AVR32_USB_UECON3SET_MDATAES_OFFSET                          8
#define AVR32_USB_UECON3SET_MDATAES_SIZE                            1
#define AVR32_USB_UECON3SET_NAKINES                                 4
#define AVR32_USB_UECON3SET_NAKINES_MASK                   0x00000010
#define AVR32_USB_UECON3SET_NAKINES_OFFSET                          4
#define AVR32_USB_UECON3SET_NAKINES_SIZE                            1
#define AVR32_USB_UECON3SET_NAKOUTES                                3
#define AVR32_USB_UECON3SET_NAKOUTES_MASK                  0x00000008
#define AVR32_USB_UECON3SET_NAKOUTES_OFFSET                         3
#define AVR32_USB_UECON3SET_NAKOUTES_SIZE                           1
#define AVR32_USB_UECON3SET_NBUSYBKES                              12
#define AVR32_USB_UECON3SET_NBUSYBKES_MASK                 0x00001000
#define AVR32_USB_UECON3SET_NBUSYBKES_OFFSET                       12
#define AVR32_USB_UECON3SET_NBUSYBKES_SIZE                          1
#define AVR32_USB_UECON3SET_NYETDISS                               17
#define AVR32_USB_UECON3SET_NYETDISS_MASK                  0x00020000
#define AVR32_USB_UECON3SET_NYETDISS_OFFSET                        17
#define AVR32_USB_UECON3SET_NYETDISS_SIZE                           1
#define AVR32_USB_UECON3SET_OVERFES                                 5
#define AVR32_USB_UECON3SET_OVERFES_MASK                   0x00000020
#define AVR32_USB_UECON3SET_OVERFES_OFFSET                          5
#define AVR32_USB_UECON3SET_OVERFES_SIZE                            1
#define AVR32_USB_UECON3SET_RESETVALUE                     0x00000000
#define AVR32_USB_UECON3SET_RSTDTS                                 18
#define AVR32_USB_UECON3SET_RSTDTS_MASK                    0x00040000
#define AVR32_USB_UECON3SET_RSTDTS_OFFSET                          18
#define AVR32_USB_UECON3SET_RSTDTS_SIZE                             1
#define AVR32_USB_UECON3SET_RXOUTES                                 1
#define AVR32_USB_UECON3SET_RXOUTES_MASK                   0x00000002
#define AVR32_USB_UECON3SET_RXOUTES_OFFSET                          1
#define AVR32_USB_UECON3SET_RXOUTES_SIZE                            1
#define AVR32_USB_UECON3SET_RXSTPES                                 2
#define AVR32_USB_UECON3SET_RXSTPES_MASK                   0x00000004
#define AVR32_USB_UECON3SET_RXSTPES_OFFSET                          2
#define AVR32_USB_UECON3SET_RXSTPES_SIZE                            1
#define AVR32_USB_UECON3SET_SHORTPACKETES                           7
#define AVR32_USB_UECON3SET_SHORTPACKETES_MASK             0x00000080
#define AVR32_USB_UECON3SET_SHORTPACKETES_OFFSET                    7
#define AVR32_USB_UECON3SET_SHORTPACKETES_SIZE                      1
#define AVR32_USB_UECON3SET_STALLEDES                               6
#define AVR32_USB_UECON3SET_STALLEDES_MASK                 0x00000040
#define AVR32_USB_UECON3SET_STALLEDES_OFFSET                        6
#define AVR32_USB_UECON3SET_STALLEDES_SIZE                          1
#define AVR32_USB_UECON3SET_STALLRQS                               19
#define AVR32_USB_UECON3SET_STALLRQS_MASK                  0x00080000
#define AVR32_USB_UECON3SET_STALLRQS_OFFSET                        19
#define AVR32_USB_UECON3SET_STALLRQS_SIZE                           1
#define AVR32_USB_UECON3SET_TXINES                                  0
#define AVR32_USB_UECON3SET_TXINES_MASK                    0x00000001
#define AVR32_USB_UECON3SET_TXINES_OFFSET                           0
#define AVR32_USB_UECON3SET_TXINES_SIZE                             1
#define AVR32_USB_UECON3_DATAXE                                     9
#define AVR32_USB_UECON3_DATAXE_MASK                       0x00000200
#define AVR32_USB_UECON3_DATAXE_OFFSET                              9
#define AVR32_USB_UECON3_DATAXE_SIZE                                1
#define AVR32_USB_UECON3_EPDISHDMA                                 16
#define AVR32_USB_UECON3_EPDISHDMA_MASK                    0x00010000
#define AVR32_USB_UECON3_EPDISHDMA_OFFSET                          16
#define AVR32_USB_UECON3_EPDISHDMA_SIZE                             1
#define AVR32_USB_UECON3_ERRORTRANSE                               10
#define AVR32_USB_UECON3_ERRORTRANSE_MASK                  0x00000400
#define AVR32_USB_UECON3_ERRORTRANSE_OFFSET                        10
#define AVR32_USB_UECON3_ERRORTRANSE_SIZE                           1
#define AVR32_USB_UECON3_FIFOCON                                   14
#define AVR32_USB_UECON3_FIFOCON_MASK                      0x00004000
#define AVR32_USB_UECON3_FIFOCON_OFFSET                            14
#define AVR32_USB_UECON3_FIFOCON_SIZE                               1
#define AVR32_USB_UECON3_KILLBK                                    13
#define AVR32_USB_UECON3_KILLBK_MASK                       0x00002000
#define AVR32_USB_UECON3_KILLBK_OFFSET                             13
#define AVR32_USB_UECON3_KILLBK_SIZE                                1
#define AVR32_USB_UECON3_MASK                              0x000f77ff
#define AVR32_USB_UECON3_MDATAE                                     8
#define AVR32_USB_UECON3_MDATAE_MASK                       0x00000100
#define AVR32_USB_UECON3_MDATAE_OFFSET                              8
#define AVR32_USB_UECON3_MDATAE_SIZE                                1
#define AVR32_USB_UECON3_NAKINE                                     4
#define AVR32_USB_UECON3_NAKINE_MASK                       0x00000010
#define AVR32_USB_UECON3_NAKINE_OFFSET                              4
#define AVR32_USB_UECON3_NAKINE_SIZE                                1
#define AVR32_USB_UECON3_NAKOUTE                                    3
#define AVR32_USB_UECON3_NAKOUTE_MASK                      0x00000008
#define AVR32_USB_UECON3_NAKOUTE_OFFSET                             3
#define AVR32_USB_UECON3_NAKOUTE_SIZE                               1
#define AVR32_USB_UECON3_NBUSYBKE                                  12
#define AVR32_USB_UECON3_NBUSYBKE_MASK                     0x00001000
#define AVR32_USB_UECON3_NBUSYBKE_OFFSET                           12
#define AVR32_USB_UECON3_NBUSYBKE_SIZE                              1
#define AVR32_USB_UECON3_NYETDIS                                   17
#define AVR32_USB_UECON3_NYETDIS_MASK                      0x00020000
#define AVR32_USB_UECON3_NYETDIS_OFFSET                            17
#define AVR32_USB_UECON3_NYETDIS_SIZE                               1
#define AVR32_USB_UECON3_OVERFE                                     5
#define AVR32_USB_UECON3_OVERFE_MASK                       0x00000020
#define AVR32_USB_UECON3_OVERFE_OFFSET                              5
#define AVR32_USB_UECON3_OVERFE_SIZE                                1
#define AVR32_USB_UECON3_RESETVALUE                        0x00000000
#define AVR32_USB_UECON3_RSTDT                                     18
#define AVR32_USB_UECON3_RSTDT_MASK                        0x00040000
#define AVR32_USB_UECON3_RSTDT_OFFSET                              18
#define AVR32_USB_UECON3_RSTDT_SIZE                                 1
#define AVR32_USB_UECON3_RXOUTE                                     1
#define AVR32_USB_UECON3_RXOUTE_MASK                       0x00000002
#define AVR32_USB_UECON3_RXOUTE_OFFSET                              1
#define AVR32_USB_UECON3_RXOUTE_SIZE                                1
#define AVR32_USB_UECON3_RXSTPE                                     2
#define AVR32_USB_UECON3_RXSTPE_MASK                       0x00000004
#define AVR32_USB_UECON3_RXSTPE_OFFSET                              2
#define AVR32_USB_UECON3_RXSTPE_SIZE                                1
#define AVR32_USB_UECON3_SHORTPACKETE                               7
#define AVR32_USB_UECON3_SHORTPACKETE_MASK                 0x00000080
#define AVR32_USB_UECON3_SHORTPACKETE_OFFSET                        7
#define AVR32_USB_UECON3_SHORTPACKETE_SIZE                          1
#define AVR32_USB_UECON3_STALLEDE                                   6
#define AVR32_USB_UECON3_STALLEDE_MASK                     0x00000040
#define AVR32_USB_UECON3_STALLEDE_OFFSET                            6
#define AVR32_USB_UECON3_STALLEDE_SIZE                              1
#define AVR32_USB_UECON3_STALLRQ                                   19
#define AVR32_USB_UECON3_STALLRQ_MASK                      0x00080000
#define AVR32_USB_UECON3_STALLRQ_OFFSET                            19
#define AVR32_USB_UECON3_STALLRQ_SIZE                               1
#define AVR32_USB_UECON3_TXINE                                      0
#define AVR32_USB_UECON3_TXINE_MASK                        0x00000001
#define AVR32_USB_UECON3_TXINE_OFFSET                               0
#define AVR32_USB_UECON3_TXINE_SIZE                                 1
#define AVR32_USB_UECON4                                   0x000001d0
#define AVR32_USB_UECON4CLR                                0x00000230
#define AVR32_USB_UECON4CLR_DATAXEC                                 9
#define AVR32_USB_UECON4CLR_DATAXEC_MASK                   0x00000200
#define AVR32_USB_UECON4CLR_DATAXEC_OFFSET                          9
#define AVR32_USB_UECON4CLR_DATAXEC_SIZE                            1
#define AVR32_USB_UECON4CLR_EPDISHDMAC                             16
#define AVR32_USB_UECON4CLR_EPDISHDMAC_MASK                0x00010000
#define AVR32_USB_UECON4CLR_EPDISHDMAC_OFFSET                      16
#define AVR32_USB_UECON4CLR_EPDISHDMAC_SIZE                         1
#define AVR32_USB_UECON4CLR_ERRORTRANSEC                           10
#define AVR32_USB_UECON4CLR_ERRORTRANSEC_MASK              0x00000400
#define AVR32_USB_UECON4CLR_ERRORTRANSEC_OFFSET                    10
#define AVR32_USB_UECON4CLR_ERRORTRANSEC_SIZE                       1
#define AVR32_USB_UECON4CLR_FIFOCONC                               14
#define AVR32_USB_UECON4CLR_FIFOCONC_MASK                  0x00004000
#define AVR32_USB_UECON4CLR_FIFOCONC_OFFSET                        14
#define AVR32_USB_UECON4CLR_FIFOCONC_SIZE                           1
#define AVR32_USB_UECON4CLR_MASK                           0x000b57ff
#define AVR32_USB_UECON4CLR_MDATAEC                                 8
#define AVR32_USB_UECON4CLR_MDATAEC_MASK                   0x00000100
#define AVR32_USB_UECON4CLR_MDATAEC_OFFSET                          8
#define AVR32_USB_UECON4CLR_MDATAEC_SIZE                            1
#define AVR32_USB_UECON4CLR_NAKINEC                                 4
#define AVR32_USB_UECON4CLR_NAKINEC_MASK                   0x00000010
#define AVR32_USB_UECON4CLR_NAKINEC_OFFSET                          4
#define AVR32_USB_UECON4CLR_NAKINEC_SIZE                            1
#define AVR32_USB_UECON4CLR_NAKOUTEC                                3
#define AVR32_USB_UECON4CLR_NAKOUTEC_MASK                  0x00000008
#define AVR32_USB_UECON4CLR_NAKOUTEC_OFFSET                         3
#define AVR32_USB_UECON4CLR_NAKOUTEC_SIZE                           1
#define AVR32_USB_UECON4CLR_NBUSYBKEC                              12
#define AVR32_USB_UECON4CLR_NBUSYBKEC_MASK                 0x00001000
#define AVR32_USB_UECON4CLR_NBUSYBKEC_OFFSET                       12
#define AVR32_USB_UECON4CLR_NBUSYBKEC_SIZE                          1
#define AVR32_USB_UECON4CLR_NYETDISC                               17
#define AVR32_USB_UECON4CLR_NYETDISC_MASK                  0x00020000
#define AVR32_USB_UECON4CLR_NYETDISC_OFFSET                        17
#define AVR32_USB_UECON4CLR_NYETDISC_SIZE                           1
#define AVR32_USB_UECON4CLR_OVERFEC                                 5
#define AVR32_USB_UECON4CLR_OVERFEC_MASK                   0x00000020
#define AVR32_USB_UECON4CLR_OVERFEC_OFFSET                          5
#define AVR32_USB_UECON4CLR_OVERFEC_SIZE                            1
#define AVR32_USB_UECON4CLR_RESETVALUE                     0x00000000
#define AVR32_USB_UECON4CLR_RXOUTEC                                 1
#define AVR32_USB_UECON4CLR_RXOUTEC_MASK                   0x00000002
#define AVR32_USB_UECON4CLR_RXOUTEC_OFFSET                          1
#define AVR32_USB_UECON4CLR_RXOUTEC_SIZE                            1
#define AVR32_USB_UECON4CLR_RXSTPEC                                 2
#define AVR32_USB_UECON4CLR_RXSTPEC_MASK                   0x00000004
#define AVR32_USB_UECON4CLR_RXSTPEC_OFFSET                          2
#define AVR32_USB_UECON4CLR_RXSTPEC_SIZE                            1
#define AVR32_USB_UECON4CLR_SHORTPACKETEC                           7
#define AVR32_USB_UECON4CLR_SHORTPACKETEC_MASK             0x00000080
#define AVR32_USB_UECON4CLR_SHORTPACKETEC_OFFSET                    7
#define AVR32_USB_UECON4CLR_SHORTPACKETEC_SIZE                      1
#define AVR32_USB_UECON4CLR_STALLEDEC                               6
#define AVR32_USB_UECON4CLR_STALLEDEC_MASK                 0x00000040
#define AVR32_USB_UECON4CLR_STALLEDEC_OFFSET                        6
#define AVR32_USB_UECON4CLR_STALLEDEC_SIZE                          1
#define AVR32_USB_UECON4CLR_STALLRQC                               19
#define AVR32_USB_UECON4CLR_STALLRQC_MASK                  0x00080000
#define AVR32_USB_UECON4CLR_STALLRQC_OFFSET                        19
#define AVR32_USB_UECON4CLR_STALLRQC_SIZE                           1
#define AVR32_USB_UECON4CLR_TXINEC                                  0
#define AVR32_USB_UECON4CLR_TXINEC_MASK                    0x00000001
#define AVR32_USB_UECON4CLR_TXINEC_OFFSET                           0
#define AVR32_USB_UECON4CLR_TXINEC_SIZE                             1
#define AVR32_USB_UECON4SET                                0x00000200
#define AVR32_USB_UECON4SET_DATAXES                                 9
#define AVR32_USB_UECON4SET_DATAXES_MASK                   0x00000200
#define AVR32_USB_UECON4SET_DATAXES_OFFSET                          9
#define AVR32_USB_UECON4SET_DATAXES_SIZE                            1
#define AVR32_USB_UECON4SET_EPDISHDMAS                             16
#define AVR32_USB_UECON4SET_EPDISHDMAS_MASK                0x00010000
#define AVR32_USB_UECON4SET_EPDISHDMAS_OFFSET                      16
#define AVR32_USB_UECON4SET_EPDISHDMAS_SIZE                         1
#define AVR32_USB_UECON4SET_ERRORTRANSES                           10
#define AVR32_USB_UECON4SET_ERRORTRANSES_MASK              0x00000400
#define AVR32_USB_UECON4SET_ERRORTRANSES_OFFSET                    10
#define AVR32_USB_UECON4SET_ERRORTRANSES_SIZE                       1
#define AVR32_USB_UECON4SET_KILLBKS                                13
#define AVR32_USB_UECON4SET_KILLBKS_MASK                   0x00002000
#define AVR32_USB_UECON4SET_KILLBKS_OFFSET                         13
#define AVR32_USB_UECON4SET_KILLBKS_SIZE                            1
#define AVR32_USB_UECON4SET_MASK                           0x000f37ff
#define AVR32_USB_UECON4SET_MDATAES                                 8
#define AVR32_USB_UECON4SET_MDATAES_MASK                   0x00000100
#define AVR32_USB_UECON4SET_MDATAES_OFFSET                          8
#define AVR32_USB_UECON4SET_MDATAES_SIZE                            1
#define AVR32_USB_UECON4SET_NAKINES                                 4
#define AVR32_USB_UECON4SET_NAKINES_MASK                   0x00000010
#define AVR32_USB_UECON4SET_NAKINES_OFFSET                          4
#define AVR32_USB_UECON4SET_NAKINES_SIZE                            1
#define AVR32_USB_UECON4SET_NAKOUTES                                3
#define AVR32_USB_UECON4SET_NAKOUTES_MASK                  0x00000008
#define AVR32_USB_UECON4SET_NAKOUTES_OFFSET                         3
#define AVR32_USB_UECON4SET_NAKOUTES_SIZE                           1
#define AVR32_USB_UECON4SET_NBUSYBKES                              12
#define AVR32_USB_UECON4SET_NBUSYBKES_MASK                 0x00001000
#define AVR32_USB_UECON4SET_NBUSYBKES_OFFSET                       12
#define AVR32_USB_UECON4SET_NBUSYBKES_SIZE                          1
#define AVR32_USB_UECON4SET_NYETDISS                               17
#define AVR32_USB_UECON4SET_NYETDISS_MASK                  0x00020000
#define AVR32_USB_UECON4SET_NYETDISS_OFFSET                        17
#define AVR32_USB_UECON4SET_NYETDISS_SIZE                           1
#define AVR32_USB_UECON4SET_OVERFES                                 5
#define AVR32_USB_UECON4SET_OVERFES_MASK                   0x00000020
#define AVR32_USB_UECON4SET_OVERFES_OFFSET                          5
#define AVR32_USB_UECON4SET_OVERFES_SIZE                            1
#define AVR32_USB_UECON4SET_RESETVALUE                     0x00000000
#define AVR32_USB_UECON4SET_RSTDTS                                 18
#define AVR32_USB_UECON4SET_RSTDTS_MASK                    0x00040000
#define AVR32_USB_UECON4SET_RSTDTS_OFFSET                          18
#define AVR32_USB_UECON4SET_RSTDTS_SIZE                             1
#define AVR32_USB_UECON4SET_RXOUTES                                 1
#define AVR32_USB_UECON4SET_RXOUTES_MASK                   0x00000002
#define AVR32_USB_UECON4SET_RXOUTES_OFFSET                          1
#define AVR32_USB_UECON4SET_RXOUTES_SIZE                            1
#define AVR32_USB_UECON4SET_RXSTPES                                 2
#define AVR32_USB_UECON4SET_RXSTPES_MASK                   0x00000004
#define AVR32_USB_UECON4SET_RXSTPES_OFFSET                          2
#define AVR32_USB_UECON4SET_RXSTPES_SIZE                            1
#define AVR32_USB_UECON4SET_SHORTPACKETES                           7
#define AVR32_USB_UECON4SET_SHORTPACKETES_MASK             0x00000080
#define AVR32_USB_UECON4SET_SHORTPACKETES_OFFSET                    7
#define AVR32_USB_UECON4SET_SHORTPACKETES_SIZE                      1
#define AVR32_USB_UECON4SET_STALLEDES                               6
#define AVR32_USB_UECON4SET_STALLEDES_MASK                 0x00000040
#define AVR32_USB_UECON4SET_STALLEDES_OFFSET                        6
#define AVR32_USB_UECON4SET_STALLEDES_SIZE                          1
#define AVR32_USB_UECON4SET_STALLRQS                               19
#define AVR32_USB_UECON4SET_STALLRQS_MASK                  0x00080000
#define AVR32_USB_UECON4SET_STALLRQS_OFFSET                        19
#define AVR32_USB_UECON4SET_STALLRQS_SIZE                           1
#define AVR32_USB_UECON4SET_TXINES                                  0
#define AVR32_USB_UECON4SET_TXINES_MASK                    0x00000001
#define AVR32_USB_UECON4SET_TXINES_OFFSET                           0
#define AVR32_USB_UECON4SET_TXINES_SIZE                             1
#define AVR32_USB_UECON4_DATAXE                                     9
#define AVR32_USB_UECON4_DATAXE_MASK                       0x00000200
#define AVR32_USB_UECON4_DATAXE_OFFSET                              9
#define AVR32_USB_UECON4_DATAXE_SIZE                                1
#define AVR32_USB_UECON4_EPDISHDMA                                 16
#define AVR32_USB_UECON4_EPDISHDMA_MASK                    0x00010000
#define AVR32_USB_UECON4_EPDISHDMA_OFFSET                          16
#define AVR32_USB_UECON4_EPDISHDMA_SIZE                             1
#define AVR32_USB_UECON4_ERRORTRANSE                               10
#define AVR32_USB_UECON4_ERRORTRANSE_MASK                  0x00000400
#define AVR32_USB_UECON4_ERRORTRANSE_OFFSET                        10
#define AVR32_USB_UECON4_ERRORTRANSE_SIZE                           1
#define AVR32_USB_UECON4_FIFOCON                                   14
#define AVR32_USB_UECON4_FIFOCON_MASK                      0x00004000
#define AVR32_USB_UECON4_FIFOCON_OFFSET                            14
#define AVR32_USB_UECON4_FIFOCON_SIZE                               1
#define AVR32_USB_UECON4_KILLBK                                    13
#define AVR32_USB_UECON4_KILLBK_MASK                       0x00002000
#define AVR32_USB_UECON4_KILLBK_OFFSET                             13
#define AVR32_USB_UECON4_KILLBK_SIZE                                1
#define AVR32_USB_UECON4_MASK                              0x000f77ff
#define AVR32_USB_UECON4_MDATAE                                     8
#define AVR32_USB_UECON4_MDATAE_MASK                       0x00000100
#define AVR32_USB_UECON4_MDATAE_OFFSET                              8
#define AVR32_USB_UECON4_MDATAE_SIZE                                1
#define AVR32_USB_UECON4_NAKINE                                     4
#define AVR32_USB_UECON4_NAKINE_MASK                       0x00000010
#define AVR32_USB_UECON4_NAKINE_OFFSET                              4
#define AVR32_USB_UECON4_NAKINE_SIZE                                1
#define AVR32_USB_UECON4_NAKOUTE                                    3
#define AVR32_USB_UECON4_NAKOUTE_MASK                      0x00000008
#define AVR32_USB_UECON4_NAKOUTE_OFFSET                             3
#define AVR32_USB_UECON4_NAKOUTE_SIZE                               1
#define AVR32_USB_UECON4_NBUSYBKE                                  12
#define AVR32_USB_UECON4_NBUSYBKE_MASK                     0x00001000
#define AVR32_USB_UECON4_NBUSYBKE_OFFSET                           12
#define AVR32_USB_UECON4_NBUSYBKE_SIZE                              1
#define AVR32_USB_UECON4_NYETDIS                                   17
#define AVR32_USB_UECON4_NYETDIS_MASK                      0x00020000
#define AVR32_USB_UECON4_NYETDIS_OFFSET                            17
#define AVR32_USB_UECON4_NYETDIS_SIZE                               1
#define AVR32_USB_UECON4_OVERFE                                     5
#define AVR32_USB_UECON4_OVERFE_MASK                       0x00000020
#define AVR32_USB_UECON4_OVERFE_OFFSET                              5
#define AVR32_USB_UECON4_OVERFE_SIZE                                1
#define AVR32_USB_UECON4_RESETVALUE                        0x00000000
#define AVR32_USB_UECON4_RSTDT                                     18
#define AVR32_USB_UECON4_RSTDT_MASK                        0x00040000
#define AVR32_USB_UECON4_RSTDT_OFFSET                              18
#define AVR32_USB_UECON4_RSTDT_SIZE                                 1
#define AVR32_USB_UECON4_RXOUTE                                     1
#define AVR32_USB_UECON4_RXOUTE_MASK                       0x00000002
#define AVR32_USB_UECON4_RXOUTE_OFFSET                              1
#define AVR32_USB_UECON4_RXOUTE_SIZE                                1
#define AVR32_USB_UECON4_RXSTPE                                     2
#define AVR32_USB_UECON4_RXSTPE_MASK                       0x00000004
#define AVR32_USB_UECON4_RXSTPE_OFFSET                              2
#define AVR32_USB_UECON4_RXSTPE_SIZE                                1
#define AVR32_USB_UECON4_SHORTPACKETE                               7
#define AVR32_USB_UECON4_SHORTPACKETE_MASK                 0x00000080
#define AVR32_USB_UECON4_SHORTPACKETE_OFFSET                        7
#define AVR32_USB_UECON4_SHORTPACKETE_SIZE                          1
#define AVR32_USB_UECON4_STALLEDE                                   6
#define AVR32_USB_UECON4_STALLEDE_MASK                     0x00000040
#define AVR32_USB_UECON4_STALLEDE_OFFSET                            6
#define AVR32_USB_UECON4_STALLEDE_SIZE                              1
#define AVR32_USB_UECON4_STALLRQ                                   19
#define AVR32_USB_UECON4_STALLRQ_MASK                      0x00080000
#define AVR32_USB_UECON4_STALLRQ_OFFSET                            19
#define AVR32_USB_UECON4_STALLRQ_SIZE                               1
#define AVR32_USB_UECON4_TXINE                                      0
#define AVR32_USB_UECON4_TXINE_MASK                        0x00000001
#define AVR32_USB_UECON4_TXINE_OFFSET                               0
#define AVR32_USB_UECON4_TXINE_SIZE                                 1
#define AVR32_USB_UECON5                                   0x000001d4
#define AVR32_USB_UECON5CLR                                0x00000234
#define AVR32_USB_UECON5CLR_DATAXEC                                 9
#define AVR32_USB_UECON5CLR_DATAXEC_MASK                   0x00000200
#define AVR32_USB_UECON5CLR_DATAXEC_OFFSET                          9
#define AVR32_USB_UECON5CLR_DATAXEC_SIZE                            1
#define AVR32_USB_UECON5CLR_EPDISHDMAC                             16
#define AVR32_USB_UECON5CLR_EPDISHDMAC_MASK                0x00010000
#define AVR32_USB_UECON5CLR_EPDISHDMAC_OFFSET                      16
#define AVR32_USB_UECON5CLR_EPDISHDMAC_SIZE                         1
#define AVR32_USB_UECON5CLR_ERRORTRANSEC                           10
#define AVR32_USB_UECON5CLR_ERRORTRANSEC_MASK              0x00000400
#define AVR32_USB_UECON5CLR_ERRORTRANSEC_OFFSET                    10
#define AVR32_USB_UECON5CLR_ERRORTRANSEC_SIZE                       1
#define AVR32_USB_UECON5CLR_FIFOCONC                               14
#define AVR32_USB_UECON5CLR_FIFOCONC_MASK                  0x00004000
#define AVR32_USB_UECON5CLR_FIFOCONC_OFFSET                        14
#define AVR32_USB_UECON5CLR_FIFOCONC_SIZE                           1
#define AVR32_USB_UECON5CLR_MASK                           0x000b57ff
#define AVR32_USB_UECON5CLR_MDATAEC                                 8
#define AVR32_USB_UECON5CLR_MDATAEC_MASK                   0x00000100
#define AVR32_USB_UECON5CLR_MDATAEC_OFFSET                          8
#define AVR32_USB_UECON5CLR_MDATAEC_SIZE                            1
#define AVR32_USB_UECON5CLR_NAKINEC                                 4
#define AVR32_USB_UECON5CLR_NAKINEC_MASK                   0x00000010
#define AVR32_USB_UECON5CLR_NAKINEC_OFFSET                          4
#define AVR32_USB_UECON5CLR_NAKINEC_SIZE                            1
#define AVR32_USB_UECON5CLR_NAKOUTEC                                3
#define AVR32_USB_UECON5CLR_NAKOUTEC_MASK                  0x00000008
#define AVR32_USB_UECON5CLR_NAKOUTEC_OFFSET                         3
#define AVR32_USB_UECON5CLR_NAKOUTEC_SIZE                           1
#define AVR32_USB_UECON5CLR_NBUSYBKEC                              12
#define AVR32_USB_UECON5CLR_NBUSYBKEC_MASK                 0x00001000
#define AVR32_USB_UECON5CLR_NBUSYBKEC_OFFSET                       12
#define AVR32_USB_UECON5CLR_NBUSYBKEC_SIZE                          1
#define AVR32_USB_UECON5CLR_NYETDISC                               17
#define AVR32_USB_UECON5CLR_NYETDISC_MASK                  0x00020000
#define AVR32_USB_UECON5CLR_NYETDISC_OFFSET                        17
#define AVR32_USB_UECON5CLR_NYETDISC_SIZE                           1
#define AVR32_USB_UECON5CLR_OVERFEC                                 5
#define AVR32_USB_UECON5CLR_OVERFEC_MASK                   0x00000020
#define AVR32_USB_UECON5CLR_OVERFEC_OFFSET                          5
#define AVR32_USB_UECON5CLR_OVERFEC_SIZE                            1
#define AVR32_USB_UECON5CLR_RESETVALUE                     0x00000000
#define AVR32_USB_UECON5CLR_RXOUTEC                                 1
#define AVR32_USB_UECON5CLR_RXOUTEC_MASK                   0x00000002
#define AVR32_USB_UECON5CLR_RXOUTEC_OFFSET                          1
#define AVR32_USB_UECON5CLR_RXOUTEC_SIZE                            1
#define AVR32_USB_UECON5CLR_RXSTPEC                                 2
#define AVR32_USB_UECON5CLR_RXSTPEC_MASK                   0x00000004
#define AVR32_USB_UECON5CLR_RXSTPEC_OFFSET                          2
#define AVR32_USB_UECON5CLR_RXSTPEC_SIZE                            1
#define AVR32_USB_UECON5CLR_SHORTPACKETEC                           7
#define AVR32_USB_UECON5CLR_SHORTPACKETEC_MASK             0x00000080
#define AVR32_USB_UECON5CLR_SHORTPACKETEC_OFFSET                    7
#define AVR32_USB_UECON5CLR_SHORTPACKETEC_SIZE                      1
#define AVR32_USB_UECON5CLR_STALLEDEC                               6
#define AVR32_USB_UECON5CLR_STALLEDEC_MASK                 0x00000040
#define AVR32_USB_UECON5CLR_STALLEDEC_OFFSET                        6
#define AVR32_USB_UECON5CLR_STALLEDEC_SIZE                          1
#define AVR32_USB_UECON5CLR_STALLRQC                               19
#define AVR32_USB_UECON5CLR_STALLRQC_MASK                  0x00080000
#define AVR32_USB_UECON5CLR_STALLRQC_OFFSET                        19
#define AVR32_USB_UECON5CLR_STALLRQC_SIZE                           1
#define AVR32_USB_UECON5CLR_TXINEC                                  0
#define AVR32_USB_UECON5CLR_TXINEC_MASK                    0x00000001
#define AVR32_USB_UECON5CLR_TXINEC_OFFSET                           0
#define AVR32_USB_UECON5CLR_TXINEC_SIZE                             1
#define AVR32_USB_UECON5SET                                0x00000204
#define AVR32_USB_UECON5SET_DATAXES                                 9
#define AVR32_USB_UECON5SET_DATAXES_MASK                   0x00000200
#define AVR32_USB_UECON5SET_DATAXES_OFFSET                          9
#define AVR32_USB_UECON5SET_DATAXES_SIZE                            1
#define AVR32_USB_UECON5SET_EPDISHDMAS                             16
#define AVR32_USB_UECON5SET_EPDISHDMAS_MASK                0x00010000
#define AVR32_USB_UECON5SET_EPDISHDMAS_OFFSET                      16
#define AVR32_USB_UECON5SET_EPDISHDMAS_SIZE                         1
#define AVR32_USB_UECON5SET_ERRORTRANSES                           10
#define AVR32_USB_UECON5SET_ERRORTRANSES_MASK              0x00000400
#define AVR32_USB_UECON5SET_ERRORTRANSES_OFFSET                    10
#define AVR32_USB_UECON5SET_ERRORTRANSES_SIZE                       1
#define AVR32_USB_UECON5SET_KILLBKS                                13
#define AVR32_USB_UECON5SET_KILLBKS_MASK                   0x00002000
#define AVR32_USB_UECON5SET_KILLBKS_OFFSET                         13
#define AVR32_USB_UECON5SET_KILLBKS_SIZE                            1
#define AVR32_USB_UECON5SET_MASK                           0x000f37ff
#define AVR32_USB_UECON5SET_MDATAES                                 8
#define AVR32_USB_UECON5SET_MDATAES_MASK                   0x00000100
#define AVR32_USB_UECON5SET_MDATAES_OFFSET                          8
#define AVR32_USB_UECON5SET_MDATAES_SIZE                            1
#define AVR32_USB_UECON5SET_NAKINES                                 4
#define AVR32_USB_UECON5SET_NAKINES_MASK                   0x00000010
#define AVR32_USB_UECON5SET_NAKINES_OFFSET                          4
#define AVR32_USB_UECON5SET_NAKINES_SIZE                            1
#define AVR32_USB_UECON5SET_NAKOUTES                                3
#define AVR32_USB_UECON5SET_NAKOUTES_MASK                  0x00000008
#define AVR32_USB_UECON5SET_NAKOUTES_OFFSET                         3
#define AVR32_USB_UECON5SET_NAKOUTES_SIZE                           1
#define AVR32_USB_UECON5SET_NBUSYBKES                              12
#define AVR32_USB_UECON5SET_NBUSYBKES_MASK                 0x00001000
#define AVR32_USB_UECON5SET_NBUSYBKES_OFFSET                       12
#define AVR32_USB_UECON5SET_NBUSYBKES_SIZE                          1
#define AVR32_USB_UECON5SET_NYETDISS                               17
#define AVR32_USB_UECON5SET_NYETDISS_MASK                  0x00020000
#define AVR32_USB_UECON5SET_NYETDISS_OFFSET                        17
#define AVR32_USB_UECON5SET_NYETDISS_SIZE                           1
#define AVR32_USB_UECON5SET_OVERFES                                 5
#define AVR32_USB_UECON5SET_OVERFES_MASK                   0x00000020
#define AVR32_USB_UECON5SET_OVERFES_OFFSET                          5
#define AVR32_USB_UECON5SET_OVERFES_SIZE                            1
#define AVR32_USB_UECON5SET_RESETVALUE                     0x00000000
#define AVR32_USB_UECON5SET_RSTDTS                                 18
#define AVR32_USB_UECON5SET_RSTDTS_MASK                    0x00040000
#define AVR32_USB_UECON5SET_RSTDTS_OFFSET                          18
#define AVR32_USB_UECON5SET_RSTDTS_SIZE                             1
#define AVR32_USB_UECON5SET_RXOUTES                                 1
#define AVR32_USB_UECON5SET_RXOUTES_MASK                   0x00000002
#define AVR32_USB_UECON5SET_RXOUTES_OFFSET                          1
#define AVR32_USB_UECON5SET_RXOUTES_SIZE                            1
#define AVR32_USB_UECON5SET_RXSTPES                                 2
#define AVR32_USB_UECON5SET_RXSTPES_MASK                   0x00000004
#define AVR32_USB_UECON5SET_RXSTPES_OFFSET                          2
#define AVR32_USB_UECON5SET_RXSTPES_SIZE                            1
#define AVR32_USB_UECON5SET_SHORTPACKETES                           7
#define AVR32_USB_UECON5SET_SHORTPACKETES_MASK             0x00000080
#define AVR32_USB_UECON5SET_SHORTPACKETES_OFFSET                    7
#define AVR32_USB_UECON5SET_SHORTPACKETES_SIZE                      1
#define AVR32_USB_UECON5SET_STALLEDES                               6
#define AVR32_USB_UECON5SET_STALLEDES_MASK                 0x00000040
#define AVR32_USB_UECON5SET_STALLEDES_OFFSET                        6
#define AVR32_USB_UECON5SET_STALLEDES_SIZE                          1
#define AVR32_USB_UECON5SET_STALLRQS                               19
#define AVR32_USB_UECON5SET_STALLRQS_MASK                  0x00080000
#define AVR32_USB_UECON5SET_STALLRQS_OFFSET                        19
#define AVR32_USB_UECON5SET_STALLRQS_SIZE                           1
#define AVR32_USB_UECON5SET_TXINES                                  0
#define AVR32_USB_UECON5SET_TXINES_MASK                    0x00000001
#define AVR32_USB_UECON5SET_TXINES_OFFSET                           0
#define AVR32_USB_UECON5SET_TXINES_SIZE                             1
#define AVR32_USB_UECON5_DATAXE                                     9
#define AVR32_USB_UECON5_DATAXE_MASK                       0x00000200
#define AVR32_USB_UECON5_DATAXE_OFFSET                              9
#define AVR32_USB_UECON5_DATAXE_SIZE                                1
#define AVR32_USB_UECON5_EPDISHDMA                                 16
#define AVR32_USB_UECON5_EPDISHDMA_MASK                    0x00010000
#define AVR32_USB_UECON5_EPDISHDMA_OFFSET                          16
#define AVR32_USB_UECON5_EPDISHDMA_SIZE                             1
#define AVR32_USB_UECON5_ERRORTRANSE                               10
#define AVR32_USB_UECON5_ERRORTRANSE_MASK                  0x00000400
#define AVR32_USB_UECON5_ERRORTRANSE_OFFSET                        10
#define AVR32_USB_UECON5_ERRORTRANSE_SIZE                           1
#define AVR32_USB_UECON5_FIFOCON                                   14
#define AVR32_USB_UECON5_FIFOCON_MASK                      0x00004000
#define AVR32_USB_UECON5_FIFOCON_OFFSET                            14
#define AVR32_USB_UECON5_FIFOCON_SIZE                               1
#define AVR32_USB_UECON5_KILLBK                                    13
#define AVR32_USB_UECON5_KILLBK_MASK                       0x00002000
#define AVR32_USB_UECON5_KILLBK_OFFSET                             13
#define AVR32_USB_UECON5_KILLBK_SIZE                                1
#define AVR32_USB_UECON5_MASK                              0x000f77ff
#define AVR32_USB_UECON5_MDATAE                                     8
#define AVR32_USB_UECON5_MDATAE_MASK                       0x00000100
#define AVR32_USB_UECON5_MDATAE_OFFSET                              8
#define AVR32_USB_UECON5_MDATAE_SIZE                                1
#define AVR32_USB_UECON5_NAKINE                                     4
#define AVR32_USB_UECON5_NAKINE_MASK                       0x00000010
#define AVR32_USB_UECON5_NAKINE_OFFSET                              4
#define AVR32_USB_UECON5_NAKINE_SIZE                                1
#define AVR32_USB_UECON5_NAKOUTE                                    3
#define AVR32_USB_UECON5_NAKOUTE_MASK                      0x00000008
#define AVR32_USB_UECON5_NAKOUTE_OFFSET                             3
#define AVR32_USB_UECON5_NAKOUTE_SIZE                               1
#define AVR32_USB_UECON5_NBUSYBKE                                  12
#define AVR32_USB_UECON5_NBUSYBKE_MASK                     0x00001000
#define AVR32_USB_UECON5_NBUSYBKE_OFFSET                           12
#define AVR32_USB_UECON5_NBUSYBKE_SIZE                              1
#define AVR32_USB_UECON5_NYETDIS                                   17
#define AVR32_USB_UECON5_NYETDIS_MASK                      0x00020000
#define AVR32_USB_UECON5_NYETDIS_OFFSET                            17
#define AVR32_USB_UECON5_NYETDIS_SIZE                               1
#define AVR32_USB_UECON5_OVERFE                                     5
#define AVR32_USB_UECON5_OVERFE_MASK                       0x00000020
#define AVR32_USB_UECON5_OVERFE_OFFSET                              5
#define AVR32_USB_UECON5_OVERFE_SIZE                                1
#define AVR32_USB_UECON5_RESETVALUE                        0x00000000
#define AVR32_USB_UECON5_RSTDT                                     18
#define AVR32_USB_UECON5_RSTDT_MASK                        0x00040000
#define AVR32_USB_UECON5_RSTDT_OFFSET                              18
#define AVR32_USB_UECON5_RSTDT_SIZE                                 1
#define AVR32_USB_UECON5_RXOUTE                                     1
#define AVR32_USB_UECON5_RXOUTE_MASK                       0x00000002
#define AVR32_USB_UECON5_RXOUTE_OFFSET                              1
#define AVR32_USB_UECON5_RXOUTE_SIZE                                1
#define AVR32_USB_UECON5_RXSTPE                                     2
#define AVR32_USB_UECON5_RXSTPE_MASK                       0x00000004
#define AVR32_USB_UECON5_RXSTPE_OFFSET                              2
#define AVR32_USB_UECON5_RXSTPE_SIZE                                1
#define AVR32_USB_UECON5_SHORTPACKETE                               7
#define AVR32_USB_UECON5_SHORTPACKETE_MASK                 0x00000080
#define AVR32_USB_UECON5_SHORTPACKETE_OFFSET                        7
#define AVR32_USB_UECON5_SHORTPACKETE_SIZE                          1
#define AVR32_USB_UECON5_STALLEDE                                   6
#define AVR32_USB_UECON5_STALLEDE_MASK                     0x00000040
#define AVR32_USB_UECON5_STALLEDE_OFFSET                            6
#define AVR32_USB_UECON5_STALLEDE_SIZE                              1
#define AVR32_USB_UECON5_STALLRQ                                   19
#define AVR32_USB_UECON5_STALLRQ_MASK                      0x00080000
#define AVR32_USB_UECON5_STALLRQ_OFFSET                            19
#define AVR32_USB_UECON5_STALLRQ_SIZE                               1
#define AVR32_USB_UECON5_TXINE                                      0
#define AVR32_USB_UECON5_TXINE_MASK                        0x00000001
#define AVR32_USB_UECON5_TXINE_OFFSET                               0
#define AVR32_USB_UECON5_TXINE_SIZE                                 1
#define AVR32_USB_UECON6                                   0x000001d8
#define AVR32_USB_UECON6CLR                                0x00000238
#define AVR32_USB_UECON6CLR_DATAXEC                                 9
#define AVR32_USB_UECON6CLR_DATAXEC_MASK                   0x00000200
#define AVR32_USB_UECON6CLR_DATAXEC_OFFSET                          9
#define AVR32_USB_UECON6CLR_DATAXEC_SIZE                            1
#define AVR32_USB_UECON6CLR_EPDISHDMAC                             16
#define AVR32_USB_UECON6CLR_EPDISHDMAC_MASK                0x00010000
#define AVR32_USB_UECON6CLR_EPDISHDMAC_OFFSET                      16
#define AVR32_USB_UECON6CLR_EPDISHDMAC_SIZE                         1
#define AVR32_USB_UECON6CLR_ERRORTRANSEC                           10
#define AVR32_USB_UECON6CLR_ERRORTRANSEC_MASK              0x00000400
#define AVR32_USB_UECON6CLR_ERRORTRANSEC_OFFSET                    10
#define AVR32_USB_UECON6CLR_ERRORTRANSEC_SIZE                       1
#define AVR32_USB_UECON6CLR_FIFOCONC                               14
#define AVR32_USB_UECON6CLR_FIFOCONC_MASK                  0x00004000
#define AVR32_USB_UECON6CLR_FIFOCONC_OFFSET                        14
#define AVR32_USB_UECON6CLR_FIFOCONC_SIZE                           1
#define AVR32_USB_UECON6CLR_MASK                           0x000b57ff
#define AVR32_USB_UECON6CLR_MDATAEC                                 8
#define AVR32_USB_UECON6CLR_MDATAEC_MASK                   0x00000100
#define AVR32_USB_UECON6CLR_MDATAEC_OFFSET                          8
#define AVR32_USB_UECON6CLR_MDATAEC_SIZE                            1
#define AVR32_USB_UECON6CLR_NAKINEC                                 4
#define AVR32_USB_UECON6CLR_NAKINEC_MASK                   0x00000010
#define AVR32_USB_UECON6CLR_NAKINEC_OFFSET                          4
#define AVR32_USB_UECON6CLR_NAKINEC_SIZE                            1
#define AVR32_USB_UECON6CLR_NAKOUTEC                                3
#define AVR32_USB_UECON6CLR_NAKOUTEC_MASK                  0x00000008
#define AVR32_USB_UECON6CLR_NAKOUTEC_OFFSET                         3
#define AVR32_USB_UECON6CLR_NAKOUTEC_SIZE                           1
#define AVR32_USB_UECON6CLR_NBUSYBKEC                              12
#define AVR32_USB_UECON6CLR_NBUSYBKEC_MASK                 0x00001000
#define AVR32_USB_UECON6CLR_NBUSYBKEC_OFFSET                       12
#define AVR32_USB_UECON6CLR_NBUSYBKEC_SIZE                          1
#define AVR32_USB_UECON6CLR_NYETDISC                               17
#define AVR32_USB_UECON6CLR_NYETDISC_MASK                  0x00020000
#define AVR32_USB_UECON6CLR_NYETDISC_OFFSET                        17
#define AVR32_USB_UECON6CLR_NYETDISC_SIZE                           1
#define AVR32_USB_UECON6CLR_OVERFEC                                 5
#define AVR32_USB_UECON6CLR_OVERFEC_MASK                   0x00000020
#define AVR32_USB_UECON6CLR_OVERFEC_OFFSET                          5
#define AVR32_USB_UECON6CLR_OVERFEC_SIZE                            1
#define AVR32_USB_UECON6CLR_RESETVALUE                     0x00000000
#define AVR32_USB_UECON6CLR_RXOUTEC                                 1
#define AVR32_USB_UECON6CLR_RXOUTEC_MASK                   0x00000002
#define AVR32_USB_UECON6CLR_RXOUTEC_OFFSET                          1
#define AVR32_USB_UECON6CLR_RXOUTEC_SIZE                            1
#define AVR32_USB_UECON6CLR_RXSTPEC                                 2
#define AVR32_USB_UECON6CLR_RXSTPEC_MASK                   0x00000004
#define AVR32_USB_UECON6CLR_RXSTPEC_OFFSET                          2
#define AVR32_USB_UECON6CLR_RXSTPEC_SIZE                            1
#define AVR32_USB_UECON6CLR_SHORTPACKETEC                           7
#define AVR32_USB_UECON6CLR_SHORTPACKETEC_MASK             0x00000080
#define AVR32_USB_UECON6CLR_SHORTPACKETEC_OFFSET                    7
#define AVR32_USB_UECON6CLR_SHORTPACKETEC_SIZE                      1
#define AVR32_USB_UECON6CLR_STALLEDEC                               6
#define AVR32_USB_UECON6CLR_STALLEDEC_MASK                 0x00000040
#define AVR32_USB_UECON6CLR_STALLEDEC_OFFSET                        6
#define AVR32_USB_UECON6CLR_STALLEDEC_SIZE                          1
#define AVR32_USB_UECON6CLR_STALLRQC                               19
#define AVR32_USB_UECON6CLR_STALLRQC_MASK                  0x00080000
#define AVR32_USB_UECON6CLR_STALLRQC_OFFSET                        19
#define AVR32_USB_UECON6CLR_STALLRQC_SIZE                           1
#define AVR32_USB_UECON6CLR_TXINEC                                  0
#define AVR32_USB_UECON6CLR_TXINEC_MASK                    0x00000001
#define AVR32_USB_UECON6CLR_TXINEC_OFFSET                           0
#define AVR32_USB_UECON6CLR_TXINEC_SIZE                             1
#define AVR32_USB_UECON6SET                                0x00000208
#define AVR32_USB_UECON6SET_DATAXES                                 9
#define AVR32_USB_UECON6SET_DATAXES_MASK                   0x00000200
#define AVR32_USB_UECON6SET_DATAXES_OFFSET                          9
#define AVR32_USB_UECON6SET_DATAXES_SIZE                            1
#define AVR32_USB_UECON6SET_EPDISHDMAS                             16
#define AVR32_USB_UECON6SET_EPDISHDMAS_MASK                0x00010000
#define AVR32_USB_UECON6SET_EPDISHDMAS_OFFSET                      16
#define AVR32_USB_UECON6SET_EPDISHDMAS_SIZE                         1
#define AVR32_USB_UECON6SET_ERRORTRANSES                           10
#define AVR32_USB_UECON6SET_ERRORTRANSES_MASK              0x00000400
#define AVR32_USB_UECON6SET_ERRORTRANSES_OFFSET                    10
#define AVR32_USB_UECON6SET_ERRORTRANSES_SIZE                       1
#define AVR32_USB_UECON6SET_KILLBKS                                13
#define AVR32_USB_UECON6SET_KILLBKS_MASK                   0x00002000
#define AVR32_USB_UECON6SET_KILLBKS_OFFSET                         13
#define AVR32_USB_UECON6SET_KILLBKS_SIZE                            1
#define AVR32_USB_UECON6SET_MASK                           0x000f37ff
#define AVR32_USB_UECON6SET_MDATAES                                 8
#define AVR32_USB_UECON6SET_MDATAES_MASK                   0x00000100
#define AVR32_USB_UECON6SET_MDATAES_OFFSET                          8
#define AVR32_USB_UECON6SET_MDATAES_SIZE                            1
#define AVR32_USB_UECON6SET_NAKINES                                 4
#define AVR32_USB_UECON6SET_NAKINES_MASK                   0x00000010
#define AVR32_USB_UECON6SET_NAKINES_OFFSET                          4
#define AVR32_USB_UECON6SET_NAKINES_SIZE                            1
#define AVR32_USB_UECON6SET_NAKOUTES                                3
#define AVR32_USB_UECON6SET_NAKOUTES_MASK                  0x00000008
#define AVR32_USB_UECON6SET_NAKOUTES_OFFSET                         3
#define AVR32_USB_UECON6SET_NAKOUTES_SIZE                           1
#define AVR32_USB_UECON6SET_NBUSYBKES                              12
#define AVR32_USB_UECON6SET_NBUSYBKES_MASK                 0x00001000
#define AVR32_USB_UECON6SET_NBUSYBKES_OFFSET                       12
#define AVR32_USB_UECON6SET_NBUSYBKES_SIZE                          1
#define AVR32_USB_UECON6SET_NYETDISS                               17
#define AVR32_USB_UECON6SET_NYETDISS_MASK                  0x00020000
#define AVR32_USB_UECON6SET_NYETDISS_OFFSET                        17
#define AVR32_USB_UECON6SET_NYETDISS_SIZE                           1
#define AVR32_USB_UECON6SET_OVERFES                                 5
#define AVR32_USB_UECON6SET_OVERFES_MASK                   0x00000020
#define AVR32_USB_UECON6SET_OVERFES_OFFSET                          5
#define AVR32_USB_UECON6SET_OVERFES_SIZE                            1
#define AVR32_USB_UECON6SET_RESETVALUE                     0x00000000
#define AVR32_USB_UECON6SET_RSTDTS                                 18
#define AVR32_USB_UECON6SET_RSTDTS_MASK                    0x00040000
#define AVR32_USB_UECON6SET_RSTDTS_OFFSET                          18
#define AVR32_USB_UECON6SET_RSTDTS_SIZE                             1
#define AVR32_USB_UECON6SET_RXOUTES                                 1
#define AVR32_USB_UECON6SET_RXOUTES_MASK                   0x00000002
#define AVR32_USB_UECON6SET_RXOUTES_OFFSET                          1
#define AVR32_USB_UECON6SET_RXOUTES_SIZE                            1
#define AVR32_USB_UECON6SET_RXSTPES                                 2
#define AVR32_USB_UECON6SET_RXSTPES_MASK                   0x00000004
#define AVR32_USB_UECON6SET_RXSTPES_OFFSET                          2
#define AVR32_USB_UECON6SET_RXSTPES_SIZE                            1
#define AVR32_USB_UECON6SET_SHORTPACKETES                           7
#define AVR32_USB_UECON6SET_SHORTPACKETES_MASK             0x00000080
#define AVR32_USB_UECON6SET_SHORTPACKETES_OFFSET                    7
#define AVR32_USB_UECON6SET_SHORTPACKETES_SIZE                      1
#define AVR32_USB_UECON6SET_STALLEDES                               6
#define AVR32_USB_UECON6SET_STALLEDES_MASK                 0x00000040
#define AVR32_USB_UECON6SET_STALLEDES_OFFSET                        6
#define AVR32_USB_UECON6SET_STALLEDES_SIZE                          1
#define AVR32_USB_UECON6SET_STALLRQS                               19
#define AVR32_USB_UECON6SET_STALLRQS_MASK                  0x00080000
#define AVR32_USB_UECON6SET_STALLRQS_OFFSET                        19
#define AVR32_USB_UECON6SET_STALLRQS_SIZE                           1
#define AVR32_USB_UECON6SET_TXINES                                  0
#define AVR32_USB_UECON6SET_TXINES_MASK                    0x00000001
#define AVR32_USB_UECON6SET_TXINES_OFFSET                           0
#define AVR32_USB_UECON6SET_TXINES_SIZE                             1
#define AVR32_USB_UECON6_DATAXE                                     9
#define AVR32_USB_UECON6_DATAXE_MASK                       0x00000200
#define AVR32_USB_UECON6_DATAXE_OFFSET                              9
#define AVR32_USB_UECON6_DATAXE_SIZE                                1
#define AVR32_USB_UECON6_EPDISHDMA                                 16
#define AVR32_USB_UECON6_EPDISHDMA_MASK                    0x00010000
#define AVR32_USB_UECON6_EPDISHDMA_OFFSET                          16
#define AVR32_USB_UECON6_EPDISHDMA_SIZE                             1
#define AVR32_USB_UECON6_ERRORTRANSE                               10
#define AVR32_USB_UECON6_ERRORTRANSE_MASK                  0x00000400
#define AVR32_USB_UECON6_ERRORTRANSE_OFFSET                        10
#define AVR32_USB_UECON6_ERRORTRANSE_SIZE                           1
#define AVR32_USB_UECON6_FIFOCON                                   14
#define AVR32_USB_UECON6_FIFOCON_MASK                      0x00004000
#define AVR32_USB_UECON6_FIFOCON_OFFSET                            14
#define AVR32_USB_UECON6_FIFOCON_SIZE                               1
#define AVR32_USB_UECON6_KILLBK                                    13
#define AVR32_USB_UECON6_KILLBK_MASK                       0x00002000
#define AVR32_USB_UECON6_KILLBK_OFFSET                             13
#define AVR32_USB_UECON6_KILLBK_SIZE                                1
#define AVR32_USB_UECON6_MASK                              0x000f77ff
#define AVR32_USB_UECON6_MDATAE                                     8
#define AVR32_USB_UECON6_MDATAE_MASK                       0x00000100
#define AVR32_USB_UECON6_MDATAE_OFFSET                              8
#define AVR32_USB_UECON6_MDATAE_SIZE                                1
#define AVR32_USB_UECON6_NAKINE                                     4
#define AVR32_USB_UECON6_NAKINE_MASK                       0x00000010
#define AVR32_USB_UECON6_NAKINE_OFFSET                              4
#define AVR32_USB_UECON6_NAKINE_SIZE                                1
#define AVR32_USB_UECON6_NAKOUTE                                    3
#define AVR32_USB_UECON6_NAKOUTE_MASK                      0x00000008
#define AVR32_USB_UECON6_NAKOUTE_OFFSET                             3
#define AVR32_USB_UECON6_NAKOUTE_SIZE                               1
#define AVR32_USB_UECON6_NBUSYBKE                                  12
#define AVR32_USB_UECON6_NBUSYBKE_MASK                     0x00001000
#define AVR32_USB_UECON6_NBUSYBKE_OFFSET                           12
#define AVR32_USB_UECON6_NBUSYBKE_SIZE                              1
#define AVR32_USB_UECON6_NYETDIS                                   17
#define AVR32_USB_UECON6_NYETDIS_MASK                      0x00020000
#define AVR32_USB_UECON6_NYETDIS_OFFSET                            17
#define AVR32_USB_UECON6_NYETDIS_SIZE                               1
#define AVR32_USB_UECON6_OVERFE                                     5
#define AVR32_USB_UECON6_OVERFE_MASK                       0x00000020
#define AVR32_USB_UECON6_OVERFE_OFFSET                              5
#define AVR32_USB_UECON6_OVERFE_SIZE                                1
#define AVR32_USB_UECON6_RESETVALUE                        0x00000000
#define AVR32_USB_UECON6_RSTDT                                     18
#define AVR32_USB_UECON6_RSTDT_MASK                        0x00040000
#define AVR32_USB_UECON6_RSTDT_OFFSET                              18
#define AVR32_USB_UECON6_RSTDT_SIZE                                 1
#define AVR32_USB_UECON6_RXOUTE                                     1
#define AVR32_USB_UECON6_RXOUTE_MASK                       0x00000002
#define AVR32_USB_UECON6_RXOUTE_OFFSET                              1
#define AVR32_USB_UECON6_RXOUTE_SIZE                                1
#define AVR32_USB_UECON6_RXSTPE                                     2
#define AVR32_USB_UECON6_RXSTPE_MASK                       0x00000004
#define AVR32_USB_UECON6_RXSTPE_OFFSET                              2
#define AVR32_USB_UECON6_RXSTPE_SIZE                                1
#define AVR32_USB_UECON6_SHORTPACKETE                               7
#define AVR32_USB_UECON6_SHORTPACKETE_MASK                 0x00000080
#define AVR32_USB_UECON6_SHORTPACKETE_OFFSET                        7
#define AVR32_USB_UECON6_SHORTPACKETE_SIZE                          1
#define AVR32_USB_UECON6_STALLEDE                                   6
#define AVR32_USB_UECON6_STALLEDE_MASK                     0x00000040
#define AVR32_USB_UECON6_STALLEDE_OFFSET                            6
#define AVR32_USB_UECON6_STALLEDE_SIZE                              1
#define AVR32_USB_UECON6_STALLRQ                                   19
#define AVR32_USB_UECON6_STALLRQ_MASK                      0x00080000
#define AVR32_USB_UECON6_STALLRQ_OFFSET                            19
#define AVR32_USB_UECON6_STALLRQ_SIZE                               1
#define AVR32_USB_UECON6_TXINE                                      0
#define AVR32_USB_UECON6_TXINE_MASK                        0x00000001
#define AVR32_USB_UECON6_TXINE_OFFSET                               0
#define AVR32_USB_UECON6_TXINE_SIZE                                 1
#define AVR32_USB_UECON7                                   0x000001dc
#define AVR32_USB_UECON7CLR                                0x0000023c
#define AVR32_USB_UECON7CLR_DATAXEC                                 9
#define AVR32_USB_UECON7CLR_DATAXEC_MASK                   0x00000200
#define AVR32_USB_UECON7CLR_DATAXEC_OFFSET                          9
#define AVR32_USB_UECON7CLR_DATAXEC_SIZE                            1
#define AVR32_USB_UECON7CLR_EPDISHDMAC                             16
#define AVR32_USB_UECON7CLR_EPDISHDMAC_MASK                0x00010000
#define AVR32_USB_UECON7CLR_EPDISHDMAC_OFFSET                      16
#define AVR32_USB_UECON7CLR_EPDISHDMAC_SIZE                         1
#define AVR32_USB_UECON7CLR_ERRORTRANSEC                           10
#define AVR32_USB_UECON7CLR_ERRORTRANSEC_MASK              0x00000400
#define AVR32_USB_UECON7CLR_ERRORTRANSEC_OFFSET                    10
#define AVR32_USB_UECON7CLR_ERRORTRANSEC_SIZE                       1
#define AVR32_USB_UECON7CLR_FIFOCONC                               14
#define AVR32_USB_UECON7CLR_FIFOCONC_MASK                  0x00004000
#define AVR32_USB_UECON7CLR_FIFOCONC_OFFSET                        14
#define AVR32_USB_UECON7CLR_FIFOCONC_SIZE                           1
#define AVR32_USB_UECON7CLR_MASK                           0x000b57ff
#define AVR32_USB_UECON7CLR_MDATAEC                                 8
#define AVR32_USB_UECON7CLR_MDATAEC_MASK                   0x00000100
#define AVR32_USB_UECON7CLR_MDATAEC_OFFSET                          8
#define AVR32_USB_UECON7CLR_MDATAEC_SIZE                            1
#define AVR32_USB_UECON7CLR_NAKINEC                                 4
#define AVR32_USB_UECON7CLR_NAKINEC_MASK                   0x00000010
#define AVR32_USB_UECON7CLR_NAKINEC_OFFSET                          4
#define AVR32_USB_UECON7CLR_NAKINEC_SIZE                            1
#define AVR32_USB_UECON7CLR_NAKOUTEC                                3
#define AVR32_USB_UECON7CLR_NAKOUTEC_MASK                  0x00000008
#define AVR32_USB_UECON7CLR_NAKOUTEC_OFFSET                         3
#define AVR32_USB_UECON7CLR_NAKOUTEC_SIZE                           1
#define AVR32_USB_UECON7CLR_NBUSYBKEC                              12
#define AVR32_USB_UECON7CLR_NBUSYBKEC_MASK                 0x00001000
#define AVR32_USB_UECON7CLR_NBUSYBKEC_OFFSET                       12
#define AVR32_USB_UECON7CLR_NBUSYBKEC_SIZE                          1
#define AVR32_USB_UECON7CLR_NYETDISC                               17
#define AVR32_USB_UECON7CLR_NYETDISC_MASK                  0x00020000
#define AVR32_USB_UECON7CLR_NYETDISC_OFFSET                        17
#define AVR32_USB_UECON7CLR_NYETDISC_SIZE                           1
#define AVR32_USB_UECON7CLR_OVERFEC                                 5
#define AVR32_USB_UECON7CLR_OVERFEC_MASK                   0x00000020
#define AVR32_USB_UECON7CLR_OVERFEC_OFFSET                          5
#define AVR32_USB_UECON7CLR_OVERFEC_SIZE                            1
#define AVR32_USB_UECON7CLR_RESETVALUE                     0x00000000
#define AVR32_USB_UECON7CLR_RXOUTEC                                 1
#define AVR32_USB_UECON7CLR_RXOUTEC_MASK                   0x00000002
#define AVR32_USB_UECON7CLR_RXOUTEC_OFFSET                          1
#define AVR32_USB_UECON7CLR_RXOUTEC_SIZE                            1
#define AVR32_USB_UECON7CLR_RXSTPEC                                 2
#define AVR32_USB_UECON7CLR_RXSTPEC_MASK                   0x00000004
#define AVR32_USB_UECON7CLR_RXSTPEC_OFFSET                          2
#define AVR32_USB_UECON7CLR_RXSTPEC_SIZE                            1
#define AVR32_USB_UECON7CLR_SHORTPACKETEC                           7
#define AVR32_USB_UECON7CLR_SHORTPACKETEC_MASK             0x00000080
#define AVR32_USB_UECON7CLR_SHORTPACKETEC_OFFSET                    7
#define AVR32_USB_UECON7CLR_SHORTPACKETEC_SIZE                      1
#define AVR32_USB_UECON7CLR_STALLEDEC                               6
#define AVR32_USB_UECON7CLR_STALLEDEC_MASK                 0x00000040
#define AVR32_USB_UECON7CLR_STALLEDEC_OFFSET                        6
#define AVR32_USB_UECON7CLR_STALLEDEC_SIZE                          1
#define AVR32_USB_UECON7CLR_STALLRQC                               19
#define AVR32_USB_UECON7CLR_STALLRQC_MASK                  0x00080000
#define AVR32_USB_UECON7CLR_STALLRQC_OFFSET                        19
#define AVR32_USB_UECON7CLR_STALLRQC_SIZE                           1
#define AVR32_USB_UECON7CLR_TXINEC                                  0
#define AVR32_USB_UECON7CLR_TXINEC_MASK                    0x00000001
#define AVR32_USB_UECON7CLR_TXINEC_OFFSET                           0
#define AVR32_USB_UECON7CLR_TXINEC_SIZE                             1
#define AVR32_USB_UECON7SET                                0x0000020c
#define AVR32_USB_UECON7SET_DATAXES                                 9
#define AVR32_USB_UECON7SET_DATAXES_MASK                   0x00000200
#define AVR32_USB_UECON7SET_DATAXES_OFFSET                          9
#define AVR32_USB_UECON7SET_DATAXES_SIZE                            1
#define AVR32_USB_UECON7SET_EPDISHDMAS                             16
#define AVR32_USB_UECON7SET_EPDISHDMAS_MASK                0x00010000
#define AVR32_USB_UECON7SET_EPDISHDMAS_OFFSET                      16
#define AVR32_USB_UECON7SET_EPDISHDMAS_SIZE                         1
#define AVR32_USB_UECON7SET_ERRORTRANSES                           10
#define AVR32_USB_UECON7SET_ERRORTRANSES_MASK              0x00000400
#define AVR32_USB_UECON7SET_ERRORTRANSES_OFFSET                    10
#define AVR32_USB_UECON7SET_ERRORTRANSES_SIZE                       1
#define AVR32_USB_UECON7SET_KILLBKS                                13
#define AVR32_USB_UECON7SET_KILLBKS_MASK                   0x00002000
#define AVR32_USB_UECON7SET_KILLBKS_OFFSET                         13
#define AVR32_USB_UECON7SET_KILLBKS_SIZE                            1
#define AVR32_USB_UECON7SET_MASK                           0x000f37ff
#define AVR32_USB_UECON7SET_MDATAES                                 8
#define AVR32_USB_UECON7SET_MDATAES_MASK                   0x00000100
#define AVR32_USB_UECON7SET_MDATAES_OFFSET                          8
#define AVR32_USB_UECON7SET_MDATAES_SIZE                            1
#define AVR32_USB_UECON7SET_NAKINES                                 4
#define AVR32_USB_UECON7SET_NAKINES_MASK                   0x00000010
#define AVR32_USB_UECON7SET_NAKINES_OFFSET                          4
#define AVR32_USB_UECON7SET_NAKINES_SIZE                            1
#define AVR32_USB_UECON7SET_NAKOUTES                                3
#define AVR32_USB_UECON7SET_NAKOUTES_MASK                  0x00000008
#define AVR32_USB_UECON7SET_NAKOUTES_OFFSET                         3
#define AVR32_USB_UECON7SET_NAKOUTES_SIZE                           1
#define AVR32_USB_UECON7SET_NBUSYBKES                              12
#define AVR32_USB_UECON7SET_NBUSYBKES_MASK                 0x00001000
#define AVR32_USB_UECON7SET_NBUSYBKES_OFFSET                       12
#define AVR32_USB_UECON7SET_NBUSYBKES_SIZE                          1
#define AVR32_USB_UECON7SET_NYETDISS                               17
#define AVR32_USB_UECON7SET_NYETDISS_MASK                  0x00020000
#define AVR32_USB_UECON7SET_NYETDISS_OFFSET                        17
#define AVR32_USB_UECON7SET_NYETDISS_SIZE                           1
#define AVR32_USB_UECON7SET_OVERFES                                 5
#define AVR32_USB_UECON7SET_OVERFES_MASK                   0x00000020
#define AVR32_USB_UECON7SET_OVERFES_OFFSET                          5
#define AVR32_USB_UECON7SET_OVERFES_SIZE                            1
#define AVR32_USB_UECON7SET_RESETVALUE                     0x00000000
#define AVR32_USB_UECON7SET_RSTDTS                                 18
#define AVR32_USB_UECON7SET_RSTDTS_MASK                    0x00040000
#define AVR32_USB_UECON7SET_RSTDTS_OFFSET                          18
#define AVR32_USB_UECON7SET_RSTDTS_SIZE                             1
#define AVR32_USB_UECON7SET_RXOUTES                                 1
#define AVR32_USB_UECON7SET_RXOUTES_MASK                   0x00000002
#define AVR32_USB_UECON7SET_RXOUTES_OFFSET                          1
#define AVR32_USB_UECON7SET_RXOUTES_SIZE                            1
#define AVR32_USB_UECON7SET_RXSTPES                                 2
#define AVR32_USB_UECON7SET_RXSTPES_MASK                   0x00000004
#define AVR32_USB_UECON7SET_RXSTPES_OFFSET                          2
#define AVR32_USB_UECON7SET_RXSTPES_SIZE                            1
#define AVR32_USB_UECON7SET_SHORTPACKETES                           7
#define AVR32_USB_UECON7SET_SHORTPACKETES_MASK             0x00000080
#define AVR32_USB_UECON7SET_SHORTPACKETES_OFFSET                    7
#define AVR32_USB_UECON7SET_SHORTPACKETES_SIZE                      1
#define AVR32_USB_UECON7SET_STALLEDES                               6
#define AVR32_USB_UECON7SET_STALLEDES_MASK                 0x00000040
#define AVR32_USB_UECON7SET_STALLEDES_OFFSET                        6
#define AVR32_USB_UECON7SET_STALLEDES_SIZE                          1
#define AVR32_USB_UECON7SET_STALLRQS                               19
#define AVR32_USB_UECON7SET_STALLRQS_MASK                  0x00080000
#define AVR32_USB_UECON7SET_STALLRQS_OFFSET                        19
#define AVR32_USB_UECON7SET_STALLRQS_SIZE                           1
#define AVR32_USB_UECON7SET_TXINES                                  0
#define AVR32_USB_UECON7SET_TXINES_MASK                    0x00000001
#define AVR32_USB_UECON7SET_TXINES_OFFSET                           0
#define AVR32_USB_UECON7SET_TXINES_SIZE                             1
#define AVR32_USB_UECON7_DATAXE                                     9
#define AVR32_USB_UECON7_DATAXE_MASK                       0x00000200
#define AVR32_USB_UECON7_DATAXE_OFFSET                              9
#define AVR32_USB_UECON7_DATAXE_SIZE                                1
#define AVR32_USB_UECON7_EPDISHDMA                                 16
#define AVR32_USB_UECON7_EPDISHDMA_MASK                    0x00010000
#define AVR32_USB_UECON7_EPDISHDMA_OFFSET                          16
#define AVR32_USB_UECON7_EPDISHDMA_SIZE                             1
#define AVR32_USB_UECON7_ERRORTRANSE                               10
#define AVR32_USB_UECON7_ERRORTRANSE_MASK                  0x00000400
#define AVR32_USB_UECON7_ERRORTRANSE_OFFSET                        10
#define AVR32_USB_UECON7_ERRORTRANSE_SIZE                           1
#define AVR32_USB_UECON7_FIFOCON                                   14
#define AVR32_USB_UECON7_FIFOCON_MASK                      0x00004000
#define AVR32_USB_UECON7_FIFOCON_OFFSET                            14
#define AVR32_USB_UECON7_FIFOCON_SIZE                               1
#define AVR32_USB_UECON7_KILLBK                                    13
#define AVR32_USB_UECON7_KILLBK_MASK                       0x00002000
#define AVR32_USB_UECON7_KILLBK_OFFSET                             13
#define AVR32_USB_UECON7_KILLBK_SIZE                                1
#define AVR32_USB_UECON7_MASK                              0x000f77ff
#define AVR32_USB_UECON7_MDATAE                                     8
#define AVR32_USB_UECON7_MDATAE_MASK                       0x00000100
#define AVR32_USB_UECON7_MDATAE_OFFSET                              8
#define AVR32_USB_UECON7_MDATAE_SIZE                                1
#define AVR32_USB_UECON7_NAKINE                                     4
#define AVR32_USB_UECON7_NAKINE_MASK                       0x00000010
#define AVR32_USB_UECON7_NAKINE_OFFSET                              4
#define AVR32_USB_UECON7_NAKINE_SIZE                                1
#define AVR32_USB_UECON7_NAKOUTE                                    3
#define AVR32_USB_UECON7_NAKOUTE_MASK                      0x00000008
#define AVR32_USB_UECON7_NAKOUTE_OFFSET                             3
#define AVR32_USB_UECON7_NAKOUTE_SIZE                               1
#define AVR32_USB_UECON7_NBUSYBKE                                  12
#define AVR32_USB_UECON7_NBUSYBKE_MASK                     0x00001000
#define AVR32_USB_UECON7_NBUSYBKE_OFFSET                           12
#define AVR32_USB_UECON7_NBUSYBKE_SIZE                              1
#define AVR32_USB_UECON7_NYETDIS                                   17
#define AVR32_USB_UECON7_NYETDIS_MASK                      0x00020000
#define AVR32_USB_UECON7_NYETDIS_OFFSET                            17
#define AVR32_USB_UECON7_NYETDIS_SIZE                               1
#define AVR32_USB_UECON7_OVERFE                                     5
#define AVR32_USB_UECON7_OVERFE_MASK                       0x00000020
#define AVR32_USB_UECON7_OVERFE_OFFSET                              5
#define AVR32_USB_UECON7_OVERFE_SIZE                                1
#define AVR32_USB_UECON7_RESETVALUE                        0x00000000
#define AVR32_USB_UECON7_RSTDT                                     18
#define AVR32_USB_UECON7_RSTDT_MASK                        0x00040000
#define AVR32_USB_UECON7_RSTDT_OFFSET                              18
#define AVR32_USB_UECON7_RSTDT_SIZE                                 1
#define AVR32_USB_UECON7_RXOUTE                                     1
#define AVR32_USB_UECON7_RXOUTE_MASK                       0x00000002
#define AVR32_USB_UECON7_RXOUTE_OFFSET                              1
#define AVR32_USB_UECON7_RXOUTE_SIZE                                1
#define AVR32_USB_UECON7_RXSTPE                                     2
#define AVR32_USB_UECON7_RXSTPE_MASK                       0x00000004
#define AVR32_USB_UECON7_RXSTPE_OFFSET                              2
#define AVR32_USB_UECON7_RXSTPE_SIZE                                1
#define AVR32_USB_UECON7_SHORTPACKETE                               7
#define AVR32_USB_UECON7_SHORTPACKETE_MASK                 0x00000080
#define AVR32_USB_UECON7_SHORTPACKETE_OFFSET                        7
#define AVR32_USB_UECON7_SHORTPACKETE_SIZE                          1
#define AVR32_USB_UECON7_STALLEDE                                   6
#define AVR32_USB_UECON7_STALLEDE_MASK                     0x00000040
#define AVR32_USB_UECON7_STALLEDE_OFFSET                            6
#define AVR32_USB_UECON7_STALLEDE_SIZE                              1
#define AVR32_USB_UECON7_STALLRQ                                   19
#define AVR32_USB_UECON7_STALLRQ_MASK                      0x00080000
#define AVR32_USB_UECON7_STALLRQ_OFFSET                            19
#define AVR32_USB_UECON7_STALLRQ_SIZE                               1
#define AVR32_USB_UECON7_TXINE                                      0
#define AVR32_USB_UECON7_TXINE_MASK                        0x00000001
#define AVR32_USB_UECON7_TXINE_OFFSET                               0
#define AVR32_USB_UECON7_TXINE_SIZE                                 1
#define AVR32_USB_UEDAT0                                   0x00000250
#define AVR32_USB_UEDAT0_EP_DATA                                    0
#define AVR32_USB_UEDAT0_EP_DATA_MASK                      0xffffffff
#define AVR32_USB_UEDAT0_EP_DATA_OFFSET                             0
#define AVR32_USB_UEDAT0_EP_DATA_SIZE                              32
#define AVR32_USB_UEDAT0_MASK                              0xffffffff
#define AVR32_USB_UEDAT0_RESETVALUE                        0x00000000
#define AVR32_USB_UEDAT1                                   0x00000254
#define AVR32_USB_UEDAT1_EP_DATA                                    0
#define AVR32_USB_UEDAT1_EP_DATA_MASK                      0xffffffff
#define AVR32_USB_UEDAT1_EP_DATA_OFFSET                             0
#define AVR32_USB_UEDAT1_EP_DATA_SIZE                              32
#define AVR32_USB_UEDAT1_MASK                              0xffffffff
#define AVR32_USB_UEDAT1_RESETVALUE                        0x00000000
#define AVR32_USB_UEDAT2                                   0x00000258
#define AVR32_USB_UEDAT2_EP_DATA                                    0
#define AVR32_USB_UEDAT2_EP_DATA_MASK                      0xffffffff
#define AVR32_USB_UEDAT2_EP_DATA_OFFSET                             0
#define AVR32_USB_UEDAT2_EP_DATA_SIZE                              32
#define AVR32_USB_UEDAT2_MASK                              0xffffffff
#define AVR32_USB_UEDAT2_RESETVALUE                        0x00000000
#define AVR32_USB_UEDAT3                                   0x0000025c
#define AVR32_USB_UEDAT3_EP_DATA                                    0
#define AVR32_USB_UEDAT3_EP_DATA_MASK                      0xffffffff
#define AVR32_USB_UEDAT3_EP_DATA_OFFSET                             0
#define AVR32_USB_UEDAT3_EP_DATA_SIZE                              32
#define AVR32_USB_UEDAT3_MASK                              0xffffffff
#define AVR32_USB_UEDAT3_RESETVALUE                        0x00000000
#define AVR32_USB_UEDAT4                                   0x00000260
#define AVR32_USB_UEDAT4_EP_DATA                                    0
#define AVR32_USB_UEDAT4_EP_DATA_MASK                      0xffffffff
#define AVR32_USB_UEDAT4_EP_DATA_OFFSET                             0
#define AVR32_USB_UEDAT4_EP_DATA_SIZE                              32
#define AVR32_USB_UEDAT4_MASK                              0xffffffff
#define AVR32_USB_UEDAT4_RESETVALUE                        0x00000000
#define AVR32_USB_UEDAT5                                   0x00000264
#define AVR32_USB_UEDAT5_EP_DATA                                    0
#define AVR32_USB_UEDAT5_EP_DATA_MASK                      0xffffffff
#define AVR32_USB_UEDAT5_EP_DATA_OFFSET                             0
#define AVR32_USB_UEDAT5_EP_DATA_SIZE                              32
#define AVR32_USB_UEDAT5_MASK                              0xffffffff
#define AVR32_USB_UEDAT5_RESETVALUE                        0x00000000
#define AVR32_USB_UEDAT6                                   0x00000268
#define AVR32_USB_UEDAT6_EP_DATA                                    0
#define AVR32_USB_UEDAT6_EP_DATA_MASK                      0xffffffff
#define AVR32_USB_UEDAT6_EP_DATA_OFFSET                             0
#define AVR32_USB_UEDAT6_EP_DATA_SIZE                              32
#define AVR32_USB_UEDAT6_MASK                              0xffffffff
#define AVR32_USB_UEDAT6_RESETVALUE                        0x00000000
#define AVR32_USB_UEDAT7                                   0x0000026c
#define AVR32_USB_UEDAT7_EP_DATA                                    0
#define AVR32_USB_UEDAT7_EP_DATA_MASK                      0xffffffff
#define AVR32_USB_UEDAT7_EP_DATA_OFFSET                             0
#define AVR32_USB_UEDAT7_EP_DATA_SIZE                              32
#define AVR32_USB_UEDAT7_MASK                              0xffffffff
#define AVR32_USB_UEDAT7_RESETVALUE                        0x00000000
#define AVR32_USB_UERST                                    0x0000001c
#define AVR32_USB_UERST_EPEN0                                       0
#define AVR32_USB_UERST_EPEN0_MASK                         0x00000001
#define AVR32_USB_UERST_EPEN0_OFFSET                                0
#define AVR32_USB_UERST_EPEN0_SIZE                                  1
#define AVR32_USB_UERST_EPEN1                                       1
#define AVR32_USB_UERST_EPEN1_MASK                         0x00000002
#define AVR32_USB_UERST_EPEN1_OFFSET                                1
#define AVR32_USB_UERST_EPEN1_SIZE                                  1
#define AVR32_USB_UERST_EPEN2                                       2
#define AVR32_USB_UERST_EPEN2_MASK                         0x00000004
#define AVR32_USB_UERST_EPEN2_OFFSET                                2
#define AVR32_USB_UERST_EPEN2_SIZE                                  1
#define AVR32_USB_UERST_EPEN3                                       3
#define AVR32_USB_UERST_EPEN3_MASK                         0x00000008
#define AVR32_USB_UERST_EPEN3_OFFSET                                3
#define AVR32_USB_UERST_EPEN3_SIZE                                  1
#define AVR32_USB_UERST_EPEN4                                       4
#define AVR32_USB_UERST_EPEN4_MASK                         0x00000010
#define AVR32_USB_UERST_EPEN4_OFFSET                                4
#define AVR32_USB_UERST_EPEN4_SIZE                                  1
#define AVR32_USB_UERST_EPEN5                                       5
#define AVR32_USB_UERST_EPEN5_MASK                         0x00000020
#define AVR32_USB_UERST_EPEN5_OFFSET                                5
#define AVR32_USB_UERST_EPEN5_SIZE                                  1
#define AVR32_USB_UERST_EPEN6                                       6
#define AVR32_USB_UERST_EPEN6_MASK                         0x00000040
#define AVR32_USB_UERST_EPEN6_OFFSET                                6
#define AVR32_USB_UERST_EPEN6_SIZE                                  1
#define AVR32_USB_UERST_EPEN7                                       7
#define AVR32_USB_UERST_EPEN7_MASK                         0x00000080
#define AVR32_USB_UERST_EPEN7_OFFSET                                7
#define AVR32_USB_UERST_EPEN7_SIZE                                  1
#define AVR32_USB_UERST_EPRST0                                     16
#define AVR32_USB_UERST_EPRST0_MASK                        0x00010000
#define AVR32_USB_UERST_EPRST0_OFFSET                              16
#define AVR32_USB_UERST_EPRST0_SIZE                                 1
#define AVR32_USB_UERST_EPRST1                                     17
#define AVR32_USB_UERST_EPRST1_MASK                        0x00020000
#define AVR32_USB_UERST_EPRST1_OFFSET                              17
#define AVR32_USB_UERST_EPRST1_SIZE                                 1
#define AVR32_USB_UERST_EPRST2                                     18
#define AVR32_USB_UERST_EPRST2_MASK                        0x00040000
#define AVR32_USB_UERST_EPRST2_OFFSET                              18
#define AVR32_USB_UERST_EPRST2_SIZE                                 1
#define AVR32_USB_UERST_EPRST3                                     19
#define AVR32_USB_UERST_EPRST3_MASK                        0x00080000
#define AVR32_USB_UERST_EPRST3_OFFSET                              19
#define AVR32_USB_UERST_EPRST3_SIZE                                 1
#define AVR32_USB_UERST_EPRST4                                     20
#define AVR32_USB_UERST_EPRST4_MASK                        0x00100000
#define AVR32_USB_UERST_EPRST4_OFFSET                              20
#define AVR32_USB_UERST_EPRST4_SIZE                                 1
#define AVR32_USB_UERST_EPRST5                                     21
#define AVR32_USB_UERST_EPRST5_MASK                        0x00200000
#define AVR32_USB_UERST_EPRST5_OFFSET                              21
#define AVR32_USB_UERST_EPRST5_SIZE                                 1
#define AVR32_USB_UERST_EPRST6                                     22
#define AVR32_USB_UERST_EPRST6_MASK                        0x00400000
#define AVR32_USB_UERST_EPRST6_OFFSET                              22
#define AVR32_USB_UERST_EPRST6_SIZE                                 1
#define AVR32_USB_UERST_EPRST7                                     23
#define AVR32_USB_UERST_EPRST7_MASK                        0x00800000
#define AVR32_USB_UERST_EPRST7_OFFSET                              23
#define AVR32_USB_UERST_EPRST7_SIZE                                 1
#define AVR32_USB_UERST_MASK                               0x00ff00ff
#define AVR32_USB_UERST_RESETVALUE                         0x00000000
#define AVR32_USB_UESTA0                                   0x00000130
#define AVR32_USB_UESTA0CLR                                0x00000160
#define AVR32_USB_UESTA0CLR_MASK                           0x000000ff
#define AVR32_USB_UESTA0CLR_NAKINIC                                 4
#define AVR32_USB_UESTA0CLR_NAKINIC_MASK                   0x00000010
#define AVR32_USB_UESTA0CLR_NAKINIC_OFFSET                          4
#define AVR32_USB_UESTA0CLR_NAKINIC_SIZE                            1
#define AVR32_USB_UESTA0CLR_NAKOUTIC                                3
#define AVR32_USB_UESTA0CLR_NAKOUTIC_MASK                  0x00000008
#define AVR32_USB_UESTA0CLR_NAKOUTIC_OFFSET                         3
#define AVR32_USB_UESTA0CLR_NAKOUTIC_SIZE                           1
#define AVR32_USB_UESTA0CLR_OVERFIC                                 5
#define AVR32_USB_UESTA0CLR_OVERFIC_MASK                   0x00000020
#define AVR32_USB_UESTA0CLR_OVERFIC_OFFSET                          5
#define AVR32_USB_UESTA0CLR_OVERFIC_SIZE                            1
#define AVR32_USB_UESTA0CLR_RESETVALUE                     0x00000000
#define AVR32_USB_UESTA0CLR_RXOUTIC                                 1
#define AVR32_USB_UESTA0CLR_RXOUTIC_MASK                   0x00000002
#define AVR32_USB_UESTA0CLR_RXOUTIC_OFFSET                          1
#define AVR32_USB_UESTA0CLR_RXOUTIC_SIZE                            1
#define AVR32_USB_UESTA0CLR_RXSTPIC                                 2
#define AVR32_USB_UESTA0CLR_RXSTPIC_MASK                   0x00000004
#define AVR32_USB_UESTA0CLR_RXSTPIC_OFFSET                          2
#define AVR32_USB_UESTA0CLR_RXSTPIC_SIZE                            1
#define AVR32_USB_UESTA0CLR_SHORTPACKETC                            7
#define AVR32_USB_UESTA0CLR_SHORTPACKETC_MASK              0x00000080
#define AVR32_USB_UESTA0CLR_SHORTPACKETC_OFFSET                     7
#define AVR32_USB_UESTA0CLR_SHORTPACKETC_SIZE                       1
#define AVR32_USB_UESTA0CLR_STALLEDIC                               6
#define AVR32_USB_UESTA0CLR_STALLEDIC_MASK                 0x00000040
#define AVR32_USB_UESTA0CLR_STALLEDIC_OFFSET                        6
#define AVR32_USB_UESTA0CLR_STALLEDIC_SIZE                          1
#define AVR32_USB_UESTA0CLR_TXINIC                                  0
#define AVR32_USB_UESTA0CLR_TXINIC_MASK                    0x00000001
#define AVR32_USB_UESTA0CLR_TXINIC_OFFSET                           0
#define AVR32_USB_UESTA0CLR_TXINIC_SIZE                             1
#define AVR32_USB_UESTA0SET                                0x00000190
#define AVR32_USB_UESTA0SET_ERRORTRANSS                            10
#define AVR32_USB_UESTA0SET_ERRORTRANSS_MASK               0x00000400
#define AVR32_USB_UESTA0SET_ERRORTRANSS_OFFSET                     10
#define AVR32_USB_UESTA0SET_ERRORTRANSS_SIZE                        1
#define AVR32_USB_UESTA0SET_MASK                           0x000015ff
#define AVR32_USB_UESTA0SET_NAKINIS                                 4
#define AVR32_USB_UESTA0SET_NAKINIS_MASK                   0x00000010
#define AVR32_USB_UESTA0SET_NAKINIS_OFFSET                          4
#define AVR32_USB_UESTA0SET_NAKINIS_SIZE                            1
#define AVR32_USB_UESTA0SET_NAKOUTIS                                3
#define AVR32_USB_UESTA0SET_NAKOUTIS_MASK                  0x00000008
#define AVR32_USB_UESTA0SET_NAKOUTIS_OFFSET                         3
#define AVR32_USB_UESTA0SET_NAKOUTIS_SIZE                           1
#define AVR32_USB_UESTA0SET_NBUSYBKS                               12
#define AVR32_USB_UESTA0SET_NBUSYBKS_MASK                  0x00001000
#define AVR32_USB_UESTA0SET_NBUSYBKS_OFFSET                        12
#define AVR32_USB_UESTA0SET_NBUSYBKS_SIZE                           1
#define AVR32_USB_UESTA0SET_OVERFIS                                 5
#define AVR32_USB_UESTA0SET_OVERFIS_MASK                   0x00000020
#define AVR32_USB_UESTA0SET_OVERFIS_OFFSET                          5
#define AVR32_USB_UESTA0SET_OVERFIS_SIZE                            1
#define AVR32_USB_UESTA0SET_RESETVALUE                     0x00000000
#define AVR32_USB_UESTA0SET_RXOUTIS                                 1
#define AVR32_USB_UESTA0SET_RXOUTIS_MASK                   0x00000002
#define AVR32_USB_UESTA0SET_RXOUTIS_OFFSET                          1
#define AVR32_USB_UESTA0SET_RXOUTIS_SIZE                            1
#define AVR32_USB_UESTA0SET_RXSTPIS                                 2
#define AVR32_USB_UESTA0SET_RXSTPIS_MASK                   0x00000004
#define AVR32_USB_UESTA0SET_RXSTPIS_OFFSET                          2
#define AVR32_USB_UESTA0SET_RXSTPIS_SIZE                            1
#define AVR32_USB_UESTA0SET_SETMDATA                                8
#define AVR32_USB_UESTA0SET_SETMDATA_MASK                  0x00000100
#define AVR32_USB_UESTA0SET_SETMDATA_OFFSET                         8
#define AVR32_USB_UESTA0SET_SETMDATA_SIZE                           1
#define AVR32_USB_UESTA0SET_SHORTPACKETS                            7
#define AVR32_USB_UESTA0SET_SHORTPACKETS_MASK              0x00000080
#define AVR32_USB_UESTA0SET_SHORTPACKETS_OFFSET                     7
#define AVR32_USB_UESTA0SET_SHORTPACKETS_SIZE                       1
#define AVR32_USB_UESTA0SET_STALLEDIS                               6
#define AVR32_USB_UESTA0SET_STALLEDIS_MASK                 0x00000040
#define AVR32_USB_UESTA0SET_STALLEDIS_OFFSET                        6
#define AVR32_USB_UESTA0SET_STALLEDIS_SIZE                          1
#define AVR32_USB_UESTA0SET_TXINIS                                  0
#define AVR32_USB_UESTA0SET_TXINIS_MASK                    0x00000001
#define AVR32_USB_UESTA0SET_TXINIS_OFFSET                           0
#define AVR32_USB_UESTA0SET_TXINIS_SIZE                             1
#define AVR32_USB_UESTA0_BYCT                                      20
#define AVR32_USB_UESTA0_BYCT_MASK                         0x7ff00000
#define AVR32_USB_UESTA0_BYCT_OFFSET                               20
#define AVR32_USB_UESTA0_BYCT_SIZE                                 11
#define AVR32_USB_UESTA0_CFGOK                                     18
#define AVR32_USB_UESTA0_CFGOK_MASK                        0x00040000
#define AVR32_USB_UESTA0_CFGOK_OFFSET                              18
#define AVR32_USB_UESTA0_CFGOK_SIZE                                 1
#define AVR32_USB_UESTA0_CTRLDIR                                   17
#define AVR32_USB_UESTA0_CTRLDIR_IN                        0x00000001
#define AVR32_USB_UESTA0_CTRLDIR_MASK                      0x00020000
#define AVR32_USB_UESTA0_CTRLDIR_OFFSET                            17
#define AVR32_USB_UESTA0_CTRLDIR_OUT                       0x00000000
#define AVR32_USB_UESTA0_CTRLDIR_SIZE                               1
#define AVR32_USB_UESTA0_CURRBK                                    14
#define AVR32_USB_UESTA0_CURRBK_MASK                       0x0000c000
#define AVR32_USB_UESTA0_CURRBK_OFFSET                             14
#define AVR32_USB_UESTA0_CURRBK_SIZE                                2
#define AVR32_USB_UESTA0_DTSEQ                                      8
#define AVR32_USB_UESTA0_DTSEQ_MASK                        0x00000300
#define AVR32_USB_UESTA0_DTSEQ_OFFSET                               8
#define AVR32_USB_UESTA0_DTSEQ_SIZE                                 2
#define AVR32_USB_UESTA0_ERRORTRANS                                10
#define AVR32_USB_UESTA0_ERRORTRANS_MASK                   0x00000400
#define AVR32_USB_UESTA0_ERRORTRANS_OFFSET                         10
#define AVR32_USB_UESTA0_ERRORTRANS_SIZE                            1
#define AVR32_USB_UESTA0_MASK                              0x7ff7f7ff
#define AVR32_USB_UESTA0_NAKINI                                     4
#define AVR32_USB_UESTA0_NAKINI_MASK                       0x00000010
#define AVR32_USB_UESTA0_NAKINI_OFFSET                              4
#define AVR32_USB_UESTA0_NAKINI_SIZE                                1
#define AVR32_USB_UESTA0_NAKOUTI                                    3
#define AVR32_USB_UESTA0_NAKOUTI_MASK                      0x00000008
#define AVR32_USB_UESTA0_NAKOUTI_OFFSET                             3
#define AVR32_USB_UESTA0_NAKOUTI_SIZE                               1
#define AVR32_USB_UESTA0_NBUSYBK                                   12
#define AVR32_USB_UESTA0_NBUSYBK_MASK                      0x00003000
#define AVR32_USB_UESTA0_NBUSYBK_OFFSET                            12
#define AVR32_USB_UESTA0_NBUSYBK_SIZE                               2
#define AVR32_USB_UESTA0_OVERFI                                     5
#define AVR32_USB_UESTA0_OVERFI_MASK                       0x00000020
#define AVR32_USB_UESTA0_OVERFI_OFFSET                              5
#define AVR32_USB_UESTA0_OVERFI_SIZE                                1
#define AVR32_USB_UESTA0_RESETVALUE                        0x00000000
#define AVR32_USB_UESTA0_RWALL                                     16
#define AVR32_USB_UESTA0_RWALL_MASK                        0x00010000
#define AVR32_USB_UESTA0_RWALL_OFFSET                              16
#define AVR32_USB_UESTA0_RWALL_SIZE                                 1
#define AVR32_USB_UESTA0_RXOUTI                                     1
#define AVR32_USB_UESTA0_RXOUTI_MASK                       0x00000002
#define AVR32_USB_UESTA0_RXOUTI_OFFSET                              1
#define AVR32_USB_UESTA0_RXOUTI_SIZE                                1
#define AVR32_USB_UESTA0_RXSTPI                                     2
#define AVR32_USB_UESTA0_RXSTPI_MASK                       0x00000004
#define AVR32_USB_UESTA0_RXSTPI_OFFSET                              2
#define AVR32_USB_UESTA0_RXSTPI_SIZE                                1
#define AVR32_USB_UESTA0_SHORTPACKET                                7
#define AVR32_USB_UESTA0_SHORTPACKET_MASK                  0x00000080
#define AVR32_USB_UESTA0_SHORTPACKET_OFFSET                         7
#define AVR32_USB_UESTA0_SHORTPACKET_SIZE                           1
#define AVR32_USB_UESTA0_STALLEDI                                   6
#define AVR32_USB_UESTA0_STALLEDI_MASK                     0x00000040
#define AVR32_USB_UESTA0_STALLEDI_OFFSET                            6
#define AVR32_USB_UESTA0_STALLEDI_SIZE                              1
#define AVR32_USB_UESTA0_TXINI                                      0
#define AVR32_USB_UESTA0_TXINI_MASK                        0x00000001
#define AVR32_USB_UESTA0_TXINI_OFFSET                               0
#define AVR32_USB_UESTA0_TXINI_SIZE                                 1
#define AVR32_USB_UESTA1                                   0x00000134
#define AVR32_USB_UESTA1CLR                                0x00000164
#define AVR32_USB_UESTA1CLR_MASK                           0x000000ff
#define AVR32_USB_UESTA1CLR_NAKINIC                                 4
#define AVR32_USB_UESTA1CLR_NAKINIC_MASK                   0x00000010
#define AVR32_USB_UESTA1CLR_NAKINIC_OFFSET                          4
#define AVR32_USB_UESTA1CLR_NAKINIC_SIZE                            1
#define AVR32_USB_UESTA1CLR_NAKOUTIC                                3
#define AVR32_USB_UESTA1CLR_NAKOUTIC_MASK                  0x00000008
#define AVR32_USB_UESTA1CLR_NAKOUTIC_OFFSET                         3
#define AVR32_USB_UESTA1CLR_NAKOUTIC_SIZE                           1
#define AVR32_USB_UESTA1CLR_OVERFIC                                 5
#define AVR32_USB_UESTA1CLR_OVERFIC_MASK                   0x00000020
#define AVR32_USB_UESTA1CLR_OVERFIC_OFFSET                          5
#define AVR32_USB_UESTA1CLR_OVERFIC_SIZE                            1
#define AVR32_USB_UESTA1CLR_RESETVALUE                     0x00000000
#define AVR32_USB_UESTA1CLR_RXOUTIC                                 1
#define AVR32_USB_UESTA1CLR_RXOUTIC_MASK                   0x00000002
#define AVR32_USB_UESTA1CLR_RXOUTIC_OFFSET                          1
#define AVR32_USB_UESTA1CLR_RXOUTIC_SIZE                            1
#define AVR32_USB_UESTA1CLR_RXSTPIC                                 2
#define AVR32_USB_UESTA1CLR_RXSTPIC_MASK                   0x00000004
#define AVR32_USB_UESTA1CLR_RXSTPIC_OFFSET                          2
#define AVR32_USB_UESTA1CLR_RXSTPIC_SIZE                            1
#define AVR32_USB_UESTA1CLR_SHORTPACKETC                            7
#define AVR32_USB_UESTA1CLR_SHORTPACKETC_MASK              0x00000080
#define AVR32_USB_UESTA1CLR_SHORTPACKETC_OFFSET                     7
#define AVR32_USB_UESTA1CLR_SHORTPACKETC_SIZE                       1
#define AVR32_USB_UESTA1CLR_STALLEDIC                               6
#define AVR32_USB_UESTA1CLR_STALLEDIC_MASK                 0x00000040
#define AVR32_USB_UESTA1CLR_STALLEDIC_OFFSET                        6
#define AVR32_USB_UESTA1CLR_STALLEDIC_SIZE                          1
#define AVR32_USB_UESTA1CLR_TXINIC                                  0
#define AVR32_USB_UESTA1CLR_TXINIC_MASK                    0x00000001
#define AVR32_USB_UESTA1CLR_TXINIC_OFFSET                           0
#define AVR32_USB_UESTA1CLR_TXINIC_SIZE                             1
#define AVR32_USB_UESTA1SET                                0x00000194
#define AVR32_USB_UESTA1SET_ERRORTRANSS                            10
#define AVR32_USB_UESTA1SET_ERRORTRANSS_MASK               0x00000400
#define AVR32_USB_UESTA1SET_ERRORTRANSS_OFFSET                     10
#define AVR32_USB_UESTA1SET_ERRORTRANSS_SIZE                        1
#define AVR32_USB_UESTA1SET_MASK                           0x000015ff
#define AVR32_USB_UESTA1SET_NAKINIS                                 4
#define AVR32_USB_UESTA1SET_NAKINIS_MASK                   0x00000010
#define AVR32_USB_UESTA1SET_NAKINIS_OFFSET                          4
#define AVR32_USB_UESTA1SET_NAKINIS_SIZE                            1
#define AVR32_USB_UESTA1SET_NAKOUTIS                                3
#define AVR32_USB_UESTA1SET_NAKOUTIS_MASK                  0x00000008
#define AVR32_USB_UESTA1SET_NAKOUTIS_OFFSET                         3
#define AVR32_USB_UESTA1SET_NAKOUTIS_SIZE                           1
#define AVR32_USB_UESTA1SET_NBUSYBKS                               12
#define AVR32_USB_UESTA1SET_NBUSYBKS_MASK                  0x00001000
#define AVR32_USB_UESTA1SET_NBUSYBKS_OFFSET                        12
#define AVR32_USB_UESTA1SET_NBUSYBKS_SIZE                           1
#define AVR32_USB_UESTA1SET_OVERFIS                                 5
#define AVR32_USB_UESTA1SET_OVERFIS_MASK                   0x00000020
#define AVR32_USB_UESTA1SET_OVERFIS_OFFSET                          5
#define AVR32_USB_UESTA1SET_OVERFIS_SIZE                            1
#define AVR32_USB_UESTA1SET_RESETVALUE                     0x00000000
#define AVR32_USB_UESTA1SET_RXOUTIS                                 1
#define AVR32_USB_UESTA1SET_RXOUTIS_MASK                   0x00000002
#define AVR32_USB_UESTA1SET_RXOUTIS_OFFSET                          1
#define AVR32_USB_UESTA1SET_RXOUTIS_SIZE                            1
#define AVR32_USB_UESTA1SET_RXSTPIS                                 2
#define AVR32_USB_UESTA1SET_RXSTPIS_MASK                   0x00000004
#define AVR32_USB_UESTA1SET_RXSTPIS_OFFSET                          2
#define AVR32_USB_UESTA1SET_RXSTPIS_SIZE                            1
#define AVR32_USB_UESTA1SET_SETMDATA                                8
#define AVR32_USB_UESTA1SET_SETMDATA_MASK                  0x00000100
#define AVR32_USB_UESTA1SET_SETMDATA_OFFSET                         8
#define AVR32_USB_UESTA1SET_SETMDATA_SIZE                           1
#define AVR32_USB_UESTA1SET_SHORTPACKETS                            7
#define AVR32_USB_UESTA1SET_SHORTPACKETS_MASK              0x00000080
#define AVR32_USB_UESTA1SET_SHORTPACKETS_OFFSET                     7
#define AVR32_USB_UESTA1SET_SHORTPACKETS_SIZE                       1
#define AVR32_USB_UESTA1SET_STALLEDIS                               6
#define AVR32_USB_UESTA1SET_STALLEDIS_MASK                 0x00000040
#define AVR32_USB_UESTA1SET_STALLEDIS_OFFSET                        6
#define AVR32_USB_UESTA1SET_STALLEDIS_SIZE                          1
#define AVR32_USB_UESTA1SET_TXINIS                                  0
#define AVR32_USB_UESTA1SET_TXINIS_MASK                    0x00000001
#define AVR32_USB_UESTA1SET_TXINIS_OFFSET                           0
#define AVR32_USB_UESTA1SET_TXINIS_SIZE                             1
#define AVR32_USB_UESTA1_BYCT                                      20
#define AVR32_USB_UESTA1_BYCT_MASK                         0x7ff00000
#define AVR32_USB_UESTA1_BYCT_OFFSET                               20
#define AVR32_USB_UESTA1_BYCT_SIZE                                 11
#define AVR32_USB_UESTA1_CFGOK                                     18
#define AVR32_USB_UESTA1_CFGOK_MASK                        0x00040000
#define AVR32_USB_UESTA1_CFGOK_OFFSET                              18
#define AVR32_USB_UESTA1_CFGOK_SIZE                                 1
#define AVR32_USB_UESTA1_CTRLDIR                                   17
#define AVR32_USB_UESTA1_CTRLDIR_IN                        0x00000001
#define AVR32_USB_UESTA1_CTRLDIR_MASK                      0x00020000
#define AVR32_USB_UESTA1_CTRLDIR_OFFSET                            17
#define AVR32_USB_UESTA1_CTRLDIR_OUT                       0x00000000
#define AVR32_USB_UESTA1_CTRLDIR_SIZE                               1
#define AVR32_USB_UESTA1_CURRBK                                    14
#define AVR32_USB_UESTA1_CURRBK_MASK                       0x0000c000
#define AVR32_USB_UESTA1_CURRBK_OFFSET                             14
#define AVR32_USB_UESTA1_CURRBK_SIZE                                2
#define AVR32_USB_UESTA1_DTSEQ                                      8
#define AVR32_USB_UESTA1_DTSEQ_MASK                        0x00000300
#define AVR32_USB_UESTA1_DTSEQ_OFFSET                               8
#define AVR32_USB_UESTA1_DTSEQ_SIZE                                 2
#define AVR32_USB_UESTA1_ERRORTRANS                                10
#define AVR32_USB_UESTA1_ERRORTRANS_MASK                   0x00000400
#define AVR32_USB_UESTA1_ERRORTRANS_OFFSET                         10
#define AVR32_USB_UESTA1_ERRORTRANS_SIZE                            1
#define AVR32_USB_UESTA1_MASK                              0x7ff7f7ff
#define AVR32_USB_UESTA1_NAKINI                                     4
#define AVR32_USB_UESTA1_NAKINI_MASK                       0x00000010
#define AVR32_USB_UESTA1_NAKINI_OFFSET                              4
#define AVR32_USB_UESTA1_NAKINI_SIZE                                1
#define AVR32_USB_UESTA1_NAKOUTI                                    3
#define AVR32_USB_UESTA1_NAKOUTI_MASK                      0x00000008
#define AVR32_USB_UESTA1_NAKOUTI_OFFSET                             3
#define AVR32_USB_UESTA1_NAKOUTI_SIZE                               1
#define AVR32_USB_UESTA1_NBUSYBK                                   12
#define AVR32_USB_UESTA1_NBUSYBK_MASK                      0x00003000
#define AVR32_USB_UESTA1_NBUSYBK_OFFSET                            12
#define AVR32_USB_UESTA1_NBUSYBK_SIZE                               2
#define AVR32_USB_UESTA1_OVERFI                                     5
#define AVR32_USB_UESTA1_OVERFI_MASK                       0x00000020
#define AVR32_USB_UESTA1_OVERFI_OFFSET                              5
#define AVR32_USB_UESTA1_OVERFI_SIZE                                1
#define AVR32_USB_UESTA1_RESETVALUE                        0x00000000
#define AVR32_USB_UESTA1_RWALL                                     16
#define AVR32_USB_UESTA1_RWALL_MASK                        0x00010000
#define AVR32_USB_UESTA1_RWALL_OFFSET                              16
#define AVR32_USB_UESTA1_RWALL_SIZE                                 1
#define AVR32_USB_UESTA1_RXOUTI                                     1
#define AVR32_USB_UESTA1_RXOUTI_MASK                       0x00000002
#define AVR32_USB_UESTA1_RXOUTI_OFFSET                              1
#define AVR32_USB_UESTA1_RXOUTI_SIZE                                1
#define AVR32_USB_UESTA1_RXSTPI                                     2
#define AVR32_USB_UESTA1_RXSTPI_MASK                       0x00000004
#define AVR32_USB_UESTA1_RXSTPI_OFFSET                              2
#define AVR32_USB_UESTA1_RXSTPI_SIZE                                1
#define AVR32_USB_UESTA1_SHORTPACKET                                7
#define AVR32_USB_UESTA1_SHORTPACKET_MASK                  0x00000080
#define AVR32_USB_UESTA1_SHORTPACKET_OFFSET                         7
#define AVR32_USB_UESTA1_SHORTPACKET_SIZE                           1
#define AVR32_USB_UESTA1_STALLEDI                                   6
#define AVR32_USB_UESTA1_STALLEDI_MASK                     0x00000040
#define AVR32_USB_UESTA1_STALLEDI_OFFSET                            6
#define AVR32_USB_UESTA1_STALLEDI_SIZE                              1
#define AVR32_USB_UESTA1_TXINI                                      0
#define AVR32_USB_UESTA1_TXINI_MASK                        0x00000001
#define AVR32_USB_UESTA1_TXINI_OFFSET                               0
#define AVR32_USB_UESTA1_TXINI_SIZE                                 1
#define AVR32_USB_UESTA2                                   0x00000138
#define AVR32_USB_UESTA2CLR                                0x00000168
#define AVR32_USB_UESTA2CLR_MASK                           0x000000ff
#define AVR32_USB_UESTA2CLR_NAKINIC                                 4
#define AVR32_USB_UESTA2CLR_NAKINIC_MASK                   0x00000010
#define AVR32_USB_UESTA2CLR_NAKINIC_OFFSET                          4
#define AVR32_USB_UESTA2CLR_NAKINIC_SIZE                            1
#define AVR32_USB_UESTA2CLR_NAKOUTIC                                3
#define AVR32_USB_UESTA2CLR_NAKOUTIC_MASK                  0x00000008
#define AVR32_USB_UESTA2CLR_NAKOUTIC_OFFSET                         3
#define AVR32_USB_UESTA2CLR_NAKOUTIC_SIZE                           1
#define AVR32_USB_UESTA2CLR_OVERFIC                                 5
#define AVR32_USB_UESTA2CLR_OVERFIC_MASK                   0x00000020
#define AVR32_USB_UESTA2CLR_OVERFIC_OFFSET                          5
#define AVR32_USB_UESTA2CLR_OVERFIC_SIZE                            1
#define AVR32_USB_UESTA2CLR_RESETVALUE                     0x00000000
#define AVR32_USB_UESTA2CLR_RXOUTIC                                 1
#define AVR32_USB_UESTA2CLR_RXOUTIC_MASK                   0x00000002
#define AVR32_USB_UESTA2CLR_RXOUTIC_OFFSET                          1
#define AVR32_USB_UESTA2CLR_RXOUTIC_SIZE                            1
#define AVR32_USB_UESTA2CLR_RXSTPIC                                 2
#define AVR32_USB_UESTA2CLR_RXSTPIC_MASK                   0x00000004
#define AVR32_USB_UESTA2CLR_RXSTPIC_OFFSET                          2
#define AVR32_USB_UESTA2CLR_RXSTPIC_SIZE                            1
#define AVR32_USB_UESTA2CLR_SHORTPACKETC                            7
#define AVR32_USB_UESTA2CLR_SHORTPACKETC_MASK              0x00000080
#define AVR32_USB_UESTA2CLR_SHORTPACKETC_OFFSET                     7
#define AVR32_USB_UESTA2CLR_SHORTPACKETC_SIZE                       1
#define AVR32_USB_UESTA2CLR_STALLEDIC                               6
#define AVR32_USB_UESTA2CLR_STALLEDIC_MASK                 0x00000040
#define AVR32_USB_UESTA2CLR_STALLEDIC_OFFSET                        6
#define AVR32_USB_UESTA2CLR_STALLEDIC_SIZE                          1
#define AVR32_USB_UESTA2CLR_TXINIC                                  0
#define AVR32_USB_UESTA2CLR_TXINIC_MASK                    0x00000001
#define AVR32_USB_UESTA2CLR_TXINIC_OFFSET                           0
#define AVR32_USB_UESTA2CLR_TXINIC_SIZE                             1
#define AVR32_USB_UESTA2SET                                0x00000198
#define AVR32_USB_UESTA2SET_ERRORTRANSS                            10
#define AVR32_USB_UESTA2SET_ERRORTRANSS_MASK               0x00000400
#define AVR32_USB_UESTA2SET_ERRORTRANSS_OFFSET                     10
#define AVR32_USB_UESTA2SET_ERRORTRANSS_SIZE                        1
#define AVR32_USB_UESTA2SET_MASK                           0x000015ff
#define AVR32_USB_UESTA2SET_NAKINIS                                 4
#define AVR32_USB_UESTA2SET_NAKINIS_MASK                   0x00000010
#define AVR32_USB_UESTA2SET_NAKINIS_OFFSET                          4
#define AVR32_USB_UESTA2SET_NAKINIS_SIZE                            1
#define AVR32_USB_UESTA2SET_NAKOUTIS                                3
#define AVR32_USB_UESTA2SET_NAKOUTIS_MASK                  0x00000008
#define AVR32_USB_UESTA2SET_NAKOUTIS_OFFSET                         3
#define AVR32_USB_UESTA2SET_NAKOUTIS_SIZE                           1
#define AVR32_USB_UESTA2SET_NBUSYBKS                               12
#define AVR32_USB_UESTA2SET_NBUSYBKS_MASK                  0x00001000
#define AVR32_USB_UESTA2SET_NBUSYBKS_OFFSET                        12
#define AVR32_USB_UESTA2SET_NBUSYBKS_SIZE                           1
#define AVR32_USB_UESTA2SET_OVERFIS                                 5
#define AVR32_USB_UESTA2SET_OVERFIS_MASK                   0x00000020
#define AVR32_USB_UESTA2SET_OVERFIS_OFFSET                          5
#define AVR32_USB_UESTA2SET_OVERFIS_SIZE                            1
#define AVR32_USB_UESTA2SET_RESETVALUE                     0x00000000
#define AVR32_USB_UESTA2SET_RXOUTIS                                 1
#define AVR32_USB_UESTA2SET_RXOUTIS_MASK                   0x00000002
#define AVR32_USB_UESTA2SET_RXOUTIS_OFFSET                          1
#define AVR32_USB_UESTA2SET_RXOUTIS_SIZE                            1
#define AVR32_USB_UESTA2SET_RXSTPIS                                 2
#define AVR32_USB_UESTA2SET_RXSTPIS_MASK                   0x00000004
#define AVR32_USB_UESTA2SET_RXSTPIS_OFFSET                          2
#define AVR32_USB_UESTA2SET_RXSTPIS_SIZE                            1
#define AVR32_USB_UESTA2SET_SETMDATA                                8
#define AVR32_USB_UESTA2SET_SETMDATA_MASK                  0x00000100
#define AVR32_USB_UESTA2SET_SETMDATA_OFFSET                         8
#define AVR32_USB_UESTA2SET_SETMDATA_SIZE                           1
#define AVR32_USB_UESTA2SET_SHORTPACKETS                            7
#define AVR32_USB_UESTA2SET_SHORTPACKETS_MASK              0x00000080
#define AVR32_USB_UESTA2SET_SHORTPACKETS_OFFSET                     7
#define AVR32_USB_UESTA2SET_SHORTPACKETS_SIZE                       1
#define AVR32_USB_UESTA2SET_STALLEDIS                               6
#define AVR32_USB_UESTA2SET_STALLEDIS_MASK                 0x00000040
#define AVR32_USB_UESTA2SET_STALLEDIS_OFFSET                        6
#define AVR32_USB_UESTA2SET_STALLEDIS_SIZE                          1
#define AVR32_USB_UESTA2SET_TXINIS                                  0
#define AVR32_USB_UESTA2SET_TXINIS_MASK                    0x00000001
#define AVR32_USB_UESTA2SET_TXINIS_OFFSET                           0
#define AVR32_USB_UESTA2SET_TXINIS_SIZE                             1
#define AVR32_USB_UESTA2_BYCT                                      20
#define AVR32_USB_UESTA2_BYCT_MASK                         0x7ff00000
#define AVR32_USB_UESTA2_BYCT_OFFSET                               20
#define AVR32_USB_UESTA2_BYCT_SIZE                                 11
#define AVR32_USB_UESTA2_CFGOK                                     18
#define AVR32_USB_UESTA2_CFGOK_MASK                        0x00040000
#define AVR32_USB_UESTA2_CFGOK_OFFSET                              18
#define AVR32_USB_UESTA2_CFGOK_SIZE                                 1
#define AVR32_USB_UESTA2_CTRLDIR                                   17
#define AVR32_USB_UESTA2_CTRLDIR_IN                        0x00000001
#define AVR32_USB_UESTA2_CTRLDIR_MASK                      0x00020000
#define AVR32_USB_UESTA2_CTRLDIR_OFFSET                            17
#define AVR32_USB_UESTA2_CTRLDIR_OUT                       0x00000000
#define AVR32_USB_UESTA2_CTRLDIR_SIZE                               1
#define AVR32_USB_UESTA2_CURRBK                                    14
#define AVR32_USB_UESTA2_CURRBK_MASK                       0x0000c000
#define AVR32_USB_UESTA2_CURRBK_OFFSET                             14
#define AVR32_USB_UESTA2_CURRBK_SIZE                                2
#define AVR32_USB_UESTA2_DTSEQ                                      8
#define AVR32_USB_UESTA2_DTSEQ_MASK                        0x00000300
#define AVR32_USB_UESTA2_DTSEQ_OFFSET                               8
#define AVR32_USB_UESTA2_DTSEQ_SIZE                                 2
#define AVR32_USB_UESTA2_ERRORTRANS                                10
#define AVR32_USB_UESTA2_ERRORTRANS_MASK                   0x00000400
#define AVR32_USB_UESTA2_ERRORTRANS_OFFSET                         10
#define AVR32_USB_UESTA2_ERRORTRANS_SIZE                            1
#define AVR32_USB_UESTA2_MASK                              0x7ff7f7ff
#define AVR32_USB_UESTA2_NAKINI                                     4
#define AVR32_USB_UESTA2_NAKINI_MASK                       0x00000010
#define AVR32_USB_UESTA2_NAKINI_OFFSET                              4
#define AVR32_USB_UESTA2_NAKINI_SIZE                                1
#define AVR32_USB_UESTA2_NAKOUTI                                    3
#define AVR32_USB_UESTA2_NAKOUTI_MASK                      0x00000008
#define AVR32_USB_UESTA2_NAKOUTI_OFFSET                             3
#define AVR32_USB_UESTA2_NAKOUTI_SIZE                               1
#define AVR32_USB_UESTA2_NBUSYBK                                   12
#define AVR32_USB_UESTA2_NBUSYBK_MASK                      0x00003000
#define AVR32_USB_UESTA2_NBUSYBK_OFFSET                            12
#define AVR32_USB_UESTA2_NBUSYBK_SIZE                               2
#define AVR32_USB_UESTA2_OVERFI                                     5
#define AVR32_USB_UESTA2_OVERFI_MASK                       0x00000020
#define AVR32_USB_UESTA2_OVERFI_OFFSET                              5
#define AVR32_USB_UESTA2_OVERFI_SIZE                                1
#define AVR32_USB_UESTA2_RESETVALUE                        0x00000000
#define AVR32_USB_UESTA2_RWALL                                     16
#define AVR32_USB_UESTA2_RWALL_MASK                        0x00010000
#define AVR32_USB_UESTA2_RWALL_OFFSET                              16
#define AVR32_USB_UESTA2_RWALL_SIZE                                 1
#define AVR32_USB_UESTA2_RXOUTI                                     1
#define AVR32_USB_UESTA2_RXOUTI_MASK                       0x00000002
#define AVR32_USB_UESTA2_RXOUTI_OFFSET                              1
#define AVR32_USB_UESTA2_RXOUTI_SIZE                                1
#define AVR32_USB_UESTA2_RXSTPI                                     2
#define AVR32_USB_UESTA2_RXSTPI_MASK                       0x00000004
#define AVR32_USB_UESTA2_RXSTPI_OFFSET                              2
#define AVR32_USB_UESTA2_RXSTPI_SIZE                                1
#define AVR32_USB_UESTA2_SHORTPACKET                                7
#define AVR32_USB_UESTA2_SHORTPACKET_MASK                  0x00000080
#define AVR32_USB_UESTA2_SHORTPACKET_OFFSET                         7
#define AVR32_USB_UESTA2_SHORTPACKET_SIZE                           1
#define AVR32_USB_UESTA2_STALLEDI                                   6
#define AVR32_USB_UESTA2_STALLEDI_MASK                     0x00000040
#define AVR32_USB_UESTA2_STALLEDI_OFFSET                            6
#define AVR32_USB_UESTA2_STALLEDI_SIZE                              1
#define AVR32_USB_UESTA2_TXINI                                      0
#define AVR32_USB_UESTA2_TXINI_MASK                        0x00000001
#define AVR32_USB_UESTA2_TXINI_OFFSET                               0
#define AVR32_USB_UESTA2_TXINI_SIZE                                 1
#define AVR32_USB_UESTA3                                   0x0000013c
#define AVR32_USB_UESTA3CLR                                0x0000016c
#define AVR32_USB_UESTA3CLR_MASK                           0x000000ff
#define AVR32_USB_UESTA3CLR_NAKINIC                                 4
#define AVR32_USB_UESTA3CLR_NAKINIC_MASK                   0x00000010
#define AVR32_USB_UESTA3CLR_NAKINIC_OFFSET                          4
#define AVR32_USB_UESTA3CLR_NAKINIC_SIZE                            1
#define AVR32_USB_UESTA3CLR_NAKOUTIC                                3
#define AVR32_USB_UESTA3CLR_NAKOUTIC_MASK                  0x00000008
#define AVR32_USB_UESTA3CLR_NAKOUTIC_OFFSET                         3
#define AVR32_USB_UESTA3CLR_NAKOUTIC_SIZE                           1
#define AVR32_USB_UESTA3CLR_OVERFIC                                 5
#define AVR32_USB_UESTA3CLR_OVERFIC_MASK                   0x00000020
#define AVR32_USB_UESTA3CLR_OVERFIC_OFFSET                          5
#define AVR32_USB_UESTA3CLR_OVERFIC_SIZE                            1
#define AVR32_USB_UESTA3CLR_RESETVALUE                     0x00000000
#define AVR32_USB_UESTA3CLR_RXOUTIC                                 1
#define AVR32_USB_UESTA3CLR_RXOUTIC_MASK                   0x00000002
#define AVR32_USB_UESTA3CLR_RXOUTIC_OFFSET                          1
#define AVR32_USB_UESTA3CLR_RXOUTIC_SIZE                            1
#define AVR32_USB_UESTA3CLR_RXSTPIC                                 2
#define AVR32_USB_UESTA3CLR_RXSTPIC_MASK                   0x00000004
#define AVR32_USB_UESTA3CLR_RXSTPIC_OFFSET                          2
#define AVR32_USB_UESTA3CLR_RXSTPIC_SIZE                            1
#define AVR32_USB_UESTA3CLR_SHORTPACKETC                            7
#define AVR32_USB_UESTA3CLR_SHORTPACKETC_MASK              0x00000080
#define AVR32_USB_UESTA3CLR_SHORTPACKETC_OFFSET                     7
#define AVR32_USB_UESTA3CLR_SHORTPACKETC_SIZE                       1
#define AVR32_USB_UESTA3CLR_STALLEDIC                               6
#define AVR32_USB_UESTA3CLR_STALLEDIC_MASK                 0x00000040
#define AVR32_USB_UESTA3CLR_STALLEDIC_OFFSET                        6
#define AVR32_USB_UESTA3CLR_STALLEDIC_SIZE                          1
#define AVR32_USB_UESTA3CLR_TXINIC                                  0
#define AVR32_USB_UESTA3CLR_TXINIC_MASK                    0x00000001
#define AVR32_USB_UESTA3CLR_TXINIC_OFFSET                           0
#define AVR32_USB_UESTA3CLR_TXINIC_SIZE                             1
#define AVR32_USB_UESTA3SET                                0x0000019c
#define AVR32_USB_UESTA3SET_ERRORTRANSS                            10
#define AVR32_USB_UESTA3SET_ERRORTRANSS_MASK               0x00000400
#define AVR32_USB_UESTA3SET_ERRORTRANSS_OFFSET                     10
#define AVR32_USB_UESTA3SET_ERRORTRANSS_SIZE                        1
#define AVR32_USB_UESTA3SET_MASK                           0x000015ff
#define AVR32_USB_UESTA3SET_NAKINIS                                 4
#define AVR32_USB_UESTA3SET_NAKINIS_MASK                   0x00000010
#define AVR32_USB_UESTA3SET_NAKINIS_OFFSET                          4
#define AVR32_USB_UESTA3SET_NAKINIS_SIZE                            1
#define AVR32_USB_UESTA3SET_NAKOUTIS                                3
#define AVR32_USB_UESTA3SET_NAKOUTIS_MASK                  0x00000008
#define AVR32_USB_UESTA3SET_NAKOUTIS_OFFSET                         3
#define AVR32_USB_UESTA3SET_NAKOUTIS_SIZE                           1
#define AVR32_USB_UESTA3SET_NBUSYBKS                               12
#define AVR32_USB_UESTA3SET_NBUSYBKS_MASK                  0x00001000
#define AVR32_USB_UESTA3SET_NBUSYBKS_OFFSET                        12
#define AVR32_USB_UESTA3SET_NBUSYBKS_SIZE                           1
#define AVR32_USB_UESTA3SET_OVERFIS                                 5
#define AVR32_USB_UESTA3SET_OVERFIS_MASK                   0x00000020
#define AVR32_USB_UESTA3SET_OVERFIS_OFFSET                          5
#define AVR32_USB_UESTA3SET_OVERFIS_SIZE                            1
#define AVR32_USB_UESTA3SET_RESETVALUE                     0x00000000
#define AVR32_USB_UESTA3SET_RXOUTIS                                 1
#define AVR32_USB_UESTA3SET_RXOUTIS_MASK                   0x00000002
#define AVR32_USB_UESTA3SET_RXOUTIS_OFFSET                          1
#define AVR32_USB_UESTA3SET_RXOUTIS_SIZE                            1
#define AVR32_USB_UESTA3SET_RXSTPIS                                 2
#define AVR32_USB_UESTA3SET_RXSTPIS_MASK                   0x00000004
#define AVR32_USB_UESTA3SET_RXSTPIS_OFFSET                          2
#define AVR32_USB_UESTA3SET_RXSTPIS_SIZE                            1
#define AVR32_USB_UESTA3SET_SETMDATA                                8
#define AVR32_USB_UESTA3SET_SETMDATA_MASK                  0x00000100
#define AVR32_USB_UESTA3SET_SETMDATA_OFFSET                         8
#define AVR32_USB_UESTA3SET_SETMDATA_SIZE                           1
#define AVR32_USB_UESTA3SET_SHORTPACKETS                            7
#define AVR32_USB_UESTA3SET_SHORTPACKETS_MASK              0x00000080
#define AVR32_USB_UESTA3SET_SHORTPACKETS_OFFSET                     7
#define AVR32_USB_UESTA3SET_SHORTPACKETS_SIZE                       1
#define AVR32_USB_UESTA3SET_STALLEDIS                               6
#define AVR32_USB_UESTA3SET_STALLEDIS_MASK                 0x00000040
#define AVR32_USB_UESTA3SET_STALLEDIS_OFFSET                        6
#define AVR32_USB_UESTA3SET_STALLEDIS_SIZE                          1
#define AVR32_USB_UESTA3SET_TXINIS                                  0
#define AVR32_USB_UESTA3SET_TXINIS_MASK                    0x00000001
#define AVR32_USB_UESTA3SET_TXINIS_OFFSET                           0
#define AVR32_USB_UESTA3SET_TXINIS_SIZE                             1
#define AVR32_USB_UESTA3_BYCT                                      20
#define AVR32_USB_UESTA3_BYCT_MASK                         0x7ff00000
#define AVR32_USB_UESTA3_BYCT_OFFSET                               20
#define AVR32_USB_UESTA3_BYCT_SIZE                                 11
#define AVR32_USB_UESTA3_CFGOK                                     18
#define AVR32_USB_UESTA3_CFGOK_MASK                        0x00040000
#define AVR32_USB_UESTA3_CFGOK_OFFSET                              18
#define AVR32_USB_UESTA3_CFGOK_SIZE                                 1
#define AVR32_USB_UESTA3_CTRLDIR                                   17
#define AVR32_USB_UESTA3_CTRLDIR_IN                        0x00000001
#define AVR32_USB_UESTA3_CTRLDIR_MASK                      0x00020000
#define AVR32_USB_UESTA3_CTRLDIR_OFFSET                            17
#define AVR32_USB_UESTA3_CTRLDIR_OUT                       0x00000000
#define AVR32_USB_UESTA3_CTRLDIR_SIZE                               1
#define AVR32_USB_UESTA3_CURRBK                                    14
#define AVR32_USB_UESTA3_CURRBK_MASK                       0x0000c000
#define AVR32_USB_UESTA3_CURRBK_OFFSET                             14
#define AVR32_USB_UESTA3_CURRBK_SIZE                                2
#define AVR32_USB_UESTA3_DTSEQ                                      8
#define AVR32_USB_UESTA3_DTSEQ_MASK                        0x00000300
#define AVR32_USB_UESTA3_DTSEQ_OFFSET                               8
#define AVR32_USB_UESTA3_DTSEQ_SIZE                                 2
#define AVR32_USB_UESTA3_ERRORTRANS                                10
#define AVR32_USB_UESTA3_ERRORTRANS_MASK                   0x00000400
#define AVR32_USB_UESTA3_ERRORTRANS_OFFSET                         10
#define AVR32_USB_UESTA3_ERRORTRANS_SIZE                            1
#define AVR32_USB_UESTA3_MASK                              0x7ff7f7ff
#define AVR32_USB_UESTA3_NAKINI                                     4
#define AVR32_USB_UESTA3_NAKINI_MASK                       0x00000010
#define AVR32_USB_UESTA3_NAKINI_OFFSET                              4
#define AVR32_USB_UESTA3_NAKINI_SIZE                                1
#define AVR32_USB_UESTA3_NAKOUTI                                    3
#define AVR32_USB_UESTA3_NAKOUTI_MASK                      0x00000008
#define AVR32_USB_UESTA3_NAKOUTI_OFFSET                             3
#define AVR32_USB_UESTA3_NAKOUTI_SIZE                               1
#define AVR32_USB_UESTA3_NBUSYBK                                   12
#define AVR32_USB_UESTA3_NBUSYBK_MASK                      0x00003000
#define AVR32_USB_UESTA3_NBUSYBK_OFFSET                            12
#define AVR32_USB_UESTA3_NBUSYBK_SIZE                               2
#define AVR32_USB_UESTA3_OVERFI                                     5
#define AVR32_USB_UESTA3_OVERFI_MASK                       0x00000020
#define AVR32_USB_UESTA3_OVERFI_OFFSET                              5
#define AVR32_USB_UESTA3_OVERFI_SIZE                                1
#define AVR32_USB_UESTA3_RESETVALUE                        0x00000000
#define AVR32_USB_UESTA3_RWALL                                     16
#define AVR32_USB_UESTA3_RWALL_MASK                        0x00010000
#define AVR32_USB_UESTA3_RWALL_OFFSET                              16
#define AVR32_USB_UESTA3_RWALL_SIZE                                 1
#define AVR32_USB_UESTA3_RXOUTI                                     1
#define AVR32_USB_UESTA3_RXOUTI_MASK                       0x00000002
#define AVR32_USB_UESTA3_RXOUTI_OFFSET                              1
#define AVR32_USB_UESTA3_RXOUTI_SIZE                                1
#define AVR32_USB_UESTA3_RXSTPI                                     2
#define AVR32_USB_UESTA3_RXSTPI_MASK                       0x00000004
#define AVR32_USB_UESTA3_RXSTPI_OFFSET                              2
#define AVR32_USB_UESTA3_RXSTPI_SIZE                                1
#define AVR32_USB_UESTA3_SHORTPACKET                                7
#define AVR32_USB_UESTA3_SHORTPACKET_MASK                  0x00000080
#define AVR32_USB_UESTA3_SHORTPACKET_OFFSET                         7
#define AVR32_USB_UESTA3_SHORTPACKET_SIZE                           1
#define AVR32_USB_UESTA3_STALLEDI                                   6
#define AVR32_USB_UESTA3_STALLEDI_MASK                     0x00000040
#define AVR32_USB_UESTA3_STALLEDI_OFFSET                            6
#define AVR32_USB_UESTA3_STALLEDI_SIZE                              1
#define AVR32_USB_UESTA3_TXINI                                      0
#define AVR32_USB_UESTA3_TXINI_MASK                        0x00000001
#define AVR32_USB_UESTA3_TXINI_OFFSET                               0
#define AVR32_USB_UESTA3_TXINI_SIZE                                 1
#define AVR32_USB_UESTA4                                   0x00000140
#define AVR32_USB_UESTA4CLR                                0x00000170
#define AVR32_USB_UESTA4CLR_MASK                           0x000000ff
#define AVR32_USB_UESTA4CLR_NAKINIC                                 4
#define AVR32_USB_UESTA4CLR_NAKINIC_MASK                   0x00000010
#define AVR32_USB_UESTA4CLR_NAKINIC_OFFSET                          4
#define AVR32_USB_UESTA4CLR_NAKINIC_SIZE                            1
#define AVR32_USB_UESTA4CLR_NAKOUTIC                                3
#define AVR32_USB_UESTA4CLR_NAKOUTIC_MASK                  0x00000008
#define AVR32_USB_UESTA4CLR_NAKOUTIC_OFFSET                         3
#define AVR32_USB_UESTA4CLR_NAKOUTIC_SIZE                           1
#define AVR32_USB_UESTA4CLR_OVERFIC                                 5
#define AVR32_USB_UESTA4CLR_OVERFIC_MASK                   0x00000020
#define AVR32_USB_UESTA4CLR_OVERFIC_OFFSET                          5
#define AVR32_USB_UESTA4CLR_OVERFIC_SIZE                            1
#define AVR32_USB_UESTA4CLR_RESETVALUE                     0x00000000
#define AVR32_USB_UESTA4CLR_RXOUTIC                                 1
#define AVR32_USB_UESTA4CLR_RXOUTIC_MASK                   0x00000002
#define AVR32_USB_UESTA4CLR_RXOUTIC_OFFSET                          1
#define AVR32_USB_UESTA4CLR_RXOUTIC_SIZE                            1
#define AVR32_USB_UESTA4CLR_RXSTPIC                                 2
#define AVR32_USB_UESTA4CLR_RXSTPIC_MASK                   0x00000004
#define AVR32_USB_UESTA4CLR_RXSTPIC_OFFSET                          2
#define AVR32_USB_UESTA4CLR_RXSTPIC_SIZE                            1
#define AVR32_USB_UESTA4CLR_SHORTPACKETC                            7
#define AVR32_USB_UESTA4CLR_SHORTPACKETC_MASK              0x00000080
#define AVR32_USB_UESTA4CLR_SHORTPACKETC_OFFSET                     7
#define AVR32_USB_UESTA4CLR_SHORTPACKETC_SIZE                       1
#define AVR32_USB_UESTA4CLR_STALLEDIC                               6
#define AVR32_USB_UESTA4CLR_STALLEDIC_MASK                 0x00000040
#define AVR32_USB_UESTA4CLR_STALLEDIC_OFFSET                        6
#define AVR32_USB_UESTA4CLR_STALLEDIC_SIZE                          1
#define AVR32_USB_UESTA4CLR_TXINIC                                  0
#define AVR32_USB_UESTA4CLR_TXINIC_MASK                    0x00000001
#define AVR32_USB_UESTA4CLR_TXINIC_OFFSET                           0
#define AVR32_USB_UESTA4CLR_TXINIC_SIZE                             1
#define AVR32_USB_UESTA4SET                                0x000001a0
#define AVR32_USB_UESTA4SET_ERRORTRANSS                            10
#define AVR32_USB_UESTA4SET_ERRORTRANSS_MASK               0x00000400
#define AVR32_USB_UESTA4SET_ERRORTRANSS_OFFSET                     10
#define AVR32_USB_UESTA4SET_ERRORTRANSS_SIZE                        1
#define AVR32_USB_UESTA4SET_MASK                           0x000015ff
#define AVR32_USB_UESTA4SET_NAKINIS                                 4
#define AVR32_USB_UESTA4SET_NAKINIS_MASK                   0x00000010
#define AVR32_USB_UESTA4SET_NAKINIS_OFFSET                          4
#define AVR32_USB_UESTA4SET_NAKINIS_SIZE                            1
#define AVR32_USB_UESTA4SET_NAKOUTIS                                3
#define AVR32_USB_UESTA4SET_NAKOUTIS_MASK                  0x00000008
#define AVR32_USB_UESTA4SET_NAKOUTIS_OFFSET                         3
#define AVR32_USB_UESTA4SET_NAKOUTIS_SIZE                           1
#define AVR32_USB_UESTA4SET_NBUSYBKS                               12
#define AVR32_USB_UESTA4SET_NBUSYBKS_MASK                  0x00001000
#define AVR32_USB_UESTA4SET_NBUSYBKS_OFFSET                        12
#define AVR32_USB_UESTA4SET_NBUSYBKS_SIZE                           1
#define AVR32_USB_UESTA4SET_OVERFIS                                 5
#define AVR32_USB_UESTA4SET_OVERFIS_MASK                   0x00000020
#define AVR32_USB_UESTA4SET_OVERFIS_OFFSET                          5
#define AVR32_USB_UESTA4SET_OVERFIS_SIZE                            1
#define AVR32_USB_UESTA4SET_RESETVALUE                     0x00000000
#define AVR32_USB_UESTA4SET_RXOUTIS                                 1
#define AVR32_USB_UESTA4SET_RXOUTIS_MASK                   0x00000002
#define AVR32_USB_UESTA4SET_RXOUTIS_OFFSET                          1
#define AVR32_USB_UESTA4SET_RXOUTIS_SIZE                            1
#define AVR32_USB_UESTA4SET_RXSTPIS                                 2
#define AVR32_USB_UESTA4SET_RXSTPIS_MASK                   0x00000004
#define AVR32_USB_UESTA4SET_RXSTPIS_OFFSET                          2
#define AVR32_USB_UESTA4SET_RXSTPIS_SIZE                            1
#define AVR32_USB_UESTA4SET_SETMDATA                                8
#define AVR32_USB_UESTA4SET_SETMDATA_MASK                  0x00000100
#define AVR32_USB_UESTA4SET_SETMDATA_OFFSET                         8
#define AVR32_USB_UESTA4SET_SETMDATA_SIZE                           1
#define AVR32_USB_UESTA4SET_SHORTPACKETS                            7
#define AVR32_USB_UESTA4SET_SHORTPACKETS_MASK              0x00000080
#define AVR32_USB_UESTA4SET_SHORTPACKETS_OFFSET                     7
#define AVR32_USB_UESTA4SET_SHORTPACKETS_SIZE                       1
#define AVR32_USB_UESTA4SET_STALLEDIS                               6
#define AVR32_USB_UESTA4SET_STALLEDIS_MASK                 0x00000040
#define AVR32_USB_UESTA4SET_STALLEDIS_OFFSET                        6
#define AVR32_USB_UESTA4SET_STALLEDIS_SIZE                          1
#define AVR32_USB_UESTA4SET_TXINIS                                  0
#define AVR32_USB_UESTA4SET_TXINIS_MASK                    0x00000001
#define AVR32_USB_UESTA4SET_TXINIS_OFFSET                           0
#define AVR32_USB_UESTA4SET_TXINIS_SIZE                             1
#define AVR32_USB_UESTA4_BYCT                                      20
#define AVR32_USB_UESTA4_BYCT_MASK                         0x7ff00000
#define AVR32_USB_UESTA4_BYCT_OFFSET                               20
#define AVR32_USB_UESTA4_BYCT_SIZE                                 11
#define AVR32_USB_UESTA4_CFGOK                                     18
#define AVR32_USB_UESTA4_CFGOK_MASK                        0x00040000
#define AVR32_USB_UESTA4_CFGOK_OFFSET                              18
#define AVR32_USB_UESTA4_CFGOK_SIZE                                 1
#define AVR32_USB_UESTA4_CTRLDIR                                   17
#define AVR32_USB_UESTA4_CTRLDIR_IN                        0x00000001
#define AVR32_USB_UESTA4_CTRLDIR_MASK                      0x00020000
#define AVR32_USB_UESTA4_CTRLDIR_OFFSET                            17
#define AVR32_USB_UESTA4_CTRLDIR_OUT                       0x00000000
#define AVR32_USB_UESTA4_CTRLDIR_SIZE                               1
#define AVR32_USB_UESTA4_CURRBK                                    14
#define AVR32_USB_UESTA4_CURRBK_MASK                       0x0000c000
#define AVR32_USB_UESTA4_CURRBK_OFFSET                             14
#define AVR32_USB_UESTA4_CURRBK_SIZE                                2
#define AVR32_USB_UESTA4_DTSEQ                                      8
#define AVR32_USB_UESTA4_DTSEQ_MASK                        0x00000300
#define AVR32_USB_UESTA4_DTSEQ_OFFSET                               8
#define AVR32_USB_UESTA4_DTSEQ_SIZE                                 2
#define AVR32_USB_UESTA4_ERRORTRANS                                10
#define AVR32_USB_UESTA4_ERRORTRANS_MASK                   0x00000400
#define AVR32_USB_UESTA4_ERRORTRANS_OFFSET                         10
#define AVR32_USB_UESTA4_ERRORTRANS_SIZE                            1
#define AVR32_USB_UESTA4_MASK                              0x7ff7f7ff
#define AVR32_USB_UESTA4_NAKINI                                     4
#define AVR32_USB_UESTA4_NAKINI_MASK                       0x00000010
#define AVR32_USB_UESTA4_NAKINI_OFFSET                              4
#define AVR32_USB_UESTA4_NAKINI_SIZE                                1
#define AVR32_USB_UESTA4_NAKOUTI                                    3
#define AVR32_USB_UESTA4_NAKOUTI_MASK                      0x00000008
#define AVR32_USB_UESTA4_NAKOUTI_OFFSET                             3
#define AVR32_USB_UESTA4_NAKOUTI_SIZE                               1
#define AVR32_USB_UESTA4_NBUSYBK                                   12
#define AVR32_USB_UESTA4_NBUSYBK_MASK                      0x00003000
#define AVR32_USB_UESTA4_NBUSYBK_OFFSET                            12
#define AVR32_USB_UESTA4_NBUSYBK_SIZE                               2
#define AVR32_USB_UESTA4_OVERFI                                     5
#define AVR32_USB_UESTA4_OVERFI_MASK                       0x00000020
#define AVR32_USB_UESTA4_OVERFI_OFFSET                              5
#define AVR32_USB_UESTA4_OVERFI_SIZE                                1
#define AVR32_USB_UESTA4_RESETVALUE                        0x00000000
#define AVR32_USB_UESTA4_RWALL                                     16
#define AVR32_USB_UESTA4_RWALL_MASK                        0x00010000
#define AVR32_USB_UESTA4_RWALL_OFFSET                              16
#define AVR32_USB_UESTA4_RWALL_SIZE                                 1
#define AVR32_USB_UESTA4_RXOUTI                                     1
#define AVR32_USB_UESTA4_RXOUTI_MASK                       0x00000002
#define AVR32_USB_UESTA4_RXOUTI_OFFSET                              1
#define AVR32_USB_UESTA4_RXOUTI_SIZE                                1
#define AVR32_USB_UESTA4_RXSTPI                                     2
#define AVR32_USB_UESTA4_RXSTPI_MASK                       0x00000004
#define AVR32_USB_UESTA4_RXSTPI_OFFSET                              2
#define AVR32_USB_UESTA4_RXSTPI_SIZE                                1
#define AVR32_USB_UESTA4_SHORTPACKET                                7
#define AVR32_USB_UESTA4_SHORTPACKET_MASK                  0x00000080
#define AVR32_USB_UESTA4_SHORTPACKET_OFFSET                         7
#define AVR32_USB_UESTA4_SHORTPACKET_SIZE                           1
#define AVR32_USB_UESTA4_STALLEDI                                   6
#define AVR32_USB_UESTA4_STALLEDI_MASK                     0x00000040
#define AVR32_USB_UESTA4_STALLEDI_OFFSET                            6
#define AVR32_USB_UESTA4_STALLEDI_SIZE                              1
#define AVR32_USB_UESTA4_TXINI                                      0
#define AVR32_USB_UESTA4_TXINI_MASK                        0x00000001
#define AVR32_USB_UESTA4_TXINI_OFFSET                               0
#define AVR32_USB_UESTA4_TXINI_SIZE                                 1
#define AVR32_USB_UESTA5                                   0x00000144
#define AVR32_USB_UESTA5CLR                                0x00000174
#define AVR32_USB_UESTA5CLR_MASK                           0x000000ff
#define AVR32_USB_UESTA5CLR_NAKINIC                                 4
#define AVR32_USB_UESTA5CLR_NAKINIC_MASK                   0x00000010
#define AVR32_USB_UESTA5CLR_NAKINIC_OFFSET                          4
#define AVR32_USB_UESTA5CLR_NAKINIC_SIZE                            1
#define AVR32_USB_UESTA5CLR_NAKOUTIC                                3
#define AVR32_USB_UESTA5CLR_NAKOUTIC_MASK                  0x00000008
#define AVR32_USB_UESTA5CLR_NAKOUTIC_OFFSET                         3
#define AVR32_USB_UESTA5CLR_NAKOUTIC_SIZE                           1
#define AVR32_USB_UESTA5CLR_OVERFIC                                 5
#define AVR32_USB_UESTA5CLR_OVERFIC_MASK                   0x00000020
#define AVR32_USB_UESTA5CLR_OVERFIC_OFFSET                          5
#define AVR32_USB_UESTA5CLR_OVERFIC_SIZE                            1
#define AVR32_USB_UESTA5CLR_RESETVALUE                     0x00000000
#define AVR32_USB_UESTA5CLR_RXOUTIC                                 1
#define AVR32_USB_UESTA5CLR_RXOUTIC_MASK                   0x00000002
#define AVR32_USB_UESTA5CLR_RXOUTIC_OFFSET                          1
#define AVR32_USB_UESTA5CLR_RXOUTIC_SIZE                            1
#define AVR32_USB_UESTA5CLR_RXSTPIC                                 2
#define AVR32_USB_UESTA5CLR_RXSTPIC_MASK                   0x00000004
#define AVR32_USB_UESTA5CLR_RXSTPIC_OFFSET                          2
#define AVR32_USB_UESTA5CLR_RXSTPIC_SIZE                            1
#define AVR32_USB_UESTA5CLR_SHORTPACKETC                            7
#define AVR32_USB_UESTA5CLR_SHORTPACKETC_MASK              0x00000080
#define AVR32_USB_UESTA5CLR_SHORTPACKETC_OFFSET                     7
#define AVR32_USB_UESTA5CLR_SHORTPACKETC_SIZE                       1
#define AVR32_USB_UESTA5CLR_STALLEDIC                               6
#define AVR32_USB_UESTA5CLR_STALLEDIC_MASK                 0x00000040
#define AVR32_USB_UESTA5CLR_STALLEDIC_OFFSET                        6
#define AVR32_USB_UESTA5CLR_STALLEDIC_SIZE                          1
#define AVR32_USB_UESTA5CLR_TXINIC                                  0
#define AVR32_USB_UESTA5CLR_TXINIC_MASK                    0x00000001
#define AVR32_USB_UESTA5CLR_TXINIC_OFFSET                           0
#define AVR32_USB_UESTA5CLR_TXINIC_SIZE                             1
#define AVR32_USB_UESTA5SET                                0x000001a4
#define AVR32_USB_UESTA5SET_ERRORTRANSS                            10
#define AVR32_USB_UESTA5SET_ERRORTRANSS_MASK               0x00000400
#define AVR32_USB_UESTA5SET_ERRORTRANSS_OFFSET                     10
#define AVR32_USB_UESTA5SET_ERRORTRANSS_SIZE                        1
#define AVR32_USB_UESTA5SET_MASK                           0x000015ff
#define AVR32_USB_UESTA5SET_NAKINIS                                 4
#define AVR32_USB_UESTA5SET_NAKINIS_MASK                   0x00000010
#define AVR32_USB_UESTA5SET_NAKINIS_OFFSET                          4
#define AVR32_USB_UESTA5SET_NAKINIS_SIZE                            1
#define AVR32_USB_UESTA5SET_NAKOUTIS                                3
#define AVR32_USB_UESTA5SET_NAKOUTIS_MASK                  0x00000008
#define AVR32_USB_UESTA5SET_NAKOUTIS_OFFSET                         3
#define AVR32_USB_UESTA5SET_NAKOUTIS_SIZE                           1
#define AVR32_USB_UESTA5SET_NBUSYBKS                               12
#define AVR32_USB_UESTA5SET_NBUSYBKS_MASK                  0x00001000
#define AVR32_USB_UESTA5SET_NBUSYBKS_OFFSET                        12
#define AVR32_USB_UESTA5SET_NBUSYBKS_SIZE                           1
#define AVR32_USB_UESTA5SET_OVERFIS                                 5
#define AVR32_USB_UESTA5SET_OVERFIS_MASK                   0x00000020
#define AVR32_USB_UESTA5SET_OVERFIS_OFFSET                          5
#define AVR32_USB_UESTA5SET_OVERFIS_SIZE                            1
#define AVR32_USB_UESTA5SET_RESETVALUE                     0x00000000
#define AVR32_USB_UESTA5SET_RXOUTIS                                 1
#define AVR32_USB_UESTA5SET_RXOUTIS_MASK                   0x00000002
#define AVR32_USB_UESTA5SET_RXOUTIS_OFFSET                          1
#define AVR32_USB_UESTA5SET_RXOUTIS_SIZE                            1
#define AVR32_USB_UESTA5SET_RXSTPIS                                 2
#define AVR32_USB_UESTA5SET_RXSTPIS_MASK                   0x00000004
#define AVR32_USB_UESTA5SET_RXSTPIS_OFFSET                          2
#define AVR32_USB_UESTA5SET_RXSTPIS_SIZE                            1
#define AVR32_USB_UESTA5SET_SETMDATA                                8
#define AVR32_USB_UESTA5SET_SETMDATA_MASK                  0x00000100
#define AVR32_USB_UESTA5SET_SETMDATA_OFFSET                         8
#define AVR32_USB_UESTA5SET_SETMDATA_SIZE                           1
#define AVR32_USB_UESTA5SET_SHORTPACKETS                            7
#define AVR32_USB_UESTA5SET_SHORTPACKETS_MASK              0x00000080
#define AVR32_USB_UESTA5SET_SHORTPACKETS_OFFSET                     7
#define AVR32_USB_UESTA5SET_SHORTPACKETS_SIZE                       1
#define AVR32_USB_UESTA5SET_STALLEDIS                               6
#define AVR32_USB_UESTA5SET_STALLEDIS_MASK                 0x00000040
#define AVR32_USB_UESTA5SET_STALLEDIS_OFFSET                        6
#define AVR32_USB_UESTA5SET_STALLEDIS_SIZE                          1
#define AVR32_USB_UESTA5SET_TXINIS                                  0
#define AVR32_USB_UESTA5SET_TXINIS_MASK                    0x00000001
#define AVR32_USB_UESTA5SET_TXINIS_OFFSET                           0
#define AVR32_USB_UESTA5SET_TXINIS_SIZE                             1
#define AVR32_USB_UESTA5_BYCT                                      20
#define AVR32_USB_UESTA5_BYCT_MASK                         0x7ff00000
#define AVR32_USB_UESTA5_BYCT_OFFSET                               20
#define AVR32_USB_UESTA5_BYCT_SIZE                                 11
#define AVR32_USB_UESTA5_CFGOK                                     18
#define AVR32_USB_UESTA5_CFGOK_MASK                        0x00040000
#define AVR32_USB_UESTA5_CFGOK_OFFSET                              18
#define AVR32_USB_UESTA5_CFGOK_SIZE                                 1
#define AVR32_USB_UESTA5_CTRLDIR                                   17
#define AVR32_USB_UESTA5_CTRLDIR_IN                        0x00000001
#define AVR32_USB_UESTA5_CTRLDIR_MASK                      0x00020000
#define AVR32_USB_UESTA5_CTRLDIR_OFFSET                            17
#define AVR32_USB_UESTA5_CTRLDIR_OUT                       0x00000000
#define AVR32_USB_UESTA5_CTRLDIR_SIZE                               1
#define AVR32_USB_UESTA5_CURRBK                                    14
#define AVR32_USB_UESTA5_CURRBK_MASK                       0x0000c000
#define AVR32_USB_UESTA5_CURRBK_OFFSET                             14
#define AVR32_USB_UESTA5_CURRBK_SIZE                                2
#define AVR32_USB_UESTA5_DTSEQ                                      8
#define AVR32_USB_UESTA5_DTSEQ_MASK                        0x00000300
#define AVR32_USB_UESTA5_DTSEQ_OFFSET                               8
#define AVR32_USB_UESTA5_DTSEQ_SIZE                                 2
#define AVR32_USB_UESTA5_ERRORTRANS                                10
#define AVR32_USB_UESTA5_ERRORTRANS_MASK                   0x00000400
#define AVR32_USB_UESTA5_ERRORTRANS_OFFSET                         10
#define AVR32_USB_UESTA5_ERRORTRANS_SIZE                            1
#define AVR32_USB_UESTA5_MASK                              0x7ff7f7ff
#define AVR32_USB_UESTA5_NAKINI                                     4
#define AVR32_USB_UESTA5_NAKINI_MASK                       0x00000010
#define AVR32_USB_UESTA5_NAKINI_OFFSET                              4
#define AVR32_USB_UESTA5_NAKINI_SIZE                                1
#define AVR32_USB_UESTA5_NAKOUTI                                    3
#define AVR32_USB_UESTA5_NAKOUTI_MASK                      0x00000008
#define AVR32_USB_UESTA5_NAKOUTI_OFFSET                             3
#define AVR32_USB_UESTA5_NAKOUTI_SIZE                               1
#define AVR32_USB_UESTA5_NBUSYBK                                   12
#define AVR32_USB_UESTA5_NBUSYBK_MASK                      0x00003000
#define AVR32_USB_UESTA5_NBUSYBK_OFFSET                            12
#define AVR32_USB_UESTA5_NBUSYBK_SIZE                               2
#define AVR32_USB_UESTA5_OVERFI                                     5
#define AVR32_USB_UESTA5_OVERFI_MASK                       0x00000020
#define AVR32_USB_UESTA5_OVERFI_OFFSET                              5
#define AVR32_USB_UESTA5_OVERFI_SIZE                                1
#define AVR32_USB_UESTA5_RESETVALUE                        0x00000000
#define AVR32_USB_UESTA5_RWALL                                     16
#define AVR32_USB_UESTA5_RWALL_MASK                        0x00010000
#define AVR32_USB_UESTA5_RWALL_OFFSET                              16
#define AVR32_USB_UESTA5_RWALL_SIZE                                 1
#define AVR32_USB_UESTA5_RXOUTI                                     1
#define AVR32_USB_UESTA5_RXOUTI_MASK                       0x00000002
#define AVR32_USB_UESTA5_RXOUTI_OFFSET                              1
#define AVR32_USB_UESTA5_RXOUTI_SIZE                                1
#define AVR32_USB_UESTA5_RXSTPI                                     2
#define AVR32_USB_UESTA5_RXSTPI_MASK                       0x00000004
#define AVR32_USB_UESTA5_RXSTPI_OFFSET                              2
#define AVR32_USB_UESTA5_RXSTPI_SIZE                                1
#define AVR32_USB_UESTA5_SHORTPACKET                                7
#define AVR32_USB_UESTA5_SHORTPACKET_MASK                  0x00000080
#define AVR32_USB_UESTA5_SHORTPACKET_OFFSET                         7
#define AVR32_USB_UESTA5_SHORTPACKET_SIZE                           1
#define AVR32_USB_UESTA5_STALLEDI                                   6
#define AVR32_USB_UESTA5_STALLEDI_MASK                     0x00000040
#define AVR32_USB_UESTA5_STALLEDI_OFFSET                            6
#define AVR32_USB_UESTA5_STALLEDI_SIZE                              1
#define AVR32_USB_UESTA5_TXINI                                      0
#define AVR32_USB_UESTA5_TXINI_MASK                        0x00000001
#define AVR32_USB_UESTA5_TXINI_OFFSET                               0
#define AVR32_USB_UESTA5_TXINI_SIZE                                 1
#define AVR32_USB_UESTA6                                   0x00000148
#define AVR32_USB_UESTA6CLR                                0x00000178
#define AVR32_USB_UESTA6CLR_MASK                           0x000000ff
#define AVR32_USB_UESTA6CLR_NAKINIC                                 4
#define AVR32_USB_UESTA6CLR_NAKINIC_MASK                   0x00000010
#define AVR32_USB_UESTA6CLR_NAKINIC_OFFSET                          4
#define AVR32_USB_UESTA6CLR_NAKINIC_SIZE                            1
#define AVR32_USB_UESTA6CLR_NAKOUTIC                                3
#define AVR32_USB_UESTA6CLR_NAKOUTIC_MASK                  0x00000008
#define AVR32_USB_UESTA6CLR_NAKOUTIC_OFFSET                         3
#define AVR32_USB_UESTA6CLR_NAKOUTIC_SIZE                           1
#define AVR32_USB_UESTA6CLR_OVERFIC                                 5
#define AVR32_USB_UESTA6CLR_OVERFIC_MASK                   0x00000020
#define AVR32_USB_UESTA6CLR_OVERFIC_OFFSET                          5
#define AVR32_USB_UESTA6CLR_OVERFIC_SIZE                            1
#define AVR32_USB_UESTA6CLR_RESETVALUE                     0x00000000
#define AVR32_USB_UESTA6CLR_RXOUTIC                                 1
#define AVR32_USB_UESTA6CLR_RXOUTIC_MASK                   0x00000002
#define AVR32_USB_UESTA6CLR_RXOUTIC_OFFSET                          1
#define AVR32_USB_UESTA6CLR_RXOUTIC_SIZE                            1
#define AVR32_USB_UESTA6CLR_RXSTPIC                                 2
#define AVR32_USB_UESTA6CLR_RXSTPIC_MASK                   0x00000004
#define AVR32_USB_UESTA6CLR_RXSTPIC_OFFSET                          2
#define AVR32_USB_UESTA6CLR_RXSTPIC_SIZE                            1
#define AVR32_USB_UESTA6CLR_SHORTPACKETC                            7
#define AVR32_USB_UESTA6CLR_SHORTPACKETC_MASK              0x00000080
#define AVR32_USB_UESTA6CLR_SHORTPACKETC_OFFSET                     7
#define AVR32_USB_UESTA6CLR_SHORTPACKETC_SIZE                       1
#define AVR32_USB_UESTA6CLR_STALLEDIC                               6
#define AVR32_USB_UESTA6CLR_STALLEDIC_MASK                 0x00000040
#define AVR32_USB_UESTA6CLR_STALLEDIC_OFFSET                        6
#define AVR32_USB_UESTA6CLR_STALLEDIC_SIZE                          1
#define AVR32_USB_UESTA6CLR_TXINIC                                  0
#define AVR32_USB_UESTA6CLR_TXINIC_MASK                    0x00000001
#define AVR32_USB_UESTA6CLR_TXINIC_OFFSET                           0
#define AVR32_USB_UESTA6CLR_TXINIC_SIZE                             1
#define AVR32_USB_UESTA6SET                                0x000001a8
#define AVR32_USB_UESTA6SET_ERRORTRANSS                            10
#define AVR32_USB_UESTA6SET_ERRORTRANSS_MASK               0x00000400
#define AVR32_USB_UESTA6SET_ERRORTRANSS_OFFSET                     10
#define AVR32_USB_UESTA6SET_ERRORTRANSS_SIZE                        1
#define AVR32_USB_UESTA6SET_MASK                           0x000015ff
#define AVR32_USB_UESTA6SET_NAKINIS                                 4
#define AVR32_USB_UESTA6SET_NAKINIS_MASK                   0x00000010
#define AVR32_USB_UESTA6SET_NAKINIS_OFFSET                          4
#define AVR32_USB_UESTA6SET_NAKINIS_SIZE                            1
#define AVR32_USB_UESTA6SET_NAKOUTIS                                3
#define AVR32_USB_UESTA6SET_NAKOUTIS_MASK                  0x00000008
#define AVR32_USB_UESTA6SET_NAKOUTIS_OFFSET                         3
#define AVR32_USB_UESTA6SET_NAKOUTIS_SIZE                           1
#define AVR32_USB_UESTA6SET_NBUSYBKS                               12
#define AVR32_USB_UESTA6SET_NBUSYBKS_MASK                  0x00001000
#define AVR32_USB_UESTA6SET_NBUSYBKS_OFFSET                        12
#define AVR32_USB_UESTA6SET_NBUSYBKS_SIZE                           1
#define AVR32_USB_UESTA6SET_OVERFIS                                 5
#define AVR32_USB_UESTA6SET_OVERFIS_MASK                   0x00000020
#define AVR32_USB_UESTA6SET_OVERFIS_OFFSET                          5
#define AVR32_USB_UESTA6SET_OVERFIS_SIZE                            1
#define AVR32_USB_UESTA6SET_RESETVALUE                     0x00000000
#define AVR32_USB_UESTA6SET_RXOUTIS                                 1
#define AVR32_USB_UESTA6SET_RXOUTIS_MASK                   0x00000002
#define AVR32_USB_UESTA6SET_RXOUTIS_OFFSET                          1
#define AVR32_USB_UESTA6SET_RXOUTIS_SIZE                            1
#define AVR32_USB_UESTA6SET_RXSTPIS                                 2
#define AVR32_USB_UESTA6SET_RXSTPIS_MASK                   0x00000004
#define AVR32_USB_UESTA6SET_RXSTPIS_OFFSET                          2
#define AVR32_USB_UESTA6SET_RXSTPIS_SIZE                            1
#define AVR32_USB_UESTA6SET_SETMDATA                                8
#define AVR32_USB_UESTA6SET_SETMDATA_MASK                  0x00000100
#define AVR32_USB_UESTA6SET_SETMDATA_OFFSET                         8
#define AVR32_USB_UESTA6SET_SETMDATA_SIZE                           1
#define AVR32_USB_UESTA6SET_SHORTPACKETS                            7
#define AVR32_USB_UESTA6SET_SHORTPACKETS_MASK              0x00000080
#define AVR32_USB_UESTA6SET_SHORTPACKETS_OFFSET                     7
#define AVR32_USB_UESTA6SET_SHORTPACKETS_SIZE                       1
#define AVR32_USB_UESTA6SET_STALLEDIS                               6
#define AVR32_USB_UESTA6SET_STALLEDIS_MASK                 0x00000040
#define AVR32_USB_UESTA6SET_STALLEDIS_OFFSET                        6
#define AVR32_USB_UESTA6SET_STALLEDIS_SIZE                          1
#define AVR32_USB_UESTA6SET_TXINIS                                  0
#define AVR32_USB_UESTA6SET_TXINIS_MASK                    0x00000001
#define AVR32_USB_UESTA6SET_TXINIS_OFFSET                           0
#define AVR32_USB_UESTA6SET_TXINIS_SIZE                             1
#define AVR32_USB_UESTA6_BYCT                                      20
#define AVR32_USB_UESTA6_BYCT_MASK                         0x7ff00000
#define AVR32_USB_UESTA6_BYCT_OFFSET                               20
#define AVR32_USB_UESTA6_BYCT_SIZE                                 11
#define AVR32_USB_UESTA6_CFGOK                                     18
#define AVR32_USB_UESTA6_CFGOK_MASK                        0x00040000
#define AVR32_USB_UESTA6_CFGOK_OFFSET                              18
#define AVR32_USB_UESTA6_CFGOK_SIZE                                 1
#define AVR32_USB_UESTA6_CTRLDIR                                   17
#define AVR32_USB_UESTA6_CTRLDIR_IN                        0x00000001
#define AVR32_USB_UESTA6_CTRLDIR_MASK                      0x00020000
#define AVR32_USB_UESTA6_CTRLDIR_OFFSET                            17
#define AVR32_USB_UESTA6_CTRLDIR_OUT                       0x00000000
#define AVR32_USB_UESTA6_CTRLDIR_SIZE                               1
#define AVR32_USB_UESTA6_CURRBK                                    14
#define AVR32_USB_UESTA6_CURRBK_MASK                       0x0000c000
#define AVR32_USB_UESTA6_CURRBK_OFFSET                             14
#define AVR32_USB_UESTA6_CURRBK_SIZE                                2
#define AVR32_USB_UESTA6_DTSEQ                                      8
#define AVR32_USB_UESTA6_DTSEQ_MASK                        0x00000300
#define AVR32_USB_UESTA6_DTSEQ_OFFSET                               8
#define AVR32_USB_UESTA6_DTSEQ_SIZE                                 2
#define AVR32_USB_UESTA6_ERRORTRANS                                10
#define AVR32_USB_UESTA6_ERRORTRANS_MASK                   0x00000400
#define AVR32_USB_UESTA6_ERRORTRANS_OFFSET                         10
#define AVR32_USB_UESTA6_ERRORTRANS_SIZE                            1
#define AVR32_USB_UESTA6_MASK                              0x7ff7f7ff
#define AVR32_USB_UESTA6_NAKINI                                     4
#define AVR32_USB_UESTA6_NAKINI_MASK                       0x00000010
#define AVR32_USB_UESTA6_NAKINI_OFFSET                              4
#define AVR32_USB_UESTA6_NAKINI_SIZE                                1
#define AVR32_USB_UESTA6_NAKOUTI                                    3
#define AVR32_USB_UESTA6_NAKOUTI_MASK                      0x00000008
#define AVR32_USB_UESTA6_NAKOUTI_OFFSET                             3
#define AVR32_USB_UESTA6_NAKOUTI_SIZE                               1
#define AVR32_USB_UESTA6_NBUSYBK                                   12
#define AVR32_USB_UESTA6_NBUSYBK_MASK                      0x00003000
#define AVR32_USB_UESTA6_NBUSYBK_OFFSET                            12
#define AVR32_USB_UESTA6_NBUSYBK_SIZE                               2
#define AVR32_USB_UESTA6_OVERFI                                     5
#define AVR32_USB_UESTA6_OVERFI_MASK                       0x00000020
#define AVR32_USB_UESTA6_OVERFI_OFFSET                              5
#define AVR32_USB_UESTA6_OVERFI_SIZE                                1
#define AVR32_USB_UESTA6_RESETVALUE                        0x00000000
#define AVR32_USB_UESTA6_RWALL                                     16
#define AVR32_USB_UESTA6_RWALL_MASK                        0x00010000
#define AVR32_USB_UESTA6_RWALL_OFFSET                              16
#define AVR32_USB_UESTA6_RWALL_SIZE                                 1
#define AVR32_USB_UESTA6_RXOUTI                                     1
#define AVR32_USB_UESTA6_RXOUTI_MASK                       0x00000002
#define AVR32_USB_UESTA6_RXOUTI_OFFSET                              1
#define AVR32_USB_UESTA6_RXOUTI_SIZE                                1
#define AVR32_USB_UESTA6_RXSTPI                                     2
#define AVR32_USB_UESTA6_RXSTPI_MASK                       0x00000004
#define AVR32_USB_UESTA6_RXSTPI_OFFSET                              2
#define AVR32_USB_UESTA6_RXSTPI_SIZE                                1
#define AVR32_USB_UESTA6_SHORTPACKET                                7
#define AVR32_USB_UESTA6_SHORTPACKET_MASK                  0x00000080
#define AVR32_USB_UESTA6_SHORTPACKET_OFFSET                         7
#define AVR32_USB_UESTA6_SHORTPACKET_SIZE                           1
#define AVR32_USB_UESTA6_STALLEDI                                   6
#define AVR32_USB_UESTA6_STALLEDI_MASK                     0x00000040
#define AVR32_USB_UESTA6_STALLEDI_OFFSET                            6
#define AVR32_USB_UESTA6_STALLEDI_SIZE                              1
#define AVR32_USB_UESTA6_TXINI                                      0
#define AVR32_USB_UESTA6_TXINI_MASK                        0x00000001
#define AVR32_USB_UESTA6_TXINI_OFFSET                               0
#define AVR32_USB_UESTA6_TXINI_SIZE                                 1
#define AVR32_USB_UESTA7                                   0x0000014c
#define AVR32_USB_UESTA7CLR                                0x0000017c
#define AVR32_USB_UESTA7CLR_MASK                           0x000000ff
#define AVR32_USB_UESTA7CLR_NAKINIC                                 4
#define AVR32_USB_UESTA7CLR_NAKINIC_MASK                   0x00000010
#define AVR32_USB_UESTA7CLR_NAKINIC_OFFSET                          4
#define AVR32_USB_UESTA7CLR_NAKINIC_SIZE                            1
#define AVR32_USB_UESTA7CLR_NAKOUTIC                                3
#define AVR32_USB_UESTA7CLR_NAKOUTIC_MASK                  0x00000008
#define AVR32_USB_UESTA7CLR_NAKOUTIC_OFFSET                         3
#define AVR32_USB_UESTA7CLR_NAKOUTIC_SIZE                           1
#define AVR32_USB_UESTA7CLR_OVERFIC                                 5
#define AVR32_USB_UESTA7CLR_OVERFIC_MASK                   0x00000020
#define AVR32_USB_UESTA7CLR_OVERFIC_OFFSET                          5
#define AVR32_USB_UESTA7CLR_OVERFIC_SIZE                            1
#define AVR32_USB_UESTA7CLR_RESETVALUE                     0x00000000
#define AVR32_USB_UESTA7CLR_RXOUTIC                                 1
#define AVR32_USB_UESTA7CLR_RXOUTIC_MASK                   0x00000002
#define AVR32_USB_UESTA7CLR_RXOUTIC_OFFSET                          1
#define AVR32_USB_UESTA7CLR_RXOUTIC_SIZE                            1
#define AVR32_USB_UESTA7CLR_RXSTPIC                                 2
#define AVR32_USB_UESTA7CLR_RXSTPIC_MASK                   0x00000004
#define AVR32_USB_UESTA7CLR_RXSTPIC_OFFSET                          2
#define AVR32_USB_UESTA7CLR_RXSTPIC_SIZE                            1
#define AVR32_USB_UESTA7CLR_SHORTPACKETC                            7
#define AVR32_USB_UESTA7CLR_SHORTPACKETC_MASK              0x00000080
#define AVR32_USB_UESTA7CLR_SHORTPACKETC_OFFSET                     7
#define AVR32_USB_UESTA7CLR_SHORTPACKETC_SIZE                       1
#define AVR32_USB_UESTA7CLR_STALLEDIC                               6
#define AVR32_USB_UESTA7CLR_STALLEDIC_MASK                 0x00000040
#define AVR32_USB_UESTA7CLR_STALLEDIC_OFFSET                        6
#define AVR32_USB_UESTA7CLR_STALLEDIC_SIZE                          1
#define AVR32_USB_UESTA7CLR_TXINIC                                  0
#define AVR32_USB_UESTA7CLR_TXINIC_MASK                    0x00000001
#define AVR32_USB_UESTA7CLR_TXINIC_OFFSET                           0
#define AVR32_USB_UESTA7CLR_TXINIC_SIZE                             1
#define AVR32_USB_UESTA7SET                                0x000001ac
#define AVR32_USB_UESTA7SET_ERRORTRANSS                            10
#define AVR32_USB_UESTA7SET_ERRORTRANSS_MASK               0x00000400
#define AVR32_USB_UESTA7SET_ERRORTRANSS_OFFSET                     10
#define AVR32_USB_UESTA7SET_ERRORTRANSS_SIZE                        1
#define AVR32_USB_UESTA7SET_MASK                           0x000015ff
#define AVR32_USB_UESTA7SET_NAKINIS                                 4
#define AVR32_USB_UESTA7SET_NAKINIS_MASK                   0x00000010
#define AVR32_USB_UESTA7SET_NAKINIS_OFFSET                          4
#define AVR32_USB_UESTA7SET_NAKINIS_SIZE                            1
#define AVR32_USB_UESTA7SET_NAKOUTIS                                3
#define AVR32_USB_UESTA7SET_NAKOUTIS_MASK                  0x00000008
#define AVR32_USB_UESTA7SET_NAKOUTIS_OFFSET                         3
#define AVR32_USB_UESTA7SET_NAKOUTIS_SIZE                           1
#define AVR32_USB_UESTA7SET_NBUSYBKS                               12
#define AVR32_USB_UESTA7SET_NBUSYBKS_MASK                  0x00001000
#define AVR32_USB_UESTA7SET_NBUSYBKS_OFFSET                        12
#define AVR32_USB_UESTA7SET_NBUSYBKS_SIZE                           1
#define AVR32_USB_UESTA7SET_OVERFIS                                 5
#define AVR32_USB_UESTA7SET_OVERFIS_MASK                   0x00000020
#define AVR32_USB_UESTA7SET_OVERFIS_OFFSET                          5
#define AVR32_USB_UESTA7SET_OVERFIS_SIZE                            1
#define AVR32_USB_UESTA7SET_RESETVALUE                     0x00000000
#define AVR32_USB_UESTA7SET_RXOUTIS                                 1
#define AVR32_USB_UESTA7SET_RXOUTIS_MASK                   0x00000002
#define AVR32_USB_UESTA7SET_RXOUTIS_OFFSET                          1
#define AVR32_USB_UESTA7SET_RXOUTIS_SIZE                            1
#define AVR32_USB_UESTA7SET_RXSTPIS                                 2
#define AVR32_USB_UESTA7SET_RXSTPIS_MASK                   0x00000004
#define AVR32_USB_UESTA7SET_RXSTPIS_OFFSET                          2
#define AVR32_USB_UESTA7SET_RXSTPIS_SIZE                            1
#define AVR32_USB_UESTA7SET_SETMDATA                                8
#define AVR32_USB_UESTA7SET_SETMDATA_MASK                  0x00000100
#define AVR32_USB_UESTA7SET_SETMDATA_OFFSET                         8
#define AVR32_USB_UESTA7SET_SETMDATA_SIZE                           1
#define AVR32_USB_UESTA7SET_SHORTPACKETS                            7
#define AVR32_USB_UESTA7SET_SHORTPACKETS_MASK              0x00000080
#define AVR32_USB_UESTA7SET_SHORTPACKETS_OFFSET                     7
#define AVR32_USB_UESTA7SET_SHORTPACKETS_SIZE                       1
#define AVR32_USB_UESTA7SET_STALLEDIS                               6
#define AVR32_USB_UESTA7SET_STALLEDIS_MASK                 0x00000040
#define AVR32_USB_UESTA7SET_STALLEDIS_OFFSET                        6
#define AVR32_USB_UESTA7SET_STALLEDIS_SIZE                          1
#define AVR32_USB_UESTA7SET_TXINIS                                  0
#define AVR32_USB_UESTA7SET_TXINIS_MASK                    0x00000001
#define AVR32_USB_UESTA7SET_TXINIS_OFFSET                           0
#define AVR32_USB_UESTA7SET_TXINIS_SIZE                             1
#define AVR32_USB_UESTA7_BYCT                                      20
#define AVR32_USB_UESTA7_BYCT_MASK                         0x7ff00000
#define AVR32_USB_UESTA7_BYCT_OFFSET                               20
#define AVR32_USB_UESTA7_BYCT_SIZE                                 11
#define AVR32_USB_UESTA7_CFGOK                                     18
#define AVR32_USB_UESTA7_CFGOK_MASK                        0x00040000
#define AVR32_USB_UESTA7_CFGOK_OFFSET                              18
#define AVR32_USB_UESTA7_CFGOK_SIZE                                 1
#define AVR32_USB_UESTA7_CTRLDIR                                   17
#define AVR32_USB_UESTA7_CTRLDIR_MASK                      0x00020000
#define AVR32_USB_UESTA7_CTRLDIR_OFFSET                            17
#define AVR32_USB_UESTA7_CTRLDIR_SIZE                               1
#define AVR32_USB_UESTA7_CURRBK                                    14
#define AVR32_USB_UESTA7_CURRBK_MASK                       0x0000c000
#define AVR32_USB_UESTA7_CURRBK_OFFSET                             14
#define AVR32_USB_UESTA7_CURRBK_SIZE                                2
#define AVR32_USB_UESTA7_DTSEQ                                      8
#define AVR32_USB_UESTA7_DTSEQ_MASK                        0x00000300
#define AVR32_USB_UESTA7_DTSEQ_OFFSET                               8
#define AVR32_USB_UESTA7_DTSEQ_SIZE                                 2
#define AVR32_USB_UESTA7_ERRORTRANS                                10
#define AVR32_USB_UESTA7_ERRORTRANS_MASK                   0x00000400
#define AVR32_USB_UESTA7_ERRORTRANS_OFFSET                         10
#define AVR32_USB_UESTA7_ERRORTRANS_SIZE                            1
#define AVR32_USB_UESTA7_MASK                              0x7ff7f7ff
#define AVR32_USB_UESTA7_NAKINI                                     4
#define AVR32_USB_UESTA7_NAKINI_MASK                       0x00000010
#define AVR32_USB_UESTA7_NAKINI_OFFSET                              4
#define AVR32_USB_UESTA7_NAKINI_SIZE                                1
#define AVR32_USB_UESTA7_NAKOUTI                                    3
#define AVR32_USB_UESTA7_NAKOUTI_MASK                      0x00000008
#define AVR32_USB_UESTA7_NAKOUTI_OFFSET                             3
#define AVR32_USB_UESTA7_NAKOUTI_SIZE                               1
#define AVR32_USB_UESTA7_NBUSYBK                                   12
#define AVR32_USB_UESTA7_NBUSYBK_MASK                      0x00003000
#define AVR32_USB_UESTA7_NBUSYBK_OFFSET                            12
#define AVR32_USB_UESTA7_NBUSYBK_SIZE                               2
#define AVR32_USB_UESTA7_OVERFI                                     5
#define AVR32_USB_UESTA7_OVERFI_MASK                       0x00000020
#define AVR32_USB_UESTA7_OVERFI_OFFSET                              5
#define AVR32_USB_UESTA7_OVERFI_SIZE                                1
#define AVR32_USB_UESTA7_RESETVALUE                        0x00000000
#define AVR32_USB_UESTA7_RWALL                                     16
#define AVR32_USB_UESTA7_RWALL_MASK                        0x00010000
#define AVR32_USB_UESTA7_RWALL_OFFSET                              16
#define AVR32_USB_UESTA7_RWALL_SIZE                                 1
#define AVR32_USB_UESTA7_RXOUTI                                     1
#define AVR32_USB_UESTA7_RXOUTI_MASK                       0x00000002
#define AVR32_USB_UESTA7_RXOUTI_OFFSET                              1
#define AVR32_USB_UESTA7_RXOUTI_SIZE                                1
#define AVR32_USB_UESTA7_RXSTPI                                     2
#define AVR32_USB_UESTA7_RXSTPI_MASK                       0x00000004
#define AVR32_USB_UESTA7_RXSTPI_OFFSET                              2
#define AVR32_USB_UESTA7_RXSTPI_SIZE                                1
#define AVR32_USB_UESTA7_SHORTPACKET                                7
#define AVR32_USB_UESTA7_SHORTPACKET_MASK                  0x00000080
#define AVR32_USB_UESTA7_SHORTPACKET_OFFSET                         7
#define AVR32_USB_UESTA7_SHORTPACKET_SIZE                           1
#define AVR32_USB_UESTA7_STALLEDI                                   6
#define AVR32_USB_UESTA7_STALLEDI_MASK                     0x00000040
#define AVR32_USB_UESTA7_STALLEDI_OFFSET                            6
#define AVR32_USB_UESTA7_STALLEDI_SIZE                              1
#define AVR32_USB_UESTA7_TXINI                                      0
#define AVR32_USB_UESTA7_TXINI_MASK                        0x00000001
#define AVR32_USB_UESTA7_TXINI_OFFSET                               0
#define AVR32_USB_UESTA7_TXINI_SIZE                                 1
#define AVR32_USB_UFEATURES                                0x0000081c
#define AVR32_USB_UFEATURES_BYTE_WRITE_DPRAM                       15
#define AVR32_USB_UFEATURES_BYTE_WRITE_DPRAM_MASK          0x00008000
#define AVR32_USB_UFEATURES_BYTE_WRITE_DPRAM_OFFSET                15
#define AVR32_USB_UFEATURES_BYTE_WRITE_DPRAM_SIZE                   1
#define AVR32_USB_UFEATURES_DATA_BUS_8_16                          16
#define AVR32_USB_UFEATURES_DATA_BUS_8_16_MASK             0x00010000
#define AVR32_USB_UFEATURES_DATA_BUS_8_16_OFFSET                   16
#define AVR32_USB_UFEATURES_DATA_BUS_8_16_SIZE                      1
#define AVR32_USB_UFEATURES_DMA_BUFFER_SIZE                         7
#define AVR32_USB_UFEATURES_DMA_BUFFER_SIZE_16_BITS        0x00000000
#define AVR32_USB_UFEATURES_DMA_BUFFER_SIZE_24_BITS        0x00000001
#define AVR32_USB_UFEATURES_DMA_BUFFER_SIZE_MASK           0x00000080
#define AVR32_USB_UFEATURES_DMA_BUFFER_SIZE_OFFSET                  7
#define AVR32_USB_UFEATURES_DMA_BUFFER_SIZE_SIZE                    1
#define AVR32_USB_UFEATURES_DMA_CHANNEL_NBR                         4
#define AVR32_USB_UFEATURES_DMA_CHANNEL_NBR_MASK           0x00000070
#define AVR32_USB_UFEATURES_DMA_CHANNEL_NBR_OFFSET                  4
#define AVR32_USB_UFEATURES_DMA_CHANNEL_NBR_SIZE                    3
#define AVR32_USB_UFEATURES_DMA_FIFO_WORD_DEPTH                     8
#define AVR32_USB_UFEATURES_DMA_FIFO_WORD_DEPTH_MASK       0x00000f00
#define AVR32_USB_UFEATURES_DMA_FIFO_WORD_DEPTH_OFFSET              8
#define AVR32_USB_UFEATURES_DMA_FIFO_WORD_DEPTH_SIZE                4
#define AVR32_USB_UFEATURES_EN_HIGH_BD_ISO_EPT_1                   17
#define AVR32_USB_UFEATURES_EN_HIGH_BD_ISO_EPT_10                  26
#define AVR32_USB_UFEATURES_EN_HIGH_BD_ISO_EPT_10_MASK     0x04000000
#define AVR32_USB_UFEATURES_EN_HIGH_BD_ISO_EPT_10_OFFSET           26
#define AVR32_USB_UFEATURES_EN_HIGH_BD_ISO_EPT_10_SIZE              1
#define AVR32_USB_UFEATURES_EN_HIGH_BD_ISO_EPT_11                  27
#define AVR32_USB_UFEATURES_EN_HIGH_BD_ISO_EPT_11_MASK     0x08000000
#define AVR32_USB_UFEATURES_EN_HIGH_BD_ISO_EPT_11_OFFSET           27
#define AVR32_USB_UFEATURES_EN_HIGH_BD_ISO_EPT_11_SIZE              1
#define AVR32_USB_UFEATURES_EN_HIGH_BD_ISO_EPT_12                  28
#define AVR32_USB_UFEATURES_EN_HIGH_BD_ISO_EPT_12_MASK     0x10000000
#define AVR32_USB_UFEATURES_EN_HIGH_BD_ISO_EPT_12_OFFSET           28
#define AVR32_USB_UFEATURES_EN_HIGH_BD_ISO_EPT_12_SIZE              1
#define AVR32_USB_UFEATURES_EN_HIGH_BD_ISO_EPT_13                  29
#define AVR32_USB_UFEATURES_EN_HIGH_BD_ISO_EPT_13_MASK     0x20000000
#define AVR32_USB_UFEATURES_EN_HIGH_BD_ISO_EPT_13_OFFSET           29
#define AVR32_USB_UFEATURES_EN_HIGH_BD_ISO_EPT_13_SIZE              1
#define AVR32_USB_UFEATURES_EN_HIGH_BD_ISO_EPT_14                  30
#define AVR32_USB_UFEATURES_EN_HIGH_BD_ISO_EPT_14_MASK     0x40000000
#define AVR32_USB_UFEATURES_EN_HIGH_BD_ISO_EPT_14_OFFSET           30
#define AVR32_USB_UFEATURES_EN_HIGH_BD_ISO_EPT_14_SIZE              1
#define AVR32_USB_UFEATURES_EN_HIGH_BD_ISO_EPT_15                  31
#define AVR32_USB_UFEATURES_EN_HIGH_BD_ISO_EPT_15_MASK     0x80000000
#define AVR32_USB_UFEATURES_EN_HIGH_BD_ISO_EPT_15_OFFSET           31
#define AVR32_USB_UFEATURES_EN_HIGH_BD_ISO_EPT_15_SIZE              1
#define AVR32_USB_UFEATURES_EN_HIGH_BD_ISO_EPT_1_MASK      0x00020000
#define AVR32_USB_UFEATURES_EN_HIGH_BD_ISO_EPT_1_OFFSET            17
#define AVR32_USB_UFEATURES_EN_HIGH_BD_ISO_EPT_1_SIZE               1
#define AVR32_USB_UFEATURES_EN_HIGH_BD_ISO_EPT_2                   18
#define AVR32_USB_UFEATURES_EN_HIGH_BD_ISO_EPT_2_MASK      0x00040000
#define AVR32_USB_UFEATURES_EN_HIGH_BD_ISO_EPT_2_OFFSET            18
#define AVR32_USB_UFEATURES_EN_HIGH_BD_ISO_EPT_2_SIZE               1
#define AVR32_USB_UFEATURES_EN_HIGH_BD_ISO_EPT_3                   19
#define AVR32_USB_UFEATURES_EN_HIGH_BD_ISO_EPT_3_MASK      0x00080000
#define AVR32_USB_UFEATURES_EN_HIGH_BD_ISO_EPT_3_OFFSET            19
#define AVR32_USB_UFEATURES_EN_HIGH_BD_ISO_EPT_3_SIZE               1
#define AVR32_USB_UFEATURES_EN_HIGH_BD_ISO_EPT_4                   20
#define AVR32_USB_UFEATURES_EN_HIGH_BD_ISO_EPT_4_MASK      0x00100000
#define AVR32_USB_UFEATURES_EN_HIGH_BD_ISO_EPT_4_OFFSET            20
#define AVR32_USB_UFEATURES_EN_HIGH_BD_ISO_EPT_4_SIZE               1
#define AVR32_USB_UFEATURES_EN_HIGH_BD_ISO_EPT_5                   21
#define AVR32_USB_UFEATURES_EN_HIGH_BD_ISO_EPT_5_MASK      0x00200000
#define AVR32_USB_UFEATURES_EN_HIGH_BD_ISO_EPT_5_OFFSET            21
#define AVR32_USB_UFEATURES_EN_HIGH_BD_ISO_EPT_5_SIZE               1
#define AVR32_USB_UFEATURES_EN_HIGH_BD_ISO_EPT_6                   22
#define AVR32_USB_UFEATURES_EN_HIGH_BD_ISO_EPT_6_MASK      0x00400000
#define AVR32_USB_UFEATURES_EN_HIGH_BD_ISO_EPT_6_OFFSET            22
#define AVR32_USB_UFEATURES_EN_HIGH_BD_ISO_EPT_6_SIZE               1
#define AVR32_USB_UFEATURES_EN_HIGH_BD_ISO_EPT_7                   23
#define AVR32_USB_UFEATURES_EN_HIGH_BD_ISO_EPT_7_MASK      0x00800000
#define AVR32_USB_UFEATURES_EN_HIGH_BD_ISO_EPT_7_OFFSET            23
#define AVR32_USB_UFEATURES_EN_HIGH_BD_ISO_EPT_7_SIZE               1
#define AVR32_USB_UFEATURES_EN_HIGH_BD_ISO_EPT_8                   24
#define AVR32_USB_UFEATURES_EN_HIGH_BD_ISO_EPT_8_MASK      0x01000000
#define AVR32_USB_UFEATURES_EN_HIGH_BD_ISO_EPT_8_OFFSET            24
#define AVR32_USB_UFEATURES_EN_HIGH_BD_ISO_EPT_8_SIZE               1
#define AVR32_USB_UFEATURES_EN_HIGH_BD_ISO_EPT_9                   25
#define AVR32_USB_UFEATURES_EN_HIGH_BD_ISO_EPT_9_MASK      0x02000000
#define AVR32_USB_UFEATURES_EN_HIGH_BD_ISO_EPT_9_OFFSET            25
#define AVR32_USB_UFEATURES_EN_HIGH_BD_ISO_EPT_9_SIZE               1
#define AVR32_USB_UFEATURES_EPT_NBR_MAX                             0
#define AVR32_USB_UFEATURES_EPT_NBR_MAX_MASK               0x0000000f
#define AVR32_USB_UFEATURES_EPT_NBR_MAX_OFFSET                      0
#define AVR32_USB_UFEATURES_EPT_NBR_MAX_SIZE                        4
#define AVR32_USB_UFEATURES_FIFO_MAX_SIZE                          12
#define AVR32_USB_UFEATURES_FIFO_MAX_SIZE_GE_16384         0x00000007
#define AVR32_USB_UFEATURES_FIFO_MAX_SIZE_LT_1024          0x00000002
#define AVR32_USB_UFEATURES_FIFO_MAX_SIZE_LT_16384         0x00000006
#define AVR32_USB_UFEATURES_FIFO_MAX_SIZE_LT_2048          0x00000003
#define AVR32_USB_UFEATURES_FIFO_MAX_SIZE_LT_256           0x00000000
#define AVR32_USB_UFEATURES_FIFO_MAX_SIZE_LT_4096          0x00000004
#define AVR32_USB_UFEATURES_FIFO_MAX_SIZE_LT_512           0x00000001
#define AVR32_USB_UFEATURES_FIFO_MAX_SIZE_LT_8192          0x00000005
#define AVR32_USB_UFEATURES_FIFO_MAX_SIZE_MASK             0x00007000
#define AVR32_USB_UFEATURES_FIFO_MAX_SIZE_OFFSET                   12
#define AVR32_USB_UFEATURES_FIFO_MAX_SIZE_SIZE                      3
#define AVR32_USB_UFEATURES_MASK                           0xffffffff
#define AVR32_USB_UFEATURES_RESETVALUE                     0x0001b467
#define AVR32_USB_UHADDR1                                  0x00000424
#define AVR32_USB_UHADDR1_MASK                             0x7f7f7f7f
#define AVR32_USB_UHADDR1_RESETVALUE                       0x00000000
#define AVR32_USB_UHADDR1_UHADDR_P0                                 0
#define AVR32_USB_UHADDR1_UHADDR_P0_MASK                   0x0000007f
#define AVR32_USB_UHADDR1_UHADDR_P0_OFFSET                          0
#define AVR32_USB_UHADDR1_UHADDR_P0_SIZE                            7
#define AVR32_USB_UHADDR1_UHADDR_P1                                 8
#define AVR32_USB_UHADDR1_UHADDR_P1_MASK                   0x00007f00
#define AVR32_USB_UHADDR1_UHADDR_P1_OFFSET                          8
#define AVR32_USB_UHADDR1_UHADDR_P1_SIZE                            7
#define AVR32_USB_UHADDR1_UHADDR_P2                                16
#define AVR32_USB_UHADDR1_UHADDR_P2_MASK                   0x007f0000
#define AVR32_USB_UHADDR1_UHADDR_P2_OFFSET                         16
#define AVR32_USB_UHADDR1_UHADDR_P2_SIZE                            7
#define AVR32_USB_UHADDR1_UHADDR_P3                                24
#define AVR32_USB_UHADDR1_UHADDR_P3_MASK                   0x7f000000
#define AVR32_USB_UHADDR1_UHADDR_P3_OFFSET                         24
#define AVR32_USB_UHADDR1_UHADDR_P3_SIZE                            7
#define AVR32_USB_UHADDR2                                  0x00000428
#define AVR32_USB_UHADDR2_MASK                             0x7f7f7f7f
#define AVR32_USB_UHADDR2_RESETVALUE                       0x00000000
#define AVR32_USB_UHADDR2_UHADDR_P4                                 0
#define AVR32_USB_UHADDR2_UHADDR_P4_MASK                   0x0000007f
#define AVR32_USB_UHADDR2_UHADDR_P4_OFFSET                          0
#define AVR32_USB_UHADDR2_UHADDR_P4_SIZE                            7
#define AVR32_USB_UHADDR2_UHADDR_P5                                 8
#define AVR32_USB_UHADDR2_UHADDR_P5_MASK                   0x00007f00
#define AVR32_USB_UHADDR2_UHADDR_P5_OFFSET                          8
#define AVR32_USB_UHADDR2_UHADDR_P5_SIZE                            7
#define AVR32_USB_UHADDR2_UHADDR_P6                                16
#define AVR32_USB_UHADDR2_UHADDR_P6_MASK                   0x007f0000
#define AVR32_USB_UHADDR2_UHADDR_P6_OFFSET                         16
#define AVR32_USB_UHADDR2_UHADDR_P6_SIZE                            7
#define AVR32_USB_UHADDR2_UHADDR_P7                                24
#define AVR32_USB_UHADDR2_UHADDR_P7_MASK                   0x7f000000
#define AVR32_USB_UHADDR2_UHADDR_P7_OFFSET                         24
#define AVR32_USB_UHADDR2_UHADDR_P7_SIZE                            7
#define AVR32_USB_UHADDR3                                  0x0000042c
#define AVR32_USB_UHADDR3_MASK                             0x7f7f7f7f
#define AVR32_USB_UHADDR3_RESETVALUE                       0x00000000
#define AVR32_USB_UHADDR3_UHADDR_P10                               16
#define AVR32_USB_UHADDR3_UHADDR_P10_MASK                  0x007f0000
#define AVR32_USB_UHADDR3_UHADDR_P10_OFFSET                        16
#define AVR32_USB_UHADDR3_UHADDR_P10_SIZE                           7
#define AVR32_USB_UHADDR3_UHADDR_P11                               24
#define AVR32_USB_UHADDR3_UHADDR_P11_MASK                  0x7f000000
#define AVR32_USB_UHADDR3_UHADDR_P11_OFFSET                        24
#define AVR32_USB_UHADDR3_UHADDR_P11_SIZE                           7
#define AVR32_USB_UHADDR3_UHADDR_P8                                 0
#define AVR32_USB_UHADDR3_UHADDR_P8_MASK                   0x0000007f
#define AVR32_USB_UHADDR3_UHADDR_P8_OFFSET                          0
#define AVR32_USB_UHADDR3_UHADDR_P8_SIZE                            7
#define AVR32_USB_UHADDR3_UHADDR_P9                                 8
#define AVR32_USB_UHADDR3_UHADDR_P9_MASK                   0x00007f00
#define AVR32_USB_UHADDR3_UHADDR_P9_OFFSET                          8
#define AVR32_USB_UHADDR3_UHADDR_P9_SIZE                            7
#define AVR32_USB_UHADDR_P0                                         0
#define AVR32_USB_UHADDR_P0_MASK                           0x0000007f
#define AVR32_USB_UHADDR_P0_OFFSET                                  0
#define AVR32_USB_UHADDR_P0_SIZE                                    7
#define AVR32_USB_UHADDR_P1                                         8
#define AVR32_USB_UHADDR_P10                                       16
#define AVR32_USB_UHADDR_P10_MASK                          0x007f0000
#define AVR32_USB_UHADDR_P10_OFFSET                                16
#define AVR32_USB_UHADDR_P10_SIZE                                   7
#define AVR32_USB_UHADDR_P11                                       24
#define AVR32_USB_UHADDR_P11_MASK                          0x7f000000
#define AVR32_USB_UHADDR_P11_OFFSET                                24
#define AVR32_USB_UHADDR_P11_SIZE                                   7
#define AVR32_USB_UHADDR_P1_MASK                           0x00007f00
#define AVR32_USB_UHADDR_P1_OFFSET                                  8
#define AVR32_USB_UHADDR_P1_SIZE                                    7
#define AVR32_USB_UHADDR_P2                                        16
#define AVR32_USB_UHADDR_P2_MASK                           0x007f0000
#define AVR32_USB_UHADDR_P2_OFFSET                                 16
#define AVR32_USB_UHADDR_P2_SIZE                                    7
#define AVR32_USB_UHADDR_P3                                        24
#define AVR32_USB_UHADDR_P3_MASK                           0x7f000000
#define AVR32_USB_UHADDR_P3_OFFSET                                 24
#define AVR32_USB_UHADDR_P3_SIZE                                    7
#define AVR32_USB_UHADDR_P4                                         0
#define AVR32_USB_UHADDR_P4_MASK                           0x0000007f
#define AVR32_USB_UHADDR_P4_OFFSET                                  0
#define AVR32_USB_UHADDR_P4_SIZE                                    7
#define AVR32_USB_UHADDR_P5                                         8
#define AVR32_USB_UHADDR_P5_MASK                           0x00007f00
#define AVR32_USB_UHADDR_P5_OFFSET                                  8
#define AVR32_USB_UHADDR_P5_SIZE                                    7
#define AVR32_USB_UHADDR_P6                                        16
#define AVR32_USB_UHADDR_P6_MASK                           0x007f0000
#define AVR32_USB_UHADDR_P6_OFFSET                                 16
#define AVR32_USB_UHADDR_P6_SIZE                                    7
#define AVR32_USB_UHADDR_P7                                        24
#define AVR32_USB_UHADDR_P7_MASK                           0x7f000000
#define AVR32_USB_UHADDR_P7_OFFSET                                 24
#define AVR32_USB_UHADDR_P7_SIZE                                    7
#define AVR32_USB_UHADDR_P8                                         0
#define AVR32_USB_UHADDR_P8_MASK                           0x0000007f
#define AVR32_USB_UHADDR_P8_OFFSET                                  0
#define AVR32_USB_UHADDR_P8_SIZE                                    7
#define AVR32_USB_UHADDR_P9                                         8
#define AVR32_USB_UHADDR_P9_MASK                           0x00007f00
#define AVR32_USB_UHADDR_P9_OFFSET                                  8
#define AVR32_USB_UHADDR_P9_SIZE                                    7
#define AVR32_USB_UHCON                                    0x00000400
#define AVR32_USB_UHCON_MASK                               0x00003700
#define AVR32_USB_UHCON_RESET                                       9
#define AVR32_USB_UHCON_RESETVALUE                         0x00000000
#define AVR32_USB_UHCON_RESET_MASK                         0x00000200
#define AVR32_USB_UHCON_RESET_OFFSET                                9
#define AVR32_USB_UHCON_RESET_SIZE                                  1
#define AVR32_USB_UHCON_RESUME                                     10
#define AVR32_USB_UHCON_RESUME_MASK                        0x00000400
#define AVR32_USB_UHCON_RESUME_OFFSET                              10
#define AVR32_USB_UHCON_RESUME_SIZE                                 1
#define AVR32_USB_UHCON_SOFE                                        8
#define AVR32_USB_UHCON_SOFE_MASK                          0x00000100
#define AVR32_USB_UHCON_SOFE_OFFSET                                 8
#define AVR32_USB_UHCON_SOFE_SIZE                                   1
#define AVR32_USB_UHCON_SPDCONF                                    12
#define AVR32_USB_UHCON_SPDCONF_MASK                       0x00003000
#define AVR32_USB_UHCON_SPDCONF_OFFSET                             12
#define AVR32_USB_UHCON_SPDCONF_SIZE                                2
#define AVR32_USB_UHDMA1_ADDR                              0x00000714
#define AVR32_USB_UHDMA1_ADDR_HSB_ADDR                              0
#define AVR32_USB_UHDMA1_ADDR_HSB_ADDR_MASK                0xffffffff
#define AVR32_USB_UHDMA1_ADDR_HSB_ADDR_OFFSET                       0
#define AVR32_USB_UHDMA1_ADDR_HSB_ADDR_SIZE                        32
#define AVR32_USB_UHDMA1_ADDR_MASK                         0xffffffff
#define AVR32_USB_UHDMA1_ADDR_RESETVALUE                   0x00000000
#define AVR32_USB_UHDMA1_CONTROL                           0x00000718
#define AVR32_USB_UHDMA1_CONTROL_BUFF_CLOSE_IN_EN                   2
#define AVR32_USB_UHDMA1_CONTROL_BUFF_CLOSE_IN_EN_MASK     0x00000004
#define AVR32_USB_UHDMA1_CONTROL_BUFF_CLOSE_IN_EN_OFFSET            2
#define AVR32_USB_UHDMA1_CONTROL_BUFF_CLOSE_IN_EN_SIZE              1
#define AVR32_USB_UHDMA1_CONTROL_BURST_LOCK_EN                      7
#define AVR32_USB_UHDMA1_CONTROL_BURST_LOCK_EN_MASK        0x00000080
#define AVR32_USB_UHDMA1_CONTROL_BURST_LOCK_EN_OFFSET               7
#define AVR32_USB_UHDMA1_CONTROL_BURST_LOCK_EN_SIZE                 1
#define AVR32_USB_UHDMA1_CONTROL_CH_BYTE_LENGTH                    16
#define AVR32_USB_UHDMA1_CONTROL_CH_BYTE_LENGTH_MASK       0xffff0000
#define AVR32_USB_UHDMA1_CONTROL_CH_BYTE_LENGTH_OFFSET             16
#define AVR32_USB_UHDMA1_CONTROL_CH_BYTE_LENGTH_SIZE               16
#define AVR32_USB_UHDMA1_CONTROL_CH_EN                              0
#define AVR32_USB_UHDMA1_CONTROL_CH_EN_MASK                0x00000001
#define AVR32_USB_UHDMA1_CONTROL_CH_EN_OFFSET                       0
#define AVR32_USB_UHDMA1_CONTROL_CH_EN_SIZE                         1
#define AVR32_USB_UHDMA1_CONTROL_DESC_LD_IRQ_EN                     6
#define AVR32_USB_UHDMA1_CONTROL_DESC_LD_IRQ_EN_MASK       0x00000040
#define AVR32_USB_UHDMA1_CONTROL_DESC_LD_IRQ_EN_OFFSET              6
#define AVR32_USB_UHDMA1_CONTROL_DESC_LD_IRQ_EN_SIZE                1
#define AVR32_USB_UHDMA1_CONTROL_DMAEND_EN                          3
#define AVR32_USB_UHDMA1_CONTROL_DMAEND_EN_MASK            0x00000008
#define AVR32_USB_UHDMA1_CONTROL_DMAEND_EN_OFFSET                   3
#define AVR32_USB_UHDMA1_CONTROL_DMAEND_EN_SIZE                     1
#define AVR32_USB_UHDMA1_CONTROL_EOBUFF_IRQ_EN                      5
#define AVR32_USB_UHDMA1_CONTROL_EOBUFF_IRQ_EN_MASK        0x00000020
#define AVR32_USB_UHDMA1_CONTROL_EOBUFF_IRQ_EN_OFFSET               5
#define AVR32_USB_UHDMA1_CONTROL_EOBUFF_IRQ_EN_SIZE                 1
#define AVR32_USB_UHDMA1_CONTROL_EOT_IRQ_EN                         4
#define AVR32_USB_UHDMA1_CONTROL_EOT_IRQ_EN_MASK           0x00000010
#define AVR32_USB_UHDMA1_CONTROL_EOT_IRQ_EN_OFFSET                  4
#define AVR32_USB_UHDMA1_CONTROL_EOT_IRQ_EN_SIZE                    1
#define AVR32_USB_UHDMA1_CONTROL_LD_NXT_CH_DESC_EN                  1
#define AVR32_USB_UHDMA1_CONTROL_LD_NXT_CH_DESC_EN_MASK    0x00000002
#define AVR32_USB_UHDMA1_CONTROL_LD_NXT_CH_DESC_EN_OFFSET           1
#define AVR32_USB_UHDMA1_CONTROL_LD_NXT_CH_DESC_EN_SIZE             1
#define AVR32_USB_UHDMA1_CONTROL_MASK                      0xffff00ff
#define AVR32_USB_UHDMA1_CONTROL_RESETVALUE                0x00000000
#define AVR32_USB_UHDMA1_NEXTDESC                          0x00000710
#define AVR32_USB_UHDMA1_NEXTDESC_MASK                     0xfffffff0
#define AVR32_USB_UHDMA1_NEXTDESC_NXT_DESC_ADDR                     4
#define AVR32_USB_UHDMA1_NEXTDESC_NXT_DESC_ADDR_MASK       0xfffffff0
#define AVR32_USB_UHDMA1_NEXTDESC_NXT_DESC_ADDR_OFFSET              4
#define AVR32_USB_UHDMA1_NEXTDESC_NXT_DESC_ADDR_SIZE               28
#define AVR32_USB_UHDMA1_NEXTDESC_RESETVALUE               0x00000000
#define AVR32_USB_UHDMA1_STATUS                            0x0000071c
#define AVR32_USB_UHDMA1_STATUS_CH_ACTIVE                           1
#define AVR32_USB_UHDMA1_STATUS_CH_ACTIVE_MASK             0x00000002
#define AVR32_USB_UHDMA1_STATUS_CH_ACTIVE_OFFSET                    1
#define AVR32_USB_UHDMA1_STATUS_CH_ACTIVE_SIZE                      1
#define AVR32_USB_UHDMA1_STATUS_CH_BYTE_CNT                        16
#define AVR32_USB_UHDMA1_STATUS_CH_BYTE_CNT_MASK           0xffff0000
#define AVR32_USB_UHDMA1_STATUS_CH_BYTE_CNT_OFFSET                 16
#define AVR32_USB_UHDMA1_STATUS_CH_BYTE_CNT_SIZE                   16
#define AVR32_USB_UHDMA1_STATUS_CH_EN                               0
#define AVR32_USB_UHDMA1_STATUS_CH_EN_MASK                 0x00000001
#define AVR32_USB_UHDMA1_STATUS_CH_EN_OFFSET                        0
#define AVR32_USB_UHDMA1_STATUS_CH_EN_SIZE                          1
#define AVR32_USB_UHDMA1_STATUS_DESC_LD_STA                         6
#define AVR32_USB_UHDMA1_STATUS_DESC_LD_STA_MASK           0x00000040
#define AVR32_USB_UHDMA1_STATUS_DESC_LD_STA_OFFSET                  6
#define AVR32_USB_UHDMA1_STATUS_DESC_LD_STA_SIZE                    1
#define AVR32_USB_UHDMA1_STATUS_EOCH_BUFF_STA                       5
#define AVR32_USB_UHDMA1_STATUS_EOCH_BUFF_STA_MASK         0x00000020
#define AVR32_USB_UHDMA1_STATUS_EOCH_BUFF_STA_OFFSET                5
#define AVR32_USB_UHDMA1_STATUS_EOCH_BUFF_STA_SIZE                  1
#define AVR32_USB_UHDMA1_STATUS_EOT_STA                             4
#define AVR32_USB_UHDMA1_STATUS_EOT_STA_MASK               0x00000010
#define AVR32_USB_UHDMA1_STATUS_EOT_STA_OFFSET                      4
#define AVR32_USB_UHDMA1_STATUS_EOT_STA_SIZE                        1
#define AVR32_USB_UHDMA1_STATUS_MASK                       0xffff0073
#define AVR32_USB_UHDMA1_STATUS_RESETVALUE                 0x00000000
#define AVR32_USB_UHDMA2_ADDR                              0x00000724
#define AVR32_USB_UHDMA2_ADDR_HSB_ADDR                              0
#define AVR32_USB_UHDMA2_ADDR_HSB_ADDR_MASK                0xffffffff
#define AVR32_USB_UHDMA2_ADDR_HSB_ADDR_OFFSET                       0
#define AVR32_USB_UHDMA2_ADDR_HSB_ADDR_SIZE                        32
#define AVR32_USB_UHDMA2_ADDR_MASK                         0xffffffff
#define AVR32_USB_UHDMA2_ADDR_RESETVALUE                   0x00000000
#define AVR32_USB_UHDMA2_CONTROL                           0x00000728
#define AVR32_USB_UHDMA2_CONTROL_BUFF_CLOSE_IN_EN                   2
#define AVR32_USB_UHDMA2_CONTROL_BUFF_CLOSE_IN_EN_MASK     0x00000004
#define AVR32_USB_UHDMA2_CONTROL_BUFF_CLOSE_IN_EN_OFFSET            2
#define AVR32_USB_UHDMA2_CONTROL_BUFF_CLOSE_IN_EN_SIZE              1
#define AVR32_USB_UHDMA2_CONTROL_BURST_LOCK_EN                      7
#define AVR32_USB_UHDMA2_CONTROL_BURST_LOCK_EN_MASK        0x00000080
#define AVR32_USB_UHDMA2_CONTROL_BURST_LOCK_EN_OFFSET               7
#define AVR32_USB_UHDMA2_CONTROL_BURST_LOCK_EN_SIZE                 1
#define AVR32_USB_UHDMA2_CONTROL_CH_BYTE_LENGTH                    16
#define AVR32_USB_UHDMA2_CONTROL_CH_BYTE_LENGTH_MASK       0xffff0000
#define AVR32_USB_UHDMA2_CONTROL_CH_BYTE_LENGTH_OFFSET             16
#define AVR32_USB_UHDMA2_CONTROL_CH_BYTE_LENGTH_SIZE               16
#define AVR32_USB_UHDMA2_CONTROL_CH_EN                              0
#define AVR32_USB_UHDMA2_CONTROL_CH_EN_MASK                0x00000001
#define AVR32_USB_UHDMA2_CONTROL_CH_EN_OFFSET                       0
#define AVR32_USB_UHDMA2_CONTROL_CH_EN_SIZE                         1
#define AVR32_USB_UHDMA2_CONTROL_DESC_LD_IRQ_EN                     6
#define AVR32_USB_UHDMA2_CONTROL_DESC_LD_IRQ_EN_MASK       0x00000040
#define AVR32_USB_UHDMA2_CONTROL_DESC_LD_IRQ_EN_OFFSET              6
#define AVR32_USB_UHDMA2_CONTROL_DESC_LD_IRQ_EN_SIZE                1
#define AVR32_USB_UHDMA2_CONTROL_DMAEND_EN                          3
#define AVR32_USB_UHDMA2_CONTROL_DMAEND_EN_MASK            0x00000008
#define AVR32_USB_UHDMA2_CONTROL_DMAEND_EN_OFFSET                   3
#define AVR32_USB_UHDMA2_CONTROL_DMAEND_EN_SIZE                     1
#define AVR32_USB_UHDMA2_CONTROL_EOBUFF_IRQ_EN                      5
#define AVR32_USB_UHDMA2_CONTROL_EOBUFF_IRQ_EN_MASK        0x00000020
#define AVR32_USB_UHDMA2_CONTROL_EOBUFF_IRQ_EN_OFFSET               5
#define AVR32_USB_UHDMA2_CONTROL_EOBUFF_IRQ_EN_SIZE                 1
#define AVR32_USB_UHDMA2_CONTROL_EOT_IRQ_EN                         4
#define AVR32_USB_UHDMA2_CONTROL_EOT_IRQ_EN_MASK           0x00000010
#define AVR32_USB_UHDMA2_CONTROL_EOT_IRQ_EN_OFFSET                  4
#define AVR32_USB_UHDMA2_CONTROL_EOT_IRQ_EN_SIZE                    1
#define AVR32_USB_UHDMA2_CONTROL_LD_NXT_CH_DESC_EN                  1
#define AVR32_USB_UHDMA2_CONTROL_LD_NXT_CH_DESC_EN_MASK    0x00000002
#define AVR32_USB_UHDMA2_CONTROL_LD_NXT_CH_DESC_EN_OFFSET           1
#define AVR32_USB_UHDMA2_CONTROL_LD_NXT_CH_DESC_EN_SIZE             1
#define AVR32_USB_UHDMA2_CONTROL_MASK                      0xffff00ff
#define AVR32_USB_UHDMA2_CONTROL_RESETVALUE                0x00000000
#define AVR32_USB_UHDMA2_NEXTDESC                          0x00000720
#define AVR32_USB_UHDMA2_NEXTDESC_MASK                     0xfffffff0
#define AVR32_USB_UHDMA2_NEXTDESC_NXT_DESC_ADDR                     4
#define AVR32_USB_UHDMA2_NEXTDESC_NXT_DESC_ADDR_MASK       0xfffffff0
#define AVR32_USB_UHDMA2_NEXTDESC_NXT_DESC_ADDR_OFFSET              4
#define AVR32_USB_UHDMA2_NEXTDESC_NXT_DESC_ADDR_SIZE               28
#define AVR32_USB_UHDMA2_NEXTDESC_RESETVALUE               0x00000000
#define AVR32_USB_UHDMA2_STATUS                            0x0000072c
#define AVR32_USB_UHDMA2_STATUS_CH_ACTIVE                           1
#define AVR32_USB_UHDMA2_STATUS_CH_ACTIVE_MASK             0x00000002
#define AVR32_USB_UHDMA2_STATUS_CH_ACTIVE_OFFSET                    1
#define AVR32_USB_UHDMA2_STATUS_CH_ACTIVE_SIZE                      1
#define AVR32_USB_UHDMA2_STATUS_CH_BYTE_CNT                        16
#define AVR32_USB_UHDMA2_STATUS_CH_BYTE_CNT_MASK           0xffff0000
#define AVR32_USB_UHDMA2_STATUS_CH_BYTE_CNT_OFFSET                 16
#define AVR32_USB_UHDMA2_STATUS_CH_BYTE_CNT_SIZE                   16
#define AVR32_USB_UHDMA2_STATUS_CH_EN                               0
#define AVR32_USB_UHDMA2_STATUS_CH_EN_MASK                 0x00000001
#define AVR32_USB_UHDMA2_STATUS_CH_EN_OFFSET                        0
#define AVR32_USB_UHDMA2_STATUS_CH_EN_SIZE                          1
#define AVR32_USB_UHDMA2_STATUS_DESC_LD_STA                         6
#define AVR32_USB_UHDMA2_STATUS_DESC_LD_STA_MASK           0x00000040
#define AVR32_USB_UHDMA2_STATUS_DESC_LD_STA_OFFSET                  6
#define AVR32_USB_UHDMA2_STATUS_DESC_LD_STA_SIZE                    1
#define AVR32_USB_UHDMA2_STATUS_EOCH_BUFF_STA                       5
#define AVR32_USB_UHDMA2_STATUS_EOCH_BUFF_STA_MASK         0x00000020
#define AVR32_USB_UHDMA2_STATUS_EOCH_BUFF_STA_OFFSET                5
#define AVR32_USB_UHDMA2_STATUS_EOCH_BUFF_STA_SIZE                  1
#define AVR32_USB_UHDMA2_STATUS_EOT_STA                             4
#define AVR32_USB_UHDMA2_STATUS_EOT_STA_MASK               0x00000010
#define AVR32_USB_UHDMA2_STATUS_EOT_STA_OFFSET                      4
#define AVR32_USB_UHDMA2_STATUS_EOT_STA_SIZE                        1
#define AVR32_USB_UHDMA2_STATUS_MASK                       0xffff0073
#define AVR32_USB_UHDMA2_STATUS_RESETVALUE                 0x00000000
#define AVR32_USB_UHDMA3_ADDR                              0x00000734
#define AVR32_USB_UHDMA3_ADDR_HSB_ADDR                              0
#define AVR32_USB_UHDMA3_ADDR_HSB_ADDR_MASK                0xffffffff
#define AVR32_USB_UHDMA3_ADDR_HSB_ADDR_OFFSET                       0
#define AVR32_USB_UHDMA3_ADDR_HSB_ADDR_SIZE                        32
#define AVR32_USB_UHDMA3_ADDR_MASK                         0xffffffff
#define AVR32_USB_UHDMA3_ADDR_RESETVALUE                   0x00000000
#define AVR32_USB_UHDMA3_CONTROL                           0x00000738
#define AVR32_USB_UHDMA3_CONTROL_BUFF_CLOSE_IN_EN                   2
#define AVR32_USB_UHDMA3_CONTROL_BUFF_CLOSE_IN_EN_MASK     0x00000004
#define AVR32_USB_UHDMA3_CONTROL_BUFF_CLOSE_IN_EN_OFFSET            2
#define AVR32_USB_UHDMA3_CONTROL_BUFF_CLOSE_IN_EN_SIZE              1
#define AVR32_USB_UHDMA3_CONTROL_BURST_LOCK_EN                      7
#define AVR32_USB_UHDMA3_CONTROL_BURST_LOCK_EN_MASK        0x00000080
#define AVR32_USB_UHDMA3_CONTROL_BURST_LOCK_EN_OFFSET               7
#define AVR32_USB_UHDMA3_CONTROL_BURST_LOCK_EN_SIZE                 1
#define AVR32_USB_UHDMA3_CONTROL_CH_BYTE_LENGTH                    16
#define AVR32_USB_UHDMA3_CONTROL_CH_BYTE_LENGTH_MASK       0xffff0000
#define AVR32_USB_UHDMA3_CONTROL_CH_BYTE_LENGTH_OFFSET             16
#define AVR32_USB_UHDMA3_CONTROL_CH_BYTE_LENGTH_SIZE               16
#define AVR32_USB_UHDMA3_CONTROL_CH_EN                              0
#define AVR32_USB_UHDMA3_CONTROL_CH_EN_MASK                0x00000001
#define AVR32_USB_UHDMA3_CONTROL_CH_EN_OFFSET                       0
#define AVR32_USB_UHDMA3_CONTROL_CH_EN_SIZE                         1
#define AVR32_USB_UHDMA3_CONTROL_DESC_LD_IRQ_EN                     6
#define AVR32_USB_UHDMA3_CONTROL_DESC_LD_IRQ_EN_MASK       0x00000040
#define AVR32_USB_UHDMA3_CONTROL_DESC_LD_IRQ_EN_OFFSET              6
#define AVR32_USB_UHDMA3_CONTROL_DESC_LD_IRQ_EN_SIZE                1
#define AVR32_USB_UHDMA3_CONTROL_DMAEND_EN                          3
#define AVR32_USB_UHDMA3_CONTROL_DMAEND_EN_MASK            0x00000008
#define AVR32_USB_UHDMA3_CONTROL_DMAEND_EN_OFFSET                   3
#define AVR32_USB_UHDMA3_CONTROL_DMAEND_EN_SIZE                     1
#define AVR32_USB_UHDMA3_CONTROL_EOBUFF_IRQ_EN                      5
#define AVR32_USB_UHDMA3_CONTROL_EOBUFF_IRQ_EN_MASK        0x00000020
#define AVR32_USB_UHDMA3_CONTROL_EOBUFF_IRQ_EN_OFFSET               5
#define AVR32_USB_UHDMA3_CONTROL_EOBUFF_IRQ_EN_SIZE                 1
#define AVR32_USB_UHDMA3_CONTROL_EOT_IRQ_EN                         4
#define AVR32_USB_UHDMA3_CONTROL_EOT_IRQ_EN_MASK           0x00000010
#define AVR32_USB_UHDMA3_CONTROL_EOT_IRQ_EN_OFFSET                  4
#define AVR32_USB_UHDMA3_CONTROL_EOT_IRQ_EN_SIZE                    1
#define AVR32_USB_UHDMA3_CONTROL_LD_NXT_CH_DESC_EN                  1
#define AVR32_USB_UHDMA3_CONTROL_LD_NXT_CH_DESC_EN_MASK    0x00000002
#define AVR32_USB_UHDMA3_CONTROL_LD_NXT_CH_DESC_EN_OFFSET           1
#define AVR32_USB_UHDMA3_CONTROL_LD_NXT_CH_DESC_EN_SIZE             1
#define AVR32_USB_UHDMA3_CONTROL_MASK                      0xffff00ff
#define AVR32_USB_UHDMA3_CONTROL_RESETVALUE                0x00000000
#define AVR32_USB_UHDMA3_NEXTDESC                          0x00000730
#define AVR32_USB_UHDMA3_NEXTDESC_MASK                     0xfffffff0
#define AVR32_USB_UHDMA3_NEXTDESC_NXT_DESC_ADDR                     4
#define AVR32_USB_UHDMA3_NEXTDESC_NXT_DESC_ADDR_MASK       0xfffffff0
#define AVR32_USB_UHDMA3_NEXTDESC_NXT_DESC_ADDR_OFFSET              4
#define AVR32_USB_UHDMA3_NEXTDESC_NXT_DESC_ADDR_SIZE               28
#define AVR32_USB_UHDMA3_NEXTDESC_RESETVALUE               0x00000000
#define AVR32_USB_UHDMA3_STATUS                            0x0000073c
#define AVR32_USB_UHDMA3_STATUS_CH_ACTIVE                           1
#define AVR32_USB_UHDMA3_STATUS_CH_ACTIVE_MASK             0x00000002
#define AVR32_USB_UHDMA3_STATUS_CH_ACTIVE_OFFSET                    1
#define AVR32_USB_UHDMA3_STATUS_CH_ACTIVE_SIZE                      1
#define AVR32_USB_UHDMA3_STATUS_CH_BYTE_CNT                        16
#define AVR32_USB_UHDMA3_STATUS_CH_BYTE_CNT_MASK           0xffff0000
#define AVR32_USB_UHDMA3_STATUS_CH_BYTE_CNT_OFFSET                 16
#define AVR32_USB_UHDMA3_STATUS_CH_BYTE_CNT_SIZE                   16
#define AVR32_USB_UHDMA3_STATUS_CH_EN                               0
#define AVR32_USB_UHDMA3_STATUS_CH_EN_MASK                 0x00000001
#define AVR32_USB_UHDMA3_STATUS_CH_EN_OFFSET                        0
#define AVR32_USB_UHDMA3_STATUS_CH_EN_SIZE                          1
#define AVR32_USB_UHDMA3_STATUS_DESC_LD_STA                         6
#define AVR32_USB_UHDMA3_STATUS_DESC_LD_STA_MASK           0x00000040
#define AVR32_USB_UHDMA3_STATUS_DESC_LD_STA_OFFSET                  6
#define AVR32_USB_UHDMA3_STATUS_DESC_LD_STA_SIZE                    1
#define AVR32_USB_UHDMA3_STATUS_EOCH_BUFF_STA                       5
#define AVR32_USB_UHDMA3_STATUS_EOCH_BUFF_STA_MASK         0x00000020
#define AVR32_USB_UHDMA3_STATUS_EOCH_BUFF_STA_OFFSET                5
#define AVR32_USB_UHDMA3_STATUS_EOCH_BUFF_STA_SIZE                  1
#define AVR32_USB_UHDMA3_STATUS_EOT_STA                             4
#define AVR32_USB_UHDMA3_STATUS_EOT_STA_MASK               0x00000010
#define AVR32_USB_UHDMA3_STATUS_EOT_STA_OFFSET                      4
#define AVR32_USB_UHDMA3_STATUS_EOT_STA_SIZE                        1
#define AVR32_USB_UHDMA3_STATUS_MASK                       0xffff0073
#define AVR32_USB_UHDMA3_STATUS_RESETVALUE                 0x00000000
#define AVR32_USB_UHDMA4_ADDR                              0x00000744
#define AVR32_USB_UHDMA4_ADDR_HSB_ADDR                              0
#define AVR32_USB_UHDMA4_ADDR_HSB_ADDR_MASK                0xffffffff
#define AVR32_USB_UHDMA4_ADDR_HSB_ADDR_OFFSET                       0
#define AVR32_USB_UHDMA4_ADDR_HSB_ADDR_SIZE                        32
#define AVR32_USB_UHDMA4_ADDR_MASK                         0xffffffff
#define AVR32_USB_UHDMA4_ADDR_RESETVALUE                   0x00000000
#define AVR32_USB_UHDMA4_CONTROL                           0x00000748
#define AVR32_USB_UHDMA4_CONTROL_BUFF_CLOSE_IN_EN                   2
#define AVR32_USB_UHDMA4_CONTROL_BUFF_CLOSE_IN_EN_MASK     0x00000004
#define AVR32_USB_UHDMA4_CONTROL_BUFF_CLOSE_IN_EN_OFFSET            2
#define AVR32_USB_UHDMA4_CONTROL_BUFF_CLOSE_IN_EN_SIZE              1
#define AVR32_USB_UHDMA4_CONTROL_BURST_LOCK_EN                      7
#define AVR32_USB_UHDMA4_CONTROL_BURST_LOCK_EN_MASK        0x00000080
#define AVR32_USB_UHDMA4_CONTROL_BURST_LOCK_EN_OFFSET               7
#define AVR32_USB_UHDMA4_CONTROL_BURST_LOCK_EN_SIZE                 1
#define AVR32_USB_UHDMA4_CONTROL_CH_BYTE_LENGTH                    16
#define AVR32_USB_UHDMA4_CONTROL_CH_BYTE_LENGTH_MASK       0xffff0000
#define AVR32_USB_UHDMA4_CONTROL_CH_BYTE_LENGTH_OFFSET             16
#define AVR32_USB_UHDMA4_CONTROL_CH_BYTE_LENGTH_SIZE               16
#define AVR32_USB_UHDMA4_CONTROL_CH_EN                              0
#define AVR32_USB_UHDMA4_CONTROL_CH_EN_MASK                0x00000001
#define AVR32_USB_UHDMA4_CONTROL_CH_EN_OFFSET                       0
#define AVR32_USB_UHDMA4_CONTROL_CH_EN_SIZE                         1
#define AVR32_USB_UHDMA4_CONTROL_DESC_LD_IRQ_EN                     6
#define AVR32_USB_UHDMA4_CONTROL_DESC_LD_IRQ_EN_MASK       0x00000040
#define AVR32_USB_UHDMA4_CONTROL_DESC_LD_IRQ_EN_OFFSET              6
#define AVR32_USB_UHDMA4_CONTROL_DESC_LD_IRQ_EN_SIZE                1
#define AVR32_USB_UHDMA4_CONTROL_DMAEND_EN                          3
#define AVR32_USB_UHDMA4_CONTROL_DMAEND_EN_MASK            0x00000008
#define AVR32_USB_UHDMA4_CONTROL_DMAEND_EN_OFFSET                   3
#define AVR32_USB_UHDMA4_CONTROL_DMAEND_EN_SIZE                     1
#define AVR32_USB_UHDMA4_CONTROL_EOBUFF_IRQ_EN                      5
#define AVR32_USB_UHDMA4_CONTROL_EOBUFF_IRQ_EN_MASK        0x00000020
#define AVR32_USB_UHDMA4_CONTROL_EOBUFF_IRQ_EN_OFFSET               5
#define AVR32_USB_UHDMA4_CONTROL_EOBUFF_IRQ_EN_SIZE                 1
#define AVR32_USB_UHDMA4_CONTROL_EOT_IRQ_EN                         4
#define AVR32_USB_UHDMA4_CONTROL_EOT_IRQ_EN_MASK           0x00000010
#define AVR32_USB_UHDMA4_CONTROL_EOT_IRQ_EN_OFFSET                  4
#define AVR32_USB_UHDMA4_CONTROL_EOT_IRQ_EN_SIZE                    1
#define AVR32_USB_UHDMA4_CONTROL_LD_NXT_CH_DESC_EN                  1
#define AVR32_USB_UHDMA4_CONTROL_LD_NXT_CH_DESC_EN_MASK    0x00000002
#define AVR32_USB_UHDMA4_CONTROL_LD_NXT_CH_DESC_EN_OFFSET           1
#define AVR32_USB_UHDMA4_CONTROL_LD_NXT_CH_DESC_EN_SIZE             1
#define AVR32_USB_UHDMA4_CONTROL_MASK                      0xffff00ff
#define AVR32_USB_UHDMA4_CONTROL_RESETVALUE                0x00000000
#define AVR32_USB_UHDMA4_NEXTDESC                          0x00000740
#define AVR32_USB_UHDMA4_NEXTDESC_MASK                     0xfffffff0
#define AVR32_USB_UHDMA4_NEXTDESC_NXT_DESC_ADDR                     4
#define AVR32_USB_UHDMA4_NEXTDESC_NXT_DESC_ADDR_MASK       0xfffffff0
#define AVR32_USB_UHDMA4_NEXTDESC_NXT_DESC_ADDR_OFFSET              4
#define AVR32_USB_UHDMA4_NEXTDESC_NXT_DESC_ADDR_SIZE               28
#define AVR32_USB_UHDMA4_NEXTDESC_RESETVALUE               0x00000000
#define AVR32_USB_UHDMA4_STATUS                            0x0000074c
#define AVR32_USB_UHDMA4_STATUS_CH_ACTIVE                           1
#define AVR32_USB_UHDMA4_STATUS_CH_ACTIVE_MASK             0x00000002
#define AVR32_USB_UHDMA4_STATUS_CH_ACTIVE_OFFSET                    1
#define AVR32_USB_UHDMA4_STATUS_CH_ACTIVE_SIZE                      1
#define AVR32_USB_UHDMA4_STATUS_CH_BYTE_CNT                        16
#define AVR32_USB_UHDMA4_STATUS_CH_BYTE_CNT_MASK           0xffff0000
#define AVR32_USB_UHDMA4_STATUS_CH_BYTE_CNT_OFFSET                 16
#define AVR32_USB_UHDMA4_STATUS_CH_BYTE_CNT_SIZE                   16
#define AVR32_USB_UHDMA4_STATUS_CH_EN                               0
#define AVR32_USB_UHDMA4_STATUS_CH_EN_MASK                 0x00000001
#define AVR32_USB_UHDMA4_STATUS_CH_EN_OFFSET                        0
#define AVR32_USB_UHDMA4_STATUS_CH_EN_SIZE                          1
#define AVR32_USB_UHDMA4_STATUS_DESC_LD_STA                         6
#define AVR32_USB_UHDMA4_STATUS_DESC_LD_STA_MASK           0x00000040
#define AVR32_USB_UHDMA4_STATUS_DESC_LD_STA_OFFSET                  6
#define AVR32_USB_UHDMA4_STATUS_DESC_LD_STA_SIZE                    1
#define AVR32_USB_UHDMA4_STATUS_EOCH_BUFF_STA                       5
#define AVR32_USB_UHDMA4_STATUS_EOCH_BUFF_STA_MASK         0x00000020
#define AVR32_USB_UHDMA4_STATUS_EOCH_BUFF_STA_OFFSET                5
#define AVR32_USB_UHDMA4_STATUS_EOCH_BUFF_STA_SIZE                  1
#define AVR32_USB_UHDMA4_STATUS_EOT_STA                             4
#define AVR32_USB_UHDMA4_STATUS_EOT_STA_MASK               0x00000010
#define AVR32_USB_UHDMA4_STATUS_EOT_STA_OFFSET                      4
#define AVR32_USB_UHDMA4_STATUS_EOT_STA_SIZE                        1
#define AVR32_USB_UHDMA4_STATUS_MASK                       0xffff0073
#define AVR32_USB_UHDMA4_STATUS_RESETVALUE                 0x00000000
#define AVR32_USB_UHDMA5_ADDR                              0x00000754
#define AVR32_USB_UHDMA5_ADDR_HSB_ADDR                              0
#define AVR32_USB_UHDMA5_ADDR_HSB_ADDR_MASK                0xffffffff
#define AVR32_USB_UHDMA5_ADDR_HSB_ADDR_OFFSET                       0
#define AVR32_USB_UHDMA5_ADDR_HSB_ADDR_SIZE                        32
#define AVR32_USB_UHDMA5_ADDR_MASK                         0xffffffff
#define AVR32_USB_UHDMA5_ADDR_RESETVALUE                   0x00000000
#define AVR32_USB_UHDMA5_CONTROL                           0x00000758
#define AVR32_USB_UHDMA5_CONTROL_BUFF_CLOSE_IN_EN                   2
#define AVR32_USB_UHDMA5_CONTROL_BUFF_CLOSE_IN_EN_MASK     0x00000004
#define AVR32_USB_UHDMA5_CONTROL_BUFF_CLOSE_IN_EN_OFFSET            2
#define AVR32_USB_UHDMA5_CONTROL_BUFF_CLOSE_IN_EN_SIZE              1
#define AVR32_USB_UHDMA5_CONTROL_BURST_LOCK_EN                      7
#define AVR32_USB_UHDMA5_CONTROL_BURST_LOCK_EN_MASK        0x00000080
#define AVR32_USB_UHDMA5_CONTROL_BURST_LOCK_EN_OFFSET               7
#define AVR32_USB_UHDMA5_CONTROL_BURST_LOCK_EN_SIZE                 1
#define AVR32_USB_UHDMA5_CONTROL_CH_BYTE_LENGTH                    16
#define AVR32_USB_UHDMA5_CONTROL_CH_BYTE_LENGTH_MASK       0xffff0000
#define AVR32_USB_UHDMA5_CONTROL_CH_BYTE_LENGTH_OFFSET             16
#define AVR32_USB_UHDMA5_CONTROL_CH_BYTE_LENGTH_SIZE               16
#define AVR32_USB_UHDMA5_CONTROL_CH_EN                              0
#define AVR32_USB_UHDMA5_CONTROL_CH_EN_MASK                0x00000001
#define AVR32_USB_UHDMA5_CONTROL_CH_EN_OFFSET                       0
#define AVR32_USB_UHDMA5_CONTROL_CH_EN_SIZE                         1
#define AVR32_USB_UHDMA5_CONTROL_DESC_LD_IRQ_EN                     6
#define AVR32_USB_UHDMA5_CONTROL_DESC_LD_IRQ_EN_MASK       0x00000040
#define AVR32_USB_UHDMA5_CONTROL_DESC_LD_IRQ_EN_OFFSET              6
#define AVR32_USB_UHDMA5_CONTROL_DESC_LD_IRQ_EN_SIZE                1
#define AVR32_USB_UHDMA5_CONTROL_DMAEND_EN                          3
#define AVR32_USB_UHDMA5_CONTROL_DMAEND_EN_MASK            0x00000008
#define AVR32_USB_UHDMA5_CONTROL_DMAEND_EN_OFFSET                   3
#define AVR32_USB_UHDMA5_CONTROL_DMAEND_EN_SIZE                     1
#define AVR32_USB_UHDMA5_CONTROL_EOBUFF_IRQ_EN                      5
#define AVR32_USB_UHDMA5_CONTROL_EOBUFF_IRQ_EN_MASK        0x00000020
#define AVR32_USB_UHDMA5_CONTROL_EOBUFF_IRQ_EN_OFFSET               5
#define AVR32_USB_UHDMA5_CONTROL_EOBUFF_IRQ_EN_SIZE                 1
#define AVR32_USB_UHDMA5_CONTROL_EOT_IRQ_EN                         4
#define AVR32_USB_UHDMA5_CONTROL_EOT_IRQ_EN_MASK           0x00000010
#define AVR32_USB_UHDMA5_CONTROL_EOT_IRQ_EN_OFFSET                  4
#define AVR32_USB_UHDMA5_CONTROL_EOT_IRQ_EN_SIZE                    1
#define AVR32_USB_UHDMA5_CONTROL_LD_NXT_CH_DESC_EN                  1
#define AVR32_USB_UHDMA5_CONTROL_LD_NXT_CH_DESC_EN_MASK    0x00000002
#define AVR32_USB_UHDMA5_CONTROL_LD_NXT_CH_DESC_EN_OFFSET           1
#define AVR32_USB_UHDMA5_CONTROL_LD_NXT_CH_DESC_EN_SIZE             1
#define AVR32_USB_UHDMA5_CONTROL_MASK                      0xffff00ff
#define AVR32_USB_UHDMA5_CONTROL_RESETVALUE                0x00000000
#define AVR32_USB_UHDMA5_NEXTDESC                          0x00000750
#define AVR32_USB_UHDMA5_NEXTDESC_MASK                     0xfffffff0
#define AVR32_USB_UHDMA5_NEXTDESC_NXT_DESC_ADDR                     4
#define AVR32_USB_UHDMA5_NEXTDESC_NXT_DESC_ADDR_MASK       0xfffffff0
#define AVR32_USB_UHDMA5_NEXTDESC_NXT_DESC_ADDR_OFFSET              4
#define AVR32_USB_UHDMA5_NEXTDESC_NXT_DESC_ADDR_SIZE               28
#define AVR32_USB_UHDMA5_NEXTDESC_RESETVALUE               0x00000000
#define AVR32_USB_UHDMA5_STATUS                            0x0000075c
#define AVR32_USB_UHDMA5_STATUS_CH_ACTIVE                           1
#define AVR32_USB_UHDMA5_STATUS_CH_ACTIVE_MASK             0x00000002
#define AVR32_USB_UHDMA5_STATUS_CH_ACTIVE_OFFSET                    1
#define AVR32_USB_UHDMA5_STATUS_CH_ACTIVE_SIZE                      1
#define AVR32_USB_UHDMA5_STATUS_CH_BYTE_CNT                        16
#define AVR32_USB_UHDMA5_STATUS_CH_BYTE_CNT_MASK           0xffff0000
#define AVR32_USB_UHDMA5_STATUS_CH_BYTE_CNT_OFFSET                 16
#define AVR32_USB_UHDMA5_STATUS_CH_BYTE_CNT_SIZE                   16
#define AVR32_USB_UHDMA5_STATUS_CH_EN                               0
#define AVR32_USB_UHDMA5_STATUS_CH_EN_MASK                 0x00000001
#define AVR32_USB_UHDMA5_STATUS_CH_EN_OFFSET                        0
#define AVR32_USB_UHDMA5_STATUS_CH_EN_SIZE                          1
#define AVR32_USB_UHDMA5_STATUS_DESC_LD_STA                         6
#define AVR32_USB_UHDMA5_STATUS_DESC_LD_STA_MASK           0x00000040
#define AVR32_USB_UHDMA5_STATUS_DESC_LD_STA_OFFSET                  6
#define AVR32_USB_UHDMA5_STATUS_DESC_LD_STA_SIZE                    1
#define AVR32_USB_UHDMA5_STATUS_EOCH_BUFF_STA                       5
#define AVR32_USB_UHDMA5_STATUS_EOCH_BUFF_STA_MASK         0x00000020
#define AVR32_USB_UHDMA5_STATUS_EOCH_BUFF_STA_OFFSET                5
#define AVR32_USB_UHDMA5_STATUS_EOCH_BUFF_STA_SIZE                  1
#define AVR32_USB_UHDMA5_STATUS_EOT_STA                             4
#define AVR32_USB_UHDMA5_STATUS_EOT_STA_MASK               0x00000010
#define AVR32_USB_UHDMA5_STATUS_EOT_STA_OFFSET                      4
#define AVR32_USB_UHDMA5_STATUS_EOT_STA_SIZE                        1
#define AVR32_USB_UHDMA5_STATUS_MASK                       0xffff0073
#define AVR32_USB_UHDMA5_STATUS_RESETVALUE                 0x00000000
#define AVR32_USB_UHDMA6_ADDR                              0x00000764
#define AVR32_USB_UHDMA6_ADDR_HSB_ADDR                              0
#define AVR32_USB_UHDMA6_ADDR_HSB_ADDR_MASK                0xffffffff
#define AVR32_USB_UHDMA6_ADDR_HSB_ADDR_OFFSET                       0
#define AVR32_USB_UHDMA6_ADDR_HSB_ADDR_SIZE                        32
#define AVR32_USB_UHDMA6_ADDR_MASK                         0xffffffff
#define AVR32_USB_UHDMA6_ADDR_RESETVALUE                   0x00000000
#define AVR32_USB_UHDMA6_CONTROL                           0x00000768
#define AVR32_USB_UHDMA6_CONTROL_BUFF_CLOSE_IN_EN                   2
#define AVR32_USB_UHDMA6_CONTROL_BUFF_CLOSE_IN_EN_MASK     0x00000004
#define AVR32_USB_UHDMA6_CONTROL_BUFF_CLOSE_IN_EN_OFFSET            2
#define AVR32_USB_UHDMA6_CONTROL_BUFF_CLOSE_IN_EN_SIZE              1
#define AVR32_USB_UHDMA6_CONTROL_BURST_LOCK_EN                      7
#define AVR32_USB_UHDMA6_CONTROL_BURST_LOCK_EN_MASK        0x00000080
#define AVR32_USB_UHDMA6_CONTROL_BURST_LOCK_EN_OFFSET               7
#define AVR32_USB_UHDMA6_CONTROL_BURST_LOCK_EN_SIZE                 1
#define AVR32_USB_UHDMA6_CONTROL_CH_BYTE_LENGTH                    16
#define AVR32_USB_UHDMA6_CONTROL_CH_BYTE_LENGTH_MASK       0xffff0000
#define AVR32_USB_UHDMA6_CONTROL_CH_BYTE_LENGTH_OFFSET             16
#define AVR32_USB_UHDMA6_CONTROL_CH_BYTE_LENGTH_SIZE               16
#define AVR32_USB_UHDMA6_CONTROL_CH_EN                              0
#define AVR32_USB_UHDMA6_CONTROL_CH_EN_MASK                0x00000001
#define AVR32_USB_UHDMA6_CONTROL_CH_EN_OFFSET                       0
#define AVR32_USB_UHDMA6_CONTROL_CH_EN_SIZE                         1
#define AVR32_USB_UHDMA6_CONTROL_DESC_LD_IRQ_EN                     6
#define AVR32_USB_UHDMA6_CONTROL_DESC_LD_IRQ_EN_MASK       0x00000040
#define AVR32_USB_UHDMA6_CONTROL_DESC_LD_IRQ_EN_OFFSET              6
#define AVR32_USB_UHDMA6_CONTROL_DESC_LD_IRQ_EN_SIZE                1
#define AVR32_USB_UHDMA6_CONTROL_DMAEND_EN                          3
#define AVR32_USB_UHDMA6_CONTROL_DMAEND_EN_MASK            0x00000008
#define AVR32_USB_UHDMA6_CONTROL_DMAEND_EN_OFFSET                   3
#define AVR32_USB_UHDMA6_CONTROL_DMAEND_EN_SIZE                     1
#define AVR32_USB_UHDMA6_CONTROL_EOBUFF_IRQ_EN                      5
#define AVR32_USB_UHDMA6_CONTROL_EOBUFF_IRQ_EN_MASK        0x00000020
#define AVR32_USB_UHDMA6_CONTROL_EOBUFF_IRQ_EN_OFFSET               5
#define AVR32_USB_UHDMA6_CONTROL_EOBUFF_IRQ_EN_SIZE                 1
#define AVR32_USB_UHDMA6_CONTROL_EOT_IRQ_EN                         4
#define AVR32_USB_UHDMA6_CONTROL_EOT_IRQ_EN_MASK           0x00000010
#define AVR32_USB_UHDMA6_CONTROL_EOT_IRQ_EN_OFFSET                  4
#define AVR32_USB_UHDMA6_CONTROL_EOT_IRQ_EN_SIZE                    1
#define AVR32_USB_UHDMA6_CONTROL_LD_NXT_CH_DESC_EN                  1
#define AVR32_USB_UHDMA6_CONTROL_LD_NXT_CH_DESC_EN_MASK    0x00000002
#define AVR32_USB_UHDMA6_CONTROL_LD_NXT_CH_DESC_EN_OFFSET           1
#define AVR32_USB_UHDMA6_CONTROL_LD_NXT_CH_DESC_EN_SIZE             1
#define AVR32_USB_UHDMA6_CONTROL_MASK                      0xffff00ff
#define AVR32_USB_UHDMA6_CONTROL_RESETVALUE                0x00000000
#define AVR32_USB_UHDMA6_NEXTDESC                          0x00000760
#define AVR32_USB_UHDMA6_NEXTDESC_MASK                     0xfffffff0
#define AVR32_USB_UHDMA6_NEXTDESC_NXT_DESC_ADDR                     4
#define AVR32_USB_UHDMA6_NEXTDESC_NXT_DESC_ADDR_MASK       0xfffffff0
#define AVR32_USB_UHDMA6_NEXTDESC_NXT_DESC_ADDR_OFFSET              4
#define AVR32_USB_UHDMA6_NEXTDESC_NXT_DESC_ADDR_SIZE               28
#define AVR32_USB_UHDMA6_NEXTDESC_RESETVALUE               0x00000000
#define AVR32_USB_UHDMA6_STATUS                            0x0000076c
#define AVR32_USB_UHDMA6_STATUS_CH_ACTIVE                           1
#define AVR32_USB_UHDMA6_STATUS_CH_ACTIVE_MASK             0x00000002
#define AVR32_USB_UHDMA6_STATUS_CH_ACTIVE_OFFSET                    1
#define AVR32_USB_UHDMA6_STATUS_CH_ACTIVE_SIZE                      1
#define AVR32_USB_UHDMA6_STATUS_CH_BYTE_CNT                        16
#define AVR32_USB_UHDMA6_STATUS_CH_BYTE_CNT_MASK           0xffff0000
#define AVR32_USB_UHDMA6_STATUS_CH_BYTE_CNT_OFFSET                 16
#define AVR32_USB_UHDMA6_STATUS_CH_BYTE_CNT_SIZE                   16
#define AVR32_USB_UHDMA6_STATUS_CH_EN                               0
#define AVR32_USB_UHDMA6_STATUS_CH_EN_MASK                 0x00000001
#define AVR32_USB_UHDMA6_STATUS_CH_EN_OFFSET                        0
#define AVR32_USB_UHDMA6_STATUS_CH_EN_SIZE                          1
#define AVR32_USB_UHDMA6_STATUS_DESC_LD_STA                         6
#define AVR32_USB_UHDMA6_STATUS_DESC_LD_STA_MASK           0x00000040
#define AVR32_USB_UHDMA6_STATUS_DESC_LD_STA_OFFSET                  6
#define AVR32_USB_UHDMA6_STATUS_DESC_LD_STA_SIZE                    1
#define AVR32_USB_UHDMA6_STATUS_EOCH_BUFF_STA                       5
#define AVR32_USB_UHDMA6_STATUS_EOCH_BUFF_STA_MASK         0x00000020
#define AVR32_USB_UHDMA6_STATUS_EOCH_BUFF_STA_OFFSET                5
#define AVR32_USB_UHDMA6_STATUS_EOCH_BUFF_STA_SIZE                  1
#define AVR32_USB_UHDMA6_STATUS_EOT_STA                             4
#define AVR32_USB_UHDMA6_STATUS_EOT_STA_MASK               0x00000010
#define AVR32_USB_UHDMA6_STATUS_EOT_STA_OFFSET                      4
#define AVR32_USB_UHDMA6_STATUS_EOT_STA_SIZE                        1
#define AVR32_USB_UHDMA6_STATUS_MASK                       0xffff0073
#define AVR32_USB_UHDMA6_STATUS_RESETVALUE                 0x00000000
#define AVR32_USB_UHDMA7_ADDR                              0x00000774
#define AVR32_USB_UHDMA7_ADDR_HSB_ADDR                              0
#define AVR32_USB_UHDMA7_ADDR_HSB_ADDR_MASK                0xffffffff
#define AVR32_USB_UHDMA7_ADDR_HSB_ADDR_OFFSET                       0
#define AVR32_USB_UHDMA7_ADDR_HSB_ADDR_SIZE                        32
#define AVR32_USB_UHDMA7_ADDR_MASK                         0xffffffff
#define AVR32_USB_UHDMA7_ADDR_RESETVALUE                   0x00000000
#define AVR32_USB_UHDMA7_CONTROL                           0x00000778
#define AVR32_USB_UHDMA7_CONTROL_BUFF_CLOSE_IN_EN                   2
#define AVR32_USB_UHDMA7_CONTROL_BUFF_CLOSE_IN_EN_MASK     0x00000004
#define AVR32_USB_UHDMA7_CONTROL_BUFF_CLOSE_IN_EN_OFFSET            2
#define AVR32_USB_UHDMA7_CONTROL_BUFF_CLOSE_IN_EN_SIZE              1
#define AVR32_USB_UHDMA7_CONTROL_BURST_LOCK_EN                      7
#define AVR32_USB_UHDMA7_CONTROL_BURST_LOCK_EN_MASK        0x00000080
#define AVR32_USB_UHDMA7_CONTROL_BURST_LOCK_EN_OFFSET               7
#define AVR32_USB_UHDMA7_CONTROL_BURST_LOCK_EN_SIZE                 1
#define AVR32_USB_UHDMA7_CONTROL_CH_BYTE_LENGTH                    16
#define AVR32_USB_UHDMA7_CONTROL_CH_BYTE_LENGTH_MASK       0xffff0000
#define AVR32_USB_UHDMA7_CONTROL_CH_BYTE_LENGTH_OFFSET             16
#define AVR32_USB_UHDMA7_CONTROL_CH_BYTE_LENGTH_SIZE               16
#define AVR32_USB_UHDMA7_CONTROL_CH_EN                              0
#define AVR32_USB_UHDMA7_CONTROL_CH_EN_MASK                0x00000001
#define AVR32_USB_UHDMA7_CONTROL_CH_EN_OFFSET                       0
#define AVR32_USB_UHDMA7_CONTROL_CH_EN_SIZE                         1
#define AVR32_USB_UHDMA7_CONTROL_DESC_LD_IRQ_EN                     6
#define AVR32_USB_UHDMA7_CONTROL_DESC_LD_IRQ_EN_MASK       0x00000040
#define AVR32_USB_UHDMA7_CONTROL_DESC_LD_IRQ_EN_OFFSET              6
#define AVR32_USB_UHDMA7_CONTROL_DESC_LD_IRQ_EN_SIZE                1
#define AVR32_USB_UHDMA7_CONTROL_DMAEND_EN                          3
#define AVR32_USB_UHDMA7_CONTROL_DMAEND_EN_MASK            0x00000008
#define AVR32_USB_UHDMA7_CONTROL_DMAEND_EN_OFFSET                   3
#define AVR32_USB_UHDMA7_CONTROL_DMAEND_EN_SIZE                     1
#define AVR32_USB_UHDMA7_CONTROL_EOBUFF_IRQ_EN                      5
#define AVR32_USB_UHDMA7_CONTROL_EOBUFF_IRQ_EN_MASK        0x00000020
#define AVR32_USB_UHDMA7_CONTROL_EOBUFF_IRQ_EN_OFFSET               5
#define AVR32_USB_UHDMA7_CONTROL_EOBUFF_IRQ_EN_SIZE                 1
#define AVR32_USB_UHDMA7_CONTROL_EOT_IRQ_EN                         4
#define AVR32_USB_UHDMA7_CONTROL_EOT_IRQ_EN_MASK           0x00000010
#define AVR32_USB_UHDMA7_CONTROL_EOT_IRQ_EN_OFFSET                  4
#define AVR32_USB_UHDMA7_CONTROL_EOT_IRQ_EN_SIZE                    1
#define AVR32_USB_UHDMA7_CONTROL_LD_NXT_CH_DESC_EN                  1
#define AVR32_USB_UHDMA7_CONTROL_LD_NXT_CH_DESC_EN_MASK    0x00000002
#define AVR32_USB_UHDMA7_CONTROL_LD_NXT_CH_DESC_EN_OFFSET           1
#define AVR32_USB_UHDMA7_CONTROL_LD_NXT_CH_DESC_EN_SIZE             1
#define AVR32_USB_UHDMA7_CONTROL_MASK                      0xffff00ff
#define AVR32_USB_UHDMA7_CONTROL_RESETVALUE                0x00000000
#define AVR32_USB_UHDMA7_NEXTDESC                          0x00000770
#define AVR32_USB_UHDMA7_NEXTDESC_MASK                     0xfffffff0
#define AVR32_USB_UHDMA7_NEXTDESC_NXT_DESC_ADDR                     4
#define AVR32_USB_UHDMA7_NEXTDESC_NXT_DESC_ADDR_MASK       0xfffffff0
#define AVR32_USB_UHDMA7_NEXTDESC_NXT_DESC_ADDR_OFFSET              4
#define AVR32_USB_UHDMA7_NEXTDESC_NXT_DESC_ADDR_SIZE               28
#define AVR32_USB_UHDMA7_NEXTDESC_RESETVALUE               0x00000000
#define AVR32_USB_UHDMA7_STATUS                            0x0000077c
#define AVR32_USB_UHDMA7_STATUS_CH_ACTIVE                           1
#define AVR32_USB_UHDMA7_STATUS_CH_ACTIVE_MASK             0x00000002
#define AVR32_USB_UHDMA7_STATUS_CH_ACTIVE_OFFSET                    1
#define AVR32_USB_UHDMA7_STATUS_CH_ACTIVE_SIZE                      1
#define AVR32_USB_UHDMA7_STATUS_CH_BYTE_CNT                        16
#define AVR32_USB_UHDMA7_STATUS_CH_BYTE_CNT_MASK           0xffff0000
#define AVR32_USB_UHDMA7_STATUS_CH_BYTE_CNT_OFFSET                 16
#define AVR32_USB_UHDMA7_STATUS_CH_BYTE_CNT_SIZE                   16
#define AVR32_USB_UHDMA7_STATUS_CH_EN                               0
#define AVR32_USB_UHDMA7_STATUS_CH_EN_MASK                 0x00000001
#define AVR32_USB_UHDMA7_STATUS_CH_EN_OFFSET                        0
#define AVR32_USB_UHDMA7_STATUS_CH_EN_SIZE                          1
#define AVR32_USB_UHDMA7_STATUS_DESC_LD_STA                         6
#define AVR32_USB_UHDMA7_STATUS_DESC_LD_STA_MASK           0x00000040
#define AVR32_USB_UHDMA7_STATUS_DESC_LD_STA_OFFSET                  6
#define AVR32_USB_UHDMA7_STATUS_DESC_LD_STA_SIZE                    1
#define AVR32_USB_UHDMA7_STATUS_EOCH_BUFF_STA                       5
#define AVR32_USB_UHDMA7_STATUS_EOCH_BUFF_STA_MASK         0x00000020
#define AVR32_USB_UHDMA7_STATUS_EOCH_BUFF_STA_OFFSET                5
#define AVR32_USB_UHDMA7_STATUS_EOCH_BUFF_STA_SIZE                  1
#define AVR32_USB_UHDMA7_STATUS_EOT_STA                             4
#define AVR32_USB_UHDMA7_STATUS_EOT_STA_MASK               0x00000010
#define AVR32_USB_UHDMA7_STATUS_EOT_STA_OFFSET                      4
#define AVR32_USB_UHDMA7_STATUS_EOT_STA_SIZE                        1
#define AVR32_USB_UHDMA7_STATUS_MASK                       0xffff0073
#define AVR32_USB_UHDMA7_STATUS_RESETVALUE                 0x00000000
#define AVR32_USB_UHFNUM                                   0x00000420
#define AVR32_USB_UHFNUM_FLENHIGH                                  16
#define AVR32_USB_UHFNUM_FLENHIGH_MASK                     0x00ff0000
#define AVR32_USB_UHFNUM_FLENHIGH_OFFSET                           16
#define AVR32_USB_UHFNUM_FLENHIGH_SIZE                              8
#define AVR32_USB_UHFNUM_FNUM                                       3
#define AVR32_USB_UHFNUM_FNUM_MASK                         0x00003ff8
#define AVR32_USB_UHFNUM_FNUM_OFFSET                                3
#define AVR32_USB_UHFNUM_FNUM_SIZE                                 11
#define AVR32_USB_UHFNUM_MASK                              0x00ff3fff
#define AVR32_USB_UHFNUM_MFNUM                                      0
#define AVR32_USB_UHFNUM_MFNUM_MASK                        0x00000007
#define AVR32_USB_UHFNUM_MFNUM_OFFSET                               0
#define AVR32_USB_UHFNUM_MFNUM_SIZE                                 3
#define AVR32_USB_UHFNUM_RESETVALUE                        0x00000000
#define AVR32_USB_UHINT                                    0x00000404
#define AVR32_USB_UHINTCLR                                 0x00000408
#define AVR32_USB_UHINTCLR_DCONNIC                                  0
#define AVR32_USB_UHINTCLR_DCONNIC_MASK                    0x00000001
#define AVR32_USB_UHINTCLR_DCONNIC_OFFSET                           0
#define AVR32_USB_UHINTCLR_DCONNIC_SIZE                             1
#define AVR32_USB_UHINTCLR_DDISCIC                                  1
#define AVR32_USB_UHINTCLR_DDISCIC_MASK                    0x00000002
#define AVR32_USB_UHINTCLR_DDISCIC_OFFSET                           1
#define AVR32_USB_UHINTCLR_DDISCIC_SIZE                             1
#define AVR32_USB_UHINTCLR_HSOFIC                                   5
#define AVR32_USB_UHINTCLR_HSOFIC_MASK                     0x00000020
#define AVR32_USB_UHINTCLR_HSOFIC_OFFSET                            5
#define AVR32_USB_UHINTCLR_HSOFIC_SIZE                              1
#define AVR32_USB_UHINTCLR_HWUPIC                                   6
#define AVR32_USB_UHINTCLR_HWUPIC_MASK                     0x00000040
#define AVR32_USB_UHINTCLR_HWUPIC_OFFSET                            6
#define AVR32_USB_UHINTCLR_HWUPIC_SIZE                              1
#define AVR32_USB_UHINTCLR_MASK                            0x0000007f
#define AVR32_USB_UHINTCLR_RESETVALUE                      0x00000000
#define AVR32_USB_UHINTCLR_RSMEDIC                                  3
#define AVR32_USB_UHINTCLR_RSMEDIC_MASK                    0x00000008
#define AVR32_USB_UHINTCLR_RSMEDIC_OFFSET                           3
#define AVR32_USB_UHINTCLR_RSMEDIC_SIZE                             1
#define AVR32_USB_UHINTCLR_RSTIC                                    2
#define AVR32_USB_UHINTCLR_RSTIC_MASK                      0x00000004
#define AVR32_USB_UHINTCLR_RSTIC_OFFSET                             2
#define AVR32_USB_UHINTCLR_RSTIC_SIZE                               1
#define AVR32_USB_UHINTCLR_RXRSMIC                                  4
#define AVR32_USB_UHINTCLR_RXRSMIC_MASK                    0x00000010
#define AVR32_USB_UHINTCLR_RXRSMIC_OFFSET                           4
#define AVR32_USB_UHINTCLR_RXRSMIC_SIZE                             1
#define AVR32_USB_UHINTE                                   0x00000410
#define AVR32_USB_UHINTECLR                                0x00000414
#define AVR32_USB_UHINTECLR_DCONNIEC                                0
#define AVR32_USB_UHINTECLR_DCONNIEC_MASK                  0x00000001
#define AVR32_USB_UHINTECLR_DCONNIEC_OFFSET                         0
#define AVR32_USB_UHINTECLR_DCONNIEC_SIZE                           1
#define AVR32_USB_UHINTECLR_DDISCIEC                                1
#define AVR32_USB_UHINTECLR_DDISCIEC_MASK                  0x00000002
#define AVR32_USB_UHINTECLR_DDISCIEC_OFFSET                         1
#define AVR32_USB_UHINTECLR_DDISCIEC_SIZE                           1
#define AVR32_USB_UHINTECLR_DMA1INTEC                              25
#define AVR32_USB_UHINTECLR_DMA1INTEC_MASK                 0x02000000
#define AVR32_USB_UHINTECLR_DMA1INTEC_OFFSET                       25
#define AVR32_USB_UHINTECLR_DMA1INTEC_SIZE                          1
#define AVR32_USB_UHINTECLR_DMA2INTEC                              26
#define AVR32_USB_UHINTECLR_DMA2INTEC_MASK                 0x04000000
#define AVR32_USB_UHINTECLR_DMA2INTEC_OFFSET                       26
#define AVR32_USB_UHINTECLR_DMA2INTEC_SIZE                          1
#define AVR32_USB_UHINTECLR_DMA3INTEC                              27
#define AVR32_USB_UHINTECLR_DMA3INTEC_MASK                 0x08000000
#define AVR32_USB_UHINTECLR_DMA3INTEC_OFFSET                       27
#define AVR32_USB_UHINTECLR_DMA3INTEC_SIZE                          1
#define AVR32_USB_UHINTECLR_DMA4INTEC                              28
#define AVR32_USB_UHINTECLR_DMA4INTEC_MASK                 0x10000000
#define AVR32_USB_UHINTECLR_DMA4INTEC_OFFSET                       28
#define AVR32_USB_UHINTECLR_DMA4INTEC_SIZE                          1
#define AVR32_USB_UHINTECLR_DMA5INTEC                              29
#define AVR32_USB_UHINTECLR_DMA5INTEC_MASK                 0x20000000
#define AVR32_USB_UHINTECLR_DMA5INTEC_OFFSET                       29
#define AVR32_USB_UHINTECLR_DMA5INTEC_SIZE                          1
#define AVR32_USB_UHINTECLR_DMA6INTEC                              30
#define AVR32_USB_UHINTECLR_DMA6INTEC_MASK                 0x40000000
#define AVR32_USB_UHINTECLR_DMA6INTEC_OFFSET                       30
#define AVR32_USB_UHINTECLR_DMA6INTEC_SIZE                          1
#define AVR32_USB_UHINTECLR_DMA7INTEC                              31
#define AVR32_USB_UHINTECLR_DMA7INTEC_MASK                 0x80000000
#define AVR32_USB_UHINTECLR_DMA7INTEC_OFFSET                       31
#define AVR32_USB_UHINTECLR_DMA7INTEC_SIZE                          1
#define AVR32_USB_UHINTECLR_HSOFIEC                                 5
#define AVR32_USB_UHINTECLR_HSOFIEC_MASK                   0x00000020
#define AVR32_USB_UHINTECLR_HSOFIEC_OFFSET                          5
#define AVR32_USB_UHINTECLR_HSOFIEC_SIZE                            1
#define AVR32_USB_UHINTECLR_HWUPIEC                                 6
#define AVR32_USB_UHINTECLR_HWUPIEC_MASK                   0x00000040
#define AVR32_USB_UHINTECLR_HWUPIEC_OFFSET                          6
#define AVR32_USB_UHINTECLR_HWUPIEC_SIZE                            1
#define AVR32_USB_UHINTECLR_MASK                           0xfe00ff7f
#define AVR32_USB_UHINTECLR_P0INTEC                                 8
#define AVR32_USB_UHINTECLR_P0INTEC_MASK                   0x00000100
#define AVR32_USB_UHINTECLR_P0INTEC_OFFSET                          8
#define AVR32_USB_UHINTECLR_P0INTEC_SIZE                            1
#define AVR32_USB_UHINTECLR_P1INTEC                                 9
#define AVR32_USB_UHINTECLR_P1INTEC_MASK                   0x00000200
#define AVR32_USB_UHINTECLR_P1INTEC_OFFSET                          9
#define AVR32_USB_UHINTECLR_P1INTEC_SIZE                            1
#define AVR32_USB_UHINTECLR_P2INTEC                                10
#define AVR32_USB_UHINTECLR_P2INTEC_MASK                   0x00000400
#define AVR32_USB_UHINTECLR_P2INTEC_OFFSET                         10
#define AVR32_USB_UHINTECLR_P2INTEC_SIZE                            1
#define AVR32_USB_UHINTECLR_P3INTEC                                11
#define AVR32_USB_UHINTECLR_P3INTEC_MASK                   0x00000800
#define AVR32_USB_UHINTECLR_P3INTEC_OFFSET                         11
#define AVR32_USB_UHINTECLR_P3INTEC_SIZE                            1
#define AVR32_USB_UHINTECLR_P4INTEC                                12
#define AVR32_USB_UHINTECLR_P4INTEC_MASK                   0x00001000
#define AVR32_USB_UHINTECLR_P4INTEC_OFFSET                         12
#define AVR32_USB_UHINTECLR_P4INTEC_SIZE                            1
#define AVR32_USB_UHINTECLR_P5INTEC                                13
#define AVR32_USB_UHINTECLR_P5INTEC_MASK                   0x00002000
#define AVR32_USB_UHINTECLR_P5INTEC_OFFSET                         13
#define AVR32_USB_UHINTECLR_P5INTEC_SIZE                            1
#define AVR32_USB_UHINTECLR_P6INTEC                                14
#define AVR32_USB_UHINTECLR_P6INTEC_MASK                   0x00004000
#define AVR32_USB_UHINTECLR_P6INTEC_OFFSET                         14
#define AVR32_USB_UHINTECLR_P6INTEC_SIZE                            1
#define AVR32_USB_UHINTECLR_P7INTEC                                15
#define AVR32_USB_UHINTECLR_P7INTEC_MASK                   0x00008000
#define AVR32_USB_UHINTECLR_P7INTEC_OFFSET                         15
#define AVR32_USB_UHINTECLR_P7INTEC_SIZE                            1
#define AVR32_USB_UHINTECLR_RESETVALUE                     0x00000000
#define AVR32_USB_UHINTECLR_RSMEDIEC                                3
#define AVR32_USB_UHINTECLR_RSMEDIEC_MASK                  0x00000008
#define AVR32_USB_UHINTECLR_RSMEDIEC_OFFSET                         3
#define AVR32_USB_UHINTECLR_RSMEDIEC_SIZE                           1
#define AVR32_USB_UHINTECLR_RSTIEC                                  2
#define AVR32_USB_UHINTECLR_RSTIEC_MASK                    0x00000004
#define AVR32_USB_UHINTECLR_RSTIEC_OFFSET                           2
#define AVR32_USB_UHINTECLR_RSTIEC_SIZE                             1
#define AVR32_USB_UHINTECLR_RXRSMIEC                                4
#define AVR32_USB_UHINTECLR_RXRSMIEC_MASK                  0x00000010
#define AVR32_USB_UHINTECLR_RXRSMIEC_OFFSET                         4
#define AVR32_USB_UHINTECLR_RXRSMIEC_SIZE                           1
#define AVR32_USB_UHINTESET                                0x00000418
#define AVR32_USB_UHINTESET_DCONNIES                                0
#define AVR32_USB_UHINTESET_DCONNIES_MASK                  0x00000001
#define AVR32_USB_UHINTESET_DCONNIES_OFFSET                         0
#define AVR32_USB_UHINTESET_DCONNIES_SIZE                           1
#define AVR32_USB_UHINTESET_DDISCIES                                1
#define AVR32_USB_UHINTESET_DDISCIES_MASK                  0x00000002
#define AVR32_USB_UHINTESET_DDISCIES_OFFSET                         1
#define AVR32_USB_UHINTESET_DDISCIES_SIZE                           1
#define AVR32_USB_UHINTESET_DMA1INTES                              25
#define AVR32_USB_UHINTESET_DMA1INTES_MASK                 0x02000000
#define AVR32_USB_UHINTESET_DMA1INTES_OFFSET                       25
#define AVR32_USB_UHINTESET_DMA1INTES_SIZE                          1
#define AVR32_USB_UHINTESET_DMA2INTES                              26
#define AVR32_USB_UHINTESET_DMA2INTES_MASK                 0x04000000
#define AVR32_USB_UHINTESET_DMA2INTES_OFFSET                       26
#define AVR32_USB_UHINTESET_DMA2INTES_SIZE                          1
#define AVR32_USB_UHINTESET_DMA3INTES                              27
#define AVR32_USB_UHINTESET_DMA3INTES_MASK                 0x08000000
#define AVR32_USB_UHINTESET_DMA3INTES_OFFSET                       27
#define AVR32_USB_UHINTESET_DMA3INTES_SIZE                          1
#define AVR32_USB_UHINTESET_DMA4INTES                              28
#define AVR32_USB_UHINTESET_DMA4INTES_MASK                 0x10000000
#define AVR32_USB_UHINTESET_DMA4INTES_OFFSET                       28
#define AVR32_USB_UHINTESET_DMA4INTES_SIZE                          1
#define AVR32_USB_UHINTESET_DMA5INTES                              29
#define AVR32_USB_UHINTESET_DMA5INTES_MASK                 0x20000000
#define AVR32_USB_UHINTESET_DMA5INTES_OFFSET                       29
#define AVR32_USB_UHINTESET_DMA5INTES_SIZE                          1
#define AVR32_USB_UHINTESET_DMA6INTES                              30
#define AVR32_USB_UHINTESET_DMA6INTES_MASK                 0x40000000
#define AVR32_USB_UHINTESET_DMA6INTES_OFFSET                       30
#define AVR32_USB_UHINTESET_DMA6INTES_SIZE                          1
#define AVR32_USB_UHINTESET_DMA7INTES                              31
#define AVR32_USB_UHINTESET_DMA7INTES_MASK                 0x80000000
#define AVR32_USB_UHINTESET_DMA7INTES_OFFSET                       31
#define AVR32_USB_UHINTESET_DMA7INTES_SIZE                          1
#define AVR32_USB_UHINTESET_HSOFIES                                 5
#define AVR32_USB_UHINTESET_HSOFIES_MASK                   0x00000020
#define AVR32_USB_UHINTESET_HSOFIES_OFFSET                          5
#define AVR32_USB_UHINTESET_HSOFIES_SIZE                            1
#define AVR32_USB_UHINTESET_HWUPIES                                 6
#define AVR32_USB_UHINTESET_HWUPIES_MASK                   0x00000040
#define AVR32_USB_UHINTESET_HWUPIES_OFFSET                          6
#define AVR32_USB_UHINTESET_HWUPIES_SIZE                            1
#define AVR32_USB_UHINTESET_MASK                           0xfe00ff7f
#define AVR32_USB_UHINTESET_P0INTES                                 8
#define AVR32_USB_UHINTESET_P0INTES_MASK                   0x00000100
#define AVR32_USB_UHINTESET_P0INTES_OFFSET                          8
#define AVR32_USB_UHINTESET_P0INTES_SIZE                            1
#define AVR32_USB_UHINTESET_P1INTES                                 9
#define AVR32_USB_UHINTESET_P1INTES_MASK                   0x00000200
#define AVR32_USB_UHINTESET_P1INTES_OFFSET                          9
#define AVR32_USB_UHINTESET_P1INTES_SIZE                            1
#define AVR32_USB_UHINTESET_P2INTES                                10
#define AVR32_USB_UHINTESET_P2INTES_MASK                   0x00000400
#define AVR32_USB_UHINTESET_P2INTES_OFFSET                         10
#define AVR32_USB_UHINTESET_P2INTES_SIZE                            1
#define AVR32_USB_UHINTESET_P3INTES                                11
#define AVR32_USB_UHINTESET_P3INTES_MASK                   0x00000800
#define AVR32_USB_UHINTESET_P3INTES_OFFSET                         11
#define AVR32_USB_UHINTESET_P3INTES_SIZE                            1
#define AVR32_USB_UHINTESET_P4INTES                                12
#define AVR32_USB_UHINTESET_P4INTES_MASK                   0x00001000
#define AVR32_USB_UHINTESET_P4INTES_OFFSET                         12
#define AVR32_USB_UHINTESET_P4INTES_SIZE                            1
#define AVR32_USB_UHINTESET_P5INTES                                13
#define AVR32_USB_UHINTESET_P5INTES_MASK                   0x00002000
#define AVR32_USB_UHINTESET_P5INTES_OFFSET                         13
#define AVR32_USB_UHINTESET_P5INTES_SIZE                            1
#define AVR32_USB_UHINTESET_P6INTES                                14
#define AVR32_USB_UHINTESET_P6INTES_MASK                   0x00004000
#define AVR32_USB_UHINTESET_P6INTES_OFFSET                         14
#define AVR32_USB_UHINTESET_P6INTES_SIZE                            1
#define AVR32_USB_UHINTESET_P7INTES                                15
#define AVR32_USB_UHINTESET_P7INTES_MASK                   0x00008000
#define AVR32_USB_UHINTESET_P7INTES_OFFSET                         15
#define AVR32_USB_UHINTESET_P7INTES_SIZE                            1
#define AVR32_USB_UHINTESET_RESETVALUE                     0x00000000
#define AVR32_USB_UHINTESET_RSMEDIES                                3
#define AVR32_USB_UHINTESET_RSMEDIES_MASK                  0x00000008
#define AVR32_USB_UHINTESET_RSMEDIES_OFFSET                         3
#define AVR32_USB_UHINTESET_RSMEDIES_SIZE                           1
#define AVR32_USB_UHINTESET_RSTIES                                  2
#define AVR32_USB_UHINTESET_RSTIES_MASK                    0x00000004
#define AVR32_USB_UHINTESET_RSTIES_OFFSET                           2
#define AVR32_USB_UHINTESET_RSTIES_SIZE                             1
#define AVR32_USB_UHINTESET_RXRSMIES                                4
#define AVR32_USB_UHINTESET_RXRSMIES_MASK                  0x00000010
#define AVR32_USB_UHINTESET_RXRSMIES_OFFSET                         4
#define AVR32_USB_UHINTESET_RXRSMIES_SIZE                           1
#define AVR32_USB_UHINTE_DCONNIE                                    0
#define AVR32_USB_UHINTE_DCONNIE_MASK                      0x00000001
#define AVR32_USB_UHINTE_DCONNIE_OFFSET                             0
#define AVR32_USB_UHINTE_DCONNIE_SIZE                               1
#define AVR32_USB_UHINTE_DDISCIE                                    1
#define AVR32_USB_UHINTE_DDISCIE_MASK                      0x00000002
#define AVR32_USB_UHINTE_DDISCIE_OFFSET                             1
#define AVR32_USB_UHINTE_DDISCIE_SIZE                               1
#define AVR32_USB_UHINTE_DMA1INTE                                  25
#define AVR32_USB_UHINTE_DMA1INTE_MASK                     0x02000000
#define AVR32_USB_UHINTE_DMA1INTE_OFFSET                           25
#define AVR32_USB_UHINTE_DMA1INTE_SIZE                              1
#define AVR32_USB_UHINTE_DMA2INTE                                  26
#define AVR32_USB_UHINTE_DMA2INTE_MASK                     0x04000000
#define AVR32_USB_UHINTE_DMA2INTE_OFFSET                           26
#define AVR32_USB_UHINTE_DMA2INTE_SIZE                              1
#define AVR32_USB_UHINTE_DMA3INTE                                  27
#define AVR32_USB_UHINTE_DMA3INTE_MASK                     0x08000000
#define AVR32_USB_UHINTE_DMA3INTE_OFFSET                           27
#define AVR32_USB_UHINTE_DMA3INTE_SIZE                              1
#define AVR32_USB_UHINTE_DMA4INTE                                  28
#define AVR32_USB_UHINTE_DMA4INTE_MASK                     0x10000000
#define AVR32_USB_UHINTE_DMA4INTE_OFFSET                           28
#define AVR32_USB_UHINTE_DMA4INTE_SIZE                              1
#define AVR32_USB_UHINTE_DMA5INTE                                  29
#define AVR32_USB_UHINTE_DMA5INTE_MASK                     0x20000000
#define AVR32_USB_UHINTE_DMA5INTE_OFFSET                           29
#define AVR32_USB_UHINTE_DMA5INTE_SIZE                              1
#define AVR32_USB_UHINTE_DMA6INTE                                  30
#define AVR32_USB_UHINTE_DMA6INTE_MASK                     0x40000000
#define AVR32_USB_UHINTE_DMA6INTE_OFFSET                           30
#define AVR32_USB_UHINTE_DMA6INTE_SIZE                              1
#define AVR32_USB_UHINTE_DMA7INTE                                  31
#define AVR32_USB_UHINTE_DMA7INTE_MASK                     0x80000000
#define AVR32_USB_UHINTE_DMA7INTE_OFFSET                           31
#define AVR32_USB_UHINTE_DMA7INTE_SIZE                              1
#define AVR32_USB_UHINTE_HSOFIE                                     5
#define AVR32_USB_UHINTE_HSOFIE_MASK                       0x00000020
#define AVR32_USB_UHINTE_HSOFIE_OFFSET                              5
#define AVR32_USB_UHINTE_HSOFIE_SIZE                                1
#define AVR32_USB_UHINTE_HWUPIE                                     6
#define AVR32_USB_UHINTE_HWUPIE_MASK                       0x00000040
#define AVR32_USB_UHINTE_HWUPIE_OFFSET                              6
#define AVR32_USB_UHINTE_HWUPIE_SIZE                                1
#define AVR32_USB_UHINTE_MASK                              0xfe00ff7f
#define AVR32_USB_UHINTE_P0INTE                                     8
#define AVR32_USB_UHINTE_P0INTE_MASK                       0x00000100
#define AVR32_USB_UHINTE_P0INTE_OFFSET                              8
#define AVR32_USB_UHINTE_P0INTE_SIZE                                1
#define AVR32_USB_UHINTE_P1INTE                                     9
#define AVR32_USB_UHINTE_P1INTE_MASK                       0x00000200
#define AVR32_USB_UHINTE_P1INTE_OFFSET                              9
#define AVR32_USB_UHINTE_P1INTE_SIZE                                1
#define AVR32_USB_UHINTE_P2INTE                                    10
#define AVR32_USB_UHINTE_P2INTE_MASK                       0x00000400
#define AVR32_USB_UHINTE_P2INTE_OFFSET                             10
#define AVR32_USB_UHINTE_P2INTE_SIZE                                1
#define AVR32_USB_UHINTE_P3INTE                                    11
#define AVR32_USB_UHINTE_P3INTE_MASK                       0x00000800
#define AVR32_USB_UHINTE_P3INTE_OFFSET                             11
#define AVR32_USB_UHINTE_P3INTE_SIZE                                1
#define AVR32_USB_UHINTE_P4INTE                                    12
#define AVR32_USB_UHINTE_P4INTE_MASK                       0x00001000
#define AVR32_USB_UHINTE_P4INTE_OFFSET                             12
#define AVR32_USB_UHINTE_P4INTE_SIZE                                1
#define AVR32_USB_UHINTE_P5INTE                                    13
#define AVR32_USB_UHINTE_P5INTE_MASK                       0x00002000
#define AVR32_USB_UHINTE_P5INTE_OFFSET                             13
#define AVR32_USB_UHINTE_P5INTE_SIZE                                1
#define AVR32_USB_UHINTE_P6INTE                                    14
#define AVR32_USB_UHINTE_P6INTE_MASK                       0x00004000
#define AVR32_USB_UHINTE_P6INTE_OFFSET                             14
#define AVR32_USB_UHINTE_P6INTE_SIZE                                1
#define AVR32_USB_UHINTE_P7INTE                                    15
#define AVR32_USB_UHINTE_P7INTE_MASK                       0x00008000
#define AVR32_USB_UHINTE_P7INTE_OFFSET                             15
#define AVR32_USB_UHINTE_P7INTE_SIZE                                1
#define AVR32_USB_UHINTE_RESETVALUE                        0x00000000
#define AVR32_USB_UHINTE_RSMEDIE                                    3
#define AVR32_USB_UHINTE_RSMEDIE_MASK                      0x00000008
#define AVR32_USB_UHINTE_RSMEDIE_OFFSET                             3
#define AVR32_USB_UHINTE_RSMEDIE_SIZE                               1
#define AVR32_USB_UHINTE_RSTIE                                      2
#define AVR32_USB_UHINTE_RSTIE_MASK                        0x00000004
#define AVR32_USB_UHINTE_RSTIE_OFFSET                               2
#define AVR32_USB_UHINTE_RSTIE_SIZE                                 1
#define AVR32_USB_UHINTE_RXRSMIE                                    4
#define AVR32_USB_UHINTE_RXRSMIE_MASK                      0x00000010
#define AVR32_USB_UHINTE_RXRSMIE_OFFSET                             4
#define AVR32_USB_UHINTE_RXRSMIE_SIZE                               1
#define AVR32_USB_UHINTSET                                 0x0000040c
#define AVR32_USB_UHINTSET_DCONNIS                                  0
#define AVR32_USB_UHINTSET_DCONNIS_MASK                    0x00000001
#define AVR32_USB_UHINTSET_DCONNIS_OFFSET                           0
#define AVR32_USB_UHINTSET_DCONNIS_SIZE                             1
#define AVR32_USB_UHINTSET_DDISCIS                                  1
#define AVR32_USB_UHINTSET_DDISCIS_MASK                    0x00000002
#define AVR32_USB_UHINTSET_DDISCIS_OFFSET                           1
#define AVR32_USB_UHINTSET_DDISCIS_SIZE                             1
#define AVR32_USB_UHINTSET_DMA1INTS                                25
#define AVR32_USB_UHINTSET_DMA1INTS_MASK                   0x02000000
#define AVR32_USB_UHINTSET_DMA1INTS_OFFSET                         25
#define AVR32_USB_UHINTSET_DMA1INTS_SIZE                            1
#define AVR32_USB_UHINTSET_DMA2INTS                                26
#define AVR32_USB_UHINTSET_DMA2INTS_MASK                   0x04000000
#define AVR32_USB_UHINTSET_DMA2INTS_OFFSET                         26
#define AVR32_USB_UHINTSET_DMA2INTS_SIZE                            1
#define AVR32_USB_UHINTSET_DMA3INTS                                27
#define AVR32_USB_UHINTSET_DMA3INTS_MASK                   0x08000000
#define AVR32_USB_UHINTSET_DMA3INTS_OFFSET                         27
#define AVR32_USB_UHINTSET_DMA3INTS_SIZE                            1
#define AVR32_USB_UHINTSET_DMA4INTS                                28
#define AVR32_USB_UHINTSET_DMA4INTS_MASK                   0x10000000
#define AVR32_USB_UHINTSET_DMA4INTS_OFFSET                         28
#define AVR32_USB_UHINTSET_DMA4INTS_SIZE                            1
#define AVR32_USB_UHINTSET_DMA5INTS                                29
#define AVR32_USB_UHINTSET_DMA5INTS_MASK                   0x20000000
#define AVR32_USB_UHINTSET_DMA5INTS_OFFSET                         29
#define AVR32_USB_UHINTSET_DMA5INTS_SIZE                            1
#define AVR32_USB_UHINTSET_DMA6INTS                                30
#define AVR32_USB_UHINTSET_DMA6INTS_MASK                   0x40000000
#define AVR32_USB_UHINTSET_DMA6INTS_OFFSET                         30
#define AVR32_USB_UHINTSET_DMA6INTS_SIZE                            1
#define AVR32_USB_UHINTSET_DMA7INTS                                31
#define AVR32_USB_UHINTSET_DMA7INTS_MASK                   0x80000000
#define AVR32_USB_UHINTSET_DMA7INTS_OFFSET                         31
#define AVR32_USB_UHINTSET_DMA7INTS_SIZE                            1
#define AVR32_USB_UHINTSET_HSOFIS                                   5
#define AVR32_USB_UHINTSET_HSOFIS_MASK                     0x00000020
#define AVR32_USB_UHINTSET_HSOFIS_OFFSET                            5
#define AVR32_USB_UHINTSET_HSOFIS_SIZE                              1
#define AVR32_USB_UHINTSET_HWUPIS                                   6
#define AVR32_USB_UHINTSET_HWUPIS_MASK                     0x00000040
#define AVR32_USB_UHINTSET_HWUPIS_OFFSET                            6
#define AVR32_USB_UHINTSET_HWUPIS_SIZE                              1
#define AVR32_USB_UHINTSET_MASK                            0xfe00007f
#define AVR32_USB_UHINTSET_RESETVALUE                      0x00000000
#define AVR32_USB_UHINTSET_RSMEDIS                                  3
#define AVR32_USB_UHINTSET_RSMEDIS_MASK                    0x00000008
#define AVR32_USB_UHINTSET_RSMEDIS_OFFSET                           3
#define AVR32_USB_UHINTSET_RSMEDIS_SIZE                             1
#define AVR32_USB_UHINTSET_RSTIS                                    2
#define AVR32_USB_UHINTSET_RSTIS_MASK                      0x00000004
#define AVR32_USB_UHINTSET_RSTIS_OFFSET                             2
#define AVR32_USB_UHINTSET_RSTIS_SIZE                               1
#define AVR32_USB_UHINTSET_RXRSMIS                                  4
#define AVR32_USB_UHINTSET_RXRSMIS_MASK                    0x00000010
#define AVR32_USB_UHINTSET_RXRSMIS_OFFSET                           4
#define AVR32_USB_UHINTSET_RXRSMIS_SIZE                             1
#define AVR32_USB_UHINT_DCONNI                                      0
#define AVR32_USB_UHINT_DCONNI_MASK                        0x00000001
#define AVR32_USB_UHINT_DCONNI_OFFSET                               0
#define AVR32_USB_UHINT_DCONNI_SIZE                                 1
#define AVR32_USB_UHINT_DDISCI                                      1
#define AVR32_USB_UHINT_DDISCI_MASK                        0x00000002
#define AVR32_USB_UHINT_DDISCI_OFFSET                               1
#define AVR32_USB_UHINT_DDISCI_SIZE                                 1
#define AVR32_USB_UHINT_DMA1INT                                    25
#define AVR32_USB_UHINT_DMA1INT_MASK                       0x02000000
#define AVR32_USB_UHINT_DMA1INT_OFFSET                             25
#define AVR32_USB_UHINT_DMA1INT_SIZE                                1
#define AVR32_USB_UHINT_DMA2INT                                    26
#define AVR32_USB_UHINT_DMA2INT_MASK                       0x04000000
#define AVR32_USB_UHINT_DMA2INT_OFFSET                             26
#define AVR32_USB_UHINT_DMA2INT_SIZE                                1
#define AVR32_USB_UHINT_DMA3INT                                    27
#define AVR32_USB_UHINT_DMA3INT_MASK                       0x08000000
#define AVR32_USB_UHINT_DMA3INT_OFFSET                             27
#define AVR32_USB_UHINT_DMA3INT_SIZE                                1
#define AVR32_USB_UHINT_DMA4INT                                    28
#define AVR32_USB_UHINT_DMA4INT_MASK                       0x10000000
#define AVR32_USB_UHINT_DMA4INT_OFFSET                             28
#define AVR32_USB_UHINT_DMA4INT_SIZE                                1
#define AVR32_USB_UHINT_DMA5INT                                    29
#define AVR32_USB_UHINT_DMA5INT_MASK                       0x20000000
#define AVR32_USB_UHINT_DMA5INT_OFFSET                             29
#define AVR32_USB_UHINT_DMA5INT_SIZE                                1
#define AVR32_USB_UHINT_DMA6INT                                    30
#define AVR32_USB_UHINT_DMA6INT_MASK                       0x40000000
#define AVR32_USB_UHINT_DMA6INT_OFFSET                             30
#define AVR32_USB_UHINT_DMA6INT_SIZE                                1
#define AVR32_USB_UHINT_DMA7INT                                    31
#define AVR32_USB_UHINT_DMA7INT_MASK                       0x80000000
#define AVR32_USB_UHINT_DMA7INT_OFFSET                             31
#define AVR32_USB_UHINT_DMA7INT_SIZE                                1
#define AVR32_USB_UHINT_HSOFI                                       5
#define AVR32_USB_UHINT_HSOFI_MASK                         0x00000020
#define AVR32_USB_UHINT_HSOFI_OFFSET                                5
#define AVR32_USB_UHINT_HSOFI_SIZE                                  1
#define AVR32_USB_UHINT_HWUPI                                       6
#define AVR32_USB_UHINT_HWUPI_MASK                         0x00000040
#define AVR32_USB_UHINT_HWUPI_OFFSET                                6
#define AVR32_USB_UHINT_HWUPI_SIZE                                  1
#define AVR32_USB_UHINT_MASK                               0xfe007f7f
#define AVR32_USB_UHINT_P0INT                                       8
#define AVR32_USB_UHINT_P0INT_MASK                         0x00000100
#define AVR32_USB_UHINT_P0INT_OFFSET                                8
#define AVR32_USB_UHINT_P0INT_SIZE                                  1
#define AVR32_USB_UHINT_P1INT                                       9
#define AVR32_USB_UHINT_P1INT_MASK                         0x00000200
#define AVR32_USB_UHINT_P1INT_OFFSET                                9
#define AVR32_USB_UHINT_P1INT_SIZE                                  1
#define AVR32_USB_UHINT_P2INT                                      10
#define AVR32_USB_UHINT_P2INT_MASK                         0x00000400
#define AVR32_USB_UHINT_P2INT_OFFSET                               10
#define AVR32_USB_UHINT_P2INT_SIZE                                  1
#define AVR32_USB_UHINT_P3INT                                      11
#define AVR32_USB_UHINT_P3INT_MASK                         0x00000800
#define AVR32_USB_UHINT_P3INT_OFFSET                               11
#define AVR32_USB_UHINT_P3INT_SIZE                                  1
#define AVR32_USB_UHINT_P4INT                                      12
#define AVR32_USB_UHINT_P4INT_MASK                         0x00001000
#define AVR32_USB_UHINT_P4INT_OFFSET                               12
#define AVR32_USB_UHINT_P4INT_SIZE                                  1
#define AVR32_USB_UHINT_P5INT                                      13
#define AVR32_USB_UHINT_P5INT_MASK                         0x00002000
#define AVR32_USB_UHINT_P5INT_OFFSET                               13
#define AVR32_USB_UHINT_P5INT_SIZE                                  1
#define AVR32_USB_UHINT_P6INT                                      14
#define AVR32_USB_UHINT_P6INT_MASK                         0x00004000
#define AVR32_USB_UHINT_P6INT_OFFSET                               14
#define AVR32_USB_UHINT_P6INT_SIZE                                  1
#define AVR32_USB_UHINT_RESETVALUE                         0x00000000
#define AVR32_USB_UHINT_RSMEDI                                      3
#define AVR32_USB_UHINT_RSMEDI_MASK                        0x00000008
#define AVR32_USB_UHINT_RSMEDI_OFFSET                               3
#define AVR32_USB_UHINT_RSMEDI_SIZE                                 1
#define AVR32_USB_UHINT_RSTI                                        2
#define AVR32_USB_UHINT_RSTI_MASK                          0x00000004
#define AVR32_USB_UHINT_RSTI_OFFSET                                 2
#define AVR32_USB_UHINT_RSTI_SIZE                                   1
#define AVR32_USB_UHINT_RXRSMI                                      4
#define AVR32_USB_UHINT_RXRSMI_MASK                        0x00000010
#define AVR32_USB_UHINT_RXRSMI_OFFSET                               4
#define AVR32_USB_UHINT_RXRSMI_SIZE                                 1
#define AVR32_USB_UIDE                                             24
#define AVR32_USB_UIDE_MASK                                0x01000000
#define AVR32_USB_UIDE_OFFSET                                      24
#define AVR32_USB_UIDE_SIZE                                         1
#define AVR32_USB_UIMOD                                            25
#define AVR32_USB_UIMOD_MASK                               0x02000000
#define AVR32_USB_UIMOD_OFFSET                                     25
#define AVR32_USB_UIMOD_SIZE                                        1
#define AVR32_USB_UNAME1                                   0x00000824
#define AVR32_USB_UNAME1_MASK                              0xffffffff
#define AVR32_USB_UNAME1_OFFSET                                     0
#define AVR32_USB_UNAME1_RESETVALUE                        0x48555342
#define AVR32_USB_UNAME1_SIZE                                      32
#define AVR32_USB_UNAME1_UNAME1                                     0
#define AVR32_USB_UNAME1_UNAME1_MASK                       0xffffffff
#define AVR32_USB_UNAME1_UNAME1_OFFSET                              0
#define AVR32_USB_UNAME1_UNAME1_SIZE                               32
#define AVR32_USB_UNAME2                                   0x00000828
#define AVR32_USB_UNAME2_MASK                              0xffffffff
#define AVR32_USB_UNAME2_OFFSET                                     0
#define AVR32_USB_UNAME2_RESETVALUE                        0x004f5447
#define AVR32_USB_UNAME2_SIZE                                      32
#define AVR32_USB_UNAME2_UNAME2                                     0
#define AVR32_USB_UNAME2_UNAME2_MASK                       0xffffffff
#define AVR32_USB_UNAME2_UNAME2_OFFSET                              0
#define AVR32_USB_UNAME2_UNAME2_SIZE                               32
#define AVR32_USB_UNLOCK                                           22
#define AVR32_USB_UNLOCK_MASK                              0x00400000
#define AVR32_USB_UNLOCK_OFFSET                                    22
#define AVR32_USB_UNLOCK_SIZE                                       1
#define AVR32_USB_UPCFG0                                   0x00000500
#define AVR32_USB_UPCFG0_ALLOC                                      1
#define AVR32_USB_UPCFG0_ALLOC_MASK                        0x00000002
#define AVR32_USB_UPCFG0_ALLOC_OFFSET                               1
#define AVR32_USB_UPCFG0_ALLOC_SIZE                                 1
#define AVR32_USB_UPCFG0_AUTOSW                                    10
#define AVR32_USB_UPCFG0_AUTOSW_MASK                       0x00000400
#define AVR32_USB_UPCFG0_AUTOSW_OFFSET                             10
#define AVR32_USB_UPCFG0_AUTOSW_SIZE                                1
#define AVR32_USB_UPCFG0_DATASIZERDWR                              22
#define AVR32_USB_UPCFG0_DATASIZERDWR_MASK                 0x00c00000
#define AVR32_USB_UPCFG0_DATASIZERDWR_OFFSET                       22
#define AVR32_USB_UPCFG0_DATASIZERDWR_SIZE                          2
#define AVR32_USB_UPCFG0_INTFRQ                                    24
#define AVR32_USB_UPCFG0_INTFRQ_MASK                       0xff000000
#define AVR32_USB_UPCFG0_INTFRQ_OFFSET                             24
#define AVR32_USB_UPCFG0_INTFRQ_SIZE                                8
#define AVR32_USB_UPCFG0_MASK                              0xffdf377e
#define AVR32_USB_UPCFG0_PBK                                        2
#define AVR32_USB_UPCFG0_PBK_DOUBLE                        0x00000001
#define AVR32_USB_UPCFG0_PBK_MASK                          0x0000000c
#define AVR32_USB_UPCFG0_PBK_OFFSET                                 2
#define AVR32_USB_UPCFG0_PBK_SINGLE                        0x00000000
#define AVR32_USB_UPCFG0_PBK_SIZE                                   2
#define AVR32_USB_UPCFG0_PBK_TRIPLE                        0x00000002
#define AVR32_USB_UPCFG0_PEPNUM                                    16
#define AVR32_USB_UPCFG0_PEPNUM_MASK                       0x000f0000
#define AVR32_USB_UPCFG0_PEPNUM_OFFSET                             16
#define AVR32_USB_UPCFG0_PEPNUM_SIZE                                4
#define AVR32_USB_UPCFG0_PINGEN                                    20
#define AVR32_USB_UPCFG0_PINGEN_MASK                       0x00100000
#define AVR32_USB_UPCFG0_PINGEN_OFFSET                             20
#define AVR32_USB_UPCFG0_PINGEN_SIZE                                1
#define AVR32_USB_UPCFG0_PSIZE                                      4
#define AVR32_USB_UPCFG0_PSIZE_1024                        0x00000007
#define AVR32_USB_UPCFG0_PSIZE_128                         0x00000004
#define AVR32_USB_UPCFG0_PSIZE_16                          0x00000001
#define AVR32_USB_UPCFG0_PSIZE_256                         0x00000005
#define AVR32_USB_UPCFG0_PSIZE_32                          0x00000002
#define AVR32_USB_UPCFG0_PSIZE_512                         0x00000006
#define AVR32_USB_UPCFG0_PSIZE_64                          0x00000003
#define AVR32_USB_UPCFG0_PSIZE_8                           0x00000000
#define AVR32_USB_UPCFG0_PSIZE_MASK                        0x00000070
#define AVR32_USB_UPCFG0_PSIZE_OFFSET                               4
#define AVR32_USB_UPCFG0_PSIZE_SIZE                                 3
#define AVR32_USB_UPCFG0_PTOKEN                                     8
#define AVR32_USB_UPCFG0_PTOKEN_IN                         0x00000001
#define AVR32_USB_UPCFG0_PTOKEN_MASK                       0x00000300
#define AVR32_USB_UPCFG0_PTOKEN_OFFSET                              8
#define AVR32_USB_UPCFG0_PTOKEN_OUT                        0x00000002
#define AVR32_USB_UPCFG0_PTOKEN_SETUP                      0x00000000
#define AVR32_USB_UPCFG0_PTOKEN_SIZE                                2
#define AVR32_USB_UPCFG0_PTYPE                                     12
#define AVR32_USB_UPCFG0_PTYPE_BULK                        0x00000002
#define AVR32_USB_UPCFG0_PTYPE_CONTROL                     0x00000000
#define AVR32_USB_UPCFG0_PTYPE_INTERRUPT                   0x00000003
#define AVR32_USB_UPCFG0_PTYPE_ISOCHRONOUS                 0x00000001
#define AVR32_USB_UPCFG0_PTYPE_MASK                        0x00003000
#define AVR32_USB_UPCFG0_PTYPE_OFFSET                              12
#define AVR32_USB_UPCFG0_PTYPE_SIZE                                 2
#define AVR32_USB_UPCFG0_RESETVALUE                        0x00000000
#define AVR32_USB_UPCFG1                                   0x00000504
#define AVR32_USB_UPCFG1_ALLOC                                      1
#define AVR32_USB_UPCFG1_ALLOC_MASK                        0x00000002
#define AVR32_USB_UPCFG1_ALLOC_OFFSET                               1
#define AVR32_USB_UPCFG1_ALLOC_SIZE                                 1
#define AVR32_USB_UPCFG1_AUTOSW                                    10
#define AVR32_USB_UPCFG1_AUTOSW_MASK                       0x00000400
#define AVR32_USB_UPCFG1_AUTOSW_OFFSET                             10
#define AVR32_USB_UPCFG1_AUTOSW_SIZE                                1
#define AVR32_USB_UPCFG1_DATASIZERDWR                              22
#define AVR32_USB_UPCFG1_DATASIZERDWR_MASK                 0x00c00000
#define AVR32_USB_UPCFG1_DATASIZERDWR_OFFSET                       22
#define AVR32_USB_UPCFG1_DATASIZERDWR_SIZE                          2
#define AVR32_USB_UPCFG1_INTFRQ                                    24
#define AVR32_USB_UPCFG1_INTFRQ_MASK                       0xff000000
#define AVR32_USB_UPCFG1_INTFRQ_OFFSET                             24
#define AVR32_USB_UPCFG1_INTFRQ_SIZE                                8
#define AVR32_USB_UPCFG1_MASK                              0xffdf377e
#define AVR32_USB_UPCFG1_PBK                                        2
#define AVR32_USB_UPCFG1_PBK_DOUBLE                        0x00000001
#define AVR32_USB_UPCFG1_PBK_MASK                          0x0000000c
#define AVR32_USB_UPCFG1_PBK_OFFSET                                 2
#define AVR32_USB_UPCFG1_PBK_SINGLE                        0x00000000
#define AVR32_USB_UPCFG1_PBK_SIZE                                   2
#define AVR32_USB_UPCFG1_PBK_TRIPLE                        0x00000002
#define AVR32_USB_UPCFG1_PEPNUM                                    16
#define AVR32_USB_UPCFG1_PEPNUM_MASK                       0x000f0000
#define AVR32_USB_UPCFG1_PEPNUM_OFFSET                             16
#define AVR32_USB_UPCFG1_PEPNUM_SIZE                                4
#define AVR32_USB_UPCFG1_PINGEN                                    20
#define AVR32_USB_UPCFG1_PINGEN_MASK                       0x00100000
#define AVR32_USB_UPCFG1_PINGEN_OFFSET                             20
#define AVR32_USB_UPCFG1_PINGEN_SIZE                                1
#define AVR32_USB_UPCFG1_PSIZE                                      4
#define AVR32_USB_UPCFG1_PSIZE_1024                        0x00000007
#define AVR32_USB_UPCFG1_PSIZE_128                         0x00000004
#define AVR32_USB_UPCFG1_PSIZE_16                          0x00000001
#define AVR32_USB_UPCFG1_PSIZE_256                         0x00000005
#define AVR32_USB_UPCFG1_PSIZE_32                          0x00000002
#define AVR32_USB_UPCFG1_PSIZE_512                         0x00000006
#define AVR32_USB_UPCFG1_PSIZE_64                          0x00000003
#define AVR32_USB_UPCFG1_PSIZE_8                           0x00000000
#define AVR32_USB_UPCFG1_PSIZE_MASK                        0x00000070
#define AVR32_USB_UPCFG1_PSIZE_OFFSET                               4
#define AVR32_USB_UPCFG1_PSIZE_SIZE                                 3
#define AVR32_USB_UPCFG1_PTOKEN                                     8
#define AVR32_USB_UPCFG1_PTOKEN_IN                         0x00000001
#define AVR32_USB_UPCFG1_PTOKEN_MASK                       0x00000300
#define AVR32_USB_UPCFG1_PTOKEN_OFFSET                              8
#define AVR32_USB_UPCFG1_PTOKEN_OUT                        0x00000002
#define AVR32_USB_UPCFG1_PTOKEN_SETUP                      0x00000000
#define AVR32_USB_UPCFG1_PTOKEN_SIZE                                2
#define AVR32_USB_UPCFG1_PTYPE                                     12
#define AVR32_USB_UPCFG1_PTYPE_BULK                        0x00000002
#define AVR32_USB_UPCFG1_PTYPE_CONTROL                     0x00000000
#define AVR32_USB_UPCFG1_PTYPE_INTERRUPT                   0x00000003
#define AVR32_USB_UPCFG1_PTYPE_ISOCHRONOUS                 0x00000001
#define AVR32_USB_UPCFG1_PTYPE_MASK                        0x00003000
#define AVR32_USB_UPCFG1_PTYPE_OFFSET                              12
#define AVR32_USB_UPCFG1_PTYPE_SIZE                                 2
#define AVR32_USB_UPCFG1_RESETVALUE                        0x00000000
#define AVR32_USB_UPCFG2                                   0x00000508
#define AVR32_USB_UPCFG2_ALLOC                                      1
#define AVR32_USB_UPCFG2_ALLOC_MASK                        0x00000002
#define AVR32_USB_UPCFG2_ALLOC_OFFSET                               1
#define AVR32_USB_UPCFG2_ALLOC_SIZE                                 1
#define AVR32_USB_UPCFG2_AUTOSW                                    10
#define AVR32_USB_UPCFG2_AUTOSW_MASK                       0x00000400
#define AVR32_USB_UPCFG2_AUTOSW_OFFSET                             10
#define AVR32_USB_UPCFG2_AUTOSW_SIZE                                1
#define AVR32_USB_UPCFG2_DATASIZERDWR                              22
#define AVR32_USB_UPCFG2_DATASIZERDWR_MASK                 0x00c00000
#define AVR32_USB_UPCFG2_DATASIZERDWR_OFFSET                       22
#define AVR32_USB_UPCFG2_DATASIZERDWR_SIZE                          2
#define AVR32_USB_UPCFG2_INTFRQ                                    24
#define AVR32_USB_UPCFG2_INTFRQ_MASK                       0xff000000
#define AVR32_USB_UPCFG2_INTFRQ_OFFSET                             24
#define AVR32_USB_UPCFG2_INTFRQ_SIZE                                8
#define AVR32_USB_UPCFG2_MASK                              0xffdf377e
#define AVR32_USB_UPCFG2_PBK                                        2
#define AVR32_USB_UPCFG2_PBK_DOUBLE                        0x00000001
#define AVR32_USB_UPCFG2_PBK_MASK                          0x0000000c
#define AVR32_USB_UPCFG2_PBK_OFFSET                                 2
#define AVR32_USB_UPCFG2_PBK_SINGLE                        0x00000000
#define AVR32_USB_UPCFG2_PBK_SIZE                                   2
#define AVR32_USB_UPCFG2_PBK_TRIPLE                        0x00000002
#define AVR32_USB_UPCFG2_PEPNUM                                    16
#define AVR32_USB_UPCFG2_PEPNUM_MASK                       0x000f0000
#define AVR32_USB_UPCFG2_PEPNUM_OFFSET                             16
#define AVR32_USB_UPCFG2_PEPNUM_SIZE                                4
#define AVR32_USB_UPCFG2_PINGEN                                    20
#define AVR32_USB_UPCFG2_PINGEN_MASK                       0x00100000
#define AVR32_USB_UPCFG2_PINGEN_OFFSET                             20
#define AVR32_USB_UPCFG2_PINGEN_SIZE                                1
#define AVR32_USB_UPCFG2_PSIZE                                      4
#define AVR32_USB_UPCFG2_PSIZE_1024                        0x00000007
#define AVR32_USB_UPCFG2_PSIZE_128                         0x00000004
#define AVR32_USB_UPCFG2_PSIZE_16                          0x00000001
#define AVR32_USB_UPCFG2_PSIZE_256                         0x00000005
#define AVR32_USB_UPCFG2_PSIZE_32                          0x00000002
#define AVR32_USB_UPCFG2_PSIZE_512                         0x00000006
#define AVR32_USB_UPCFG2_PSIZE_64                          0x00000003
#define AVR32_USB_UPCFG2_PSIZE_8                           0x00000000
#define AVR32_USB_UPCFG2_PSIZE_MASK                        0x00000070
#define AVR32_USB_UPCFG2_PSIZE_OFFSET                               4
#define AVR32_USB_UPCFG2_PSIZE_SIZE                                 3
#define AVR32_USB_UPCFG2_PTOKEN                                     8
#define AVR32_USB_UPCFG2_PTOKEN_IN                         0x00000001
#define AVR32_USB_UPCFG2_PTOKEN_MASK                       0x00000300
#define AVR32_USB_UPCFG2_PTOKEN_OFFSET                              8
#define AVR32_USB_UPCFG2_PTOKEN_OUT                        0x00000002
#define AVR32_USB_UPCFG2_PTOKEN_SETUP                      0x00000000
#define AVR32_USB_UPCFG2_PTOKEN_SIZE                                2
#define AVR32_USB_UPCFG2_PTYPE                                     12
#define AVR32_USB_UPCFG2_PTYPE_BULK                        0x00000002
#define AVR32_USB_UPCFG2_PTYPE_CONTROL                     0x00000000
#define AVR32_USB_UPCFG2_PTYPE_INTERRUPT                   0x00000003
#define AVR32_USB_UPCFG2_PTYPE_ISOCHRONOUS                 0x00000001
#define AVR32_USB_UPCFG2_PTYPE_MASK                        0x00003000
#define AVR32_USB_UPCFG2_PTYPE_OFFSET                              12
#define AVR32_USB_UPCFG2_PTYPE_SIZE                                 2
#define AVR32_USB_UPCFG2_RESETVALUE                        0x00000000
#define AVR32_USB_UPCFG3                                   0x0000050c
#define AVR32_USB_UPCFG3_ALLOC                                      1
#define AVR32_USB_UPCFG3_ALLOC_MASK                        0x00000002
#define AVR32_USB_UPCFG3_ALLOC_OFFSET                               1
#define AVR32_USB_UPCFG3_ALLOC_SIZE                                 1
#define AVR32_USB_UPCFG3_AUTOSW                                    10
#define AVR32_USB_UPCFG3_AUTOSW_MASK                       0x00000400
#define AVR32_USB_UPCFG3_AUTOSW_OFFSET                             10
#define AVR32_USB_UPCFG3_AUTOSW_SIZE                                1
#define AVR32_USB_UPCFG3_DATASIZERDWR                              22
#define AVR32_USB_UPCFG3_DATASIZERDWR_MASK                 0x00c00000
#define AVR32_USB_UPCFG3_DATASIZERDWR_OFFSET                       22
#define AVR32_USB_UPCFG3_DATASIZERDWR_SIZE                          2
#define AVR32_USB_UPCFG3_INTFRQ                                    24
#define AVR32_USB_UPCFG3_INTFRQ_MASK                       0xff000000
#define AVR32_USB_UPCFG3_INTFRQ_OFFSET                             24
#define AVR32_USB_UPCFG3_INTFRQ_SIZE                                8
#define AVR32_USB_UPCFG3_MASK                              0xffdf377e
#define AVR32_USB_UPCFG3_PBK                                        2
#define AVR32_USB_UPCFG3_PBK_DOUBLE                        0x00000001
#define AVR32_USB_UPCFG3_PBK_MASK                          0x0000000c
#define AVR32_USB_UPCFG3_PBK_OFFSET                                 2
#define AVR32_USB_UPCFG3_PBK_SINGLE                        0x00000000
#define AVR32_USB_UPCFG3_PBK_SIZE                                   2
#define AVR32_USB_UPCFG3_PBK_TRIPLE                        0x00000002
#define AVR32_USB_UPCFG3_PEPNUM                                    16
#define AVR32_USB_UPCFG3_PEPNUM_MASK                       0x000f0000
#define AVR32_USB_UPCFG3_PEPNUM_OFFSET                             16
#define AVR32_USB_UPCFG3_PEPNUM_SIZE                                4
#define AVR32_USB_UPCFG3_PINGEN                                    20
#define AVR32_USB_UPCFG3_PINGEN_MASK                       0x00100000
#define AVR32_USB_UPCFG3_PINGEN_OFFSET                             20
#define AVR32_USB_UPCFG3_PINGEN_SIZE                                1
#define AVR32_USB_UPCFG3_PSIZE                                      4
#define AVR32_USB_UPCFG3_PSIZE_MASK                        0x00000070
#define AVR32_USB_UPCFG3_PSIZE_OFFSET                               4
#define AVR32_USB_UPCFG3_PSIZE_SIZE                                 3
#define AVR32_USB_UPCFG3_PTOKEN                                     8
#define AVR32_USB_UPCFG3_PTOKEN_IN                         0x00000001
#define AVR32_USB_UPCFG3_PTOKEN_MASK                       0x00000300
#define AVR32_USB_UPCFG3_PTOKEN_OFFSET                              8
#define AVR32_USB_UPCFG3_PTOKEN_OUT                        0x00000002
#define AVR32_USB_UPCFG3_PTOKEN_SETUP                      0x00000000
#define AVR32_USB_UPCFG3_PTOKEN_SIZE                                2
#define AVR32_USB_UPCFG3_PTYPE                                     12
#define AVR32_USB_UPCFG3_PTYPE_BULK                        0x00000002
#define AVR32_USB_UPCFG3_PTYPE_CONTROL                     0x00000000
#define AVR32_USB_UPCFG3_PTYPE_INTERRUPT                   0x00000003
#define AVR32_USB_UPCFG3_PTYPE_ISOCHRONOUS                 0x00000001
#define AVR32_USB_UPCFG3_PTYPE_MASK                        0x00003000
#define AVR32_USB_UPCFG3_PTYPE_OFFSET                              12
#define AVR32_USB_UPCFG3_PTYPE_SIZE                                 2
#define AVR32_USB_UPCFG3_RESETVALUE                        0x00000000
#define AVR32_USB_UPCFG4                                   0x00000510
#define AVR32_USB_UPCFG4_ALLOC                                      1
#define AVR32_USB_UPCFG4_ALLOC_MASK                        0x00000002
#define AVR32_USB_UPCFG4_ALLOC_OFFSET                               1
#define AVR32_USB_UPCFG4_ALLOC_SIZE                                 1
#define AVR32_USB_UPCFG4_AUTOSW                                    10
#define AVR32_USB_UPCFG4_AUTOSW_MASK                       0x00000400
#define AVR32_USB_UPCFG4_AUTOSW_OFFSET                             10
#define AVR32_USB_UPCFG4_AUTOSW_SIZE                                1
#define AVR32_USB_UPCFG4_DATASIZERDWR                              22
#define AVR32_USB_UPCFG4_DATASIZERDWR_MASK                 0x00c00000
#define AVR32_USB_UPCFG4_DATASIZERDWR_OFFSET                       22
#define AVR32_USB_UPCFG4_DATASIZERDWR_SIZE                          2
#define AVR32_USB_UPCFG4_INTFRQ                                    24
#define AVR32_USB_UPCFG4_INTFRQ_MASK                       0xff000000
#define AVR32_USB_UPCFG4_INTFRQ_OFFSET                             24
#define AVR32_USB_UPCFG4_INTFRQ_SIZE                                8
#define AVR32_USB_UPCFG4_MASK                              0xffdf377e
#define AVR32_USB_UPCFG4_PBK                                        2
#define AVR32_USB_UPCFG4_PBK_DOUBLE                        0x00000001
#define AVR32_USB_UPCFG4_PBK_MASK                          0x0000000c
#define AVR32_USB_UPCFG4_PBK_OFFSET                                 2
#define AVR32_USB_UPCFG4_PBK_SINGLE                        0x00000000
#define AVR32_USB_UPCFG4_PBK_SIZE                                   2
#define AVR32_USB_UPCFG4_PBK_TRIPLE                        0x00000002
#define AVR32_USB_UPCFG4_PEPNUM                                    16
#define AVR32_USB_UPCFG4_PEPNUM_MASK                       0x000f0000
#define AVR32_USB_UPCFG4_PEPNUM_OFFSET                             16
#define AVR32_USB_UPCFG4_PEPNUM_SIZE                                4
#define AVR32_USB_UPCFG4_PINGEN                                    20
#define AVR32_USB_UPCFG4_PINGEN_MASK                       0x00100000
#define AVR32_USB_UPCFG4_PINGEN_OFFSET                             20
#define AVR32_USB_UPCFG4_PINGEN_SIZE                                1
#define AVR32_USB_UPCFG4_PSIZE                                      4
#define AVR32_USB_UPCFG4_PSIZE_1024                        0x00000007
#define AVR32_USB_UPCFG4_PSIZE_128                         0x00000004
#define AVR32_USB_UPCFG4_PSIZE_16                          0x00000001
#define AVR32_USB_UPCFG4_PSIZE_256                         0x00000005
#define AVR32_USB_UPCFG4_PSIZE_32                          0x00000002
#define AVR32_USB_UPCFG4_PSIZE_512                         0x00000006
#define AVR32_USB_UPCFG4_PSIZE_64                          0x00000003
#define AVR32_USB_UPCFG4_PSIZE_8                           0x00000000
#define AVR32_USB_UPCFG4_PSIZE_MASK                        0x00000070
#define AVR32_USB_UPCFG4_PSIZE_OFFSET                               4
#define AVR32_USB_UPCFG4_PSIZE_SIZE                                 3
#define AVR32_USB_UPCFG4_PTOKEN                                     8
#define AVR32_USB_UPCFG4_PTOKEN_IN                         0x00000001
#define AVR32_USB_UPCFG4_PTOKEN_MASK                       0x00000300
#define AVR32_USB_UPCFG4_PTOKEN_OFFSET                              8
#define AVR32_USB_UPCFG4_PTOKEN_OUT                        0x00000002
#define AVR32_USB_UPCFG4_PTOKEN_SETUP                      0x00000000
#define AVR32_USB_UPCFG4_PTOKEN_SIZE                                2
#define AVR32_USB_UPCFG4_PTYPE                                     12
#define AVR32_USB_UPCFG4_PTYPE_BULK                        0x00000002
#define AVR32_USB_UPCFG4_PTYPE_CONTROL                     0x00000000
#define AVR32_USB_UPCFG4_PTYPE_INTERRUPT                   0x00000003
#define AVR32_USB_UPCFG4_PTYPE_ISOCHRONOUS                 0x00000001
#define AVR32_USB_UPCFG4_PTYPE_MASK                        0x00003000
#define AVR32_USB_UPCFG4_PTYPE_OFFSET                              12
#define AVR32_USB_UPCFG4_PTYPE_SIZE                                 2
#define AVR32_USB_UPCFG4_RESETVALUE                        0x00000000
#define AVR32_USB_UPCFG5                                   0x00000514
#define AVR32_USB_UPCFG5_ALLOC                                      1
#define AVR32_USB_UPCFG5_ALLOC_MASK                        0x00000002
#define AVR32_USB_UPCFG5_ALLOC_OFFSET                               1
#define AVR32_USB_UPCFG5_ALLOC_SIZE                                 1
#define AVR32_USB_UPCFG5_AUTOSW                                    10
#define AVR32_USB_UPCFG5_AUTOSW_MASK                       0x00000400
#define AVR32_USB_UPCFG5_AUTOSW_OFFSET                             10
#define AVR32_USB_UPCFG5_AUTOSW_SIZE                                1
#define AVR32_USB_UPCFG5_DATASIZERDWR                              22
#define AVR32_USB_UPCFG5_DATASIZERDWR_MASK                 0x00c00000
#define AVR32_USB_UPCFG5_DATASIZERDWR_OFFSET                       22
#define AVR32_USB_UPCFG5_DATASIZERDWR_SIZE                          2
#define AVR32_USB_UPCFG5_INTFRQ                                    24
#define AVR32_USB_UPCFG5_INTFRQ_MASK                       0xff000000
#define AVR32_USB_UPCFG5_INTFRQ_OFFSET                             24
#define AVR32_USB_UPCFG5_INTFRQ_SIZE                                8
#define AVR32_USB_UPCFG5_MASK                              0xffdf377e
#define AVR32_USB_UPCFG5_PBK                                        2
#define AVR32_USB_UPCFG5_PBK_DOUBLE                        0x00000001
#define AVR32_USB_UPCFG5_PBK_MASK                          0x0000000c
#define AVR32_USB_UPCFG5_PBK_OFFSET                                 2
#define AVR32_USB_UPCFG5_PBK_SINGLE                        0x00000000
#define AVR32_USB_UPCFG5_PBK_SIZE                                   2
#define AVR32_USB_UPCFG5_PBK_TRIPLE                        0x00000002
#define AVR32_USB_UPCFG5_PEPNUM                                    16
#define AVR32_USB_UPCFG5_PEPNUM_MASK                       0x000f0000
#define AVR32_USB_UPCFG5_PEPNUM_OFFSET                             16
#define AVR32_USB_UPCFG5_PEPNUM_SIZE                                4
#define AVR32_USB_UPCFG5_PINGEN                                    20
#define AVR32_USB_UPCFG5_PINGEN_MASK                       0x00100000
#define AVR32_USB_UPCFG5_PINGEN_OFFSET                             20
#define AVR32_USB_UPCFG5_PINGEN_SIZE                                1
#define AVR32_USB_UPCFG5_PSIZE                                      4
#define AVR32_USB_UPCFG5_PSIZE_1024                        0x00000007
#define AVR32_USB_UPCFG5_PSIZE_128                         0x00000004
#define AVR32_USB_UPCFG5_PSIZE_16                          0x00000001
#define AVR32_USB_UPCFG5_PSIZE_256                         0x00000005
#define AVR32_USB_UPCFG5_PSIZE_32                          0x00000002
#define AVR32_USB_UPCFG5_PSIZE_512                         0x00000006
#define AVR32_USB_UPCFG5_PSIZE_64                          0x00000003
#define AVR32_USB_UPCFG5_PSIZE_8                           0x00000000
#define AVR32_USB_UPCFG5_PSIZE_MASK                        0x00000070
#define AVR32_USB_UPCFG5_PSIZE_OFFSET                               4
#define AVR32_USB_UPCFG5_PSIZE_SIZE                                 3
#define AVR32_USB_UPCFG5_PTOKEN                                     8
#define AVR32_USB_UPCFG5_PTOKEN_IN                         0x00000001
#define AVR32_USB_UPCFG5_PTOKEN_MASK                       0x00000300
#define AVR32_USB_UPCFG5_PTOKEN_OFFSET                              8
#define AVR32_USB_UPCFG5_PTOKEN_OUT                        0x00000002
#define AVR32_USB_UPCFG5_PTOKEN_SETUP                      0x00000000
#define AVR32_USB_UPCFG5_PTOKEN_SIZE                                2
#define AVR32_USB_UPCFG5_PTYPE                                     12
#define AVR32_USB_UPCFG5_PTYPE_BULK                        0x00000002
#define AVR32_USB_UPCFG5_PTYPE_CONTROL                     0x00000000
#define AVR32_USB_UPCFG5_PTYPE_INTERRUPT                   0x00000003
#define AVR32_USB_UPCFG5_PTYPE_ISOCHRONOUS                 0x00000001
#define AVR32_USB_UPCFG5_PTYPE_MASK                        0x00003000
#define AVR32_USB_UPCFG5_PTYPE_OFFSET                              12
#define AVR32_USB_UPCFG5_PTYPE_SIZE                                 2
#define AVR32_USB_UPCFG5_RESETVALUE                        0x00000000
#define AVR32_USB_UPCFG6                                   0x00000518
#define AVR32_USB_UPCFG6_ALLOC                                      1
#define AVR32_USB_UPCFG6_ALLOC_MASK                        0x00000002
#define AVR32_USB_UPCFG6_ALLOC_OFFSET                               1
#define AVR32_USB_UPCFG6_ALLOC_SIZE                                 1
#define AVR32_USB_UPCFG6_AUTOSW                                    10
#define AVR32_USB_UPCFG6_AUTOSW_MASK                       0x00000400
#define AVR32_USB_UPCFG6_AUTOSW_OFFSET                             10
#define AVR32_USB_UPCFG6_AUTOSW_SIZE                                1
#define AVR32_USB_UPCFG6_DATASIZERDWR                              22
#define AVR32_USB_UPCFG6_DATASIZERDWR_MASK                 0x00c00000
#define AVR32_USB_UPCFG6_DATASIZERDWR_OFFSET                       22
#define AVR32_USB_UPCFG6_DATASIZERDWR_SIZE                          2
#define AVR32_USB_UPCFG6_INTFRQ                                    24
#define AVR32_USB_UPCFG6_INTFRQ_MASK                       0xff000000
#define AVR32_USB_UPCFG6_INTFRQ_OFFSET                             24
#define AVR32_USB_UPCFG6_INTFRQ_SIZE                                8
#define AVR32_USB_UPCFG6_MASK                              0xffdf377e
#define AVR32_USB_UPCFG6_PBK                                        2
#define AVR32_USB_UPCFG6_PBK_DOUBLE                        0x00000001
#define AVR32_USB_UPCFG6_PBK_MASK                          0x0000000c
#define AVR32_USB_UPCFG6_PBK_OFFSET                                 2
#define AVR32_USB_UPCFG6_PBK_SINGLE                        0x00000000
#define AVR32_USB_UPCFG6_PBK_SIZE                                   2
#define AVR32_USB_UPCFG6_PBK_TRIPLE                        0x00000002
#define AVR32_USB_UPCFG6_PEPNUM                                    16
#define AVR32_USB_UPCFG6_PEPNUM_MASK                       0x000f0000
#define AVR32_USB_UPCFG6_PEPNUM_OFFSET                             16
#define AVR32_USB_UPCFG6_PEPNUM_SIZE                                4
#define AVR32_USB_UPCFG6_PINGEN                                    20
#define AVR32_USB_UPCFG6_PINGEN_MASK                       0x00100000
#define AVR32_USB_UPCFG6_PINGEN_OFFSET                             20
#define AVR32_USB_UPCFG6_PINGEN_SIZE                                1
#define AVR32_USB_UPCFG6_PSIZE                                      4
#define AVR32_USB_UPCFG6_PSIZE_1024                        0x00000007
#define AVR32_USB_UPCFG6_PSIZE_128                         0x00000004
#define AVR32_USB_UPCFG6_PSIZE_16                          0x00000001
#define AVR32_USB_UPCFG6_PSIZE_256                         0x00000005
#define AVR32_USB_UPCFG6_PSIZE_32                          0x00000002
#define AVR32_USB_UPCFG6_PSIZE_512                         0x00000006
#define AVR32_USB_UPCFG6_PSIZE_64                          0x00000003
#define AVR32_USB_UPCFG6_PSIZE_8                           0x00000000
#define AVR32_USB_UPCFG6_PSIZE_MASK                        0x00000070
#define AVR32_USB_UPCFG6_PSIZE_OFFSET                               4
#define AVR32_USB_UPCFG6_PSIZE_SIZE                                 3
#define AVR32_USB_UPCFG6_PTOKEN                                     8
#define AVR32_USB_UPCFG6_PTOKEN_IN                         0x00000001
#define AVR32_USB_UPCFG6_PTOKEN_MASK                       0x00000300
#define AVR32_USB_UPCFG6_PTOKEN_OFFSET                              8
#define AVR32_USB_UPCFG6_PTOKEN_OUT                        0x00000002
#define AVR32_USB_UPCFG6_PTOKEN_SETUP                      0x00000000
#define AVR32_USB_UPCFG6_PTOKEN_SIZE                                2
#define AVR32_USB_UPCFG6_PTYPE                                     12
#define AVR32_USB_UPCFG6_PTYPE_BULK                        0x00000002
#define AVR32_USB_UPCFG6_PTYPE_CONTROL                     0x00000000
#define AVR32_USB_UPCFG6_PTYPE_INTERRUPT                   0x00000003
#define AVR32_USB_UPCFG6_PTYPE_ISOCHRONOUS                 0x00000001
#define AVR32_USB_UPCFG6_PTYPE_MASK                        0x00003000
#define AVR32_USB_UPCFG6_PTYPE_OFFSET                              12
#define AVR32_USB_UPCFG6_PTYPE_SIZE                                 2
#define AVR32_USB_UPCFG6_RESETVALUE                        0x00000000
#define AVR32_USB_UPCFG7                                   0x0000051c
#define AVR32_USB_UPCFG7_ALLOC                                      1
#define AVR32_USB_UPCFG7_ALLOC_MASK                        0x00000002
#define AVR32_USB_UPCFG7_ALLOC_OFFSET                               1
#define AVR32_USB_UPCFG7_ALLOC_SIZE                                 1
#define AVR32_USB_UPCFG7_AUTOSW                                    10
#define AVR32_USB_UPCFG7_AUTOSW_MASK                       0x00000400
#define AVR32_USB_UPCFG7_AUTOSW_OFFSET                             10
#define AVR32_USB_UPCFG7_AUTOSW_SIZE                                1
#define AVR32_USB_UPCFG7_DATASIZERDWR                              22
#define AVR32_USB_UPCFG7_DATASIZERDWR_MASK                 0x00c00000
#define AVR32_USB_UPCFG7_DATASIZERDWR_OFFSET                       22
#define AVR32_USB_UPCFG7_DATASIZERDWR_SIZE                          2
#define AVR32_USB_UPCFG7_INTFRQ                                    24
#define AVR32_USB_UPCFG7_INTFRQ_MASK                       0xff000000
#define AVR32_USB_UPCFG7_INTFRQ_OFFSET                             24
#define AVR32_USB_UPCFG7_INTFRQ_SIZE                                8
#define AVR32_USB_UPCFG7_MASK                              0xffdf377e
#define AVR32_USB_UPCFG7_PBK                                        2
#define AVR32_USB_UPCFG7_PBK_MASK                          0x0000000c
#define AVR32_USB_UPCFG7_PBK_OFFSET                                 2
#define AVR32_USB_UPCFG7_PBK_SIZE                                   2
#define AVR32_USB_UPCFG7_PEPNUM                                    16
#define AVR32_USB_UPCFG7_PEPNUM_MASK                       0x000f0000
#define AVR32_USB_UPCFG7_PEPNUM_OFFSET                             16
#define AVR32_USB_UPCFG7_PEPNUM_SIZE                                4
#define AVR32_USB_UPCFG7_PINGEN                                    20
#define AVR32_USB_UPCFG7_PINGEN_MASK                       0x00100000
#define AVR32_USB_UPCFG7_PINGEN_OFFSET                             20
#define AVR32_USB_UPCFG7_PINGEN_SIZE                                1
#define AVR32_USB_UPCFG7_PSIZE                                      4
#define AVR32_USB_UPCFG7_PSIZE_MASK                        0x00000070
#define AVR32_USB_UPCFG7_PSIZE_OFFSET                               4
#define AVR32_USB_UPCFG7_PSIZE_SIZE                                 3
#define AVR32_USB_UPCFG7_PTOKEN                                     8
#define AVR32_USB_UPCFG7_PTOKEN_MASK                       0x00000300
#define AVR32_USB_UPCFG7_PTOKEN_OFFSET                              8
#define AVR32_USB_UPCFG7_PTOKEN_SIZE                                2
#define AVR32_USB_UPCFG7_PTYPE                                     12
#define AVR32_USB_UPCFG7_PTYPE_MASK                        0x00003000
#define AVR32_USB_UPCFG7_PTYPE_OFFSET                              12
#define AVR32_USB_UPCFG7_PTYPE_SIZE                                 2
#define AVR32_USB_UPCFG7_RESETVALUE                        0x00000000
#define AVR32_USB_UPCON0                                   0x000005c0
#define AVR32_USB_UPCON0CLR                                0x00000620
#define AVR32_USB_UPCON0CLR_FIFOCONC                               14
#define AVR32_USB_UPCON0CLR_FIFOCONC_MASK                  0x00004000
#define AVR32_USB_UPCON0CLR_FIFOCONC_OFFSET                        14
#define AVR32_USB_UPCON0CLR_FIFOCONC_SIZE                           1
#define AVR32_USB_UPCON0CLR_MASK                           0x000350ff
#define AVR32_USB_UPCON0CLR_NAKEDEC                                 4
#define AVR32_USB_UPCON0CLR_NAKEDEC_MASK                   0x00000010
#define AVR32_USB_UPCON0CLR_NAKEDEC_OFFSET                          4
#define AVR32_USB_UPCON0CLR_NAKEDEC_SIZE                            1
#define AVR32_USB_UPCON0CLR_NBUSYBKEC                              12
#define AVR32_USB_UPCON0CLR_NBUSYBKEC_MASK                 0x00001000
#define AVR32_USB_UPCON0CLR_NBUSYBKEC_OFFSET                       12
#define AVR32_USB_UPCON0CLR_NBUSYBKEC_SIZE                          1
#define AVR32_USB_UPCON0CLR_OVERFIEC                                5
#define AVR32_USB_UPCON0CLR_OVERFIEC_MASK                  0x00000020
#define AVR32_USB_UPCON0CLR_OVERFIEC_OFFSET                         5
#define AVR32_USB_UPCON0CLR_OVERFIEC_SIZE                           1
#define AVR32_USB_UPCON0CLR_PDISHDMAC                              16
#define AVR32_USB_UPCON0CLR_PDISHDMAC_MASK                 0x00010000
#define AVR32_USB_UPCON0CLR_PDISHDMAC_OFFSET                       16
#define AVR32_USB_UPCON0CLR_PDISHDMAC_SIZE                          1
#define AVR32_USB_UPCON0CLR_PERREC                                  3
#define AVR32_USB_UPCON0CLR_PERREC_MASK                    0x00000008
#define AVR32_USB_UPCON0CLR_PERREC_OFFSET                           3
#define AVR32_USB_UPCON0CLR_PERREC_SIZE                             1
#define AVR32_USB_UPCON0CLR_PFREEZEC                               17
#define AVR32_USB_UPCON0CLR_PFREEZEC_MASK                  0x00020000
#define AVR32_USB_UPCON0CLR_PFREEZEC_OFFSET                        17
#define AVR32_USB_UPCON0CLR_PFREEZEC_SIZE                           1
#define AVR32_USB_UPCON0CLR_RESETVALUE                     0x00000000
#define AVR32_USB_UPCON0CLR_RXINEC                                  0
#define AVR32_USB_UPCON0CLR_RXINEC_MASK                    0x00000001
#define AVR32_USB_UPCON0CLR_RXINEC_OFFSET                           0
#define AVR32_USB_UPCON0CLR_RXINEC_SIZE                             1
#define AVR32_USB_UPCON0CLR_RXSTALLDEC                              6
#define AVR32_USB_UPCON0CLR_RXSTALLDEC_MASK                0x00000040
#define AVR32_USB_UPCON0CLR_RXSTALLDEC_OFFSET                       6
#define AVR32_USB_UPCON0CLR_RXSTALLDEC_SIZE                         1
#define AVR32_USB_UPCON0CLR_SHORTPACKETIEC                          7
#define AVR32_USB_UPCON0CLR_SHORTPACKETIEC_MASK            0x00000080
#define AVR32_USB_UPCON0CLR_SHORTPACKETIEC_OFFSET                   7
#define AVR32_USB_UPCON0CLR_SHORTPACKETIEC_SIZE                     1
#define AVR32_USB_UPCON0CLR_TXOUTEC                                 1
#define AVR32_USB_UPCON0CLR_TXOUTEC_MASK                   0x00000002
#define AVR32_USB_UPCON0CLR_TXOUTEC_OFFSET                          1
#define AVR32_USB_UPCON0CLR_TXOUTEC_SIZE                            1
#define AVR32_USB_UPCON0CLR_TXSTPEC                                 2
#define AVR32_USB_UPCON0CLR_TXSTPEC_MASK                   0x00000004
#define AVR32_USB_UPCON0CLR_TXSTPEC_OFFSET                          2
#define AVR32_USB_UPCON0CLR_TXSTPEC_SIZE                            1
#define AVR32_USB_UPCON0SET                                0x000005f0
#define AVR32_USB_UPCON0SET_MASK                           0x000710ff
#define AVR32_USB_UPCON0SET_NAKEDES                                 4
#define AVR32_USB_UPCON0SET_NAKEDES_MASK                   0x00000010
#define AVR32_USB_UPCON0SET_NAKEDES_OFFSET                          4
#define AVR32_USB_UPCON0SET_NAKEDES_SIZE                            1
#define AVR32_USB_UPCON0SET_NBUSYBKES                              12
#define AVR32_USB_UPCON0SET_NBUSYBKES_MASK                 0x00001000
#define AVR32_USB_UPCON0SET_NBUSYBKES_OFFSET                       12
#define AVR32_USB_UPCON0SET_NBUSYBKES_SIZE                          1
#define AVR32_USB_UPCON0SET_OVERFIES                                5
#define AVR32_USB_UPCON0SET_OVERFIES_MASK                  0x00000020
#define AVR32_USB_UPCON0SET_OVERFIES_OFFSET                         5
#define AVR32_USB_UPCON0SET_OVERFIES_SIZE                           1
#define AVR32_USB_UPCON0SET_PDISHDMAS                              16
#define AVR32_USB_UPCON0SET_PDISHDMAS_MASK                 0x00010000
#define AVR32_USB_UPCON0SET_PDISHDMAS_OFFSET                       16
#define AVR32_USB_UPCON0SET_PDISHDMAS_SIZE                          1
#define AVR32_USB_UPCON0SET_PERRES                                  3
#define AVR32_USB_UPCON0SET_PERRES_MASK                    0x00000008
#define AVR32_USB_UPCON0SET_PERRES_OFFSET                           3
#define AVR32_USB_UPCON0SET_PERRES_SIZE                             1
#define AVR32_USB_UPCON0SET_PFREEZES                               17
#define AVR32_USB_UPCON0SET_PFREEZES_MASK                  0x00020000
#define AVR32_USB_UPCON0SET_PFREEZES_OFFSET                        17
#define AVR32_USB_UPCON0SET_PFREEZES_SIZE                           1
#define AVR32_USB_UPCON0SET_RESETVALUE                     0x00000000
#define AVR32_USB_UPCON0SET_RSTDTS                                 18
#define AVR32_USB_UPCON0SET_RSTDTS_MASK                    0x00040000
#define AVR32_USB_UPCON0SET_RSTDTS_OFFSET                          18
#define AVR32_USB_UPCON0SET_RSTDTS_SIZE                             1
#define AVR32_USB_UPCON0SET_RXINES                                  0
#define AVR32_USB_UPCON0SET_RXINES_MASK                    0x00000001
#define AVR32_USB_UPCON0SET_RXINES_OFFSET                           0
#define AVR32_USB_UPCON0SET_RXINES_SIZE                             1
#define AVR32_USB_UPCON0SET_RXSTALLDES                              6
#define AVR32_USB_UPCON0SET_RXSTALLDES_MASK                0x00000040
#define AVR32_USB_UPCON0SET_RXSTALLDES_OFFSET                       6
#define AVR32_USB_UPCON0SET_RXSTALLDES_SIZE                         1
#define AVR32_USB_UPCON0SET_SHORTPACKETIES                          7
#define AVR32_USB_UPCON0SET_SHORTPACKETIES_MASK            0x00000080
#define AVR32_USB_UPCON0SET_SHORTPACKETIES_OFFSET                   7
#define AVR32_USB_UPCON0SET_SHORTPACKETIES_SIZE                     1
#define AVR32_USB_UPCON0SET_TXOUTES                                 1
#define AVR32_USB_UPCON0SET_TXOUTES_MASK                   0x00000002
#define AVR32_USB_UPCON0SET_TXOUTES_OFFSET                          1
#define AVR32_USB_UPCON0SET_TXOUTES_SIZE                            1
#define AVR32_USB_UPCON0SET_TXSTPES                                 2
#define AVR32_USB_UPCON0SET_TXSTPES_MASK                   0x00000004
#define AVR32_USB_UPCON0SET_TXSTPES_OFFSET                          2
#define AVR32_USB_UPCON0SET_TXSTPES_SIZE                            1
#define AVR32_USB_UPCON0_FIFOCON                                   14
#define AVR32_USB_UPCON0_FIFOCON_MASK                      0x00004000
#define AVR32_USB_UPCON0_FIFOCON_OFFSET                            14
#define AVR32_USB_UPCON0_FIFOCON_SIZE                               1
#define AVR32_USB_UPCON0_MASK                              0x000750ff
#define AVR32_USB_UPCON0_NAKEDE                                     4
#define AVR32_USB_UPCON0_NAKEDE_MASK                       0x00000010
#define AVR32_USB_UPCON0_NAKEDE_OFFSET                              4
#define AVR32_USB_UPCON0_NAKEDE_SIZE                                1
#define AVR32_USB_UPCON0_NBUSYBKE                                  12
#define AVR32_USB_UPCON0_NBUSYBKE_MASK                     0x00001000
#define AVR32_USB_UPCON0_NBUSYBKE_OFFSET                           12
#define AVR32_USB_UPCON0_NBUSYBKE_SIZE                              1
#define AVR32_USB_UPCON0_OVERFIE                                    5
#define AVR32_USB_UPCON0_OVERFIE_MASK                      0x00000020
#define AVR32_USB_UPCON0_OVERFIE_OFFSET                             5
#define AVR32_USB_UPCON0_OVERFIE_SIZE                               1
#define AVR32_USB_UPCON0_PDISHDMA                                  16
#define AVR32_USB_UPCON0_PDISHDMA_MASK                     0x00010000
#define AVR32_USB_UPCON0_PDISHDMA_OFFSET                           16
#define AVR32_USB_UPCON0_PDISHDMA_SIZE                              1
#define AVR32_USB_UPCON0_PERRE                                      3
#define AVR32_USB_UPCON0_PERRE_MASK                        0x00000008
#define AVR32_USB_UPCON0_PERRE_OFFSET                               3
#define AVR32_USB_UPCON0_PERRE_SIZE                                 1
#define AVR32_USB_UPCON0_PFREEZE                                   17
#define AVR32_USB_UPCON0_PFREEZE_MASK                      0x00020000
#define AVR32_USB_UPCON0_PFREEZE_OFFSET                            17
#define AVR32_USB_UPCON0_PFREEZE_SIZE                               1
#define AVR32_USB_UPCON0_RESETVALUE                        0x00000000
#define AVR32_USB_UPCON0_RSTDT                                     18
#define AVR32_USB_UPCON0_RSTDT_MASK                        0x00040000
#define AVR32_USB_UPCON0_RSTDT_OFFSET                              18
#define AVR32_USB_UPCON0_RSTDT_SIZE                                 1
#define AVR32_USB_UPCON0_RXINE                                      0
#define AVR32_USB_UPCON0_RXINE_MASK                        0x00000001
#define AVR32_USB_UPCON0_RXINE_OFFSET                               0
#define AVR32_USB_UPCON0_RXINE_SIZE                                 1
#define AVR32_USB_UPCON0_RXSTALLDE                                  6
#define AVR32_USB_UPCON0_RXSTALLDE_MASK                    0x00000040
#define AVR32_USB_UPCON0_RXSTALLDE_OFFSET                           6
#define AVR32_USB_UPCON0_RXSTALLDE_SIZE                             1
#define AVR32_USB_UPCON0_SHORTPACKETIE                              7
#define AVR32_USB_UPCON0_SHORTPACKETIE_MASK                0x00000080
#define AVR32_USB_UPCON0_SHORTPACKETIE_OFFSET                       7
#define AVR32_USB_UPCON0_SHORTPACKETIE_SIZE                         1
#define AVR32_USB_UPCON0_TXOUTE                                     1
#define AVR32_USB_UPCON0_TXOUTE_MASK                       0x00000002
#define AVR32_USB_UPCON0_TXOUTE_OFFSET                              1
#define AVR32_USB_UPCON0_TXOUTE_SIZE                                1
#define AVR32_USB_UPCON0_TXSTPE                                     2
#define AVR32_USB_UPCON0_TXSTPE_MASK                       0x00000004
#define AVR32_USB_UPCON0_TXSTPE_OFFSET                              2
#define AVR32_USB_UPCON0_TXSTPE_SIZE                                1
#define AVR32_USB_UPCON1                                   0x000005c4
#define AVR32_USB_UPCON1CLR                                0x00000624
#define AVR32_USB_UPCON1CLR_FIFOCONC                               14
#define AVR32_USB_UPCON1CLR_FIFOCONC_MASK                  0x00004000
#define AVR32_USB_UPCON1CLR_FIFOCONC_OFFSET                        14
#define AVR32_USB_UPCON1CLR_FIFOCONC_SIZE                           1
#define AVR32_USB_UPCON1CLR_MASK                           0x000350ff
#define AVR32_USB_UPCON1CLR_NAKEDEC                                 4
#define AVR32_USB_UPCON1CLR_NAKEDEC_MASK                   0x00000010
#define AVR32_USB_UPCON1CLR_NAKEDEC_OFFSET                          4
#define AVR32_USB_UPCON1CLR_NAKEDEC_SIZE                            1
#define AVR32_USB_UPCON1CLR_NBUSYBKEC                              12
#define AVR32_USB_UPCON1CLR_NBUSYBKEC_MASK                 0x00001000
#define AVR32_USB_UPCON1CLR_NBUSYBKEC_OFFSET                       12
#define AVR32_USB_UPCON1CLR_NBUSYBKEC_SIZE                          1
#define AVR32_USB_UPCON1CLR_OVERFIEC                                5
#define AVR32_USB_UPCON1CLR_OVERFIEC_MASK                  0x00000020
#define AVR32_USB_UPCON1CLR_OVERFIEC_OFFSET                         5
#define AVR32_USB_UPCON1CLR_OVERFIEC_SIZE                           1
#define AVR32_USB_UPCON1CLR_PDISHDMAC                              16
#define AVR32_USB_UPCON1CLR_PDISHDMAC_MASK                 0x00010000
#define AVR32_USB_UPCON1CLR_PDISHDMAC_OFFSET                       16
#define AVR32_USB_UPCON1CLR_PDISHDMAC_SIZE                          1
#define AVR32_USB_UPCON1CLR_PERREC                                  3
#define AVR32_USB_UPCON1CLR_PERREC_MASK                    0x00000008
#define AVR32_USB_UPCON1CLR_PERREC_OFFSET                           3
#define AVR32_USB_UPCON1CLR_PERREC_SIZE                             1
#define AVR32_USB_UPCON1CLR_PFREEZEC                               17
#define AVR32_USB_UPCON1CLR_PFREEZEC_MASK                  0x00020000
#define AVR32_USB_UPCON1CLR_PFREEZEC_OFFSET                        17
#define AVR32_USB_UPCON1CLR_PFREEZEC_SIZE                           1
#define AVR32_USB_UPCON1CLR_RESETVALUE                     0x00000000
#define AVR32_USB_UPCON1CLR_RXINEC                                  0
#define AVR32_USB_UPCON1CLR_RXINEC_MASK                    0x00000001
#define AVR32_USB_UPCON1CLR_RXINEC_OFFSET                           0
#define AVR32_USB_UPCON1CLR_RXINEC_SIZE                             1
#define AVR32_USB_UPCON1CLR_RXSTALLDEC                              6
#define AVR32_USB_UPCON1CLR_RXSTALLDEC_MASK                0x00000040
#define AVR32_USB_UPCON1CLR_RXSTALLDEC_OFFSET                       6
#define AVR32_USB_UPCON1CLR_RXSTALLDEC_SIZE                         1
#define AVR32_USB_UPCON1CLR_SHORTPACKETIEC                          7
#define AVR32_USB_UPCON1CLR_SHORTPACKETIEC_MASK            0x00000080
#define AVR32_USB_UPCON1CLR_SHORTPACKETIEC_OFFSET                   7
#define AVR32_USB_UPCON1CLR_SHORTPACKETIEC_SIZE                     1
#define AVR32_USB_UPCON1CLR_TXOUTEC                                 1
#define AVR32_USB_UPCON1CLR_TXOUTEC_MASK                   0x00000002
#define AVR32_USB_UPCON1CLR_TXOUTEC_OFFSET                          1
#define AVR32_USB_UPCON1CLR_TXOUTEC_SIZE                            1
#define AVR32_USB_UPCON1CLR_TXSTPEC                                 2
#define AVR32_USB_UPCON1CLR_TXSTPEC_MASK                   0x00000004
#define AVR32_USB_UPCON1CLR_TXSTPEC_OFFSET                          2
#define AVR32_USB_UPCON1CLR_TXSTPEC_SIZE                            1
#define AVR32_USB_UPCON1SET                                0x000005f4
#define AVR32_USB_UPCON1SET_MASK                           0x000710ff
#define AVR32_USB_UPCON1SET_NAKEDES                                 4
#define AVR32_USB_UPCON1SET_NAKEDES_MASK                   0x00000010
#define AVR32_USB_UPCON1SET_NAKEDES_OFFSET                          4
#define AVR32_USB_UPCON1SET_NAKEDES_SIZE                            1
#define AVR32_USB_UPCON1SET_NBUSYBKES                              12
#define AVR32_USB_UPCON1SET_NBUSYBKES_MASK                 0x00001000
#define AVR32_USB_UPCON1SET_NBUSYBKES_OFFSET                       12
#define AVR32_USB_UPCON1SET_NBUSYBKES_SIZE                          1
#define AVR32_USB_UPCON1SET_OVERFIES                                5
#define AVR32_USB_UPCON1SET_OVERFIES_MASK                  0x00000020
#define AVR32_USB_UPCON1SET_OVERFIES_OFFSET                         5
#define AVR32_USB_UPCON1SET_OVERFIES_SIZE                           1
#define AVR32_USB_UPCON1SET_PDISHDMAS                              16
#define AVR32_USB_UPCON1SET_PDISHDMAS_MASK                 0x00010000
#define AVR32_USB_UPCON1SET_PDISHDMAS_OFFSET                       16
#define AVR32_USB_UPCON1SET_PDISHDMAS_SIZE                          1
#define AVR32_USB_UPCON1SET_PERRES                                  3
#define AVR32_USB_UPCON1SET_PERRES_MASK                    0x00000008
#define AVR32_USB_UPCON1SET_PERRES_OFFSET                           3
#define AVR32_USB_UPCON1SET_PERRES_SIZE                             1
#define AVR32_USB_UPCON1SET_PFREEZES                               17
#define AVR32_USB_UPCON1SET_PFREEZES_MASK                  0x00020000
#define AVR32_USB_UPCON1SET_PFREEZES_OFFSET                        17
#define AVR32_USB_UPCON1SET_PFREEZES_SIZE                           1
#define AVR32_USB_UPCON1SET_RESETVALUE                     0x00000000
#define AVR32_USB_UPCON1SET_RSTDTS                                 18
#define AVR32_USB_UPCON1SET_RSTDTS_MASK                    0x00040000
#define AVR32_USB_UPCON1SET_RSTDTS_OFFSET                          18
#define AVR32_USB_UPCON1SET_RSTDTS_SIZE                             1
#define AVR32_USB_UPCON1SET_RXINES                                  0
#define AVR32_USB_UPCON1SET_RXINES_MASK                    0x00000001
#define AVR32_USB_UPCON1SET_RXINES_OFFSET                           0
#define AVR32_USB_UPCON1SET_RXINES_SIZE                             1
#define AVR32_USB_UPCON1SET_RXSTALLDES                              6
#define AVR32_USB_UPCON1SET_RXSTALLDES_MASK                0x00000040
#define AVR32_USB_UPCON1SET_RXSTALLDES_OFFSET                       6
#define AVR32_USB_UPCON1SET_RXSTALLDES_SIZE                         1
#define AVR32_USB_UPCON1SET_SHORTPACKETIES                          7
#define AVR32_USB_UPCON1SET_SHORTPACKETIES_MASK            0x00000080
#define AVR32_USB_UPCON1SET_SHORTPACKETIES_OFFSET                   7
#define AVR32_USB_UPCON1SET_SHORTPACKETIES_SIZE                     1
#define AVR32_USB_UPCON1SET_TXOUTES                                 1
#define AVR32_USB_UPCON1SET_TXOUTES_MASK                   0x00000002
#define AVR32_USB_UPCON1SET_TXOUTES_OFFSET                          1
#define AVR32_USB_UPCON1SET_TXOUTES_SIZE                            1
#define AVR32_USB_UPCON1SET_TXSTPES                                 2
#define AVR32_USB_UPCON1SET_TXSTPES_MASK                   0x00000004
#define AVR32_USB_UPCON1SET_TXSTPES_OFFSET                          2
#define AVR32_USB_UPCON1SET_TXSTPES_SIZE                            1
#define AVR32_USB_UPCON1_FIFOCON                                   14
#define AVR32_USB_UPCON1_FIFOCON_MASK                      0x00004000
#define AVR32_USB_UPCON1_FIFOCON_OFFSET                            14
#define AVR32_USB_UPCON1_FIFOCON_SIZE                               1
#define AVR32_USB_UPCON1_MASK                              0x000750ff
#define AVR32_USB_UPCON1_NAKEDE                                     4
#define AVR32_USB_UPCON1_NAKEDE_MASK                       0x00000010
#define AVR32_USB_UPCON1_NAKEDE_OFFSET                              4
#define AVR32_USB_UPCON1_NAKEDE_SIZE                                1
#define AVR32_USB_UPCON1_NBUSYBKE                                  12
#define AVR32_USB_UPCON1_NBUSYBKE_MASK                     0x00001000
#define AVR32_USB_UPCON1_NBUSYBKE_OFFSET                           12
#define AVR32_USB_UPCON1_NBUSYBKE_SIZE                              1
#define AVR32_USB_UPCON1_OVERFIE                                    5
#define AVR32_USB_UPCON1_OVERFIE_MASK                      0x00000020
#define AVR32_USB_UPCON1_OVERFIE_OFFSET                             5
#define AVR32_USB_UPCON1_OVERFIE_SIZE                               1
#define AVR32_USB_UPCON1_PDISHDMA                                  16
#define AVR32_USB_UPCON1_PDISHDMA_MASK                     0x00010000
#define AVR32_USB_UPCON1_PDISHDMA_OFFSET                           16
#define AVR32_USB_UPCON1_PDISHDMA_SIZE                              1
#define AVR32_USB_UPCON1_PERRE                                      3
#define AVR32_USB_UPCON1_PERRE_MASK                        0x00000008
#define AVR32_USB_UPCON1_PERRE_OFFSET                               3
#define AVR32_USB_UPCON1_PERRE_SIZE                                 1
#define AVR32_USB_UPCON1_PFREEZE                                   17
#define AVR32_USB_UPCON1_PFREEZE_MASK                      0x00020000
#define AVR32_USB_UPCON1_PFREEZE_OFFSET                            17
#define AVR32_USB_UPCON1_PFREEZE_SIZE                               1
#define AVR32_USB_UPCON1_RESETVALUE                        0x00000000
#define AVR32_USB_UPCON1_RSTDT                                     18
#define AVR32_USB_UPCON1_RSTDT_MASK                        0x00040000
#define AVR32_USB_UPCON1_RSTDT_OFFSET                              18
#define AVR32_USB_UPCON1_RSTDT_SIZE                                 1
#define AVR32_USB_UPCON1_RXINE                                      0
#define AVR32_USB_UPCON1_RXINE_MASK                        0x00000001
#define AVR32_USB_UPCON1_RXINE_OFFSET                               0
#define AVR32_USB_UPCON1_RXINE_SIZE                                 1
#define AVR32_USB_UPCON1_RXSTALLDE                                  6
#define AVR32_USB_UPCON1_RXSTALLDE_MASK                    0x00000040
#define AVR32_USB_UPCON1_RXSTALLDE_OFFSET                           6
#define AVR32_USB_UPCON1_RXSTALLDE_SIZE                             1
#define AVR32_USB_UPCON1_SHORTPACKETIE                              7
#define AVR32_USB_UPCON1_SHORTPACKETIE_MASK                0x00000080
#define AVR32_USB_UPCON1_SHORTPACKETIE_OFFSET                       7
#define AVR32_USB_UPCON1_SHORTPACKETIE_SIZE                         1
#define AVR32_USB_UPCON1_TXOUTE                                     1
#define AVR32_USB_UPCON1_TXOUTE_MASK                       0x00000002
#define AVR32_USB_UPCON1_TXOUTE_OFFSET                              1
#define AVR32_USB_UPCON1_TXOUTE_SIZE                                1
#define AVR32_USB_UPCON1_TXSTPE                                     2
#define AVR32_USB_UPCON1_TXSTPE_MASK                       0x00000004
#define AVR32_USB_UPCON1_TXSTPE_OFFSET                              2
#define AVR32_USB_UPCON1_TXSTPE_SIZE                                1
#define AVR32_USB_UPCON2                                   0x000005c8
#define AVR32_USB_UPCON2CLR                                0x00000628
#define AVR32_USB_UPCON2CLR_FIFOCONC                               14
#define AVR32_USB_UPCON2CLR_FIFOCONC_MASK                  0x00004000
#define AVR32_USB_UPCON2CLR_FIFOCONC_OFFSET                        14
#define AVR32_USB_UPCON2CLR_FIFOCONC_SIZE                           1
#define AVR32_USB_UPCON2CLR_MASK                           0x000350ff
#define AVR32_USB_UPCON2CLR_NAKEDEC                                 4
#define AVR32_USB_UPCON2CLR_NAKEDEC_MASK                   0x00000010
#define AVR32_USB_UPCON2CLR_NAKEDEC_OFFSET                          4
#define AVR32_USB_UPCON2CLR_NAKEDEC_SIZE                            1
#define AVR32_USB_UPCON2CLR_NBUSYBKEC                              12
#define AVR32_USB_UPCON2CLR_NBUSYBKEC_MASK                 0x00001000
#define AVR32_USB_UPCON2CLR_NBUSYBKEC_OFFSET                       12
#define AVR32_USB_UPCON2CLR_NBUSYBKEC_SIZE                          1
#define AVR32_USB_UPCON2CLR_OVERFIEC                                5
#define AVR32_USB_UPCON2CLR_OVERFIEC_MASK                  0x00000020
#define AVR32_USB_UPCON2CLR_OVERFIEC_OFFSET                         5
#define AVR32_USB_UPCON2CLR_OVERFIEC_SIZE                           1
#define AVR32_USB_UPCON2CLR_PDISHDMAC                              16
#define AVR32_USB_UPCON2CLR_PDISHDMAC_MASK                 0x00010000
#define AVR32_USB_UPCON2CLR_PDISHDMAC_OFFSET                       16
#define AVR32_USB_UPCON2CLR_PDISHDMAC_SIZE                          1
#define AVR32_USB_UPCON2CLR_PERREC                                  3
#define AVR32_USB_UPCON2CLR_PERREC_MASK                    0x00000008
#define AVR32_USB_UPCON2CLR_PERREC_OFFSET                           3
#define AVR32_USB_UPCON2CLR_PERREC_SIZE                             1
#define AVR32_USB_UPCON2CLR_PFREEZEC                               17
#define AVR32_USB_UPCON2CLR_PFREEZEC_MASK                  0x00020000
#define AVR32_USB_UPCON2CLR_PFREEZEC_OFFSET                        17
#define AVR32_USB_UPCON2CLR_PFREEZEC_SIZE                           1
#define AVR32_USB_UPCON2CLR_RESETVALUE                     0x00000000
#define AVR32_USB_UPCON2CLR_RXINEC                                  0
#define AVR32_USB_UPCON2CLR_RXINEC_MASK                    0x00000001
#define AVR32_USB_UPCON2CLR_RXINEC_OFFSET                           0
#define AVR32_USB_UPCON2CLR_RXINEC_SIZE                             1
#define AVR32_USB_UPCON2CLR_RXSTALLDEC                              6
#define AVR32_USB_UPCON2CLR_RXSTALLDEC_MASK                0x00000040
#define AVR32_USB_UPCON2CLR_RXSTALLDEC_OFFSET                       6
#define AVR32_USB_UPCON2CLR_RXSTALLDEC_SIZE                         1
#define AVR32_USB_UPCON2CLR_SHORTPACKETIEC                          7
#define AVR32_USB_UPCON2CLR_SHORTPACKETIEC_MASK            0x00000080
#define AVR32_USB_UPCON2CLR_SHORTPACKETIEC_OFFSET                   7
#define AVR32_USB_UPCON2CLR_SHORTPACKETIEC_SIZE                     1
#define AVR32_USB_UPCON2CLR_TXOUTEC                                 1
#define AVR32_USB_UPCON2CLR_TXOUTEC_MASK                   0x00000002
#define AVR32_USB_UPCON2CLR_TXOUTEC_OFFSET                          1
#define AVR32_USB_UPCON2CLR_TXOUTEC_SIZE                            1
#define AVR32_USB_UPCON2CLR_TXSTPEC                                 2
#define AVR32_USB_UPCON2CLR_TXSTPEC_MASK                   0x00000004
#define AVR32_USB_UPCON2CLR_TXSTPEC_OFFSET                          2
#define AVR32_USB_UPCON2CLR_TXSTPEC_SIZE                            1
#define AVR32_USB_UPCON2SET                                0x000005f8
#define AVR32_USB_UPCON2SET_MASK                           0x000710ff
#define AVR32_USB_UPCON2SET_NAKEDES                                 4
#define AVR32_USB_UPCON2SET_NAKEDES_MASK                   0x00000010
#define AVR32_USB_UPCON2SET_NAKEDES_OFFSET                          4
#define AVR32_USB_UPCON2SET_NAKEDES_SIZE                            1
#define AVR32_USB_UPCON2SET_NBUSYBKES                              12
#define AVR32_USB_UPCON2SET_NBUSYBKES_MASK                 0x00001000
#define AVR32_USB_UPCON2SET_NBUSYBKES_OFFSET                       12
#define AVR32_USB_UPCON2SET_NBUSYBKES_SIZE                          1
#define AVR32_USB_UPCON2SET_OVERFIES                                5
#define AVR32_USB_UPCON2SET_OVERFIES_MASK                  0x00000020
#define AVR32_USB_UPCON2SET_OVERFIES_OFFSET                         5
#define AVR32_USB_UPCON2SET_OVERFIES_SIZE                           1
#define AVR32_USB_UPCON2SET_PDISHDMAS                              16
#define AVR32_USB_UPCON2SET_PDISHDMAS_MASK                 0x00010000
#define AVR32_USB_UPCON2SET_PDISHDMAS_OFFSET                       16
#define AVR32_USB_UPCON2SET_PDISHDMAS_SIZE                          1
#define AVR32_USB_UPCON2SET_PERRES                                  3
#define AVR32_USB_UPCON2SET_PERRES_MASK                    0x00000008
#define AVR32_USB_UPCON2SET_PERRES_OFFSET                           3
#define AVR32_USB_UPCON2SET_PERRES_SIZE                             1
#define AVR32_USB_UPCON2SET_PFREEZES                               17
#define AVR32_USB_UPCON2SET_PFREEZES_MASK                  0x00020000
#define AVR32_USB_UPCON2SET_PFREEZES_OFFSET                        17
#define AVR32_USB_UPCON2SET_PFREEZES_SIZE                           1
#define AVR32_USB_UPCON2SET_RESETVALUE                     0x00000000
#define AVR32_USB_UPCON2SET_RSTDTS                                 18
#define AVR32_USB_UPCON2SET_RSTDTS_MASK                    0x00040000
#define AVR32_USB_UPCON2SET_RSTDTS_OFFSET                          18
#define AVR32_USB_UPCON2SET_RSTDTS_SIZE                             1
#define AVR32_USB_UPCON2SET_RXINES                                  0
#define AVR32_USB_UPCON2SET_RXINES_MASK                    0x00000001
#define AVR32_USB_UPCON2SET_RXINES_OFFSET                           0
#define AVR32_USB_UPCON2SET_RXINES_SIZE                             1
#define AVR32_USB_UPCON2SET_RXSTALLDES                              6
#define AVR32_USB_UPCON2SET_RXSTALLDES_MASK                0x00000040
#define AVR32_USB_UPCON2SET_RXSTALLDES_OFFSET                       6
#define AVR32_USB_UPCON2SET_RXSTALLDES_SIZE                         1
#define AVR32_USB_UPCON2SET_SHORTPACKETIES                          7
#define AVR32_USB_UPCON2SET_SHORTPACKETIES_MASK            0x00000080
#define AVR32_USB_UPCON2SET_SHORTPACKETIES_OFFSET                   7
#define AVR32_USB_UPCON2SET_SHORTPACKETIES_SIZE                     1
#define AVR32_USB_UPCON2SET_TXOUTES                                 1
#define AVR32_USB_UPCON2SET_TXOUTES_MASK                   0x00000002
#define AVR32_USB_UPCON2SET_TXOUTES_OFFSET                          1
#define AVR32_USB_UPCON2SET_TXOUTES_SIZE                            1
#define AVR32_USB_UPCON2SET_TXSTPES                                 2
#define AVR32_USB_UPCON2SET_TXSTPES_MASK                   0x00000004
#define AVR32_USB_UPCON2SET_TXSTPES_OFFSET                          2
#define AVR32_USB_UPCON2SET_TXSTPES_SIZE                            1
#define AVR32_USB_UPCON2_FIFOCON                                   14
#define AVR32_USB_UPCON2_FIFOCON_MASK                      0x00004000
#define AVR32_USB_UPCON2_FIFOCON_OFFSET                            14
#define AVR32_USB_UPCON2_FIFOCON_SIZE                               1
#define AVR32_USB_UPCON2_MASK                              0x000750ff
#define AVR32_USB_UPCON2_NAKEDE                                     4
#define AVR32_USB_UPCON2_NAKEDE_MASK                       0x00000010
#define AVR32_USB_UPCON2_NAKEDE_OFFSET                              4
#define AVR32_USB_UPCON2_NAKEDE_SIZE                                1
#define AVR32_USB_UPCON2_NBUSYBKE                                  12
#define AVR32_USB_UPCON2_NBUSYBKE_MASK                     0x00001000
#define AVR32_USB_UPCON2_NBUSYBKE_OFFSET                           12
#define AVR32_USB_UPCON2_NBUSYBKE_SIZE                              1
#define AVR32_USB_UPCON2_OVERFIE                                    5
#define AVR32_USB_UPCON2_OVERFIE_MASK                      0x00000020
#define AVR32_USB_UPCON2_OVERFIE_OFFSET                             5
#define AVR32_USB_UPCON2_OVERFIE_SIZE                               1
#define AVR32_USB_UPCON2_PDISHDMA                                  16
#define AVR32_USB_UPCON2_PDISHDMA_MASK                     0x00010000
#define AVR32_USB_UPCON2_PDISHDMA_OFFSET                           16
#define AVR32_USB_UPCON2_PDISHDMA_SIZE                              1
#define AVR32_USB_UPCON2_PERRE                                      3
#define AVR32_USB_UPCON2_PERRE_MASK                        0x00000008
#define AVR32_USB_UPCON2_PERRE_OFFSET                               3
#define AVR32_USB_UPCON2_PERRE_SIZE                                 1
#define AVR32_USB_UPCON2_PFREEZE                                   17
#define AVR32_USB_UPCON2_PFREEZE_MASK                      0x00020000
#define AVR32_USB_UPCON2_PFREEZE_OFFSET                            17
#define AVR32_USB_UPCON2_PFREEZE_SIZE                               1
#define AVR32_USB_UPCON2_RESETVALUE                        0x00000000
#define AVR32_USB_UPCON2_RSTDT                                     18
#define AVR32_USB_UPCON2_RSTDT_MASK                        0x00040000
#define AVR32_USB_UPCON2_RSTDT_OFFSET                              18
#define AVR32_USB_UPCON2_RSTDT_SIZE                                 1
#define AVR32_USB_UPCON2_RXINE                                      0
#define AVR32_USB_UPCON2_RXINE_MASK                        0x00000001
#define AVR32_USB_UPCON2_RXINE_OFFSET                               0
#define AVR32_USB_UPCON2_RXINE_SIZE                                 1
#define AVR32_USB_UPCON2_RXSTALLDE                                  6
#define AVR32_USB_UPCON2_RXSTALLDE_MASK                    0x00000040
#define AVR32_USB_UPCON2_RXSTALLDE_OFFSET                           6
#define AVR32_USB_UPCON2_RXSTALLDE_SIZE                             1
#define AVR32_USB_UPCON2_SHORTPACKETIE                              7
#define AVR32_USB_UPCON2_SHORTPACKETIE_MASK                0x00000080
#define AVR32_USB_UPCON2_SHORTPACKETIE_OFFSET                       7
#define AVR32_USB_UPCON2_SHORTPACKETIE_SIZE                         1
#define AVR32_USB_UPCON2_TXOUTE                                     1
#define AVR32_USB_UPCON2_TXOUTE_MASK                       0x00000002
#define AVR32_USB_UPCON2_TXOUTE_OFFSET                              1
#define AVR32_USB_UPCON2_TXOUTE_SIZE                                1
#define AVR32_USB_UPCON2_TXSTPE                                     2
#define AVR32_USB_UPCON2_TXSTPE_MASK                       0x00000004
#define AVR32_USB_UPCON2_TXSTPE_OFFSET                              2
#define AVR32_USB_UPCON2_TXSTPE_SIZE                                1
#define AVR32_USB_UPCON3                                   0x000005cc
#define AVR32_USB_UPCON3CLR                                0x0000062c
#define AVR32_USB_UPCON3CLR_FIFOCONC                               14
#define AVR32_USB_UPCON3CLR_FIFOCONC_MASK                  0x00004000
#define AVR32_USB_UPCON3CLR_FIFOCONC_OFFSET                        14
#define AVR32_USB_UPCON3CLR_FIFOCONC_SIZE                           1
#define AVR32_USB_UPCON3CLR_MASK                           0x000350ff
#define AVR32_USB_UPCON3CLR_NAKEDEC                                 4
#define AVR32_USB_UPCON3CLR_NAKEDEC_MASK                   0x00000010
#define AVR32_USB_UPCON3CLR_NAKEDEC_OFFSET                          4
#define AVR32_USB_UPCON3CLR_NAKEDEC_SIZE                            1
#define AVR32_USB_UPCON3CLR_NBUSYBKEC                              12
#define AVR32_USB_UPCON3CLR_NBUSYBKEC_MASK                 0x00001000
#define AVR32_USB_UPCON3CLR_NBUSYBKEC_OFFSET                       12
#define AVR32_USB_UPCON3CLR_NBUSYBKEC_SIZE                          1
#define AVR32_USB_UPCON3CLR_OVERFIEC                                5
#define AVR32_USB_UPCON3CLR_OVERFIEC_MASK                  0x00000020
#define AVR32_USB_UPCON3CLR_OVERFIEC_OFFSET                         5
#define AVR32_USB_UPCON3CLR_OVERFIEC_SIZE                           1
#define AVR32_USB_UPCON3CLR_PDISHDMAC                              16
#define AVR32_USB_UPCON3CLR_PDISHDMAC_MASK                 0x00010000
#define AVR32_USB_UPCON3CLR_PDISHDMAC_OFFSET                       16
#define AVR32_USB_UPCON3CLR_PDISHDMAC_SIZE                          1
#define AVR32_USB_UPCON3CLR_PERREC                                  3
#define AVR32_USB_UPCON3CLR_PERREC_MASK                    0x00000008
#define AVR32_USB_UPCON3CLR_PERREC_OFFSET                           3
#define AVR32_USB_UPCON3CLR_PERREC_SIZE                             1
#define AVR32_USB_UPCON3CLR_PFREEZEC                               17
#define AVR32_USB_UPCON3CLR_PFREEZEC_MASK                  0x00020000
#define AVR32_USB_UPCON3CLR_PFREEZEC_OFFSET                        17
#define AVR32_USB_UPCON3CLR_PFREEZEC_SIZE                           1
#define AVR32_USB_UPCON3CLR_RESETVALUE                     0x00000000
#define AVR32_USB_UPCON3CLR_RXINEC                                  0
#define AVR32_USB_UPCON3CLR_RXINEC_MASK                    0x00000001
#define AVR32_USB_UPCON3CLR_RXINEC_OFFSET                           0
#define AVR32_USB_UPCON3CLR_RXINEC_SIZE                             1
#define AVR32_USB_UPCON3CLR_RXSTALLDEC                              6
#define AVR32_USB_UPCON3CLR_RXSTALLDEC_MASK                0x00000040
#define AVR32_USB_UPCON3CLR_RXSTALLDEC_OFFSET                       6
#define AVR32_USB_UPCON3CLR_RXSTALLDEC_SIZE                         1
#define AVR32_USB_UPCON3CLR_SHORTPACKETIEC                          7
#define AVR32_USB_UPCON3CLR_SHORTPACKETIEC_MASK            0x00000080
#define AVR32_USB_UPCON3CLR_SHORTPACKETIEC_OFFSET                   7
#define AVR32_USB_UPCON3CLR_SHORTPACKETIEC_SIZE                     1
#define AVR32_USB_UPCON3CLR_TXOUTEC                                 1
#define AVR32_USB_UPCON3CLR_TXOUTEC_MASK                   0x00000002
#define AVR32_USB_UPCON3CLR_TXOUTEC_OFFSET                          1
#define AVR32_USB_UPCON3CLR_TXOUTEC_SIZE                            1
#define AVR32_USB_UPCON3CLR_TXSTPEC                                 2
#define AVR32_USB_UPCON3CLR_TXSTPEC_MASK                   0x00000004
#define AVR32_USB_UPCON3CLR_TXSTPEC_OFFSET                          2
#define AVR32_USB_UPCON3CLR_TXSTPEC_SIZE                            1
#define AVR32_USB_UPCON3SET                                0x000005fc
#define AVR32_USB_UPCON3SET_MASK                           0x000710ff
#define AVR32_USB_UPCON3SET_NAKEDES                                 4
#define AVR32_USB_UPCON3SET_NAKEDES_MASK                   0x00000010
#define AVR32_USB_UPCON3SET_NAKEDES_OFFSET                          4
#define AVR32_USB_UPCON3SET_NAKEDES_SIZE                            1
#define AVR32_USB_UPCON3SET_NBUSYBKES                              12
#define AVR32_USB_UPCON3SET_NBUSYBKES_MASK                 0x00001000
#define AVR32_USB_UPCON3SET_NBUSYBKES_OFFSET                       12
#define AVR32_USB_UPCON3SET_NBUSYBKES_SIZE                          1
#define AVR32_USB_UPCON3SET_OVERFIES                                5
#define AVR32_USB_UPCON3SET_OVERFIES_MASK                  0x00000020
#define AVR32_USB_UPCON3SET_OVERFIES_OFFSET                         5
#define AVR32_USB_UPCON3SET_OVERFIES_SIZE                           1
#define AVR32_USB_UPCON3SET_PDISHDMAS                              16
#define AVR32_USB_UPCON3SET_PDISHDMAS_MASK                 0x00010000
#define AVR32_USB_UPCON3SET_PDISHDMAS_OFFSET                       16
#define AVR32_USB_UPCON3SET_PDISHDMAS_SIZE                          1
#define AVR32_USB_UPCON3SET_PERRES                                  3
#define AVR32_USB_UPCON3SET_PERRES_MASK                    0x00000008
#define AVR32_USB_UPCON3SET_PERRES_OFFSET                           3
#define AVR32_USB_UPCON3SET_PERRES_SIZE                             1
#define AVR32_USB_UPCON3SET_PFREEZES                               17
#define AVR32_USB_UPCON3SET_PFREEZES_MASK                  0x00020000
#define AVR32_USB_UPCON3SET_PFREEZES_OFFSET                        17
#define AVR32_USB_UPCON3SET_PFREEZES_SIZE                           1
#define AVR32_USB_UPCON3SET_RESETVALUE                     0x00000000
#define AVR32_USB_UPCON3SET_RSTDTS                                 18
#define AVR32_USB_UPCON3SET_RSTDTS_MASK                    0x00040000
#define AVR32_USB_UPCON3SET_RSTDTS_OFFSET                          18
#define AVR32_USB_UPCON3SET_RSTDTS_SIZE                             1
#define AVR32_USB_UPCON3SET_RXINES                                  0
#define AVR32_USB_UPCON3SET_RXINES_MASK                    0x00000001
#define AVR32_USB_UPCON3SET_RXINES_OFFSET                           0
#define AVR32_USB_UPCON3SET_RXINES_SIZE                             1
#define AVR32_USB_UPCON3SET_RXSTALLDES                              6
#define AVR32_USB_UPCON3SET_RXSTALLDES_MASK                0x00000040
#define AVR32_USB_UPCON3SET_RXSTALLDES_OFFSET                       6
#define AVR32_USB_UPCON3SET_RXSTALLDES_SIZE                         1
#define AVR32_USB_UPCON3SET_SHORTPACKETIES                          7
#define AVR32_USB_UPCON3SET_SHORTPACKETIES_MASK            0x00000080
#define AVR32_USB_UPCON3SET_SHORTPACKETIES_OFFSET                   7
#define AVR32_USB_UPCON3SET_SHORTPACKETIES_SIZE                     1
#define AVR32_USB_UPCON3SET_TXOUTES                                 1
#define AVR32_USB_UPCON3SET_TXOUTES_MASK                   0x00000002
#define AVR32_USB_UPCON3SET_TXOUTES_OFFSET                          1
#define AVR32_USB_UPCON3SET_TXOUTES_SIZE                            1
#define AVR32_USB_UPCON3SET_TXSTPES                                 2
#define AVR32_USB_UPCON3SET_TXSTPES_MASK                   0x00000004
#define AVR32_USB_UPCON3SET_TXSTPES_OFFSET                          2
#define AVR32_USB_UPCON3SET_TXSTPES_SIZE                            1
#define AVR32_USB_UPCON3_FIFOCON                                   14
#define AVR32_USB_UPCON3_FIFOCON_MASK                      0x00004000
#define AVR32_USB_UPCON3_FIFOCON_OFFSET                            14
#define AVR32_USB_UPCON3_FIFOCON_SIZE                               1
#define AVR32_USB_UPCON3_MASK                              0x000750ff
#define AVR32_USB_UPCON3_NAKEDE                                     4
#define AVR32_USB_UPCON3_NAKEDE_MASK                       0x00000010
#define AVR32_USB_UPCON3_NAKEDE_OFFSET                              4
#define AVR32_USB_UPCON3_NAKEDE_SIZE                                1
#define AVR32_USB_UPCON3_NBUSYBKE                                  12
#define AVR32_USB_UPCON3_NBUSYBKE_MASK                     0x00001000
#define AVR32_USB_UPCON3_NBUSYBKE_OFFSET                           12
#define AVR32_USB_UPCON3_NBUSYBKE_SIZE                              1
#define AVR32_USB_UPCON3_OVERFIE                                    5
#define AVR32_USB_UPCON3_OVERFIE_MASK                      0x00000020
#define AVR32_USB_UPCON3_OVERFIE_OFFSET                             5
#define AVR32_USB_UPCON3_OVERFIE_SIZE                               1
#define AVR32_USB_UPCON3_PDISHDMA                                  16
#define AVR32_USB_UPCON3_PDISHDMA_MASK                     0x00010000
#define AVR32_USB_UPCON3_PDISHDMA_OFFSET                           16
#define AVR32_USB_UPCON3_PDISHDMA_SIZE                              1
#define AVR32_USB_UPCON3_PERRE                                      3
#define AVR32_USB_UPCON3_PERRE_MASK                        0x00000008
#define AVR32_USB_UPCON3_PERRE_OFFSET                               3
#define AVR32_USB_UPCON3_PERRE_SIZE                                 1
#define AVR32_USB_UPCON3_PFREEZE                                   17
#define AVR32_USB_UPCON3_PFREEZE_MASK                      0x00020000
#define AVR32_USB_UPCON3_PFREEZE_OFFSET                            17
#define AVR32_USB_UPCON3_PFREEZE_SIZE                               1
#define AVR32_USB_UPCON3_RESETVALUE                        0x00000000
#define AVR32_USB_UPCON3_RSTDT                                     18
#define AVR32_USB_UPCON3_RSTDT_MASK                        0x00040000
#define AVR32_USB_UPCON3_RSTDT_OFFSET                              18
#define AVR32_USB_UPCON3_RSTDT_SIZE                                 1
#define AVR32_USB_UPCON3_RXINE                                      0
#define AVR32_USB_UPCON3_RXINE_MASK                        0x00000001
#define AVR32_USB_UPCON3_RXINE_OFFSET                               0
#define AVR32_USB_UPCON3_RXINE_SIZE                                 1
#define AVR32_USB_UPCON3_RXSTALLDE                                  6
#define AVR32_USB_UPCON3_RXSTALLDE_MASK                    0x00000040
#define AVR32_USB_UPCON3_RXSTALLDE_OFFSET                           6
#define AVR32_USB_UPCON3_RXSTALLDE_SIZE                             1
#define AVR32_USB_UPCON3_SHORTPACKETIE                              7
#define AVR32_USB_UPCON3_SHORTPACKETIE_MASK                0x00000080
#define AVR32_USB_UPCON3_SHORTPACKETIE_OFFSET                       7
#define AVR32_USB_UPCON3_SHORTPACKETIE_SIZE                         1
#define AVR32_USB_UPCON3_TXOUTE                                     1
#define AVR32_USB_UPCON3_TXOUTE_MASK                       0x00000002
#define AVR32_USB_UPCON3_TXOUTE_OFFSET                              1
#define AVR32_USB_UPCON3_TXOUTE_SIZE                                1
#define AVR32_USB_UPCON3_TXSTPE                                     2
#define AVR32_USB_UPCON3_TXSTPE_MASK                       0x00000004
#define AVR32_USB_UPCON3_TXSTPE_OFFSET                              2
#define AVR32_USB_UPCON3_TXSTPE_SIZE                                1
#define AVR32_USB_UPCON4                                   0x000005d0
#define AVR32_USB_UPCON4CLR                                0x00000630
#define AVR32_USB_UPCON4CLR_FIFOCONC                               14
#define AVR32_USB_UPCON4CLR_FIFOCONC_MASK                  0x00004000
#define AVR32_USB_UPCON4CLR_FIFOCONC_OFFSET                        14
#define AVR32_USB_UPCON4CLR_FIFOCONC_SIZE                           1
#define AVR32_USB_UPCON4CLR_MASK                           0x000350ff
#define AVR32_USB_UPCON4CLR_NAKEDEC                                 4
#define AVR32_USB_UPCON4CLR_NAKEDEC_MASK                   0x00000010
#define AVR32_USB_UPCON4CLR_NAKEDEC_OFFSET                          4
#define AVR32_USB_UPCON4CLR_NAKEDEC_SIZE                            1
#define AVR32_USB_UPCON4CLR_NBUSYBKEC                              12
#define AVR32_USB_UPCON4CLR_NBUSYBKEC_MASK                 0x00001000
#define AVR32_USB_UPCON4CLR_NBUSYBKEC_OFFSET                       12
#define AVR32_USB_UPCON4CLR_NBUSYBKEC_SIZE                          1
#define AVR32_USB_UPCON4CLR_OVERFIEC                                5
#define AVR32_USB_UPCON4CLR_OVERFIEC_MASK                  0x00000020
#define AVR32_USB_UPCON4CLR_OVERFIEC_OFFSET                         5
#define AVR32_USB_UPCON4CLR_OVERFIEC_SIZE                           1
#define AVR32_USB_UPCON4CLR_PDISHDMAC                              16
#define AVR32_USB_UPCON4CLR_PDISHDMAC_MASK                 0x00010000
#define AVR32_USB_UPCON4CLR_PDISHDMAC_OFFSET                       16
#define AVR32_USB_UPCON4CLR_PDISHDMAC_SIZE                          1
#define AVR32_USB_UPCON4CLR_PERREC                                  3
#define AVR32_USB_UPCON4CLR_PERREC_MASK                    0x00000008
#define AVR32_USB_UPCON4CLR_PERREC_OFFSET                           3
#define AVR32_USB_UPCON4CLR_PERREC_SIZE                             1
#define AVR32_USB_UPCON4CLR_PFREEZEC                               17
#define AVR32_USB_UPCON4CLR_PFREEZEC_MASK                  0x00020000
#define AVR32_USB_UPCON4CLR_PFREEZEC_OFFSET                        17
#define AVR32_USB_UPCON4CLR_PFREEZEC_SIZE                           1
#define AVR32_USB_UPCON4CLR_RESETVALUE                     0x00000000
#define AVR32_USB_UPCON4CLR_RXINEC                                  0
#define AVR32_USB_UPCON4CLR_RXINEC_MASK                    0x00000001
#define AVR32_USB_UPCON4CLR_RXINEC_OFFSET                           0
#define AVR32_USB_UPCON4CLR_RXINEC_SIZE                             1
#define AVR32_USB_UPCON4CLR_RXSTALLDEC                              6
#define AVR32_USB_UPCON4CLR_RXSTALLDEC_MASK                0x00000040
#define AVR32_USB_UPCON4CLR_RXSTALLDEC_OFFSET                       6
#define AVR32_USB_UPCON4CLR_RXSTALLDEC_SIZE                         1
#define AVR32_USB_UPCON4CLR_SHORTPACKETIEC                          7
#define AVR32_USB_UPCON4CLR_SHORTPACKETIEC_MASK            0x00000080
#define AVR32_USB_UPCON4CLR_SHORTPACKETIEC_OFFSET                   7
#define AVR32_USB_UPCON4CLR_SHORTPACKETIEC_SIZE                     1
#define AVR32_USB_UPCON4CLR_TXOUTEC                                 1
#define AVR32_USB_UPCON4CLR_TXOUTEC_MASK                   0x00000002
#define AVR32_USB_UPCON4CLR_TXOUTEC_OFFSET                          1
#define AVR32_USB_UPCON4CLR_TXOUTEC_SIZE                            1
#define AVR32_USB_UPCON4CLR_TXSTPEC                                 2
#define AVR32_USB_UPCON4CLR_TXSTPEC_MASK                   0x00000004
#define AVR32_USB_UPCON4CLR_TXSTPEC_OFFSET                          2
#define AVR32_USB_UPCON4CLR_TXSTPEC_SIZE                            1
#define AVR32_USB_UPCON4SET                                0x00000600
#define AVR32_USB_UPCON4SET_MASK                           0x000710ff
#define AVR32_USB_UPCON4SET_NAKEDES                                 4
#define AVR32_USB_UPCON4SET_NAKEDES_MASK                   0x00000010
#define AVR32_USB_UPCON4SET_NAKEDES_OFFSET                          4
#define AVR32_USB_UPCON4SET_NAKEDES_SIZE                            1
#define AVR32_USB_UPCON4SET_NBUSYBKES                              12
#define AVR32_USB_UPCON4SET_NBUSYBKES_MASK                 0x00001000
#define AVR32_USB_UPCON4SET_NBUSYBKES_OFFSET                       12
#define AVR32_USB_UPCON4SET_NBUSYBKES_SIZE                          1
#define AVR32_USB_UPCON4SET_OVERFIES                                5
#define AVR32_USB_UPCON4SET_OVERFIES_MASK                  0x00000020
#define AVR32_USB_UPCON4SET_OVERFIES_OFFSET                         5
#define AVR32_USB_UPCON4SET_OVERFIES_SIZE                           1
#define AVR32_USB_UPCON4SET_PDISHDMAS                              16
#define AVR32_USB_UPCON4SET_PDISHDMAS_MASK                 0x00010000
#define AVR32_USB_UPCON4SET_PDISHDMAS_OFFSET                       16
#define AVR32_USB_UPCON4SET_PDISHDMAS_SIZE                          1
#define AVR32_USB_UPCON4SET_PERRES                                  3
#define AVR32_USB_UPCON4SET_PERRES_MASK                    0x00000008
#define AVR32_USB_UPCON4SET_PERRES_OFFSET                           3
#define AVR32_USB_UPCON4SET_PERRES_SIZE                             1
#define AVR32_USB_UPCON4SET_PFREEZES                               17
#define AVR32_USB_UPCON4SET_PFREEZES_MASK                  0x00020000
#define AVR32_USB_UPCON4SET_PFREEZES_OFFSET                        17
#define AVR32_USB_UPCON4SET_PFREEZES_SIZE                           1
#define AVR32_USB_UPCON4SET_RESETVALUE                     0x00000000
#define AVR32_USB_UPCON4SET_RSTDTS                                 18
#define AVR32_USB_UPCON4SET_RSTDTS_MASK                    0x00040000
#define AVR32_USB_UPCON4SET_RSTDTS_OFFSET                          18
#define AVR32_USB_UPCON4SET_RSTDTS_SIZE                             1
#define AVR32_USB_UPCON4SET_RXINES                                  0
#define AVR32_USB_UPCON4SET_RXINES_MASK                    0x00000001
#define AVR32_USB_UPCON4SET_RXINES_OFFSET                           0
#define AVR32_USB_UPCON4SET_RXINES_SIZE                             1
#define AVR32_USB_UPCON4SET_RXSTALLDES                              6
#define AVR32_USB_UPCON4SET_RXSTALLDES_MASK                0x00000040
#define AVR32_USB_UPCON4SET_RXSTALLDES_OFFSET                       6
#define AVR32_USB_UPCON4SET_RXSTALLDES_SIZE                         1
#define AVR32_USB_UPCON4SET_SHORTPACKETIES                          7
#define AVR32_USB_UPCON4SET_SHORTPACKETIES_MASK            0x00000080
#define AVR32_USB_UPCON4SET_SHORTPACKETIES_OFFSET                   7
#define AVR32_USB_UPCON4SET_SHORTPACKETIES_SIZE                     1
#define AVR32_USB_UPCON4SET_TXOUTES                                 1
#define AVR32_USB_UPCON4SET_TXOUTES_MASK                   0x00000002
#define AVR32_USB_UPCON4SET_TXOUTES_OFFSET                          1
#define AVR32_USB_UPCON4SET_TXOUTES_SIZE                            1
#define AVR32_USB_UPCON4SET_TXSTPES                                 2
#define AVR32_USB_UPCON4SET_TXSTPES_MASK                   0x00000004
#define AVR32_USB_UPCON4SET_TXSTPES_OFFSET                          2
#define AVR32_USB_UPCON4SET_TXSTPES_SIZE                            1
#define AVR32_USB_UPCON4_FIFOCON                                   14
#define AVR32_USB_UPCON4_FIFOCON_MASK                      0x00004000
#define AVR32_USB_UPCON4_FIFOCON_OFFSET                            14
#define AVR32_USB_UPCON4_FIFOCON_SIZE                               1
#define AVR32_USB_UPCON4_MASK                              0x000750ff
#define AVR32_USB_UPCON4_NAKEDE                                     4
#define AVR32_USB_UPCON4_NAKEDE_MASK                       0x00000010
#define AVR32_USB_UPCON4_NAKEDE_OFFSET                              4
#define AVR32_USB_UPCON4_NAKEDE_SIZE                                1
#define AVR32_USB_UPCON4_NBUSYBKE                                  12
#define AVR32_USB_UPCON4_NBUSYBKE_MASK                     0x00001000
#define AVR32_USB_UPCON4_NBUSYBKE_OFFSET                           12
#define AVR32_USB_UPCON4_NBUSYBKE_SIZE                              1
#define AVR32_USB_UPCON4_OVERFIE                                    5
#define AVR32_USB_UPCON4_OVERFIE_MASK                      0x00000020
#define AVR32_USB_UPCON4_OVERFIE_OFFSET                             5
#define AVR32_USB_UPCON4_OVERFIE_SIZE                               1
#define AVR32_USB_UPCON4_PDISHDMA                                  16
#define AVR32_USB_UPCON4_PDISHDMA_MASK                     0x00010000
#define AVR32_USB_UPCON4_PDISHDMA_OFFSET                           16
#define AVR32_USB_UPCON4_PDISHDMA_SIZE                              1
#define AVR32_USB_UPCON4_PERRE                                      3
#define AVR32_USB_UPCON4_PERRE_MASK                        0x00000008
#define AVR32_USB_UPCON4_PERRE_OFFSET                               3
#define AVR32_USB_UPCON4_PERRE_SIZE                                 1
#define AVR32_USB_UPCON4_PFREEZE                                   17
#define AVR32_USB_UPCON4_PFREEZE_MASK                      0x00020000
#define AVR32_USB_UPCON4_PFREEZE_OFFSET                            17
#define AVR32_USB_UPCON4_PFREEZE_SIZE                               1
#define AVR32_USB_UPCON4_RESETVALUE                        0x00000000
#define AVR32_USB_UPCON4_RSTDT                                     18
#define AVR32_USB_UPCON4_RSTDT_MASK                        0x00040000
#define AVR32_USB_UPCON4_RSTDT_OFFSET                              18
#define AVR32_USB_UPCON4_RSTDT_SIZE                                 1
#define AVR32_USB_UPCON4_RXINE                                      0
#define AVR32_USB_UPCON4_RXINE_MASK                        0x00000001
#define AVR32_USB_UPCON4_RXINE_OFFSET                               0
#define AVR32_USB_UPCON4_RXINE_SIZE                                 1
#define AVR32_USB_UPCON4_RXSTALLDE                                  6
#define AVR32_USB_UPCON4_RXSTALLDE_MASK                    0x00000040
#define AVR32_USB_UPCON4_RXSTALLDE_OFFSET                           6
#define AVR32_USB_UPCON4_RXSTALLDE_SIZE                             1
#define AVR32_USB_UPCON4_SHORTPACKETIE                              7
#define AVR32_USB_UPCON4_SHORTPACKETIE_MASK                0x00000080
#define AVR32_USB_UPCON4_SHORTPACKETIE_OFFSET                       7
#define AVR32_USB_UPCON4_SHORTPACKETIE_SIZE                         1
#define AVR32_USB_UPCON4_TXOUTE                                     1
#define AVR32_USB_UPCON4_TXOUTE_MASK                       0x00000002
#define AVR32_USB_UPCON4_TXOUTE_OFFSET                              1
#define AVR32_USB_UPCON4_TXOUTE_SIZE                                1
#define AVR32_USB_UPCON4_TXSTPE                                     2
#define AVR32_USB_UPCON4_TXSTPE_MASK                       0x00000004
#define AVR32_USB_UPCON4_TXSTPE_OFFSET                              2
#define AVR32_USB_UPCON4_TXSTPE_SIZE                                1
#define AVR32_USB_UPCON5                                   0x000005d4
#define AVR32_USB_UPCON5CLR                                0x00000634
#define AVR32_USB_UPCON5CLR_FIFOCONC                               14
#define AVR32_USB_UPCON5CLR_FIFOCONC_MASK                  0x00004000
#define AVR32_USB_UPCON5CLR_FIFOCONC_OFFSET                        14
#define AVR32_USB_UPCON5CLR_FIFOCONC_SIZE                           1
#define AVR32_USB_UPCON5CLR_MASK                           0x000350ff
#define AVR32_USB_UPCON5CLR_NAKEDEC                                 4
#define AVR32_USB_UPCON5CLR_NAKEDEC_MASK                   0x00000010
#define AVR32_USB_UPCON5CLR_NAKEDEC_OFFSET                          4
#define AVR32_USB_UPCON5CLR_NAKEDEC_SIZE                            1
#define AVR32_USB_UPCON5CLR_NBUSYBKEC                              12
#define AVR32_USB_UPCON5CLR_NBUSYBKEC_MASK                 0x00001000
#define AVR32_USB_UPCON5CLR_NBUSYBKEC_OFFSET                       12
#define AVR32_USB_UPCON5CLR_NBUSYBKEC_SIZE                          1
#define AVR32_USB_UPCON5CLR_OVERFIEC                                5
#define AVR32_USB_UPCON5CLR_OVERFIEC_MASK                  0x00000020
#define AVR32_USB_UPCON5CLR_OVERFIEC_OFFSET                         5
#define AVR32_USB_UPCON5CLR_OVERFIEC_SIZE                           1
#define AVR32_USB_UPCON5CLR_PDISHDMAC                              16
#define AVR32_USB_UPCON5CLR_PDISHDMAC_MASK                 0x00010000
#define AVR32_USB_UPCON5CLR_PDISHDMAC_OFFSET                       16
#define AVR32_USB_UPCON5CLR_PDISHDMAC_SIZE                          1
#define AVR32_USB_UPCON5CLR_PERREC                                  3
#define AVR32_USB_UPCON5CLR_PERREC_MASK                    0x00000008
#define AVR32_USB_UPCON5CLR_PERREC_OFFSET                           3
#define AVR32_USB_UPCON5CLR_PERREC_SIZE                             1
#define AVR32_USB_UPCON5CLR_PFREEZEC                               17
#define AVR32_USB_UPCON5CLR_PFREEZEC_MASK                  0x00020000
#define AVR32_USB_UPCON5CLR_PFREEZEC_OFFSET                        17
#define AVR32_USB_UPCON5CLR_PFREEZEC_SIZE                           1
#define AVR32_USB_UPCON5CLR_RESETVALUE                     0x00000000
#define AVR32_USB_UPCON5CLR_RXINEC                                  0
#define AVR32_USB_UPCON5CLR_RXINEC_MASK                    0x00000001
#define AVR32_USB_UPCON5CLR_RXINEC_OFFSET                           0
#define AVR32_USB_UPCON5CLR_RXINEC_SIZE                             1
#define AVR32_USB_UPCON5CLR_RXSTALLDEC                              6
#define AVR32_USB_UPCON5CLR_RXSTALLDEC_MASK                0x00000040
#define AVR32_USB_UPCON5CLR_RXSTALLDEC_OFFSET                       6
#define AVR32_USB_UPCON5CLR_RXSTALLDEC_SIZE                         1
#define AVR32_USB_UPCON5CLR_SHORTPACKETIEC                          7
#define AVR32_USB_UPCON5CLR_SHORTPACKETIEC_MASK            0x00000080
#define AVR32_USB_UPCON5CLR_SHORTPACKETIEC_OFFSET                   7
#define AVR32_USB_UPCON5CLR_SHORTPACKETIEC_SIZE                     1
#define AVR32_USB_UPCON5CLR_TXOUTEC                                 1
#define AVR32_USB_UPCON5CLR_TXOUTEC_MASK                   0x00000002
#define AVR32_USB_UPCON5CLR_TXOUTEC_OFFSET                          1
#define AVR32_USB_UPCON5CLR_TXOUTEC_SIZE                            1
#define AVR32_USB_UPCON5CLR_TXSTPEC                                 2
#define AVR32_USB_UPCON5CLR_TXSTPEC_MASK                   0x00000004
#define AVR32_USB_UPCON5CLR_TXSTPEC_OFFSET                          2
#define AVR32_USB_UPCON5CLR_TXSTPEC_SIZE                            1
#define AVR32_USB_UPCON5SET                                0x00000604
#define AVR32_USB_UPCON5SET_MASK                           0x000710ff
#define AVR32_USB_UPCON5SET_NAKEDES                                 4
#define AVR32_USB_UPCON5SET_NAKEDES_MASK                   0x00000010
#define AVR32_USB_UPCON5SET_NAKEDES_OFFSET                          4
#define AVR32_USB_UPCON5SET_NAKEDES_SIZE                            1
#define AVR32_USB_UPCON5SET_NBUSYBKES                              12
#define AVR32_USB_UPCON5SET_NBUSYBKES_MASK                 0x00001000
#define AVR32_USB_UPCON5SET_NBUSYBKES_OFFSET                       12
#define AVR32_USB_UPCON5SET_NBUSYBKES_SIZE                          1
#define AVR32_USB_UPCON5SET_OVERFIES                                5
#define AVR32_USB_UPCON5SET_OVERFIES_MASK                  0x00000020
#define AVR32_USB_UPCON5SET_OVERFIES_OFFSET                         5
#define AVR32_USB_UPCON5SET_OVERFIES_SIZE                           1
#define AVR32_USB_UPCON5SET_PDISHDMAS                              16
#define AVR32_USB_UPCON5SET_PDISHDMAS_MASK                 0x00010000
#define AVR32_USB_UPCON5SET_PDISHDMAS_OFFSET                       16
#define AVR32_USB_UPCON5SET_PDISHDMAS_SIZE                          1
#define AVR32_USB_UPCON5SET_PERRES                                  3
#define AVR32_USB_UPCON5SET_PERRES_MASK                    0x00000008
#define AVR32_USB_UPCON5SET_PERRES_OFFSET                           3
#define AVR32_USB_UPCON5SET_PERRES_SIZE                             1
#define AVR32_USB_UPCON5SET_PFREEZES                               17
#define AVR32_USB_UPCON5SET_PFREEZES_MASK                  0x00020000
#define AVR32_USB_UPCON5SET_PFREEZES_OFFSET                        17
#define AVR32_USB_UPCON5SET_PFREEZES_SIZE                           1
#define AVR32_USB_UPCON5SET_RESETVALUE                     0x00000000
#define AVR32_USB_UPCON5SET_RSTDTS                                 18
#define AVR32_USB_UPCON5SET_RSTDTS_MASK                    0x00040000
#define AVR32_USB_UPCON5SET_RSTDTS_OFFSET                          18
#define AVR32_USB_UPCON5SET_RSTDTS_SIZE                             1
#define AVR32_USB_UPCON5SET_RXINES                                  0
#define AVR32_USB_UPCON5SET_RXINES_MASK                    0x00000001
#define AVR32_USB_UPCON5SET_RXINES_OFFSET                           0
#define AVR32_USB_UPCON5SET_RXINES_SIZE                             1
#define AVR32_USB_UPCON5SET_RXSTALLDES                              6
#define AVR32_USB_UPCON5SET_RXSTALLDES_MASK                0x00000040
#define AVR32_USB_UPCON5SET_RXSTALLDES_OFFSET                       6
#define AVR32_USB_UPCON5SET_RXSTALLDES_SIZE                         1
#define AVR32_USB_UPCON5SET_SHORTPACKETIES                          7
#define AVR32_USB_UPCON5SET_SHORTPACKETIES_MASK            0x00000080
#define AVR32_USB_UPCON5SET_SHORTPACKETIES_OFFSET                   7
#define AVR32_USB_UPCON5SET_SHORTPACKETIES_SIZE                     1
#define AVR32_USB_UPCON5SET_TXOUTES                                 1
#define AVR32_USB_UPCON5SET_TXOUTES_MASK                   0x00000002
#define AVR32_USB_UPCON5SET_TXOUTES_OFFSET                          1
#define AVR32_USB_UPCON5SET_TXOUTES_SIZE                            1
#define AVR32_USB_UPCON5SET_TXSTPES                                 2
#define AVR32_USB_UPCON5SET_TXSTPES_MASK                   0x00000004
#define AVR32_USB_UPCON5SET_TXSTPES_OFFSET                          2
#define AVR32_USB_UPCON5SET_TXSTPES_SIZE                            1
#define AVR32_USB_UPCON5_FIFOCON                                   14
#define AVR32_USB_UPCON5_FIFOCON_MASK                      0x00004000
#define AVR32_USB_UPCON5_FIFOCON_OFFSET                            14
#define AVR32_USB_UPCON5_FIFOCON_SIZE                               1
#define AVR32_USB_UPCON5_MASK                              0x000750ff
#define AVR32_USB_UPCON5_NAKEDE                                     4
#define AVR32_USB_UPCON5_NAKEDE_MASK                       0x00000010
#define AVR32_USB_UPCON5_NAKEDE_OFFSET                              4
#define AVR32_USB_UPCON5_NAKEDE_SIZE                                1
#define AVR32_USB_UPCON5_NBUSYBKE                                  12
#define AVR32_USB_UPCON5_NBUSYBKE_MASK                     0x00001000
#define AVR32_USB_UPCON5_NBUSYBKE_OFFSET                           12
#define AVR32_USB_UPCON5_NBUSYBKE_SIZE                              1
#define AVR32_USB_UPCON5_OVERFIE                                    5
#define AVR32_USB_UPCON5_OVERFIE_MASK                      0x00000020
#define AVR32_USB_UPCON5_OVERFIE_OFFSET                             5
#define AVR32_USB_UPCON5_OVERFIE_SIZE                               1
#define AVR32_USB_UPCON5_PDISHDMA                                  16
#define AVR32_USB_UPCON5_PDISHDMA_MASK                     0x00010000
#define AVR32_USB_UPCON5_PDISHDMA_OFFSET                           16
#define AVR32_USB_UPCON5_PDISHDMA_SIZE                              1
#define AVR32_USB_UPCON5_PERRE                                      3
#define AVR32_USB_UPCON5_PERRE_MASK                        0x00000008
#define AVR32_USB_UPCON5_PERRE_OFFSET                               3
#define AVR32_USB_UPCON5_PERRE_SIZE                                 1
#define AVR32_USB_UPCON5_PFREEZE                                   17
#define AVR32_USB_UPCON5_PFREEZE_MASK                      0x00020000
#define AVR32_USB_UPCON5_PFREEZE_OFFSET                            17
#define AVR32_USB_UPCON5_PFREEZE_SIZE                               1
#define AVR32_USB_UPCON5_RESETVALUE                        0x00000000
#define AVR32_USB_UPCON5_RSTDT                                     18
#define AVR32_USB_UPCON5_RSTDT_MASK                        0x00040000
#define AVR32_USB_UPCON5_RSTDT_OFFSET                              18
#define AVR32_USB_UPCON5_RSTDT_SIZE                                 1
#define AVR32_USB_UPCON5_RXINE                                      0
#define AVR32_USB_UPCON5_RXINE_MASK                        0x00000001
#define AVR32_USB_UPCON5_RXINE_OFFSET                               0
#define AVR32_USB_UPCON5_RXINE_SIZE                                 1
#define AVR32_USB_UPCON5_RXSTALLDE                                  6
#define AVR32_USB_UPCON5_RXSTALLDE_MASK                    0x00000040
#define AVR32_USB_UPCON5_RXSTALLDE_OFFSET                           6
#define AVR32_USB_UPCON5_RXSTALLDE_SIZE                             1
#define AVR32_USB_UPCON5_SHORTPACKETIE                              7
#define AVR32_USB_UPCON5_SHORTPACKETIE_MASK                0x00000080
#define AVR32_USB_UPCON5_SHORTPACKETIE_OFFSET                       7
#define AVR32_USB_UPCON5_SHORTPACKETIE_SIZE                         1
#define AVR32_USB_UPCON5_TXOUTE                                     1
#define AVR32_USB_UPCON5_TXOUTE_MASK                       0x00000002
#define AVR32_USB_UPCON5_TXOUTE_OFFSET                              1
#define AVR32_USB_UPCON5_TXOUTE_SIZE                                1
#define AVR32_USB_UPCON5_TXSTPE                                     2
#define AVR32_USB_UPCON5_TXSTPE_MASK                       0x00000004
#define AVR32_USB_UPCON5_TXSTPE_OFFSET                              2
#define AVR32_USB_UPCON5_TXSTPE_SIZE                                1
#define AVR32_USB_UPCON6                                   0x000005d8
#define AVR32_USB_UPCON6CLR                                0x00000638
#define AVR32_USB_UPCON6CLR_FIFOCONC                               14
#define AVR32_USB_UPCON6CLR_FIFOCONC_MASK                  0x00004000
#define AVR32_USB_UPCON6CLR_FIFOCONC_OFFSET                        14
#define AVR32_USB_UPCON6CLR_FIFOCONC_SIZE                           1
#define AVR32_USB_UPCON6CLR_MASK                           0x000350ff
#define AVR32_USB_UPCON6CLR_NAKEDEC                                 4
#define AVR32_USB_UPCON6CLR_NAKEDEC_MASK                   0x00000010
#define AVR32_USB_UPCON6CLR_NAKEDEC_OFFSET                          4
#define AVR32_USB_UPCON6CLR_NAKEDEC_SIZE                            1
#define AVR32_USB_UPCON6CLR_NBUSYBKEC                              12
#define AVR32_USB_UPCON6CLR_NBUSYBKEC_MASK                 0x00001000
#define AVR32_USB_UPCON6CLR_NBUSYBKEC_OFFSET                       12
#define AVR32_USB_UPCON6CLR_NBUSYBKEC_SIZE                          1
#define AVR32_USB_UPCON6CLR_OVERFIEC                                5
#define AVR32_USB_UPCON6CLR_OVERFIEC_MASK                  0x00000020
#define AVR32_USB_UPCON6CLR_OVERFIEC_OFFSET                         5
#define AVR32_USB_UPCON6CLR_OVERFIEC_SIZE                           1
#define AVR32_USB_UPCON6CLR_PDISHDMAC                              16
#define AVR32_USB_UPCON6CLR_PDISHDMAC_MASK                 0x00010000
#define AVR32_USB_UPCON6CLR_PDISHDMAC_OFFSET                       16
#define AVR32_USB_UPCON6CLR_PDISHDMAC_SIZE                          1
#define AVR32_USB_UPCON6CLR_PERREC                                  3
#define AVR32_USB_UPCON6CLR_PERREC_MASK                    0x00000008
#define AVR32_USB_UPCON6CLR_PERREC_OFFSET                           3
#define AVR32_USB_UPCON6CLR_PERREC_SIZE                             1
#define AVR32_USB_UPCON6CLR_PFREEZEC                               17
#define AVR32_USB_UPCON6CLR_PFREEZEC_MASK                  0x00020000
#define AVR32_USB_UPCON6CLR_PFREEZEC_OFFSET                        17
#define AVR32_USB_UPCON6CLR_PFREEZEC_SIZE                           1
#define AVR32_USB_UPCON6CLR_RESETVALUE                     0x00000000
#define AVR32_USB_UPCON6CLR_RXINEC                                  0
#define AVR32_USB_UPCON6CLR_RXINEC_MASK                    0x00000001
#define AVR32_USB_UPCON6CLR_RXINEC_OFFSET                           0
#define AVR32_USB_UPCON6CLR_RXINEC_SIZE                             1
#define AVR32_USB_UPCON6CLR_RXSTALLDEC                              6
#define AVR32_USB_UPCON6CLR_RXSTALLDEC_MASK                0x00000040
#define AVR32_USB_UPCON6CLR_RXSTALLDEC_OFFSET                       6
#define AVR32_USB_UPCON6CLR_RXSTALLDEC_SIZE                         1
#define AVR32_USB_UPCON6CLR_SHORTPACKETIEC                          7
#define AVR32_USB_UPCON6CLR_SHORTPACKETIEC_MASK            0x00000080
#define AVR32_USB_UPCON6CLR_SHORTPACKETIEC_OFFSET                   7
#define AVR32_USB_UPCON6CLR_SHORTPACKETIEC_SIZE                     1
#define AVR32_USB_UPCON6CLR_TXOUTEC                                 1
#define AVR32_USB_UPCON6CLR_TXOUTEC_MASK                   0x00000002
#define AVR32_USB_UPCON6CLR_TXOUTEC_OFFSET                          1
#define AVR32_USB_UPCON6CLR_TXOUTEC_SIZE                            1
#define AVR32_USB_UPCON6CLR_TXSTPEC                                 2
#define AVR32_USB_UPCON6CLR_TXSTPEC_MASK                   0x00000004
#define AVR32_USB_UPCON6CLR_TXSTPEC_OFFSET                          2
#define AVR32_USB_UPCON6CLR_TXSTPEC_SIZE                            1
#define AVR32_USB_UPCON6SET                                0x00000608
#define AVR32_USB_UPCON6SET_MASK                           0x000710ff
#define AVR32_USB_UPCON6SET_NAKEDES                                 4
#define AVR32_USB_UPCON6SET_NAKEDES_MASK                   0x00000010
#define AVR32_USB_UPCON6SET_NAKEDES_OFFSET                          4
#define AVR32_USB_UPCON6SET_NAKEDES_SIZE                            1
#define AVR32_USB_UPCON6SET_NBUSYBKES                              12
#define AVR32_USB_UPCON6SET_NBUSYBKES_MASK                 0x00001000
#define AVR32_USB_UPCON6SET_NBUSYBKES_OFFSET                       12
#define AVR32_USB_UPCON6SET_NBUSYBKES_SIZE                          1
#define AVR32_USB_UPCON6SET_OVERFIES                                5
#define AVR32_USB_UPCON6SET_OVERFIES_MASK                  0x00000020
#define AVR32_USB_UPCON6SET_OVERFIES_OFFSET                         5
#define AVR32_USB_UPCON6SET_OVERFIES_SIZE                           1
#define AVR32_USB_UPCON6SET_PDISHDMAS                              16
#define AVR32_USB_UPCON6SET_PDISHDMAS_MASK                 0x00010000
#define AVR32_USB_UPCON6SET_PDISHDMAS_OFFSET                       16
#define AVR32_USB_UPCON6SET_PDISHDMAS_SIZE                          1
#define AVR32_USB_UPCON6SET_PERRES                                  3
#define AVR32_USB_UPCON6SET_PERRES_MASK                    0x00000008
#define AVR32_USB_UPCON6SET_PERRES_OFFSET                           3
#define AVR32_USB_UPCON6SET_PERRES_SIZE                             1
#define AVR32_USB_UPCON6SET_PFREEZES                               17
#define AVR32_USB_UPCON6SET_PFREEZES_MASK                  0x00020000
#define AVR32_USB_UPCON6SET_PFREEZES_OFFSET                        17
#define AVR32_USB_UPCON6SET_PFREEZES_SIZE                           1
#define AVR32_USB_UPCON6SET_RESETVALUE                     0x00000000
#define AVR32_USB_UPCON6SET_RSTDTS                                 18
#define AVR32_USB_UPCON6SET_RSTDTS_MASK                    0x00040000
#define AVR32_USB_UPCON6SET_RSTDTS_OFFSET                          18
#define AVR32_USB_UPCON6SET_RSTDTS_SIZE                             1
#define AVR32_USB_UPCON6SET_RXINES                                  0
#define AVR32_USB_UPCON6SET_RXINES_MASK                    0x00000001
#define AVR32_USB_UPCON6SET_RXINES_OFFSET                           0
#define AVR32_USB_UPCON6SET_RXINES_SIZE                             1
#define AVR32_USB_UPCON6SET_RXSTALLDES                              6
#define AVR32_USB_UPCON6SET_RXSTALLDES_MASK                0x00000040
#define AVR32_USB_UPCON6SET_RXSTALLDES_OFFSET                       6
#define AVR32_USB_UPCON6SET_RXSTALLDES_SIZE                         1
#define AVR32_USB_UPCON6SET_SHORTPACKETIES                          7
#define AVR32_USB_UPCON6SET_SHORTPACKETIES_MASK            0x00000080
#define AVR32_USB_UPCON6SET_SHORTPACKETIES_OFFSET                   7
#define AVR32_USB_UPCON6SET_SHORTPACKETIES_SIZE                     1
#define AVR32_USB_UPCON6SET_TXOUTES                                 1
#define AVR32_USB_UPCON6SET_TXOUTES_MASK                   0x00000002
#define AVR32_USB_UPCON6SET_TXOUTES_OFFSET                          1
#define AVR32_USB_UPCON6SET_TXOUTES_SIZE                            1
#define AVR32_USB_UPCON6SET_TXSTPES                                 2
#define AVR32_USB_UPCON6SET_TXSTPES_MASK                   0x00000004
#define AVR32_USB_UPCON6SET_TXSTPES_OFFSET                          2
#define AVR32_USB_UPCON6SET_TXSTPES_SIZE                            1
#define AVR32_USB_UPCON6_FIFOCON                                   14
#define AVR32_USB_UPCON6_FIFOCON_MASK                      0x00004000
#define AVR32_USB_UPCON6_FIFOCON_OFFSET                            14
#define AVR32_USB_UPCON6_FIFOCON_SIZE                               1
#define AVR32_USB_UPCON6_MASK                              0x000750ff
#define AVR32_USB_UPCON6_NAKEDE                                     4
#define AVR32_USB_UPCON6_NAKEDE_MASK                       0x00000010
#define AVR32_USB_UPCON6_NAKEDE_OFFSET                              4
#define AVR32_USB_UPCON6_NAKEDE_SIZE                                1
#define AVR32_USB_UPCON6_NBUSYBKE                                  12
#define AVR32_USB_UPCON6_NBUSYBKE_MASK                     0x00001000
#define AVR32_USB_UPCON6_NBUSYBKE_OFFSET                           12
#define AVR32_USB_UPCON6_NBUSYBKE_SIZE                              1
#define AVR32_USB_UPCON6_OVERFIE                                    5
#define AVR32_USB_UPCON6_OVERFIE_MASK                      0x00000020
#define AVR32_USB_UPCON6_OVERFIE_OFFSET                             5
#define AVR32_USB_UPCON6_OVERFIE_SIZE                               1
#define AVR32_USB_UPCON6_PDISHDMA                                  16
#define AVR32_USB_UPCON6_PDISHDMA_MASK                     0x00010000
#define AVR32_USB_UPCON6_PDISHDMA_OFFSET                           16
#define AVR32_USB_UPCON6_PDISHDMA_SIZE                              1
#define AVR32_USB_UPCON6_PERRE                                      3
#define AVR32_USB_UPCON6_PERRE_MASK                        0x00000008
#define AVR32_USB_UPCON6_PERRE_OFFSET                               3
#define AVR32_USB_UPCON6_PERRE_SIZE                                 1
#define AVR32_USB_UPCON6_PFREEZE                                   17
#define AVR32_USB_UPCON6_PFREEZE_MASK                      0x00020000
#define AVR32_USB_UPCON6_PFREEZE_OFFSET                            17
#define AVR32_USB_UPCON6_PFREEZE_SIZE                               1
#define AVR32_USB_UPCON6_RESETVALUE                        0x00000000
#define AVR32_USB_UPCON6_RSTDT                                     18
#define AVR32_USB_UPCON6_RSTDT_MASK                        0x00040000
#define AVR32_USB_UPCON6_RSTDT_OFFSET                              18
#define AVR32_USB_UPCON6_RSTDT_SIZE                                 1
#define AVR32_USB_UPCON6_RXINE                                      0
#define AVR32_USB_UPCON6_RXINE_MASK                        0x00000001
#define AVR32_USB_UPCON6_RXINE_OFFSET                               0
#define AVR32_USB_UPCON6_RXINE_SIZE                                 1
#define AVR32_USB_UPCON6_RXSTALLDE                                  6
#define AVR32_USB_UPCON6_RXSTALLDE_MASK                    0x00000040
#define AVR32_USB_UPCON6_RXSTALLDE_OFFSET                           6
#define AVR32_USB_UPCON6_RXSTALLDE_SIZE                             1
#define AVR32_USB_UPCON6_SHORTPACKETIE                              7
#define AVR32_USB_UPCON6_SHORTPACKETIE_MASK                0x00000080
#define AVR32_USB_UPCON6_SHORTPACKETIE_OFFSET                       7
#define AVR32_USB_UPCON6_SHORTPACKETIE_SIZE                         1
#define AVR32_USB_UPCON6_TXOUTE                                     1
#define AVR32_USB_UPCON6_TXOUTE_MASK                       0x00000002
#define AVR32_USB_UPCON6_TXOUTE_OFFSET                              1
#define AVR32_USB_UPCON6_TXOUTE_SIZE                                1
#define AVR32_USB_UPCON6_TXSTPE                                     2
#define AVR32_USB_UPCON6_TXSTPE_MASK                       0x00000004
#define AVR32_USB_UPCON6_TXSTPE_OFFSET                              2
#define AVR32_USB_UPCON6_TXSTPE_SIZE                                1
#define AVR32_USB_UPCON7                                   0x000005dc
#define AVR32_USB_UPCON7CLR                                0x0000063c
#define AVR32_USB_UPCON7CLR_FIFOCONC                               14
#define AVR32_USB_UPCON7CLR_FIFOCONC_MASK                  0x00004000
#define AVR32_USB_UPCON7CLR_FIFOCONC_OFFSET                        14
#define AVR32_USB_UPCON7CLR_FIFOCONC_SIZE                           1
#define AVR32_USB_UPCON7CLR_MASK                           0x000350ff
#define AVR32_USB_UPCON7CLR_NAKEDEC                                 4
#define AVR32_USB_UPCON7CLR_NAKEDEC_MASK                   0x00000010
#define AVR32_USB_UPCON7CLR_NAKEDEC_OFFSET                          4
#define AVR32_USB_UPCON7CLR_NAKEDEC_SIZE                            1
#define AVR32_USB_UPCON7CLR_NBUSYBKEC                              12
#define AVR32_USB_UPCON7CLR_NBUSYBKEC_MASK                 0x00001000
#define AVR32_USB_UPCON7CLR_NBUSYBKEC_OFFSET                       12
#define AVR32_USB_UPCON7CLR_NBUSYBKEC_SIZE                          1
#define AVR32_USB_UPCON7CLR_OVERFIEC                                5
#define AVR32_USB_UPCON7CLR_OVERFIEC_MASK                  0x00000020
#define AVR32_USB_UPCON7CLR_OVERFIEC_OFFSET                         5
#define AVR32_USB_UPCON7CLR_OVERFIEC_SIZE                           1
#define AVR32_USB_UPCON7CLR_PDISHDMAC                              16
#define AVR32_USB_UPCON7CLR_PDISHDMAC_MASK                 0x00010000
#define AVR32_USB_UPCON7CLR_PDISHDMAC_OFFSET                       16
#define AVR32_USB_UPCON7CLR_PDISHDMAC_SIZE                          1
#define AVR32_USB_UPCON7CLR_PERREC                                  3
#define AVR32_USB_UPCON7CLR_PERREC_MASK                    0x00000008
#define AVR32_USB_UPCON7CLR_PERREC_OFFSET                           3
#define AVR32_USB_UPCON7CLR_PERREC_SIZE                             1
#define AVR32_USB_UPCON7CLR_PFREEZEC                               17
#define AVR32_USB_UPCON7CLR_PFREEZEC_MASK                  0x00020000
#define AVR32_USB_UPCON7CLR_PFREEZEC_OFFSET                        17
#define AVR32_USB_UPCON7CLR_PFREEZEC_SIZE                           1
#define AVR32_USB_UPCON7CLR_RESETVALUE                     0x00000000
#define AVR32_USB_UPCON7CLR_RXINEC                                  0
#define AVR32_USB_UPCON7CLR_RXINEC_MASK                    0x00000001
#define AVR32_USB_UPCON7CLR_RXINEC_OFFSET                           0
#define AVR32_USB_UPCON7CLR_RXINEC_SIZE                             1
#define AVR32_USB_UPCON7CLR_RXSTALLDEC                              6
#define AVR32_USB_UPCON7CLR_RXSTALLDEC_MASK                0x00000040
#define AVR32_USB_UPCON7CLR_RXSTALLDEC_OFFSET                       6
#define AVR32_USB_UPCON7CLR_RXSTALLDEC_SIZE                         1
#define AVR32_USB_UPCON7CLR_SHORTPACKETIEC                          7
#define AVR32_USB_UPCON7CLR_SHORTPACKETIEC_MASK            0x00000080
#define AVR32_USB_UPCON7CLR_SHORTPACKETIEC_OFFSET                   7
#define AVR32_USB_UPCON7CLR_SHORTPACKETIEC_SIZE                     1
#define AVR32_USB_UPCON7CLR_TXOUTEC                                 1
#define AVR32_USB_UPCON7CLR_TXOUTEC_MASK                   0x00000002
#define AVR32_USB_UPCON7CLR_TXOUTEC_OFFSET                          1
#define AVR32_USB_UPCON7CLR_TXOUTEC_SIZE                            1
#define AVR32_USB_UPCON7CLR_TXSTPEC                                 2
#define AVR32_USB_UPCON7CLR_TXSTPEC_MASK                   0x00000004
#define AVR32_USB_UPCON7CLR_TXSTPEC_OFFSET                          2
#define AVR32_USB_UPCON7CLR_TXSTPEC_SIZE                            1
#define AVR32_USB_UPCON7SET                                0x0000060c
#define AVR32_USB_UPCON7SET_MASK                           0x000710ff
#define AVR32_USB_UPCON7SET_NAKEDES                                 4
#define AVR32_USB_UPCON7SET_NAKEDES_MASK                   0x00000010
#define AVR32_USB_UPCON7SET_NAKEDES_OFFSET                          4
#define AVR32_USB_UPCON7SET_NAKEDES_SIZE                            1
#define AVR32_USB_UPCON7SET_NBUSYBKES                              12
#define AVR32_USB_UPCON7SET_NBUSYBKES_MASK                 0x00001000
#define AVR32_USB_UPCON7SET_NBUSYBKES_OFFSET                       12
#define AVR32_USB_UPCON7SET_NBUSYBKES_SIZE                          1
#define AVR32_USB_UPCON7SET_OVERFIES                                5
#define AVR32_USB_UPCON7SET_OVERFIES_MASK                  0x00000020
#define AVR32_USB_UPCON7SET_OVERFIES_OFFSET                         5
#define AVR32_USB_UPCON7SET_OVERFIES_SIZE                           1
#define AVR32_USB_UPCON7SET_PDISHDMAS                              16
#define AVR32_USB_UPCON7SET_PDISHDMAS_MASK                 0x00010000
#define AVR32_USB_UPCON7SET_PDISHDMAS_OFFSET                       16
#define AVR32_USB_UPCON7SET_PDISHDMAS_SIZE                          1
#define AVR32_USB_UPCON7SET_PERRES                                  3
#define AVR32_USB_UPCON7SET_PERRES_MASK                    0x00000008
#define AVR32_USB_UPCON7SET_PERRES_OFFSET                           3
#define AVR32_USB_UPCON7SET_PERRES_SIZE                             1
#define AVR32_USB_UPCON7SET_PFREEZES                               17
#define AVR32_USB_UPCON7SET_PFREEZES_MASK                  0x00020000
#define AVR32_USB_UPCON7SET_PFREEZES_OFFSET                        17
#define AVR32_USB_UPCON7SET_PFREEZES_SIZE                           1
#define AVR32_USB_UPCON7SET_RESETVALUE                     0x00000000
#define AVR32_USB_UPCON7SET_RSTDTS                                 18
#define AVR32_USB_UPCON7SET_RSTDTS_MASK                    0x00040000
#define AVR32_USB_UPCON7SET_RSTDTS_OFFSET                          18
#define AVR32_USB_UPCON7SET_RSTDTS_SIZE                             1
#define AVR32_USB_UPCON7SET_RXINES                                  0
#define AVR32_USB_UPCON7SET_RXINES_MASK                    0x00000001
#define AVR32_USB_UPCON7SET_RXINES_OFFSET                           0
#define AVR32_USB_UPCON7SET_RXINES_SIZE                             1
#define AVR32_USB_UPCON7SET_RXSTALLDES                              6
#define AVR32_USB_UPCON7SET_RXSTALLDES_MASK                0x00000040
#define AVR32_USB_UPCON7SET_RXSTALLDES_OFFSET                       6
#define AVR32_USB_UPCON7SET_RXSTALLDES_SIZE                         1
#define AVR32_USB_UPCON7SET_SHORTPACKETIES                          7
#define AVR32_USB_UPCON7SET_SHORTPACKETIES_MASK            0x00000080
#define AVR32_USB_UPCON7SET_SHORTPACKETIES_OFFSET                   7
#define AVR32_USB_UPCON7SET_SHORTPACKETIES_SIZE                     1
#define AVR32_USB_UPCON7SET_TXOUTES                                 1
#define AVR32_USB_UPCON7SET_TXOUTES_MASK                   0x00000002
#define AVR32_USB_UPCON7SET_TXOUTES_OFFSET                          1
#define AVR32_USB_UPCON7SET_TXOUTES_SIZE                            1
#define AVR32_USB_UPCON7SET_TXSTPES                                 2
#define AVR32_USB_UPCON7SET_TXSTPES_MASK                   0x00000004
#define AVR32_USB_UPCON7SET_TXSTPES_OFFSET                          2
#define AVR32_USB_UPCON7SET_TXSTPES_SIZE                            1
#define AVR32_USB_UPCON7_FIFOCON                                   14
#define AVR32_USB_UPCON7_FIFOCON_MASK                      0x00004000
#define AVR32_USB_UPCON7_FIFOCON_OFFSET                            14
#define AVR32_USB_UPCON7_FIFOCON_SIZE                               1
#define AVR32_USB_UPCON7_MASK                              0x000750ff
#define AVR32_USB_UPCON7_NAKEDE                                     4
#define AVR32_USB_UPCON7_NAKEDE_MASK                       0x00000010
#define AVR32_USB_UPCON7_NAKEDE_OFFSET                              4
#define AVR32_USB_UPCON7_NAKEDE_SIZE                                1
#define AVR32_USB_UPCON7_NBUSYBKE                                  12
#define AVR32_USB_UPCON7_NBUSYBKE_MASK                     0x00001000
#define AVR32_USB_UPCON7_NBUSYBKE_OFFSET                           12
#define AVR32_USB_UPCON7_NBUSYBKE_SIZE                              1
#define AVR32_USB_UPCON7_OVERFIE                                    5
#define AVR32_USB_UPCON7_OVERFIE_MASK                      0x00000020
#define AVR32_USB_UPCON7_OVERFIE_OFFSET                             5
#define AVR32_USB_UPCON7_OVERFIE_SIZE                               1
#define AVR32_USB_UPCON7_PDISHDMA                                  16
#define AVR32_USB_UPCON7_PDISHDMA_MASK                     0x00010000
#define AVR32_USB_UPCON7_PDISHDMA_OFFSET                           16
#define AVR32_USB_UPCON7_PDISHDMA_SIZE                              1
#define AVR32_USB_UPCON7_PERRE                                      3
#define AVR32_USB_UPCON7_PERRE_MASK                        0x00000008
#define AVR32_USB_UPCON7_PERRE_OFFSET                               3
#define AVR32_USB_UPCON7_PERRE_SIZE                                 1
#define AVR32_USB_UPCON7_PFREEZE                                   17
#define AVR32_USB_UPCON7_PFREEZE_MASK                      0x00020000
#define AVR32_USB_UPCON7_PFREEZE_OFFSET                            17
#define AVR32_USB_UPCON7_PFREEZE_SIZE                               1
#define AVR32_USB_UPCON7_RESETVALUE                        0x00000000
#define AVR32_USB_UPCON7_RSTDT                                     18
#define AVR32_USB_UPCON7_RSTDT_MASK                        0x00040000
#define AVR32_USB_UPCON7_RSTDT_OFFSET                              18
#define AVR32_USB_UPCON7_RSTDT_SIZE                                 1
#define AVR32_USB_UPCON7_RXINE                                      0
#define AVR32_USB_UPCON7_RXINE_MASK                        0x00000001
#define AVR32_USB_UPCON7_RXINE_OFFSET                               0
#define AVR32_USB_UPCON7_RXINE_SIZE                                 1
#define AVR32_USB_UPCON7_RXSTALLDE                                  6
#define AVR32_USB_UPCON7_RXSTALLDE_MASK                    0x00000040
#define AVR32_USB_UPCON7_RXSTALLDE_OFFSET                           6
#define AVR32_USB_UPCON7_RXSTALLDE_SIZE                             1
#define AVR32_USB_UPCON7_SHORTPACKETIE                              7
#define AVR32_USB_UPCON7_SHORTPACKETIE_MASK                0x00000080
#define AVR32_USB_UPCON7_SHORTPACKETIE_OFFSET                       7
#define AVR32_USB_UPCON7_SHORTPACKETIE_SIZE                         1
#define AVR32_USB_UPCON7_TXOUTE                                     1
#define AVR32_USB_UPCON7_TXOUTE_MASK                       0x00000002
#define AVR32_USB_UPCON7_TXOUTE_OFFSET                              1
#define AVR32_USB_UPCON7_TXOUTE_SIZE                                1
#define AVR32_USB_UPCON7_TXSTPE                                     2
#define AVR32_USB_UPCON7_TXSTPE_MASK                       0x00000004
#define AVR32_USB_UPCON7_TXSTPE_OFFSET                              2
#define AVR32_USB_UPCON7_TXSTPE_SIZE                                1
#define AVR32_USB_UPDAT0                                   0x000006b0
#define AVR32_USB_UPDAT0_MASK                              0xffffffff
#define AVR32_USB_UPDAT0_P_DATA                                     0
#define AVR32_USB_UPDAT0_P_DATA_MASK                       0xffffffff
#define AVR32_USB_UPDAT0_P_DATA_OFFSET                              0
#define AVR32_USB_UPDAT0_P_DATA_SIZE                               32
#define AVR32_USB_UPDAT0_RESETVALUE                        0x00000000
#define AVR32_USB_UPDAT1                                   0x000006b4
#define AVR32_USB_UPDAT1_MASK                              0xffffffff
#define AVR32_USB_UPDAT1_P_DATA                                     0
#define AVR32_USB_UPDAT1_P_DATA_MASK                       0xffffffff
#define AVR32_USB_UPDAT1_P_DATA_OFFSET                              0
#define AVR32_USB_UPDAT1_P_DATA_SIZE                               32
#define AVR32_USB_UPDAT1_RESETVALUE                        0x00000000
#define AVR32_USB_UPDAT2                                   0x000006b8
#define AVR32_USB_UPDAT2_MASK                              0xffffffff
#define AVR32_USB_UPDAT2_P_DATA                                     0
#define AVR32_USB_UPDAT2_P_DATA_MASK                       0xffffffff
#define AVR32_USB_UPDAT2_P_DATA_OFFSET                              0
#define AVR32_USB_UPDAT2_P_DATA_SIZE                               32
#define AVR32_USB_UPDAT2_RESETVALUE                        0x00000000
#define AVR32_USB_UPDAT3                                   0x000006bc
#define AVR32_USB_UPDAT3_MASK                              0xffffffff
#define AVR32_USB_UPDAT3_P_DATA                                     0
#define AVR32_USB_UPDAT3_P_DATA_MASK                       0xffffffff
#define AVR32_USB_UPDAT3_P_DATA_OFFSET                              0
#define AVR32_USB_UPDAT3_P_DATA_SIZE                               32
#define AVR32_USB_UPDAT3_RESETVALUE                        0x00000000
#define AVR32_USB_UPDAT4                                   0x000006c0
#define AVR32_USB_UPDAT4_MASK                              0xffffffff
#define AVR32_USB_UPDAT4_P_DATA                                     0
#define AVR32_USB_UPDAT4_P_DATA_MASK                       0xffffffff
#define AVR32_USB_UPDAT4_P_DATA_OFFSET                              0
#define AVR32_USB_UPDAT4_P_DATA_SIZE                               32
#define AVR32_USB_UPDAT4_RESETVALUE                        0x00000000
#define AVR32_USB_UPDAT5                                   0x000006c4
#define AVR32_USB_UPDAT5_MASK                              0xffffffff
#define AVR32_USB_UPDAT5_P_DATA                                     0
#define AVR32_USB_UPDAT5_P_DATA_MASK                       0xffffffff
#define AVR32_USB_UPDAT5_P_DATA_OFFSET                              0
#define AVR32_USB_UPDAT5_P_DATA_SIZE                               32
#define AVR32_USB_UPDAT5_RESETVALUE                        0x00000000
#define AVR32_USB_UPDAT6                                   0x000006c8
#define AVR32_USB_UPDAT6_MASK                              0xffffffff
#define AVR32_USB_UPDAT6_P_DATA                                     0
#define AVR32_USB_UPDAT6_P_DATA_MASK                       0xffffffff
#define AVR32_USB_UPDAT6_P_DATA_OFFSET                              0
#define AVR32_USB_UPDAT6_P_DATA_SIZE                               32
#define AVR32_USB_UPDAT6_RESETVALUE                        0x00000000
#define AVR32_USB_UPDAT7                                   0x000006cc
#define AVR32_USB_UPDAT7_MASK                              0xffffffff
#define AVR32_USB_UPDAT7_P_DATA                                     0
#define AVR32_USB_UPDAT7_P_DATA_MASK                       0xffffffff
#define AVR32_USB_UPDAT7_P_DATA_OFFSET                              0
#define AVR32_USB_UPDAT7_P_DATA_SIZE                               32
#define AVR32_USB_UPDAT7_RESETVALUE                        0x00000000
#define AVR32_USB_UPERR0                                   0x00000680
#define AVR32_USB_UPERR0_COUNTER                                    5
#define AVR32_USB_UPERR0_COUNTER_MASK                      0x00000060
#define AVR32_USB_UPERR0_COUNTER_OFFSET                             5
#define AVR32_USB_UPERR0_COUNTER_SIZE                               2
#define AVR32_USB_UPERR0_CRC16                                      4
#define AVR32_USB_UPERR0_CRC16_MASK                        0x00000010
#define AVR32_USB_UPERR0_CRC16_OFFSET                               4
#define AVR32_USB_UPERR0_CRC16_SIZE                                 1
#define AVR32_USB_UPERR0_DATAPID                                    1
#define AVR32_USB_UPERR0_DATAPID_MASK                      0x00000002
#define AVR32_USB_UPERR0_DATAPID_OFFSET                             1
#define AVR32_USB_UPERR0_DATAPID_SIZE                               1
#define AVR32_USB_UPERR0_DATATGL                                    0
#define AVR32_USB_UPERR0_DATATGL_MASK                      0x00000001
#define AVR32_USB_UPERR0_DATATGL_OFFSET                             0
#define AVR32_USB_UPERR0_DATATGL_SIZE                               1
#define AVR32_USB_UPERR0_MASK                              0x0000007f
#define AVR32_USB_UPERR0_PID                                        2
#define AVR32_USB_UPERR0_PID_MASK                          0x00000004
#define AVR32_USB_UPERR0_PID_OFFSET                                 2
#define AVR32_USB_UPERR0_PID_SIZE                                   1
#define AVR32_USB_UPERR0_RESETVALUE                        0x00000000
#define AVR32_USB_UPERR0_TIMEOUT                                    3
#define AVR32_USB_UPERR0_TIMEOUT_MASK                      0x00000008
#define AVR32_USB_UPERR0_TIMEOUT_OFFSET                             3
#define AVR32_USB_UPERR0_TIMEOUT_SIZE                               1
#define AVR32_USB_UPERR1                                   0x00000684
#define AVR32_USB_UPERR1_COUNTER                                    5
#define AVR32_USB_UPERR1_COUNTER_MASK                      0x00000060
#define AVR32_USB_UPERR1_COUNTER_OFFSET                             5
#define AVR32_USB_UPERR1_COUNTER_SIZE                               2
#define AVR32_USB_UPERR1_CRC16                                      4
#define AVR32_USB_UPERR1_CRC16_MASK                        0x00000010
#define AVR32_USB_UPERR1_CRC16_OFFSET                               4
#define AVR32_USB_UPERR1_CRC16_SIZE                                 1
#define AVR32_USB_UPERR1_DATAPID                                    1
#define AVR32_USB_UPERR1_DATAPID_MASK                      0x00000002
#define AVR32_USB_UPERR1_DATAPID_OFFSET                             1
#define AVR32_USB_UPERR1_DATAPID_SIZE                               1
#define AVR32_USB_UPERR1_DATATGL                                    0
#define AVR32_USB_UPERR1_DATATGL_MASK                      0x00000001
#define AVR32_USB_UPERR1_DATATGL_OFFSET                             0
#define AVR32_USB_UPERR1_DATATGL_SIZE                               1
#define AVR32_USB_UPERR1_MASK                              0x0000007f
#define AVR32_USB_UPERR1_PID                                        2
#define AVR32_USB_UPERR1_PID_MASK                          0x00000004
#define AVR32_USB_UPERR1_PID_OFFSET                                 2
#define AVR32_USB_UPERR1_PID_SIZE                                   1
#define AVR32_USB_UPERR1_RESETVALUE                        0x00000000
#define AVR32_USB_UPERR1_TIMEOUT                                    3
#define AVR32_USB_UPERR1_TIMEOUT_MASK                      0x00000008
#define AVR32_USB_UPERR1_TIMEOUT_OFFSET                             3
#define AVR32_USB_UPERR1_TIMEOUT_SIZE                               1
#define AVR32_USB_UPERR2                                   0x00000688
#define AVR32_USB_UPERR2_COUNTER                                    5
#define AVR32_USB_UPERR2_COUNTER_MASK                      0x00000060
#define AVR32_USB_UPERR2_COUNTER_OFFSET                             5
#define AVR32_USB_UPERR2_COUNTER_SIZE                               2
#define AVR32_USB_UPERR2_CRC16                                      4
#define AVR32_USB_UPERR2_CRC16_MASK                        0x00000010
#define AVR32_USB_UPERR2_CRC16_OFFSET                               4
#define AVR32_USB_UPERR2_CRC16_SIZE                                 1
#define AVR32_USB_UPERR2_DATAPID                                    1
#define AVR32_USB_UPERR2_DATAPID_MASK                      0x00000002
#define AVR32_USB_UPERR2_DATAPID_OFFSET                             1
#define AVR32_USB_UPERR2_DATAPID_SIZE                               1
#define AVR32_USB_UPERR2_DATATGL                                    0
#define AVR32_USB_UPERR2_DATATGL_MASK                      0x00000001
#define AVR32_USB_UPERR2_DATATGL_OFFSET                             0
#define AVR32_USB_UPERR2_DATATGL_SIZE                               1
#define AVR32_USB_UPERR2_MASK                              0x0000007f
#define AVR32_USB_UPERR2_PID                                        2
#define AVR32_USB_UPERR2_PID_MASK                          0x00000004
#define AVR32_USB_UPERR2_PID_OFFSET                                 2
#define AVR32_USB_UPERR2_PID_SIZE                                   1
#define AVR32_USB_UPERR2_RESETVALUE                        0x00000000
#define AVR32_USB_UPERR2_TIMEOUT                                    3
#define AVR32_USB_UPERR2_TIMEOUT_MASK                      0x00000008
#define AVR32_USB_UPERR2_TIMEOUT_OFFSET                             3
#define AVR32_USB_UPERR2_TIMEOUT_SIZE                               1
#define AVR32_USB_UPERR3                                   0x0000068c
#define AVR32_USB_UPERR3_COUNTER                                    5
#define AVR32_USB_UPERR3_COUNTER_MASK                      0x00000060
#define AVR32_USB_UPERR3_COUNTER_OFFSET                             5
#define AVR32_USB_UPERR3_COUNTER_SIZE                               2
#define AVR32_USB_UPERR3_CRC16                                      4
#define AVR32_USB_UPERR3_CRC16_MASK                        0x00000010
#define AVR32_USB_UPERR3_CRC16_OFFSET                               4
#define AVR32_USB_UPERR3_CRC16_SIZE                                 1
#define AVR32_USB_UPERR3_DATAPID                                    1
#define AVR32_USB_UPERR3_DATAPID_MASK                      0x00000002
#define AVR32_USB_UPERR3_DATAPID_OFFSET                             1
#define AVR32_USB_UPERR3_DATAPID_SIZE                               1
#define AVR32_USB_UPERR3_DATATGL                                    0
#define AVR32_USB_UPERR3_DATATGL_MASK                      0x00000001
#define AVR32_USB_UPERR3_DATATGL_OFFSET                             0
#define AVR32_USB_UPERR3_DATATGL_SIZE                               1
#define AVR32_USB_UPERR3_MASK                              0x0000007f
#define AVR32_USB_UPERR3_PID                                        2
#define AVR32_USB_UPERR3_PID_MASK                          0x00000004
#define AVR32_USB_UPERR3_PID_OFFSET                                 2
#define AVR32_USB_UPERR3_PID_SIZE                                   1
#define AVR32_USB_UPERR3_RESETVALUE                        0x00000000
#define AVR32_USB_UPERR3_TIMEOUT                                    3
#define AVR32_USB_UPERR3_TIMEOUT_MASK                      0x00000008
#define AVR32_USB_UPERR3_TIMEOUT_OFFSET                             3
#define AVR32_USB_UPERR3_TIMEOUT_SIZE                               1
#define AVR32_USB_UPERR4                                   0x00000690
#define AVR32_USB_UPERR4_COUNTER                                    5
#define AVR32_USB_UPERR4_COUNTER_MASK                      0x00000060
#define AVR32_USB_UPERR4_COUNTER_OFFSET                             5
#define AVR32_USB_UPERR4_COUNTER_SIZE                               2
#define AVR32_USB_UPERR4_CRC16                                      4
#define AVR32_USB_UPERR4_CRC16_MASK                        0x00000010
#define AVR32_USB_UPERR4_CRC16_OFFSET                               4
#define AVR32_USB_UPERR4_CRC16_SIZE                                 1
#define AVR32_USB_UPERR4_DATAPID                                    1
#define AVR32_USB_UPERR4_DATAPID_MASK                      0x00000002
#define AVR32_USB_UPERR4_DATAPID_OFFSET                             1
#define AVR32_USB_UPERR4_DATAPID_SIZE                               1
#define AVR32_USB_UPERR4_DATATGL                                    0
#define AVR32_USB_UPERR4_DATATGL_MASK                      0x00000001
#define AVR32_USB_UPERR4_DATATGL_OFFSET                             0
#define AVR32_USB_UPERR4_DATATGL_SIZE                               1
#define AVR32_USB_UPERR4_MASK                              0x0000007f
#define AVR32_USB_UPERR4_PID                                        2
#define AVR32_USB_UPERR4_PID_MASK                          0x00000004
#define AVR32_USB_UPERR4_PID_OFFSET                                 2
#define AVR32_USB_UPERR4_PID_SIZE                                   1
#define AVR32_USB_UPERR4_RESETVALUE                        0x00000000
#define AVR32_USB_UPERR4_TIMEOUT                                    3
#define AVR32_USB_UPERR4_TIMEOUT_MASK                      0x00000008
#define AVR32_USB_UPERR4_TIMEOUT_OFFSET                             3
#define AVR32_USB_UPERR4_TIMEOUT_SIZE                               1
#define AVR32_USB_UPERR5                                   0x00000694
#define AVR32_USB_UPERR5_COUNTER                                    5
#define AVR32_USB_UPERR5_COUNTER_MASK                      0x00000060
#define AVR32_USB_UPERR5_COUNTER_OFFSET                             5
#define AVR32_USB_UPERR5_COUNTER_SIZE                               2
#define AVR32_USB_UPERR5_CRC16                                      4
#define AVR32_USB_UPERR5_CRC16_MASK                        0x00000010
#define AVR32_USB_UPERR5_CRC16_OFFSET                               4
#define AVR32_USB_UPERR5_CRC16_SIZE                                 1
#define AVR32_USB_UPERR5_DATAPID                                    1
#define AVR32_USB_UPERR5_DATAPID_MASK                      0x00000002
#define AVR32_USB_UPERR5_DATAPID_OFFSET                             1
#define AVR32_USB_UPERR5_DATAPID_SIZE                               1
#define AVR32_USB_UPERR5_DATATGL                                    0
#define AVR32_USB_UPERR5_DATATGL_MASK                      0x00000001
#define AVR32_USB_UPERR5_DATATGL_OFFSET                             0
#define AVR32_USB_UPERR5_DATATGL_SIZE                               1
#define AVR32_USB_UPERR5_MASK                              0x0000007f
#define AVR32_USB_UPERR5_PID                                        2
#define AVR32_USB_UPERR5_PID_MASK                          0x00000004
#define AVR32_USB_UPERR5_PID_OFFSET                                 2
#define AVR32_USB_UPERR5_PID_SIZE                                   1
#define AVR32_USB_UPERR5_RESETVALUE                        0x00000000
#define AVR32_USB_UPERR5_TIMEOUT                                    3
#define AVR32_USB_UPERR5_TIMEOUT_MASK                      0x00000008
#define AVR32_USB_UPERR5_TIMEOUT_OFFSET                             3
#define AVR32_USB_UPERR5_TIMEOUT_SIZE                               1
#define AVR32_USB_UPERR6                                   0x00000698
#define AVR32_USB_UPERR6_COUNTER                                    5
#define AVR32_USB_UPERR6_COUNTER_MASK                      0x00000060
#define AVR32_USB_UPERR6_COUNTER_OFFSET                             5
#define AVR32_USB_UPERR6_COUNTER_SIZE                               2
#define AVR32_USB_UPERR6_CRC16                                      4
#define AVR32_USB_UPERR6_CRC16_MASK                        0x00000010
#define AVR32_USB_UPERR6_CRC16_OFFSET                               4
#define AVR32_USB_UPERR6_CRC16_SIZE                                 1
#define AVR32_USB_UPERR6_DATAPID                                    1
#define AVR32_USB_UPERR6_DATAPID_MASK                      0x00000002
#define AVR32_USB_UPERR6_DATAPID_OFFSET                             1
#define AVR32_USB_UPERR6_DATAPID_SIZE                               1
#define AVR32_USB_UPERR6_DATATGL                                    0
#define AVR32_USB_UPERR6_DATATGL_MASK                      0x00000001
#define AVR32_USB_UPERR6_DATATGL_OFFSET                             0
#define AVR32_USB_UPERR6_DATATGL_SIZE                               1
#define AVR32_USB_UPERR6_MASK                              0x0000007f
#define AVR32_USB_UPERR6_PID                                        2
#define AVR32_USB_UPERR6_PID_MASK                          0x00000004
#define AVR32_USB_UPERR6_PID_OFFSET                                 2
#define AVR32_USB_UPERR6_PID_SIZE                                   1
#define AVR32_USB_UPERR6_RESETVALUE                        0x00000000
#define AVR32_USB_UPERR6_TIMEOUT                                    3
#define AVR32_USB_UPERR6_TIMEOUT_MASK                      0x00000008
#define AVR32_USB_UPERR6_TIMEOUT_OFFSET                             3
#define AVR32_USB_UPERR6_TIMEOUT_SIZE                               1
#define AVR32_USB_UPERR7                                   0x0000069c
#define AVR32_USB_UPERR7_COUNTER                                    5
#define AVR32_USB_UPERR7_COUNTER_MASK                      0x00000060
#define AVR32_USB_UPERR7_COUNTER_OFFSET                             5
#define AVR32_USB_UPERR7_COUNTER_SIZE                               2
#define AVR32_USB_UPERR7_CRC16                                      4
#define AVR32_USB_UPERR7_CRC16_MASK                        0x00000010
#define AVR32_USB_UPERR7_CRC16_OFFSET                               4
#define AVR32_USB_UPERR7_CRC16_SIZE                                 1
#define AVR32_USB_UPERR7_DATAPID                                    1
#define AVR32_USB_UPERR7_DATAPID_MASK                      0x00000002
#define AVR32_USB_UPERR7_DATAPID_OFFSET                             1
#define AVR32_USB_UPERR7_DATAPID_SIZE                               1
#define AVR32_USB_UPERR7_DATATGL                                    0
#define AVR32_USB_UPERR7_DATATGL_MASK                      0x00000001
#define AVR32_USB_UPERR7_DATATGL_OFFSET                             0
#define AVR32_USB_UPERR7_DATATGL_SIZE                               1
#define AVR32_USB_UPERR7_MASK                              0x0000007f
#define AVR32_USB_UPERR7_PID                                        2
#define AVR32_USB_UPERR7_PID_MASK                          0x00000004
#define AVR32_USB_UPERR7_PID_OFFSET                                 2
#define AVR32_USB_UPERR7_PID_SIZE                                   1
#define AVR32_USB_UPERR7_RESETVALUE                        0x00000000
#define AVR32_USB_UPERR7_TIMEOUT                                    3
#define AVR32_USB_UPERR7_TIMEOUT_MASK                      0x00000008
#define AVR32_USB_UPERR7_TIMEOUT_OFFSET                             3
#define AVR32_USB_UPERR7_TIMEOUT_SIZE                               1
#define AVR32_USB_UPINRQ0                                  0x00000650
#define AVR32_USB_UPINRQ0_INMODE                                    8
#define AVR32_USB_UPINRQ0_INMODE_MASK                      0x00000100
#define AVR32_USB_UPINRQ0_INMODE_OFFSET                             8
#define AVR32_USB_UPINRQ0_INMODE_SIZE                               1
#define AVR32_USB_UPINRQ0_INRQ                                      0
#define AVR32_USB_UPINRQ0_INRQ_MASK                        0x000000ff
#define AVR32_USB_UPINRQ0_INRQ_OFFSET                               0
#define AVR32_USB_UPINRQ0_INRQ_SIZE                                 8
#define AVR32_USB_UPINRQ0_MASK                             0x000001ff
#define AVR32_USB_UPINRQ0_RESETVALUE                       0x00000000
#define AVR32_USB_UPINRQ1                                  0x00000654
#define AVR32_USB_UPINRQ1_INMODE                                    8
#define AVR32_USB_UPINRQ1_INMODE_MASK                      0x00000100
#define AVR32_USB_UPINRQ1_INMODE_OFFSET                             8
#define AVR32_USB_UPINRQ1_INMODE_SIZE                               1
#define AVR32_USB_UPINRQ1_INRQ                                      0
#define AVR32_USB_UPINRQ1_INRQ_MASK                        0x000000ff
#define AVR32_USB_UPINRQ1_INRQ_OFFSET                               0
#define AVR32_USB_UPINRQ1_INRQ_SIZE                                 8
#define AVR32_USB_UPINRQ1_MASK                             0x000001ff
#define AVR32_USB_UPINRQ1_RESETVALUE                       0x00000000
#define AVR32_USB_UPINRQ2                                  0x00000658
#define AVR32_USB_UPINRQ2_INMODE                                    8
#define AVR32_USB_UPINRQ2_INMODE_MASK                      0x00000100
#define AVR32_USB_UPINRQ2_INMODE_OFFSET                             8
#define AVR32_USB_UPINRQ2_INMODE_SIZE                               1
#define AVR32_USB_UPINRQ2_INRQ                                      0
#define AVR32_USB_UPINRQ2_INRQ_MASK                        0x000000ff
#define AVR32_USB_UPINRQ2_INRQ_OFFSET                               0
#define AVR32_USB_UPINRQ2_INRQ_SIZE                                 8
#define AVR32_USB_UPINRQ2_MASK                             0x000001ff
#define AVR32_USB_UPINRQ2_RESETVALUE                       0x00000000
#define AVR32_USB_UPINRQ3                                  0x0000065c
#define AVR32_USB_UPINRQ3_INMODE                                    8
#define AVR32_USB_UPINRQ3_INMODE_MASK                      0x00000100
#define AVR32_USB_UPINRQ3_INMODE_OFFSET                             8
#define AVR32_USB_UPINRQ3_INMODE_SIZE                               1
#define AVR32_USB_UPINRQ3_INRQ                                      0
#define AVR32_USB_UPINRQ3_INRQ_MASK                        0x000000ff
#define AVR32_USB_UPINRQ3_INRQ_OFFSET                               0
#define AVR32_USB_UPINRQ3_INRQ_SIZE                                 8
#define AVR32_USB_UPINRQ3_MASK                             0x000001ff
#define AVR32_USB_UPINRQ3_RESETVALUE                       0x00000000
#define AVR32_USB_UPINRQ4                                  0x00000660
#define AVR32_USB_UPINRQ4_INMODE                                    8
#define AVR32_USB_UPINRQ4_INMODE_MASK                      0x00000100
#define AVR32_USB_UPINRQ4_INMODE_OFFSET                             8
#define AVR32_USB_UPINRQ4_INMODE_SIZE                               1
#define AVR32_USB_UPINRQ4_INRQ                                      0
#define AVR32_USB_UPINRQ4_INRQ_MASK                        0x000000ff
#define AVR32_USB_UPINRQ4_INRQ_OFFSET                               0
#define AVR32_USB_UPINRQ4_INRQ_SIZE                                 8
#define AVR32_USB_UPINRQ4_MASK                             0x000001ff
#define AVR32_USB_UPINRQ4_RESETVALUE                       0x00000000
#define AVR32_USB_UPINRQ5                                  0x00000664
#define AVR32_USB_UPINRQ5_INMODE                                    8
#define AVR32_USB_UPINRQ5_INMODE_MASK                      0x00000100
#define AVR32_USB_UPINRQ5_INMODE_OFFSET                             8
#define AVR32_USB_UPINRQ5_INMODE_SIZE                               1
#define AVR32_USB_UPINRQ5_INRQ                                      0
#define AVR32_USB_UPINRQ5_INRQ_MASK                        0x000000ff
#define AVR32_USB_UPINRQ5_INRQ_OFFSET                               0
#define AVR32_USB_UPINRQ5_INRQ_SIZE                                 8
#define AVR32_USB_UPINRQ5_MASK                             0x000001ff
#define AVR32_USB_UPINRQ5_RESETVALUE                       0x00000000
#define AVR32_USB_UPINRQ6                                  0x00000668
#define AVR32_USB_UPINRQ6_INMODE                                    8
#define AVR32_USB_UPINRQ6_INMODE_MASK                      0x00000100
#define AVR32_USB_UPINRQ6_INMODE_OFFSET                             8
#define AVR32_USB_UPINRQ6_INMODE_SIZE                               1
#define AVR32_USB_UPINRQ6_INRQ                                      0
#define AVR32_USB_UPINRQ6_INRQ_MASK                        0x000000ff
#define AVR32_USB_UPINRQ6_INRQ_OFFSET                               0
#define AVR32_USB_UPINRQ6_INRQ_SIZE                                 8
#define AVR32_USB_UPINRQ6_MASK                             0x000001ff
#define AVR32_USB_UPINRQ6_RESETVALUE                       0x00000000
#define AVR32_USB_UPINRQ7                                  0x0000066c
#define AVR32_USB_UPINRQ7_INMODE                                    8
#define AVR32_USB_UPINRQ7_INMODE_MASK                      0x00000100
#define AVR32_USB_UPINRQ7_INMODE_OFFSET                             8
#define AVR32_USB_UPINRQ7_INMODE_SIZE                               1
#define AVR32_USB_UPINRQ7_INRQ                                      0
#define AVR32_USB_UPINRQ7_INRQ_MASK                        0x000000ff
#define AVR32_USB_UPINRQ7_INRQ_OFFSET                               0
#define AVR32_USB_UPINRQ7_INRQ_SIZE                                 8
#define AVR32_USB_UPINRQ7_MASK                             0x000001ff
#define AVR32_USB_UPINRQ7_RESETVALUE                       0x00000000
#define AVR32_USB_UPRSM                                             6
#define AVR32_USB_UPRSMC                                            6
#define AVR32_USB_UPRSMC_MASK                              0x00000040
#define AVR32_USB_UPRSMC_OFFSET                                     6
#define AVR32_USB_UPRSMC_SIZE                                       1
#define AVR32_USB_UPRSME                                            6
#define AVR32_USB_UPRSMEC                                           6
#define AVR32_USB_UPRSMEC_MASK                             0x00000040
#define AVR32_USB_UPRSMEC_OFFSET                                    6
#define AVR32_USB_UPRSMEC_SIZE                                      1
#define AVR32_USB_UPRSMES                                           6
#define AVR32_USB_UPRSMES_MASK                             0x00000040
#define AVR32_USB_UPRSMES_OFFSET                                    6
#define AVR32_USB_UPRSMES_SIZE                                      1
#define AVR32_USB_UPRSME_MASK                              0x00000040
#define AVR32_USB_UPRSME_OFFSET                                     6
#define AVR32_USB_UPRSME_SIZE                                       1
#define AVR32_USB_UPRSMS                                            6
#define AVR32_USB_UPRSMS_MASK                              0x00000040
#define AVR32_USB_UPRSMS_OFFSET                                     6
#define AVR32_USB_UPRSMS_SIZE                                       1
#define AVR32_USB_UPRSM_MASK                               0x00000040
#define AVR32_USB_UPRSM_OFFSET                                      6
#define AVR32_USB_UPRSM_SIZE                                        1
#define AVR32_USB_UPRST                                    0x0000041c
#define AVR32_USB_UPRST_MASK                               0x00ff00ff
#define AVR32_USB_UPRST_PEN0                                        0
#define AVR32_USB_UPRST_PEN0_MASK                          0x00000001
#define AVR32_USB_UPRST_PEN0_OFFSET                                 0
#define AVR32_USB_UPRST_PEN0_SIZE                                   1
#define AVR32_USB_UPRST_PEN1                                        1
#define AVR32_USB_UPRST_PEN1_MASK                          0x00000002
#define AVR32_USB_UPRST_PEN1_OFFSET                                 1
#define AVR32_USB_UPRST_PEN1_SIZE                                   1
#define AVR32_USB_UPRST_PEN2                                        2
#define AVR32_USB_UPRST_PEN2_MASK                          0x00000004
#define AVR32_USB_UPRST_PEN2_OFFSET                                 2
#define AVR32_USB_UPRST_PEN2_SIZE                                   1
#define AVR32_USB_UPRST_PEN3                                        3
#define AVR32_USB_UPRST_PEN3_MASK                          0x00000008
#define AVR32_USB_UPRST_PEN3_OFFSET                                 3
#define AVR32_USB_UPRST_PEN3_SIZE                                   1
#define AVR32_USB_UPRST_PEN4                                        4
#define AVR32_USB_UPRST_PEN4_MASK                          0x00000010
#define AVR32_USB_UPRST_PEN4_OFFSET                                 4
#define AVR32_USB_UPRST_PEN4_SIZE                                   1
#define AVR32_USB_UPRST_PEN5                                        5
#define AVR32_USB_UPRST_PEN5_MASK                          0x00000020
#define AVR32_USB_UPRST_PEN5_OFFSET                                 5
#define AVR32_USB_UPRST_PEN5_SIZE                                   1
#define AVR32_USB_UPRST_PEN6                                        6
#define AVR32_USB_UPRST_PEN6_MASK                          0x00000040
#define AVR32_USB_UPRST_PEN6_OFFSET                                 6
#define AVR32_USB_UPRST_PEN6_SIZE                                   1
#define AVR32_USB_UPRST_PEN7                                        7
#define AVR32_USB_UPRST_PEN7_MASK                          0x00000080
#define AVR32_USB_UPRST_PEN7_OFFSET                                 7
#define AVR32_USB_UPRST_PEN7_SIZE                                   1
#define AVR32_USB_UPRST_PRST0                                      16
#define AVR32_USB_UPRST_PRST0_MASK                         0x00010000
#define AVR32_USB_UPRST_PRST0_OFFSET                               16
#define AVR32_USB_UPRST_PRST0_SIZE                                  1
#define AVR32_USB_UPRST_PRST1                                      17
#define AVR32_USB_UPRST_PRST1_MASK                         0x00020000
#define AVR32_USB_UPRST_PRST1_OFFSET                               17
#define AVR32_USB_UPRST_PRST1_SIZE                                  1
#define AVR32_USB_UPRST_PRST2                                      18
#define AVR32_USB_UPRST_PRST2_MASK                         0x00040000
#define AVR32_USB_UPRST_PRST2_OFFSET                               18
#define AVR32_USB_UPRST_PRST2_SIZE                                  1
#define AVR32_USB_UPRST_PRST3                                      19
#define AVR32_USB_UPRST_PRST3_MASK                         0x00080000
#define AVR32_USB_UPRST_PRST3_OFFSET                               19
#define AVR32_USB_UPRST_PRST3_SIZE                                  1
#define AVR32_USB_UPRST_PRST4                                      20
#define AVR32_USB_UPRST_PRST4_MASK                         0x00100000
#define AVR32_USB_UPRST_PRST4_OFFSET                               20
#define AVR32_USB_UPRST_PRST4_SIZE                                  1
#define AVR32_USB_UPRST_PRST5                                      21
#define AVR32_USB_UPRST_PRST5_MASK                         0x00200000
#define AVR32_USB_UPRST_PRST5_OFFSET                               21
#define AVR32_USB_UPRST_PRST5_SIZE                                  1
#define AVR32_USB_UPRST_PRST6                                      22
#define AVR32_USB_UPRST_PRST6_MASK                         0x00400000
#define AVR32_USB_UPRST_PRST6_OFFSET                               22
#define AVR32_USB_UPRST_PRST6_SIZE                                  1
#define AVR32_USB_UPRST_PRST7                                      23
#define AVR32_USB_UPRST_PRST7_MASK                         0x00800000
#define AVR32_USB_UPRST_PRST7_OFFSET                               23
#define AVR32_USB_UPRST_PRST7_SIZE                                  1
#define AVR32_USB_UPRST_RESETVALUE                         0x00000000
#define AVR32_USB_UPSTA0                                   0x00000530
#define AVR32_USB_UPSTA0CLR                                0x00000560
#define AVR32_USB_UPSTA0CLR_MASK                           0x000000f7
#define AVR32_USB_UPSTA0CLR_NAKEDIC                                 4
#define AVR32_USB_UPSTA0CLR_NAKEDIC_MASK                   0x00000010
#define AVR32_USB_UPSTA0CLR_NAKEDIC_OFFSET                          4
#define AVR32_USB_UPSTA0CLR_NAKEDIC_SIZE                            1
#define AVR32_USB_UPSTA0CLR_OVERFIC                                 5
#define AVR32_USB_UPSTA0CLR_OVERFIC_MASK                   0x00000020
#define AVR32_USB_UPSTA0CLR_OVERFIC_OFFSET                          5
#define AVR32_USB_UPSTA0CLR_OVERFIC_SIZE                            1
#define AVR32_USB_UPSTA0CLR_RESETVALUE                     0x00000000
#define AVR32_USB_UPSTA0CLR_RXINIC                                  0
#define AVR32_USB_UPSTA0CLR_RXINIC_MASK                    0x00000001
#define AVR32_USB_UPSTA0CLR_RXINIC_OFFSET                           0
#define AVR32_USB_UPSTA0CLR_RXINIC_SIZE                             1
#define AVR32_USB_UPSTA0CLR_RXSTALLDIC                              6
#define AVR32_USB_UPSTA0CLR_RXSTALLDIC_MASK                0x00000040
#define AVR32_USB_UPSTA0CLR_RXSTALLDIC_OFFSET                       6
#define AVR32_USB_UPSTA0CLR_RXSTALLDIC_SIZE                         1
#define AVR32_USB_UPSTA0CLR_SHORTPACKETIC                           7
#define AVR32_USB_UPSTA0CLR_SHORTPACKETIC_MASK             0x00000080
#define AVR32_USB_UPSTA0CLR_SHORTPACKETIC_OFFSET                    7
#define AVR32_USB_UPSTA0CLR_SHORTPACKETIC_SIZE                      1
#define AVR32_USB_UPSTA0CLR_TXOUTIC                                 1
#define AVR32_USB_UPSTA0CLR_TXOUTIC_MASK                   0x00000002
#define AVR32_USB_UPSTA0CLR_TXOUTIC_OFFSET                          1
#define AVR32_USB_UPSTA0CLR_TXOUTIC_SIZE                            1
#define AVR32_USB_UPSTA0CLR_TXSTPIC                                 2
#define AVR32_USB_UPSTA0CLR_TXSTPIC_MASK                   0x00000004
#define AVR32_USB_UPSTA0CLR_TXSTPIC_OFFSET                          2
#define AVR32_USB_UPSTA0CLR_TXSTPIC_SIZE                            1
#define AVR32_USB_UPSTA0SET                                0x00000590
#define AVR32_USB_UPSTA0SET_MASK                           0x000010ff
#define AVR32_USB_UPSTA0SET_NAKEDIS                                 4
#define AVR32_USB_UPSTA0SET_NAKEDIS_MASK                   0x00000010
#define AVR32_USB_UPSTA0SET_NAKEDIS_OFFSET                          4
#define AVR32_USB_UPSTA0SET_NAKEDIS_SIZE                            1
#define AVR32_USB_UPSTA0SET_NBUSYBKS                               12
#define AVR32_USB_UPSTA0SET_NBUSYBKS_MASK                  0x00001000
#define AVR32_USB_UPSTA0SET_NBUSYBKS_OFFSET                        12
#define AVR32_USB_UPSTA0SET_NBUSYBKS_SIZE                           1
#define AVR32_USB_UPSTA0SET_OVERFIS                                 5
#define AVR32_USB_UPSTA0SET_OVERFIS_MASK                   0x00000020
#define AVR32_USB_UPSTA0SET_OVERFIS_OFFSET                          5
#define AVR32_USB_UPSTA0SET_OVERFIS_SIZE                            1
#define AVR32_USB_UPSTA0SET_PERRIS                                  3
#define AVR32_USB_UPSTA0SET_PERRIS_MASK                    0x00000008
#define AVR32_USB_UPSTA0SET_PERRIS_OFFSET                           3
#define AVR32_USB_UPSTA0SET_PERRIS_SIZE                             1
#define AVR32_USB_UPSTA0SET_RESETVALUE                     0x00000000
#define AVR32_USB_UPSTA0SET_RXINIS                                  0
#define AVR32_USB_UPSTA0SET_RXINIS_MASK                    0x00000001
#define AVR32_USB_UPSTA0SET_RXINIS_OFFSET                           0
#define AVR32_USB_UPSTA0SET_RXINIS_SIZE                             1
#define AVR32_USB_UPSTA0SET_RXSTALLDIS                              6
#define AVR32_USB_UPSTA0SET_RXSTALLDIS_MASK                0x00000040
#define AVR32_USB_UPSTA0SET_RXSTALLDIS_OFFSET                       6
#define AVR32_USB_UPSTA0SET_RXSTALLDIS_SIZE                         1
#define AVR32_USB_UPSTA0SET_SHORTPACKETIS                           7
#define AVR32_USB_UPSTA0SET_SHORTPACKETIS_MASK             0x00000080
#define AVR32_USB_UPSTA0SET_SHORTPACKETIS_OFFSET                    7
#define AVR32_USB_UPSTA0SET_SHORTPACKETIS_SIZE                      1
#define AVR32_USB_UPSTA0SET_TXOUTIS                                 1
#define AVR32_USB_UPSTA0SET_TXOUTIS_MASK                   0x00000002
#define AVR32_USB_UPSTA0SET_TXOUTIS_OFFSET                          1
#define AVR32_USB_UPSTA0SET_TXOUTIS_SIZE                            1
#define AVR32_USB_UPSTA0SET_TXSTPIS                                 2
#define AVR32_USB_UPSTA0SET_TXSTPIS_MASK                   0x00000004
#define AVR32_USB_UPSTA0SET_TXSTPIS_OFFSET                          2
#define AVR32_USB_UPSTA0SET_TXSTPIS_SIZE                            1
#define AVR32_USB_UPSTA0_CFGOK                                     18
#define AVR32_USB_UPSTA0_CFGOK_MASK                        0x00040000
#define AVR32_USB_UPSTA0_CFGOK_OFFSET                              18
#define AVR32_USB_UPSTA0_CFGOK_SIZE                                 1
#define AVR32_USB_UPSTA0_CURRBK                                    14
#define AVR32_USB_UPSTA0_CURRBK_MASK                       0x0000c000
#define AVR32_USB_UPSTA0_CURRBK_OFFSET                             14
#define AVR32_USB_UPSTA0_CURRBK_SIZE                                2
#define AVR32_USB_UPSTA0_DTSEQ                                      8
#define AVR32_USB_UPSTA0_DTSEQ_MASK                        0x00000300
#define AVR32_USB_UPSTA0_DTSEQ_OFFSET                               8
#define AVR32_USB_UPSTA0_DTSEQ_SIZE                                 2
#define AVR32_USB_UPSTA0_MASK                              0x7ff5f3ff
#define AVR32_USB_UPSTA0_NAKEDI                                     4
#define AVR32_USB_UPSTA0_NAKEDI_MASK                       0x00000010
#define AVR32_USB_UPSTA0_NAKEDI_OFFSET                              4
#define AVR32_USB_UPSTA0_NAKEDI_SIZE                                1
#define AVR32_USB_UPSTA0_NBUSYBK                                   12
#define AVR32_USB_UPSTA0_NBUSYBK_MASK                      0x00003000
#define AVR32_USB_UPSTA0_NBUSYBK_OFFSET                            12
#define AVR32_USB_UPSTA0_NBUSYBK_SIZE                               2
#define AVR32_USB_UPSTA0_OVERFI                                     5
#define AVR32_USB_UPSTA0_OVERFI_MASK                       0x00000020
#define AVR32_USB_UPSTA0_OVERFI_OFFSET                              5
#define AVR32_USB_UPSTA0_OVERFI_SIZE                                1
#define AVR32_USB_UPSTA0_PBYCT                                     20
#define AVR32_USB_UPSTA0_PBYCT_MASK                        0x7ff00000
#define AVR32_USB_UPSTA0_PBYCT_OFFSET                              20
#define AVR32_USB_UPSTA0_PBYCT_SIZE                                11
#define AVR32_USB_UPSTA0_PERRI                                      3
#define AVR32_USB_UPSTA0_PERRI_MASK                        0x00000008
#define AVR32_USB_UPSTA0_PERRI_OFFSET                               3
#define AVR32_USB_UPSTA0_PERRI_SIZE                                 1
#define AVR32_USB_UPSTA0_RESETVALUE                        0x00000000
#define AVR32_USB_UPSTA0_RWALL                                     16
#define AVR32_USB_UPSTA0_RWALL_MASK                        0x00010000
#define AVR32_USB_UPSTA0_RWALL_OFFSET                              16
#define AVR32_USB_UPSTA0_RWALL_SIZE                                 1
#define AVR32_USB_UPSTA0_RXINI                                      0
#define AVR32_USB_UPSTA0_RXINI_MASK                        0x00000001
#define AVR32_USB_UPSTA0_RXINI_OFFSET                               0
#define AVR32_USB_UPSTA0_RXINI_SIZE                                 1
#define AVR32_USB_UPSTA0_RXSTALLDI                                  6
#define AVR32_USB_UPSTA0_RXSTALLDI_MASK                    0x00000040
#define AVR32_USB_UPSTA0_RXSTALLDI_OFFSET                           6
#define AVR32_USB_UPSTA0_RXSTALLDI_SIZE                             1
#define AVR32_USB_UPSTA0_SHORTPACKETI                               7
#define AVR32_USB_UPSTA0_SHORTPACKETI_MASK                 0x00000080
#define AVR32_USB_UPSTA0_SHORTPACKETI_OFFSET                        7
#define AVR32_USB_UPSTA0_SHORTPACKETI_SIZE                          1
#define AVR32_USB_UPSTA0_TXOUTI                                     1
#define AVR32_USB_UPSTA0_TXOUTI_MASK                       0x00000002
#define AVR32_USB_UPSTA0_TXOUTI_OFFSET                              1
#define AVR32_USB_UPSTA0_TXOUTI_SIZE                                1
#define AVR32_USB_UPSTA0_TXSTPI                                     2
#define AVR32_USB_UPSTA0_TXSTPI_MASK                       0x00000004
#define AVR32_USB_UPSTA0_TXSTPI_OFFSET                              2
#define AVR32_USB_UPSTA0_TXSTPI_SIZE                                1
#define AVR32_USB_UPSTA1                                   0x00000534
#define AVR32_USB_UPSTA1CLR                                0x00000564
#define AVR32_USB_UPSTA1CLR_MASK                           0x000000f7
#define AVR32_USB_UPSTA1CLR_NAKEDIC                                 4
#define AVR32_USB_UPSTA1CLR_NAKEDIC_MASK                   0x00000010
#define AVR32_USB_UPSTA1CLR_NAKEDIC_OFFSET                          4
#define AVR32_USB_UPSTA1CLR_NAKEDIC_SIZE                            1
#define AVR32_USB_UPSTA1CLR_OVERFIC                                 5
#define AVR32_USB_UPSTA1CLR_OVERFIC_MASK                   0x00000020
#define AVR32_USB_UPSTA1CLR_OVERFIC_OFFSET                          5
#define AVR32_USB_UPSTA1CLR_OVERFIC_SIZE                            1
#define AVR32_USB_UPSTA1CLR_RESETVALUE                     0x00000000
#define AVR32_USB_UPSTA1CLR_RXINIC                                  0
#define AVR32_USB_UPSTA1CLR_RXINIC_MASK                    0x00000001
#define AVR32_USB_UPSTA1CLR_RXINIC_OFFSET                           0
#define AVR32_USB_UPSTA1CLR_RXINIC_SIZE                             1
#define AVR32_USB_UPSTA1CLR_RXSTALLDIC                              6
#define AVR32_USB_UPSTA1CLR_RXSTALLDIC_MASK                0x00000040
#define AVR32_USB_UPSTA1CLR_RXSTALLDIC_OFFSET                       6
#define AVR32_USB_UPSTA1CLR_RXSTALLDIC_SIZE                         1
#define AVR32_USB_UPSTA1CLR_SHORTPACKETIC                           7
#define AVR32_USB_UPSTA1CLR_SHORTPACKETIC_MASK             0x00000080
#define AVR32_USB_UPSTA1CLR_SHORTPACKETIC_OFFSET                    7
#define AVR32_USB_UPSTA1CLR_SHORTPACKETIC_SIZE                      1
#define AVR32_USB_UPSTA1CLR_TXOUTIC                                 1
#define AVR32_USB_UPSTA1CLR_TXOUTIC_MASK                   0x00000002
#define AVR32_USB_UPSTA1CLR_TXOUTIC_OFFSET                          1
#define AVR32_USB_UPSTA1CLR_TXOUTIC_SIZE                            1
#define AVR32_USB_UPSTA1CLR_TXSTPIC                                 2
#define AVR32_USB_UPSTA1CLR_TXSTPIC_MASK                   0x00000004
#define AVR32_USB_UPSTA1CLR_TXSTPIC_OFFSET                          2
#define AVR32_USB_UPSTA1CLR_TXSTPIC_SIZE                            1
#define AVR32_USB_UPSTA1SET                                0x00000594
#define AVR32_USB_UPSTA1SET_MASK                           0x000010ff
#define AVR32_USB_UPSTA1SET_NAKEDIS                                 4
#define AVR32_USB_UPSTA1SET_NAKEDIS_MASK                   0x00000010
#define AVR32_USB_UPSTA1SET_NAKEDIS_OFFSET                          4
#define AVR32_USB_UPSTA1SET_NAKEDIS_SIZE                            1
#define AVR32_USB_UPSTA1SET_NBUSYBKS                               12
#define AVR32_USB_UPSTA1SET_NBUSYBKS_MASK                  0x00001000
#define AVR32_USB_UPSTA1SET_NBUSYBKS_OFFSET                        12
#define AVR32_USB_UPSTA1SET_NBUSYBKS_SIZE                           1
#define AVR32_USB_UPSTA1SET_OVERFIS                                 5
#define AVR32_USB_UPSTA1SET_OVERFIS_MASK                   0x00000020
#define AVR32_USB_UPSTA1SET_OVERFIS_OFFSET                          5
#define AVR32_USB_UPSTA1SET_OVERFIS_SIZE                            1
#define AVR32_USB_UPSTA1SET_PERRIS                                  3
#define AVR32_USB_UPSTA1SET_PERRIS_MASK                    0x00000008
#define AVR32_USB_UPSTA1SET_PERRIS_OFFSET                           3
#define AVR32_USB_UPSTA1SET_PERRIS_SIZE                             1
#define AVR32_USB_UPSTA1SET_RESETVALUE                     0x00000000
#define AVR32_USB_UPSTA1SET_RXINIS                                  0
#define AVR32_USB_UPSTA1SET_RXINIS_MASK                    0x00000001
#define AVR32_USB_UPSTA1SET_RXINIS_OFFSET                           0
#define AVR32_USB_UPSTA1SET_RXINIS_SIZE                             1
#define AVR32_USB_UPSTA1SET_RXSTALLDIS                              6
#define AVR32_USB_UPSTA1SET_RXSTALLDIS_MASK                0x00000040
#define AVR32_USB_UPSTA1SET_RXSTALLDIS_OFFSET                       6
#define AVR32_USB_UPSTA1SET_RXSTALLDIS_SIZE                         1
#define AVR32_USB_UPSTA1SET_SHORTPACKETIS                           7
#define AVR32_USB_UPSTA1SET_SHORTPACKETIS_MASK             0x00000080
#define AVR32_USB_UPSTA1SET_SHORTPACKETIS_OFFSET                    7
#define AVR32_USB_UPSTA1SET_SHORTPACKETIS_SIZE                      1
#define AVR32_USB_UPSTA1SET_TXOUTIS                                 1
#define AVR32_USB_UPSTA1SET_TXOUTIS_MASK                   0x00000002
#define AVR32_USB_UPSTA1SET_TXOUTIS_OFFSET                          1
#define AVR32_USB_UPSTA1SET_TXOUTIS_SIZE                            1
#define AVR32_USB_UPSTA1SET_TXSTPIS                                 2
#define AVR32_USB_UPSTA1SET_TXSTPIS_MASK                   0x00000004
#define AVR32_USB_UPSTA1SET_TXSTPIS_OFFSET                          2
#define AVR32_USB_UPSTA1SET_TXSTPIS_SIZE                            1
#define AVR32_USB_UPSTA1_CFGOK                                     18
#define AVR32_USB_UPSTA1_CFGOK_MASK                        0x00040000
#define AVR32_USB_UPSTA1_CFGOK_OFFSET                              18
#define AVR32_USB_UPSTA1_CFGOK_SIZE                                 1
#define AVR32_USB_UPSTA1_CURRBK                                    14
#define AVR32_USB_UPSTA1_CURRBK_MASK                       0x0000c000
#define AVR32_USB_UPSTA1_CURRBK_OFFSET                             14
#define AVR32_USB_UPSTA1_CURRBK_SIZE                                2
#define AVR32_USB_UPSTA1_DTSEQ                                      8
#define AVR32_USB_UPSTA1_DTSEQ_MASK                        0x00000300
#define AVR32_USB_UPSTA1_DTSEQ_OFFSET                               8
#define AVR32_USB_UPSTA1_DTSEQ_SIZE                                 2
#define AVR32_USB_UPSTA1_MASK                              0x7ff5f3ff
#define AVR32_USB_UPSTA1_NAKEDI                                     4
#define AVR32_USB_UPSTA1_NAKEDI_MASK                       0x00000010
#define AVR32_USB_UPSTA1_NAKEDI_OFFSET                              4
#define AVR32_USB_UPSTA1_NAKEDI_SIZE                                1
#define AVR32_USB_UPSTA1_NBUSYBK                                   12
#define AVR32_USB_UPSTA1_NBUSYBK_MASK                      0x00003000
#define AVR32_USB_UPSTA1_NBUSYBK_OFFSET                            12
#define AVR32_USB_UPSTA1_NBUSYBK_SIZE                               2
#define AVR32_USB_UPSTA1_OVERFI                                     5
#define AVR32_USB_UPSTA1_OVERFI_MASK                       0x00000020
#define AVR32_USB_UPSTA1_OVERFI_OFFSET                              5
#define AVR32_USB_UPSTA1_OVERFI_SIZE                                1
#define AVR32_USB_UPSTA1_PBYCT                                     20
#define AVR32_USB_UPSTA1_PBYCT_MASK                        0x7ff00000
#define AVR32_USB_UPSTA1_PBYCT_OFFSET                              20
#define AVR32_USB_UPSTA1_PBYCT_SIZE                                11
#define AVR32_USB_UPSTA1_PERRI                                      3
#define AVR32_USB_UPSTA1_PERRI_MASK                        0x00000008
#define AVR32_USB_UPSTA1_PERRI_OFFSET                               3
#define AVR32_USB_UPSTA1_PERRI_SIZE                                 1
#define AVR32_USB_UPSTA1_RESETVALUE                        0x00000000
#define AVR32_USB_UPSTA1_RWALL                                     16
#define AVR32_USB_UPSTA1_RWALL_MASK                        0x00010000
#define AVR32_USB_UPSTA1_RWALL_OFFSET                              16
#define AVR32_USB_UPSTA1_RWALL_SIZE                                 1
#define AVR32_USB_UPSTA1_RXINI                                      0
#define AVR32_USB_UPSTA1_RXINI_MASK                        0x00000001
#define AVR32_USB_UPSTA1_RXINI_OFFSET                               0
#define AVR32_USB_UPSTA1_RXINI_SIZE                                 1
#define AVR32_USB_UPSTA1_RXSTALLDI                                  6
#define AVR32_USB_UPSTA1_RXSTALLDI_MASK                    0x00000040
#define AVR32_USB_UPSTA1_RXSTALLDI_OFFSET                           6
#define AVR32_USB_UPSTA1_RXSTALLDI_SIZE                             1
#define AVR32_USB_UPSTA1_SHORTPACKETI                               7
#define AVR32_USB_UPSTA1_SHORTPACKETI_MASK                 0x00000080
#define AVR32_USB_UPSTA1_SHORTPACKETI_OFFSET                        7
#define AVR32_USB_UPSTA1_SHORTPACKETI_SIZE                          1
#define AVR32_USB_UPSTA1_TXOUTI                                     1
#define AVR32_USB_UPSTA1_TXOUTI_MASK                       0x00000002
#define AVR32_USB_UPSTA1_TXOUTI_OFFSET                              1
#define AVR32_USB_UPSTA1_TXOUTI_SIZE                                1
#define AVR32_USB_UPSTA1_TXSTPI                                     2
#define AVR32_USB_UPSTA1_TXSTPI_MASK                       0x00000004
#define AVR32_USB_UPSTA1_TXSTPI_OFFSET                              2
#define AVR32_USB_UPSTA1_TXSTPI_SIZE                                1
#define AVR32_USB_UPSTA2                                   0x00000538
#define AVR32_USB_UPSTA2CLR                                0x00000568
#define AVR32_USB_UPSTA2CLR_MASK                           0x000000f7
#define AVR32_USB_UPSTA2CLR_NAKEDIC                                 4
#define AVR32_USB_UPSTA2CLR_NAKEDIC_MASK                   0x00000010
#define AVR32_USB_UPSTA2CLR_NAKEDIC_OFFSET                          4
#define AVR32_USB_UPSTA2CLR_NAKEDIC_SIZE                            1
#define AVR32_USB_UPSTA2CLR_OVERFIC                                 5
#define AVR32_USB_UPSTA2CLR_OVERFIC_MASK                   0x00000020
#define AVR32_USB_UPSTA2CLR_OVERFIC_OFFSET                          5
#define AVR32_USB_UPSTA2CLR_OVERFIC_SIZE                            1
#define AVR32_USB_UPSTA2CLR_RESETVALUE                     0x00000000
#define AVR32_USB_UPSTA2CLR_RXINIC                                  0
#define AVR32_USB_UPSTA2CLR_RXINIC_MASK                    0x00000001
#define AVR32_USB_UPSTA2CLR_RXINIC_OFFSET                           0
#define AVR32_USB_UPSTA2CLR_RXINIC_SIZE                             1
#define AVR32_USB_UPSTA2CLR_RXSTALLDIC                              6
#define AVR32_USB_UPSTA2CLR_RXSTALLDIC_MASK                0x00000040
#define AVR32_USB_UPSTA2CLR_RXSTALLDIC_OFFSET                       6
#define AVR32_USB_UPSTA2CLR_RXSTALLDIC_SIZE                         1
#define AVR32_USB_UPSTA2CLR_SHORTPACKETIC                           7
#define AVR32_USB_UPSTA2CLR_SHORTPACKETIC_MASK             0x00000080
#define AVR32_USB_UPSTA2CLR_SHORTPACKETIC_OFFSET                    7
#define AVR32_USB_UPSTA2CLR_SHORTPACKETIC_SIZE                      1
#define AVR32_USB_UPSTA2CLR_TXOUTIC                                 1
#define AVR32_USB_UPSTA2CLR_TXOUTIC_MASK                   0x00000002
#define AVR32_USB_UPSTA2CLR_TXOUTIC_OFFSET                          1
#define AVR32_USB_UPSTA2CLR_TXOUTIC_SIZE                            1
#define AVR32_USB_UPSTA2CLR_TXSTPIC                                 2
#define AVR32_USB_UPSTA2CLR_TXSTPIC_MASK                   0x00000004
#define AVR32_USB_UPSTA2CLR_TXSTPIC_OFFSET                          2
#define AVR32_USB_UPSTA2CLR_TXSTPIC_SIZE                            1
#define AVR32_USB_UPSTA2SET                                0x00000598
#define AVR32_USB_UPSTA2SET_MASK                           0x000010ff
#define AVR32_USB_UPSTA2SET_NAKEDIS                                 4
#define AVR32_USB_UPSTA2SET_NAKEDIS_MASK                   0x00000010
#define AVR32_USB_UPSTA2SET_NAKEDIS_OFFSET                          4
#define AVR32_USB_UPSTA2SET_NAKEDIS_SIZE                            1
#define AVR32_USB_UPSTA2SET_NBUSYBKS                               12
#define AVR32_USB_UPSTA2SET_NBUSYBKS_MASK                  0x00001000
#define AVR32_USB_UPSTA2SET_NBUSYBKS_OFFSET                        12
#define AVR32_USB_UPSTA2SET_NBUSYBKS_SIZE                           1
#define AVR32_USB_UPSTA2SET_OVERFIS                                 5
#define AVR32_USB_UPSTA2SET_OVERFIS_MASK                   0x00000020
#define AVR32_USB_UPSTA2SET_OVERFIS_OFFSET                          5
#define AVR32_USB_UPSTA2SET_OVERFIS_SIZE                            1
#define AVR32_USB_UPSTA2SET_PERRIS                                  3
#define AVR32_USB_UPSTA2SET_PERRIS_MASK                    0x00000008
#define AVR32_USB_UPSTA2SET_PERRIS_OFFSET                           3
#define AVR32_USB_UPSTA2SET_PERRIS_SIZE                             1
#define AVR32_USB_UPSTA2SET_RESETVALUE                     0x00000000
#define AVR32_USB_UPSTA2SET_RXINIS                                  0
#define AVR32_USB_UPSTA2SET_RXINIS_MASK                    0x00000001
#define AVR32_USB_UPSTA2SET_RXINIS_OFFSET                           0
#define AVR32_USB_UPSTA2SET_RXINIS_SIZE                             1
#define AVR32_USB_UPSTA2SET_RXSTALLDIS                              6
#define AVR32_USB_UPSTA2SET_RXSTALLDIS_MASK                0x00000040
#define AVR32_USB_UPSTA2SET_RXSTALLDIS_OFFSET                       6
#define AVR32_USB_UPSTA2SET_RXSTALLDIS_SIZE                         1
#define AVR32_USB_UPSTA2SET_SHORTPACKETIS                           7
#define AVR32_USB_UPSTA2SET_SHORTPACKETIS_MASK             0x00000080
#define AVR32_USB_UPSTA2SET_SHORTPACKETIS_OFFSET                    7
#define AVR32_USB_UPSTA2SET_SHORTPACKETIS_SIZE                      1
#define AVR32_USB_UPSTA2SET_TXOUTIS                                 1
#define AVR32_USB_UPSTA2SET_TXOUTIS_MASK                   0x00000002
#define AVR32_USB_UPSTA2SET_TXOUTIS_OFFSET                          1
#define AVR32_USB_UPSTA2SET_TXOUTIS_SIZE                            1
#define AVR32_USB_UPSTA2SET_TXSTPIS                                 2
#define AVR32_USB_UPSTA2SET_TXSTPIS_MASK                   0x00000004
#define AVR32_USB_UPSTA2SET_TXSTPIS_OFFSET                          2
#define AVR32_USB_UPSTA2SET_TXSTPIS_SIZE                            1
#define AVR32_USB_UPSTA2_CFGOK                                     18
#define AVR32_USB_UPSTA2_CFGOK_MASK                        0x00040000
#define AVR32_USB_UPSTA2_CFGOK_OFFSET                              18
#define AVR32_USB_UPSTA2_CFGOK_SIZE                                 1
#define AVR32_USB_UPSTA2_CURRBK                                    14
#define AVR32_USB_UPSTA2_CURRBK_MASK                       0x0000c000
#define AVR32_USB_UPSTA2_CURRBK_OFFSET                             14
#define AVR32_USB_UPSTA2_CURRBK_SIZE                                2
#define AVR32_USB_UPSTA2_DTSEQ                                      8
#define AVR32_USB_UPSTA2_DTSEQ_MASK                        0x00000300
#define AVR32_USB_UPSTA2_DTSEQ_OFFSET                               8
#define AVR32_USB_UPSTA2_DTSEQ_SIZE                                 2
#define AVR32_USB_UPSTA2_MASK                              0x7ff5f3ff
#define AVR32_USB_UPSTA2_NAKEDI                                     4
#define AVR32_USB_UPSTA2_NAKEDI_MASK                       0x00000010
#define AVR32_USB_UPSTA2_NAKEDI_OFFSET                              4
#define AVR32_USB_UPSTA2_NAKEDI_SIZE                                1
#define AVR32_USB_UPSTA2_NBUSYBK                                   12
#define AVR32_USB_UPSTA2_NBUSYBK_MASK                      0x00003000
#define AVR32_USB_UPSTA2_NBUSYBK_OFFSET                            12
#define AVR32_USB_UPSTA2_NBUSYBK_SIZE                               2
#define AVR32_USB_UPSTA2_OVERFI                                     5
#define AVR32_USB_UPSTA2_OVERFI_MASK                       0x00000020
#define AVR32_USB_UPSTA2_OVERFI_OFFSET                              5
#define AVR32_USB_UPSTA2_OVERFI_SIZE                                1
#define AVR32_USB_UPSTA2_PBYCT                                     20
#define AVR32_USB_UPSTA2_PBYCT_MASK                        0x7ff00000
#define AVR32_USB_UPSTA2_PBYCT_OFFSET                              20
#define AVR32_USB_UPSTA2_PBYCT_SIZE                                11
#define AVR32_USB_UPSTA2_PERRI                                      3
#define AVR32_USB_UPSTA2_PERRI_MASK                        0x00000008
#define AVR32_USB_UPSTA2_PERRI_OFFSET                               3
#define AVR32_USB_UPSTA2_PERRI_SIZE                                 1
#define AVR32_USB_UPSTA2_RESETVALUE                        0x00000000
#define AVR32_USB_UPSTA2_RWALL                                     16
#define AVR32_USB_UPSTA2_RWALL_MASK                        0x00010000
#define AVR32_USB_UPSTA2_RWALL_OFFSET                              16
#define AVR32_USB_UPSTA2_RWALL_SIZE                                 1
#define AVR32_USB_UPSTA2_RXINI                                      0
#define AVR32_USB_UPSTA2_RXINI_MASK                        0x00000001
#define AVR32_USB_UPSTA2_RXINI_OFFSET                               0
#define AVR32_USB_UPSTA2_RXINI_SIZE                                 1
#define AVR32_USB_UPSTA2_RXSTALLDI                                  6
#define AVR32_USB_UPSTA2_RXSTALLDI_MASK                    0x00000040
#define AVR32_USB_UPSTA2_RXSTALLDI_OFFSET                           6
#define AVR32_USB_UPSTA2_RXSTALLDI_SIZE                             1
#define AVR32_USB_UPSTA2_SHORTPACKETI                               7
#define AVR32_USB_UPSTA2_SHORTPACKETI_MASK                 0x00000080
#define AVR32_USB_UPSTA2_SHORTPACKETI_OFFSET                        7
#define AVR32_USB_UPSTA2_SHORTPACKETI_SIZE                          1
#define AVR32_USB_UPSTA2_TXOUTI                                     1
#define AVR32_USB_UPSTA2_TXOUTI_MASK                       0x00000002
#define AVR32_USB_UPSTA2_TXOUTI_OFFSET                              1
#define AVR32_USB_UPSTA2_TXOUTI_SIZE                                1
#define AVR32_USB_UPSTA2_TXSTPI                                     2
#define AVR32_USB_UPSTA2_TXSTPI_MASK                       0x00000004
#define AVR32_USB_UPSTA2_TXSTPI_OFFSET                              2
#define AVR32_USB_UPSTA2_TXSTPI_SIZE                                1
#define AVR32_USB_UPSTA3                                   0x0000053c
#define AVR32_USB_UPSTA3CLR                                0x0000056c
#define AVR32_USB_UPSTA3CLR_MASK                           0x000000f7
#define AVR32_USB_UPSTA3CLR_NAKEDIC                                 4
#define AVR32_USB_UPSTA3CLR_NAKEDIC_MASK                   0x00000010
#define AVR32_USB_UPSTA3CLR_NAKEDIC_OFFSET                          4
#define AVR32_USB_UPSTA3CLR_NAKEDIC_SIZE                            1
#define AVR32_USB_UPSTA3CLR_OVERFIC                                 5
#define AVR32_USB_UPSTA3CLR_OVERFIC_MASK                   0x00000020
#define AVR32_USB_UPSTA3CLR_OVERFIC_OFFSET                          5
#define AVR32_USB_UPSTA3CLR_OVERFIC_SIZE                            1
#define AVR32_USB_UPSTA3CLR_RESETVALUE                     0x00000000
#define AVR32_USB_UPSTA3CLR_RXINIC                                  0
#define AVR32_USB_UPSTA3CLR_RXINIC_MASK                    0x00000001
#define AVR32_USB_UPSTA3CLR_RXINIC_OFFSET                           0
#define AVR32_USB_UPSTA3CLR_RXINIC_SIZE                             1
#define AVR32_USB_UPSTA3CLR_RXSTALLDIC                              6
#define AVR32_USB_UPSTA3CLR_RXSTALLDIC_MASK                0x00000040
#define AVR32_USB_UPSTA3CLR_RXSTALLDIC_OFFSET                       6
#define AVR32_USB_UPSTA3CLR_RXSTALLDIC_SIZE                         1
#define AVR32_USB_UPSTA3CLR_SHORTPACKETIC                           7
#define AVR32_USB_UPSTA3CLR_SHORTPACKETIC_MASK             0x00000080
#define AVR32_USB_UPSTA3CLR_SHORTPACKETIC_OFFSET                    7
#define AVR32_USB_UPSTA3CLR_SHORTPACKETIC_SIZE                      1
#define AVR32_USB_UPSTA3CLR_TXOUTIC                                 1
#define AVR32_USB_UPSTA3CLR_TXOUTIC_MASK                   0x00000002
#define AVR32_USB_UPSTA3CLR_TXOUTIC_OFFSET                          1
#define AVR32_USB_UPSTA3CLR_TXOUTIC_SIZE                            1
#define AVR32_USB_UPSTA3CLR_TXSTPIC                                 2
#define AVR32_USB_UPSTA3CLR_TXSTPIC_MASK                   0x00000004
#define AVR32_USB_UPSTA3CLR_TXSTPIC_OFFSET                          2
#define AVR32_USB_UPSTA3CLR_TXSTPIC_SIZE                            1
#define AVR32_USB_UPSTA3SET                                0x0000059c
#define AVR32_USB_UPSTA3SET_MASK                           0x000010ff
#define AVR32_USB_UPSTA3SET_NAKEDIS                                 4
#define AVR32_USB_UPSTA3SET_NAKEDIS_MASK                   0x00000010
#define AVR32_USB_UPSTA3SET_NAKEDIS_OFFSET                          4
#define AVR32_USB_UPSTA3SET_NAKEDIS_SIZE                            1
#define AVR32_USB_UPSTA3SET_NBUSYBKS                               12
#define AVR32_USB_UPSTA3SET_NBUSYBKS_MASK                  0x00001000
#define AVR32_USB_UPSTA3SET_NBUSYBKS_OFFSET                        12
#define AVR32_USB_UPSTA3SET_NBUSYBKS_SIZE                           1
#define AVR32_USB_UPSTA3SET_OVERFIS                                 5
#define AVR32_USB_UPSTA3SET_OVERFIS_MASK                   0x00000020
#define AVR32_USB_UPSTA3SET_OVERFIS_OFFSET                          5
#define AVR32_USB_UPSTA3SET_OVERFIS_SIZE                            1
#define AVR32_USB_UPSTA3SET_PERRIS                                  3
#define AVR32_USB_UPSTA3SET_PERRIS_MASK                    0x00000008
#define AVR32_USB_UPSTA3SET_PERRIS_OFFSET                           3
#define AVR32_USB_UPSTA3SET_PERRIS_SIZE                             1
#define AVR32_USB_UPSTA3SET_RESETVALUE                     0x00000000
#define AVR32_USB_UPSTA3SET_RXINIS                                  0
#define AVR32_USB_UPSTA3SET_RXINIS_MASK                    0x00000001
#define AVR32_USB_UPSTA3SET_RXINIS_OFFSET                           0
#define AVR32_USB_UPSTA3SET_RXINIS_SIZE                             1
#define AVR32_USB_UPSTA3SET_RXSTALLDIS                              6
#define AVR32_USB_UPSTA3SET_RXSTALLDIS_MASK                0x00000040
#define AVR32_USB_UPSTA3SET_RXSTALLDIS_OFFSET                       6
#define AVR32_USB_UPSTA3SET_RXSTALLDIS_SIZE                         1
#define AVR32_USB_UPSTA3SET_SHORTPACKETIS                           7
#define AVR32_USB_UPSTA3SET_SHORTPACKETIS_MASK             0x00000080
#define AVR32_USB_UPSTA3SET_SHORTPACKETIS_OFFSET                    7
#define AVR32_USB_UPSTA3SET_SHORTPACKETIS_SIZE                      1
#define AVR32_USB_UPSTA3SET_TXOUTIS                                 1
#define AVR32_USB_UPSTA3SET_TXOUTIS_MASK                   0x00000002
#define AVR32_USB_UPSTA3SET_TXOUTIS_OFFSET                          1
#define AVR32_USB_UPSTA3SET_TXOUTIS_SIZE                            1
#define AVR32_USB_UPSTA3SET_TXSTPIS                                 2
#define AVR32_USB_UPSTA3SET_TXSTPIS_MASK                   0x00000004
#define AVR32_USB_UPSTA3SET_TXSTPIS_OFFSET                          2
#define AVR32_USB_UPSTA3SET_TXSTPIS_SIZE                            1
#define AVR32_USB_UPSTA3_CFGOK                                     18
#define AVR32_USB_UPSTA3_CFGOK_MASK                        0x00040000
#define AVR32_USB_UPSTA3_CFGOK_OFFSET                              18
#define AVR32_USB_UPSTA3_CFGOK_SIZE                                 1
#define AVR32_USB_UPSTA3_CURRBK                                    14
#define AVR32_USB_UPSTA3_CURRBK_MASK                       0x0000c000
#define AVR32_USB_UPSTA3_CURRBK_OFFSET                             14
#define AVR32_USB_UPSTA3_CURRBK_SIZE                                2
#define AVR32_USB_UPSTA3_DTSEQ                                      8
#define AVR32_USB_UPSTA3_DTSEQ_MASK                        0x00000300
#define AVR32_USB_UPSTA3_DTSEQ_OFFSET                               8
#define AVR32_USB_UPSTA3_DTSEQ_SIZE                                 2
#define AVR32_USB_UPSTA3_MASK                              0x7ff5f3ff
#define AVR32_USB_UPSTA3_NAKEDI                                     4
#define AVR32_USB_UPSTA3_NAKEDI_MASK                       0x00000010
#define AVR32_USB_UPSTA3_NAKEDI_OFFSET                              4
#define AVR32_USB_UPSTA3_NAKEDI_SIZE                                1
#define AVR32_USB_UPSTA3_NBUSYBK                                   12
#define AVR32_USB_UPSTA3_NBUSYBK_MASK                      0x00003000
#define AVR32_USB_UPSTA3_NBUSYBK_OFFSET                            12
#define AVR32_USB_UPSTA3_NBUSYBK_SIZE                               2
#define AVR32_USB_UPSTA3_OVERFI                                     5
#define AVR32_USB_UPSTA3_OVERFI_MASK                       0x00000020
#define AVR32_USB_UPSTA3_OVERFI_OFFSET                              5
#define AVR32_USB_UPSTA3_OVERFI_SIZE                                1
#define AVR32_USB_UPSTA3_PBYCT                                     20
#define AVR32_USB_UPSTA3_PBYCT_MASK                        0x7ff00000
#define AVR32_USB_UPSTA3_PBYCT_OFFSET                              20
#define AVR32_USB_UPSTA3_PBYCT_SIZE                                11
#define AVR32_USB_UPSTA3_PERRI                                      3
#define AVR32_USB_UPSTA3_PERRI_MASK                        0x00000008
#define AVR32_USB_UPSTA3_PERRI_OFFSET                               3
#define AVR32_USB_UPSTA3_PERRI_SIZE                                 1
#define AVR32_USB_UPSTA3_RESETVALUE                        0x00000000
#define AVR32_USB_UPSTA3_RWALL                                     16
#define AVR32_USB_UPSTA3_RWALL_MASK                        0x00010000
#define AVR32_USB_UPSTA3_RWALL_OFFSET                              16
#define AVR32_USB_UPSTA3_RWALL_SIZE                                 1
#define AVR32_USB_UPSTA3_RXINI                                      0
#define AVR32_USB_UPSTA3_RXINI_MASK                        0x00000001
#define AVR32_USB_UPSTA3_RXINI_OFFSET                               0
#define AVR32_USB_UPSTA3_RXINI_SIZE                                 1
#define AVR32_USB_UPSTA3_RXSTALLDI                                  6
#define AVR32_USB_UPSTA3_RXSTALLDI_MASK                    0x00000040
#define AVR32_USB_UPSTA3_RXSTALLDI_OFFSET                           6
#define AVR32_USB_UPSTA3_RXSTALLDI_SIZE                             1
#define AVR32_USB_UPSTA3_SHORTPACKETI                               7
#define AVR32_USB_UPSTA3_SHORTPACKETI_MASK                 0x00000080
#define AVR32_USB_UPSTA3_SHORTPACKETI_OFFSET                        7
#define AVR32_USB_UPSTA3_SHORTPACKETI_SIZE                          1
#define AVR32_USB_UPSTA3_TXOUTI                                     1
#define AVR32_USB_UPSTA3_TXOUTI_MASK                       0x00000002
#define AVR32_USB_UPSTA3_TXOUTI_OFFSET                              1
#define AVR32_USB_UPSTA3_TXOUTI_SIZE                                1
#define AVR32_USB_UPSTA3_TXSTPI                                     2
#define AVR32_USB_UPSTA3_TXSTPI_MASK                       0x00000004
#define AVR32_USB_UPSTA3_TXSTPI_OFFSET                              2
#define AVR32_USB_UPSTA3_TXSTPI_SIZE                                1
#define AVR32_USB_UPSTA4                                   0x00000540
#define AVR32_USB_UPSTA4CLR                                0x00000570
#define AVR32_USB_UPSTA4CLR_MASK                           0x000000f7
#define AVR32_USB_UPSTA4CLR_NAKEDIC                                 4
#define AVR32_USB_UPSTA4CLR_NAKEDIC_MASK                   0x00000010
#define AVR32_USB_UPSTA4CLR_NAKEDIC_OFFSET                          4
#define AVR32_USB_UPSTA4CLR_NAKEDIC_SIZE                            1
#define AVR32_USB_UPSTA4CLR_OVERFIC                                 5
#define AVR32_USB_UPSTA4CLR_OVERFIC_MASK                   0x00000020
#define AVR32_USB_UPSTA4CLR_OVERFIC_OFFSET                          5
#define AVR32_USB_UPSTA4CLR_OVERFIC_SIZE                            1
#define AVR32_USB_UPSTA4CLR_RESETVALUE                     0x00000000
#define AVR32_USB_UPSTA4CLR_RXINIC                                  0
#define AVR32_USB_UPSTA4CLR_RXINIC_MASK                    0x00000001
#define AVR32_USB_UPSTA4CLR_RXINIC_OFFSET                           0
#define AVR32_USB_UPSTA4CLR_RXINIC_SIZE                             1
#define AVR32_USB_UPSTA4CLR_RXSTALLDIC                              6
#define AVR32_USB_UPSTA4CLR_RXSTALLDIC_MASK                0x00000040
#define AVR32_USB_UPSTA4CLR_RXSTALLDIC_OFFSET                       6
#define AVR32_USB_UPSTA4CLR_RXSTALLDIC_SIZE                         1
#define AVR32_USB_UPSTA4CLR_SHORTPACKETIC                           7
#define AVR32_USB_UPSTA4CLR_SHORTPACKETIC_MASK             0x00000080
#define AVR32_USB_UPSTA4CLR_SHORTPACKETIC_OFFSET                    7
#define AVR32_USB_UPSTA4CLR_SHORTPACKETIC_SIZE                      1
#define AVR32_USB_UPSTA4CLR_TXOUTIC                                 1
#define AVR32_USB_UPSTA4CLR_TXOUTIC_MASK                   0x00000002
#define AVR32_USB_UPSTA4CLR_TXOUTIC_OFFSET                          1
#define AVR32_USB_UPSTA4CLR_TXOUTIC_SIZE                            1
#define AVR32_USB_UPSTA4CLR_TXSTPIC                                 2
#define AVR32_USB_UPSTA4CLR_TXSTPIC_MASK                   0x00000004
#define AVR32_USB_UPSTA4CLR_TXSTPIC_OFFSET                          2
#define AVR32_USB_UPSTA4CLR_TXSTPIC_SIZE                            1
#define AVR32_USB_UPSTA4SET                                0x000005a0
#define AVR32_USB_UPSTA4SET_MASK                           0x000010ff
#define AVR32_USB_UPSTA4SET_NAKEDIS                                 4
#define AVR32_USB_UPSTA4SET_NAKEDIS_MASK                   0x00000010
#define AVR32_USB_UPSTA4SET_NAKEDIS_OFFSET                          4
#define AVR32_USB_UPSTA4SET_NAKEDIS_SIZE                            1
#define AVR32_USB_UPSTA4SET_NBUSYBKS                               12
#define AVR32_USB_UPSTA4SET_NBUSYBKS_MASK                  0x00001000
#define AVR32_USB_UPSTA4SET_NBUSYBKS_OFFSET                        12
#define AVR32_USB_UPSTA4SET_NBUSYBKS_SIZE                           1
#define AVR32_USB_UPSTA4SET_OVERFIS                                 5
#define AVR32_USB_UPSTA4SET_OVERFIS_MASK                   0x00000020
#define AVR32_USB_UPSTA4SET_OVERFIS_OFFSET                          5
#define AVR32_USB_UPSTA4SET_OVERFIS_SIZE                            1
#define AVR32_USB_UPSTA4SET_PERRIS                                  3
#define AVR32_USB_UPSTA4SET_PERRIS_MASK                    0x00000008
#define AVR32_USB_UPSTA4SET_PERRIS_OFFSET                           3
#define AVR32_USB_UPSTA4SET_PERRIS_SIZE                             1
#define AVR32_USB_UPSTA4SET_RESETVALUE                     0x00000000
#define AVR32_USB_UPSTA4SET_RXINIS                                  0
#define AVR32_USB_UPSTA4SET_RXINIS_MASK                    0x00000001
#define AVR32_USB_UPSTA4SET_RXINIS_OFFSET                           0
#define AVR32_USB_UPSTA4SET_RXINIS_SIZE                             1
#define AVR32_USB_UPSTA4SET_RXSTALLDIS                              6
#define AVR32_USB_UPSTA4SET_RXSTALLDIS_MASK                0x00000040
#define AVR32_USB_UPSTA4SET_RXSTALLDIS_OFFSET                       6
#define AVR32_USB_UPSTA4SET_RXSTALLDIS_SIZE                         1
#define AVR32_USB_UPSTA4SET_SHORTPACKETIS                           7
#define AVR32_USB_UPSTA4SET_SHORTPACKETIS_MASK             0x00000080
#define AVR32_USB_UPSTA4SET_SHORTPACKETIS_OFFSET                    7
#define AVR32_USB_UPSTA4SET_SHORTPACKETIS_SIZE                      1
#define AVR32_USB_UPSTA4SET_TXOUTIS                                 1
#define AVR32_USB_UPSTA4SET_TXOUTIS_MASK                   0x00000002
#define AVR32_USB_UPSTA4SET_TXOUTIS_OFFSET                          1
#define AVR32_USB_UPSTA4SET_TXOUTIS_SIZE                            1
#define AVR32_USB_UPSTA4SET_TXSTPIS                                 2
#define AVR32_USB_UPSTA4SET_TXSTPIS_MASK                   0x00000004
#define AVR32_USB_UPSTA4SET_TXSTPIS_OFFSET                          2
#define AVR32_USB_UPSTA4SET_TXSTPIS_SIZE                            1
#define AVR32_USB_UPSTA4_CFGOK                                     18
#define AVR32_USB_UPSTA4_CFGOK_MASK                        0x00040000
#define AVR32_USB_UPSTA4_CFGOK_OFFSET                              18
#define AVR32_USB_UPSTA4_CFGOK_SIZE                                 1
#define AVR32_USB_UPSTA4_CURRBK                                    14
#define AVR32_USB_UPSTA4_CURRBK_MASK                       0x0000c000
#define AVR32_USB_UPSTA4_CURRBK_OFFSET                             14
#define AVR32_USB_UPSTA4_CURRBK_SIZE                                2
#define AVR32_USB_UPSTA4_DTSEQ                                      8
#define AVR32_USB_UPSTA4_DTSEQ_MASK                        0x00000300
#define AVR32_USB_UPSTA4_DTSEQ_OFFSET                               8
#define AVR32_USB_UPSTA4_DTSEQ_SIZE                                 2
#define AVR32_USB_UPSTA4_MASK                              0x7ff5f3ff
#define AVR32_USB_UPSTA4_NAKEDI                                     4
#define AVR32_USB_UPSTA4_NAKEDI_MASK                       0x00000010
#define AVR32_USB_UPSTA4_NAKEDI_OFFSET                              4
#define AVR32_USB_UPSTA4_NAKEDI_SIZE                                1
#define AVR32_USB_UPSTA4_NBUSYBK                                   12
#define AVR32_USB_UPSTA4_NBUSYBK_MASK                      0x00003000
#define AVR32_USB_UPSTA4_NBUSYBK_OFFSET                            12
#define AVR32_USB_UPSTA4_NBUSYBK_SIZE                               2
#define AVR32_USB_UPSTA4_OVERFI                                     5
#define AVR32_USB_UPSTA4_OVERFI_MASK                       0x00000020
#define AVR32_USB_UPSTA4_OVERFI_OFFSET                              5
#define AVR32_USB_UPSTA4_OVERFI_SIZE                                1
#define AVR32_USB_UPSTA4_PBYCT                                     20
#define AVR32_USB_UPSTA4_PBYCT_MASK                        0x7ff00000
#define AVR32_USB_UPSTA4_PBYCT_OFFSET                              20
#define AVR32_USB_UPSTA4_PBYCT_SIZE                                11
#define AVR32_USB_UPSTA4_PERRI                                      3
#define AVR32_USB_UPSTA4_PERRI_MASK                        0x00000008
#define AVR32_USB_UPSTA4_PERRI_OFFSET                               3
#define AVR32_USB_UPSTA4_PERRI_SIZE                                 1
#define AVR32_USB_UPSTA4_RESETVALUE                        0x00000000
#define AVR32_USB_UPSTA4_RWALL                                     16
#define AVR32_USB_UPSTA4_RWALL_MASK                        0x00010000
#define AVR32_USB_UPSTA4_RWALL_OFFSET                              16
#define AVR32_USB_UPSTA4_RWALL_SIZE                                 1
#define AVR32_USB_UPSTA4_RXINI                                      0
#define AVR32_USB_UPSTA4_RXINI_MASK                        0x00000001
#define AVR32_USB_UPSTA4_RXINI_OFFSET                               0
#define AVR32_USB_UPSTA4_RXINI_SIZE                                 1
#define AVR32_USB_UPSTA4_RXSTALLDI                                  6
#define AVR32_USB_UPSTA4_RXSTALLDI_MASK                    0x00000040
#define AVR32_USB_UPSTA4_RXSTALLDI_OFFSET                           6
#define AVR32_USB_UPSTA4_RXSTALLDI_SIZE                             1
#define AVR32_USB_UPSTA4_SHORTPACKETI                               7
#define AVR32_USB_UPSTA4_SHORTPACKETI_MASK                 0x00000080
#define AVR32_USB_UPSTA4_SHORTPACKETI_OFFSET                        7
#define AVR32_USB_UPSTA4_SHORTPACKETI_SIZE                          1
#define AVR32_USB_UPSTA4_TXOUTI                                     1
#define AVR32_USB_UPSTA4_TXOUTI_MASK                       0x00000002
#define AVR32_USB_UPSTA4_TXOUTI_OFFSET                              1
#define AVR32_USB_UPSTA4_TXOUTI_SIZE                                1
#define AVR32_USB_UPSTA4_TXSTPI                                     2
#define AVR32_USB_UPSTA4_TXSTPI_MASK                       0x00000004
#define AVR32_USB_UPSTA4_TXSTPI_OFFSET                              2
#define AVR32_USB_UPSTA4_TXSTPI_SIZE                                1
#define AVR32_USB_UPSTA5                                   0x00000544
#define AVR32_USB_UPSTA5CLR                                0x00000574
#define AVR32_USB_UPSTA5CLR_MASK                           0x000000f7
#define AVR32_USB_UPSTA5CLR_NAKEDIC                                 4
#define AVR32_USB_UPSTA5CLR_NAKEDIC_MASK                   0x00000010
#define AVR32_USB_UPSTA5CLR_NAKEDIC_OFFSET                          4
#define AVR32_USB_UPSTA5CLR_NAKEDIC_SIZE                            1
#define AVR32_USB_UPSTA5CLR_OVERFIC                                 5
#define AVR32_USB_UPSTA5CLR_OVERFIC_MASK                   0x00000020
#define AVR32_USB_UPSTA5CLR_OVERFIC_OFFSET                          5
#define AVR32_USB_UPSTA5CLR_OVERFIC_SIZE                            1
#define AVR32_USB_UPSTA5CLR_RESETVALUE                     0x00000000
#define AVR32_USB_UPSTA5CLR_RXINIC                                  0
#define AVR32_USB_UPSTA5CLR_RXINIC_MASK                    0x00000001
#define AVR32_USB_UPSTA5CLR_RXINIC_OFFSET                           0
#define AVR32_USB_UPSTA5CLR_RXINIC_SIZE                             1
#define AVR32_USB_UPSTA5CLR_RXSTALLDIC                              6
#define AVR32_USB_UPSTA5CLR_RXSTALLDIC_MASK                0x00000040
#define AVR32_USB_UPSTA5CLR_RXSTALLDIC_OFFSET                       6
#define AVR32_USB_UPSTA5CLR_RXSTALLDIC_SIZE                         1
#define AVR32_USB_UPSTA5CLR_SHORTPACKETIC                           7
#define AVR32_USB_UPSTA5CLR_SHORTPACKETIC_MASK             0x00000080
#define AVR32_USB_UPSTA5CLR_SHORTPACKETIC_OFFSET                    7
#define AVR32_USB_UPSTA5CLR_SHORTPACKETIC_SIZE                      1
#define AVR32_USB_UPSTA5CLR_TXOUTIC                                 1
#define AVR32_USB_UPSTA5CLR_TXOUTIC_MASK                   0x00000002
#define AVR32_USB_UPSTA5CLR_TXOUTIC_OFFSET                          1
#define AVR32_USB_UPSTA5CLR_TXOUTIC_SIZE                            1
#define AVR32_USB_UPSTA5CLR_TXSTPIC                                 2
#define AVR32_USB_UPSTA5CLR_TXSTPIC_MASK                   0x00000004
#define AVR32_USB_UPSTA5CLR_TXSTPIC_OFFSET                          2
#define AVR32_USB_UPSTA5CLR_TXSTPIC_SIZE                            1
#define AVR32_USB_UPSTA5SET                                0x000005a4
#define AVR32_USB_UPSTA5SET_MASK                           0x000010ff
#define AVR32_USB_UPSTA5SET_NAKEDIS                                 4
#define AVR32_USB_UPSTA5SET_NAKEDIS_MASK                   0x00000010
#define AVR32_USB_UPSTA5SET_NAKEDIS_OFFSET                          4
#define AVR32_USB_UPSTA5SET_NAKEDIS_SIZE                            1
#define AVR32_USB_UPSTA5SET_NBUSYBKS                               12
#define AVR32_USB_UPSTA5SET_NBUSYBKS_MASK                  0x00001000
#define AVR32_USB_UPSTA5SET_NBUSYBKS_OFFSET                        12
#define AVR32_USB_UPSTA5SET_NBUSYBKS_SIZE                           1
#define AVR32_USB_UPSTA5SET_OVERFIS                                 5
#define AVR32_USB_UPSTA5SET_OVERFIS_MASK                   0x00000020
#define AVR32_USB_UPSTA5SET_OVERFIS_OFFSET                          5
#define AVR32_USB_UPSTA5SET_OVERFIS_SIZE                            1
#define AVR32_USB_UPSTA5SET_PERRIS                                  3
#define AVR32_USB_UPSTA5SET_PERRIS_MASK                    0x00000008
#define AVR32_USB_UPSTA5SET_PERRIS_OFFSET                           3
#define AVR32_USB_UPSTA5SET_PERRIS_SIZE                             1
#define AVR32_USB_UPSTA5SET_RESETVALUE                     0x00000000
#define AVR32_USB_UPSTA5SET_RXINIS                                  0
#define AVR32_USB_UPSTA5SET_RXINIS_MASK                    0x00000001
#define AVR32_USB_UPSTA5SET_RXINIS_OFFSET                           0
#define AVR32_USB_UPSTA5SET_RXINIS_SIZE                             1
#define AVR32_USB_UPSTA5SET_RXSTALLDIS                              6
#define AVR32_USB_UPSTA5SET_RXSTALLDIS_MASK                0x00000040
#define AVR32_USB_UPSTA5SET_RXSTALLDIS_OFFSET                       6
#define AVR32_USB_UPSTA5SET_RXSTALLDIS_SIZE                         1
#define AVR32_USB_UPSTA5SET_SHORTPACKETIS                           7
#define AVR32_USB_UPSTA5SET_SHORTPACKETIS_MASK             0x00000080
#define AVR32_USB_UPSTA5SET_SHORTPACKETIS_OFFSET                    7
#define AVR32_USB_UPSTA5SET_SHORTPACKETIS_SIZE                      1
#define AVR32_USB_UPSTA5SET_TXOUTIS                                 1
#define AVR32_USB_UPSTA5SET_TXOUTIS_MASK                   0x00000002
#define AVR32_USB_UPSTA5SET_TXOUTIS_OFFSET                          1
#define AVR32_USB_UPSTA5SET_TXOUTIS_SIZE                            1
#define AVR32_USB_UPSTA5SET_TXSTPIS                                 2
#define AVR32_USB_UPSTA5SET_TXSTPIS_MASK                   0x00000004
#define AVR32_USB_UPSTA5SET_TXSTPIS_OFFSET                          2
#define AVR32_USB_UPSTA5SET_TXSTPIS_SIZE                            1
#define AVR32_USB_UPSTA5_CFGOK                                     18
#define AVR32_USB_UPSTA5_CFGOK_MASK                        0x00040000
#define AVR32_USB_UPSTA5_CFGOK_OFFSET                              18
#define AVR32_USB_UPSTA5_CFGOK_SIZE                                 1
#define AVR32_USB_UPSTA5_CURRBK                                    14
#define AVR32_USB_UPSTA5_CURRBK_MASK                       0x0000c000
#define AVR32_USB_UPSTA5_CURRBK_OFFSET                             14
#define AVR32_USB_UPSTA5_CURRBK_SIZE                                2
#define AVR32_USB_UPSTA5_DTSEQ                                      8
#define AVR32_USB_UPSTA5_DTSEQ_MASK                        0x00000300
#define AVR32_USB_UPSTA5_DTSEQ_OFFSET                               8
#define AVR32_USB_UPSTA5_DTSEQ_SIZE                                 2
#define AVR32_USB_UPSTA5_MASK                              0x7ff5f3ff
#define AVR32_USB_UPSTA5_NAKEDI                                     4
#define AVR32_USB_UPSTA5_NAKEDI_MASK                       0x00000010
#define AVR32_USB_UPSTA5_NAKEDI_OFFSET                              4
#define AVR32_USB_UPSTA5_NAKEDI_SIZE                                1
#define AVR32_USB_UPSTA5_NBUSYBK                                   12
#define AVR32_USB_UPSTA5_NBUSYBK_MASK                      0x00003000
#define AVR32_USB_UPSTA5_NBUSYBK_OFFSET                            12
#define AVR32_USB_UPSTA5_NBUSYBK_SIZE                               2
#define AVR32_USB_UPSTA5_OVERFI                                     5
#define AVR32_USB_UPSTA5_OVERFI_MASK                       0x00000020
#define AVR32_USB_UPSTA5_OVERFI_OFFSET                              5
#define AVR32_USB_UPSTA5_OVERFI_SIZE                                1
#define AVR32_USB_UPSTA5_PBYCT                                     20
#define AVR32_USB_UPSTA5_PBYCT_MASK                        0x7ff00000
#define AVR32_USB_UPSTA5_PBYCT_OFFSET                              20
#define AVR32_USB_UPSTA5_PBYCT_SIZE                                11
#define AVR32_USB_UPSTA5_PERRI                                      3
#define AVR32_USB_UPSTA5_PERRI_MASK                        0x00000008
#define AVR32_USB_UPSTA5_PERRI_OFFSET                               3
#define AVR32_USB_UPSTA5_PERRI_SIZE                                 1
#define AVR32_USB_UPSTA5_RESETVALUE                        0x00000000
#define AVR32_USB_UPSTA5_RWALL                                     16
#define AVR32_USB_UPSTA5_RWALL_MASK                        0x00010000
#define AVR32_USB_UPSTA5_RWALL_OFFSET                              16
#define AVR32_USB_UPSTA5_RWALL_SIZE                                 1
#define AVR32_USB_UPSTA5_RXINI                                      0
#define AVR32_USB_UPSTA5_RXINI_MASK                        0x00000001
#define AVR32_USB_UPSTA5_RXINI_OFFSET                               0
#define AVR32_USB_UPSTA5_RXINI_SIZE                                 1
#define AVR32_USB_UPSTA5_RXSTALLDI                                  6
#define AVR32_USB_UPSTA5_RXSTALLDI_MASK                    0x00000040
#define AVR32_USB_UPSTA5_RXSTALLDI_OFFSET                           6
#define AVR32_USB_UPSTA5_RXSTALLDI_SIZE                             1
#define AVR32_USB_UPSTA5_SHORTPACKETI                               7
#define AVR32_USB_UPSTA5_SHORTPACKETI_MASK                 0x00000080
#define AVR32_USB_UPSTA5_SHORTPACKETI_OFFSET                        7
#define AVR32_USB_UPSTA5_SHORTPACKETI_SIZE                          1
#define AVR32_USB_UPSTA5_TXOUTI                                     1
#define AVR32_USB_UPSTA5_TXOUTI_MASK                       0x00000002
#define AVR32_USB_UPSTA5_TXOUTI_OFFSET                              1
#define AVR32_USB_UPSTA5_TXOUTI_SIZE                                1
#define AVR32_USB_UPSTA5_TXSTPI                                     2
#define AVR32_USB_UPSTA5_TXSTPI_MASK                       0x00000004
#define AVR32_USB_UPSTA5_TXSTPI_OFFSET                              2
#define AVR32_USB_UPSTA5_TXSTPI_SIZE                                1
#define AVR32_USB_UPSTA6                                   0x00000548
#define AVR32_USB_UPSTA6CLR                                0x00000578
#define AVR32_USB_UPSTA6CLR_MASK                           0x000000f7
#define AVR32_USB_UPSTA6CLR_NAKEDIC                                 4
#define AVR32_USB_UPSTA6CLR_NAKEDIC_MASK                   0x00000010
#define AVR32_USB_UPSTA6CLR_NAKEDIC_OFFSET                          4
#define AVR32_USB_UPSTA6CLR_NAKEDIC_SIZE                            1
#define AVR32_USB_UPSTA6CLR_OVERFIC                                 5
#define AVR32_USB_UPSTA6CLR_OVERFIC_MASK                   0x00000020
#define AVR32_USB_UPSTA6CLR_OVERFIC_OFFSET                          5
#define AVR32_USB_UPSTA6CLR_OVERFIC_SIZE                            1
#define AVR32_USB_UPSTA6CLR_RESETVALUE                     0x00000000
#define AVR32_USB_UPSTA6CLR_RXINIC                                  0
#define AVR32_USB_UPSTA6CLR_RXINIC_MASK                    0x00000001
#define AVR32_USB_UPSTA6CLR_RXINIC_OFFSET                           0
#define AVR32_USB_UPSTA6CLR_RXINIC_SIZE                             1
#define AVR32_USB_UPSTA6CLR_RXSTALLDIC                              6
#define AVR32_USB_UPSTA6CLR_RXSTALLDIC_MASK                0x00000040
#define AVR32_USB_UPSTA6CLR_RXSTALLDIC_OFFSET                       6
#define AVR32_USB_UPSTA6CLR_RXSTALLDIC_SIZE                         1
#define AVR32_USB_UPSTA6CLR_SHORTPACKETIC                           7
#define AVR32_USB_UPSTA6CLR_SHORTPACKETIC_MASK             0x00000080
#define AVR32_USB_UPSTA6CLR_SHORTPACKETIC_OFFSET                    7
#define AVR32_USB_UPSTA6CLR_SHORTPACKETIC_SIZE                      1
#define AVR32_USB_UPSTA6CLR_TXOUTIC                                 1
#define AVR32_USB_UPSTA6CLR_TXOUTIC_MASK                   0x00000002
#define AVR32_USB_UPSTA6CLR_TXOUTIC_OFFSET                          1
#define AVR32_USB_UPSTA6CLR_TXOUTIC_SIZE                            1
#define AVR32_USB_UPSTA6CLR_TXSTPIC                                 2
#define AVR32_USB_UPSTA6CLR_TXSTPIC_MASK                   0x00000004
#define AVR32_USB_UPSTA6CLR_TXSTPIC_OFFSET                          2
#define AVR32_USB_UPSTA6CLR_TXSTPIC_SIZE                            1
#define AVR32_USB_UPSTA6SET                                0x000005a8
#define AVR32_USB_UPSTA6SET_MASK                           0x000010ff
#define AVR32_USB_UPSTA6SET_NAKEDIS                                 4
#define AVR32_USB_UPSTA6SET_NAKEDIS_MASK                   0x00000010
#define AVR32_USB_UPSTA6SET_NAKEDIS_OFFSET                          4
#define AVR32_USB_UPSTA6SET_NAKEDIS_SIZE                            1
#define AVR32_USB_UPSTA6SET_NBUSYBKS                               12
#define AVR32_USB_UPSTA6SET_NBUSYBKS_MASK                  0x00001000
#define AVR32_USB_UPSTA6SET_NBUSYBKS_OFFSET                        12
#define AVR32_USB_UPSTA6SET_NBUSYBKS_SIZE                           1
#define AVR32_USB_UPSTA6SET_OVERFIS                                 5
#define AVR32_USB_UPSTA6SET_OVERFIS_MASK                   0x00000020
#define AVR32_USB_UPSTA6SET_OVERFIS_OFFSET                          5
#define AVR32_USB_UPSTA6SET_OVERFIS_SIZE                            1
#define AVR32_USB_UPSTA6SET_PERRIS                                  3
#define AVR32_USB_UPSTA6SET_PERRIS_MASK                    0x00000008
#define AVR32_USB_UPSTA6SET_PERRIS_OFFSET                           3
#define AVR32_USB_UPSTA6SET_PERRIS_SIZE                             1
#define AVR32_USB_UPSTA6SET_RESETVALUE                     0x00000000
#define AVR32_USB_UPSTA6SET_RXINIS                                  0
#define AVR32_USB_UPSTA6SET_RXINIS_MASK                    0x00000001
#define AVR32_USB_UPSTA6SET_RXINIS_OFFSET                           0
#define AVR32_USB_UPSTA6SET_RXINIS_SIZE                             1
#define AVR32_USB_UPSTA6SET_RXSTALLDIS                              6
#define AVR32_USB_UPSTA6SET_RXSTALLDIS_MASK                0x00000040
#define AVR32_USB_UPSTA6SET_RXSTALLDIS_OFFSET                       6
#define AVR32_USB_UPSTA6SET_RXSTALLDIS_SIZE                         1
#define AVR32_USB_UPSTA6SET_SHORTPACKETIS                           7
#define AVR32_USB_UPSTA6SET_SHORTPACKETIS_MASK             0x00000080
#define AVR32_USB_UPSTA6SET_SHORTPACKETIS_OFFSET                    7
#define AVR32_USB_UPSTA6SET_SHORTPACKETIS_SIZE                      1
#define AVR32_USB_UPSTA6SET_TXOUTIS                                 1
#define AVR32_USB_UPSTA6SET_TXOUTIS_MASK                   0x00000002
#define AVR32_USB_UPSTA6SET_TXOUTIS_OFFSET                          1
#define AVR32_USB_UPSTA6SET_TXOUTIS_SIZE                            1
#define AVR32_USB_UPSTA6SET_TXSTPIS                                 2
#define AVR32_USB_UPSTA6SET_TXSTPIS_MASK                   0x00000004
#define AVR32_USB_UPSTA6SET_TXSTPIS_OFFSET                          2
#define AVR32_USB_UPSTA6SET_TXSTPIS_SIZE                            1
#define AVR32_USB_UPSTA6_CFGOK                                     18
#define AVR32_USB_UPSTA6_CFGOK_MASK                        0x00040000
#define AVR32_USB_UPSTA6_CFGOK_OFFSET                              18
#define AVR32_USB_UPSTA6_CFGOK_SIZE                                 1
#define AVR32_USB_UPSTA6_CURRBK                                    14
#define AVR32_USB_UPSTA6_CURRBK_MASK                       0x0000c000
#define AVR32_USB_UPSTA6_CURRBK_OFFSET                             14
#define AVR32_USB_UPSTA6_CURRBK_SIZE                                2
#define AVR32_USB_UPSTA6_DTSEQ                                      8
#define AVR32_USB_UPSTA6_DTSEQ_MASK                        0x00000300
#define AVR32_USB_UPSTA6_DTSEQ_OFFSET                               8
#define AVR32_USB_UPSTA6_DTSEQ_SIZE                                 2
#define AVR32_USB_UPSTA6_MASK                              0x7ff5f3ff
#define AVR32_USB_UPSTA6_NAKEDI                                     4
#define AVR32_USB_UPSTA6_NAKEDI_MASK                       0x00000010
#define AVR32_USB_UPSTA6_NAKEDI_OFFSET                              4
#define AVR32_USB_UPSTA6_NAKEDI_SIZE                                1
#define AVR32_USB_UPSTA6_NBUSYBK                                   12
#define AVR32_USB_UPSTA6_NBUSYBK_MASK                      0x00003000
#define AVR32_USB_UPSTA6_NBUSYBK_OFFSET                            12
#define AVR32_USB_UPSTA6_NBUSYBK_SIZE                               2
#define AVR32_USB_UPSTA6_OVERFI                                     5
#define AVR32_USB_UPSTA6_OVERFI_MASK                       0x00000020
#define AVR32_USB_UPSTA6_OVERFI_OFFSET                              5
#define AVR32_USB_UPSTA6_OVERFI_SIZE                                1
#define AVR32_USB_UPSTA6_PBYCT                                     20
#define AVR32_USB_UPSTA6_PBYCT_MASK                        0x7ff00000
#define AVR32_USB_UPSTA6_PBYCT_OFFSET                              20
#define AVR32_USB_UPSTA6_PBYCT_SIZE                                11
#define AVR32_USB_UPSTA6_PERRI                                      3
#define AVR32_USB_UPSTA6_PERRI_MASK                        0x00000008
#define AVR32_USB_UPSTA6_PERRI_OFFSET                               3
#define AVR32_USB_UPSTA6_PERRI_SIZE                                 1
#define AVR32_USB_UPSTA6_RESETVALUE                        0x00000000
#define AVR32_USB_UPSTA6_RWALL                                     16
#define AVR32_USB_UPSTA6_RWALL_MASK                        0x00010000
#define AVR32_USB_UPSTA6_RWALL_OFFSET                              16
#define AVR32_USB_UPSTA6_RWALL_SIZE                                 1
#define AVR32_USB_UPSTA6_RXINI                                      0
#define AVR32_USB_UPSTA6_RXINI_MASK                        0x00000001
#define AVR32_USB_UPSTA6_RXINI_OFFSET                               0
#define AVR32_USB_UPSTA6_RXINI_SIZE                                 1
#define AVR32_USB_UPSTA6_RXSTALLDI                                  6
#define AVR32_USB_UPSTA6_RXSTALLDI_MASK                    0x00000040
#define AVR32_USB_UPSTA6_RXSTALLDI_OFFSET                           6
#define AVR32_USB_UPSTA6_RXSTALLDI_SIZE                             1
#define AVR32_USB_UPSTA6_SHORTPACKETI                               7
#define AVR32_USB_UPSTA6_SHORTPACKETI_MASK                 0x00000080
#define AVR32_USB_UPSTA6_SHORTPACKETI_OFFSET                        7
#define AVR32_USB_UPSTA6_SHORTPACKETI_SIZE                          1
#define AVR32_USB_UPSTA6_TXOUTI                                     1
#define AVR32_USB_UPSTA6_TXOUTI_MASK                       0x00000002
#define AVR32_USB_UPSTA6_TXOUTI_OFFSET                              1
#define AVR32_USB_UPSTA6_TXOUTI_SIZE                                1
#define AVR32_USB_UPSTA6_TXSTPI                                     2
#define AVR32_USB_UPSTA6_TXSTPI_MASK                       0x00000004
#define AVR32_USB_UPSTA6_TXSTPI_OFFSET                              2
#define AVR32_USB_UPSTA6_TXSTPI_SIZE                                1
#define AVR32_USB_UPSTA7                                   0x0000054c
#define AVR32_USB_UPSTA7CLR                                0x0000057c
#define AVR32_USB_UPSTA7CLR_MASK                           0x000000f7
#define AVR32_USB_UPSTA7CLR_NAKEDIC                                 4
#define AVR32_USB_UPSTA7CLR_NAKEDIC_MASK                   0x00000010
#define AVR32_USB_UPSTA7CLR_NAKEDIC_OFFSET                          4
#define AVR32_USB_UPSTA7CLR_NAKEDIC_SIZE                            1
#define AVR32_USB_UPSTA7CLR_OVERFIC                                 5
#define AVR32_USB_UPSTA7CLR_OVERFIC_MASK                   0x00000020
#define AVR32_USB_UPSTA7CLR_OVERFIC_OFFSET                          5
#define AVR32_USB_UPSTA7CLR_OVERFIC_SIZE                            1
#define AVR32_USB_UPSTA7CLR_RESETVALUE                     0x00000000
#define AVR32_USB_UPSTA7CLR_RXINIC                                  0
#define AVR32_USB_UPSTA7CLR_RXINIC_MASK                    0x00000001
#define AVR32_USB_UPSTA7CLR_RXINIC_OFFSET                           0
#define AVR32_USB_UPSTA7CLR_RXINIC_SIZE                             1
#define AVR32_USB_UPSTA7CLR_RXSTALLDIC                              6
#define AVR32_USB_UPSTA7CLR_RXSTALLDIC_MASK                0x00000040
#define AVR32_USB_UPSTA7CLR_RXSTALLDIC_OFFSET                       6
#define AVR32_USB_UPSTA7CLR_RXSTALLDIC_SIZE                         1
#define AVR32_USB_UPSTA7CLR_SHORTPACKETIC                           7
#define AVR32_USB_UPSTA7CLR_SHORTPACKETIC_MASK             0x00000080
#define AVR32_USB_UPSTA7CLR_SHORTPACKETIC_OFFSET                    7
#define AVR32_USB_UPSTA7CLR_SHORTPACKETIC_SIZE                      1
#define AVR32_USB_UPSTA7CLR_TXOUTIC                                 1
#define AVR32_USB_UPSTA7CLR_TXOUTIC_MASK                   0x00000002
#define AVR32_USB_UPSTA7CLR_TXOUTIC_OFFSET                          1
#define AVR32_USB_UPSTA7CLR_TXOUTIC_SIZE                            1
#define AVR32_USB_UPSTA7CLR_TXSTPIC                                 2
#define AVR32_USB_UPSTA7CLR_TXSTPIC_MASK                   0x00000004
#define AVR32_USB_UPSTA7CLR_TXSTPIC_OFFSET                          2
#define AVR32_USB_UPSTA7CLR_TXSTPIC_SIZE                            1
#define AVR32_USB_UPSTA7SET                                0x000005ac
#define AVR32_USB_UPSTA7SET_MASK                           0x000010ff
#define AVR32_USB_UPSTA7SET_NAKEDIS                                 4
#define AVR32_USB_UPSTA7SET_NAKEDIS_MASK                   0x00000010
#define AVR32_USB_UPSTA7SET_NAKEDIS_OFFSET                          4
#define AVR32_USB_UPSTA7SET_NAKEDIS_SIZE                            1
#define AVR32_USB_UPSTA7SET_NBUSYBKS                               12
#define AVR32_USB_UPSTA7SET_NBUSYBKS_MASK                  0x00001000
#define AVR32_USB_UPSTA7SET_NBUSYBKS_OFFSET                        12
#define AVR32_USB_UPSTA7SET_NBUSYBKS_SIZE                           1
#define AVR32_USB_UPSTA7SET_OVERFIS                                 5
#define AVR32_USB_UPSTA7SET_OVERFIS_MASK                   0x00000020
#define AVR32_USB_UPSTA7SET_OVERFIS_OFFSET                          5
#define AVR32_USB_UPSTA7SET_OVERFIS_SIZE                            1
#define AVR32_USB_UPSTA7SET_PERRIS                                  3
#define AVR32_USB_UPSTA7SET_PERRIS_MASK                    0x00000008
#define AVR32_USB_UPSTA7SET_PERRIS_OFFSET                           3
#define AVR32_USB_UPSTA7SET_PERRIS_SIZE                             1
#define AVR32_USB_UPSTA7SET_RESETVALUE                     0x00000000
#define AVR32_USB_UPSTA7SET_RXINIS                                  0
#define AVR32_USB_UPSTA7SET_RXINIS_MASK                    0x00000001
#define AVR32_USB_UPSTA7SET_RXINIS_OFFSET                           0
#define AVR32_USB_UPSTA7SET_RXINIS_SIZE                             1
#define AVR32_USB_UPSTA7SET_RXSTALLDIS                              6
#define AVR32_USB_UPSTA7SET_RXSTALLDIS_MASK                0x00000040
#define AVR32_USB_UPSTA7SET_RXSTALLDIS_OFFSET                       6
#define AVR32_USB_UPSTA7SET_RXSTALLDIS_SIZE                         1
#define AVR32_USB_UPSTA7SET_SHORTPACKETIS                           7
#define AVR32_USB_UPSTA7SET_SHORTPACKETIS_MASK             0x00000080
#define AVR32_USB_UPSTA7SET_SHORTPACKETIS_OFFSET                    7
#define AVR32_USB_UPSTA7SET_SHORTPACKETIS_SIZE                      1
#define AVR32_USB_UPSTA7SET_TXOUTIS                                 1
#define AVR32_USB_UPSTA7SET_TXOUTIS_MASK                   0x00000002
#define AVR32_USB_UPSTA7SET_TXOUTIS_OFFSET                          1
#define AVR32_USB_UPSTA7SET_TXOUTIS_SIZE                            1
#define AVR32_USB_UPSTA7SET_TXSTPIS                                 2
#define AVR32_USB_UPSTA7SET_TXSTPIS_MASK                   0x00000004
#define AVR32_USB_UPSTA7SET_TXSTPIS_OFFSET                          2
#define AVR32_USB_UPSTA7SET_TXSTPIS_SIZE                            1
#define AVR32_USB_UPSTA7_CFGOK                                     18
#define AVR32_USB_UPSTA7_CFGOK_MASK                        0x00040000
#define AVR32_USB_UPSTA7_CFGOK_OFFSET                              18
#define AVR32_USB_UPSTA7_CFGOK_SIZE                                 1
#define AVR32_USB_UPSTA7_CURRBK                                    14
#define AVR32_USB_UPSTA7_CURRBK_MASK                       0x0000c000
#define AVR32_USB_UPSTA7_CURRBK_OFFSET                             14
#define AVR32_USB_UPSTA7_CURRBK_SIZE                                2
#define AVR32_USB_UPSTA7_DTSEQ                                      8
#define AVR32_USB_UPSTA7_DTSEQ_MASK                        0x00000300
#define AVR32_USB_UPSTA7_DTSEQ_OFFSET                               8
#define AVR32_USB_UPSTA7_DTSEQ_SIZE                                 2
#define AVR32_USB_UPSTA7_MASK                              0x7ff5f3ff
#define AVR32_USB_UPSTA7_NAKEDI                                     4
#define AVR32_USB_UPSTA7_NAKEDI_MASK                       0x00000010
#define AVR32_USB_UPSTA7_NAKEDI_OFFSET                              4
#define AVR32_USB_UPSTA7_NAKEDI_SIZE                                1
#define AVR32_USB_UPSTA7_NBUSYBK                                   12
#define AVR32_USB_UPSTA7_NBUSYBK_MASK                      0x00003000
#define AVR32_USB_UPSTA7_NBUSYBK_OFFSET                            12
#define AVR32_USB_UPSTA7_NBUSYBK_SIZE                               2
#define AVR32_USB_UPSTA7_OVERFI                                     5
#define AVR32_USB_UPSTA7_OVERFI_MASK                       0x00000020
#define AVR32_USB_UPSTA7_OVERFI_OFFSET                              5
#define AVR32_USB_UPSTA7_OVERFI_SIZE                                1
#define AVR32_USB_UPSTA7_PBYCT                                     20
#define AVR32_USB_UPSTA7_PBYCT_MASK                        0x7ff00000
#define AVR32_USB_UPSTA7_PBYCT_OFFSET                              20
#define AVR32_USB_UPSTA7_PBYCT_SIZE                                11
#define AVR32_USB_UPSTA7_PERRI                                      3
#define AVR32_USB_UPSTA7_PERRI_MASK                        0x00000008
#define AVR32_USB_UPSTA7_PERRI_OFFSET                               3
#define AVR32_USB_UPSTA7_PERRI_SIZE                                 1
#define AVR32_USB_UPSTA7_RESETVALUE                        0x00000000
#define AVR32_USB_UPSTA7_RWALL                                     16
#define AVR32_USB_UPSTA7_RWALL_MASK                        0x00010000
#define AVR32_USB_UPSTA7_RWALL_OFFSET                              16
#define AVR32_USB_UPSTA7_RWALL_SIZE                                 1
#define AVR32_USB_UPSTA7_RXINI                                      0
#define AVR32_USB_UPSTA7_RXINI_MASK                        0x00000001
#define AVR32_USB_UPSTA7_RXINI_OFFSET                               0
#define AVR32_USB_UPSTA7_RXINI_SIZE                                 1
#define AVR32_USB_UPSTA7_RXSTALLDI                                  6
#define AVR32_USB_UPSTA7_RXSTALLDI_MASK                    0x00000040
#define AVR32_USB_UPSTA7_RXSTALLDI_OFFSET                           6
#define AVR32_USB_UPSTA7_RXSTALLDI_SIZE                             1
#define AVR32_USB_UPSTA7_SHORTPACKETI                               7
#define AVR32_USB_UPSTA7_SHORTPACKETI_MASK                 0x00000080
#define AVR32_USB_UPSTA7_SHORTPACKETI_OFFSET                        7
#define AVR32_USB_UPSTA7_SHORTPACKETI_SIZE                          1
#define AVR32_USB_UPSTA7_TXOUTI                                     1
#define AVR32_USB_UPSTA7_TXOUTI_MASK                       0x00000002
#define AVR32_USB_UPSTA7_TXOUTI_OFFSET                              1
#define AVR32_USB_UPSTA7_TXOUTI_SIZE                                1
#define AVR32_USB_UPSTA7_TXSTPI                                     2
#define AVR32_USB_UPSTA7_TXSTPI_MASK                       0x00000004
#define AVR32_USB_UPSTA7_TXSTPI_OFFSET                              2
#define AVR32_USB_UPSTA7_TXSTPI_SIZE                                1
#define AVR32_USB_USBCON                                   0x00000800
#define AVR32_USB_USBCON_BCERRE                                     4
#define AVR32_USB_USBCON_BCERRE_MASK                       0x00000010
#define AVR32_USB_USBCON_BCERRE_OFFSET                              4
#define AVR32_USB_USBCON_BCERRE_SIZE                                1
#define AVR32_USB_USBCON_FRZCLK                                    14
#define AVR32_USB_USBCON_FRZCLK_MASK                       0x00004000
#define AVR32_USB_USBCON_FRZCLK_OFFSET                             14
#define AVR32_USB_USBCON_FRZCLK_SIZE                                1
#define AVR32_USB_USBCON_HNPERRE                                    6
#define AVR32_USB_USBCON_HNPERRE_MASK                      0x00000040
#define AVR32_USB_USBCON_HNPERRE_OFFSET                             6
#define AVR32_USB_USBCON_HNPERRE_SIZE                               1
#define AVR32_USB_USBCON_HNPREQ                                    11
#define AVR32_USB_USBCON_HNPREQ_MASK                       0x00000800
#define AVR32_USB_USBCON_HNPREQ_OFFSET                             11
#define AVR32_USB_USBCON_HNPREQ_SIZE                                1
#define AVR32_USB_USBCON_IDTE                                       0
#define AVR32_USB_USBCON_IDTE_MASK                         0x00000001
#define AVR32_USB_USBCON_IDTE_OFFSET                                0
#define AVR32_USB_USBCON_IDTE_SIZE                                  1
#define AVR32_USB_USBCON_MASK                              0x0373ffff
#define AVR32_USB_USBCON_OTGPADE                                   12
#define AVR32_USB_USBCON_OTGPADE_MASK                      0x00001000
#define AVR32_USB_USBCON_OTGPADE_OFFSET                            12
#define AVR32_USB_USBCON_OTGPADE_SIZE                               1
#define AVR32_USB_USBCON_RESETVALUE                        0x03004000
#define AVR32_USB_USBCON_ROLEEXE                                    5
#define AVR32_USB_USBCON_ROLEEXE_MASK                      0x00000020
#define AVR32_USB_USBCON_ROLEEXE_OFFSET                             5
#define AVR32_USB_USBCON_ROLEEXE_SIZE                               1
#define AVR32_USB_USBCON_SRPE                                       2
#define AVR32_USB_USBCON_SRPE_MASK                         0x00000004
#define AVR32_USB_USBCON_SRPE_OFFSET                                2
#define AVR32_USB_USBCON_SRPE_SIZE                                  1
#define AVR32_USB_USBCON_SRPREQ                                    10
#define AVR32_USB_USBCON_SRPREQ_MASK                       0x00000400
#define AVR32_USB_USBCON_SRPREQ_OFFSET                             10
#define AVR32_USB_USBCON_SRPREQ_SIZE                                1
#define AVR32_USB_USBCON_SRPSEL                                     9
#define AVR32_USB_USBCON_SRPSEL_MASK                       0x00000200
#define AVR32_USB_USBCON_SRPSEL_OFFSET                              9
#define AVR32_USB_USBCON_SRPSEL_SIZE                                1
#define AVR32_USB_USBCON_STOE                                       7
#define AVR32_USB_USBCON_STOE_MASK                         0x00000080
#define AVR32_USB_USBCON_STOE_OFFSET                                7
#define AVR32_USB_USBCON_STOE_SIZE                                  1
#define AVR32_USB_USBCON_TIMPAGE                                   20
#define AVR32_USB_USBCON_TIMPAGE_A_WAIT_VRISE              0x00000000
#define AVR32_USB_USBCON_TIMPAGE_MASK                      0x00300000
#define AVR32_USB_USBCON_TIMPAGE_OFFSET                            20
#define AVR32_USB_USBCON_TIMPAGE_PD_TMOUT_CNT              0x00000002
#define AVR32_USB_USBCON_TIMPAGE_SIZE                               2
#define AVR32_USB_USBCON_TIMPAGE_SRP_DET_TMOUT             0x00000003
#define AVR32_USB_USBCON_TIMPAGE_VB_BUS_PULSING            0x00000001
#define AVR32_USB_USBCON_TIMVALUE                                  16
#define AVR32_USB_USBCON_TIMVALUE_MASK                     0x00030000
#define AVR32_USB_USBCON_TIMVALUE_OFFSET                           16
#define AVR32_USB_USBCON_TIMVALUE_SIZE                              2
#define AVR32_USB_USBCON_UIDE                                      24
#define AVR32_USB_USBCON_UIDE_MASK                         0x01000000
#define AVR32_USB_USBCON_UIDE_OFFSET                               24
#define AVR32_USB_USBCON_UIDE_SIZE                                  1
#define AVR32_USB_USBCON_UIMOD                                     25
#define AVR32_USB_USBCON_UIMOD_MASK                        0x02000000
#define AVR32_USB_USBCON_UIMOD_OFFSET                              25
#define AVR32_USB_USBCON_UIMOD_SIZE                                 1
#define AVR32_USB_USBCON_UNLOCK                                    22
#define AVR32_USB_USBCON_UNLOCK_MASK                       0x00400000
#define AVR32_USB_USBCON_UNLOCK_OFFSET                             22
#define AVR32_USB_USBCON_UNLOCK_SIZE                                1
#define AVR32_USB_USBCON_USBE                                      15
#define AVR32_USB_USBCON_USBE_MASK                         0x00008000
#define AVR32_USB_USBCON_USBE_OFFSET                               15
#define AVR32_USB_USBCON_USBE_SIZE                                  1
#define AVR32_USB_USBCON_VBERRE                                     3
#define AVR32_USB_USBCON_VBERRE_MASK                       0x00000008
#define AVR32_USB_USBCON_VBERRE_OFFSET                              3
#define AVR32_USB_USBCON_VBERRE_SIZE                                1
#define AVR32_USB_USBCON_VBUSHWC                                    8
#define AVR32_USB_USBCON_VBUSHWC_MASK                      0x00000100
#define AVR32_USB_USBCON_VBUSHWC_OFFSET                             8
#define AVR32_USB_USBCON_VBUSHWC_SIZE                               1
#define AVR32_USB_USBCON_VBUSPO                                    13
#define AVR32_USB_USBCON_VBUSPO_MASK                       0x00002000
#define AVR32_USB_USBCON_VBUSPO_OFFSET                             13
#define AVR32_USB_USBCON_VBUSPO_SIZE                                1
#define AVR32_USB_USBCON_VBUSTE                                     1
#define AVR32_USB_USBCON_VBUSTE_MASK                       0x00000002
#define AVR32_USB_USBCON_VBUSTE_OFFSET                              1
#define AVR32_USB_USBCON_VBUSTE_SIZE                                1
#define AVR32_USB_USBE_SIZE                                         1
#define AVR32_USB_USBFSM                                   0x0000082c
#define AVR32_USB_USBFSM_DRDSTATE                                   0
#define AVR32_USB_USBFSM_DRDSTATE_A_HOST                   0x00000003
#define AVR32_USB_USBFSM_DRDSTATE_A_IDLE                   0x00000000
#define AVR32_USB_USBFSM_DRDSTATE_A_PERIPHERAL             0x00000005
#define AVR32_USB_USBFSM_DRDSTATE_A_SUSPEND                0x00000004
#define AVR32_USB_USBFSM_DRDSTATE_A_VBUS_ERR               0x00000007
#define AVR32_USB_USBFSM_DRDSTATE_A_WAIT_BCON              0x00000002
#define AVR32_USB_USBFSM_DRDSTATE_A_WAIT_DISCHARGE         0x00000008
#define AVR32_USB_USBFSM_DRDSTATE_A_WAIT_VFALL             0x00000006
#define AVR32_USB_USBFSM_DRDSTATE_A_WAIT_VRISE             0x00000001
#define AVR32_USB_USBFSM_DRDSTATE_B_HOST                   0x0000000e
#define AVR32_USB_USBFSM_DRDSTATE_B_IDLE                   0x00000009
#define AVR32_USB_USBFSM_DRDSTATE_B_PERIPHERAL             0x0000000a
#define AVR32_USB_USBFSM_DRDSTATE_B_SRP_INIT               0x0000000f
#define AVR32_USB_USBFSM_DRDSTATE_B_WAIT_ACON              0x0000000d
#define AVR32_USB_USBFSM_DRDSTATE_B_WAIT_BEGIN_HNP         0x0000000b
#define AVR32_USB_USBFSM_DRDSTATE_B_WAIT_DISCHARGE         0x0000000c
#define AVR32_USB_USBFSM_DRDSTATE_MASK                     0x0000000f
#define AVR32_USB_USBFSM_DRDSTATE_OFFSET                            0
#define AVR32_USB_USBFSM_DRDSTATE_SIZE                              4
#define AVR32_USB_USBFSM_MASK                              0x0000000f
#define AVR32_USB_USBFSM_RESETVALUE                        0x00000009
#define AVR32_USB_USBSTA                                   0x00000804
#define AVR32_USB_USBSTACLR                                0x00000808
#define AVR32_USB_USBSTACLR_BCERRIC                                 4
#define AVR32_USB_USBSTACLR_BCERRIC_MASK                   0x00000010
#define AVR32_USB_USBSTACLR_BCERRIC_OFFSET                          4
#define AVR32_USB_USBSTACLR_BCERRIC_SIZE                            1
#define AVR32_USB_USBSTACLR_HNPERRIC                                6
#define AVR32_USB_USBSTACLR_HNPERRIC_MASK                  0x00000040
#define AVR32_USB_USBSTACLR_HNPERRIC_OFFSET                         6
#define AVR32_USB_USBSTACLR_HNPERRIC_SIZE                           1
#define AVR32_USB_USBSTACLR_IDTIC                                   0
#define AVR32_USB_USBSTACLR_IDTIC_MASK                     0x00000001
#define AVR32_USB_USBSTACLR_IDTIC_OFFSET                            0
#define AVR32_USB_USBSTACLR_IDTIC_SIZE                              1
#define AVR32_USB_USBSTACLR_MASK                           0x000002ff
#define AVR32_USB_USBSTACLR_RESETVALUE                     0x00000000
#define AVR32_USB_USBSTACLR_ROLEEXIC                                5
#define AVR32_USB_USBSTACLR_ROLEEXIC_MASK                  0x00000020
#define AVR32_USB_USBSTACLR_ROLEEXIC_OFFSET                         5
#define AVR32_USB_USBSTACLR_ROLEEXIC_SIZE                           1
#define AVR32_USB_USBSTACLR_SRPIC                                   2
#define AVR32_USB_USBSTACLR_SRPIC_MASK                     0x00000004
#define AVR32_USB_USBSTACLR_SRPIC_OFFSET                            2
#define AVR32_USB_USBSTACLR_SRPIC_SIZE                              1
#define AVR32_USB_USBSTACLR_STOIC                                   7
#define AVR32_USB_USBSTACLR_STOIC_MASK                     0x00000080
#define AVR32_USB_USBSTACLR_STOIC_OFFSET                            7
#define AVR32_USB_USBSTACLR_STOIC_SIZE                              1
#define AVR32_USB_USBSTACLR_VBERRIC                                 3
#define AVR32_USB_USBSTACLR_VBERRIC_MASK                   0x00000008
#define AVR32_USB_USBSTACLR_VBERRIC_OFFSET                          3
#define AVR32_USB_USBSTACLR_VBERRIC_SIZE                            1
#define AVR32_USB_USBSTACLR_VBUSRQC                                 9
#define AVR32_USB_USBSTACLR_VBUSRQC_MASK                   0x00000200
#define AVR32_USB_USBSTACLR_VBUSRQC_OFFSET                          9
#define AVR32_USB_USBSTACLR_VBUSRQC_SIZE                            1
#define AVR32_USB_USBSTACLR_VBUSTIC                                 1
#define AVR32_USB_USBSTACLR_VBUSTIC_MASK                   0x00000002
#define AVR32_USB_USBSTACLR_VBUSTIC_OFFSET                          1
#define AVR32_USB_USBSTACLR_VBUSTIC_SIZE                            1
#define AVR32_USB_USBSTASET                                0x0000080c
#define AVR32_USB_USBSTASET_BCERRIS                                 4
#define AVR32_USB_USBSTASET_BCERRIS_MASK                   0x00000010
#define AVR32_USB_USBSTASET_BCERRIS_OFFSET                          4
#define AVR32_USB_USBSTASET_BCERRIS_SIZE                            1
#define AVR32_USB_USBSTASET_HNPERRIS                                6
#define AVR32_USB_USBSTASET_HNPERRIS_MASK                  0x00000040
#define AVR32_USB_USBSTASET_HNPERRIS_OFFSET                         6
#define AVR32_USB_USBSTASET_HNPERRIS_SIZE                           1
#define AVR32_USB_USBSTASET_IDTIS                                   0
#define AVR32_USB_USBSTASET_IDTIS_MASK                     0x00000001
#define AVR32_USB_USBSTASET_IDTIS_OFFSET                            0
#define AVR32_USB_USBSTASET_IDTIS_SIZE                              1
#define AVR32_USB_USBSTASET_MASK                           0x000002ff
#define AVR32_USB_USBSTASET_RESETVALUE                     0x00000000
#define AVR32_USB_USBSTASET_ROLEEXIS                                5
#define AVR32_USB_USBSTASET_ROLEEXIS_MASK                  0x00000020
#define AVR32_USB_USBSTASET_ROLEEXIS_OFFSET                         5
#define AVR32_USB_USBSTASET_ROLEEXIS_SIZE                           1
#define AVR32_USB_USBSTASET_SRPIS                                   2
#define AVR32_USB_USBSTASET_SRPIS_MASK                     0x00000004
#define AVR32_USB_USBSTASET_SRPIS_OFFSET                            2
#define AVR32_USB_USBSTASET_SRPIS_SIZE                              1
#define AVR32_USB_USBSTASET_STOIS                                   7
#define AVR32_USB_USBSTASET_STOIS_MASK                     0x00000080
#define AVR32_USB_USBSTASET_STOIS_OFFSET                            7
#define AVR32_USB_USBSTASET_STOIS_SIZE                              1
#define AVR32_USB_USBSTASET_VBERRIS                                 3
#define AVR32_USB_USBSTASET_VBERRIS_MASK                   0x00000008
#define AVR32_USB_USBSTASET_VBERRIS_OFFSET                          3
#define AVR32_USB_USBSTASET_VBERRIS_SIZE                            1
#define AVR32_USB_USBSTASET_VBUSRQS                                 9
#define AVR32_USB_USBSTASET_VBUSRQS_MASK                   0x00000200
#define AVR32_USB_USBSTASET_VBUSRQS_OFFSET                          9
#define AVR32_USB_USBSTASET_VBUSRQS_SIZE                            1
#define AVR32_USB_USBSTASET_VBUSTIS                                 1
#define AVR32_USB_USBSTASET_VBUSTIS_MASK                   0x00000002
#define AVR32_USB_USBSTASET_VBUSTIS_OFFSET                          1
#define AVR32_USB_USBSTASET_VBUSTIS_SIZE                            1
#define AVR32_USB_USBSTA_BCERRI                                     4
#define AVR32_USB_USBSTA_BCERRI_MASK                       0x00000010
#define AVR32_USB_USBSTA_BCERRI_OFFSET                              4
#define AVR32_USB_USBSTA_BCERRI_SIZE                                1
#define AVR32_USB_USBSTA_CLKUSABLE                                 14
#define AVR32_USB_USBSTA_CLKUSABLE_MASK                    0x00004000
#define AVR32_USB_USBSTA_CLKUSABLE_OFFSET                          14
#define AVR32_USB_USBSTA_CLKUSABLE_SIZE                             1
#define AVR32_USB_USBSTA_HNPERRI                                    6
#define AVR32_USB_USBSTA_HNPERRI_MASK                      0x00000040
#define AVR32_USB_USBSTA_HNPERRI_OFFSET                             6
#define AVR32_USB_USBSTA_HNPERRI_SIZE                               1
#define AVR32_USB_USBSTA_ID                                        10
#define AVR32_USB_USBSTA_IDTI                                       0
#define AVR32_USB_USBSTA_IDTI_MASK                         0x00000001
#define AVR32_USB_USBSTA_IDTI_OFFSET                                0
#define AVR32_USB_USBSTA_IDTI_SIZE                                  1
#define AVR32_USB_USBSTA_ID_MASK                           0x00000400
#define AVR32_USB_USBSTA_ID_OFFSET                                 10
#define AVR32_USB_USBSTA_ID_SIZE                                    1
#define AVR32_USB_USBSTA_MASK                              0x00007eff
#define AVR32_USB_USBSTA_RESETVALUE                        0x00000400
#define AVR32_USB_USBSTA_ROLEEXI                                    5
#define AVR32_USB_USBSTA_ROLEEXI_MASK                      0x00000020
#define AVR32_USB_USBSTA_ROLEEXI_OFFSET                             5
#define AVR32_USB_USBSTA_ROLEEXI_SIZE                               1
#define AVR32_USB_USBSTA_SPEED                                     12
#define AVR32_USB_USBSTA_SPEED_FULL                        0x00000000
#define AVR32_USB_USBSTA_SPEED_LOW                         0x00000002
#define AVR32_USB_USBSTA_SPEED_MASK                        0x00003000
#define AVR32_USB_USBSTA_SPEED_OFFSET                              12
#define AVR32_USB_USBSTA_SPEED_SIZE                                 2
#define AVR32_USB_USBSTA_SRPI                                       2
#define AVR32_USB_USBSTA_SRPI_MASK                         0x00000004
#define AVR32_USB_USBSTA_SRPI_OFFSET                                2
#define AVR32_USB_USBSTA_SRPI_SIZE                                  1
#define AVR32_USB_USBSTA_STOI                                       7
#define AVR32_USB_USBSTA_STOI_MASK                         0x00000080
#define AVR32_USB_USBSTA_STOI_OFFSET                                7
#define AVR32_USB_USBSTA_STOI_SIZE                                  1
#define AVR32_USB_USBSTA_VBERRI                                     3
#define AVR32_USB_USBSTA_VBERRI_MASK                       0x00000008
#define AVR32_USB_USBSTA_VBERRI_OFFSET                              3
#define AVR32_USB_USBSTA_VBERRI_SIZE                                1
#define AVR32_USB_USBSTA_VBUS                                      11
#define AVR32_USB_USBSTA_VBUSRQ                                     9
#define AVR32_USB_USBSTA_VBUSRQ_MASK                       0x00000200
#define AVR32_USB_USBSTA_VBUSRQ_OFFSET                              9
#define AVR32_USB_USBSTA_VBUSRQ_SIZE                                1
#define AVR32_USB_USBSTA_VBUSTI                                     1
#define AVR32_USB_USBSTA_VBUSTI_MASK                       0x00000002
#define AVR32_USB_USBSTA_VBUSTI_OFFSET                              1
#define AVR32_USB_USBSTA_VBUSTI_SIZE                                1
#define AVR32_USB_USBSTA_VBUS_MASK                         0x00000800
#define AVR32_USB_USBSTA_VBUS_OFFSET                               11
#define AVR32_USB_USBSTA_VBUS_SIZE                                  1
#define AVR32_USB_UTMIRESET                                         8
#define AVR32_USB_UTMIRESET_MASK                           0x00000100
#define AVR32_USB_UTMIRESET_OFFSET                                  8
#define AVR32_USB_UTMIRESET_SIZE                                    1
#define AVR32_USB_UVERS                                    0x00000818
#define AVR32_USB_UVERS_MASK                               0x0007ffff
#define AVR32_USB_UVERS_METAL_FIX_NUM                              16
#define AVR32_USB_UVERS_METAL_FIX_NUM_MASK                 0x00070000
#define AVR32_USB_UVERS_METAL_FIX_NUM_OFFSET                       16
#define AVR32_USB_UVERS_METAL_FIX_NUM_SIZE                          3
#define AVR32_USB_UVERS_RESETVALUE                         0x00000320
#define AVR32_USB_UVERS_VERSION_NUM                                 0
#define AVR32_USB_UVERS_VERSION_NUM_MASK                   0x0000ffff
#define AVR32_USB_UVERS_VERSION_NUM_OFFSET                          0
#define AVR32_USB_UVERS_VERSION_NUM_SIZE                           16
#define AVR32_USB_VBERRE                                            3
#define AVR32_USB_VBERRE_MASK                              0x00000008
#define AVR32_USB_VBERRE_OFFSET                                     3
#define AVR32_USB_VBERRE_SIZE                                       1
#define AVR32_USB_VBERRI                                            3
#define AVR32_USB_VBERRIC                                           3
#define AVR32_USB_VBERRIC_MASK                             0x00000008
#define AVR32_USB_VBERRIC_OFFSET                                    3
#define AVR32_USB_VBERRIC_SIZE                                      1
#define AVR32_USB_VBERRIS                                           3
#define AVR32_USB_VBERRIS_MASK                             0x00000008
#define AVR32_USB_VBERRIS_OFFSET                                    3
#define AVR32_USB_VBERRIS_SIZE                                      1
#define AVR32_USB_VBERRI_MASK                              0x00000008
#define AVR32_USB_VBERRI_OFFSET                                     3
#define AVR32_USB_VBERRI_SIZE                                       1
#define AVR32_USB_VBUSE                                             7
#define AVR32_USB_VBUSEC                                            7
#define AVR32_USB_VBUSEC_MASK                              0x00000080
#define AVR32_USB_VBUSEC_OFFSET                                     7
#define AVR32_USB_VBUSEC_SIZE                                       1
#define AVR32_USB_VBUSES                                            7
#define AVR32_USB_VBUSES_MASK                              0x00000080
#define AVR32_USB_VBUSES_OFFSET                                     7
#define AVR32_USB_VBUSES_SIZE                                       1
#define AVR32_USB_VBUSE_MASK                               0x00000080
#define AVR32_USB_VBUSE_OFFSET                                      7
#define AVR32_USB_VBUSE_SIZE                                        1
#define AVR32_USB_VBUSHWC                                           8
#define AVR32_USB_VBUSHWC_MASK                             0x00000100
#define AVR32_USB_VBUSHWC_OFFSET                                    8
#define AVR32_USB_VBUSHWC_SIZE                                      1
#define AVR32_USB_VBUSPO                                           13
#define AVR32_USB_VBUSPO_MASK                              0x00002000
#define AVR32_USB_VBUSPO_OFFSET                                    13
#define AVR32_USB_VBUSPO_SIZE                                       1
#define AVR32_USB_VBUSRQ                                            9
#define AVR32_USB_VBUSRQC                                           9
#define AVR32_USB_VBUSRQC_MASK                             0x00000200
#define AVR32_USB_VBUSRQC_OFFSET                                    9
#define AVR32_USB_VBUSRQC_SIZE                                      1
#define AVR32_USB_VBUSRQS                                           9
#define AVR32_USB_VBUSRQS_MASK                             0x00000200
#define AVR32_USB_VBUSRQS_OFFSET                                    9
#define AVR32_USB_VBUSRQS_SIZE                                      1
#define AVR32_USB_VBUSRQ_MASK                              0x00000200
#define AVR32_USB_VBUSRQ_OFFSET                                     9
#define AVR32_USB_VBUSRQ_SIZE                                       1
#define AVR32_USB_VBUSTE                                            1
#define AVR32_USB_VBUSTE_MASK                              0x00000002
#define AVR32_USB_VBUSTE_OFFSET                                     1
#define AVR32_USB_VBUSTE_SIZE                                       1
#define AVR32_USB_VBUSTIC_SIZE                                      1
#define AVR32_USB_VBUSTIS_SIZE                                      1
#define AVR32_USB_VBUSTI_SIZE                                       1
#define AVR32_USB_VBUS_SIZE                                         1
#define AVR32_USB_VB_BUS_PULSING                           0x00000001
#define AVR32_USB_VERSION_NUM                                       0
#define AVR32_USB_VERSION_NUM_MASK                         0x0000ffff
#define AVR32_USB_VERSION_NUM_OFFSET                                0
#define AVR32_USB_VERSION_NUM_SIZE                                 16
#define AVR32_USB_WAKEUP                                            4
#define AVR32_USB_WAKEUPC                                           4
#define AVR32_USB_WAKEUPC_MASK                             0x00000010
#define AVR32_USB_WAKEUPC_OFFSET                                    4
#define AVR32_USB_WAKEUPC_SIZE                                      1
#define AVR32_USB_WAKEUPE                                           4
#define AVR32_USB_WAKEUPEC                                          4
#define AVR32_USB_WAKEUPEC_MASK                            0x00000010
#define AVR32_USB_WAKEUPEC_OFFSET                                   4
#define AVR32_USB_WAKEUPEC_SIZE                                     1
#define AVR32_USB_WAKEUPES                                          4
#define AVR32_USB_WAKEUPES_MASK                            0x00000010
#define AVR32_USB_WAKEUPES_OFFSET                                   4
#define AVR32_USB_WAKEUPES_SIZE                                     1
#define AVR32_USB_WAKEUPE_MASK                             0x00000010
#define AVR32_USB_WAKEUPE_OFFSET                                    4
#define AVR32_USB_WAKEUPE_SIZE                                      1
#define AVR32_USB_WAKEUPS                                           4
#define AVR32_USB_WAKEUPS_MASK                             0x00000010
#define AVR32_USB_WAKEUPS_OFFSET                                    4
#define AVR32_USB_WAKEUPS_SIZE                                      1
#define AVR32_USB_WAKEUP_MASK                              0x00000010
#define AVR32_USB_WAKEUP_OFFSET                                     4
#define AVR32_USB_WAKEUP_SIZE                                       1




#ifdef __AVR32_ABI_COMPILER__


typedef struct avr32_usb_udcon_t {
    unsigned int                 :13;
    unsigned int frzclk          : 1;
    unsigned int usbe            : 1;
    unsigned int opmode2         : 1;
    unsigned int tstpckt         : 1;
    unsigned int tstk            : 1;
    unsigned int tstj            : 1;
    unsigned int ls              : 1;
    unsigned int spdconf         : 2;
    unsigned int rmwkup          : 1;
    unsigned int detach          : 1;
    unsigned int adden           : 1;
    unsigned int uadd            : 7;
} avr32_usb_udcon_t;



typedef struct avr32_usb_udint_t {
    unsigned int dma7int         : 1;
    unsigned int dma6int         : 1;
    unsigned int dma5int         : 1;
    unsigned int dma4int         : 1;
    unsigned int dma3int         : 1;
    unsigned int dma2int         : 1;
    unsigned int dma1int         : 1;
    unsigned int                 : 5;
    unsigned int ep7int          : 1;
    unsigned int ep6int          : 1;
    unsigned int ep5int          : 1;
    unsigned int ep4int          : 1;
    unsigned int ep3int          : 1;
    unsigned int ep2int          : 1;
    unsigned int ep1int          : 1;
    unsigned int ep0int          : 1;
    unsigned int                 : 1;
    unsigned int clkusable       : 1;
    unsigned int speed           : 1;
    unsigned int vbus            : 1;
    unsigned int vbusti          : 1;
    unsigned int uprsm           : 1;
    unsigned int eorsm           : 1;
    unsigned int wakeup          : 1;
    unsigned int eorst           : 1;
    unsigned int sof             : 1;
    unsigned int msof            : 1;
    unsigned int susp            : 1;
} avr32_usb_udint_t;



typedef struct avr32_usb_udintclr_t {
    unsigned int                 :24;
    unsigned int vbustic         : 1;
    unsigned int uprsmc          : 1;
    unsigned int eorsmc          : 1;
    unsigned int wakeupc         : 1;
    unsigned int eorstc          : 1;
    unsigned int sofc            : 1;
    unsigned int msofc           : 1;
    unsigned int suspc           : 1;
} avr32_usb_udintclr_t;



typedef struct avr32_usb_udintset_t {
    unsigned int dma7ints        : 1;
    unsigned int dma6ints        : 1;
    unsigned int dma5ints        : 1;
    unsigned int dma4ints        : 1;
    unsigned int dma3ints        : 1;
    unsigned int dma2ints        : 1;
    unsigned int dma1ints        : 1;
    unsigned int                 :17;
    unsigned int vbustis         : 1;
    unsigned int uprsms          : 1;
    unsigned int eorsms          : 1;
    unsigned int wakeups         : 1;
    unsigned int eorsts          : 1;
    unsigned int sofs            : 1;
    unsigned int msofs           : 1;
    unsigned int susps           : 1;
} avr32_usb_udintset_t;



typedef struct avr32_usb_udinte_t {
    unsigned int dma7inte        : 1;
    unsigned int dma6inte        : 1;
    unsigned int dma5inte        : 1;
    unsigned int dma4inte        : 1;
    unsigned int dma3inte        : 1;
    unsigned int dma2inte        : 1;
    unsigned int dma1inte        : 1;
    unsigned int                 : 5;
    unsigned int ep7inte         : 1;
    unsigned int ep6inte         : 1;
    unsigned int ep5inte         : 1;
    unsigned int ep4inte         : 1;
    unsigned int ep3inte         : 1;
    unsigned int ep2inte         : 1;
    unsigned int ep1inte         : 1;
    unsigned int ep0inte         : 1;
    unsigned int                 : 4;
    unsigned int vbuse           : 1;
    unsigned int uprsme          : 1;
    unsigned int eorsme          : 1;
    unsigned int wakeupe         : 1;
    unsigned int eorste          : 1;
    unsigned int sofe            : 1;
    unsigned int msofe           : 1;
    unsigned int suspe           : 1;
} avr32_usb_udinte_t;



typedef struct avr32_usb_udinteclr_t {
    unsigned int dam7intec       : 1;
    unsigned int dam6intec       : 1;
    unsigned int dma5intec       : 1;
    unsigned int dma4intec       : 1;
    unsigned int dma3intec       : 1;
    unsigned int dma2intec       : 1;
    unsigned int dma1intec       : 1;
    unsigned int                 : 5;
    unsigned int ep7intec        : 1;
    unsigned int ep6intec        : 1;
    unsigned int ep5intec        : 1;
    unsigned int ep4intec        : 1;
    unsigned int ep3intec        : 1;
    unsigned int ep2intec        : 1;
    unsigned int ep1intec        : 1;
    unsigned int ep0intec        : 1;
    unsigned int                 : 4;
    unsigned int vbusec          : 1;
    unsigned int uprsmec         : 1;
    unsigned int eorsmec         : 1;
    unsigned int wakeupec        : 1;
    unsigned int eorstec         : 1;
    unsigned int sofec           : 1;
    unsigned int msofec          : 1;
    unsigned int suspec          : 1;
} avr32_usb_udinteclr_t;



typedef struct avr32_usb_udinteset_t {
    unsigned int dma7intes       : 1;
    unsigned int dma6intes       : 1;
    unsigned int dma5intes       : 1;
    unsigned int dma4intes       : 1;
    unsigned int dma3intes       : 1;
    unsigned int dma2intes       : 1;
    unsigned int dma1intes       : 1;
    unsigned int                 : 5;
    unsigned int ep7intes        : 1;
    unsigned int ep6intes        : 1;
    unsigned int ep5intes        : 1;
    unsigned int ep4intes        : 1;
    unsigned int ep3intes        : 1;
    unsigned int ep2intes        : 1;
    unsigned int ep1intes        : 1;
    unsigned int ep0intes        : 1;
    unsigned int                 : 4;
    unsigned int vbuses          : 1;
    unsigned int uprsmes         : 1;
    unsigned int eorsmes         : 1;
    unsigned int wakeupes        : 1;
    unsigned int eorstes         : 1;
    unsigned int sofes           : 1;
    unsigned int msofes          : 1;
    unsigned int suspes          : 1;
} avr32_usb_udinteset_t;



typedef struct avr32_usb_uerst_t {
    unsigned int                 : 8;
    unsigned int eprst7          : 1;
    unsigned int eprst6          : 1;
    unsigned int eprst5          : 1;
    unsigned int eprst4          : 1;
    unsigned int eprst3          : 1;
    unsigned int eprst2          : 1;
    unsigned int eprst1          : 1;
    unsigned int eprst0          : 1;
    unsigned int                 : 8;
    unsigned int epen7           : 1;
    unsigned int epen6           : 1;
    unsigned int epen5           : 1;
    unsigned int epen4           : 1;
    unsigned int epen3           : 1;
    unsigned int epen2           : 1;
    unsigned int epen1           : 1;
    unsigned int epen0           : 1;
} avr32_usb_uerst_t;



typedef struct avr32_usb_udfnum_t {
    unsigned int                 :16;
    unsigned int fncerr          : 1;
    unsigned int                 : 1;
    unsigned int fnum            :11;
    unsigned int mfnum           : 3;
} avr32_usb_udfnum_t;



typedef struct avr32_usb_udtst1_t {
    unsigned int loadsofcnt      : 1;
    unsigned int sofcntmax       : 7;
    unsigned int loadcntb        : 1;
    unsigned int                 : 1;
    unsigned int counterb        : 6;
    unsigned int loadcnta        : 1;
    unsigned int countera        :15;
} avr32_usb_udtst1_t;



typedef struct avr32_usb_udtst2_t {
    unsigned int                 :25;
    unsigned int nothostdisconnect : 1;
    unsigned int bypassdpll      : 1;
    unsigned int forcesuspendmto1 : 1;
    unsigned int disbalegatedclock : 1;
    unsigned int loopbackmode    : 1;
    unsigned int hsserialmode    : 1;
    unsigned int fulldetachen    : 1;
} avr32_usb_udtst2_t;



typedef struct avr32_usb_udfeatures_t {
    unsigned int en_high_bd_iso_ept_15 : 1;
    unsigned int en_high_bd_iso_ept_14 : 1;
    unsigned int en_high_bd_iso_ept_13 : 1;
    unsigned int en_high_bd_iso_ept_12 : 1;
    unsigned int en_high_bd_iso_ept_11 : 1;
    unsigned int en_high_bd_iso_ept_10 : 1;
    unsigned int en_high_bd_iso_ept_9 : 1;
    unsigned int en_high_bd_iso_ept_8 : 1;
    unsigned int en_high_bd_iso_ept_7 : 1;
    unsigned int en_high_bd_iso_ept_6 : 1;
    unsigned int en_high_bd_iso_ept_5 : 1;
    unsigned int en_high_bd_iso_ept_4 : 1;
    unsigned int en_high_bd_iso_ept_3 : 1;
    unsigned int en_high_bd_iso_ept_2 : 1;
    unsigned int en_high_bd_iso_ept_1 : 1;
    unsigned int data_bus_8_16   : 1;
    unsigned int byte_write_dpram : 1;
    unsigned int fifo_max_size   : 3;
    unsigned int dma_fifo_word_depth : 4;
    unsigned int dma_buffer_size : 1;
    unsigned int dma_channel_nbr : 3;
    unsigned int ept_nbr_max     : 4;
} avr32_usb_udfeatures_t;



typedef struct avr32_usb_uecfg0_t {
    unsigned int datasizerdwr    : 2;
    unsigned int                 :15;
    unsigned int nbtrans         : 2;
    unsigned int eptype          : 2;
    unsigned int                 : 1;
    unsigned int autosw          : 1;
    unsigned int epdir           : 1;
    unsigned int                 : 1;
    unsigned int epsize          : 3;
    unsigned int epbk            : 2;
    unsigned int alloc           : 1;
    unsigned int                 : 1;
} avr32_usb_uecfg0_t;



typedef struct avr32_usb_uecfg1_t {
    unsigned int datasizerdwr    : 2;
    unsigned int                 :15;
    unsigned int nbtrans         : 2;
    unsigned int eptype          : 2;
    unsigned int                 : 1;
    unsigned int autosw          : 1;
    unsigned int epdir           : 1;
    unsigned int                 : 1;
    unsigned int epsize          : 3;
    unsigned int epbk            : 2;
    unsigned int alloc           : 1;
    unsigned int                 : 1;
} avr32_usb_uecfg1_t;



typedef struct avr32_usb_uecfg2_t {
    unsigned int datasizerdwr    : 2;
    unsigned int                 :15;
    unsigned int nbtrans         : 2;
    unsigned int eptype          : 2;
    unsigned int                 : 1;
    unsigned int autosw          : 1;
    unsigned int epdir           : 1;
    unsigned int                 : 1;
    unsigned int epsize          : 3;
    unsigned int epbk            : 2;
    unsigned int alloc           : 1;
    unsigned int                 : 1;
} avr32_usb_uecfg2_t;



typedef struct avr32_usb_uecfg3_t {
    unsigned int datasizerdwr    : 2;
    unsigned int                 :15;
    unsigned int nbtrans         : 2;
    unsigned int eptype          : 2;
    unsigned int                 : 1;
    unsigned int autosw          : 1;
    unsigned int epdir           : 1;
    unsigned int                 : 1;
    unsigned int epsize          : 3;
    unsigned int epbk            : 2;
    unsigned int alloc           : 1;
    unsigned int                 : 1;
} avr32_usb_uecfg3_t;



typedef struct avr32_usb_uecfg4_t {
    unsigned int datasizerdwr    : 2;
    unsigned int                 :15;
    unsigned int nbtrans         : 2;
    unsigned int eptype          : 2;
    unsigned int                 : 1;
    unsigned int autosw          : 1;
    unsigned int epdir           : 1;
    unsigned int                 : 1;
    unsigned int epsize          : 3;
    unsigned int epbk            : 2;
    unsigned int alloc           : 1;
    unsigned int                 : 1;
} avr32_usb_uecfg4_t;



typedef struct avr32_usb_uecfg5_t {
    unsigned int datasizerdwr    : 2;
    unsigned int                 :15;
    unsigned int nbtrans         : 2;
    unsigned int eptype          : 2;
    unsigned int                 : 1;
    unsigned int autosw          : 1;
    unsigned int epdir           : 1;
    unsigned int                 : 1;
    unsigned int epsize          : 3;
    unsigned int epbk            : 2;
    unsigned int alloc           : 1;
    unsigned int                 : 1;
} avr32_usb_uecfg5_t;



typedef struct avr32_usb_uecfg6_t {
    unsigned int datasizerdwr    : 2;
    unsigned int                 :15;
    unsigned int nbtrans         : 2;
    unsigned int eptype          : 2;
    unsigned int                 : 1;
    unsigned int autosw          : 1;
    unsigned int epdir           : 1;
    unsigned int                 : 1;
    unsigned int epsize          : 3;
    unsigned int epbk            : 2;
    unsigned int alloc           : 1;
    unsigned int                 : 1;
} avr32_usb_uecfg6_t;



typedef struct avr32_usb_uecfg7_t {
    unsigned int datasizerdwr    : 2;
    unsigned int                 :15;
    unsigned int nbtrans         : 2;
    unsigned int eptype          : 2;
    unsigned int                 : 1;
    unsigned int autosw          : 1;
    unsigned int epdir           : 1;
    unsigned int                 : 1;
    unsigned int epsize          : 3;
    unsigned int epbk            : 2;
    unsigned int alloc           : 1;
    unsigned int                 : 1;
} avr32_usb_uecfg7_t;



typedef struct avr32_usb_uesta0_t {
    unsigned int                 : 1;
    unsigned int byct            :11;
    unsigned int                 : 1;
    unsigned int cfgok           : 1;
    unsigned int ctrldir         : 1;
    unsigned int rwall           : 1;
    unsigned int currbk          : 2;
    unsigned int nbusybk         : 2;
    unsigned int                 : 1;
    unsigned int errortrans      : 1;
    unsigned int dtseq           : 2;
    unsigned int shortpacket     : 1;
    unsigned int stalledi        : 1;
    unsigned int overfi          : 1;
    unsigned int nakini          : 1;
    unsigned int nakouti         : 1;
    unsigned int rxstpi          : 1;
    unsigned int rxouti          : 1;
    unsigned int txini           : 1;
} avr32_usb_uesta0_t;



typedef struct avr32_usb_uesta1_t {
    unsigned int                 : 1;
    unsigned int byct            :11;
    unsigned int                 : 1;
    unsigned int cfgok           : 1;
    unsigned int ctrldir         : 1;
    unsigned int rwall           : 1;
    unsigned int currbk          : 2;
    unsigned int nbusybk         : 2;
    unsigned int                 : 1;
    unsigned int errortrans      : 1;
    unsigned int dtseq           : 2;
    unsigned int shortpacket     : 1;
    unsigned int stalledi        : 1;
    unsigned int overfi          : 1;
    unsigned int nakini          : 1;
    unsigned int nakouti         : 1;
    unsigned int rxstpi          : 1;
    unsigned int rxouti          : 1;
    unsigned int txini           : 1;
} avr32_usb_uesta1_t;



typedef struct avr32_usb_uesta2_t {
    unsigned int                 : 1;
    unsigned int byct            :11;
    unsigned int                 : 1;
    unsigned int cfgok           : 1;
    unsigned int ctrldir         : 1;
    unsigned int rwall           : 1;
    unsigned int currbk          : 2;
    unsigned int nbusybk         : 2;
    unsigned int                 : 1;
    unsigned int errortrans      : 1;
    unsigned int dtseq           : 2;
    unsigned int shortpacket     : 1;
    unsigned int stalledi        : 1;
    unsigned int overfi          : 1;
    unsigned int nakini          : 1;
    unsigned int nakouti         : 1;
    unsigned int rxstpi          : 1;
    unsigned int rxouti          : 1;
    unsigned int txini           : 1;
} avr32_usb_uesta2_t;



typedef struct avr32_usb_uesta3_t {
    unsigned int                 : 1;
    unsigned int byct            :11;
    unsigned int                 : 1;
    unsigned int cfgok           : 1;
    unsigned int ctrldir         : 1;
    unsigned int rwall           : 1;
    unsigned int currbk          : 2;
    unsigned int nbusybk         : 2;
    unsigned int                 : 1;
    unsigned int errortrans      : 1;
    unsigned int dtseq           : 2;
    unsigned int shortpacket     : 1;
    unsigned int stalledi        : 1;
    unsigned int overfi          : 1;
    unsigned int nakini          : 1;
    unsigned int nakouti         : 1;
    unsigned int rxstpi          : 1;
    unsigned int rxouti          : 1;
    unsigned int txini           : 1;
} avr32_usb_uesta3_t;



typedef struct avr32_usb_uesta4_t {
    unsigned int                 : 1;
    unsigned int byct            :11;
    unsigned int                 : 1;
    unsigned int cfgok           : 1;
    unsigned int ctrldir         : 1;
    unsigned int rwall           : 1;
    unsigned int currbk          : 2;
    unsigned int nbusybk         : 2;
    unsigned int                 : 1;
    unsigned int errortrans      : 1;
    unsigned int dtseq           : 2;
    unsigned int shortpacket     : 1;
    unsigned int stalledi        : 1;
    unsigned int overfi          : 1;
    unsigned int nakini          : 1;
    unsigned int nakouti         : 1;
    unsigned int rxstpi          : 1;
    unsigned int rxouti          : 1;
    unsigned int txini           : 1;
} avr32_usb_uesta4_t;



typedef struct avr32_usb_uesta5_t {
    unsigned int                 : 1;
    unsigned int byct            :11;
    unsigned int                 : 1;
    unsigned int cfgok           : 1;
    unsigned int ctrldir         : 1;
    unsigned int rwall           : 1;
    unsigned int currbk          : 2;
    unsigned int nbusybk         : 2;
    unsigned int                 : 1;
    unsigned int errortrans      : 1;
    unsigned int dtseq           : 2;
    unsigned int shortpacket     : 1;
    unsigned int stalledi        : 1;
    unsigned int overfi          : 1;
    unsigned int nakini          : 1;
    unsigned int nakouti         : 1;
    unsigned int rxstpi          : 1;
    unsigned int rxouti          : 1;
    unsigned int txini           : 1;
} avr32_usb_uesta5_t;



typedef struct avr32_usb_uesta6_t {
    unsigned int                 : 1;
    unsigned int byct            :11;
    unsigned int                 : 1;
    unsigned int cfgok           : 1;
    unsigned int ctrldir         : 1;
    unsigned int rwall           : 1;
    unsigned int currbk          : 2;
    unsigned int nbusybk         : 2;
    unsigned int                 : 1;
    unsigned int errortrans      : 1;
    unsigned int dtseq           : 2;
    unsigned int shortpacket     : 1;
    unsigned int stalledi        : 1;
    unsigned int overfi          : 1;
    unsigned int nakini          : 1;
    unsigned int nakouti         : 1;
    unsigned int rxstpi          : 1;
    unsigned int rxouti          : 1;
    unsigned int txini           : 1;
} avr32_usb_uesta6_t;



typedef struct avr32_usb_uesta7_t {
    unsigned int                 : 1;
    unsigned int byct            :11;
    unsigned int                 : 1;
    unsigned int cfgok           : 1;
    unsigned int ctrldir         : 1;
    unsigned int rwall           : 1;
    unsigned int currbk          : 2;
    unsigned int nbusybk         : 2;
    unsigned int                 : 1;
    unsigned int errortrans      : 1;
    unsigned int dtseq           : 2;
    unsigned int shortpacket     : 1;
    unsigned int stalledi        : 1;
    unsigned int overfi          : 1;
    unsigned int nakini          : 1;
    unsigned int nakouti         : 1;
    unsigned int rxstpi          : 1;
    unsigned int rxouti          : 1;
    unsigned int txini           : 1;
} avr32_usb_uesta7_t;



typedef struct avr32_usb_uesta0clr_t {
    unsigned int                 :24;
    unsigned int shortpacketc    : 1;
    unsigned int stalledic       : 1;
    unsigned int overfic         : 1;
    unsigned int nakinic         : 1;
    unsigned int nakoutic        : 1;
    unsigned int rxstpic         : 1;
    unsigned int rxoutic         : 1;
    unsigned int txinic          : 1;
} avr32_usb_uesta0clr_t;



typedef struct avr32_usb_uesta1clr_t {
    unsigned int                 :24;
    unsigned int shortpacketc    : 1;
    unsigned int stalledic       : 1;
    unsigned int overfic         : 1;
    unsigned int nakinic         : 1;
    unsigned int nakoutic        : 1;
    unsigned int rxstpic         : 1;
    unsigned int rxoutic         : 1;
    unsigned int txinic          : 1;
} avr32_usb_uesta1clr_t;



typedef struct avr32_usb_uesta2clr_t {
    unsigned int                 :24;
    unsigned int shortpacketc    : 1;
    unsigned int stalledic       : 1;
    unsigned int overfic         : 1;
    unsigned int nakinic         : 1;
    unsigned int nakoutic        : 1;
    unsigned int rxstpic         : 1;
    unsigned int rxoutic         : 1;
    unsigned int txinic          : 1;
} avr32_usb_uesta2clr_t;



typedef struct avr32_usb_uesta3clr_t {
    unsigned int                 :24;
    unsigned int shortpacketc    : 1;
    unsigned int stalledic       : 1;
    unsigned int overfic         : 1;
    unsigned int nakinic         : 1;
    unsigned int nakoutic        : 1;
    unsigned int rxstpic         : 1;
    unsigned int rxoutic         : 1;
    unsigned int txinic          : 1;
} avr32_usb_uesta3clr_t;



typedef struct avr32_usb_uesta4clr_t {
    unsigned int                 :24;
    unsigned int shortpacketc    : 1;
    unsigned int stalledic       : 1;
    unsigned int overfic         : 1;
    unsigned int nakinic         : 1;
    unsigned int nakoutic        : 1;
    unsigned int rxstpic         : 1;
    unsigned int rxoutic         : 1;
    unsigned int txinic          : 1;
} avr32_usb_uesta4clr_t;



typedef struct avr32_usb_uesta5clr_t {
    unsigned int                 :24;
    unsigned int shortpacketc    : 1;
    unsigned int stalledic       : 1;
    unsigned int overfic         : 1;
    unsigned int nakinic         : 1;
    unsigned int nakoutic        : 1;
    unsigned int rxstpic         : 1;
    unsigned int rxoutic         : 1;
    unsigned int txinic          : 1;
} avr32_usb_uesta5clr_t;



typedef struct avr32_usb_uesta6clr_t {
    unsigned int                 :24;
    unsigned int shortpacketc    : 1;
    unsigned int stalledic       : 1;
    unsigned int overfic         : 1;
    unsigned int nakinic         : 1;
    unsigned int nakoutic        : 1;
    unsigned int rxstpic         : 1;
    unsigned int rxoutic         : 1;
    unsigned int txinic          : 1;
} avr32_usb_uesta6clr_t;



typedef struct avr32_usb_uesta7clr_t {
    unsigned int                 :24;
    unsigned int shortpacketc    : 1;
    unsigned int stalledic       : 1;
    unsigned int overfic         : 1;
    unsigned int nakinic         : 1;
    unsigned int nakoutic        : 1;
    unsigned int rxstpic         : 1;
    unsigned int rxoutic         : 1;
    unsigned int txinic          : 1;
} avr32_usb_uesta7clr_t;



typedef struct avr32_usb_uesta0set_t {
    unsigned int                 :19;
    unsigned int nbusybks        : 1;
    unsigned int                 : 1;
    unsigned int errortranss     : 1;
    unsigned int                 : 1;
    unsigned int setmdata        : 1;
    unsigned int shortpackets    : 1;
    unsigned int stalledis       : 1;
    unsigned int overfis         : 1;
    unsigned int nakinis         : 1;
    unsigned int nakoutis        : 1;
    unsigned int rxstpis         : 1;
    unsigned int rxoutis         : 1;
    unsigned int txinis          : 1;
} avr32_usb_uesta0set_t;



typedef struct avr32_usb_uesta1set_t {
    unsigned int                 :19;
    unsigned int nbusybks        : 1;
    unsigned int                 : 1;
    unsigned int errortranss     : 1;
    unsigned int                 : 1;
    unsigned int setmdata        : 1;
    unsigned int shortpackets    : 1;
    unsigned int stalledis       : 1;
    unsigned int overfis         : 1;
    unsigned int nakinis         : 1;
    unsigned int nakoutis        : 1;
    unsigned int rxstpis         : 1;
    unsigned int rxoutis         : 1;
    unsigned int txinis          : 1;
} avr32_usb_uesta1set_t;



typedef struct avr32_usb_uesta2set_t {
    unsigned int                 :19;
    unsigned int nbusybks        : 1;
    unsigned int                 : 1;
    unsigned int errortranss     : 1;
    unsigned int                 : 1;
    unsigned int setmdata        : 1;
    unsigned int shortpackets    : 1;
    unsigned int stalledis       : 1;
    unsigned int overfis         : 1;
    unsigned int nakinis         : 1;
    unsigned int nakoutis        : 1;
    unsigned int rxstpis         : 1;
    unsigned int rxoutis         : 1;
    unsigned int txinis          : 1;
} avr32_usb_uesta2set_t;



typedef struct avr32_usb_uesta3set_t {
    unsigned int                 :19;
    unsigned int nbusybks        : 1;
    unsigned int                 : 1;
    unsigned int errortranss     : 1;
    unsigned int                 : 1;
    unsigned int setmdata        : 1;
    unsigned int shortpackets    : 1;
    unsigned int stalledis       : 1;
    unsigned int overfis         : 1;
    unsigned int nakinis         : 1;
    unsigned int nakoutis        : 1;
    unsigned int rxstpis         : 1;
    unsigned int rxoutis         : 1;
    unsigned int txinis          : 1;
} avr32_usb_uesta3set_t;



typedef struct avr32_usb_uesta4set_t {
    unsigned int                 :19;
    unsigned int nbusybks        : 1;
    unsigned int                 : 1;
    unsigned int errortranss     : 1;
    unsigned int                 : 1;
    unsigned int setmdata        : 1;
    unsigned int shortpackets    : 1;
    unsigned int stalledis       : 1;
    unsigned int overfis         : 1;
    unsigned int nakinis         : 1;
    unsigned int nakoutis        : 1;
    unsigned int rxstpis         : 1;
    unsigned int rxoutis         : 1;
    unsigned int txinis          : 1;
} avr32_usb_uesta4set_t;



typedef struct avr32_usb_uesta5set_t {
    unsigned int                 :19;
    unsigned int nbusybks        : 1;
    unsigned int                 : 1;
    unsigned int errortranss     : 1;
    unsigned int                 : 1;
    unsigned int setmdata        : 1;
    unsigned int shortpackets    : 1;
    unsigned int stalledis       : 1;
    unsigned int overfis         : 1;
    unsigned int nakinis         : 1;
    unsigned int nakoutis        : 1;
    unsigned int rxstpis         : 1;
    unsigned int rxoutis         : 1;
    unsigned int txinis          : 1;
} avr32_usb_uesta5set_t;



typedef struct avr32_usb_uesta6set_t {
    unsigned int                 :19;
    unsigned int nbusybks        : 1;
    unsigned int                 : 1;
    unsigned int errortranss     : 1;
    unsigned int                 : 1;
    unsigned int setmdata        : 1;
    unsigned int shortpackets    : 1;
    unsigned int stalledis       : 1;
    unsigned int overfis         : 1;
    unsigned int nakinis         : 1;
    unsigned int nakoutis        : 1;
    unsigned int rxstpis         : 1;
    unsigned int rxoutis         : 1;
    unsigned int txinis          : 1;
} avr32_usb_uesta6set_t;



typedef struct avr32_usb_uesta7set_t {
    unsigned int                 :19;
    unsigned int nbusybks        : 1;
    unsigned int                 : 1;
    unsigned int errortranss     : 1;
    unsigned int                 : 1;
    unsigned int setmdata        : 1;
    unsigned int shortpackets    : 1;
    unsigned int stalledis       : 1;
    unsigned int overfis         : 1;
    unsigned int nakinis         : 1;
    unsigned int nakoutis        : 1;
    unsigned int rxstpis         : 1;
    unsigned int rxoutis         : 1;
    unsigned int txinis          : 1;
} avr32_usb_uesta7set_t;



typedef struct avr32_usb_uecon0_t {
    unsigned int                 :12;
    unsigned int stallrq         : 1;
    unsigned int rstdt           : 1;
    unsigned int nyetdis         : 1;
    unsigned int epdishdma       : 1;
    unsigned int                 : 1;
    unsigned int fifocon         : 1;
    unsigned int killbk          : 1;
    unsigned int nbusybke        : 1;
    unsigned int                 : 1;
    unsigned int errortranse     : 1;
    unsigned int dataxe          : 1;
    unsigned int mdatae          : 1;
    unsigned int shortpackete    : 1;
    unsigned int stallede        : 1;
    unsigned int overfe          : 1;
    unsigned int nakine          : 1;
    unsigned int nakoute         : 1;
    unsigned int rxstpe          : 1;
    unsigned int rxoute          : 1;
    unsigned int txine           : 1;
} avr32_usb_uecon0_t;



typedef struct avr32_usb_uecon1_t {
    unsigned int                 :12;
    unsigned int stallrq         : 1;
    unsigned int rstdt           : 1;
    unsigned int nyetdis         : 1;
    unsigned int epdishdma       : 1;
    unsigned int                 : 1;
    unsigned int fifocon         : 1;
    unsigned int killbk          : 1;
    unsigned int nbusybke        : 1;
    unsigned int                 : 1;
    unsigned int errortranse     : 1;
    unsigned int dataxe          : 1;
    unsigned int mdatae          : 1;
    unsigned int shortpackete    : 1;
    unsigned int stallede        : 1;
    unsigned int overfe          : 1;
    unsigned int nakine          : 1;
    unsigned int nakoute         : 1;
    unsigned int rxstpe          : 1;
    unsigned int rxoute          : 1;
    unsigned int txine           : 1;
} avr32_usb_uecon1_t;



typedef struct avr32_usb_uecon2_t {
    unsigned int                 :12;
    unsigned int stallrq         : 1;
    unsigned int rstdt           : 1;
    unsigned int nyetdis         : 1;
    unsigned int epdishdma       : 1;
    unsigned int                 : 1;
    unsigned int fifocon         : 1;
    unsigned int killbk          : 1;
    unsigned int nbusybke        : 1;
    unsigned int                 : 1;
    unsigned int errortranse     : 1;
    unsigned int dataxe          : 1;
    unsigned int mdatae          : 1;
    unsigned int shortpackete    : 1;
    unsigned int stallede        : 1;
    unsigned int overfe          : 1;
    unsigned int nakine          : 1;
    unsigned int nakoute         : 1;
    unsigned int rxstpe          : 1;
    unsigned int rxoute          : 1;
    unsigned int txine           : 1;
} avr32_usb_uecon2_t;



typedef struct avr32_usb_uecon3_t {
    unsigned int                 :12;
    unsigned int stallrq         : 1;
    unsigned int rstdt           : 1;
    unsigned int nyetdis         : 1;
    unsigned int epdishdma       : 1;
    unsigned int                 : 1;
    unsigned int fifocon         : 1;
    unsigned int killbk          : 1;
    unsigned int nbusybke        : 1;
    unsigned int                 : 1;
    unsigned int errortranse     : 1;
    unsigned int dataxe          : 1;
    unsigned int mdatae          : 1;
    unsigned int shortpackete    : 1;
    unsigned int stallede        : 1;
    unsigned int overfe          : 1;
    unsigned int nakine          : 1;
    unsigned int nakoute         : 1;
    unsigned int rxstpe          : 1;
    unsigned int rxoute          : 1;
    unsigned int txine           : 1;
} avr32_usb_uecon3_t;



typedef struct avr32_usb_uecon4_t {
    unsigned int                 :12;
    unsigned int stallrq         : 1;
    unsigned int rstdt           : 1;
    unsigned int nyetdis         : 1;
    unsigned int epdishdma       : 1;
    unsigned int                 : 1;
    unsigned int fifocon         : 1;
    unsigned int killbk          : 1;
    unsigned int nbusybke        : 1;
    unsigned int                 : 1;
    unsigned int errortranse     : 1;
    unsigned int dataxe          : 1;
    unsigned int mdatae          : 1;
    unsigned int shortpackete    : 1;
    unsigned int stallede        : 1;
    unsigned int overfe          : 1;
    unsigned int nakine          : 1;
    unsigned int nakoute         : 1;
    unsigned int rxstpe          : 1;
    unsigned int rxoute          : 1;
    unsigned int txine           : 1;
} avr32_usb_uecon4_t;



typedef struct avr32_usb_uecon5_t {
    unsigned int                 :12;
    unsigned int stallrq         : 1;
    unsigned int rstdt           : 1;
    unsigned int nyetdis         : 1;
    unsigned int epdishdma       : 1;
    unsigned int                 : 1;
    unsigned int fifocon         : 1;
    unsigned int killbk          : 1;
    unsigned int nbusybke        : 1;
    unsigned int                 : 1;
    unsigned int errortranse     : 1;
    unsigned int dataxe          : 1;
    unsigned int mdatae          : 1;
    unsigned int shortpackete    : 1;
    unsigned int stallede        : 1;
    unsigned int overfe          : 1;
    unsigned int nakine          : 1;
    unsigned int nakoute         : 1;
    unsigned int rxstpe          : 1;
    unsigned int rxoute          : 1;
    unsigned int txine           : 1;
} avr32_usb_uecon5_t;



typedef struct avr32_usb_uecon6_t {
    unsigned int                 :12;
    unsigned int stallrq         : 1;
    unsigned int rstdt           : 1;
    unsigned int nyetdis         : 1;
    unsigned int epdishdma       : 1;
    unsigned int                 : 1;
    unsigned int fifocon         : 1;
    unsigned int killbk          : 1;
    unsigned int nbusybke        : 1;
    unsigned int                 : 1;
    unsigned int errortranse     : 1;
    unsigned int dataxe          : 1;
    unsigned int mdatae          : 1;
    unsigned int shortpackete    : 1;
    unsigned int stallede        : 1;
    unsigned int overfe          : 1;
    unsigned int nakine          : 1;
    unsigned int nakoute         : 1;
    unsigned int rxstpe          : 1;
    unsigned int rxoute          : 1;
    unsigned int txine           : 1;
} avr32_usb_uecon6_t;



typedef struct avr32_usb_uecon7_t {
    unsigned int                 :12;
    unsigned int stallrq         : 1;
    unsigned int rstdt           : 1;
    unsigned int nyetdis         : 1;
    unsigned int epdishdma       : 1;
    unsigned int                 : 1;
    unsigned int fifocon         : 1;
    unsigned int killbk          : 1;
    unsigned int nbusybke        : 1;
    unsigned int                 : 1;
    unsigned int errortranse     : 1;
    unsigned int dataxe          : 1;
    unsigned int mdatae          : 1;
    unsigned int shortpackete    : 1;
    unsigned int stallede        : 1;
    unsigned int overfe          : 1;
    unsigned int nakine          : 1;
    unsigned int nakoute         : 1;
    unsigned int rxstpe          : 1;
    unsigned int rxoute          : 1;
    unsigned int txine           : 1;
} avr32_usb_uecon7_t;



typedef struct avr32_usb_uecon0set_t {
    unsigned int                 :12;
    unsigned int stallrqs        : 1;
    unsigned int rstdts          : 1;
    unsigned int nyetdiss        : 1;
    unsigned int epdishdmas      : 1;
    unsigned int                 : 2;
    unsigned int killbks         : 1;
    unsigned int nbusybkes       : 1;
    unsigned int                 : 1;
    unsigned int errortranses    : 1;
    unsigned int dataxes         : 1;
    unsigned int mdataes         : 1;
    unsigned int shortpacketes   : 1;
    unsigned int stalledes       : 1;
    unsigned int overfes         : 1;
    unsigned int nakines         : 1;
    unsigned int nakoutes        : 1;
    unsigned int rxstpes         : 1;
    unsigned int rxoutes         : 1;
    unsigned int txines          : 1;
} avr32_usb_uecon0set_t;



typedef struct avr32_usb_uecon1set_t {
    unsigned int                 :12;
    unsigned int stallrqs        : 1;
    unsigned int rstdts          : 1;
    unsigned int nyetdiss        : 1;
    unsigned int epdishdmas      : 1;
    unsigned int                 : 2;
    unsigned int killbks         : 1;
    unsigned int nbusybkes       : 1;
    unsigned int                 : 1;
    unsigned int errortranses    : 1;
    unsigned int dataxes         : 1;
    unsigned int mdataes         : 1;
    unsigned int shortpacketes   : 1;
    unsigned int stalledes       : 1;
    unsigned int overfes         : 1;
    unsigned int nakines         : 1;
    unsigned int nakoutes        : 1;
    unsigned int rxstpes         : 1;
    unsigned int rxoutes         : 1;
    unsigned int txines          : 1;
} avr32_usb_uecon1set_t;



typedef struct avr32_usb_uecon2set_t {
    unsigned int                 :12;
    unsigned int stallrqs        : 1;
    unsigned int rstdts          : 1;
    unsigned int nyetdiss        : 1;
    unsigned int epdishdmas      : 1;
    unsigned int                 : 2;
    unsigned int killbks         : 1;
    unsigned int nbusybkes       : 1;
    unsigned int                 : 1;
    unsigned int errortranses    : 1;
    unsigned int dataxes         : 1;
    unsigned int mdataes         : 1;
    unsigned int shortpacketes   : 1;
    unsigned int stalledes       : 1;
    unsigned int overfes         : 1;
    unsigned int nakines         : 1;
    unsigned int nakoutes        : 1;
    unsigned int rxstpes         : 1;
    unsigned int rxoutes         : 1;
    unsigned int txines          : 1;
} avr32_usb_uecon2set_t;



typedef struct avr32_usb_uecon3set_t {
    unsigned int                 :12;
    unsigned int stallrqs        : 1;
    unsigned int rstdts          : 1;
    unsigned int nyetdiss        : 1;
    unsigned int epdishdmas      : 1;
    unsigned int                 : 2;
    unsigned int killbks         : 1;
    unsigned int nbusybkes       : 1;
    unsigned int                 : 1;
    unsigned int errortranses    : 1;
    unsigned int dataxes         : 1;
    unsigned int mdataes         : 1;
    unsigned int shortpacketes   : 1;
    unsigned int stalledes       : 1;
    unsigned int overfes         : 1;
    unsigned int nakines         : 1;
    unsigned int nakoutes        : 1;
    unsigned int rxstpes         : 1;
    unsigned int rxoutes         : 1;
    unsigned int txines          : 1;
} avr32_usb_uecon3set_t;



typedef struct avr32_usb_uecon4set_t {
    unsigned int                 :12;
    unsigned int stallrqs        : 1;
    unsigned int rstdts          : 1;
    unsigned int nyetdiss        : 1;
    unsigned int epdishdmas      : 1;
    unsigned int                 : 2;
    unsigned int killbks         : 1;
    unsigned int nbusybkes       : 1;
    unsigned int                 : 1;
    unsigned int errortranses    : 1;
    unsigned int dataxes         : 1;
    unsigned int mdataes         : 1;
    unsigned int shortpacketes   : 1;
    unsigned int stalledes       : 1;
    unsigned int overfes         : 1;
    unsigned int nakines         : 1;
    unsigned int nakoutes        : 1;
    unsigned int rxstpes         : 1;
    unsigned int rxoutes         : 1;
    unsigned int txines          : 1;
} avr32_usb_uecon4set_t;



typedef struct avr32_usb_uecon5set_t {
    unsigned int                 :12;
    unsigned int stallrqs        : 1;
    unsigned int rstdts          : 1;
    unsigned int nyetdiss        : 1;
    unsigned int epdishdmas      : 1;
    unsigned int                 : 2;
    unsigned int killbks         : 1;
    unsigned int nbusybkes       : 1;
    unsigned int                 : 1;
    unsigned int errortranses    : 1;
    unsigned int dataxes         : 1;
    unsigned int mdataes         : 1;
    unsigned int shortpacketes   : 1;
    unsigned int stalledes       : 1;
    unsigned int overfes         : 1;
    unsigned int nakines         : 1;
    unsigned int nakoutes        : 1;
    unsigned int rxstpes         : 1;
    unsigned int rxoutes         : 1;
    unsigned int txines          : 1;
} avr32_usb_uecon5set_t;



typedef struct avr32_usb_uecon6set_t {
    unsigned int                 :12;
    unsigned int stallrqs        : 1;
    unsigned int rstdts          : 1;
    unsigned int nyetdiss        : 1;
    unsigned int epdishdmas      : 1;
    unsigned int                 : 2;
    unsigned int killbks         : 1;
    unsigned int nbusybkes       : 1;
    unsigned int                 : 1;
    unsigned int errortranses    : 1;
    unsigned int dataxes         : 1;
    unsigned int mdataes         : 1;
    unsigned int shortpacketes   : 1;
    unsigned int stalledes       : 1;
    unsigned int overfes         : 1;
    unsigned int nakines         : 1;
    unsigned int nakoutes        : 1;
    unsigned int rxstpes         : 1;
    unsigned int rxoutes         : 1;
    unsigned int txines          : 1;
} avr32_usb_uecon6set_t;



typedef struct avr32_usb_uecon7set_t {
    unsigned int                 :12;
    unsigned int stallrqs        : 1;
    unsigned int rstdts          : 1;
    unsigned int nyetdiss        : 1;
    unsigned int epdishdmas      : 1;
    unsigned int                 : 2;
    unsigned int killbks         : 1;
    unsigned int nbusybkes       : 1;
    unsigned int                 : 1;
    unsigned int errortranses    : 1;
    unsigned int dataxes         : 1;
    unsigned int mdataes         : 1;
    unsigned int shortpacketes   : 1;
    unsigned int stalledes       : 1;
    unsigned int overfes         : 1;
    unsigned int nakines         : 1;
    unsigned int nakoutes        : 1;
    unsigned int rxstpes         : 1;
    unsigned int rxoutes         : 1;
    unsigned int txines          : 1;
} avr32_usb_uecon7set_t;



typedef struct avr32_usb_uecon0clr_t {
    unsigned int                 :12;
    unsigned int stallrqc        : 1;
    unsigned int                 : 1;
    unsigned int nyetdisc        : 1;
    unsigned int epdishdmac      : 1;
    unsigned int                 : 1;
    unsigned int fifoconc        : 1;
    unsigned int                 : 1;
    unsigned int nbusybkec       : 1;
    unsigned int                 : 1;
    unsigned int errortransec    : 1;
    unsigned int dataxec         : 1;
    unsigned int mdataec         : 1;
    unsigned int shortpacketec   : 1;
    unsigned int stalledec       : 1;
    unsigned int overfec         : 1;
    unsigned int nakinec         : 1;
    unsigned int nakoutec        : 1;
    unsigned int rxstpec         : 1;
    unsigned int rxoutec         : 1;
    unsigned int txinec          : 1;
} avr32_usb_uecon0clr_t;



typedef struct avr32_usb_uecon1clr_t {
    unsigned int                 :12;
    unsigned int stallrqc        : 1;
    unsigned int                 : 1;
    unsigned int nyetdisc        : 1;
    unsigned int epdishdmac      : 1;
    unsigned int                 : 1;
    unsigned int fifoconc        : 1;
    unsigned int                 : 1;
    unsigned int nbusybkec       : 1;
    unsigned int                 : 1;
    unsigned int errortransec    : 1;
    unsigned int dataxec         : 1;
    unsigned int mdataec         : 1;
    unsigned int shortpacketec   : 1;
    unsigned int stalledec       : 1;
    unsigned int overfec         : 1;
    unsigned int nakinec         : 1;
    unsigned int nakoutec        : 1;
    unsigned int rxstpec         : 1;
    unsigned int rxoutec         : 1;
    unsigned int txinec          : 1;
} avr32_usb_uecon1clr_t;



typedef struct avr32_usb_uecon2clr_t {
    unsigned int                 :12;
    unsigned int stallrqc        : 1;
    unsigned int                 : 1;
    unsigned int nyetdisc        : 1;
    unsigned int epdishdmac      : 1;
    unsigned int                 : 1;
    unsigned int fifoconc        : 1;
    unsigned int                 : 1;
    unsigned int nbusybkec       : 1;
    unsigned int                 : 1;
    unsigned int errortransec    : 1;
    unsigned int dataxec         : 1;
    unsigned int mdataec         : 1;
    unsigned int shortpacketec   : 1;
    unsigned int stalledec       : 1;
    unsigned int overfec         : 1;
    unsigned int nakinec         : 1;
    unsigned int nakoutec        : 1;
    unsigned int rxstpec         : 1;
    unsigned int rxoutec         : 1;
    unsigned int txinec          : 1;
} avr32_usb_uecon2clr_t;



typedef struct avr32_usb_uecon3clr_t {
    unsigned int                 :12;
    unsigned int stallrqc        : 1;
    unsigned int                 : 1;
    unsigned int nyetdisc        : 1;
    unsigned int epdishdmac      : 1;
    unsigned int                 : 1;
    unsigned int fifoconc        : 1;
    unsigned int                 : 1;
    unsigned int nbusybkec       : 1;
    unsigned int                 : 1;
    unsigned int errortransec    : 1;
    unsigned int dataxec         : 1;
    unsigned int mdataec         : 1;
    unsigned int shortpacketec   : 1;
    unsigned int stalledec       : 1;
    unsigned int overfec         : 1;
    unsigned int nakinec         : 1;
    unsigned int nakoutec        : 1;
    unsigned int rxstpec         : 1;
    unsigned int rxoutec         : 1;
    unsigned int txinec          : 1;
} avr32_usb_uecon3clr_t;



typedef struct avr32_usb_uecon4clr_t {
    unsigned int                 :12;
    unsigned int stallrqc        : 1;
    unsigned int                 : 1;
    unsigned int nyetdisc        : 1;
    unsigned int epdishdmac      : 1;
    unsigned int                 : 1;
    unsigned int fifoconc        : 1;
    unsigned int                 : 1;
    unsigned int nbusybkec       : 1;
    unsigned int                 : 1;
    unsigned int errortransec    : 1;
    unsigned int dataxec         : 1;
    unsigned int mdataec         : 1;
    unsigned int shortpacketec   : 1;
    unsigned int stalledec       : 1;
    unsigned int overfec         : 1;
    unsigned int nakinec         : 1;
    unsigned int nakoutec        : 1;
    unsigned int rxstpec         : 1;
    unsigned int rxoutec         : 1;
    unsigned int txinec          : 1;
} avr32_usb_uecon4clr_t;



typedef struct avr32_usb_uecon5clr_t {
    unsigned int                 :12;
    unsigned int stallrqc        : 1;
    unsigned int                 : 1;
    unsigned int nyetdisc        : 1;
    unsigned int epdishdmac      : 1;
    unsigned int                 : 1;
    unsigned int fifoconc        : 1;
    unsigned int                 : 1;
    unsigned int nbusybkec       : 1;
    unsigned int                 : 1;
    unsigned int errortransec    : 1;
    unsigned int dataxec         : 1;
    unsigned int mdataec         : 1;
    unsigned int shortpacketec   : 1;
    unsigned int stalledec       : 1;
    unsigned int overfec         : 1;
    unsigned int nakinec         : 1;
    unsigned int nakoutec        : 1;
    unsigned int rxstpec         : 1;
    unsigned int rxoutec         : 1;
    unsigned int txinec          : 1;
} avr32_usb_uecon5clr_t;



typedef struct avr32_usb_uecon6clr_t {
    unsigned int                 :12;
    unsigned int stallrqc        : 1;
    unsigned int                 : 1;
    unsigned int nyetdisc        : 1;
    unsigned int epdishdmac      : 1;
    unsigned int                 : 1;
    unsigned int fifoconc        : 1;
    unsigned int                 : 1;
    unsigned int nbusybkec       : 1;
    unsigned int                 : 1;
    unsigned int errortransec    : 1;
    unsigned int dataxec         : 1;
    unsigned int mdataec         : 1;
    unsigned int shortpacketec   : 1;
    unsigned int stalledec       : 1;
    unsigned int overfec         : 1;
    unsigned int nakinec         : 1;
    unsigned int nakoutec        : 1;
    unsigned int rxstpec         : 1;
    unsigned int rxoutec         : 1;
    unsigned int txinec          : 1;
} avr32_usb_uecon6clr_t;



typedef struct avr32_usb_uecon7clr_t {
    unsigned int                 :12;
    unsigned int stallrqc        : 1;
    unsigned int                 : 1;
    unsigned int nyetdisc        : 1;
    unsigned int epdishdmac      : 1;
    unsigned int                 : 1;
    unsigned int fifoconc        : 1;
    unsigned int                 : 1;
    unsigned int nbusybkec       : 1;
    unsigned int                 : 1;
    unsigned int errortransec    : 1;
    unsigned int dataxec         : 1;
    unsigned int mdataec         : 1;
    unsigned int shortpacketec   : 1;
    unsigned int stalledec       : 1;
    unsigned int overfec         : 1;
    unsigned int nakinec         : 1;
    unsigned int nakoutec        : 1;
    unsigned int rxstpec         : 1;
    unsigned int rxoutec         : 1;
    unsigned int txinec          : 1;
} avr32_usb_uecon7clr_t;



typedef struct avr32_usb_uddma1_nextdesc_t {
    unsigned int nxt_desc_addr   :28;
    unsigned int                 : 4;
} avr32_usb_uddma1_nextdesc_t;



typedef struct avr32_usb_uddma1_control_t {
    unsigned int ch_byte_length  :16;
    unsigned int                 : 8;
    unsigned int burst_lock_en   : 1;
    unsigned int desc_ld_irq_en  : 1;
    unsigned int eobuff_irq_en   : 1;
    unsigned int eot_irq_en      : 1;
    unsigned int dmaend_en       : 1;
    unsigned int buff_close_in_en : 1;
    unsigned int ld_nxt_ch_desc_en : 1;
    unsigned int ch_en           : 1;
} avr32_usb_uddma1_control_t;



typedef struct avr32_usb_uddma1_status_t {
    unsigned int ch_byte_cnt     :16;
    unsigned int                 : 9;
    unsigned int desc_ld_sta     : 1;
    unsigned int eoch_buff_sta   : 1;
    unsigned int eot_sta         : 1;
    unsigned int                 : 2;
    unsigned int ch_active       : 1;
    unsigned int ch_en           : 1;
} avr32_usb_uddma1_status_t;



typedef struct avr32_usb_uddma2_nextdesc_t {
    unsigned int nxt_desc_addr   :28;
    unsigned int                 : 4;
} avr32_usb_uddma2_nextdesc_t;



typedef struct avr32_usb_uddma2_control_t {
    unsigned int ch_byte_length  :16;
    unsigned int                 : 8;
    unsigned int burst_lock_en   : 1;
    unsigned int desc_ld_irq_en  : 1;
    unsigned int eobuff_irq_en   : 1;
    unsigned int eot_irq_en      : 1;
    unsigned int dmaend_en       : 1;
    unsigned int buff_close_in_en : 1;
    unsigned int ld_nxt_ch_desc_en : 1;
    unsigned int ch_en           : 1;
} avr32_usb_uddma2_control_t;



typedef struct avr32_usb_uddma2_status_t {
    unsigned int ch_byte_cnt     :16;
    unsigned int                 : 9;
    unsigned int desc_ld_sta     : 1;
    unsigned int eoch_buff_sta   : 1;
    unsigned int eot_sta         : 1;
    unsigned int                 : 2;
    unsigned int ch_active       : 1;
    unsigned int ch_en           : 1;
} avr32_usb_uddma2_status_t;



typedef struct avr32_usb_uddma3_nextdesc_t {
    unsigned int nxt_desc_addr   :28;
    unsigned int                 : 4;
} avr32_usb_uddma3_nextdesc_t;



typedef struct avr32_usb_uddma3_control_t {
    unsigned int ch_byte_length  :16;
    unsigned int                 : 8;
    unsigned int burst_lock_en   : 1;
    unsigned int desc_ld_irq_en  : 1;
    unsigned int eobuff_irq_en   : 1;
    unsigned int eot_irq_en      : 1;
    unsigned int dmaend_en       : 1;
    unsigned int buff_close_in_en : 1;
    unsigned int ld_nxt_ch_desc_en : 1;
    unsigned int ch_en           : 1;
} avr32_usb_uddma3_control_t;



typedef struct avr32_usb_uddma3_status_t {
    unsigned int ch_byte_cnt     :16;
    unsigned int                 : 9;
    unsigned int desc_ld_sta     : 1;
    unsigned int eoch_buff_sta   : 1;
    unsigned int eot_sta         : 1;
    unsigned int                 : 2;
    unsigned int ch_active       : 1;
    unsigned int ch_en           : 1;
} avr32_usb_uddma3_status_t;



typedef struct avr32_usb_uddma4_nextdesc_t {
    unsigned int nxt_desc_addr   :28;
    unsigned int                 : 4;
} avr32_usb_uddma4_nextdesc_t;



typedef struct avr32_usb_uddma4_control_t {
    unsigned int ch_byte_length  :16;
    unsigned int                 : 8;
    unsigned int burst_lock_en   : 1;
    unsigned int desc_ld_irq_en  : 1;
    unsigned int eobuff_irq_en   : 1;
    unsigned int eot_irq_en      : 1;
    unsigned int dmaend_en       : 1;
    unsigned int buff_close_in_en : 1;
    unsigned int ld_nxt_ch_desc_en : 1;
    unsigned int ch_en           : 1;
} avr32_usb_uddma4_control_t;



typedef struct avr32_usb_uddma4_status_t {
    unsigned int ch_byte_cnt     :16;
    unsigned int                 : 9;
    unsigned int desc_ld_sta     : 1;
    unsigned int eoch_buff_sta   : 1;
    unsigned int eot_sta         : 1;
    unsigned int                 : 2;
    unsigned int ch_active       : 1;
    unsigned int ch_en           : 1;
} avr32_usb_uddma4_status_t;



typedef struct avr32_usb_uddma5_nextdesc_t {
    unsigned int nxt_desc_addr   :28;
    unsigned int                 : 4;
} avr32_usb_uddma5_nextdesc_t;



typedef struct avr32_usb_uddma5_control_t {
    unsigned int ch_byte_length  :16;
    unsigned int                 : 8;
    unsigned int burst_lock_en   : 1;
    unsigned int desc_ld_irq_en  : 1;
    unsigned int eobuff_irq_en   : 1;
    unsigned int eot_irq_en      : 1;
    unsigned int dmaend_en       : 1;
    unsigned int buff_close_in_en : 1;
    unsigned int ld_nxt_ch_desc_en : 1;
    unsigned int ch_en           : 1;
} avr32_usb_uddma5_control_t;



typedef struct avr32_usb_uddma5_status_t {
    unsigned int ch_byte_cnt     :16;
    unsigned int                 : 9;
    unsigned int desc_ld_sta     : 1;
    unsigned int eoch_buff_sta   : 1;
    unsigned int eot_sta         : 1;
    unsigned int                 : 2;
    unsigned int ch_active       : 1;
    unsigned int ch_en           : 1;
} avr32_usb_uddma5_status_t;



typedef struct avr32_usb_uddma6_nextdesc_t {
    unsigned int nxt_desc_addr   :28;
    unsigned int                 : 4;
} avr32_usb_uddma6_nextdesc_t;



typedef struct avr32_usb_uddma6_control_t {
    unsigned int ch_byte_length  :16;
    unsigned int                 : 8;
    unsigned int burst_lock_en   : 1;
    unsigned int desc_ld_irq_en  : 1;
    unsigned int eobuff_irq_en   : 1;
    unsigned int eot_irq_en      : 1;
    unsigned int dmaend_en       : 1;
    unsigned int buff_close_in_en : 1;
    unsigned int ld_nxt_ch_desc_en : 1;
    unsigned int ch_en           : 1;
} avr32_usb_uddma6_control_t;



typedef struct avr32_usb_uddma6_status_t {
    unsigned int ch_byte_cnt     :16;
    unsigned int                 : 9;
    unsigned int desc_ld_sta     : 1;
    unsigned int eoch_buff_sta   : 1;
    unsigned int eot_sta         : 1;
    unsigned int                 : 2;
    unsigned int ch_active       : 1;
    unsigned int ch_en           : 1;
} avr32_usb_uddma6_status_t;



typedef struct avr32_usb_uddma7_nextdesc_t {
    unsigned int nxt_desc_addr   :28;
    unsigned int                 : 4;
} avr32_usb_uddma7_nextdesc_t;



typedef struct avr32_usb_uddma7_control_t {
    unsigned int ch_byte_length  :16;
    unsigned int                 : 8;
    unsigned int burst_lock_en   : 1;
    unsigned int desc_ld_irq_en  : 1;
    unsigned int eobuff_irq_en   : 1;
    unsigned int eot_irq_en      : 1;
    unsigned int dmaend_en       : 1;
    unsigned int buff_close_in_en : 1;
    unsigned int ld_nxt_ch_desc_en : 1;
    unsigned int ch_en           : 1;
} avr32_usb_uddma7_control_t;



typedef struct avr32_usb_uddma7_status_t {
    unsigned int ch_byte_cnt     :16;
    unsigned int                 : 9;
    unsigned int desc_ld_sta     : 1;
    unsigned int eoch_buff_sta   : 1;
    unsigned int eot_sta         : 1;
    unsigned int                 : 2;
    unsigned int ch_active       : 1;
    unsigned int ch_en           : 1;
} avr32_usb_uddma7_status_t;



typedef struct avr32_usb_uhcon_t {
    unsigned int                 :18;
    unsigned int spdconf         : 2;
    unsigned int                 : 1;
    unsigned int resume          : 1;
    unsigned int reset           : 1;
    unsigned int sofe            : 1;
    unsigned int                 : 8;
} avr32_usb_uhcon_t;



typedef struct avr32_usb_uhint_t {
    unsigned int dma7int         : 1;
    unsigned int dma6int         : 1;
    unsigned int dma5int         : 1;
    unsigned int dma4int         : 1;
    unsigned int dma3int         : 1;
    unsigned int dma2int         : 1;
    unsigned int dma1int         : 1;
    unsigned int                 :10;
    unsigned int p6int           : 1;
    unsigned int p5int           : 1;
    unsigned int p4int           : 1;
    unsigned int p3int           : 1;
    unsigned int p2int           : 1;
    unsigned int p1int           : 1;
    unsigned int p0int           : 1;
    unsigned int                 : 1;
    unsigned int hwupi           : 1;
    unsigned int hsofi           : 1;
    unsigned int rxrsmi          : 1;
    unsigned int rsmedi          : 1;
    unsigned int rsti            : 1;
    unsigned int ddisci          : 1;
    unsigned int dconni          : 1;
} avr32_usb_uhint_t;



typedef struct avr32_usb_uhintclr_t {
    unsigned int                 :25;
    unsigned int hwupic          : 1;
    unsigned int hsofic          : 1;
    unsigned int rxrsmic         : 1;
    unsigned int rsmedic         : 1;
    unsigned int rstic           : 1;
    unsigned int ddiscic         : 1;
    unsigned int dconnic         : 1;
} avr32_usb_uhintclr_t;



typedef struct avr32_usb_uhintset_t {
    unsigned int dma7ints        : 1;
    unsigned int dma6ints        : 1;
    unsigned int dma5ints        : 1;
    unsigned int dma4ints        : 1;
    unsigned int dma3ints        : 1;
    unsigned int dma2ints        : 1;
    unsigned int dma1ints        : 1;
    unsigned int                 :18;
    unsigned int hwupis          : 1;
    unsigned int hsofis          : 1;
    unsigned int rxrsmis         : 1;
    unsigned int rsmedis         : 1;
    unsigned int rstis           : 1;
    unsigned int ddiscis         : 1;
    unsigned int dconnis         : 1;
} avr32_usb_uhintset_t;



typedef struct avr32_usb_uhinte_t {
    unsigned int dma7inte        : 1;
    unsigned int dma6inte        : 1;
    unsigned int dma5inte        : 1;
    unsigned int dma4inte        : 1;
    unsigned int dma3inte        : 1;
    unsigned int dma2inte        : 1;
    unsigned int dma1inte        : 1;
    unsigned int                 : 9;
    unsigned int p7inte          : 1;
    unsigned int p6inte          : 1;
    unsigned int p5inte          : 1;
    unsigned int p4inte          : 1;
    unsigned int p3inte          : 1;
    unsigned int p2inte          : 1;
    unsigned int p1inte          : 1;
    unsigned int p0inte          : 1;
    unsigned int                 : 1;
    unsigned int hwupie          : 1;
    unsigned int hsofie          : 1;
    unsigned int rxrsmie         : 1;
    unsigned int rsmedie         : 1;
    unsigned int rstie           : 1;
    unsigned int ddiscie         : 1;
    unsigned int dconnie         : 1;
} avr32_usb_uhinte_t;



typedef struct avr32_usb_uhinteclr_t {
    unsigned int dma7intec       : 1;
    unsigned int dma6intec       : 1;
    unsigned int dma5intec       : 1;
    unsigned int dma4intec       : 1;
    unsigned int dma3intec       : 1;
    unsigned int dma2intec       : 1;
    unsigned int dma1intec       : 1;
    unsigned int                 : 9;
    unsigned int p7intec         : 1;
    unsigned int p6intec         : 1;
    unsigned int p5intec         : 1;
    unsigned int p4intec         : 1;
    unsigned int p3intec         : 1;
    unsigned int p2intec         : 1;
    unsigned int p1intec         : 1;
    unsigned int p0intec         : 1;
    unsigned int                 : 1;
    unsigned int hwupiec         : 1;
    unsigned int hsofiec         : 1;
    unsigned int rxrsmiec        : 1;
    unsigned int rsmediec        : 1;
    unsigned int rstiec          : 1;
    unsigned int ddisciec        : 1;
    unsigned int dconniec        : 1;
} avr32_usb_uhinteclr_t;



typedef struct avr32_usb_uhinteset_t {
    unsigned int dma7intes       : 1;
    unsigned int dma6intes       : 1;
    unsigned int dma5intes       : 1;
    unsigned int dma4intes       : 1;
    unsigned int dma3intes       : 1;
    unsigned int dma2intes       : 1;
    unsigned int dma1intes       : 1;
    unsigned int                 : 9;
    unsigned int p7intes         : 1;
    unsigned int p6intes         : 1;
    unsigned int p5intes         : 1;
    unsigned int p4intes         : 1;
    unsigned int p3intes         : 1;
    unsigned int p2intes         : 1;
    unsigned int p1intes         : 1;
    unsigned int p0intes         : 1;
    unsigned int                 : 1;
    unsigned int hwupies         : 1;
    unsigned int hsofies         : 1;
    unsigned int rxrsmies        : 1;
    unsigned int rsmedies        : 1;
    unsigned int rsties          : 1;
    unsigned int ddiscies        : 1;
    unsigned int dconnies        : 1;
} avr32_usb_uhinteset_t;



typedef struct avr32_usb_uprst_t {
    unsigned int                 : 8;
    unsigned int prst7           : 1;
    unsigned int prst6           : 1;
    unsigned int prst5           : 1;
    unsigned int prst4           : 1;
    unsigned int prst3           : 1;
    unsigned int prst2           : 1;
    unsigned int prst1           : 1;
    unsigned int prst0           : 1;
    unsigned int                 : 8;
    unsigned int pen7            : 1;
    unsigned int pen6            : 1;
    unsigned int pen5            : 1;
    unsigned int pen4            : 1;
    unsigned int pen3            : 1;
    unsigned int pen2            : 1;
    unsigned int pen1            : 1;
    unsigned int pen0            : 1;
} avr32_usb_uprst_t;



typedef struct avr32_usb_uhfnum_t {
    unsigned int                 : 8;
    unsigned int flenhigh        : 8;
    unsigned int                 : 2;
    unsigned int fnum            :11;
    unsigned int mfnum           : 3;
} avr32_usb_uhfnum_t;



typedef struct avr32_usb_uhaddr1_t {
    unsigned int                 : 1;
    unsigned int uhaddr_p3       : 7;
    unsigned int                 : 1;
    unsigned int uhaddr_p2       : 7;
    unsigned int                 : 1;
    unsigned int uhaddr_p1       : 7;
    unsigned int                 : 1;
    unsigned int uhaddr_p0       : 7;
} avr32_usb_uhaddr1_t;



typedef struct avr32_usb_uhaddr2_t {
    unsigned int                 : 1;
    unsigned int uhaddr_p7       : 7;
    unsigned int                 : 1;
    unsigned int uhaddr_p6       : 7;
    unsigned int                 : 1;
    unsigned int uhaddr_p5       : 7;
    unsigned int                 : 1;
    unsigned int uhaddr_p4       : 7;
} avr32_usb_uhaddr2_t;



typedef struct avr32_usb_uhaddr3_t {
    unsigned int                 : 1;
    unsigned int uhaddr_p11      : 7;
    unsigned int                 : 1;
    unsigned int uhaddr_p10      : 7;
    unsigned int                 : 1;
    unsigned int uhaddr_p9       : 7;
    unsigned int                 : 1;
    unsigned int uhaddr_p8       : 7;
} avr32_usb_uhaddr3_t;



typedef struct avr32_usb_upcfg0_t {
    unsigned int intfrq          : 8;
    unsigned int datasizerdwr    : 2;
    unsigned int                 : 1;
    unsigned int pingen          : 1;
    unsigned int pepnum          : 4;
    unsigned int                 : 2;
    unsigned int ptype           : 2;
    unsigned int                 : 1;
    unsigned int autosw          : 1;
    unsigned int ptoken          : 2;
    unsigned int                 : 1;
    unsigned int psize           : 3;
    unsigned int pbk             : 2;
    unsigned int alloc           : 1;
    unsigned int                 : 1;
} avr32_usb_upcfg0_t;



typedef struct avr32_usb_upcfg1_t {
    unsigned int intfrq          : 8;
    unsigned int datasizerdwr    : 2;
    unsigned int                 : 1;
    unsigned int pingen          : 1;
    unsigned int pepnum          : 4;
    unsigned int                 : 2;
    unsigned int ptype           : 2;
    unsigned int                 : 1;
    unsigned int autosw          : 1;
    unsigned int ptoken          : 2;
    unsigned int                 : 1;
    unsigned int psize           : 3;
    unsigned int pbk             : 2;
    unsigned int alloc           : 1;
    unsigned int                 : 1;
} avr32_usb_upcfg1_t;



typedef struct avr32_usb_upcfg2_t {
    unsigned int intfrq          : 8;
    unsigned int datasizerdwr    : 2;
    unsigned int                 : 1;
    unsigned int pingen          : 1;
    unsigned int pepnum          : 4;
    unsigned int                 : 2;
    unsigned int ptype           : 2;
    unsigned int                 : 1;
    unsigned int autosw          : 1;
    unsigned int ptoken          : 2;
    unsigned int                 : 1;
    unsigned int psize           : 3;
    unsigned int pbk             : 2;
    unsigned int alloc           : 1;
    unsigned int                 : 1;
} avr32_usb_upcfg2_t;



typedef struct avr32_usb_upcfg3_t {
    unsigned int intfrq          : 8;
    unsigned int datasizerdwr    : 2;
    unsigned int                 : 1;
    unsigned int pingen          : 1;
    unsigned int pepnum          : 4;
    unsigned int                 : 2;
    unsigned int ptype           : 2;
    unsigned int                 : 1;
    unsigned int autosw          : 1;
    unsigned int ptoken          : 2;
    unsigned int                 : 1;
    unsigned int psize           : 3;
    unsigned int pbk             : 2;
    unsigned int alloc           : 1;
    unsigned int                 : 1;
} avr32_usb_upcfg3_t;



typedef struct avr32_usb_upcfg4_t {
    unsigned int intfrq          : 8;
    unsigned int datasizerdwr    : 2;
    unsigned int                 : 1;
    unsigned int pingen          : 1;
    unsigned int pepnum          : 4;
    unsigned int                 : 2;
    unsigned int ptype           : 2;
    unsigned int                 : 1;
    unsigned int autosw          : 1;
    unsigned int ptoken          : 2;
    unsigned int                 : 1;
    unsigned int psize           : 3;
    unsigned int pbk             : 2;
    unsigned int alloc           : 1;
    unsigned int                 : 1;
} avr32_usb_upcfg4_t;



typedef struct avr32_usb_upcfg5_t {
    unsigned int intfrq          : 8;
    unsigned int datasizerdwr    : 2;
    unsigned int                 : 1;
    unsigned int pingen          : 1;
    unsigned int pepnum          : 4;
    unsigned int                 : 2;
    unsigned int ptype           : 2;
    unsigned int                 : 1;
    unsigned int autosw          : 1;
    unsigned int ptoken          : 2;
    unsigned int                 : 1;
    unsigned int psize           : 3;
    unsigned int pbk             : 2;
    unsigned int alloc           : 1;
    unsigned int                 : 1;
} avr32_usb_upcfg5_t;



typedef struct avr32_usb_upcfg6_t {
    unsigned int intfrq          : 8;
    unsigned int datasizerdwr    : 2;
    unsigned int                 : 1;
    unsigned int pingen          : 1;
    unsigned int pepnum          : 4;
    unsigned int                 : 2;
    unsigned int ptype           : 2;
    unsigned int                 : 1;
    unsigned int autosw          : 1;
    unsigned int ptoken          : 2;
    unsigned int                 : 1;
    unsigned int psize           : 3;
    unsigned int pbk             : 2;
    unsigned int alloc           : 1;
    unsigned int                 : 1;
} avr32_usb_upcfg6_t;



typedef struct avr32_usb_upcfg7_t {
    unsigned int intfrq          : 8;
    unsigned int datasizerdwr    : 2;
    unsigned int                 : 1;
    unsigned int pingen          : 1;
    unsigned int pepnum          : 4;
    unsigned int                 : 2;
    unsigned int ptype           : 2;
    unsigned int                 : 1;
    unsigned int autosw          : 1;
    unsigned int ptoken          : 2;
    unsigned int                 : 1;
    unsigned int psize           : 3;
    unsigned int pbk             : 2;
    unsigned int alloc           : 1;
    unsigned int                 : 1;
} avr32_usb_upcfg7_t;



typedef struct avr32_usb_upsta0_t {
    unsigned int                 : 1;
    unsigned int pbyct           :11;
    unsigned int                 : 1;
    unsigned int cfgok           : 1;
    unsigned int                 : 1;
    unsigned int rwall           : 1;
    unsigned int currbk          : 2;
    unsigned int nbusybk         : 2;
    unsigned int                 : 2;
    unsigned int dtseq           : 2;
    unsigned int shortpacketi    : 1;
    unsigned int rxstalldi       : 1;
    unsigned int overfi          : 1;
    unsigned int nakedi          : 1;
    unsigned int perri           : 1;
    unsigned int txstpi          : 1;
    unsigned int txouti          : 1;
    unsigned int rxini           : 1;
} avr32_usb_upsta0_t;



typedef struct avr32_usb_upsta1_t {
    unsigned int                 : 1;
    unsigned int pbyct           :11;
    unsigned int                 : 1;
    unsigned int cfgok           : 1;
    unsigned int                 : 1;
    unsigned int rwall           : 1;
    unsigned int currbk          : 2;
    unsigned int nbusybk         : 2;
    unsigned int                 : 2;
    unsigned int dtseq           : 2;
    unsigned int shortpacketi    : 1;
    unsigned int rxstalldi       : 1;
    unsigned int overfi          : 1;
    unsigned int nakedi          : 1;
    unsigned int perri           : 1;
    unsigned int txstpi          : 1;
    unsigned int txouti          : 1;
    unsigned int rxini           : 1;
} avr32_usb_upsta1_t;



typedef struct avr32_usb_upsta2_t {
    unsigned int                 : 1;
    unsigned int pbyct           :11;
    unsigned int                 : 1;
    unsigned int cfgok           : 1;
    unsigned int                 : 1;
    unsigned int rwall           : 1;
    unsigned int currbk          : 2;
    unsigned int nbusybk         : 2;
    unsigned int                 : 2;
    unsigned int dtseq           : 2;
    unsigned int shortpacketi    : 1;
    unsigned int rxstalldi       : 1;
    unsigned int overfi          : 1;
    unsigned int nakedi          : 1;
    unsigned int perri           : 1;
    unsigned int txstpi          : 1;
    unsigned int txouti          : 1;
    unsigned int rxini           : 1;
} avr32_usb_upsta2_t;



typedef struct avr32_usb_upsta3_t {
    unsigned int                 : 1;
    unsigned int pbyct           :11;
    unsigned int                 : 1;
    unsigned int cfgok           : 1;
    unsigned int                 : 1;
    unsigned int rwall           : 1;
    unsigned int currbk          : 2;
    unsigned int nbusybk         : 2;
    unsigned int                 : 2;
    unsigned int dtseq           : 2;
    unsigned int shortpacketi    : 1;
    unsigned int rxstalldi       : 1;
    unsigned int overfi          : 1;
    unsigned int nakedi          : 1;
    unsigned int perri           : 1;
    unsigned int txstpi          : 1;
    unsigned int txouti          : 1;
    unsigned int rxini           : 1;
} avr32_usb_upsta3_t;



typedef struct avr32_usb_upsta4_t {
    unsigned int                 : 1;
    unsigned int pbyct           :11;
    unsigned int                 : 1;
    unsigned int cfgok           : 1;
    unsigned int                 : 1;
    unsigned int rwall           : 1;
    unsigned int currbk          : 2;
    unsigned int nbusybk         : 2;
    unsigned int                 : 2;
    unsigned int dtseq           : 2;
    unsigned int shortpacketi    : 1;
    unsigned int rxstalldi       : 1;
    unsigned int overfi          : 1;
    unsigned int nakedi          : 1;
    unsigned int perri           : 1;
    unsigned int txstpi          : 1;
    unsigned int txouti          : 1;
    unsigned int rxini           : 1;
} avr32_usb_upsta4_t;



typedef struct avr32_usb_upsta5_t {
    unsigned int                 : 1;
    unsigned int pbyct           :11;
    unsigned int                 : 1;
    unsigned int cfgok           : 1;
    unsigned int                 : 1;
    unsigned int rwall           : 1;
    unsigned int currbk          : 2;
    unsigned int nbusybk         : 2;
    unsigned int                 : 2;
    unsigned int dtseq           : 2;
    unsigned int shortpacketi    : 1;
    unsigned int rxstalldi       : 1;
    unsigned int overfi          : 1;
    unsigned int nakedi          : 1;
    unsigned int perri           : 1;
    unsigned int txstpi          : 1;
    unsigned int txouti          : 1;
    unsigned int rxini           : 1;
} avr32_usb_upsta5_t;



typedef struct avr32_usb_upsta6_t {
    unsigned int                 : 1;
    unsigned int pbyct           :11;
    unsigned int                 : 1;
    unsigned int cfgok           : 1;
    unsigned int                 : 1;
    unsigned int rwall           : 1;
    unsigned int currbk          : 2;
    unsigned int nbusybk         : 2;
    unsigned int                 : 2;
    unsigned int dtseq           : 2;
    unsigned int shortpacketi    : 1;
    unsigned int rxstalldi       : 1;
    unsigned int overfi          : 1;
    unsigned int nakedi          : 1;
    unsigned int perri           : 1;
    unsigned int txstpi          : 1;
    unsigned int txouti          : 1;
    unsigned int rxini           : 1;
} avr32_usb_upsta6_t;



typedef struct avr32_usb_upsta7_t {
    unsigned int                 : 1;
    unsigned int pbyct           :11;
    unsigned int                 : 1;
    unsigned int cfgok           : 1;
    unsigned int                 : 1;
    unsigned int rwall           : 1;
    unsigned int currbk          : 2;
    unsigned int nbusybk         : 2;
    unsigned int                 : 2;
    unsigned int dtseq           : 2;
    unsigned int shortpacketi    : 1;
    unsigned int rxstalldi       : 1;
    unsigned int overfi          : 1;
    unsigned int nakedi          : 1;
    unsigned int perri           : 1;
    unsigned int txstpi          : 1;
    unsigned int txouti          : 1;
    unsigned int rxini           : 1;
} avr32_usb_upsta7_t;



typedef struct avr32_usb_upsta0clr_t {
    unsigned int                 :24;
    unsigned int shortpacketic   : 1;
    unsigned int rxstalldic      : 1;
    unsigned int overfic         : 1;
    unsigned int nakedic         : 1;
    unsigned int                 : 1;
    unsigned int txstpic         : 1;
    unsigned int txoutic         : 1;
    unsigned int rxinic          : 1;
} avr32_usb_upsta0clr_t;



typedef struct avr32_usb_upsta1clr_t {
    unsigned int                 :24;
    unsigned int shortpacketic   : 1;
    unsigned int rxstalldic      : 1;
    unsigned int overfic         : 1;
    unsigned int nakedic         : 1;
    unsigned int                 : 1;
    unsigned int txstpic         : 1;
    unsigned int txoutic         : 1;
    unsigned int rxinic          : 1;
} avr32_usb_upsta1clr_t;



typedef struct avr32_usb_upsta2clr_t {
    unsigned int                 :24;
    unsigned int shortpacketic   : 1;
    unsigned int rxstalldic      : 1;
    unsigned int overfic         : 1;
    unsigned int nakedic         : 1;
    unsigned int                 : 1;
    unsigned int txstpic         : 1;
    unsigned int txoutic         : 1;
    unsigned int rxinic          : 1;
} avr32_usb_upsta2clr_t;



typedef struct avr32_usb_upsta3clr_t {
    unsigned int                 :24;
    unsigned int shortpacketic   : 1;
    unsigned int rxstalldic      : 1;
    unsigned int overfic         : 1;
    unsigned int nakedic         : 1;
    unsigned int                 : 1;
    unsigned int txstpic         : 1;
    unsigned int txoutic         : 1;
    unsigned int rxinic          : 1;
} avr32_usb_upsta3clr_t;



typedef struct avr32_usb_upsta4clr_t {
    unsigned int                 :24;
    unsigned int shortpacketic   : 1;
    unsigned int rxstalldic      : 1;
    unsigned int overfic         : 1;
    unsigned int nakedic         : 1;
    unsigned int                 : 1;
    unsigned int txstpic         : 1;
    unsigned int txoutic         : 1;
    unsigned int rxinic          : 1;
} avr32_usb_upsta4clr_t;



typedef struct avr32_usb_upsta5clr_t {
    unsigned int                 :24;
    unsigned int shortpacketic   : 1;
    unsigned int rxstalldic      : 1;
    unsigned int overfic         : 1;
    unsigned int nakedic         : 1;
    unsigned int                 : 1;
    unsigned int txstpic         : 1;
    unsigned int txoutic         : 1;
    unsigned int rxinic          : 1;
} avr32_usb_upsta5clr_t;



typedef struct avr32_usb_upsta6clr_t {
    unsigned int                 :24;
    unsigned int shortpacketic   : 1;
    unsigned int rxstalldic      : 1;
    unsigned int overfic         : 1;
    unsigned int nakedic         : 1;
    unsigned int                 : 1;
    unsigned int txstpic         : 1;
    unsigned int txoutic         : 1;
    unsigned int rxinic          : 1;
} avr32_usb_upsta6clr_t;



typedef struct avr32_usb_upsta7clr_t {
    unsigned int                 :24;
    unsigned int shortpacketic   : 1;
    unsigned int rxstalldic      : 1;
    unsigned int overfic         : 1;
    unsigned int nakedic         : 1;
    unsigned int                 : 1;
    unsigned int txstpic         : 1;
    unsigned int txoutic         : 1;
    unsigned int rxinic          : 1;
} avr32_usb_upsta7clr_t;



typedef struct avr32_usb_upsta0set_t {
    unsigned int                 :19;
    unsigned int nbusybks        : 1;
    unsigned int                 : 4;
    unsigned int shortpacketis   : 1;
    unsigned int rxstalldis      : 1;
    unsigned int overfis         : 1;
    unsigned int nakedis         : 1;
    unsigned int perris          : 1;
    unsigned int txstpis         : 1;
    unsigned int txoutis         : 1;
    unsigned int rxinis          : 1;
} avr32_usb_upsta0set_t;



typedef struct avr32_usb_upsta1set_t {
    unsigned int                 :19;
    unsigned int nbusybks        : 1;
    unsigned int                 : 4;
    unsigned int shortpacketis   : 1;
    unsigned int rxstalldis      : 1;
    unsigned int overfis         : 1;
    unsigned int nakedis         : 1;
    unsigned int perris          : 1;
    unsigned int txstpis         : 1;
    unsigned int txoutis         : 1;
    unsigned int rxinis          : 1;
} avr32_usb_upsta1set_t;



typedef struct avr32_usb_upsta2set_t {
    unsigned int                 :19;
    unsigned int nbusybks        : 1;
    unsigned int                 : 4;
    unsigned int shortpacketis   : 1;
    unsigned int rxstalldis      : 1;
    unsigned int overfis         : 1;
    unsigned int nakedis         : 1;
    unsigned int perris          : 1;
    unsigned int txstpis         : 1;
    unsigned int txoutis         : 1;
    unsigned int rxinis          : 1;
} avr32_usb_upsta2set_t;



typedef struct avr32_usb_upsta3set_t {
    unsigned int                 :19;
    unsigned int nbusybks        : 1;
    unsigned int                 : 4;
    unsigned int shortpacketis   : 1;
    unsigned int rxstalldis      : 1;
    unsigned int overfis         : 1;
    unsigned int nakedis         : 1;
    unsigned int perris          : 1;
    unsigned int txstpis         : 1;
    unsigned int txoutis         : 1;
    unsigned int rxinis          : 1;
} avr32_usb_upsta3set_t;



typedef struct avr32_usb_upsta4set_t {
    unsigned int                 :19;
    unsigned int nbusybks        : 1;
    unsigned int                 : 4;
    unsigned int shortpacketis   : 1;
    unsigned int rxstalldis      : 1;
    unsigned int overfis         : 1;
    unsigned int nakedis         : 1;
    unsigned int perris          : 1;
    unsigned int txstpis         : 1;
    unsigned int txoutis         : 1;
    unsigned int rxinis          : 1;
} avr32_usb_upsta4set_t;



typedef struct avr32_usb_upsta5set_t {
    unsigned int                 :19;
    unsigned int nbusybks        : 1;
    unsigned int                 : 4;
    unsigned int shortpacketis   : 1;
    unsigned int rxstalldis      : 1;
    unsigned int overfis         : 1;
    unsigned int nakedis         : 1;
    unsigned int perris          : 1;
    unsigned int txstpis         : 1;
    unsigned int txoutis         : 1;
    unsigned int rxinis          : 1;
} avr32_usb_upsta5set_t;



typedef struct avr32_usb_upsta6set_t {
    unsigned int                 :19;
    unsigned int nbusybks        : 1;
    unsigned int                 : 4;
    unsigned int shortpacketis   : 1;
    unsigned int rxstalldis      : 1;
    unsigned int overfis         : 1;
    unsigned int nakedis         : 1;
    unsigned int perris          : 1;
    unsigned int txstpis         : 1;
    unsigned int txoutis         : 1;
    unsigned int rxinis          : 1;
} avr32_usb_upsta6set_t;



typedef struct avr32_usb_upsta7set_t {
    unsigned int                 :19;
    unsigned int nbusybks        : 1;
    unsigned int                 : 4;
    unsigned int shortpacketis   : 1;
    unsigned int rxstalldis      : 1;
    unsigned int overfis         : 1;
    unsigned int nakedis         : 1;
    unsigned int perris          : 1;
    unsigned int txstpis         : 1;
    unsigned int txoutis         : 1;
    unsigned int rxinis          : 1;
} avr32_usb_upsta7set_t;



typedef struct avr32_usb_upcon0_t {
    unsigned int                 :13;
    unsigned int rstdt           : 1;
    unsigned int pfreeze         : 1;
    unsigned int pdishdma        : 1;
    unsigned int                 : 1;
    unsigned int fifocon         : 1;
    unsigned int                 : 1;
    unsigned int nbusybke        : 1;
    unsigned int                 : 4;
    unsigned int shortpacketie   : 1;
    unsigned int rxstallde       : 1;
    unsigned int overfie         : 1;
    unsigned int nakede          : 1;
    unsigned int perre           : 1;
    unsigned int txstpe          : 1;
    unsigned int txoute          : 1;
    unsigned int rxine           : 1;
} avr32_usb_upcon0_t;



typedef struct avr32_usb_upcon1_t {
    unsigned int                 :13;
    unsigned int rstdt           : 1;
    unsigned int pfreeze         : 1;
    unsigned int pdishdma        : 1;
    unsigned int                 : 1;
    unsigned int fifocon         : 1;
    unsigned int                 : 1;
    unsigned int nbusybke        : 1;
    unsigned int                 : 4;
    unsigned int shortpacketie   : 1;
    unsigned int rxstallde       : 1;
    unsigned int overfie         : 1;
    unsigned int nakede          : 1;
    unsigned int perre           : 1;
    unsigned int txstpe          : 1;
    unsigned int txoute          : 1;
    unsigned int rxine           : 1;
} avr32_usb_upcon1_t;



typedef struct avr32_usb_upcon2_t {
    unsigned int                 :13;
    unsigned int rstdt           : 1;
    unsigned int pfreeze         : 1;
    unsigned int pdishdma        : 1;
    unsigned int                 : 1;
    unsigned int fifocon         : 1;
    unsigned int                 : 1;
    unsigned int nbusybke        : 1;
    unsigned int                 : 4;
    unsigned int shortpacketie   : 1;
    unsigned int rxstallde       : 1;
    unsigned int overfie         : 1;
    unsigned int nakede          : 1;
    unsigned int perre           : 1;
    unsigned int txstpe          : 1;
    unsigned int txoute          : 1;
    unsigned int rxine           : 1;
} avr32_usb_upcon2_t;



typedef struct avr32_usb_upcon3_t {
    unsigned int                 :13;
    unsigned int rstdt           : 1;
    unsigned int pfreeze         : 1;
    unsigned int pdishdma        : 1;
    unsigned int                 : 1;
    unsigned int fifocon         : 1;
    unsigned int                 : 1;
    unsigned int nbusybke        : 1;
    unsigned int                 : 4;
    unsigned int shortpacketie   : 1;
    unsigned int rxstallde       : 1;
    unsigned int overfie         : 1;
    unsigned int nakede          : 1;
    unsigned int perre           : 1;
    unsigned int txstpe          : 1;
    unsigned int txoute          : 1;
    unsigned int rxine           : 1;
} avr32_usb_upcon3_t;



typedef struct avr32_usb_upcon4_t {
    unsigned int                 :13;
    unsigned int rstdt           : 1;
    unsigned int pfreeze         : 1;
    unsigned int pdishdma        : 1;
    unsigned int                 : 1;
    unsigned int fifocon         : 1;
    unsigned int                 : 1;
    unsigned int nbusybke        : 1;
    unsigned int                 : 4;
    unsigned int shortpacketie   : 1;
    unsigned int rxstallde       : 1;
    unsigned int overfie         : 1;
    unsigned int nakede          : 1;
    unsigned int perre           : 1;
    unsigned int txstpe          : 1;
    unsigned int txoute          : 1;
    unsigned int rxine           : 1;
} avr32_usb_upcon4_t;



typedef struct avr32_usb_upcon5_t {
    unsigned int                 :13;
    unsigned int rstdt           : 1;
    unsigned int pfreeze         : 1;
    unsigned int pdishdma        : 1;
    unsigned int                 : 1;
    unsigned int fifocon         : 1;
    unsigned int                 : 1;
    unsigned int nbusybke        : 1;
    unsigned int                 : 4;
    unsigned int shortpacketie   : 1;
    unsigned int rxstallde       : 1;
    unsigned int overfie         : 1;
    unsigned int nakede          : 1;
    unsigned int perre           : 1;
    unsigned int txstpe          : 1;
    unsigned int txoute          : 1;
    unsigned int rxine           : 1;
} avr32_usb_upcon5_t;



typedef struct avr32_usb_upcon6_t {
    unsigned int                 :13;
    unsigned int rstdt           : 1;
    unsigned int pfreeze         : 1;
    unsigned int pdishdma        : 1;
    unsigned int                 : 1;
    unsigned int fifocon         : 1;
    unsigned int                 : 1;
    unsigned int nbusybke        : 1;
    unsigned int                 : 4;
    unsigned int shortpacketie   : 1;
    unsigned int rxstallde       : 1;
    unsigned int overfie         : 1;
    unsigned int nakede          : 1;
    unsigned int perre           : 1;
    unsigned int txstpe          : 1;
    unsigned int txoute          : 1;
    unsigned int rxine           : 1;
} avr32_usb_upcon6_t;



typedef struct avr32_usb_upcon7_t {
    unsigned int                 :13;
    unsigned int rstdt           : 1;
    unsigned int pfreeze         : 1;
    unsigned int pdishdma        : 1;
    unsigned int                 : 1;
    unsigned int fifocon         : 1;
    unsigned int                 : 1;
    unsigned int nbusybke        : 1;
    unsigned int                 : 4;
    unsigned int shortpacketie   : 1;
    unsigned int rxstallde       : 1;
    unsigned int overfie         : 1;
    unsigned int nakede          : 1;
    unsigned int perre           : 1;
    unsigned int txstpe          : 1;
    unsigned int txoute          : 1;
    unsigned int rxine           : 1;
} avr32_usb_upcon7_t;



typedef struct avr32_usb_upcon0set_t {
    unsigned int                 :13;
    unsigned int rstdts          : 1;
    unsigned int pfreezes        : 1;
    unsigned int pdishdmas       : 1;
    unsigned int                 : 3;
    unsigned int nbusybkes       : 1;
    unsigned int                 : 4;
    unsigned int shortpacketies  : 1;
    unsigned int rxstalldes      : 1;
    unsigned int overfies        : 1;
    unsigned int nakedes         : 1;
    unsigned int perres          : 1;
    unsigned int txstpes         : 1;
    unsigned int txoutes         : 1;
    unsigned int rxines          : 1;
} avr32_usb_upcon0set_t;



typedef struct avr32_usb_upcon1set_t {
    unsigned int                 :13;
    unsigned int rstdts          : 1;
    unsigned int pfreezes        : 1;
    unsigned int pdishdmas       : 1;
    unsigned int                 : 3;
    unsigned int nbusybkes       : 1;
    unsigned int                 : 4;
    unsigned int shortpacketies  : 1;
    unsigned int rxstalldes      : 1;
    unsigned int overfies        : 1;
    unsigned int nakedes         : 1;
    unsigned int perres          : 1;
    unsigned int txstpes         : 1;
    unsigned int txoutes         : 1;
    unsigned int rxines          : 1;
} avr32_usb_upcon1set_t;



typedef struct avr32_usb_upcon2set_t {
    unsigned int                 :13;
    unsigned int rstdts          : 1;
    unsigned int pfreezes        : 1;
    unsigned int pdishdmas       : 1;
    unsigned int                 : 3;
    unsigned int nbusybkes       : 1;
    unsigned int                 : 4;
    unsigned int shortpacketies  : 1;
    unsigned int rxstalldes      : 1;
    unsigned int overfies        : 1;
    unsigned int nakedes         : 1;
    unsigned int perres          : 1;
    unsigned int txstpes         : 1;
    unsigned int txoutes         : 1;
    unsigned int rxines          : 1;
} avr32_usb_upcon2set_t;



typedef struct avr32_usb_upcon3set_t {
    unsigned int                 :13;
    unsigned int rstdts          : 1;
    unsigned int pfreezes        : 1;
    unsigned int pdishdmas       : 1;
    unsigned int                 : 3;
    unsigned int nbusybkes       : 1;
    unsigned int                 : 4;
    unsigned int shortpacketies  : 1;
    unsigned int rxstalldes      : 1;
    unsigned int overfies        : 1;
    unsigned int nakedes         : 1;
    unsigned int perres          : 1;
    unsigned int txstpes         : 1;
    unsigned int txoutes         : 1;
    unsigned int rxines          : 1;
} avr32_usb_upcon3set_t;



typedef struct avr32_usb_upcon4set_t {
    unsigned int                 :13;
    unsigned int rstdts          : 1;
    unsigned int pfreezes        : 1;
    unsigned int pdishdmas       : 1;
    unsigned int                 : 3;
    unsigned int nbusybkes       : 1;
    unsigned int                 : 4;
    unsigned int shortpacketies  : 1;
    unsigned int rxstalldes      : 1;
    unsigned int overfies        : 1;
    unsigned int nakedes         : 1;
    unsigned int perres          : 1;
    unsigned int txstpes         : 1;
    unsigned int txoutes         : 1;
    unsigned int rxines          : 1;
} avr32_usb_upcon4set_t;



typedef struct avr32_usb_upcon5set_t {
    unsigned int                 :13;
    unsigned int rstdts          : 1;
    unsigned int pfreezes        : 1;
    unsigned int pdishdmas       : 1;
    unsigned int                 : 3;
    unsigned int nbusybkes       : 1;
    unsigned int                 : 4;
    unsigned int shortpacketies  : 1;
    unsigned int rxstalldes      : 1;
    unsigned int overfies        : 1;
    unsigned int nakedes         : 1;
    unsigned int perres          : 1;
    unsigned int txstpes         : 1;
    unsigned int txoutes         : 1;
    unsigned int rxines          : 1;
} avr32_usb_upcon5set_t;



typedef struct avr32_usb_upcon6set_t {
    unsigned int                 :13;
    unsigned int rstdts          : 1;
    unsigned int pfreezes        : 1;
    unsigned int pdishdmas       : 1;
    unsigned int                 : 3;
    unsigned int nbusybkes       : 1;
    unsigned int                 : 4;
    unsigned int shortpacketies  : 1;
    unsigned int rxstalldes      : 1;
    unsigned int overfies        : 1;
    unsigned int nakedes         : 1;
    unsigned int perres          : 1;
    unsigned int txstpes         : 1;
    unsigned int txoutes         : 1;
    unsigned int rxines          : 1;
} avr32_usb_upcon6set_t;



typedef struct avr32_usb_upcon7set_t {
    unsigned int                 :13;
    unsigned int rstdts          : 1;
    unsigned int pfreezes        : 1;
    unsigned int pdishdmas       : 1;
    unsigned int                 : 3;
    unsigned int nbusybkes       : 1;
    unsigned int                 : 4;
    unsigned int shortpacketies  : 1;
    unsigned int rxstalldes      : 1;
    unsigned int overfies        : 1;
    unsigned int nakedes         : 1;
    unsigned int perres          : 1;
    unsigned int txstpes         : 1;
    unsigned int txoutes         : 1;
    unsigned int rxines          : 1;
} avr32_usb_upcon7set_t;



typedef struct avr32_usb_upcon0clr_t {
    unsigned int                 :14;
    unsigned int pfreezec        : 1;
    unsigned int pdishdmac       : 1;
    unsigned int                 : 1;
    unsigned int fifoconc        : 1;
    unsigned int                 : 1;
    unsigned int nbusybkec       : 1;
    unsigned int                 : 4;
    unsigned int shortpacketiec  : 1;
    unsigned int rxstalldec      : 1;
    unsigned int overfiec        : 1;
    unsigned int nakedec         : 1;
    unsigned int perrec          : 1;
    unsigned int txstpec         : 1;
    unsigned int txoutec         : 1;
    unsigned int rxinec          : 1;
} avr32_usb_upcon0clr_t;



typedef struct avr32_usb_upcon1clr_t {
    unsigned int                 :14;
    unsigned int pfreezec        : 1;
    unsigned int pdishdmac       : 1;
    unsigned int                 : 1;
    unsigned int fifoconc        : 1;
    unsigned int                 : 1;
    unsigned int nbusybkec       : 1;
    unsigned int                 : 4;
    unsigned int shortpacketiec  : 1;
    unsigned int rxstalldec      : 1;
    unsigned int overfiec        : 1;
    unsigned int nakedec         : 1;
    unsigned int perrec          : 1;
    unsigned int txstpec         : 1;
    unsigned int txoutec         : 1;
    unsigned int rxinec          : 1;
} avr32_usb_upcon1clr_t;



typedef struct avr32_usb_upcon2clr_t {
    unsigned int                 :14;
    unsigned int pfreezec        : 1;
    unsigned int pdishdmac       : 1;
    unsigned int                 : 1;
    unsigned int fifoconc        : 1;
    unsigned int                 : 1;
    unsigned int nbusybkec       : 1;
    unsigned int                 : 4;
    unsigned int shortpacketiec  : 1;
    unsigned int rxstalldec      : 1;
    unsigned int overfiec        : 1;
    unsigned int nakedec         : 1;
    unsigned int perrec          : 1;
    unsigned int txstpec         : 1;
    unsigned int txoutec         : 1;
    unsigned int rxinec          : 1;
} avr32_usb_upcon2clr_t;



typedef struct avr32_usb_upcon3clr_t {
    unsigned int                 :14;
    unsigned int pfreezec        : 1;
    unsigned int pdishdmac       : 1;
    unsigned int                 : 1;
    unsigned int fifoconc        : 1;
    unsigned int                 : 1;
    unsigned int nbusybkec       : 1;
    unsigned int                 : 4;
    unsigned int shortpacketiec  : 1;
    unsigned int rxstalldec      : 1;
    unsigned int overfiec        : 1;
    unsigned int nakedec         : 1;
    unsigned int perrec          : 1;
    unsigned int txstpec         : 1;
    unsigned int txoutec         : 1;
    unsigned int rxinec          : 1;
} avr32_usb_upcon3clr_t;



typedef struct avr32_usb_upcon4clr_t {
    unsigned int                 :14;
    unsigned int pfreezec        : 1;
    unsigned int pdishdmac       : 1;
    unsigned int                 : 1;
    unsigned int fifoconc        : 1;
    unsigned int                 : 1;
    unsigned int nbusybkec       : 1;
    unsigned int                 : 4;
    unsigned int shortpacketiec  : 1;
    unsigned int rxstalldec      : 1;
    unsigned int overfiec        : 1;
    unsigned int nakedec         : 1;
    unsigned int perrec          : 1;
    unsigned int txstpec         : 1;
    unsigned int txoutec         : 1;
    unsigned int rxinec          : 1;
} avr32_usb_upcon4clr_t;



typedef struct avr32_usb_upcon5clr_t {
    unsigned int                 :14;
    unsigned int pfreezec        : 1;
    unsigned int pdishdmac       : 1;
    unsigned int                 : 1;
    unsigned int fifoconc        : 1;
    unsigned int                 : 1;
    unsigned int nbusybkec       : 1;
    unsigned int                 : 4;
    unsigned int shortpacketiec  : 1;
    unsigned int rxstalldec      : 1;
    unsigned int overfiec        : 1;
    unsigned int nakedec         : 1;
    unsigned int perrec          : 1;
    unsigned int txstpec         : 1;
    unsigned int txoutec         : 1;
    unsigned int rxinec          : 1;
} avr32_usb_upcon5clr_t;



typedef struct avr32_usb_upcon6clr_t {
    unsigned int                 :14;
    unsigned int pfreezec        : 1;
    unsigned int pdishdmac       : 1;
    unsigned int                 : 1;
    unsigned int fifoconc        : 1;
    unsigned int                 : 1;
    unsigned int nbusybkec       : 1;
    unsigned int                 : 4;
    unsigned int shortpacketiec  : 1;
    unsigned int rxstalldec      : 1;
    unsigned int overfiec        : 1;
    unsigned int nakedec         : 1;
    unsigned int perrec          : 1;
    unsigned int txstpec         : 1;
    unsigned int txoutec         : 1;
    unsigned int rxinec          : 1;
} avr32_usb_upcon6clr_t;



typedef struct avr32_usb_upcon7clr_t {
    unsigned int                 :14;
    unsigned int pfreezec        : 1;
    unsigned int pdishdmac       : 1;
    unsigned int                 : 1;
    unsigned int fifoconc        : 1;
    unsigned int                 : 1;
    unsigned int nbusybkec       : 1;
    unsigned int                 : 4;
    unsigned int shortpacketiec  : 1;
    unsigned int rxstalldec      : 1;
    unsigned int overfiec        : 1;
    unsigned int nakedec         : 1;
    unsigned int perrec          : 1;
    unsigned int txstpec         : 1;
    unsigned int txoutec         : 1;
    unsigned int rxinec          : 1;
} avr32_usb_upcon7clr_t;



typedef struct avr32_usb_upinrq0_t {
    unsigned int                 :23;
    unsigned int inmode          : 1;
    unsigned int inrq            : 8;
} avr32_usb_upinrq0_t;



typedef struct avr32_usb_upinrq1_t {
    unsigned int                 :23;
    unsigned int inmode          : 1;
    unsigned int inrq            : 8;
} avr32_usb_upinrq1_t;



typedef struct avr32_usb_upinrq2_t {
    unsigned int                 :23;
    unsigned int inmode          : 1;
    unsigned int inrq            : 8;
} avr32_usb_upinrq2_t;



typedef struct avr32_usb_upinrq3_t {
    unsigned int                 :23;
    unsigned int inmode          : 1;
    unsigned int inrq            : 8;
} avr32_usb_upinrq3_t;



typedef struct avr32_usb_upinrq4_t {
    unsigned int                 :23;
    unsigned int inmode          : 1;
    unsigned int inrq            : 8;
} avr32_usb_upinrq4_t;



typedef struct avr32_usb_upinrq5_t {
    unsigned int                 :23;
    unsigned int inmode          : 1;
    unsigned int inrq            : 8;
} avr32_usb_upinrq5_t;



typedef struct avr32_usb_upinrq6_t {
    unsigned int                 :23;
    unsigned int inmode          : 1;
    unsigned int inrq            : 8;
} avr32_usb_upinrq6_t;



typedef struct avr32_usb_upinrq7_t {
    unsigned int                 :23;
    unsigned int inmode          : 1;
    unsigned int inrq            : 8;
} avr32_usb_upinrq7_t;



typedef struct avr32_usb_uperr0_t {
    unsigned int                 :25;
    unsigned int counter         : 2;
    unsigned int crc16           : 1;
    unsigned int timeout         : 1;
    unsigned int pid             : 1;
    unsigned int datapid         : 1;
    unsigned int datatgl         : 1;
} avr32_usb_uperr0_t;



typedef struct avr32_usb_uperr1_t {
    unsigned int                 :25;
    unsigned int counter         : 2;
    unsigned int crc16           : 1;
    unsigned int timeout         : 1;
    unsigned int pid             : 1;
    unsigned int datapid         : 1;
    unsigned int datatgl         : 1;
} avr32_usb_uperr1_t;



typedef struct avr32_usb_uperr2_t {
    unsigned int                 :25;
    unsigned int counter         : 2;
    unsigned int crc16           : 1;
    unsigned int timeout         : 1;
    unsigned int pid             : 1;
    unsigned int datapid         : 1;
    unsigned int datatgl         : 1;
} avr32_usb_uperr2_t;



typedef struct avr32_usb_uperr3_t {
    unsigned int                 :25;
    unsigned int counter         : 2;
    unsigned int crc16           : 1;
    unsigned int timeout         : 1;
    unsigned int pid             : 1;
    unsigned int datapid         : 1;
    unsigned int datatgl         : 1;
} avr32_usb_uperr3_t;



typedef struct avr32_usb_uperr4_t {
    unsigned int                 :25;
    unsigned int counter         : 2;
    unsigned int crc16           : 1;
    unsigned int timeout         : 1;
    unsigned int pid             : 1;
    unsigned int datapid         : 1;
    unsigned int datatgl         : 1;
} avr32_usb_uperr4_t;



typedef struct avr32_usb_uperr5_t {
    unsigned int                 :25;
    unsigned int counter         : 2;
    unsigned int crc16           : 1;
    unsigned int timeout         : 1;
    unsigned int pid             : 1;
    unsigned int datapid         : 1;
    unsigned int datatgl         : 1;
} avr32_usb_uperr5_t;



typedef struct avr32_usb_uperr6_t {
    unsigned int                 :25;
    unsigned int counter         : 2;
    unsigned int crc16           : 1;
    unsigned int timeout         : 1;
    unsigned int pid             : 1;
    unsigned int datapid         : 1;
    unsigned int datatgl         : 1;
} avr32_usb_uperr6_t;



typedef struct avr32_usb_uperr7_t {
    unsigned int                 :25;
    unsigned int counter         : 2;
    unsigned int crc16           : 1;
    unsigned int timeout         : 1;
    unsigned int pid             : 1;
    unsigned int datapid         : 1;
    unsigned int datatgl         : 1;
} avr32_usb_uperr7_t;



typedef struct avr32_usb_uhdma1_nextdesc_t {
    unsigned int nxt_desc_addr   :28;
    unsigned int                 : 4;
} avr32_usb_uhdma1_nextdesc_t;



typedef struct avr32_usb_uhdma1_control_t {
    unsigned int ch_byte_length  :16;
    unsigned int                 : 8;
    unsigned int burst_lock_en   : 1;
    unsigned int desc_ld_irq_en  : 1;
    unsigned int eobuff_irq_en   : 1;
    unsigned int eot_irq_en      : 1;
    unsigned int dmaend_en       : 1;
    unsigned int buff_close_in_en : 1;
    unsigned int ld_nxt_ch_desc_en : 1;
    unsigned int ch_en           : 1;
} avr32_usb_uhdma1_control_t;



typedef struct avr32_usb_uhdma1_status_t {
    unsigned int ch_byte_cnt     :16;
    unsigned int                 : 9;
    unsigned int desc_ld_sta     : 1;
    unsigned int eoch_buff_sta   : 1;
    unsigned int eot_sta         : 1;
    unsigned int                 : 2;
    unsigned int ch_active       : 1;
    unsigned int ch_en           : 1;
} avr32_usb_uhdma1_status_t;



typedef struct avr32_usb_uhdma2_nextdesc_t {
    unsigned int nxt_desc_addr   :28;
    unsigned int                 : 4;
} avr32_usb_uhdma2_nextdesc_t;



typedef struct avr32_usb_uhdma2_control_t {
    unsigned int ch_byte_length  :16;
    unsigned int                 : 8;
    unsigned int burst_lock_en   : 1;
    unsigned int desc_ld_irq_en  : 1;
    unsigned int eobuff_irq_en   : 1;
    unsigned int eot_irq_en      : 1;
    unsigned int dmaend_en       : 1;
    unsigned int buff_close_in_en : 1;
    unsigned int ld_nxt_ch_desc_en : 1;
    unsigned int ch_en           : 1;
} avr32_usb_uhdma2_control_t;



typedef struct avr32_usb_uhdma2_status_t {
    unsigned int ch_byte_cnt     :16;
    unsigned int                 : 9;
    unsigned int desc_ld_sta     : 1;
    unsigned int eoch_buff_sta   : 1;
    unsigned int eot_sta         : 1;
    unsigned int                 : 2;
    unsigned int ch_active       : 1;
    unsigned int ch_en           : 1;
} avr32_usb_uhdma2_status_t;



typedef struct avr32_usb_uhdma3_nextdesc_t {
    unsigned int nxt_desc_addr   :28;
    unsigned int                 : 4;
} avr32_usb_uhdma3_nextdesc_t;



typedef struct avr32_usb_uhdma3_control_t {
    unsigned int ch_byte_length  :16;
    unsigned int                 : 8;
    unsigned int burst_lock_en   : 1;
    unsigned int desc_ld_irq_en  : 1;
    unsigned int eobuff_irq_en   : 1;
    unsigned int eot_irq_en      : 1;
    unsigned int dmaend_en       : 1;
    unsigned int buff_close_in_en : 1;
    unsigned int ld_nxt_ch_desc_en : 1;
    unsigned int ch_en           : 1;
} avr32_usb_uhdma3_control_t;



typedef struct avr32_usb_uhdma3_status_t {
    unsigned int ch_byte_cnt     :16;
    unsigned int                 : 9;
    unsigned int desc_ld_sta     : 1;
    unsigned int eoch_buff_sta   : 1;
    unsigned int eot_sta         : 1;
    unsigned int                 : 2;
    unsigned int ch_active       : 1;
    unsigned int ch_en           : 1;
} avr32_usb_uhdma3_status_t;



typedef struct avr32_usb_uhdma4_nextdesc_t {
    unsigned int nxt_desc_addr   :28;
    unsigned int                 : 4;
} avr32_usb_uhdma4_nextdesc_t;



typedef struct avr32_usb_uhdma4_control_t {
    unsigned int ch_byte_length  :16;
    unsigned int                 : 8;
    unsigned int burst_lock_en   : 1;
    unsigned int desc_ld_irq_en  : 1;
    unsigned int eobuff_irq_en   : 1;
    unsigned int eot_irq_en      : 1;
    unsigned int dmaend_en       : 1;
    unsigned int buff_close_in_en : 1;
    unsigned int ld_nxt_ch_desc_en : 1;
    unsigned int ch_en           : 1;
} avr32_usb_uhdma4_control_t;



typedef struct avr32_usb_uhdma4_status_t {
    unsigned int ch_byte_cnt     :16;
    unsigned int                 : 9;
    unsigned int desc_ld_sta     : 1;
    unsigned int eoch_buff_sta   : 1;
    unsigned int eot_sta         : 1;
    unsigned int                 : 2;
    unsigned int ch_active       : 1;
    unsigned int ch_en           : 1;
} avr32_usb_uhdma4_status_t;



typedef struct avr32_usb_uhdma5_nextdesc_t {
    unsigned int nxt_desc_addr   :28;
    unsigned int                 : 4;
} avr32_usb_uhdma5_nextdesc_t;



typedef struct avr32_usb_uhdma5_control_t {
    unsigned int ch_byte_length  :16;
    unsigned int                 : 8;
    unsigned int burst_lock_en   : 1;
    unsigned int desc_ld_irq_en  : 1;
    unsigned int eobuff_irq_en   : 1;
    unsigned int eot_irq_en      : 1;
    unsigned int dmaend_en       : 1;
    unsigned int buff_close_in_en : 1;
    unsigned int ld_nxt_ch_desc_en : 1;
    unsigned int ch_en           : 1;
} avr32_usb_uhdma5_control_t;



typedef struct avr32_usb_uhdma5_status_t {
    unsigned int ch_byte_cnt     :16;
    unsigned int                 : 9;
    unsigned int desc_ld_sta     : 1;
    unsigned int eoch_buff_sta   : 1;
    unsigned int eot_sta         : 1;
    unsigned int                 : 2;
    unsigned int ch_active       : 1;
    unsigned int ch_en           : 1;
} avr32_usb_uhdma5_status_t;



typedef struct avr32_usb_uhdma6_nextdesc_t {
    unsigned int nxt_desc_addr   :28;
    unsigned int                 : 4;
} avr32_usb_uhdma6_nextdesc_t;



typedef struct avr32_usb_uhdma6_control_t {
    unsigned int ch_byte_length  :16;
    unsigned int                 : 8;
    unsigned int burst_lock_en   : 1;
    unsigned int desc_ld_irq_en  : 1;
    unsigned int eobuff_irq_en   : 1;
    unsigned int eot_irq_en      : 1;
    unsigned int dmaend_en       : 1;
    unsigned int buff_close_in_en : 1;
    unsigned int ld_nxt_ch_desc_en : 1;
    unsigned int ch_en           : 1;
} avr32_usb_uhdma6_control_t;



typedef struct avr32_usb_uhdma6_status_t {
    unsigned int ch_byte_cnt     :16;
    unsigned int                 : 9;
    unsigned int desc_ld_sta     : 1;
    unsigned int eoch_buff_sta   : 1;
    unsigned int eot_sta         : 1;
    unsigned int                 : 2;
    unsigned int ch_active       : 1;
    unsigned int ch_en           : 1;
} avr32_usb_uhdma6_status_t;



typedef struct avr32_usb_uhdma7_nextdesc_t {
    unsigned int nxt_desc_addr   :28;
    unsigned int                 : 4;
} avr32_usb_uhdma7_nextdesc_t;



typedef struct avr32_usb_uhdma7_control_t {
    unsigned int ch_byte_length  :16;
    unsigned int                 : 8;
    unsigned int burst_lock_en   : 1;
    unsigned int desc_ld_irq_en  : 1;
    unsigned int eobuff_irq_en   : 1;
    unsigned int eot_irq_en      : 1;
    unsigned int dmaend_en       : 1;
    unsigned int buff_close_in_en : 1;
    unsigned int ld_nxt_ch_desc_en : 1;
    unsigned int ch_en           : 1;
} avr32_usb_uhdma7_control_t;



typedef struct avr32_usb_uhdma7_status_t {
    unsigned int ch_byte_cnt     :16;
    unsigned int                 : 9;
    unsigned int desc_ld_sta     : 1;
    unsigned int eoch_buff_sta   : 1;
    unsigned int eot_sta         : 1;
    unsigned int                 : 2;
    unsigned int ch_active       : 1;
    unsigned int ch_en           : 1;
} avr32_usb_uhdma7_status_t;



typedef struct avr32_usb_usbcon_t {
    unsigned int                 : 6;
    unsigned int uimod           : 1;
    unsigned int uide            : 1;
    unsigned int                 : 1;
    unsigned int unlock          : 1;
    unsigned int timpage         : 2;
    unsigned int                 : 2;
    unsigned int timvalue        : 2;
    unsigned int usbe            : 1;
    unsigned int frzclk          : 1;
    unsigned int vbuspo          : 1;
    unsigned int otgpade         : 1;
    unsigned int hnpreq          : 1;
    unsigned int srpreq          : 1;
    unsigned int srpsel          : 1;
    unsigned int vbushwc         : 1;
    unsigned int stoe            : 1;
    unsigned int hnperre         : 1;
    unsigned int roleexe         : 1;
    unsigned int bcerre          : 1;
    unsigned int vberre          : 1;
    unsigned int srpe            : 1;
    unsigned int vbuste          : 1;
    unsigned int idte            : 1;
} avr32_usb_usbcon_t;



typedef struct avr32_usb_usbsta_t {
    unsigned int                 :17;
    unsigned int clkusable       : 1;
    unsigned int speed           : 2;
    unsigned int vbus            : 1;
    unsigned int id              : 1;
    unsigned int vbusrq          : 1;
    unsigned int                 : 1;
    unsigned int stoi            : 1;
    unsigned int hnperri         : 1;
    unsigned int roleexi         : 1;
    unsigned int bcerri          : 1;
    unsigned int vberri          : 1;
    unsigned int srpi            : 1;
    unsigned int vbusti          : 1;
    unsigned int idti            : 1;
} avr32_usb_usbsta_t;



typedef struct avr32_usb_usbstaclr_t {
    unsigned int                 :22;
    unsigned int vbusrqc         : 1;
    unsigned int                 : 1;
    unsigned int stoic           : 1;
    unsigned int hnperric        : 1;
    unsigned int roleexic        : 1;
    unsigned int bcerric         : 1;
    unsigned int vberric         : 1;
    unsigned int srpic           : 1;
    unsigned int vbustic         : 1;
    unsigned int idtic           : 1;
} avr32_usb_usbstaclr_t;



typedef struct avr32_usb_usbstaset_t {
    unsigned int                 :22;
    unsigned int vbusrqs         : 1;
    unsigned int                 : 1;
    unsigned int stois           : 1;
    unsigned int hnperris        : 1;
    unsigned int roleexis        : 1;
    unsigned int bcerris         : 1;
    unsigned int vberris         : 1;
    unsigned int srpis           : 1;
    unsigned int vbustis         : 1;
    unsigned int idtis           : 1;
} avr32_usb_usbstaset_t;



typedef struct avr32_usb_uatst1_t {
    unsigned int loadsofcnt      : 1;
    unsigned int sofcntmax       : 7;
    unsigned int loadcntb        : 1;
    unsigned int                 : 1;
    unsigned int counterb        : 6;
    unsigned int loadcnta        : 1;
    unsigned int countera        :15;
} avr32_usb_uatst1_t;



typedef struct avr32_usb_uatst2_t {
    unsigned int                 :22;
    unsigned int removepuontx    : 1;
    unsigned int utmireset       : 1;
    unsigned int forcehsresetto50ms : 1;
    unsigned int hosthsdisconnectdisable : 1;
    unsigned int bypassdpll      : 1;
    unsigned int forcesuspendmto1 : 1;
    unsigned int disbalegatedclock : 1;
    unsigned int loopbackmode    : 1;
    unsigned int hsserialmode    : 1;
    unsigned int fulldetachen    : 1;
} avr32_usb_uatst2_t;



typedef struct avr32_usb_uvers_t {
    unsigned int                 :13;
    unsigned int metal_fix_num   : 3;
    unsigned int version_num     :16;
} avr32_usb_uvers_t;



typedef struct avr32_usb_ufeatures_t {
    unsigned int en_high_bd_iso_ept_15 : 1;
    unsigned int en_high_bd_iso_ept_14 : 1;
    unsigned int en_high_bd_iso_ept_13 : 1;
    unsigned int en_high_bd_iso_ept_12 : 1;
    unsigned int en_high_bd_iso_ept_11 : 1;
    unsigned int en_high_bd_iso_ept_10 : 1;
    unsigned int en_high_bd_iso_ept_9 : 1;
    unsigned int en_high_bd_iso_ept_8 : 1;
    unsigned int en_high_bd_iso_ept_7 : 1;
    unsigned int en_high_bd_iso_ept_6 : 1;
    unsigned int en_high_bd_iso_ept_5 : 1;
    unsigned int en_high_bd_iso_ept_4 : 1;
    unsigned int en_high_bd_iso_ept_3 : 1;
    unsigned int en_high_bd_iso_ept_2 : 1;
    unsigned int en_high_bd_iso_ept_1 : 1;
    unsigned int data_bus_8_16   : 1;
    unsigned int byte_write_dpram : 1;
    unsigned int fifo_max_size   : 3;
    unsigned int dma_fifo_word_depth : 4;
    unsigned int dma_buffer_size : 1;
    unsigned int dma_channel_nbr : 3;
    unsigned int ept_nbr_max     : 4;
} avr32_usb_ufeatures_t;



typedef struct avr32_usb_usbfsm_t {
    unsigned int                 :28;
    unsigned int drdstate        : 4;
} avr32_usb_usbfsm_t;



typedef struct avr32_usb_t {
  union {
          unsigned long                  udcon     ;//0x0000
          avr32_usb_udcon_t              UDCON     ;
  };
  union {
    const unsigned long                  udint     ;//0x0004
    const avr32_usb_udint_t              UDINT     ;
  };
  union {
          unsigned long                  udintclr  ;//0x0008
          avr32_usb_udintclr_t           UDINTCLR  ;
  };
  union {
          unsigned long                  udintset  ;//0x000c
          avr32_usb_udintset_t           UDINTSET  ;
  };
  union {
    const unsigned long                  udinte    ;//0x0010
    const avr32_usb_udinte_t             UDINTE    ;
  };
  union {
          unsigned long                  udinteclr ;//0x0014
          avr32_usb_udinteclr_t          UDINTECLR ;
  };
  union {
          unsigned long                  udinteset ;//0x0018
          avr32_usb_udinteset_t          UDINTESET ;
  };
  union {
          unsigned long                  uerst     ;//0x001c
          avr32_usb_uerst_t              UERST     ;
  };
  union {
    const unsigned long                  udfnum    ;//0x0020
    const avr32_usb_udfnum_t             UDFNUM    ;
  };
  union {
          unsigned long                  udtst1    ;//0x0024
          avr32_usb_udtst1_t             UDTST1    ;
  };
  union {
          unsigned long                  udtst2    ;//0x0028
          avr32_usb_udtst2_t             UDTST2    ;
  };
    const unsigned long                  udvers    ;//0x002c
  union {
    const unsigned long                  udfeatures;//0x0030
    const avr32_usb_udfeatures_t         UDFEATURES;
  };
    const unsigned long                  udaddrsize;//0x0034
    const unsigned long                  udname1   ;//0x0038
    const unsigned long                  udname2   ;//0x003c
          unsigned int                   :32       ;//0x0040
          unsigned int                   :32       ;//0x0044
          unsigned int                   :32       ;//0x0048
          unsigned int                   :32       ;//0x004c
          unsigned int                   :32       ;//0x0050
          unsigned int                   :32       ;//0x0054
          unsigned int                   :32       ;//0x0058
          unsigned int                   :32       ;//0x005c
          unsigned int                   :32       ;//0x0060
          unsigned int                   :32       ;//0x0064
          unsigned int                   :32       ;//0x0068
          unsigned int                   :32       ;//0x006c
          unsigned int                   :32       ;//0x0070
          unsigned int                   :32       ;//0x0074
          unsigned int                   :32       ;//0x0078
          unsigned int                   :32       ;//0x007c
          unsigned int                   :32       ;//0x0080
          unsigned int                   :32       ;//0x0084
          unsigned int                   :32       ;//0x0088
          unsigned int                   :32       ;//0x008c
          unsigned int                   :32       ;//0x0090
          unsigned int                   :32       ;//0x0094
          unsigned int                   :32       ;//0x0098
          unsigned int                   :32       ;//0x009c
          unsigned int                   :32       ;//0x00a0
          unsigned int                   :32       ;//0x00a4
          unsigned int                   :32       ;//0x00a8
          unsigned int                   :32       ;//0x00ac
          unsigned int                   :32       ;//0x00b0
          unsigned int                   :32       ;//0x00b4
          unsigned int                   :32       ;//0x00b8
          unsigned int                   :32       ;//0x00bc
          unsigned int                   :32       ;//0x00c0
          unsigned int                   :32       ;//0x00c4
          unsigned int                   :32       ;//0x00c8
          unsigned int                   :32       ;//0x00cc
          unsigned int                   :32       ;//0x00d0
          unsigned int                   :32       ;//0x00d4
          unsigned int                   :32       ;//0x00d8
          unsigned int                   :32       ;//0x00dc
          unsigned int                   :32       ;//0x00e0
          unsigned int                   :32       ;//0x00e4
          unsigned int                   :32       ;//0x00e8
          unsigned int                   :32       ;//0x00ec
          unsigned int                   :32       ;//0x00f0
          unsigned int                   :32       ;//0x00f4
          unsigned int                   :32       ;//0x00f8
          unsigned int                   :32       ;//0x00fc
  union {
          unsigned long                  uecfg0    ;//0x0100
          avr32_usb_uecfg0_t             UECFG0    ;
  };
  union {
          unsigned long                  uecfg1    ;//0x0104
          avr32_usb_uecfg1_t             UECFG1    ;
  };
  union {
          unsigned long                  uecfg2    ;//0x0108
          avr32_usb_uecfg2_t             UECFG2    ;
  };
  union {
          unsigned long                  uecfg3    ;//0x010c
          avr32_usb_uecfg3_t             UECFG3    ;
  };
  union {
          unsigned long                  uecfg4    ;//0x0110
          avr32_usb_uecfg4_t             UECFG4    ;
  };
  union {
          unsigned long                  uecfg5    ;//0x0114
          avr32_usb_uecfg5_t             UECFG5    ;
  };
  union {
          unsigned long                  uecfg6    ;//0x0118
          avr32_usb_uecfg6_t             UECFG6    ;
  };
  union {
          unsigned long                  uecfg7    ;//0x011c
          avr32_usb_uecfg7_t             UECFG7    ;
  };
          unsigned int                   :32       ;//0x0120
          unsigned int                   :32       ;//0x0124
          unsigned int                   :32       ;//0x0128
          unsigned int                   :32       ;//0x012c
  union {
    const unsigned long                  uesta0    ;//0x0130
    const avr32_usb_uesta0_t             UESTA0    ;
  };
  union {
    const unsigned long                  uesta1    ;//0x0134
    const avr32_usb_uesta1_t             UESTA1    ;
  };
  union {
    const unsigned long                  uesta2    ;//0x0138
    const avr32_usb_uesta2_t             UESTA2    ;
  };
  union {
    const unsigned long                  uesta3    ;//0x013c
    const avr32_usb_uesta3_t             UESTA3    ;
  };
  union {
    const unsigned long                  uesta4    ;//0x0140
    const avr32_usb_uesta4_t             UESTA4    ;
  };
  union {
    const unsigned long                  uesta5    ;//0x0144
    const avr32_usb_uesta5_t             UESTA5    ;
  };
  union {
    const unsigned long                  uesta6    ;//0x0148
    const avr32_usb_uesta6_t             UESTA6    ;
  };
  union {
    const unsigned long                  uesta7    ;//0x014c
    const avr32_usb_uesta7_t             UESTA7    ;
  };
          unsigned int                   :32       ;//0x0150
          unsigned int                   :32       ;//0x0154
          unsigned int                   :32       ;//0x0158
          unsigned int                   :32       ;//0x015c
  union {
          unsigned long                  uesta0clr ;//0x0160
          avr32_usb_uesta0clr_t          UESTA0CLR ;
  };
  union {
          unsigned long                  uesta1clr ;//0x0164
          avr32_usb_uesta1clr_t          UESTA1CLR ;
  };
  union {
          unsigned long                  uesta2clr ;//0x0168
          avr32_usb_uesta2clr_t          UESTA2CLR ;
  };
  union {
          unsigned long                  uesta3clr ;//0x016c
          avr32_usb_uesta3clr_t          UESTA3CLR ;
  };
  union {
          unsigned long                  uesta4clr ;//0x0170
          avr32_usb_uesta4clr_t          UESTA4CLR ;
  };
  union {
          unsigned long                  uesta5clr ;//0x0174
          avr32_usb_uesta5clr_t          UESTA5CLR ;
  };
  union {
          unsigned long                  uesta6clr ;//0x0178
          avr32_usb_uesta6clr_t          UESTA6CLR ;
  };
  union {
          unsigned long                  uesta7clr ;//0x017c
          avr32_usb_uesta7clr_t          UESTA7CLR ;
  };
          unsigned int                   :32       ;//0x0180
          unsigned int                   :32       ;//0x0184
          unsigned int                   :32       ;//0x0188
          unsigned int                   :32       ;//0x018c
  union {
          unsigned long                  uesta0set ;//0x0190
          avr32_usb_uesta0set_t          UESTA0SET ;
  };
  union {
          unsigned long                  uesta1set ;//0x0194
          avr32_usb_uesta1set_t          UESTA1SET ;
  };
  union {
          unsigned long                  uesta2set ;//0x0198
          avr32_usb_uesta2set_t          UESTA2SET ;
  };
  union {
          unsigned long                  uesta3set ;//0x019c
          avr32_usb_uesta3set_t          UESTA3SET ;
  };
  union {
          unsigned long                  uesta4set ;//0x01a0
          avr32_usb_uesta4set_t          UESTA4SET ;
  };
  union {
          unsigned long                  uesta5set ;//0x01a4
          avr32_usb_uesta5set_t          UESTA5SET ;
  };
  union {
          unsigned long                  uesta6set ;//0x01a8
          avr32_usb_uesta6set_t          UESTA6SET ;
  };
  union {
          unsigned long                  uesta7set ;//0x01ac
          avr32_usb_uesta7set_t          UESTA7SET ;
  };
          unsigned int                   :32       ;//0x01b0
          unsigned int                   :32       ;//0x01b4
          unsigned int                   :32       ;//0x01b8
          unsigned int                   :32       ;//0x01bc
  union {
    const unsigned long                  uecon0    ;//0x01c0
    const avr32_usb_uecon0_t             UECON0    ;
  };
  union {
    const unsigned long                  uecon1    ;//0x01c4
    const avr32_usb_uecon1_t             UECON1    ;
  };
  union {
    const unsigned long                  uecon2    ;//0x01c8
    const avr32_usb_uecon2_t             UECON2    ;
  };
  union {
    const unsigned long                  uecon3    ;//0x01cc
    const avr32_usb_uecon3_t             UECON3    ;
  };
  union {
    const unsigned long                  uecon4    ;//0x01d0
    const avr32_usb_uecon4_t             UECON4    ;
  };
  union {
    const unsigned long                  uecon5    ;//0x01d4
    const avr32_usb_uecon5_t             UECON5    ;
  };
  union {
    const unsigned long                  uecon6    ;//0x01d8
    const avr32_usb_uecon6_t             UECON6    ;
  };
  union {
    const unsigned long                  uecon7    ;//0x01dc
    const avr32_usb_uecon7_t             UECON7    ;
  };
          unsigned int                   :32       ;//0x01e0
          unsigned int                   :32       ;//0x01e4
          unsigned int                   :32       ;//0x01e8
          unsigned int                   :32       ;//0x01ec
  union {
          unsigned long                  uecon0set ;//0x01f0
          avr32_usb_uecon0set_t          UECON0SET ;
  };
  union {
          unsigned long                  uecon1set ;//0x01f4
          avr32_usb_uecon1set_t          UECON1SET ;
  };
  union {
          unsigned long                  uecon2set ;//0x01f8
          avr32_usb_uecon2set_t          UECON2SET ;
  };
  union {
          unsigned long                  uecon3set ;//0x01fc
          avr32_usb_uecon3set_t          UECON3SET ;
  };
  union {
          unsigned long                  uecon4set ;//0x0200
          avr32_usb_uecon4set_t          UECON4SET ;
  };
  union {
          unsigned long                  uecon5set ;//0x0204
          avr32_usb_uecon5set_t          UECON5SET ;
  };
  union {
          unsigned long                  uecon6set ;//0x0208
          avr32_usb_uecon6set_t          UECON6SET ;
  };
  union {
          unsigned long                  uecon7set ;//0x020c
          avr32_usb_uecon7set_t          UECON7SET ;
  };
          unsigned int                   :32       ;//0x0210
          unsigned int                   :32       ;//0x0214
          unsigned int                   :32       ;//0x0218
          unsigned int                   :32       ;//0x021c
  union {
          unsigned long                  uecon0clr ;//0x0220
          avr32_usb_uecon0clr_t          UECON0CLR ;
  };
  union {
          unsigned long                  uecon1clr ;//0x0224
          avr32_usb_uecon1clr_t          UECON1CLR ;
  };
  union {
          unsigned long                  uecon2clr ;//0x0228
          avr32_usb_uecon2clr_t          UECON2CLR ;
  };
  union {
          unsigned long                  uecon3clr ;//0x022c
          avr32_usb_uecon3clr_t          UECON3CLR ;
  };
  union {
          unsigned long                  uecon4clr ;//0x0230
          avr32_usb_uecon4clr_t          UECON4CLR ;
  };
  union {
          unsigned long                  uecon5clr ;//0x0234
          avr32_usb_uecon5clr_t          UECON5CLR ;
  };
  union {
          unsigned long                  uecon6clr ;//0x0238
          avr32_usb_uecon6clr_t          UECON6CLR ;
  };
  union {
          unsigned long                  uecon7clr ;//0x023c
          avr32_usb_uecon7clr_t          UECON7CLR ;
  };
          unsigned int                   :32       ;//0x0240
          unsigned int                   :32       ;//0x0244
          unsigned int                   :32       ;//0x0248
          unsigned int                   :32       ;//0x024c
          unsigned long                  uedat0    ;//0x0250
          unsigned long                  uedat1    ;//0x0254
          unsigned long                  uedat2    ;//0x0258
          unsigned long                  uedat3    ;//0x025c
          unsigned long                  uedat4    ;//0x0260
          unsigned long                  uedat5    ;//0x0264
          unsigned long                  uedat6    ;//0x0268
          unsigned long                  uedat7    ;//0x026c
          unsigned int                   :32       ;//0x0270
          unsigned int                   :32       ;//0x0274
          unsigned int                   :32       ;//0x0278
          unsigned int                   :32       ;//0x027c
          unsigned int                   :32       ;//0x0280
          unsigned int                   :32       ;//0x0284
          unsigned int                   :32       ;//0x0288
          unsigned int                   :32       ;//0x028c
          unsigned int                   :32       ;//0x0290
          unsigned int                   :32       ;//0x0294
          unsigned int                   :32       ;//0x0298
          unsigned int                   :32       ;//0x029c
          unsigned int                   :32       ;//0x02a0
          unsigned int                   :32       ;//0x02a4
          unsigned int                   :32       ;//0x02a8
          unsigned int                   :32       ;//0x02ac
          unsigned int                   :32       ;//0x02b0
          unsigned int                   :32       ;//0x02b4
          unsigned int                   :32       ;//0x02b8
          unsigned int                   :32       ;//0x02bc
          unsigned int                   :32       ;//0x02c0
          unsigned int                   :32       ;//0x02c4
          unsigned int                   :32       ;//0x02c8
          unsigned int                   :32       ;//0x02cc
          unsigned int                   :32       ;//0x02d0
          unsigned int                   :32       ;//0x02d4
          unsigned int                   :32       ;//0x02d8
          unsigned int                   :32       ;//0x02dc
          unsigned int                   :32       ;//0x02e0
          unsigned int                   :32       ;//0x02e4
          unsigned int                   :32       ;//0x02e8
          unsigned int                   :32       ;//0x02ec
          unsigned int                   :32       ;//0x02f0
          unsigned int                   :32       ;//0x02f4
          unsigned int                   :32       ;//0x02f8
          unsigned int                   :32       ;//0x02fc
          unsigned int                   :32       ;//0x0300
          unsigned int                   :32       ;//0x0304
          unsigned int                   :32       ;//0x0308
          unsigned int                   :32       ;//0x030c
  union {
          unsigned long                  uddma1_nextdesc;//0x0310
          avr32_usb_uddma1_nextdesc_t    UDDMA1_NEXTDESC;
  };
          unsigned long                  uddma1_addr;//0x0314
  union {
          unsigned long                  uddma1_control;//0x0318
          avr32_usb_uddma1_control_t     UDDMA1_CONTROL;
  };
  union {
          unsigned long                  uddma1_status;//0x031c
          avr32_usb_uddma1_status_t      UDDMA1_STATUS;
  };
  union {
          unsigned long                  uddma2_nextdesc;//0x0320
          avr32_usb_uddma2_nextdesc_t    UDDMA2_NEXTDESC;
  };
          unsigned long                  uddma2_addr;//0x0324
  union {
          unsigned long                  uddma2_control;//0x0328
          avr32_usb_uddma2_control_t     UDDMA2_CONTROL;
  };
  union {
          unsigned long                  uddma2_status;//0x032c
          avr32_usb_uddma2_status_t      UDDMA2_STATUS;
  };
  union {
          unsigned long                  uddma3_nextdesc;//0x0330
          avr32_usb_uddma3_nextdesc_t    UDDMA3_NEXTDESC;
  };
          unsigned long                  uddma3_addr;//0x0334
  union {
          unsigned long                  uddma3_control;//0x0338
          avr32_usb_uddma3_control_t     UDDMA3_CONTROL;
  };
  union {
          unsigned long                  uddma3_status;//0x033c
          avr32_usb_uddma3_status_t      UDDMA3_STATUS;
  };
  union {
          unsigned long                  uddma4_nextdesc;//0x0340
          avr32_usb_uddma4_nextdesc_t    UDDMA4_NEXTDESC;
  };
          unsigned long                  uddma4_addr;//0x0344
  union {
          unsigned long                  uddma4_control;//0x0348
          avr32_usb_uddma4_control_t     UDDMA4_CONTROL;
  };
  union {
          unsigned long                  uddma4_status;//0x034c
          avr32_usb_uddma4_status_t      UDDMA4_STATUS;
  };
  union {
          unsigned long                  uddma5_nextdesc;//0x0350
          avr32_usb_uddma5_nextdesc_t    UDDMA5_NEXTDESC;
  };
          unsigned long                  uddma5_addr;//0x0354
  union {
          unsigned long                  uddma5_control;//0x0358
          avr32_usb_uddma5_control_t     UDDMA5_CONTROL;
  };
  union {
          unsigned long                  uddma5_status;//0x035c
          avr32_usb_uddma5_status_t      UDDMA5_STATUS;
  };
  union {
          unsigned long                  uddma6_nextdesc;//0x0360
          avr32_usb_uddma6_nextdesc_t    UDDMA6_NEXTDESC;
  };
          unsigned long                  uddma6_addr;//0x0364
  union {
          unsigned long                  uddma6_control;//0x0368
          avr32_usb_uddma6_control_t     UDDMA6_CONTROL;
  };
  union {
          unsigned long                  uddma6_status;//0x036c
          avr32_usb_uddma6_status_t      UDDMA6_STATUS;
  };
  union {
          unsigned long                  uddma7_nextdesc;//0x0370
          avr32_usb_uddma7_nextdesc_t    UDDMA7_NEXTDESC;
  };
          unsigned long                  uddma7_addr;//0x0374
  union {
          unsigned long                  uddma7_control;//0x0378
          avr32_usb_uddma7_control_t     UDDMA7_CONTROL;
  };
  union {
          unsigned long                  uddma7_status;//0x037c
          avr32_usb_uddma7_status_t      UDDMA7_STATUS;
  };
          unsigned int                   :32       ;//0x0380
          unsigned int                   :32       ;//0x0384
          unsigned int                   :32       ;//0x0388
          unsigned int                   :32       ;//0x038c
          unsigned int                   :32       ;//0x0390
          unsigned int                   :32       ;//0x0394
          unsigned int                   :32       ;//0x0398
          unsigned int                   :32       ;//0x039c
          unsigned int                   :32       ;//0x03a0
          unsigned int                   :32       ;//0x03a4
          unsigned int                   :32       ;//0x03a8
          unsigned int                   :32       ;//0x03ac
          unsigned int                   :32       ;//0x03b0
          unsigned int                   :32       ;//0x03b4
          unsigned int                   :32       ;//0x03b8
          unsigned int                   :32       ;//0x03bc
          unsigned int                   :32       ;//0x03c0
          unsigned int                   :32       ;//0x03c4
          unsigned int                   :32       ;//0x03c8
          unsigned int                   :32       ;//0x03cc
          unsigned int                   :32       ;//0x03d0
          unsigned int                   :32       ;//0x03d4
          unsigned int                   :32       ;//0x03d8
          unsigned int                   :32       ;//0x03dc
          unsigned int                   :32       ;//0x03e0
          unsigned int                   :32       ;//0x03e4
          unsigned int                   :32       ;//0x03e8
          unsigned int                   :32       ;//0x03ec
          unsigned int                   :32       ;//0x03f0
          unsigned int                   :32       ;//0x03f4
          unsigned int                   :32       ;//0x03f8
          unsigned int                   :32       ;//0x03fc
  union {
          unsigned long                  uhcon     ;//0x0400
          avr32_usb_uhcon_t              UHCON     ;
  };
  union {
    const unsigned long                  uhint     ;//0x0404
    const avr32_usb_uhint_t              UHINT     ;
  };
  union {
          unsigned long                  uhintclr  ;//0x0408
          avr32_usb_uhintclr_t           UHINTCLR  ;
  };
  union {
          unsigned long                  uhintset  ;//0x040c
          avr32_usb_uhintset_t           UHINTSET  ;
  };
  union {
    const unsigned long                  uhinte    ;//0x0410
    const avr32_usb_uhinte_t             UHINTE    ;
  };
  union {
          unsigned long                  uhinteclr ;//0x0414
          avr32_usb_uhinteclr_t          UHINTECLR ;
  };
  union {
          unsigned long                  uhinteset ;//0x0418
          avr32_usb_uhinteset_t          UHINTESET ;
  };
  union {
          unsigned long                  uprst     ;//0x041c
          avr32_usb_uprst_t              UPRST     ;
  };
  union {
          unsigned long                  uhfnum    ;//0x0420
          avr32_usb_uhfnum_t             UHFNUM    ;
  };
  union {
          unsigned long                  uhaddr1   ;//0x0424
          avr32_usb_uhaddr1_t            UHADDR1   ;
  };
  union {
          unsigned long                  uhaddr2   ;//0x0428
          avr32_usb_uhaddr2_t            UHADDR2   ;
  };
  union {
          unsigned long                  uhaddr3   ;//0x042c
          avr32_usb_uhaddr3_t            UHADDR3   ;
  };
          unsigned int                   :32       ;//0x0430
          unsigned int                   :32       ;//0x0434
          unsigned int                   :32       ;//0x0438
          unsigned int                   :32       ;//0x043c
          unsigned int                   :32       ;//0x0440
          unsigned int                   :32       ;//0x0444
          unsigned int                   :32       ;//0x0448
          unsigned int                   :32       ;//0x044c
          unsigned int                   :32       ;//0x0450
          unsigned int                   :32       ;//0x0454
          unsigned int                   :32       ;//0x0458
          unsigned int                   :32       ;//0x045c
          unsigned int                   :32       ;//0x0460
          unsigned int                   :32       ;//0x0464
          unsigned int                   :32       ;//0x0468
          unsigned int                   :32       ;//0x046c
          unsigned int                   :32       ;//0x0470
          unsigned int                   :32       ;//0x0474
          unsigned int                   :32       ;//0x0478
          unsigned int                   :32       ;//0x047c
          unsigned int                   :32       ;//0x0480
          unsigned int                   :32       ;//0x0484
          unsigned int                   :32       ;//0x0488
          unsigned int                   :32       ;//0x048c
          unsigned int                   :32       ;//0x0490
          unsigned int                   :32       ;//0x0494
          unsigned int                   :32       ;//0x0498
          unsigned int                   :32       ;//0x049c
          unsigned int                   :32       ;//0x04a0
          unsigned int                   :32       ;//0x04a4
          unsigned int                   :32       ;//0x04a8
          unsigned int                   :32       ;//0x04ac
          unsigned int                   :32       ;//0x04b0
          unsigned int                   :32       ;//0x04b4
          unsigned int                   :32       ;//0x04b8
          unsigned int                   :32       ;//0x04bc
          unsigned int                   :32       ;//0x04c0
          unsigned int                   :32       ;//0x04c4
          unsigned int                   :32       ;//0x04c8
          unsigned int                   :32       ;//0x04cc
          unsigned int                   :32       ;//0x04d0
          unsigned int                   :32       ;//0x04d4
          unsigned int                   :32       ;//0x04d8
          unsigned int                   :32       ;//0x04dc
          unsigned int                   :32       ;//0x04e0
          unsigned int                   :32       ;//0x04e4
          unsigned int                   :32       ;//0x04e8
          unsigned int                   :32       ;//0x04ec
          unsigned int                   :32       ;//0x04f0
          unsigned int                   :32       ;//0x04f4
          unsigned int                   :32       ;//0x04f8
          unsigned int                   :32       ;//0x04fc
  union {
          unsigned long                  upcfg0    ;//0x0500
          avr32_usb_upcfg0_t             UPCFG0    ;
  };
  union {
          unsigned long                  upcfg1    ;//0x0504
          avr32_usb_upcfg1_t             UPCFG1    ;
  };
  union {
          unsigned long                  upcfg2    ;//0x0508
          avr32_usb_upcfg2_t             UPCFG2    ;
  };
  union {
          unsigned long                  upcfg3    ;//0x050c
          avr32_usb_upcfg3_t             UPCFG3    ;
  };
  union {
          unsigned long                  upcfg4    ;//0x0510
          avr32_usb_upcfg4_t             UPCFG4    ;
  };
  union {
          unsigned long                  upcfg5    ;//0x0514
          avr32_usb_upcfg5_t             UPCFG5    ;
  };
  union {
          unsigned long                  upcfg6    ;//0x0518
          avr32_usb_upcfg6_t             UPCFG6    ;
  };
  union {
          unsigned long                  upcfg7    ;//0x051c
          avr32_usb_upcfg7_t             UPCFG7    ;
  };
          unsigned int                   :32       ;//0x0520
          unsigned int                   :32       ;//0x0524
          unsigned int                   :32       ;//0x0528
          unsigned int                   :32       ;//0x052c
  union {
    const unsigned long                  upsta0    ;//0x0530
    const avr32_usb_upsta0_t             UPSTA0    ;
  };
  union {
    const unsigned long                  upsta1    ;//0x0534
    const avr32_usb_upsta1_t             UPSTA1    ;
  };
  union {
    const unsigned long                  upsta2    ;//0x0538
    const avr32_usb_upsta2_t             UPSTA2    ;
  };
  union {
    const unsigned long                  upsta3    ;//0x053c
    const avr32_usb_upsta3_t             UPSTA3    ;
  };
  union {
    const unsigned long                  upsta4    ;//0x0540
    const avr32_usb_upsta4_t             UPSTA4    ;
  };
  union {
    const unsigned long                  upsta5    ;//0x0544
    const avr32_usb_upsta5_t             UPSTA5    ;
  };
  union {
    const unsigned long                  upsta6    ;//0x0548
    const avr32_usb_upsta6_t             UPSTA6    ;
  };
  union {
    const unsigned long                  upsta7    ;//0x054c
    const avr32_usb_upsta7_t             UPSTA7    ;
  };
          unsigned int                   :32       ;//0x0550
          unsigned int                   :32       ;//0x0554
          unsigned int                   :32       ;//0x0558
          unsigned int                   :32       ;//0x055c
  union {
          unsigned long                  upsta0clr ;//0x0560
          avr32_usb_upsta0clr_t          UPSTA0CLR ;
  };
  union {
          unsigned long                  upsta1clr ;//0x0564
          avr32_usb_upsta1clr_t          UPSTA1CLR ;
  };
  union {
          unsigned long                  upsta2clr ;//0x0568
          avr32_usb_upsta2clr_t          UPSTA2CLR ;
  };
  union {
          unsigned long                  upsta3clr ;//0x056c
          avr32_usb_upsta3clr_t          UPSTA3CLR ;
  };
  union {
          unsigned long                  upsta4clr ;//0x0570
          avr32_usb_upsta4clr_t          UPSTA4CLR ;
  };
  union {
          unsigned long                  upsta5clr ;//0x0574
          avr32_usb_upsta5clr_t          UPSTA5CLR ;
  };
  union {
          unsigned long                  upsta6clr ;//0x0578
          avr32_usb_upsta6clr_t          UPSTA6CLR ;
  };
  union {
          unsigned long                  upsta7clr ;//0x057c
          avr32_usb_upsta7clr_t          UPSTA7CLR ;
  };
          unsigned int                   :32       ;//0x0580
          unsigned int                   :32       ;//0x0584
          unsigned int                   :32       ;//0x0588
          unsigned int                   :32       ;//0x058c
  union {
          unsigned long                  upsta0set ;//0x0590
          avr32_usb_upsta0set_t          UPSTA0SET ;
  };
  union {
          unsigned long                  upsta1set ;//0x0594
          avr32_usb_upsta1set_t          UPSTA1SET ;
  };
  union {
          unsigned long                  upsta2set ;//0x0598
          avr32_usb_upsta2set_t          UPSTA2SET ;
  };
  union {
          unsigned long                  upsta3set ;//0x059c
          avr32_usb_upsta3set_t          UPSTA3SET ;
  };
  union {
          unsigned long                  upsta4set ;//0x05a0
          avr32_usb_upsta4set_t          UPSTA4SET ;
  };
  union {
          unsigned long                  upsta5set ;//0x05a4
          avr32_usb_upsta5set_t          UPSTA5SET ;
  };
  union {
          unsigned long                  upsta6set ;//0x05a8
          avr32_usb_upsta6set_t          UPSTA6SET ;
  };
  union {
          unsigned long                  upsta7set ;//0x05ac
          avr32_usb_upsta7set_t          UPSTA7SET ;
  };
          unsigned int                   :32       ;//0x05b0
          unsigned int                   :32       ;//0x05b4
          unsigned int                   :32       ;//0x05b8
          unsigned int                   :32       ;//0x05bc
  union {
    const unsigned long                  upcon0    ;//0x05c0
    const avr32_usb_upcon0_t             UPCON0    ;
  };
  union {
    const unsigned long                  upcon1    ;//0x05c4
    const avr32_usb_upcon1_t             UPCON1    ;
  };
  union {
    const unsigned long                  upcon2    ;//0x05c8
    const avr32_usb_upcon2_t             UPCON2    ;
  };
  union {
    const unsigned long                  upcon3    ;//0x05cc
    const avr32_usb_upcon3_t             UPCON3    ;
  };
  union {
    const unsigned long                  upcon4    ;//0x05d0
    const avr32_usb_upcon4_t             UPCON4    ;
  };
  union {
    const unsigned long                  upcon5    ;//0x05d4
    const avr32_usb_upcon5_t             UPCON5    ;
  };
  union {
    const unsigned long                  upcon6    ;//0x05d8
    const avr32_usb_upcon6_t             UPCON6    ;
  };
  union {
    const unsigned long                  upcon7    ;//0x05dc
    const avr32_usb_upcon7_t             UPCON7    ;
  };
          unsigned int                   :32       ;//0x05e0
          unsigned int                   :32       ;//0x05e4
          unsigned int                   :32       ;//0x05e8
          unsigned int                   :32       ;//0x05ec
  union {
          unsigned long                  upcon0set ;//0x05f0
          avr32_usb_upcon0set_t          UPCON0SET ;
  };
  union {
          unsigned long                  upcon1set ;//0x05f4
          avr32_usb_upcon1set_t          UPCON1SET ;
  };
  union {
          unsigned long                  upcon2set ;//0x05f8
          avr32_usb_upcon2set_t          UPCON2SET ;
  };
  union {
          unsigned long                  upcon3set ;//0x05fc
          avr32_usb_upcon3set_t          UPCON3SET ;
  };
  union {
          unsigned long                  upcon4set ;//0x0600
          avr32_usb_upcon4set_t          UPCON4SET ;
  };
  union {
          unsigned long                  upcon5set ;//0x0604
          avr32_usb_upcon5set_t          UPCON5SET ;
  };
  union {
          unsigned long                  upcon6set ;//0x0608
          avr32_usb_upcon6set_t          UPCON6SET ;
  };
  union {
          unsigned long                  upcon7set ;//0x060c
          avr32_usb_upcon7set_t          UPCON7SET ;
  };
          unsigned int                   :32       ;//0x0610
          unsigned int                   :32       ;//0x0614
          unsigned int                   :32       ;//0x0618
          unsigned int                   :32       ;//0x061c
  union {
          unsigned long                  upcon0clr ;//0x0620
          avr32_usb_upcon0clr_t          UPCON0CLR ;
  };
  union {
          unsigned long                  upcon1clr ;//0x0624
          avr32_usb_upcon1clr_t          UPCON1CLR ;
  };
  union {
          unsigned long                  upcon2clr ;//0x0628
          avr32_usb_upcon2clr_t          UPCON2CLR ;
  };
  union {
          unsigned long                  upcon3clr ;//0x062c
          avr32_usb_upcon3clr_t          UPCON3CLR ;
  };
  union {
          unsigned long                  upcon4clr ;//0x0630
          avr32_usb_upcon4clr_t          UPCON4CLR ;
  };
  union {
          unsigned long                  upcon5clr ;//0x0634
          avr32_usb_upcon5clr_t          UPCON5CLR ;
  };
  union {
          unsigned long                  upcon6clr ;//0x0638
          avr32_usb_upcon6clr_t          UPCON6CLR ;
  };
  union {
          unsigned long                  upcon7clr ;//0x063c
          avr32_usb_upcon7clr_t          UPCON7CLR ;
  };
          unsigned int                   :32       ;//0x0640
          unsigned int                   :32       ;//0x0644
          unsigned int                   :32       ;//0x0648
          unsigned int                   :32       ;//0x064c
  union {
          unsigned long                  upinrq0   ;//0x0650
          avr32_usb_upinrq0_t            UPINRQ0   ;
  };
  union {
          unsigned long                  upinrq1   ;//0x0654
          avr32_usb_upinrq1_t            UPINRQ1   ;
  };
  union {
          unsigned long                  upinrq2   ;//0x0658
          avr32_usb_upinrq2_t            UPINRQ2   ;
  };
  union {
          unsigned long                  upinrq3   ;//0x065c
          avr32_usb_upinrq3_t            UPINRQ3   ;
  };
  union {
          unsigned long                  upinrq4   ;//0x0660
          avr32_usb_upinrq4_t            UPINRQ4   ;
  };
  union {
          unsigned long                  upinrq5   ;//0x0664
          avr32_usb_upinrq5_t            UPINRQ5   ;
  };
  union {
          unsigned long                  upinrq6   ;//0x0668
          avr32_usb_upinrq6_t            UPINRQ6   ;
  };
  union {
          unsigned long                  upinrq7   ;//0x066c
          avr32_usb_upinrq7_t            UPINRQ7   ;
  };
          unsigned int                   :32       ;//0x0670
          unsigned int                   :32       ;//0x0674
          unsigned int                   :32       ;//0x0678
          unsigned int                   :32       ;//0x067c
  union {
          unsigned long                  uperr0    ;//0x0680
          avr32_usb_uperr0_t             UPERR0    ;
  };
  union {
          unsigned long                  uperr1    ;//0x0684
          avr32_usb_uperr1_t             UPERR1    ;
  };
  union {
          unsigned long                  uperr2    ;//0x0688
          avr32_usb_uperr2_t             UPERR2    ;
  };
  union {
          unsigned long                  uperr3    ;//0x068c
          avr32_usb_uperr3_t             UPERR3    ;
  };
  union {
          unsigned long                  uperr4    ;//0x0690
          avr32_usb_uperr4_t             UPERR4    ;
  };
  union {
          unsigned long                  uperr5    ;//0x0694
          avr32_usb_uperr5_t             UPERR5    ;
  };
  union {
          unsigned long                  uperr6    ;//0x0698
          avr32_usb_uperr6_t             UPERR6    ;
  };
  union {
          unsigned long                  uperr7    ;//0x069c
          avr32_usb_uperr7_t             UPERR7    ;
  };
          unsigned int                   :32       ;//0x06a0
          unsigned int                   :32       ;//0x06a4
          unsigned int                   :32       ;//0x06a8
          unsigned int                   :32       ;//0x06ac
          unsigned long                  updat0    ;//0x06b0
          unsigned long                  updat1    ;//0x06b4
          unsigned long                  updat2    ;//0x06b8
          unsigned long                  updat3    ;//0x06bc
          unsigned long                  updat4    ;//0x06c0
          unsigned long                  updat5    ;//0x06c4
          unsigned long                  updat6    ;//0x06c8
          unsigned long                  updat7    ;//0x06cc
          unsigned int                   :32       ;//0x06d0
          unsigned int                   :32       ;//0x06d4
          unsigned int                   :32       ;//0x06d8
          unsigned int                   :32       ;//0x06dc
          unsigned int                   :32       ;//0x06e0
          unsigned int                   :32       ;//0x06e4
          unsigned int                   :32       ;//0x06e8
          unsigned int                   :32       ;//0x06ec
          unsigned int                   :32       ;//0x06f0
          unsigned int                   :32       ;//0x06f4
          unsigned int                   :32       ;//0x06f8
          unsigned int                   :32       ;//0x06fc
          unsigned int                   :32       ;//0x0700
          unsigned int                   :32       ;//0x0704
          unsigned int                   :32       ;//0x0708
          unsigned int                   :32       ;//0x070c
  union {
          unsigned long                  uhdma1_nextdesc;//0x0710
          avr32_usb_uhdma1_nextdesc_t    UHDMA1_NEXTDESC;
  };
          unsigned long                  uhdma1_addr;//0x0714
  union {
          unsigned long                  uhdma1_control;//0x0718
          avr32_usb_uhdma1_control_t     UHDMA1_CONTROL;
  };
  union {
          unsigned long                  uhdma1_status;//0x071c
          avr32_usb_uhdma1_status_t      UHDMA1_STATUS;
  };
  union {
          unsigned long                  uhdma2_nextdesc;//0x0720
          avr32_usb_uhdma2_nextdesc_t    UHDMA2_NEXTDESC;
  };
          unsigned long                  uhdma2_addr;//0x0724
  union {
          unsigned long                  uhdma2_control;//0x0728
          avr32_usb_uhdma2_control_t     UHDMA2_CONTROL;
  };
  union {
          unsigned long                  uhdma2_status;//0x072c
          avr32_usb_uhdma2_status_t      UHDMA2_STATUS;
  };
  union {
          unsigned long                  uhdma3_nextdesc;//0x0730
          avr32_usb_uhdma3_nextdesc_t    UHDMA3_NEXTDESC;
  };
          unsigned long                  uhdma3_addr;//0x0734
  union {
          unsigned long                  uhdma3_control;//0x0738
          avr32_usb_uhdma3_control_t     UHDMA3_CONTROL;
  };
  union {
          unsigned long                  uhdma3_status;//0x073c
          avr32_usb_uhdma3_status_t      UHDMA3_STATUS;
  };
  union {
          unsigned long                  uhdma4_nextdesc;//0x0740
          avr32_usb_uhdma4_nextdesc_t    UHDMA4_NEXTDESC;
  };
          unsigned long                  uhdma4_addr;//0x0744
  union {
          unsigned long                  uhdma4_control;//0x0748
          avr32_usb_uhdma4_control_t     UHDMA4_CONTROL;
  };
  union {
          unsigned long                  uhdma4_status;//0x074c
          avr32_usb_uhdma4_status_t      UHDMA4_STATUS;
  };
  union {
          unsigned long                  uhdma5_nextdesc;//0x0750
          avr32_usb_uhdma5_nextdesc_t    UHDMA5_NEXTDESC;
  };
          unsigned long                  uhdma5_addr;//0x0754
  union {
          unsigned long                  uhdma5_control;//0x0758
          avr32_usb_uhdma5_control_t     UHDMA5_CONTROL;
  };
  union {
          unsigned long                  uhdma5_status;//0x075c
          avr32_usb_uhdma5_status_t      UHDMA5_STATUS;
  };
  union {
          unsigned long                  uhdma6_nextdesc;//0x0760
          avr32_usb_uhdma6_nextdesc_t    UHDMA6_NEXTDESC;
  };
          unsigned long                  uhdma6_addr;//0x0764
  union {
          unsigned long                  uhdma6_control;//0x0768
          avr32_usb_uhdma6_control_t     UHDMA6_CONTROL;
  };
  union {
          unsigned long                  uhdma6_status;//0x076c
          avr32_usb_uhdma6_status_t      UHDMA6_STATUS;
  };
  union {
          unsigned long                  uhdma7_nextdesc;//0x0770
          avr32_usb_uhdma7_nextdesc_t    UHDMA7_NEXTDESC;
  };
          unsigned long                  uhdma7_addr;//0x0774
  union {
          unsigned long                  uhdma7_control;//0x0778
          avr32_usb_uhdma7_control_t     UHDMA7_CONTROL;
  };
  union {
          unsigned long                  uhdma7_status;//0x077c
          avr32_usb_uhdma7_status_t      UHDMA7_STATUS;
  };
          unsigned int                   :32       ;//0x0780
          unsigned int                   :32       ;//0x0784
          unsigned int                   :32       ;//0x0788
          unsigned int                   :32       ;//0x078c
          unsigned int                   :32       ;//0x0790
          unsigned int                   :32       ;//0x0794
          unsigned int                   :32       ;//0x0798
          unsigned int                   :32       ;//0x079c
          unsigned int                   :32       ;//0x07a0
          unsigned int                   :32       ;//0x07a4
          unsigned int                   :32       ;//0x07a8
          unsigned int                   :32       ;//0x07ac
          unsigned int                   :32       ;//0x07b0
          unsigned int                   :32       ;//0x07b4
          unsigned int                   :32       ;//0x07b8
          unsigned int                   :32       ;//0x07bc
          unsigned int                   :32       ;//0x07c0
          unsigned int                   :32       ;//0x07c4
          unsigned int                   :32       ;//0x07c8
          unsigned int                   :32       ;//0x07cc
          unsigned int                   :32       ;//0x07d0
          unsigned int                   :32       ;//0x07d4
          unsigned int                   :32       ;//0x07d8
          unsigned int                   :32       ;//0x07dc
          unsigned int                   :32       ;//0x07e0
          unsigned int                   :32       ;//0x07e4
          unsigned int                   :32       ;//0x07e8
          unsigned int                   :32       ;//0x07ec
          unsigned int                   :32       ;//0x07f0
          unsigned int                   :32       ;//0x07f4
          unsigned int                   :32       ;//0x07f8
          unsigned int                   :32       ;//0x07fc
  union {
          unsigned long                  usbcon    ;//0x0800
          avr32_usb_usbcon_t             USBCON    ;
  };
  union {
    const unsigned long                  usbsta    ;//0x0804
    const avr32_usb_usbsta_t             USBSTA    ;
  };
  union {
          unsigned long                  usbstaclr ;//0x0808
          avr32_usb_usbstaclr_t          USBSTACLR ;
  };
  union {
          unsigned long                  usbstaset ;//0x080c
          avr32_usb_usbstaset_t          USBSTASET ;
  };
  union {
          unsigned long                  uatst1    ;//0x0810
          avr32_usb_uatst1_t             UATST1    ;
  };
  union {
          unsigned long                  uatst2    ;//0x0814
          avr32_usb_uatst2_t             UATST2    ;
  };
  union {
    const unsigned long                  uvers     ;//0x0818
    const avr32_usb_uvers_t              UVERS     ;
  };
  union {
    const unsigned long                  ufeatures ;//0x081c
    const avr32_usb_ufeatures_t          UFEATURES ;
  };
    const unsigned long                  uaddrsize ;//0x0820
    const unsigned long                  uname1    ;//0x0824
    const unsigned long                  uname2    ;//0x0828
  union {
    const unsigned long                  usbfsm    ;//0x082c
    const avr32_usb_usbfsm_t             USBFSM    ;
  };
} avr32_usb_t;



/*#ifdef __AVR32_ABI_COMPILER__*/
#endif

/*#ifdef AVR32_USB_320_H_INCLUDED*/
#endif

