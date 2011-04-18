/*****************************************************************************
 *
 * Copyright (C) 2010 Atmel Corporation
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
 * Model        : UC3C0512C
 * Revision     : $Revision: 74772 $
 * Checkin Date : $Date: 2010-05-14 06:51:12 +0200 (Fri, 14 May 2010) $ 
 *
 ****************************************************************************/
#ifndef AVR32_USBC_210_H_INCLUDED
#define AVR32_USBC_210_H_INCLUDED

#define AVR32_USBC_H_VERSION 210

#include "avr32/abi.h"


/*
 Note to user:

 The following defines are always generated:
 - Register offset: AVR32_USBC_<register>
 - Bitfield mask:   AVR32_USBC_<register>_<bitfield>
 - Bitfield offset: AVR32_USBC_<register>_<bitfield>_OFFSET
 - Bitfield size:   AVR32_USBC_<register>_<bitfield>_SIZE
 - Bitfield values: AVR32_USBC_<register>_<bitfield>_<value name>

 The following defines are generated if they don't cause ambiguities,
 i.e. the name is unique, or all values with that name are the same.
 - Bitfield mask:   AVR32_USBC_<bitfield>
 - Bitfield offset: AVR32_USBC_<bitfield>_OFFSET
 - Bitfield size:   AVR32_USBC_<bitfield>_SIZE
 - Bitfield values: AVR32_USBC_<bitfield>_<value name>
 - Bitfield values: AVR32_USBC_<value name>

 All defines are sorted alphabetically.
*/


#define AVR32_USBC_1024                                     0x00000007
#define AVR32_USBC_128                                      0x00000004
#define AVR32_USBC_16                                       0x00000001
#define AVR32_USBC_256                                      0x00000005
#define AVR32_USBC_32                                       0x00000002
#define AVR32_USBC_512                                      0x00000006
#define AVR32_USBC_64                                       0x00000003
#define AVR32_USBC_8                                        0x00000000
#define AVR32_USBC_ADDEN                                             7
#define AVR32_USBC_ADDEN_MASK                               0x00000080
#define AVR32_USBC_ADDEN_OFFSET                                      7
#define AVR32_USBC_ADDEN_SIZE                                        1
#define AVR32_USBC_A_HOST                                   0x00000003
#define AVR32_USBC_A_IDLE                                   0x00000000
#define AVR32_USBC_A_PERIPHERAL                             0x00000005
#define AVR32_USBC_A_SUSPEND                                0x00000004
#define AVR32_USBC_A_VBUS_ERR                               0x00000007
#define AVR32_USBC_A_WAIT_BCON                              0x00000002
#define AVR32_USBC_A_WAIT_DISCHARGE                         0x00000008
#define AVR32_USBC_A_WAIT_VFALL                             0x00000006
#define AVR32_USBC_BCERRE                                            4
#define AVR32_USBC_BCERRE_MASK                              0x00000010
#define AVR32_USBC_BCERRE_OFFSET                                     4
#define AVR32_USBC_BCERRE_SIZE                                       1
#define AVR32_USBC_BCERRI                                            4
#define AVR32_USBC_BCERRIC                                           4
#define AVR32_USBC_BCERRIC_MASK                             0x00000010
#define AVR32_USBC_BCERRIC_OFFSET                                    4
#define AVR32_USBC_BCERRIC_SIZE                                      1
#define AVR32_USBC_BCERRIS                                           4
#define AVR32_USBC_BCERRIS_MASK                             0x00000010
#define AVR32_USBC_BCERRIS_OFFSET                                    4
#define AVR32_USBC_BCERRIS_SIZE                                      1
#define AVR32_USBC_BCERRI_MASK                              0x00000010
#define AVR32_USBC_BCERRI_OFFSET                                     4
#define AVR32_USBC_BCERRI_SIZE                                       1
#define AVR32_USBC_BINTERVAL                                        24
#define AVR32_USBC_BINTERVAL_MASK                           0xff000000
#define AVR32_USBC_BINTERVAL_OFFSET                                 24
#define AVR32_USBC_BINTERVAL_SIZE                                    8
#define AVR32_USBC_BULK                                     0x00000002
#define AVR32_USBC_BUSY0                                            24
#define AVR32_USBC_BUSY0C                                           24
#define AVR32_USBC_BUSY0C_MASK                              0x01000000
#define AVR32_USBC_BUSY0C_OFFSET                                    24
#define AVR32_USBC_BUSY0C_SIZE                                       1
#define AVR32_USBC_BUSY0S                                           24
#define AVR32_USBC_BUSY0S_MASK                              0x01000000
#define AVR32_USBC_BUSY0S_OFFSET                                    24
#define AVR32_USBC_BUSY0S_SIZE                                       1
#define AVR32_USBC_BUSY0_MASK                               0x01000000
#define AVR32_USBC_BUSY0_OFFSET                                     24
#define AVR32_USBC_BUSY0_SIZE                                        1
#define AVR32_USBC_BUSY1                                            25
#define AVR32_USBC_BUSY1C                                           25
#define AVR32_USBC_BUSY1C_MASK                              0x02000000
#define AVR32_USBC_BUSY1C_OFFSET                                    25
#define AVR32_USBC_BUSY1C_SIZE                                       1
#define AVR32_USBC_BUSY1S                                           25
#define AVR32_USBC_BUSY1S_MASK                              0x02000000
#define AVR32_USBC_BUSY1S_OFFSET                                    25
#define AVR32_USBC_BUSY1S_SIZE                                       1
#define AVR32_USBC_BUSY1_MASK                               0x02000000
#define AVR32_USBC_BUSY1_OFFSET                                     25
#define AVR32_USBC_BUSY1_SIZE                                        1
#define AVR32_USBC_BYPASSDPLL                                        5
#define AVR32_USBC_BYPASSDPLL_MASK                          0x00000020
#define AVR32_USBC_BYPASSDPLL_OFFSET                                 5
#define AVR32_USBC_BYPASSDPLL_SIZE                                   1
#define AVR32_USBC_B_HOST                                   0x0000000e
#define AVR32_USBC_B_IDLE                                   0x00000009
#define AVR32_USBC_B_PERIPHERAL                             0x0000000a
#define AVR32_USBC_B_SRP_INIT                               0x0000000f
#define AVR32_USBC_B_WAIT_ACON                              0x0000000d
#define AVR32_USBC_B_WAIT_BEGIN_HNP                         0x0000000b
#define AVR32_USBC_B_WAIT_DISCHARGE                         0x0000000c
#define AVR32_USBC_CFGOK                                            18
#define AVR32_USBC_CFGOK_MASK                               0x00040000
#define AVR32_USBC_CFGOK_OFFSET                                     18
#define AVR32_USBC_CFGOK_SIZE                                        1
#define AVR32_USBC_CLKUSABLE                                        14
#define AVR32_USBC_CLKUSABLE_MASK                           0x00004000
#define AVR32_USBC_CLKUSABLE_OFFSET                                 14
#define AVR32_USBC_CLKUSABLE_SIZE                                    1
#define AVR32_USBC_CONTROL                                  0x00000000
#define AVR32_USBC_COUNTERA                                          0
#define AVR32_USBC_COUNTERA_MASK                            0x00007fff
#define AVR32_USBC_COUNTERA_OFFSET                                   0
#define AVR32_USBC_COUNTERA_SIZE                                    15
#define AVR32_USBC_COUNTERB                                         16
#define AVR32_USBC_COUNTERB_MASK                            0x003f0000
#define AVR32_USBC_COUNTERB_OFFSET                                  16
#define AVR32_USBC_COUNTERB_SIZE                                     6
#define AVR32_USBC_CTRLDIR                                          17
#define AVR32_USBC_CTRLDIR_IN                               0x00000001
#define AVR32_USBC_CTRLDIR_MASK                             0x00020000
#define AVR32_USBC_CTRLDIR_OFFSET                                   17
#define AVR32_USBC_CTRLDIR_OUT                              0x00000000
#define AVR32_USBC_CTRLDIR_SIZE                                      1
#define AVR32_USBC_CURRBK                                           14
#define AVR32_USBC_CURRBK_MASK                              0x0000c000
#define AVR32_USBC_CURRBK_OFFSET                                    14
#define AVR32_USBC_CURRBK_SIZE                                       2
#define AVR32_USBC_DATAXE                                            9
#define AVR32_USBC_DATAXEC                                           9
#define AVR32_USBC_DATAXEC_MASK                             0x00000200
#define AVR32_USBC_DATAXEC_OFFSET                                    9
#define AVR32_USBC_DATAXEC_SIZE                                      1
#define AVR32_USBC_DATAXES                                           9
#define AVR32_USBC_DATAXES_MASK                             0x00000200
#define AVR32_USBC_DATAXES_OFFSET                                    9
#define AVR32_USBC_DATAXES_SIZE                                      1
#define AVR32_USBC_DATAXE_MASK                              0x00000200
#define AVR32_USBC_DATAXE_OFFSET                                     9
#define AVR32_USBC_DATAXE_SIZE                                       1
#define AVR32_USBC_DCONNI                                            0
#define AVR32_USBC_DCONNIC                                           0
#define AVR32_USBC_DCONNIC_MASK                             0x00000001
#define AVR32_USBC_DCONNIC_OFFSET                                    0
#define AVR32_USBC_DCONNIC_SIZE                                      1
#define AVR32_USBC_DCONNIE                                           0
#define AVR32_USBC_DCONNIEC                                          0
#define AVR32_USBC_DCONNIEC_MASK                            0x00000001
#define AVR32_USBC_DCONNIEC_OFFSET                                   0
#define AVR32_USBC_DCONNIEC_SIZE                                     1
#define AVR32_USBC_DCONNIES                                          0
#define AVR32_USBC_DCONNIES_MASK                            0x00000001
#define AVR32_USBC_DCONNIES_OFFSET                                   0
#define AVR32_USBC_DCONNIES_SIZE                                     1
#define AVR32_USBC_DCONNIE_MASK                             0x00000001
#define AVR32_USBC_DCONNIE_OFFSET                                    0
#define AVR32_USBC_DCONNIE_SIZE                                      1
#define AVR32_USBC_DCONNIS                                           0
#define AVR32_USBC_DCONNIS_MASK                             0x00000001
#define AVR32_USBC_DCONNIS_OFFSET                                    0
#define AVR32_USBC_DCONNIS_SIZE                                      1
#define AVR32_USBC_DCONNI_MASK                              0x00000001
#define AVR32_USBC_DCONNI_OFFSET                                     0
#define AVR32_USBC_DCONNI_SIZE                                       1
#define AVR32_USBC_DDISCI                                            1
#define AVR32_USBC_DDISCIC                                           1
#define AVR32_USBC_DDISCIC_MASK                             0x00000002
#define AVR32_USBC_DDISCIC_OFFSET                                    1
#define AVR32_USBC_DDISCIC_SIZE                                      1
#define AVR32_USBC_DDISCIE                                           1
#define AVR32_USBC_DDISCIEC                                          1
#define AVR32_USBC_DDISCIEC_MASK                            0x00000002
#define AVR32_USBC_DDISCIEC_OFFSET                                   1
#define AVR32_USBC_DDISCIEC_SIZE                                     1
#define AVR32_USBC_DDISCIES                                          1
#define AVR32_USBC_DDISCIES_MASK                            0x00000002
#define AVR32_USBC_DDISCIES_OFFSET                                   1
#define AVR32_USBC_DDISCIES_SIZE                                     1
#define AVR32_USBC_DDISCIE_MASK                             0x00000002
#define AVR32_USBC_DDISCIE_OFFSET                                    1
#define AVR32_USBC_DDISCIE_SIZE                                      1
#define AVR32_USBC_DDISCIS                                           1
#define AVR32_USBC_DDISCIS_MASK                             0x00000002
#define AVR32_USBC_DDISCIS_OFFSET                                    1
#define AVR32_USBC_DDISCIS_SIZE                                      1
#define AVR32_USBC_DDISCI_MASK                              0x00000002
#define AVR32_USBC_DDISCI_OFFSET                                     1
#define AVR32_USBC_DDISCI_SIZE                                       1
#define AVR32_USBC_DETACH                                            8
#define AVR32_USBC_DETACH_MASK                              0x00000100
#define AVR32_USBC_DETACH_OFFSET                                     8
#define AVR32_USBC_DETACH_SIZE                                       1
#define AVR32_USBC_DISBALEGATEDCLOCK                                 3
#define AVR32_USBC_DISBALEGATEDCLOCK_MASK                   0x00000008
#define AVR32_USBC_DISBALEGATEDCLOCK_OFFSET                          3
#define AVR32_USBC_DISBALEGATEDCLOCK_SIZE                            1
#define AVR32_USBC_DOUBLE                                   0x00000001
#define AVR32_USBC_DRDSTATE                                          0
#define AVR32_USBC_DRDSTATE_A_HOST                          0x00000003
#define AVR32_USBC_DRDSTATE_A_IDLE                          0x00000000
#define AVR32_USBC_DRDSTATE_A_PERIPHERAL                    0x00000005
#define AVR32_USBC_DRDSTATE_A_SUSPEND                       0x00000004
#define AVR32_USBC_DRDSTATE_A_VBUS_ERR                      0x00000007
#define AVR32_USBC_DRDSTATE_A_WAIT_BCON                     0x00000002
#define AVR32_USBC_DRDSTATE_A_WAIT_DISCHARGE                0x00000008
#define AVR32_USBC_DRDSTATE_A_WAIT_VFALL                    0x00000006
#define AVR32_USBC_DRDSTATE_A_WAIT_VRISE                    0x00000001
#define AVR32_USBC_DRDSTATE_B_HOST                          0x0000000e
#define AVR32_USBC_DRDSTATE_B_IDLE                          0x00000009
#define AVR32_USBC_DRDSTATE_B_PERIPHERAL                    0x0000000a
#define AVR32_USBC_DRDSTATE_B_SRP_INIT                      0x0000000f
#define AVR32_USBC_DRDSTATE_B_WAIT_ACON                     0x0000000d
#define AVR32_USBC_DRDSTATE_B_WAIT_BEGIN_HNP                0x0000000b
#define AVR32_USBC_DRDSTATE_B_WAIT_DISCHARGE                0x0000000c
#define AVR32_USBC_DRDSTATE_MASK                            0x0000000f
#define AVR32_USBC_DRDSTATE_OFFSET                                   0
#define AVR32_USBC_DRDSTATE_SIZE                                     4
#define AVR32_USBC_DTSEQ                                             8
#define AVR32_USBC_DTSEQ_MASK                               0x00000300
#define AVR32_USBC_DTSEQ_OFFSET                                      8
#define AVR32_USBC_DTSEQ_SIZE                                        2
#define AVR32_USBC_EORSM                                             5
#define AVR32_USBC_EORSMC                                            5
#define AVR32_USBC_EORSMC_MASK                              0x00000020
#define AVR32_USBC_EORSMC_OFFSET                                     5
#define AVR32_USBC_EORSMC_SIZE                                       1
#define AVR32_USBC_EORSME                                            5
#define AVR32_USBC_EORSMEC                                           5
#define AVR32_USBC_EORSMEC_MASK                             0x00000020
#define AVR32_USBC_EORSMEC_OFFSET                                    5
#define AVR32_USBC_EORSMEC_SIZE                                      1
#define AVR32_USBC_EORSMES                                           5
#define AVR32_USBC_EORSMES_MASK                             0x00000020
#define AVR32_USBC_EORSMES_OFFSET                                    5
#define AVR32_USBC_EORSMES_SIZE                                      1
#define AVR32_USBC_EORSME_MASK                              0x00000020
#define AVR32_USBC_EORSME_OFFSET                                     5
#define AVR32_USBC_EORSME_SIZE                                       1
#define AVR32_USBC_EORSMS                                            5
#define AVR32_USBC_EORSMS_MASK                              0x00000020
#define AVR32_USBC_EORSMS_OFFSET                                     5
#define AVR32_USBC_EORSMS_SIZE                                       1
#define AVR32_USBC_EORSM_MASK                               0x00000020
#define AVR32_USBC_EORSM_OFFSET                                      5
#define AVR32_USBC_EORSM_SIZE                                        1
#define AVR32_USBC_EORST                                             3
#define AVR32_USBC_EORSTC                                            3
#define AVR32_USBC_EORSTC_MASK                              0x00000008
#define AVR32_USBC_EORSTC_OFFSET                                     3
#define AVR32_USBC_EORSTC_SIZE                                       1
#define AVR32_USBC_EORSTE                                            3
#define AVR32_USBC_EORSTEC                                           3
#define AVR32_USBC_EORSTEC_MASK                             0x00000008
#define AVR32_USBC_EORSTEC_OFFSET                                    3
#define AVR32_USBC_EORSTEC_SIZE                                      1
#define AVR32_USBC_EORSTES                                           3
#define AVR32_USBC_EORSTES_MASK                             0x00000008
#define AVR32_USBC_EORSTES_OFFSET                                    3
#define AVR32_USBC_EORSTES_SIZE                                      1
#define AVR32_USBC_EORSTE_MASK                              0x00000008
#define AVR32_USBC_EORSTE_OFFSET                                     3
#define AVR32_USBC_EORSTE_SIZE                                       1
#define AVR32_USBC_EORSTS                                            3
#define AVR32_USBC_EORSTS_MASK                              0x00000008
#define AVR32_USBC_EORSTS_OFFSET                                     3
#define AVR32_USBC_EORSTS_SIZE                                       1
#define AVR32_USBC_EORST_MASK                               0x00000008
#define AVR32_USBC_EORST_OFFSET                                      3
#define AVR32_USBC_EORST_SIZE                                        1
#define AVR32_USBC_EP0INT                                           12
#define AVR32_USBC_EP0INTE                                          12
#define AVR32_USBC_EP0INTEC                                         12
#define AVR32_USBC_EP0INTEC_MASK                            0x00001000
#define AVR32_USBC_EP0INTEC_OFFSET                                  12
#define AVR32_USBC_EP0INTEC_SIZE                                     1
#define AVR32_USBC_EP0INTES                                         12
#define AVR32_USBC_EP0INTES_MASK                            0x00001000
#define AVR32_USBC_EP0INTES_OFFSET                                  12
#define AVR32_USBC_EP0INTES_SIZE                                     1
#define AVR32_USBC_EP0INTE_MASK                             0x00001000
#define AVR32_USBC_EP0INTE_OFFSET                                   12
#define AVR32_USBC_EP0INTE_SIZE                                      1
#define AVR32_USBC_EP0INT_MASK                              0x00001000
#define AVR32_USBC_EP0INT_OFFSET                                    12
#define AVR32_USBC_EP0INT_SIZE                                       1
#define AVR32_USBC_EP1INT                                           13
#define AVR32_USBC_EP1INTE                                          13
#define AVR32_USBC_EP1INTEC                                         13
#define AVR32_USBC_EP1INTEC_MASK                            0x00002000
#define AVR32_USBC_EP1INTEC_OFFSET                                  13
#define AVR32_USBC_EP1INTEC_SIZE                                     1
#define AVR32_USBC_EP1INTES                                         13
#define AVR32_USBC_EP1INTES_MASK                            0x00002000
#define AVR32_USBC_EP1INTES_OFFSET                                  13
#define AVR32_USBC_EP1INTES_SIZE                                     1
#define AVR32_USBC_EP1INTE_MASK                             0x00002000
#define AVR32_USBC_EP1INTE_OFFSET                                   13
#define AVR32_USBC_EP1INTE_SIZE                                      1
#define AVR32_USBC_EP1INT_MASK                              0x00002000
#define AVR32_USBC_EP1INT_OFFSET                                    13
#define AVR32_USBC_EP1INT_SIZE                                       1
#define AVR32_USBC_EP2INT                                           14
#define AVR32_USBC_EP2INTE                                          14
#define AVR32_USBC_EP2INTEC                                         14
#define AVR32_USBC_EP2INTEC_MASK                            0x00004000
#define AVR32_USBC_EP2INTEC_OFFSET                                  14
#define AVR32_USBC_EP2INTEC_SIZE                                     1
#define AVR32_USBC_EP2INTES                                         14
#define AVR32_USBC_EP2INTES_MASK                            0x00004000
#define AVR32_USBC_EP2INTES_OFFSET                                  14
#define AVR32_USBC_EP2INTES_SIZE                                     1
#define AVR32_USBC_EP2INTE_MASK                             0x00004000
#define AVR32_USBC_EP2INTE_OFFSET                                   14
#define AVR32_USBC_EP2INTE_SIZE                                      1
#define AVR32_USBC_EP2INT_MASK                              0x00004000
#define AVR32_USBC_EP2INT_OFFSET                                    14
#define AVR32_USBC_EP2INT_SIZE                                       1
#define AVR32_USBC_EP3INT                                           15
#define AVR32_USBC_EP3INTE                                          15
#define AVR32_USBC_EP3INTEC                                         15
#define AVR32_USBC_EP3INTEC_MASK                            0x00008000
#define AVR32_USBC_EP3INTEC_OFFSET                                  15
#define AVR32_USBC_EP3INTEC_SIZE                                     1
#define AVR32_USBC_EP3INTES                                         15
#define AVR32_USBC_EP3INTES_MASK                            0x00008000
#define AVR32_USBC_EP3INTES_OFFSET                                  15
#define AVR32_USBC_EP3INTES_SIZE                                     1
#define AVR32_USBC_EP3INTE_MASK                             0x00008000
#define AVR32_USBC_EP3INTE_OFFSET                                   15
#define AVR32_USBC_EP3INTE_SIZE                                      1
#define AVR32_USBC_EP3INT_MASK                              0x00008000
#define AVR32_USBC_EP3INT_OFFSET                                    15
#define AVR32_USBC_EP3INT_SIZE                                       1
#define AVR32_USBC_EP4INT                                           16
#define AVR32_USBC_EP4INTE                                          16
#define AVR32_USBC_EP4INTEC                                         16
#define AVR32_USBC_EP4INTEC_MASK                            0x00010000
#define AVR32_USBC_EP4INTEC_OFFSET                                  16
#define AVR32_USBC_EP4INTEC_SIZE                                     1
#define AVR32_USBC_EP4INTES                                         16
#define AVR32_USBC_EP4INTES_MASK                            0x00010000
#define AVR32_USBC_EP4INTES_OFFSET                                  16
#define AVR32_USBC_EP4INTES_SIZE                                     1
#define AVR32_USBC_EP4INTE_MASK                             0x00010000
#define AVR32_USBC_EP4INTE_OFFSET                                   16
#define AVR32_USBC_EP4INTE_SIZE                                      1
#define AVR32_USBC_EP4INT_MASK                              0x00010000
#define AVR32_USBC_EP4INT_OFFSET                                    16
#define AVR32_USBC_EP4INT_SIZE                                       1
#define AVR32_USBC_EP5INT                                           17
#define AVR32_USBC_EP5INTE                                          17
#define AVR32_USBC_EP5INTEC                                         17
#define AVR32_USBC_EP5INTEC_MASK                            0x00020000
#define AVR32_USBC_EP5INTEC_OFFSET                                  17
#define AVR32_USBC_EP5INTEC_SIZE                                     1
#define AVR32_USBC_EP5INTES                                         17
#define AVR32_USBC_EP5INTES_MASK                            0x00020000
#define AVR32_USBC_EP5INTES_OFFSET                                  17
#define AVR32_USBC_EP5INTES_SIZE                                     1
#define AVR32_USBC_EP5INTE_MASK                             0x00020000
#define AVR32_USBC_EP5INTE_OFFSET                                   17
#define AVR32_USBC_EP5INTE_SIZE                                      1
#define AVR32_USBC_EP5INT_MASK                              0x00020000
#define AVR32_USBC_EP5INT_OFFSET                                    17
#define AVR32_USBC_EP5INT_SIZE                                       1
#define AVR32_USBC_EP6INT                                           18
#define AVR32_USBC_EP6INTE                                          18
#define AVR32_USBC_EP6INTEC                                         18
#define AVR32_USBC_EP6INTEC_MASK                            0x00040000
#define AVR32_USBC_EP6INTEC_OFFSET                                  18
#define AVR32_USBC_EP6INTEC_SIZE                                     1
#define AVR32_USBC_EP6INTES                                         18
#define AVR32_USBC_EP6INTES_MASK                            0x00040000
#define AVR32_USBC_EP6INTES_OFFSET                                  18
#define AVR32_USBC_EP6INTES_SIZE                                     1
#define AVR32_USBC_EP6INTE_MASK                             0x00040000
#define AVR32_USBC_EP6INTE_OFFSET                                   18
#define AVR32_USBC_EP6INTE_SIZE                                      1
#define AVR32_USBC_EP6INT_MASK                              0x00040000
#define AVR32_USBC_EP6INT_OFFSET                                    18
#define AVR32_USBC_EP6INT_SIZE                                       1
#define AVR32_USBC_EP7INT                                           19
#define AVR32_USBC_EP7INTE                                          19
#define AVR32_USBC_EP7INTEC                                         19
#define AVR32_USBC_EP7INTEC_MASK                            0x00080000
#define AVR32_USBC_EP7INTEC_OFFSET                                  19
#define AVR32_USBC_EP7INTEC_SIZE                                     1
#define AVR32_USBC_EP7INTES                                         19
#define AVR32_USBC_EP7INTES_MASK                            0x00080000
#define AVR32_USBC_EP7INTES_OFFSET                                  19
#define AVR32_USBC_EP7INTES_SIZE                                     1
#define AVR32_USBC_EP7INTE_MASK                             0x00080000
#define AVR32_USBC_EP7INTE_OFFSET                                   19
#define AVR32_USBC_EP7INTE_SIZE                                      1
#define AVR32_USBC_EP7INT_MASK                              0x00080000
#define AVR32_USBC_EP7INT_OFFSET                                    19
#define AVR32_USBC_EP7INT_SIZE                                       1
#define AVR32_USBC_EPBK                                              2
#define AVR32_USBC_EPBK_DOUBLE                              0x00000001
#define AVR32_USBC_EPBK_MASK                                0x00000004
#define AVR32_USBC_EPBK_OFFSET                                       2
#define AVR32_USBC_EPBK_SINGLE                              0x00000000
#define AVR32_USBC_EPBK_SIZE                                         1
#define AVR32_USBC_EPBK_TRIPLE                              0x00000002
#define AVR32_USBC_EPDIR                                             8
#define AVR32_USBC_EPDIR_IN                                 0x00000001
#define AVR32_USBC_EPDIR_MASK                               0x00000100
#define AVR32_USBC_EPDIR_OFFSET                                      8
#define AVR32_USBC_EPDIR_OUT                                0x00000000
#define AVR32_USBC_EPDIR_SIZE                                        1
#define AVR32_USBC_EPEN0                                             0
#define AVR32_USBC_EPEN0_MASK                               0x00000001
#define AVR32_USBC_EPEN0_OFFSET                                      0
#define AVR32_USBC_EPEN0_SIZE                                        1
#define AVR32_USBC_EPEN1                                             1
#define AVR32_USBC_EPEN1_MASK                               0x00000002
#define AVR32_USBC_EPEN1_OFFSET                                      1
#define AVR32_USBC_EPEN1_SIZE                                        1
#define AVR32_USBC_EPEN2                                             2
#define AVR32_USBC_EPEN2_MASK                               0x00000004
#define AVR32_USBC_EPEN2_OFFSET                                      2
#define AVR32_USBC_EPEN2_SIZE                                        1
#define AVR32_USBC_EPEN3                                             3
#define AVR32_USBC_EPEN3_MASK                               0x00000008
#define AVR32_USBC_EPEN3_OFFSET                                      3
#define AVR32_USBC_EPEN3_SIZE                                        1
#define AVR32_USBC_EPEN4                                             4
#define AVR32_USBC_EPEN4_MASK                               0x00000010
#define AVR32_USBC_EPEN4_OFFSET                                      4
#define AVR32_USBC_EPEN4_SIZE                                        1
#define AVR32_USBC_EPEN5                                             5
#define AVR32_USBC_EPEN5_MASK                               0x00000020
#define AVR32_USBC_EPEN5_OFFSET                                      5
#define AVR32_USBC_EPEN5_SIZE                                        1
#define AVR32_USBC_EPEN6                                             6
#define AVR32_USBC_EPEN6_MASK                               0x00000040
#define AVR32_USBC_EPEN6_OFFSET                                      6
#define AVR32_USBC_EPEN6_SIZE                                        1
#define AVR32_USBC_EPEN7                                             7
#define AVR32_USBC_EPEN7_MASK                               0x00000080
#define AVR32_USBC_EPEN7_OFFSET                                      7
#define AVR32_USBC_EPEN7_SIZE                                        1
#define AVR32_USBC_EPSIZE                                            4
#define AVR32_USBC_EPSIZE_1024                              0x00000007
#define AVR32_USBC_EPSIZE_128                               0x00000004
#define AVR32_USBC_EPSIZE_16                                0x00000001
#define AVR32_USBC_EPSIZE_256                               0x00000005
#define AVR32_USBC_EPSIZE_32                                0x00000002
#define AVR32_USBC_EPSIZE_512                               0x00000006
#define AVR32_USBC_EPSIZE_64                                0x00000003
#define AVR32_USBC_EPSIZE_8                                 0x00000000
#define AVR32_USBC_EPSIZE_MASK                              0x00000070
#define AVR32_USBC_EPSIZE_OFFSET                                     4
#define AVR32_USBC_EPSIZE_SIZE                                       3
#define AVR32_USBC_EPTYPE                                           11
#define AVR32_USBC_EPTYPE_BULK                              0x00000002
#define AVR32_USBC_EPTYPE_CONTROL                           0x00000000
#define AVR32_USBC_EPTYPE_INTERRUPT                         0x00000003
#define AVR32_USBC_EPTYPE_ISOCHRONOUS                       0x00000001
#define AVR32_USBC_EPTYPE_MASK                              0x00001800
#define AVR32_USBC_EPTYPE_OFFSET                                    11
#define AVR32_USBC_EPTYPE_SIZE                                       2
#define AVR32_USBC_EPT_NBR_MAX                                       0
#define AVR32_USBC_EPT_NBR_MAX_MASK                         0x0000000f
#define AVR32_USBC_EPT_NBR_MAX_OFFSET                                0
#define AVR32_USBC_EPT_NBR_MAX_SIZE                                  4
#define AVR32_USBC_ERRORFI                                           5
#define AVR32_USBC_ERRORFIC                                          5
#define AVR32_USBC_ERRORFIC_MASK                            0x00000020
#define AVR32_USBC_ERRORFIC_OFFSET                                   5
#define AVR32_USBC_ERRORFIC_SIZE                                     1
#define AVR32_USBC_ERRORFIE                                          5
#define AVR32_USBC_ERRORFIEC                                         5
#define AVR32_USBC_ERRORFIEC_MASK                           0x00000020
#define AVR32_USBC_ERRORFIEC_OFFSET                                  5
#define AVR32_USBC_ERRORFIEC_SIZE                                    1
#define AVR32_USBC_ERRORFIES                                         5
#define AVR32_USBC_ERRORFIES_MASK                           0x00000020
#define AVR32_USBC_ERRORFIES_OFFSET                                  5
#define AVR32_USBC_ERRORFIES_SIZE                                    1
#define AVR32_USBC_ERRORFIE_MASK                            0x00000020
#define AVR32_USBC_ERRORFIE_OFFSET                                   5
#define AVR32_USBC_ERRORFIE_SIZE                                     1
#define AVR32_USBC_ERRORFIS                                          5
#define AVR32_USBC_ERRORFIS_MASK                            0x00000020
#define AVR32_USBC_ERRORFIS_OFFSET                                   5
#define AVR32_USBC_ERRORFIS_SIZE                                     1
#define AVR32_USBC_ERRORFI_MASK                             0x00000020
#define AVR32_USBC_ERRORFI_OFFSET                                    5
#define AVR32_USBC_ERRORFI_SIZE                                      1
#define AVR32_USBC_ERRORTRANS                                       10
#define AVR32_USBC_ERRORTRANSE                                      10
#define AVR32_USBC_ERRORTRANSEC                                     10
#define AVR32_USBC_ERRORTRANSEC_MASK                        0x00000400
#define AVR32_USBC_ERRORTRANSEC_OFFSET                              10
#define AVR32_USBC_ERRORTRANSEC_SIZE                                 1
#define AVR32_USBC_ERRORTRANSES                                     10
#define AVR32_USBC_ERRORTRANSES_MASK                        0x00000400
#define AVR32_USBC_ERRORTRANSES_OFFSET                              10
#define AVR32_USBC_ERRORTRANSES_SIZE                                 1
#define AVR32_USBC_ERRORTRANSE_MASK                         0x00000400
#define AVR32_USBC_ERRORTRANSE_OFFSET                               10
#define AVR32_USBC_ERRORTRANSE_SIZE                                  1
#define AVR32_USBC_ERRORTRANSS                                      10
#define AVR32_USBC_ERRORTRANSS_MASK                         0x00000400
#define AVR32_USBC_ERRORTRANSS_OFFSET                               10
#define AVR32_USBC_ERRORTRANSS_SIZE                                  1
#define AVR32_USBC_ERRORTRANS_MASK                          0x00000400
#define AVR32_USBC_ERRORTRANS_OFFSET                                10
#define AVR32_USBC_ERRORTRANS_SIZE                                   1
#define AVR32_USBC_FIFOCON                                          14
#define AVR32_USBC_FIFOCONC                                         14
#define AVR32_USBC_FIFOCONC_MASK                            0x00004000
#define AVR32_USBC_FIFOCONC_OFFSET                                  14
#define AVR32_USBC_FIFOCONC_SIZE                                     1
#define AVR32_USBC_FIFOCONS                                         14
#define AVR32_USBC_FIFOCONS_MASK                            0x00004000
#define AVR32_USBC_FIFOCONS_OFFSET                                  14
#define AVR32_USBC_FIFOCONS_SIZE                                     1
#define AVR32_USBC_FIFOCON_MASK                             0x00004000
#define AVR32_USBC_FIFOCON_OFFSET                                   14
#define AVR32_USBC_FIFOCON_SIZE                                      1
#define AVR32_USBC_FLENHIGH                                         16
#define AVR32_USBC_FLENHIGH_MASK                            0x00ff0000
#define AVR32_USBC_FLENHIGH_OFFSET                                  16
#define AVR32_USBC_FLENHIGH_SIZE                                     8
#define AVR32_USBC_FNCERR                                           15
#define AVR32_USBC_FNCERR_MASK                              0x00008000
#define AVR32_USBC_FNCERR_OFFSET                                    15
#define AVR32_USBC_FNCERR_SIZE                                       1
#define AVR32_USBC_FNUM                                              3
#define AVR32_USBC_FNUM_MASK                                0x00003ff8
#define AVR32_USBC_FNUM_OFFSET                                       3
#define AVR32_USBC_FNUM_SIZE                                        11
#define AVR32_USBC_FORCEHSRESETTO50MS                                7
#define AVR32_USBC_FORCEHSRESETTO50MS_MASK                  0x00000080
#define AVR32_USBC_FORCEHSRESETTO50MS_OFFSET                         7
#define AVR32_USBC_FORCEHSRESETTO50MS_SIZE                           1
#define AVR32_USBC_FORCESUSPENDMTO1                                  4
#define AVR32_USBC_FORCESUSPENDMTO1_MASK                    0x00000010
#define AVR32_USBC_FORCESUSPENDMTO1_OFFSET                           4
#define AVR32_USBC_FORCESUSPENDMTO1_SIZE                             1
#define AVR32_USBC_FRZCLK                                           14
#define AVR32_USBC_FRZCLK_MASK                              0x00004000
#define AVR32_USBC_FRZCLK_OFFSET                                    14
#define AVR32_USBC_FRZCLK_SIZE                                       1
#define AVR32_USBC_FULL                                     0x00000000
#define AVR32_USBC_FULLDETACHEN                                      0
#define AVR32_USBC_FULLDETACHEN_MASK                        0x00000001
#define AVR32_USBC_FULLDETACHEN_OFFSET                               0
#define AVR32_USBC_FULLDETACHEN_SIZE                                 1
#define AVR32_USBC_GNAK                                             17
#define AVR32_USBC_GNAK_MASK                                0x00020000
#define AVR32_USBC_GNAK_OFFSET                                      17
#define AVR32_USBC_GNAK_SIZE                                         1
#define AVR32_USBC_HNPERRE                                           6
#define AVR32_USBC_HNPERRE_MASK                             0x00000040
#define AVR32_USBC_HNPERRE_OFFSET                                    6
#define AVR32_USBC_HNPERRE_SIZE                                      1
#define AVR32_USBC_HNPERRI                                           6
#define AVR32_USBC_HNPERRIC                                          6
#define AVR32_USBC_HNPERRIC_MASK                            0x00000040
#define AVR32_USBC_HNPERRIC_OFFSET                                   6
#define AVR32_USBC_HNPERRIC_SIZE                                     1
#define AVR32_USBC_HNPERRIS                                          6
#define AVR32_USBC_HNPERRIS_MASK                            0x00000040
#define AVR32_USBC_HNPERRIS_OFFSET                                   6
#define AVR32_USBC_HNPERRIS_SIZE                                     1
#define AVR32_USBC_HNPERRI_MASK                             0x00000040
#define AVR32_USBC_HNPERRI_OFFSET                                    6
#define AVR32_USBC_HNPERRI_SIZE                                      1
#define AVR32_USBC_HNPREQ                                           11
#define AVR32_USBC_HNPREQ_MASK                              0x00000800
#define AVR32_USBC_HNPREQ_OFFSET                                    11
#define AVR32_USBC_HNPREQ_SIZE                                       1
#define AVR32_USBC_HOSTHSDISCONNECTDISABLE                           6
#define AVR32_USBC_HOSTHSDISCONNECTDISABLE_MASK             0x00000040
#define AVR32_USBC_HOSTHSDISCONNECTDISABLE_OFFSET                    6
#define AVR32_USBC_HOSTHSDISCONNECTDISABLE_SIZE                      1
#define AVR32_USBC_HSOFI                                             5
#define AVR32_USBC_HSOFIC                                            5
#define AVR32_USBC_HSOFIC_MASK                              0x00000020
#define AVR32_USBC_HSOFIC_OFFSET                                     5
#define AVR32_USBC_HSOFIC_SIZE                                       1
#define AVR32_USBC_HSOFIE                                            5
#define AVR32_USBC_HSOFIEC                                           5
#define AVR32_USBC_HSOFIEC_MASK                             0x00000020
#define AVR32_USBC_HSOFIEC_OFFSET                                    5
#define AVR32_USBC_HSOFIEC_SIZE                                      1
#define AVR32_USBC_HSOFIES                                           5
#define AVR32_USBC_HSOFIES_MASK                             0x00000020
#define AVR32_USBC_HSOFIES_OFFSET                                    5
#define AVR32_USBC_HSOFIES_SIZE                                      1
#define AVR32_USBC_HSOFIE_MASK                              0x00000020
#define AVR32_USBC_HSOFIE_OFFSET                                     5
#define AVR32_USBC_HSOFIE_SIZE                                       1
#define AVR32_USBC_HSOFIS                                            5
#define AVR32_USBC_HSOFIS_MASK                              0x00000020
#define AVR32_USBC_HSOFIS_OFFSET                                     5
#define AVR32_USBC_HSOFIS_SIZE                                       1
#define AVR32_USBC_HSOFI_MASK                               0x00000020
#define AVR32_USBC_HSOFI_OFFSET                                      5
#define AVR32_USBC_HSOFI_SIZE                                        1
#define AVR32_USBC_HSSERIALMODE                                      1
#define AVR32_USBC_HSSERIALMODE_MASK                        0x00000002
#define AVR32_USBC_HSSERIALMODE_OFFSET                               1
#define AVR32_USBC_HSSERIALMODE_SIZE                                 1
#define AVR32_USBC_HWUPI                                             6
#define AVR32_USBC_HWUPIC                                            6
#define AVR32_USBC_HWUPIC_MASK                              0x00000040
#define AVR32_USBC_HWUPIC_OFFSET                                     6
#define AVR32_USBC_HWUPIC_SIZE                                       1
#define AVR32_USBC_HWUPIE                                            6
#define AVR32_USBC_HWUPIEC                                           6
#define AVR32_USBC_HWUPIEC_MASK                             0x00000040
#define AVR32_USBC_HWUPIEC_OFFSET                                    6
#define AVR32_USBC_HWUPIEC_SIZE                                      1
#define AVR32_USBC_HWUPIES                                           6
#define AVR32_USBC_HWUPIES_MASK                             0x00000040
#define AVR32_USBC_HWUPIES_OFFSET                                    6
#define AVR32_USBC_HWUPIES_SIZE                                      1
#define AVR32_USBC_HWUPIE_MASK                              0x00000040
#define AVR32_USBC_HWUPIE_OFFSET                                     6
#define AVR32_USBC_HWUPIE_SIZE                                       1
#define AVR32_USBC_HWUPIS                                            6
#define AVR32_USBC_HWUPIS_MASK                              0x00000040
#define AVR32_USBC_HWUPIS_OFFSET                                     6
#define AVR32_USBC_HWUPIS_SIZE                                       1
#define AVR32_USBC_HWUPI_MASK                               0x00000040
#define AVR32_USBC_HWUPI_OFFSET                                      6
#define AVR32_USBC_HWUPI_SIZE                                        1
#define AVR32_USBC_ID                                               10
#define AVR32_USBC_IDTE                                              0
#define AVR32_USBC_IDTE_MASK                                0x00000001
#define AVR32_USBC_IDTE_OFFSET                                       0
#define AVR32_USBC_IDTE_SIZE                                         1
#define AVR32_USBC_IDTI                                              0
#define AVR32_USBC_IDTIC                                             0
#define AVR32_USBC_IDTIC_MASK                               0x00000001
#define AVR32_USBC_IDTIC_OFFSET                                      0
#define AVR32_USBC_IDTIC_SIZE                                        1
#define AVR32_USBC_IDTIS                                             0
#define AVR32_USBC_IDTIS_MASK                               0x00000001
#define AVR32_USBC_IDTIS_OFFSET                                      0
#define AVR32_USBC_IDTIS_SIZE                                        1
#define AVR32_USBC_IDTI_MASK                                0x00000001
#define AVR32_USBC_IDTI_OFFSET                                       0
#define AVR32_USBC_IDTI_SIZE                                         1
#define AVR32_USBC_ID_MASK                                  0x00000400
#define AVR32_USBC_ID_OFFSET                                        10
#define AVR32_USBC_ID_SIZE                                           1
#define AVR32_USBC_IN                                       0x00000001
#define AVR32_USBC_INITBK                                           19
#define AVR32_USBC_INITBKC                                          19
#define AVR32_USBC_INITBKC_MASK                             0x00080000
#define AVR32_USBC_INITBKC_OFFSET                                   19
#define AVR32_USBC_INITBKC_SIZE                                      1
#define AVR32_USBC_INITBKS                                          19
#define AVR32_USBC_INITBKS_MASK                             0x00080000
#define AVR32_USBC_INITBKS_OFFSET                                   19
#define AVR32_USBC_INITBKS_SIZE                                      1
#define AVR32_USBC_INITBK_MASK                              0x00080000
#define AVR32_USBC_INITBK_OFFSET                                    19
#define AVR32_USBC_INITBK_SIZE                                       1
#define AVR32_USBC_INITDTGL                                         18
#define AVR32_USBC_INITDTGLC                                        18
#define AVR32_USBC_INITDTGLC_MASK                           0x00040000
#define AVR32_USBC_INITDTGLC_OFFSET                                 18
#define AVR32_USBC_INITDTGLC_SIZE                                    1
#define AVR32_USBC_INITDTGLS                                        18
#define AVR32_USBC_INITDTGLS_MASK                           0x00040000
#define AVR32_USBC_INITDTGLS_OFFSET                                 18
#define AVR32_USBC_INITDTGLS_SIZE                                    1
#define AVR32_USBC_INITDTGL_MASK                            0x00040000
#define AVR32_USBC_INITDTGL_OFFSET                                  18
#define AVR32_USBC_INITDTGL_SIZE                                     1
#define AVR32_USBC_INMODE                                            8
#define AVR32_USBC_INMODE_MASK                              0x00000100
#define AVR32_USBC_INMODE_OFFSET                                     8
#define AVR32_USBC_INMODE_SIZE                                       1
#define AVR32_USBC_INRQ                                              0
#define AVR32_USBC_INRQ_MASK                                0x000000ff
#define AVR32_USBC_INRQ_OFFSET                                       0
#define AVR32_USBC_INRQ_SIZE                                         8
#define AVR32_USBC_INTERRUPT                                0x00000003
#define AVR32_USBC_ISOCHRONOUS                              0x00000001
#define AVR32_USBC_KILLBK                                           13
#define AVR32_USBC_KILLBKS                                          13
#define AVR32_USBC_KILLBKS_MASK                             0x00002000
#define AVR32_USBC_KILLBKS_OFFSET                                   13
#define AVR32_USBC_KILLBKS_SIZE                                      1
#define AVR32_USBC_KILLBK_MASK                              0x00002000
#define AVR32_USBC_KILLBK_OFFSET                                    13
#define AVR32_USBC_KILLBK_SIZE                                       1
#define AVR32_USBC_LOADCNTA                                         15
#define AVR32_USBC_LOADCNTA_MASK                            0x00008000
#define AVR32_USBC_LOADCNTA_OFFSET                                  15
#define AVR32_USBC_LOADCNTA_SIZE                                     1
#define AVR32_USBC_LOADCNTB                                         23
#define AVR32_USBC_LOADCNTB_MASK                            0x00800000
#define AVR32_USBC_LOADCNTB_OFFSET                                  23
#define AVR32_USBC_LOADCNTB_SIZE                                     1
#define AVR32_USBC_LOADSOFCNT                                       31
#define AVR32_USBC_LOADSOFCNT_MASK                          0x80000000
#define AVR32_USBC_LOADSOFCNT_OFFSET                                31
#define AVR32_USBC_LOADSOFCNT_SIZE                                   1
#define AVR32_USBC_LOOPBACKMODE                                      2
#define AVR32_USBC_LOOPBACKMODE_MASK                        0x00000004
#define AVR32_USBC_LOOPBACKMODE_OFFSET                               2
#define AVR32_USBC_LOOPBACKMODE_SIZE                                 1
#define AVR32_USBC_LOW                                      0x00000002
#define AVR32_USBC_LS                                               12
#define AVR32_USBC_LS_MASK                                  0x00001000
#define AVR32_USBC_LS_OFFSET                                        12
#define AVR32_USBC_LS_SIZE                                           1
#define AVR32_USBC_MDATAE                                            8
#define AVR32_USBC_MDATAEC                                           8
#define AVR32_USBC_MDATAEC_MASK                             0x00000100
#define AVR32_USBC_MDATAEC_OFFSET                                    8
#define AVR32_USBC_MDATAEC_SIZE                                      1
#define AVR32_USBC_MDATAES                                           8
#define AVR32_USBC_MDATAES_MASK                             0x00000100
#define AVR32_USBC_MDATAES_OFFSET                                    8
#define AVR32_USBC_MDATAES_SIZE                                      1
#define AVR32_USBC_MDATAE_MASK                              0x00000100
#define AVR32_USBC_MDATAE_OFFSET                                     8
#define AVR32_USBC_MDATAE_SIZE                                       1
#define AVR32_USBC_METAL_FIX_NUM                                    16
#define AVR32_USBC_METAL_FIX_NUM_MASK                       0x00070000
#define AVR32_USBC_METAL_FIX_NUM_OFFSET                             16
#define AVR32_USBC_METAL_FIX_NUM_SIZE                                3
#define AVR32_USBC_MFNUM                                             0
#define AVR32_USBC_MFNUM_MASK                               0x00000007
#define AVR32_USBC_MFNUM_OFFSET                                      0
#define AVR32_USBC_MFNUM_SIZE                                        3
#define AVR32_USBC_MSOF                                              1
#define AVR32_USBC_MSOFC                                             1
#define AVR32_USBC_MSOFC_MASK                               0x00000002
#define AVR32_USBC_MSOFC_OFFSET                                      1
#define AVR32_USBC_MSOFC_SIZE                                        1
#define AVR32_USBC_MSOFE                                             1
#define AVR32_USBC_MSOFEC                                            1
#define AVR32_USBC_MSOFEC_MASK                              0x00000002
#define AVR32_USBC_MSOFEC_OFFSET                                     1
#define AVR32_USBC_MSOFEC_SIZE                                       1
#define AVR32_USBC_MSOFES                                            1
#define AVR32_USBC_MSOFES_MASK                              0x00000002
#define AVR32_USBC_MSOFES_OFFSET                                     1
#define AVR32_USBC_MSOFES_SIZE                                       1
#define AVR32_USBC_MSOFE_MASK                               0x00000002
#define AVR32_USBC_MSOFE_OFFSET                                      1
#define AVR32_USBC_MSOFE_SIZE                                        1
#define AVR32_USBC_MSOFS                                             1
#define AVR32_USBC_MSOFS_MASK                               0x00000002
#define AVR32_USBC_MSOFS_OFFSET                                      1
#define AVR32_USBC_MSOFS_SIZE                                        1
#define AVR32_USBC_MSOF_MASK                                0x00000002
#define AVR32_USBC_MSOF_OFFSET                                       1
#define AVR32_USBC_MSOF_SIZE                                         1
#define AVR32_USBC_NAKEDE                                            4
#define AVR32_USBC_NAKEDEC                                           4
#define AVR32_USBC_NAKEDEC_MASK                             0x00000010
#define AVR32_USBC_NAKEDEC_OFFSET                                    4
#define AVR32_USBC_NAKEDEC_SIZE                                      1
#define AVR32_USBC_NAKEDES                                           4
#define AVR32_USBC_NAKEDES_MASK                             0x00000010
#define AVR32_USBC_NAKEDES_OFFSET                                    4
#define AVR32_USBC_NAKEDES_SIZE                                      1
#define AVR32_USBC_NAKEDE_MASK                              0x00000010
#define AVR32_USBC_NAKEDE_OFFSET                                     4
#define AVR32_USBC_NAKEDE_SIZE                                       1
#define AVR32_USBC_NAKEDI                                            4
#define AVR32_USBC_NAKEDIC                                           4
#define AVR32_USBC_NAKEDIC_MASK                             0x00000010
#define AVR32_USBC_NAKEDIC_OFFSET                                    4
#define AVR32_USBC_NAKEDIC_SIZE                                      1
#define AVR32_USBC_NAKEDIS                                           4
#define AVR32_USBC_NAKEDIS_MASK                             0x00000010
#define AVR32_USBC_NAKEDIS_OFFSET                                    4
#define AVR32_USBC_NAKEDIS_SIZE                                      1
#define AVR32_USBC_NAKEDI_MASK                              0x00000010
#define AVR32_USBC_NAKEDI_OFFSET                                     4
#define AVR32_USBC_NAKEDI_SIZE                                       1
#define AVR32_USBC_NAKINE                                            4
#define AVR32_USBC_NAKINEC                                           4
#define AVR32_USBC_NAKINEC_MASK                             0x00000010
#define AVR32_USBC_NAKINEC_OFFSET                                    4
#define AVR32_USBC_NAKINEC_SIZE                                      1
#define AVR32_USBC_NAKINES                                           4
#define AVR32_USBC_NAKINES_MASK                             0x00000010
#define AVR32_USBC_NAKINES_OFFSET                                    4
#define AVR32_USBC_NAKINES_SIZE                                      1
#define AVR32_USBC_NAKINE_MASK                              0x00000010
#define AVR32_USBC_NAKINE_OFFSET                                     4
#define AVR32_USBC_NAKINE_SIZE                                       1
#define AVR32_USBC_NAKINI                                            4
#define AVR32_USBC_NAKINIC                                           4
#define AVR32_USBC_NAKINIC_MASK                             0x00000010
#define AVR32_USBC_NAKINIC_OFFSET                                    4
#define AVR32_USBC_NAKINIC_SIZE                                      1
#define AVR32_USBC_NAKINIS                                           4
#define AVR32_USBC_NAKINIS_MASK                             0x00000010
#define AVR32_USBC_NAKINIS_OFFSET                                    4
#define AVR32_USBC_NAKINIS_SIZE                                      1
#define AVR32_USBC_NAKINI_MASK                              0x00000010
#define AVR32_USBC_NAKINI_OFFSET                                     4
#define AVR32_USBC_NAKINI_SIZE                                       1
#define AVR32_USBC_NAKOUTE                                           3
#define AVR32_USBC_NAKOUTEC                                          3
#define AVR32_USBC_NAKOUTEC_MASK                            0x00000008
#define AVR32_USBC_NAKOUTEC_OFFSET                                   3
#define AVR32_USBC_NAKOUTEC_SIZE                                     1
#define AVR32_USBC_NAKOUTES                                          3
#define AVR32_USBC_NAKOUTES_MASK                            0x00000008
#define AVR32_USBC_NAKOUTES_OFFSET                                   3
#define AVR32_USBC_NAKOUTES_SIZE                                     1
#define AVR32_USBC_NAKOUTE_MASK                             0x00000008
#define AVR32_USBC_NAKOUTE_OFFSET                                    3
#define AVR32_USBC_NAKOUTE_SIZE                                      1
#define AVR32_USBC_NAKOUTI                                           3
#define AVR32_USBC_NAKOUTIC                                          3
#define AVR32_USBC_NAKOUTIC_MASK                            0x00000008
#define AVR32_USBC_NAKOUTIC_OFFSET                                   3
#define AVR32_USBC_NAKOUTIC_SIZE                                     1
#define AVR32_USBC_NAKOUTIS                                          3
#define AVR32_USBC_NAKOUTIS_MASK                            0x00000008
#define AVR32_USBC_NAKOUTIS_OFFSET                                   3
#define AVR32_USBC_NAKOUTIS_SIZE                                     1
#define AVR32_USBC_NAKOUTI_MASK                             0x00000008
#define AVR32_USBC_NAKOUTI_OFFSET                                    3
#define AVR32_USBC_NAKOUTI_SIZE                                      1
#define AVR32_USBC_NBTRANS                                          13
#define AVR32_USBC_NBTRANS_MASK                             0x00006000
#define AVR32_USBC_NBTRANS_OFFSET                                   13
#define AVR32_USBC_NBTRANS_SIZE                                      2
#define AVR32_USBC_NBUSYBK                                          12
#define AVR32_USBC_NBUSYBKE                                         12
#define AVR32_USBC_NBUSYBKEC                                        12
#define AVR32_USBC_NBUSYBKEC_MASK                           0x00001000
#define AVR32_USBC_NBUSYBKEC_OFFSET                                 12
#define AVR32_USBC_NBUSYBKEC_SIZE                                    1
#define AVR32_USBC_NBUSYBKES                                        12
#define AVR32_USBC_NBUSYBKES_MASK                           0x00001000
#define AVR32_USBC_NBUSYBKES_OFFSET                                 12
#define AVR32_USBC_NBUSYBKES_SIZE                                    1
#define AVR32_USBC_NBUSYBKE_MASK                            0x00001000
#define AVR32_USBC_NBUSYBKE_OFFSET                                  12
#define AVR32_USBC_NBUSYBKE_SIZE                                     1
#define AVR32_USBC_NBUSYBKS                                         12
#define AVR32_USBC_NBUSYBKS_MASK                            0x00001000
#define AVR32_USBC_NBUSYBKS_OFFSET                                  12
#define AVR32_USBC_NBUSYBKS_SIZE                                     1
#define AVR32_USBC_NBUSYBK_MASK                             0x00003000
#define AVR32_USBC_NBUSYBK_OFFSET                                   12
#define AVR32_USBC_NBUSYBK_SIZE                                      2
#define AVR32_USBC_NYETDIS                                          17
#define AVR32_USBC_NYETDISC                                         17
#define AVR32_USBC_NYETDISC_MASK                            0x00020000
#define AVR32_USBC_NYETDISC_OFFSET                                  17
#define AVR32_USBC_NYETDISC_SIZE                                     1
#define AVR32_USBC_NYETDISS                                         17
#define AVR32_USBC_NYETDISS_MASK                            0x00020000
#define AVR32_USBC_NYETDISS_OFFSET                                  17
#define AVR32_USBC_NYETDISS_SIZE                                     1
#define AVR32_USBC_NYETDIS_MASK                             0x00020000
#define AVR32_USBC_NYETDIS_OFFSET                                   17
#define AVR32_USBC_NYETDIS_SIZE                                      1
#define AVR32_USBC_OPMODE2                                          16
#define AVR32_USBC_OPMODE2_MASK                             0x00010000
#define AVR32_USBC_OPMODE2_OFFSET                                   16
#define AVR32_USBC_OPMODE2_SIZE                                      1
#define AVR32_USBC_OTGPADE                                          12
#define AVR32_USBC_OTGPADE_MASK                             0x00001000
#define AVR32_USBC_OTGPADE_OFFSET                                   12
#define AVR32_USBC_OTGPADE_SIZE                                      1
#define AVR32_USBC_P0INT                                             8
#define AVR32_USBC_P0INTE                                            8
#define AVR32_USBC_P0INTEC                                           8
#define AVR32_USBC_P0INTEC_MASK                             0x00000100
#define AVR32_USBC_P0INTEC_OFFSET                                    8
#define AVR32_USBC_P0INTEC_SIZE                                      1
#define AVR32_USBC_P0INTES                                           8
#define AVR32_USBC_P0INTES_MASK                             0x00000100
#define AVR32_USBC_P0INTES_OFFSET                                    8
#define AVR32_USBC_P0INTES_SIZE                                      1
#define AVR32_USBC_P0INTE_MASK                              0x00000100
#define AVR32_USBC_P0INTE_OFFSET                                     8
#define AVR32_USBC_P0INTE_SIZE                                       1
#define AVR32_USBC_P0INT_MASK                               0x00000100
#define AVR32_USBC_P0INT_OFFSET                                      8
#define AVR32_USBC_P0INT_SIZE                                        1
#define AVR32_USBC_P1INT                                             9
#define AVR32_USBC_P1INTE                                            9
#define AVR32_USBC_P1INTEC                                           9
#define AVR32_USBC_P1INTEC_MASK                             0x00000200
#define AVR32_USBC_P1INTEC_OFFSET                                    9
#define AVR32_USBC_P1INTEC_SIZE                                      1
#define AVR32_USBC_P1INTES                                           9
#define AVR32_USBC_P1INTES_MASK                             0x00000200
#define AVR32_USBC_P1INTES_OFFSET                                    9
#define AVR32_USBC_P1INTES_SIZE                                      1
#define AVR32_USBC_P1INTE_MASK                              0x00000200
#define AVR32_USBC_P1INTE_OFFSET                                     9
#define AVR32_USBC_P1INTE_SIZE                                       1
#define AVR32_USBC_P1INT_MASK                               0x00000200
#define AVR32_USBC_P1INT_OFFSET                                      9
#define AVR32_USBC_P1INT_SIZE                                        1
#define AVR32_USBC_P2INT                                            10
#define AVR32_USBC_P2INTE                                           10
#define AVR32_USBC_P2INTEC                                          10
#define AVR32_USBC_P2INTEC_MASK                             0x00000400
#define AVR32_USBC_P2INTEC_OFFSET                                   10
#define AVR32_USBC_P2INTEC_SIZE                                      1
#define AVR32_USBC_P2INTES                                          10
#define AVR32_USBC_P2INTES_MASK                             0x00000400
#define AVR32_USBC_P2INTES_OFFSET                                   10
#define AVR32_USBC_P2INTES_SIZE                                      1
#define AVR32_USBC_P2INTE_MASK                              0x00000400
#define AVR32_USBC_P2INTE_OFFSET                                    10
#define AVR32_USBC_P2INTE_SIZE                                       1
#define AVR32_USBC_P2INT_MASK                               0x00000400
#define AVR32_USBC_P2INT_OFFSET                                     10
#define AVR32_USBC_P2INT_SIZE                                        1
#define AVR32_USBC_P3INT                                            11
#define AVR32_USBC_P3INTE                                           11
#define AVR32_USBC_P3INTEC                                          11
#define AVR32_USBC_P3INTEC_MASK                             0x00000800
#define AVR32_USBC_P3INTEC_OFFSET                                   11
#define AVR32_USBC_P3INTEC_SIZE                                      1
#define AVR32_USBC_P3INTES                                          11
#define AVR32_USBC_P3INTES_MASK                             0x00000800
#define AVR32_USBC_P3INTES_OFFSET                                   11
#define AVR32_USBC_P3INTES_SIZE                                      1
#define AVR32_USBC_P3INTE_MASK                              0x00000800
#define AVR32_USBC_P3INTE_OFFSET                                    11
#define AVR32_USBC_P3INTE_SIZE                                       1
#define AVR32_USBC_P3INT_MASK                               0x00000800
#define AVR32_USBC_P3INT_OFFSET                                     11
#define AVR32_USBC_P3INT_SIZE                                        1
#define AVR32_USBC_P4INT                                            12
#define AVR32_USBC_P4INTE                                           12
#define AVR32_USBC_P4INTEC                                          12
#define AVR32_USBC_P4INTEC_MASK                             0x00001000
#define AVR32_USBC_P4INTEC_OFFSET                                   12
#define AVR32_USBC_P4INTEC_SIZE                                      1
#define AVR32_USBC_P4INTES                                          12
#define AVR32_USBC_P4INTES_MASK                             0x00001000
#define AVR32_USBC_P4INTES_OFFSET                                   12
#define AVR32_USBC_P4INTES_SIZE                                      1
#define AVR32_USBC_P4INTE_MASK                              0x00001000
#define AVR32_USBC_P4INTE_OFFSET                                    12
#define AVR32_USBC_P4INTE_SIZE                                       1
#define AVR32_USBC_P4INT_MASK                               0x00001000
#define AVR32_USBC_P4INT_OFFSET                                     12
#define AVR32_USBC_P4INT_SIZE                                        1
#define AVR32_USBC_P5INT                                            13
#define AVR32_USBC_P5INTE                                           13
#define AVR32_USBC_P5INTEC                                          13
#define AVR32_USBC_P5INTEC_MASK                             0x00002000
#define AVR32_USBC_P5INTEC_OFFSET                                   13
#define AVR32_USBC_P5INTEC_SIZE                                      1
#define AVR32_USBC_P5INTES                                          13
#define AVR32_USBC_P5INTES_MASK                             0x00002000
#define AVR32_USBC_P5INTES_OFFSET                                   13
#define AVR32_USBC_P5INTES_SIZE                                      1
#define AVR32_USBC_P5INTE_MASK                              0x00002000
#define AVR32_USBC_P5INTE_OFFSET                                    13
#define AVR32_USBC_P5INTE_SIZE                                       1
#define AVR32_USBC_P5INT_MASK                               0x00002000
#define AVR32_USBC_P5INT_OFFSET                                     13
#define AVR32_USBC_P5INT_SIZE                                        1
#define AVR32_USBC_P6INT                                            14
#define AVR32_USBC_P6INTE                                           14
#define AVR32_USBC_P6INTEC                                          14
#define AVR32_USBC_P6INTEC_MASK                             0x00004000
#define AVR32_USBC_P6INTEC_OFFSET                                   14
#define AVR32_USBC_P6INTEC_SIZE                                      1
#define AVR32_USBC_P6INTES                                          14
#define AVR32_USBC_P6INTES_MASK                             0x00004000
#define AVR32_USBC_P6INTES_OFFSET                                   14
#define AVR32_USBC_P6INTES_SIZE                                      1
#define AVR32_USBC_P6INTE_MASK                              0x00004000
#define AVR32_USBC_P6INTE_OFFSET                                    14
#define AVR32_USBC_P6INTE_SIZE                                       1
#define AVR32_USBC_P6INT_MASK                               0x00004000
#define AVR32_USBC_P6INT_OFFSET                                     14
#define AVR32_USBC_P6INT_SIZE                                        1
#define AVR32_USBC_P7INTE                                           15
#define AVR32_USBC_P7INTEC                                          15
#define AVR32_USBC_P7INTEC_MASK                             0x00008000
#define AVR32_USBC_P7INTEC_OFFSET                                   15
#define AVR32_USBC_P7INTEC_SIZE                                      1
#define AVR32_USBC_P7INTES                                          15
#define AVR32_USBC_P7INTES_MASK                             0x00008000
#define AVR32_USBC_P7INTES_OFFSET                                   15
#define AVR32_USBC_P7INTES_SIZE                                      1
#define AVR32_USBC_P7INTE_MASK                              0x00008000
#define AVR32_USBC_P7INTE_OFFSET                                    15
#define AVR32_USBC_P7INTE_SIZE                                       1
#define AVR32_USBC_PBK                                               2
#define AVR32_USBC_PBK_DOUBLE                               0x00000001
#define AVR32_USBC_PBK_MASK                                 0x00000004
#define AVR32_USBC_PBK_OFFSET                                        2
#define AVR32_USBC_PBK_SINGLE                               0x00000000
#define AVR32_USBC_PBK_SIZE                                          1
#define AVR32_USBC_PBYCT                                            20
#define AVR32_USBC_PBYCT_MASK                               0x7ff00000
#define AVR32_USBC_PBYCT_OFFSET                                     20
#define AVR32_USBC_PBYCT_SIZE                                       11
#define AVR32_USBC_PD_TMOUT_CNT                             0x00000002
#define AVR32_USBC_PEN0                                              0
#define AVR32_USBC_PEN0_MASK                                0x00000001
#define AVR32_USBC_PEN0_OFFSET                                       0
#define AVR32_USBC_PEN0_SIZE                                         1
#define AVR32_USBC_PEN1                                              1
#define AVR32_USBC_PEN1_MASK                                0x00000002
#define AVR32_USBC_PEN1_OFFSET                                       1
#define AVR32_USBC_PEN1_SIZE                                         1
#define AVR32_USBC_PEN2                                              2
#define AVR32_USBC_PEN2_MASK                                0x00000004
#define AVR32_USBC_PEN2_OFFSET                                       2
#define AVR32_USBC_PEN2_SIZE                                         1
#define AVR32_USBC_PEN3                                              3
#define AVR32_USBC_PEN3_MASK                                0x00000008
#define AVR32_USBC_PEN3_OFFSET                                       3
#define AVR32_USBC_PEN3_SIZE                                         1
#define AVR32_USBC_PEN4                                              4
#define AVR32_USBC_PEN4_MASK                                0x00000010
#define AVR32_USBC_PEN4_OFFSET                                       4
#define AVR32_USBC_PEN4_SIZE                                         1
#define AVR32_USBC_PEN5                                              5
#define AVR32_USBC_PEN5_MASK                                0x00000020
#define AVR32_USBC_PEN5_OFFSET                                       5
#define AVR32_USBC_PEN5_SIZE                                         1
#define AVR32_USBC_PEN6                                              6
#define AVR32_USBC_PEN6_MASK                                0x00000040
#define AVR32_USBC_PEN6_OFFSET                                       6
#define AVR32_USBC_PEN6_SIZE                                         1
#define AVR32_USBC_PEN7                                              7
#define AVR32_USBC_PEN7_MASK                                0x00000080
#define AVR32_USBC_PEN7_OFFSET                                       7
#define AVR32_USBC_PEN7_SIZE                                         1
#define AVR32_USBC_PERRE                                             3
#define AVR32_USBC_PERREC                                            3
#define AVR32_USBC_PERREC_MASK                              0x00000008
#define AVR32_USBC_PERREC_OFFSET                                     3
#define AVR32_USBC_PERREC_SIZE                                       1
#define AVR32_USBC_PERRES                                            3
#define AVR32_USBC_PERRES_MASK                              0x00000008
#define AVR32_USBC_PERRES_OFFSET                                     3
#define AVR32_USBC_PERRES_SIZE                                       1
#define AVR32_USBC_PERRE_MASK                               0x00000008
#define AVR32_USBC_PERRE_OFFSET                                      3
#define AVR32_USBC_PERRE_SIZE                                        1
#define AVR32_USBC_PERRI                                             3
#define AVR32_USBC_PERRIS                                            3
#define AVR32_USBC_PERRIS_MASK                              0x00000008
#define AVR32_USBC_PERRIS_OFFSET                                     3
#define AVR32_USBC_PERRIS_SIZE                                       1
#define AVR32_USBC_PERRI_MASK                               0x00000008
#define AVR32_USBC_PERRI_OFFSET                                      3
#define AVR32_USBC_PERRI_SIZE                                        1
#define AVR32_USBC_PFREEZE                                          17
#define AVR32_USBC_PFREEZEC                                         17
#define AVR32_USBC_PFREEZEC_MASK                            0x00020000
#define AVR32_USBC_PFREEZEC_OFFSET                                  17
#define AVR32_USBC_PFREEZEC_SIZE                                     1
#define AVR32_USBC_PFREEZES                                         17
#define AVR32_USBC_PFREEZES_MASK                            0x00020000
#define AVR32_USBC_PFREEZES_OFFSET                                  17
#define AVR32_USBC_PFREEZES_SIZE                                     1
#define AVR32_USBC_PFREEZE_MASK                             0x00020000
#define AVR32_USBC_PFREEZE_OFFSET                                   17
#define AVR32_USBC_PFREEZE_SIZE                                      1
#define AVR32_USBC_PINGEN                                           20
#define AVR32_USBC_PINGEN_MASK                              0x00100000
#define AVR32_USBC_PINGEN_OFFSET                                    20
#define AVR32_USBC_PINGEN_SIZE                                       1
#define AVR32_USBC_PSIZE                                             4
#define AVR32_USBC_PSIZE_1024                               0x00000007
#define AVR32_USBC_PSIZE_128                                0x00000004
#define AVR32_USBC_PSIZE_16                                 0x00000001
#define AVR32_USBC_PSIZE_256                                0x00000005
#define AVR32_USBC_PSIZE_32                                 0x00000002
#define AVR32_USBC_PSIZE_512                                0x00000006
#define AVR32_USBC_PSIZE_64                                 0x00000003
#define AVR32_USBC_PSIZE_8                                  0x00000000
#define AVR32_USBC_PSIZE_MASK                               0x00000070
#define AVR32_USBC_PSIZE_OFFSET                                      4
#define AVR32_USBC_PSIZE_SIZE                                        3
#define AVR32_USBC_PTOKEN                                            8
#define AVR32_USBC_PTOKEN_IN                                0x00000001
#define AVR32_USBC_PTOKEN_MASK                              0x00000300
#define AVR32_USBC_PTOKEN_OFFSET                                     8
#define AVR32_USBC_PTOKEN_OUT                               0x00000002
#define AVR32_USBC_PTOKEN_SETUP                             0x00000000
#define AVR32_USBC_PTOKEN_SIZE                                       2
#define AVR32_USBC_PTYPE                                            12
#define AVR32_USBC_PTYPE_BULK                               0x00000002
#define AVR32_USBC_PTYPE_CONTROL                            0x00000000
#define AVR32_USBC_PTYPE_INTERRUPT                          0x00000003
#define AVR32_USBC_PTYPE_ISOCHRONOUS                        0x00000001
#define AVR32_USBC_PTYPE_MASK                               0x00003000
#define AVR32_USBC_PTYPE_OFFSET                                     12
#define AVR32_USBC_PTYPE_SIZE                                        2
#define AVR32_USBC_P_DATA                                            0
#define AVR32_USBC_P_DATA_MASK                              0xffffffff
#define AVR32_USBC_P_DATA_OFFSET                                     0
#define AVR32_USBC_P_DATA_SIZE                                      32
#define AVR32_USBC_RAMACCEREC_SIZE                                   1
#define AVR32_USBC_RAMACCERES_SIZE                                   1
#define AVR32_USBC_RAMACCERE_SIZE                                    1
#define AVR32_USBC_RAMACCERIC_SIZE                                   1
#define AVR32_USBC_RAMACCERIS_SIZE                                   1
#define AVR32_USBC_RAMACCERI_SIZE                                    1
#define AVR32_USBC_REMOVEPUONTX                                      9
#define AVR32_USBC_REMOVEPUONTX_MASK                        0x00000200
#define AVR32_USBC_REMOVEPUONTX_OFFSET                               9
#define AVR32_USBC_REMOVEPUONTX_SIZE                                 1
#define AVR32_USBC_RESET                                             9
#define AVR32_USBC_RESET_MASK                               0x00000200
#define AVR32_USBC_RESET_OFFSET                                      9
#define AVR32_USBC_RESET_SIZE                                        1
#define AVR32_USBC_RESUME                                           10
#define AVR32_USBC_RESUME_MASK                              0x00000400
#define AVR32_USBC_RESUME_OFFSET                                    10
#define AVR32_USBC_RESUME_SIZE                                       1
#define AVR32_USBC_RMWKUP                                            9
#define AVR32_USBC_RMWKUP_MASK                              0x00000200
#define AVR32_USBC_RMWKUP_OFFSET                                     9
#define AVR32_USBC_RMWKUP_SIZE                                       1
#define AVR32_USBC_ROLEEXE                                           5
#define AVR32_USBC_ROLEEXE_MASK                             0x00000020
#define AVR32_USBC_ROLEEXE_OFFSET                                    5
#define AVR32_USBC_ROLEEXE_SIZE                                      1
#define AVR32_USBC_ROLEEXI                                           5
#define AVR32_USBC_ROLEEXIC                                          5
#define AVR32_USBC_ROLEEXIC_MASK                            0x00000020
#define AVR32_USBC_ROLEEXIC_OFFSET                                   5
#define AVR32_USBC_ROLEEXIC_SIZE                                     1
#define AVR32_USBC_ROLEEXIS                                          5
#define AVR32_USBC_ROLEEXIS_MASK                            0x00000020
#define AVR32_USBC_ROLEEXIS_OFFSET                                   5
#define AVR32_USBC_ROLEEXIS_SIZE                                     1
#define AVR32_USBC_ROLEEXI_MASK                             0x00000020
#define AVR32_USBC_ROLEEXI_OFFSET                                    5
#define AVR32_USBC_ROLEEXI_SIZE                                      1
#define AVR32_USBC_RSMEDI                                            3
#define AVR32_USBC_RSMEDIC                                           3
#define AVR32_USBC_RSMEDIC_MASK                             0x00000008
#define AVR32_USBC_RSMEDIC_OFFSET                                    3
#define AVR32_USBC_RSMEDIC_SIZE                                      1
#define AVR32_USBC_RSMEDIE                                           3
#define AVR32_USBC_RSMEDIEC                                          3
#define AVR32_USBC_RSMEDIEC_MASK                            0x00000008
#define AVR32_USBC_RSMEDIEC_OFFSET                                   3
#define AVR32_USBC_RSMEDIEC_SIZE                                     1
#define AVR32_USBC_RSMEDIES                                          3
#define AVR32_USBC_RSMEDIES_MASK                            0x00000008
#define AVR32_USBC_RSMEDIES_OFFSET                                   3
#define AVR32_USBC_RSMEDIES_SIZE                                     1
#define AVR32_USBC_RSMEDIE_MASK                             0x00000008
#define AVR32_USBC_RSMEDIE_OFFSET                                    3
#define AVR32_USBC_RSMEDIE_SIZE                                      1
#define AVR32_USBC_RSMEDIS                                           3
#define AVR32_USBC_RSMEDIS_MASK                             0x00000008
#define AVR32_USBC_RSMEDIS_OFFSET                                    3
#define AVR32_USBC_RSMEDIS_SIZE                                      1
#define AVR32_USBC_RSMEDI_MASK                              0x00000008
#define AVR32_USBC_RSMEDI_OFFSET                                     3
#define AVR32_USBC_RSMEDI_SIZE                                       1
#define AVR32_USBC_RSTDT                                            18
#define AVR32_USBC_RSTDTS                                           18
#define AVR32_USBC_RSTDTS_MASK                              0x00040000
#define AVR32_USBC_RSTDTS_OFFSET                                    18
#define AVR32_USBC_RSTDTS_SIZE                                       1
#define AVR32_USBC_RSTDT_MASK                               0x00040000
#define AVR32_USBC_RSTDT_OFFSET                                     18
#define AVR32_USBC_RSTDT_SIZE                                        1
#define AVR32_USBC_RSTI                                              2
#define AVR32_USBC_RSTIC                                             2
#define AVR32_USBC_RSTIC_MASK                               0x00000004
#define AVR32_USBC_RSTIC_OFFSET                                      2
#define AVR32_USBC_RSTIC_SIZE                                        1
#define AVR32_USBC_RSTIE                                             2
#define AVR32_USBC_RSTIEC                                            2
#define AVR32_USBC_RSTIEC_MASK                              0x00000004
#define AVR32_USBC_RSTIEC_OFFSET                                     2
#define AVR32_USBC_RSTIEC_SIZE                                       1
#define AVR32_USBC_RSTIES                                            2
#define AVR32_USBC_RSTIES_MASK                              0x00000004
#define AVR32_USBC_RSTIES_OFFSET                                     2
#define AVR32_USBC_RSTIES_SIZE                                       1
#define AVR32_USBC_RSTIE_MASK                               0x00000004
#define AVR32_USBC_RSTIE_OFFSET                                      2
#define AVR32_USBC_RSTIE_SIZE                                        1
#define AVR32_USBC_RSTIS                                             2
#define AVR32_USBC_RSTIS_MASK                               0x00000004
#define AVR32_USBC_RSTIS_OFFSET                                      2
#define AVR32_USBC_RSTIS_SIZE                                        1
#define AVR32_USBC_RSTI_MASK                                0x00000004
#define AVR32_USBC_RSTI_OFFSET                                       2
#define AVR32_USBC_RSTI_SIZE                                         1
#define AVR32_USBC_RWALL                                            16
#define AVR32_USBC_RWALL_MASK                               0x00010000
#define AVR32_USBC_RWALL_OFFSET                                     16
#define AVR32_USBC_RWALL_SIZE                                        1
#define AVR32_USBC_RXINE                                             0
#define AVR32_USBC_RXINEC                                            0
#define AVR32_USBC_RXINEC_MASK                              0x00000001
#define AVR32_USBC_RXINEC_OFFSET                                     0
#define AVR32_USBC_RXINEC_SIZE                                       1
#define AVR32_USBC_RXINES                                            0
#define AVR32_USBC_RXINES_MASK                              0x00000001
#define AVR32_USBC_RXINES_OFFSET                                     0
#define AVR32_USBC_RXINES_SIZE                                       1
#define AVR32_USBC_RXINE_MASK                               0x00000001
#define AVR32_USBC_RXINE_OFFSET                                      0
#define AVR32_USBC_RXINE_SIZE                                        1
#define AVR32_USBC_RXINI                                             0
#define AVR32_USBC_RXINIC                                            0
#define AVR32_USBC_RXINIC_MASK                              0x00000001
#define AVR32_USBC_RXINIC_OFFSET                                     0
#define AVR32_USBC_RXINIC_SIZE                                       1
#define AVR32_USBC_RXINIS                                            0
#define AVR32_USBC_RXINIS_MASK                              0x00000001
#define AVR32_USBC_RXINIS_OFFSET                                     0
#define AVR32_USBC_RXINIS_SIZE                                       1
#define AVR32_USBC_RXINI_MASK                               0x00000001
#define AVR32_USBC_RXINI_OFFSET                                      0
#define AVR32_USBC_RXINI_SIZE                                        1
#define AVR32_USBC_RXOUTE                                            1
#define AVR32_USBC_RXOUTEC                                           1
#define AVR32_USBC_RXOUTEC_MASK                             0x00000002
#define AVR32_USBC_RXOUTEC_OFFSET                                    1
#define AVR32_USBC_RXOUTEC_SIZE                                      1
#define AVR32_USBC_RXOUTES                                           1
#define AVR32_USBC_RXOUTES_MASK                             0x00000002
#define AVR32_USBC_RXOUTES_OFFSET                                    1
#define AVR32_USBC_RXOUTES_SIZE                                      1
#define AVR32_USBC_RXOUTE_MASK                              0x00000002
#define AVR32_USBC_RXOUTE_OFFSET                                     1
#define AVR32_USBC_RXOUTE_SIZE                                       1
#define AVR32_USBC_RXOUTI                                            1
#define AVR32_USBC_RXOUTIC                                           1
#define AVR32_USBC_RXOUTIC_MASK                             0x00000002
#define AVR32_USBC_RXOUTIC_OFFSET                                    1
#define AVR32_USBC_RXOUTIC_SIZE                                      1
#define AVR32_USBC_RXOUTIS                                           1
#define AVR32_USBC_RXOUTIS_MASK                             0x00000002
#define AVR32_USBC_RXOUTIS_OFFSET                                    1
#define AVR32_USBC_RXOUTIS_SIZE                                      1
#define AVR32_USBC_RXOUTI_MASK                              0x00000002
#define AVR32_USBC_RXOUTI_OFFSET                                     1
#define AVR32_USBC_RXOUTI_SIZE                                       1
#define AVR32_USBC_RXRSMI                                            4
#define AVR32_USBC_RXRSMIC                                           4
#define AVR32_USBC_RXRSMIC_MASK                             0x00000010
#define AVR32_USBC_RXRSMIC_OFFSET                                    4
#define AVR32_USBC_RXRSMIC_SIZE                                      1
#define AVR32_USBC_RXRSMIE                                           4
#define AVR32_USBC_RXRSMIEC                                          4
#define AVR32_USBC_RXRSMIEC_MASK                            0x00000010
#define AVR32_USBC_RXRSMIEC_OFFSET                                   4
#define AVR32_USBC_RXRSMIEC_SIZE                                     1
#define AVR32_USBC_RXRSMIES                                          4
#define AVR32_USBC_RXRSMIES_MASK                            0x00000010
#define AVR32_USBC_RXRSMIES_OFFSET                                   4
#define AVR32_USBC_RXRSMIES_SIZE                                     1
#define AVR32_USBC_RXRSMIE_MASK                             0x00000010
#define AVR32_USBC_RXRSMIE_OFFSET                                    4
#define AVR32_USBC_RXRSMIE_SIZE                                      1
#define AVR32_USBC_RXRSMIS                                           4
#define AVR32_USBC_RXRSMIS_MASK                             0x00000010
#define AVR32_USBC_RXRSMIS_OFFSET                                    4
#define AVR32_USBC_RXRSMIS_SIZE                                      1
#define AVR32_USBC_RXRSMI_MASK                              0x00000010
#define AVR32_USBC_RXRSMI_OFFSET                                     4
#define AVR32_USBC_RXRSMI_SIZE                                       1
#define AVR32_USBC_RXSTALLDE                                         6
#define AVR32_USBC_RXSTALLDEC                                        6
#define AVR32_USBC_RXSTALLDEC_MASK                          0x00000040
#define AVR32_USBC_RXSTALLDEC_OFFSET                                 6
#define AVR32_USBC_RXSTALLDEC_SIZE                                   1
#define AVR32_USBC_RXSTALLDES                                        6
#define AVR32_USBC_RXSTALLDES_MASK                          0x00000040
#define AVR32_USBC_RXSTALLDES_OFFSET                                 6
#define AVR32_USBC_RXSTALLDES_SIZE                                   1
#define AVR32_USBC_RXSTALLDE_MASK                           0x00000040
#define AVR32_USBC_RXSTALLDE_OFFSET                                  6
#define AVR32_USBC_RXSTALLDE_SIZE                                    1
#define AVR32_USBC_RXSTALLDI                                         6
#define AVR32_USBC_RXSTALLDIC                                        6
#define AVR32_USBC_RXSTALLDIC_MASK                          0x00000040
#define AVR32_USBC_RXSTALLDIC_OFFSET                                 6
#define AVR32_USBC_RXSTALLDIC_SIZE                                   1
#define AVR32_USBC_RXSTALLDIS                                        6
#define AVR32_USBC_RXSTALLDIS_MASK                          0x00000040
#define AVR32_USBC_RXSTALLDIS_OFFSET                                 6
#define AVR32_USBC_RXSTALLDIS_SIZE                                   1
#define AVR32_USBC_RXSTALLDI_MASK                           0x00000040
#define AVR32_USBC_RXSTALLDI_OFFSET                                  6
#define AVR32_USBC_RXSTALLDI_SIZE                                    1
#define AVR32_USBC_RXSTPE                                            2
#define AVR32_USBC_RXSTPEC                                           2
#define AVR32_USBC_RXSTPEC_MASK                             0x00000004
#define AVR32_USBC_RXSTPEC_OFFSET                                    2
#define AVR32_USBC_RXSTPEC_SIZE                                      1
#define AVR32_USBC_RXSTPES                                           2
#define AVR32_USBC_RXSTPES_MASK                             0x00000004
#define AVR32_USBC_RXSTPES_OFFSET                                    2
#define AVR32_USBC_RXSTPES_SIZE                                      1
#define AVR32_USBC_RXSTPE_MASK                              0x00000004
#define AVR32_USBC_RXSTPE_OFFSET                                     2
#define AVR32_USBC_RXSTPE_SIZE                                       1
#define AVR32_USBC_RXSTPI                                            2
#define AVR32_USBC_RXSTPIC                                           2
#define AVR32_USBC_RXSTPIC_MASK                             0x00000004
#define AVR32_USBC_RXSTPIC_OFFSET                                    2
#define AVR32_USBC_RXSTPIC_SIZE                                      1
#define AVR32_USBC_RXSTPIS                                           2
#define AVR32_USBC_RXSTPIS_MASK                             0x00000004
#define AVR32_USBC_RXSTPIS_OFFSET                                    2
#define AVR32_USBC_RXSTPIS_SIZE                                      1
#define AVR32_USBC_RXSTPI_MASK                              0x00000004
#define AVR32_USBC_RXSTPI_OFFSET                                     2
#define AVR32_USBC_RXSTPI_SIZE                                       1
#define AVR32_USBC_SETMDATA                                          8
#define AVR32_USBC_SETMDATA_MASK                            0x00000100
#define AVR32_USBC_SETMDATA_OFFSET                                   8
#define AVR32_USBC_SETMDATA_SIZE                                     1
#define AVR32_USBC_SETUP                                    0x00000000
#define AVR32_USBC_SINGLE                                   0x00000000
#define AVR32_USBC_SOF                                               2
#define AVR32_USBC_SOFC                                              2
#define AVR32_USBC_SOFCNTMAX                                        24
#define AVR32_USBC_SOFCNTMAX_MASK                           0x7f000000
#define AVR32_USBC_SOFCNTMAX_OFFSET                                 24
#define AVR32_USBC_SOFCNTMAX_SIZE                                    7
#define AVR32_USBC_SOFC_MASK                                0x00000004
#define AVR32_USBC_SOFC_OFFSET                                       2
#define AVR32_USBC_SOFC_SIZE                                         1
#define AVR32_USBC_SOFEC                                             2
#define AVR32_USBC_SOFEC_MASK                               0x00000004
#define AVR32_USBC_SOFEC_OFFSET                                      2
#define AVR32_USBC_SOFEC_SIZE                                        1
#define AVR32_USBC_SOFES                                             2
#define AVR32_USBC_SOFES_MASK                               0x00000004
#define AVR32_USBC_SOFES_OFFSET                                      2
#define AVR32_USBC_SOFES_SIZE                                        1
#define AVR32_USBC_SOFE_SIZE                                         1
#define AVR32_USBC_SOFS                                              2
#define AVR32_USBC_SOFS_MASK                                0x00000004
#define AVR32_USBC_SOFS_OFFSET                                       2
#define AVR32_USBC_SOFS_SIZE                                         1
#define AVR32_USBC_SOF_MASK                                 0x00000004
#define AVR32_USBC_SOF_OFFSET                                        2
#define AVR32_USBC_SOF_SIZE                                          1
#define AVR32_USBC_SPDCONF_SIZE                                      2
#define AVR32_USBC_SPEED                                            12
#define AVR32_USBC_SPEED_FULL                               0x00000000
#define AVR32_USBC_SPEED_LOW                                0x00000002
#define AVR32_USBC_SPEED_MASK                               0x00003000
#define AVR32_USBC_SPEED_OFFSET                                     12
#define AVR32_USBC_SPEED_SIZE                                        2
#define AVR32_USBC_SRPE                                              2
#define AVR32_USBC_SRPE_MASK                                0x00000004
#define AVR32_USBC_SRPE_OFFSET                                       2
#define AVR32_USBC_SRPE_SIZE                                         1
#define AVR32_USBC_SRPI                                              2
#define AVR32_USBC_SRPIC                                             2
#define AVR32_USBC_SRPIC_MASK                               0x00000004
#define AVR32_USBC_SRPIC_OFFSET                                      2
#define AVR32_USBC_SRPIC_SIZE                                        1
#define AVR32_USBC_SRPIS                                             2
#define AVR32_USBC_SRPIS_MASK                               0x00000004
#define AVR32_USBC_SRPIS_OFFSET                                      2
#define AVR32_USBC_SRPIS_SIZE                                        1
#define AVR32_USBC_SRPI_MASK                                0x00000004
#define AVR32_USBC_SRPI_OFFSET                                       2
#define AVR32_USBC_SRPI_SIZE                                         1
#define AVR32_USBC_SRPREQ                                           10
#define AVR32_USBC_SRPREQ_MASK                              0x00000400
#define AVR32_USBC_SRPREQ_OFFSET                                    10
#define AVR32_USBC_SRPREQ_SIZE                                       1
#define AVR32_USBC_SRPSEL                                            9
#define AVR32_USBC_SRPSEL_MASK                              0x00000200
#define AVR32_USBC_SRPSEL_OFFSET                                     9
#define AVR32_USBC_SRPSEL_SIZE                                       1
#define AVR32_USBC_SRP_DET_TMOUT                            0x00000003
#define AVR32_USBC_STALLEDE                                          6
#define AVR32_USBC_STALLEDEC                                         6
#define AVR32_USBC_STALLEDEC_MASK                           0x00000040
#define AVR32_USBC_STALLEDEC_OFFSET                                  6
#define AVR32_USBC_STALLEDEC_SIZE                                    1
#define AVR32_USBC_STALLEDES                                         6
#define AVR32_USBC_STALLEDES_MASK                           0x00000040
#define AVR32_USBC_STALLEDES_OFFSET                                  6
#define AVR32_USBC_STALLEDES_SIZE                                    1
#define AVR32_USBC_STALLEDE_MASK                            0x00000040
#define AVR32_USBC_STALLEDE_OFFSET                                   6
#define AVR32_USBC_STALLEDE_SIZE                                     1
#define AVR32_USBC_STALLEDI                                          6
#define AVR32_USBC_STALLEDIC                                         6
#define AVR32_USBC_STALLEDIC_MASK                           0x00000040
#define AVR32_USBC_STALLEDIC_OFFSET                                  6
#define AVR32_USBC_STALLEDIC_SIZE                                    1
#define AVR32_USBC_STALLEDIS                                         6
#define AVR32_USBC_STALLEDIS_MASK                           0x00000040
#define AVR32_USBC_STALLEDIS_OFFSET                                  6
#define AVR32_USBC_STALLEDIS_SIZE                                    1
#define AVR32_USBC_STALLEDI_MASK                            0x00000040
#define AVR32_USBC_STALLEDI_OFFSET                                   6
#define AVR32_USBC_STALLEDI_SIZE                                     1
#define AVR32_USBC_STALLRQ                                          19
#define AVR32_USBC_STALLRQC                                         19
#define AVR32_USBC_STALLRQC_MASK                            0x00080000
#define AVR32_USBC_STALLRQC_OFFSET                                  19
#define AVR32_USBC_STALLRQC_SIZE                                     1
#define AVR32_USBC_STALLRQS                                         19
#define AVR32_USBC_STALLRQS_MASK                            0x00080000
#define AVR32_USBC_STALLRQS_OFFSET                                  19
#define AVR32_USBC_STALLRQS_SIZE                                     1
#define AVR32_USBC_STALLRQ_MASK                             0x00080000
#define AVR32_USBC_STALLRQ_OFFSET                                   19
#define AVR32_USBC_STALLRQ_SIZE                                      1
#define AVR32_USBC_STOE                                              7
#define AVR32_USBC_STOE_MASK                                0x00000080
#define AVR32_USBC_STOE_OFFSET                                       7
#define AVR32_USBC_STOE_SIZE                                         1
#define AVR32_USBC_STOI                                              7
#define AVR32_USBC_STOIC                                             7
#define AVR32_USBC_STOIC_MASK                               0x00000080
#define AVR32_USBC_STOIC_OFFSET                                      7
#define AVR32_USBC_STOIC_SIZE                                        1
#define AVR32_USBC_STOIS                                             7
#define AVR32_USBC_STOIS_MASK                               0x00000080
#define AVR32_USBC_STOIS_OFFSET                                      7
#define AVR32_USBC_STOIS_SIZE                                        1
#define AVR32_USBC_STOI_MASK                                0x00000080
#define AVR32_USBC_STOI_OFFSET                                       7
#define AVR32_USBC_STOI_SIZE                                         1
#define AVR32_USBC_SUSP                                              0
#define AVR32_USBC_SUSPC                                             0
#define AVR32_USBC_SUSPC_MASK                               0x00000001
#define AVR32_USBC_SUSPC_OFFSET                                      0
#define AVR32_USBC_SUSPC_SIZE                                        1
#define AVR32_USBC_SUSPE                                             0
#define AVR32_USBC_SUSPEC                                            0
#define AVR32_USBC_SUSPEC_MASK                              0x00000001
#define AVR32_USBC_SUSPEC_OFFSET                                     0
#define AVR32_USBC_SUSPEC_SIZE                                       1
#define AVR32_USBC_SUSPES                                            0
#define AVR32_USBC_SUSPES_MASK                              0x00000001
#define AVR32_USBC_SUSPES_OFFSET                                     0
#define AVR32_USBC_SUSPES_SIZE                                       1
#define AVR32_USBC_SUSPE_MASK                               0x00000001
#define AVR32_USBC_SUSPE_OFFSET                                      0
#define AVR32_USBC_SUSPE_SIZE                                        1
#define AVR32_USBC_SUSPS                                             0
#define AVR32_USBC_SUSPS_MASK                               0x00000001
#define AVR32_USBC_SUSPS_OFFSET                                      0
#define AVR32_USBC_SUSPS_SIZE                                        1
#define AVR32_USBC_SUSP_MASK                                0x00000001
#define AVR32_USBC_SUSP_OFFSET                                       0
#define AVR32_USBC_SUSP_SIZE                                         1
#define AVR32_USBC_TIMPAGE                                          20
#define AVR32_USBC_TIMPAGE_A_WAIT_VRISE                     0x00000000
#define AVR32_USBC_TIMPAGE_MASK                             0x00300000
#define AVR32_USBC_TIMPAGE_OFFSET                                   20
#define AVR32_USBC_TIMPAGE_PD_TMOUT_CNT                     0x00000002
#define AVR32_USBC_TIMPAGE_SIZE                                      2
#define AVR32_USBC_TIMPAGE_SRP_DET_TMOUT                    0x00000003
#define AVR32_USBC_TIMPAGE_VB_BUS_PULSING                   0x00000001
#define AVR32_USBC_TIMVALUE                                         16
#define AVR32_USBC_TIMVALUE_MASK                            0x00030000
#define AVR32_USBC_TIMVALUE_OFFSET                                  16
#define AVR32_USBC_TIMVALUE_SIZE                                     2
#define AVR32_USBC_TRIPLE                                   0x00000002
#define AVR32_USBC_TSTJ                                             13
#define AVR32_USBC_TSTJ_MASK                                0x00002000
#define AVR32_USBC_TSTJ_OFFSET                                      13
#define AVR32_USBC_TSTJ_SIZE                                         1
#define AVR32_USBC_TSTK                                             14
#define AVR32_USBC_TSTK_MASK                                0x00004000
#define AVR32_USBC_TSTK_OFFSET                                      14
#define AVR32_USBC_TSTK_SIZE                                         1
#define AVR32_USBC_TSTPCKT                                          15
#define AVR32_USBC_TSTPCKT_MASK                             0x00008000
#define AVR32_USBC_TSTPCKT_OFFSET                                   15
#define AVR32_USBC_TSTPCKT_SIZE                                      1
#define AVR32_USBC_TXINE                                             0
#define AVR32_USBC_TXINEC                                            0
#define AVR32_USBC_TXINEC_MASK                              0x00000001
#define AVR32_USBC_TXINEC_OFFSET                                     0
#define AVR32_USBC_TXINEC_SIZE                                       1
#define AVR32_USBC_TXINES                                            0
#define AVR32_USBC_TXINES_MASK                              0x00000001
#define AVR32_USBC_TXINES_OFFSET                                     0
#define AVR32_USBC_TXINES_SIZE                                       1
#define AVR32_USBC_TXINE_MASK                               0x00000001
#define AVR32_USBC_TXINE_OFFSET                                      0
#define AVR32_USBC_TXINE_SIZE                                        1
#define AVR32_USBC_TXINI                                             0
#define AVR32_USBC_TXINIC                                            0
#define AVR32_USBC_TXINIC_MASK                              0x00000001
#define AVR32_USBC_TXINIC_OFFSET                                     0
#define AVR32_USBC_TXINIC_SIZE                                       1
#define AVR32_USBC_TXINIS                                            0
#define AVR32_USBC_TXINIS_MASK                              0x00000001
#define AVR32_USBC_TXINIS_OFFSET                                     0
#define AVR32_USBC_TXINIS_SIZE                                       1
#define AVR32_USBC_TXINI_MASK                               0x00000001
#define AVR32_USBC_TXINI_OFFSET                                      0
#define AVR32_USBC_TXINI_SIZE                                        1
#define AVR32_USBC_TXOUTE                                            1
#define AVR32_USBC_TXOUTEC                                           1
#define AVR32_USBC_TXOUTEC_MASK                             0x00000002
#define AVR32_USBC_TXOUTEC_OFFSET                                    1
#define AVR32_USBC_TXOUTEC_SIZE                                      1
#define AVR32_USBC_TXOUTES                                           1
#define AVR32_USBC_TXOUTES_MASK                             0x00000002
#define AVR32_USBC_TXOUTES_OFFSET                                    1
#define AVR32_USBC_TXOUTES_SIZE                                      1
#define AVR32_USBC_TXOUTE_MASK                              0x00000002
#define AVR32_USBC_TXOUTE_OFFSET                                     1
#define AVR32_USBC_TXOUTE_SIZE                                       1
#define AVR32_USBC_TXOUTI                                            1
#define AVR32_USBC_TXOUTIC                                           1
#define AVR32_USBC_TXOUTIC_MASK                             0x00000002
#define AVR32_USBC_TXOUTIC_OFFSET                                    1
#define AVR32_USBC_TXOUTIC_SIZE                                      1
#define AVR32_USBC_TXOUTIS                                           1
#define AVR32_USBC_TXOUTIS_MASK                             0x00000002
#define AVR32_USBC_TXOUTIS_OFFSET                                    1
#define AVR32_USBC_TXOUTIS_SIZE                                      1
#define AVR32_USBC_TXOUTI_MASK                              0x00000002
#define AVR32_USBC_TXOUTI_OFFSET                                     1
#define AVR32_USBC_TXOUTI_SIZE                                       1
#define AVR32_USBC_TXSTPE                                            2
#define AVR32_USBC_TXSTPEC                                           2
#define AVR32_USBC_TXSTPEC_MASK                             0x00000004
#define AVR32_USBC_TXSTPEC_OFFSET                                    2
#define AVR32_USBC_TXSTPEC_SIZE                                      1
#define AVR32_USBC_TXSTPES                                           2
#define AVR32_USBC_TXSTPES_MASK                             0x00000004
#define AVR32_USBC_TXSTPES_OFFSET                                    2
#define AVR32_USBC_TXSTPES_SIZE                                      1
#define AVR32_USBC_TXSTPE_MASK                              0x00000004
#define AVR32_USBC_TXSTPE_OFFSET                                     2
#define AVR32_USBC_TXSTPE_SIZE                                       1
#define AVR32_USBC_TXSTPI                                            2
#define AVR32_USBC_TXSTPIC                                           2
#define AVR32_USBC_TXSTPIC_MASK                             0x00000004
#define AVR32_USBC_TXSTPIC_OFFSET                                    2
#define AVR32_USBC_TXSTPIC_SIZE                                      1
#define AVR32_USBC_TXSTPIS                                           2
#define AVR32_USBC_TXSTPIS_MASK                             0x00000004
#define AVR32_USBC_TXSTPIS_OFFSET                                    2
#define AVR32_USBC_TXSTPIS_SIZE                                      1
#define AVR32_USBC_TXSTPI_MASK                              0x00000004
#define AVR32_USBC_TXSTPI_OFFSET                                     2
#define AVR32_USBC_TXSTPI_SIZE                                       1
#define AVR32_USBC_UADD                                              0
#define AVR32_USBC_UADDRSIZE                                0x00000820
#define AVR32_USBC_UADDRSIZE_MASK                           0xffffffff
#define AVR32_USBC_UADDRSIZE_OFFSET                                  0
#define AVR32_USBC_UADDRSIZE_RESETVALUE                     0x00001000
#define AVR32_USBC_UADDRSIZE_SIZE                                   32
#define AVR32_USBC_UADDRSIZE_UADDRSIZE                               0
#define AVR32_USBC_UADDRSIZE_UADDRSIZE_MASK                 0xffffffff
#define AVR32_USBC_UADDRSIZE_UADDRSIZE_OFFSET                        0
#define AVR32_USBC_UADDRSIZE_UADDRSIZE_SIZE                         32
#define AVR32_USBC_UADD_MASK                                0x0000007f
#define AVR32_USBC_UADD_OFFSET                                       0
#define AVR32_USBC_UADD_SIZE                                         7
#define AVR32_USBC_UATST1                                   0x00000810
#define AVR32_USBC_UATST1_COUNTERA                                   0
#define AVR32_USBC_UATST1_COUNTERA_MASK                     0x00007fff
#define AVR32_USBC_UATST1_COUNTERA_OFFSET                            0
#define AVR32_USBC_UATST1_COUNTERA_SIZE                             15
#define AVR32_USBC_UATST1_COUNTERB                                  16
#define AVR32_USBC_UATST1_COUNTERB_MASK                     0x003f0000
#define AVR32_USBC_UATST1_COUNTERB_OFFSET                           16
#define AVR32_USBC_UATST1_COUNTERB_SIZE                              6
#define AVR32_USBC_UATST1_LOADCNTA                                  15
#define AVR32_USBC_UATST1_LOADCNTA_MASK                     0x00008000
#define AVR32_USBC_UATST1_LOADCNTA_OFFSET                           15
#define AVR32_USBC_UATST1_LOADCNTA_SIZE                              1
#define AVR32_USBC_UATST1_LOADCNTB                                  23
#define AVR32_USBC_UATST1_LOADCNTB_MASK                     0x00800000
#define AVR32_USBC_UATST1_LOADCNTB_OFFSET                           23
#define AVR32_USBC_UATST1_LOADCNTB_SIZE                              1
#define AVR32_USBC_UATST1_LOADSOFCNT                                31
#define AVR32_USBC_UATST1_LOADSOFCNT_MASK                   0x80000000
#define AVR32_USBC_UATST1_LOADSOFCNT_OFFSET                         31
#define AVR32_USBC_UATST1_LOADSOFCNT_SIZE                            1
#define AVR32_USBC_UATST1_MASK                              0xffbfffff
#define AVR32_USBC_UATST1_RESETVALUE                        0x00000000
#define AVR32_USBC_UATST1_SOFCNTMAX                                 24
#define AVR32_USBC_UATST1_SOFCNTMAX_MASK                    0x7f000000
#define AVR32_USBC_UATST1_SOFCNTMAX_OFFSET                          24
#define AVR32_USBC_UATST1_SOFCNTMAX_SIZE                             7
#define AVR32_USBC_UATST2                                   0x00000814
#define AVR32_USBC_UATST2_BYPASSDPLL                                 5
#define AVR32_USBC_UATST2_BYPASSDPLL_MASK                   0x00000020
#define AVR32_USBC_UATST2_BYPASSDPLL_OFFSET                          5
#define AVR32_USBC_UATST2_BYPASSDPLL_SIZE                            1
#define AVR32_USBC_UATST2_DISBALEGATEDCLOCK                          3
#define AVR32_USBC_UATST2_DISBALEGATEDCLOCK_MASK            0x00000008
#define AVR32_USBC_UATST2_DISBALEGATEDCLOCK_OFFSET                   3
#define AVR32_USBC_UATST2_DISBALEGATEDCLOCK_SIZE                     1
#define AVR32_USBC_UATST2_FORCEHSRESETTO50MS                         7
#define AVR32_USBC_UATST2_FORCEHSRESETTO50MS_MASK           0x00000080
#define AVR32_USBC_UATST2_FORCEHSRESETTO50MS_OFFSET                  7
#define AVR32_USBC_UATST2_FORCEHSRESETTO50MS_SIZE                    1
#define AVR32_USBC_UATST2_FORCESUSPENDMTO1                           4
#define AVR32_USBC_UATST2_FORCESUSPENDMTO1_MASK             0x00000010
#define AVR32_USBC_UATST2_FORCESUSPENDMTO1_OFFSET                    4
#define AVR32_USBC_UATST2_FORCESUSPENDMTO1_SIZE                      1
#define AVR32_USBC_UATST2_FULLDETACHEN                               0
#define AVR32_USBC_UATST2_FULLDETACHEN_MASK                 0x00000001
#define AVR32_USBC_UATST2_FULLDETACHEN_OFFSET                        0
#define AVR32_USBC_UATST2_FULLDETACHEN_SIZE                          1
#define AVR32_USBC_UATST2_HOSTHSDISCONNECTDISABLE                    6
#define AVR32_USBC_UATST2_HOSTHSDISCONNECTDISABLE_MASK      0x00000040
#define AVR32_USBC_UATST2_HOSTHSDISCONNECTDISABLE_OFFSET             6
#define AVR32_USBC_UATST2_HOSTHSDISCONNECTDISABLE_SIZE               1
#define AVR32_USBC_UATST2_HSSERIALMODE                               1
#define AVR32_USBC_UATST2_HSSERIALMODE_MASK                 0x00000002
#define AVR32_USBC_UATST2_HSSERIALMODE_OFFSET                        1
#define AVR32_USBC_UATST2_HSSERIALMODE_SIZE                          1
#define AVR32_USBC_UATST2_LOOPBACKMODE                               2
#define AVR32_USBC_UATST2_LOOPBACKMODE_MASK                 0x00000004
#define AVR32_USBC_UATST2_LOOPBACKMODE_OFFSET                        2
#define AVR32_USBC_UATST2_LOOPBACKMODE_SIZE                          1
#define AVR32_USBC_UATST2_MASK                              0x000003ff
#define AVR32_USBC_UATST2_REMOVEPUONTX                               9
#define AVR32_USBC_UATST2_REMOVEPUONTX_MASK                 0x00000200
#define AVR32_USBC_UATST2_REMOVEPUONTX_OFFSET                        9
#define AVR32_USBC_UATST2_REMOVEPUONTX_SIZE                          1
#define AVR32_USBC_UATST2_RESETVALUE                        0x00000000
#define AVR32_USBC_UATST2_UTMIRESET                                  8
#define AVR32_USBC_UATST2_UTMIRESET_MASK                    0x00000100
#define AVR32_USBC_UATST2_UTMIRESET_OFFSET                           8
#define AVR32_USBC_UATST2_UTMIRESET_SIZE                             1
#define AVR32_USBC_UDCON                                    0x00000000
#define AVR32_USBC_UDCON_ADDEN                                       7
#define AVR32_USBC_UDCON_ADDEN_MASK                         0x00000080
#define AVR32_USBC_UDCON_ADDEN_OFFSET                                7
#define AVR32_USBC_UDCON_ADDEN_SIZE                                  1
#define AVR32_USBC_UDCON_DETACH                                      8
#define AVR32_USBC_UDCON_DETACH_MASK                        0x00000100
#define AVR32_USBC_UDCON_DETACH_OFFSET                               8
#define AVR32_USBC_UDCON_DETACH_SIZE                                 1
#define AVR32_USBC_UDCON_GNAK                                       17
#define AVR32_USBC_UDCON_GNAK_MASK                          0x00020000
#define AVR32_USBC_UDCON_GNAK_OFFSET                                17
#define AVR32_USBC_UDCON_GNAK_SIZE                                   1
#define AVR32_USBC_UDCON_LS                                         12
#define AVR32_USBC_UDCON_LS_MASK                            0x00001000
#define AVR32_USBC_UDCON_LS_OFFSET                                  12
#define AVR32_USBC_UDCON_LS_SIZE                                     1
#define AVR32_USBC_UDCON_MASK                               0x0003ffff
#define AVR32_USBC_UDCON_OPMODE2                                    16
#define AVR32_USBC_UDCON_OPMODE2_MASK                       0x00010000
#define AVR32_USBC_UDCON_OPMODE2_OFFSET                             16
#define AVR32_USBC_UDCON_OPMODE2_SIZE                                1
#define AVR32_USBC_UDCON_RESETVALUE                         0x00000100
#define AVR32_USBC_UDCON_RMWKUP                                      9
#define AVR32_USBC_UDCON_RMWKUP_MASK                        0x00000200
#define AVR32_USBC_UDCON_RMWKUP_OFFSET                               9
#define AVR32_USBC_UDCON_RMWKUP_SIZE                                 1
#define AVR32_USBC_UDCON_SPDCONF                                    10
#define AVR32_USBC_UDCON_SPDCONF_MASK                       0x00000c00
#define AVR32_USBC_UDCON_SPDCONF_OFFSET                             10
#define AVR32_USBC_UDCON_SPDCONF_SIZE                                2
#define AVR32_USBC_UDCON_TSTJ                                       13
#define AVR32_USBC_UDCON_TSTJ_MASK                          0x00002000
#define AVR32_USBC_UDCON_TSTJ_OFFSET                                13
#define AVR32_USBC_UDCON_TSTJ_SIZE                                   1
#define AVR32_USBC_UDCON_TSTK                                       14
#define AVR32_USBC_UDCON_TSTK_MASK                          0x00004000
#define AVR32_USBC_UDCON_TSTK_OFFSET                                14
#define AVR32_USBC_UDCON_TSTK_SIZE                                   1
#define AVR32_USBC_UDCON_TSTPCKT                                    15
#define AVR32_USBC_UDCON_TSTPCKT_MASK                       0x00008000
#define AVR32_USBC_UDCON_TSTPCKT_OFFSET                             15
#define AVR32_USBC_UDCON_TSTPCKT_SIZE                                1
#define AVR32_USBC_UDCON_UADD                                        0
#define AVR32_USBC_UDCON_UADD_MASK                          0x0000007f
#define AVR32_USBC_UDCON_UADD_OFFSET                                 0
#define AVR32_USBC_UDCON_UADD_SIZE                                   7
#define AVR32_USBC_UDESC                                    0x00000830
#define AVR32_USBC_UDESC_MASK                               0xffffffff
#define AVR32_USBC_UDESC_RESETVALUE                         0x00000000
#define AVR32_USBC_UDESC_USB_TABLE_DESCRIPTOR_ADDRESS                0
#define AVR32_USBC_UDESC_USB_TABLE_DESCRIPTOR_ADDRESS_MASK  0xffffffff
#define AVR32_USBC_UDESC_USB_TABLE_DESCRIPTOR_ADDRESS_OFFSET          0
#define AVR32_USBC_UDESC_USB_TABLE_DESCRIPTOR_ADDRESS_SIZE          32
#define AVR32_USBC_UDFNUM                                   0x00000020
#define AVR32_USBC_UDFNUM_FNCERR                                    15
#define AVR32_USBC_UDFNUM_FNCERR_MASK                       0x00008000
#define AVR32_USBC_UDFNUM_FNCERR_OFFSET                             15
#define AVR32_USBC_UDFNUM_FNCERR_SIZE                                1
#define AVR32_USBC_UDFNUM_FNUM                                       3
#define AVR32_USBC_UDFNUM_FNUM_MASK                         0x00003ff8
#define AVR32_USBC_UDFNUM_FNUM_OFFSET                                3
#define AVR32_USBC_UDFNUM_FNUM_SIZE                                 11
#define AVR32_USBC_UDFNUM_MASK                              0x0000bfff
#define AVR32_USBC_UDFNUM_MFNUM                                      0
#define AVR32_USBC_UDFNUM_MFNUM_MASK                        0x00000007
#define AVR32_USBC_UDFNUM_MFNUM_OFFSET                               0
#define AVR32_USBC_UDFNUM_MFNUM_SIZE                                 3
#define AVR32_USBC_UDFNUM_RESETVALUE                        0x00000000
#define AVR32_USBC_UDINT                                    0x00000004
#define AVR32_USBC_UDINTCLR                                 0x00000008
#define AVR32_USBC_UDINTCLR_EORSMC                                   5
#define AVR32_USBC_UDINTCLR_EORSMC_MASK                     0x00000020
#define AVR32_USBC_UDINTCLR_EORSMC_OFFSET                            5
#define AVR32_USBC_UDINTCLR_EORSMC_SIZE                              1
#define AVR32_USBC_UDINTCLR_EORSTC                                   3
#define AVR32_USBC_UDINTCLR_EORSTC_MASK                     0x00000008
#define AVR32_USBC_UDINTCLR_EORSTC_OFFSET                            3
#define AVR32_USBC_UDINTCLR_EORSTC_SIZE                              1
#define AVR32_USBC_UDINTCLR_MASK                            0x000000ff
#define AVR32_USBC_UDINTCLR_MSOFC                                    1
#define AVR32_USBC_UDINTCLR_MSOFC_MASK                      0x00000002
#define AVR32_USBC_UDINTCLR_MSOFC_OFFSET                             1
#define AVR32_USBC_UDINTCLR_MSOFC_SIZE                               1
#define AVR32_USBC_UDINTCLR_RESETVALUE                      0x00000000
#define AVR32_USBC_UDINTCLR_SOFC                                     2
#define AVR32_USBC_UDINTCLR_SOFC_MASK                       0x00000004
#define AVR32_USBC_UDINTCLR_SOFC_OFFSET                              2
#define AVR32_USBC_UDINTCLR_SOFC_SIZE                                1
#define AVR32_USBC_UDINTCLR_SUSPC                                    0
#define AVR32_USBC_UDINTCLR_SUSPC_MASK                      0x00000001
#define AVR32_USBC_UDINTCLR_SUSPC_OFFSET                             0
#define AVR32_USBC_UDINTCLR_SUSPC_SIZE                               1
#define AVR32_USBC_UDINTCLR_UPRSMC                                   6
#define AVR32_USBC_UDINTCLR_UPRSMC_MASK                     0x00000040
#define AVR32_USBC_UDINTCLR_UPRSMC_OFFSET                            6
#define AVR32_USBC_UDINTCLR_UPRSMC_SIZE                              1
#define AVR32_USBC_UDINTCLR_VBUSTIC                                  7
#define AVR32_USBC_UDINTCLR_VBUSTIC_MASK                    0x00000080
#define AVR32_USBC_UDINTCLR_VBUSTIC_OFFSET                           7
#define AVR32_USBC_UDINTCLR_VBUSTIC_SIZE                             1
#define AVR32_USBC_UDINTCLR_WAKEUPC                                  4
#define AVR32_USBC_UDINTCLR_WAKEUPC_MASK                    0x00000010
#define AVR32_USBC_UDINTCLR_WAKEUPC_OFFSET                           4
#define AVR32_USBC_UDINTCLR_WAKEUPC_SIZE                             1
#define AVR32_USBC_UDINTE                                   0x00000010
#define AVR32_USBC_UDINTECLR                                0x00000014
#define AVR32_USBC_UDINTECLR_EORSMEC                                 5
#define AVR32_USBC_UDINTECLR_EORSMEC_MASK                   0x00000020
#define AVR32_USBC_UDINTECLR_EORSMEC_OFFSET                          5
#define AVR32_USBC_UDINTECLR_EORSMEC_SIZE                            1
#define AVR32_USBC_UDINTECLR_EORSTEC                                 3
#define AVR32_USBC_UDINTECLR_EORSTEC_MASK                   0x00000008
#define AVR32_USBC_UDINTECLR_EORSTEC_OFFSET                          3
#define AVR32_USBC_UDINTECLR_EORSTEC_SIZE                            1
#define AVR32_USBC_UDINTECLR_EP0INTEC                               12
#define AVR32_USBC_UDINTECLR_EP0INTEC_MASK                  0x00001000
#define AVR32_USBC_UDINTECLR_EP0INTEC_OFFSET                        12
#define AVR32_USBC_UDINTECLR_EP0INTEC_SIZE                           1
#define AVR32_USBC_UDINTECLR_EP1INTEC                               13
#define AVR32_USBC_UDINTECLR_EP1INTEC_MASK                  0x00002000
#define AVR32_USBC_UDINTECLR_EP1INTEC_OFFSET                        13
#define AVR32_USBC_UDINTECLR_EP1INTEC_SIZE                           1
#define AVR32_USBC_UDINTECLR_EP2INTEC                               14
#define AVR32_USBC_UDINTECLR_EP2INTEC_MASK                  0x00004000
#define AVR32_USBC_UDINTECLR_EP2INTEC_OFFSET                        14
#define AVR32_USBC_UDINTECLR_EP2INTEC_SIZE                           1
#define AVR32_USBC_UDINTECLR_EP3INTEC                               15
#define AVR32_USBC_UDINTECLR_EP3INTEC_MASK                  0x00008000
#define AVR32_USBC_UDINTECLR_EP3INTEC_OFFSET                        15
#define AVR32_USBC_UDINTECLR_EP3INTEC_SIZE                           1
#define AVR32_USBC_UDINTECLR_EP4INTEC                               16
#define AVR32_USBC_UDINTECLR_EP4INTEC_MASK                  0x00010000
#define AVR32_USBC_UDINTECLR_EP4INTEC_OFFSET                        16
#define AVR32_USBC_UDINTECLR_EP4INTEC_SIZE                           1
#define AVR32_USBC_UDINTECLR_EP5INTEC                               17
#define AVR32_USBC_UDINTECLR_EP5INTEC_MASK                  0x00020000
#define AVR32_USBC_UDINTECLR_EP5INTEC_OFFSET                        17
#define AVR32_USBC_UDINTECLR_EP5INTEC_SIZE                           1
#define AVR32_USBC_UDINTECLR_EP6INTEC                               18
#define AVR32_USBC_UDINTECLR_EP6INTEC_MASK                  0x00040000
#define AVR32_USBC_UDINTECLR_EP6INTEC_OFFSET                        18
#define AVR32_USBC_UDINTECLR_EP6INTEC_SIZE                           1
#define AVR32_USBC_UDINTECLR_EP7INTEC                               19
#define AVR32_USBC_UDINTECLR_EP7INTEC_MASK                  0x00080000
#define AVR32_USBC_UDINTECLR_EP7INTEC_OFFSET                        19
#define AVR32_USBC_UDINTECLR_EP7INTEC_SIZE                           1
#define AVR32_USBC_UDINTECLR_MASK                           0x000ff0ff
#define AVR32_USBC_UDINTECLR_MSOFEC                                  1
#define AVR32_USBC_UDINTECLR_MSOFEC_MASK                    0x00000002
#define AVR32_USBC_UDINTECLR_MSOFEC_OFFSET                           1
#define AVR32_USBC_UDINTECLR_MSOFEC_SIZE                             1
#define AVR32_USBC_UDINTECLR_RESETVALUE                     0x00000000
#define AVR32_USBC_UDINTECLR_SOFEC                                   2
#define AVR32_USBC_UDINTECLR_SOFEC_MASK                     0x00000004
#define AVR32_USBC_UDINTECLR_SOFEC_OFFSET                            2
#define AVR32_USBC_UDINTECLR_SOFEC_SIZE                              1
#define AVR32_USBC_UDINTECLR_SUSPEC                                  0
#define AVR32_USBC_UDINTECLR_SUSPEC_MASK                    0x00000001
#define AVR32_USBC_UDINTECLR_SUSPEC_OFFSET                           0
#define AVR32_USBC_UDINTECLR_SUSPEC_SIZE                             1
#define AVR32_USBC_UDINTECLR_UPRSMEC                                 6
#define AVR32_USBC_UDINTECLR_UPRSMEC_MASK                   0x00000040
#define AVR32_USBC_UDINTECLR_UPRSMEC_OFFSET                          6
#define AVR32_USBC_UDINTECLR_UPRSMEC_SIZE                            1
#define AVR32_USBC_UDINTECLR_VBUSEC                                  7
#define AVR32_USBC_UDINTECLR_VBUSEC_MASK                    0x00000080
#define AVR32_USBC_UDINTECLR_VBUSEC_OFFSET                           7
#define AVR32_USBC_UDINTECLR_VBUSEC_SIZE                             1
#define AVR32_USBC_UDINTECLR_WAKEUPEC                                4
#define AVR32_USBC_UDINTECLR_WAKEUPEC_MASK                  0x00000010
#define AVR32_USBC_UDINTECLR_WAKEUPEC_OFFSET                         4
#define AVR32_USBC_UDINTECLR_WAKEUPEC_SIZE                           1
#define AVR32_USBC_UDINTESET                                0x00000018
#define AVR32_USBC_UDINTESET_EORSMES                                 5
#define AVR32_USBC_UDINTESET_EORSMES_MASK                   0x00000020
#define AVR32_USBC_UDINTESET_EORSMES_OFFSET                          5
#define AVR32_USBC_UDINTESET_EORSMES_SIZE                            1
#define AVR32_USBC_UDINTESET_EORSTES                                 3
#define AVR32_USBC_UDINTESET_EORSTES_MASK                   0x00000008
#define AVR32_USBC_UDINTESET_EORSTES_OFFSET                          3
#define AVR32_USBC_UDINTESET_EORSTES_SIZE                            1
#define AVR32_USBC_UDINTESET_EP0INTES                               12
#define AVR32_USBC_UDINTESET_EP0INTES_MASK                  0x00001000
#define AVR32_USBC_UDINTESET_EP0INTES_OFFSET                        12
#define AVR32_USBC_UDINTESET_EP0INTES_SIZE                           1
#define AVR32_USBC_UDINTESET_EP1INTES                               13
#define AVR32_USBC_UDINTESET_EP1INTES_MASK                  0x00002000
#define AVR32_USBC_UDINTESET_EP1INTES_OFFSET                        13
#define AVR32_USBC_UDINTESET_EP1INTES_SIZE                           1
#define AVR32_USBC_UDINTESET_EP2INTES                               14
#define AVR32_USBC_UDINTESET_EP2INTES_MASK                  0x00004000
#define AVR32_USBC_UDINTESET_EP2INTES_OFFSET                        14
#define AVR32_USBC_UDINTESET_EP2INTES_SIZE                           1
#define AVR32_USBC_UDINTESET_EP3INTES                               15
#define AVR32_USBC_UDINTESET_EP3INTES_MASK                  0x00008000
#define AVR32_USBC_UDINTESET_EP3INTES_OFFSET                        15
#define AVR32_USBC_UDINTESET_EP3INTES_SIZE                           1
#define AVR32_USBC_UDINTESET_EP4INTES                               16
#define AVR32_USBC_UDINTESET_EP4INTES_MASK                  0x00010000
#define AVR32_USBC_UDINTESET_EP4INTES_OFFSET                        16
#define AVR32_USBC_UDINTESET_EP4INTES_SIZE                           1
#define AVR32_USBC_UDINTESET_EP5INTES                               17
#define AVR32_USBC_UDINTESET_EP5INTES_MASK                  0x00020000
#define AVR32_USBC_UDINTESET_EP5INTES_OFFSET                        17
#define AVR32_USBC_UDINTESET_EP5INTES_SIZE                           1
#define AVR32_USBC_UDINTESET_EP6INTES                               18
#define AVR32_USBC_UDINTESET_EP6INTES_MASK                  0x00040000
#define AVR32_USBC_UDINTESET_EP6INTES_OFFSET                        18
#define AVR32_USBC_UDINTESET_EP6INTES_SIZE                           1
#define AVR32_USBC_UDINTESET_EP7INTES                               19
#define AVR32_USBC_UDINTESET_EP7INTES_MASK                  0x00080000
#define AVR32_USBC_UDINTESET_EP7INTES_OFFSET                        19
#define AVR32_USBC_UDINTESET_EP7INTES_SIZE                           1
#define AVR32_USBC_UDINTESET_MASK                           0x000ff0ff
#define AVR32_USBC_UDINTESET_MSOFES                                  1
#define AVR32_USBC_UDINTESET_MSOFES_MASK                    0x00000002
#define AVR32_USBC_UDINTESET_MSOFES_OFFSET                           1
#define AVR32_USBC_UDINTESET_MSOFES_SIZE                             1
#define AVR32_USBC_UDINTESET_RESETVALUE                     0x00000000
#define AVR32_USBC_UDINTESET_SOFES                                   2
#define AVR32_USBC_UDINTESET_SOFES_MASK                     0x00000004
#define AVR32_USBC_UDINTESET_SOFES_OFFSET                            2
#define AVR32_USBC_UDINTESET_SOFES_SIZE                              1
#define AVR32_USBC_UDINTESET_SUSPES                                  0
#define AVR32_USBC_UDINTESET_SUSPES_MASK                    0x00000001
#define AVR32_USBC_UDINTESET_SUSPES_OFFSET                           0
#define AVR32_USBC_UDINTESET_SUSPES_SIZE                             1
#define AVR32_USBC_UDINTESET_UPRSMES                                 6
#define AVR32_USBC_UDINTESET_UPRSMES_MASK                   0x00000040
#define AVR32_USBC_UDINTESET_UPRSMES_OFFSET                          6
#define AVR32_USBC_UDINTESET_UPRSMES_SIZE                            1
#define AVR32_USBC_UDINTESET_VBUSES                                  7
#define AVR32_USBC_UDINTESET_VBUSES_MASK                    0x00000080
#define AVR32_USBC_UDINTESET_VBUSES_OFFSET                           7
#define AVR32_USBC_UDINTESET_VBUSES_SIZE                             1
#define AVR32_USBC_UDINTESET_WAKEUPES                                4
#define AVR32_USBC_UDINTESET_WAKEUPES_MASK                  0x00000010
#define AVR32_USBC_UDINTESET_WAKEUPES_OFFSET                         4
#define AVR32_USBC_UDINTESET_WAKEUPES_SIZE                           1
#define AVR32_USBC_UDINTE_EORSME                                     5
#define AVR32_USBC_UDINTE_EORSME_MASK                       0x00000020
#define AVR32_USBC_UDINTE_EORSME_OFFSET                              5
#define AVR32_USBC_UDINTE_EORSME_SIZE                                1
#define AVR32_USBC_UDINTE_EORSTE                                     3
#define AVR32_USBC_UDINTE_EORSTE_MASK                       0x00000008
#define AVR32_USBC_UDINTE_EORSTE_OFFSET                              3
#define AVR32_USBC_UDINTE_EORSTE_SIZE                                1
#define AVR32_USBC_UDINTE_EP0INTE                                   12
#define AVR32_USBC_UDINTE_EP0INTE_MASK                      0x00001000
#define AVR32_USBC_UDINTE_EP0INTE_OFFSET                            12
#define AVR32_USBC_UDINTE_EP0INTE_SIZE                               1
#define AVR32_USBC_UDINTE_EP1INTE                                   13
#define AVR32_USBC_UDINTE_EP1INTE_MASK                      0x00002000
#define AVR32_USBC_UDINTE_EP1INTE_OFFSET                            13
#define AVR32_USBC_UDINTE_EP1INTE_SIZE                               1
#define AVR32_USBC_UDINTE_EP2INTE                                   14
#define AVR32_USBC_UDINTE_EP2INTE_MASK                      0x00004000
#define AVR32_USBC_UDINTE_EP2INTE_OFFSET                            14
#define AVR32_USBC_UDINTE_EP2INTE_SIZE                               1
#define AVR32_USBC_UDINTE_EP3INTE                                   15
#define AVR32_USBC_UDINTE_EP3INTE_MASK                      0x00008000
#define AVR32_USBC_UDINTE_EP3INTE_OFFSET                            15
#define AVR32_USBC_UDINTE_EP3INTE_SIZE                               1
#define AVR32_USBC_UDINTE_EP4INTE                                   16
#define AVR32_USBC_UDINTE_EP4INTE_MASK                      0x00010000
#define AVR32_USBC_UDINTE_EP4INTE_OFFSET                            16
#define AVR32_USBC_UDINTE_EP4INTE_SIZE                               1
#define AVR32_USBC_UDINTE_EP5INTE                                   17
#define AVR32_USBC_UDINTE_EP5INTE_MASK                      0x00020000
#define AVR32_USBC_UDINTE_EP5INTE_OFFSET                            17
#define AVR32_USBC_UDINTE_EP5INTE_SIZE                               1
#define AVR32_USBC_UDINTE_EP6INTE                                   18
#define AVR32_USBC_UDINTE_EP6INTE_MASK                      0x00040000
#define AVR32_USBC_UDINTE_EP6INTE_OFFSET                            18
#define AVR32_USBC_UDINTE_EP6INTE_SIZE                               1
#define AVR32_USBC_UDINTE_EP7INTE                                   19
#define AVR32_USBC_UDINTE_EP7INTE_MASK                      0x00080000
#define AVR32_USBC_UDINTE_EP7INTE_OFFSET                            19
#define AVR32_USBC_UDINTE_EP7INTE_SIZE                               1
#define AVR32_USBC_UDINTE_MASK                              0x000ff0ff
#define AVR32_USBC_UDINTE_MSOFE                                      1
#define AVR32_USBC_UDINTE_MSOFE_MASK                        0x00000002
#define AVR32_USBC_UDINTE_MSOFE_OFFSET                               1
#define AVR32_USBC_UDINTE_MSOFE_SIZE                                 1
#define AVR32_USBC_UDINTE_RESETVALUE                        0x00000000
#define AVR32_USBC_UDINTE_SOFE                                       2
#define AVR32_USBC_UDINTE_SOFE_MASK                         0x00000004
#define AVR32_USBC_UDINTE_SOFE_OFFSET                                2
#define AVR32_USBC_UDINTE_SOFE_SIZE                                  1
#define AVR32_USBC_UDINTE_SUSPE                                      0
#define AVR32_USBC_UDINTE_SUSPE_MASK                        0x00000001
#define AVR32_USBC_UDINTE_SUSPE_OFFSET                               0
#define AVR32_USBC_UDINTE_SUSPE_SIZE                                 1
#define AVR32_USBC_UDINTE_UPRSME                                     6
#define AVR32_USBC_UDINTE_UPRSME_MASK                       0x00000040
#define AVR32_USBC_UDINTE_UPRSME_OFFSET                              6
#define AVR32_USBC_UDINTE_UPRSME_SIZE                                1
#define AVR32_USBC_UDINTE_VBUSE                                      7
#define AVR32_USBC_UDINTE_VBUSE_MASK                        0x00000080
#define AVR32_USBC_UDINTE_VBUSE_OFFSET                               7
#define AVR32_USBC_UDINTE_VBUSE_SIZE                                 1
#define AVR32_USBC_UDINTE_WAKEUPE                                    4
#define AVR32_USBC_UDINTE_WAKEUPE_MASK                      0x00000010
#define AVR32_USBC_UDINTE_WAKEUPE_OFFSET                             4
#define AVR32_USBC_UDINTE_WAKEUPE_SIZE                               1
#define AVR32_USBC_UDINTSET                                 0x0000000c
#define AVR32_USBC_UDINTSET_EORSMS                                   5
#define AVR32_USBC_UDINTSET_EORSMS_MASK                     0x00000020
#define AVR32_USBC_UDINTSET_EORSMS_OFFSET                            5
#define AVR32_USBC_UDINTSET_EORSMS_SIZE                              1
#define AVR32_USBC_UDINTSET_EORSTS                                   3
#define AVR32_USBC_UDINTSET_EORSTS_MASK                     0x00000008
#define AVR32_USBC_UDINTSET_EORSTS_OFFSET                            3
#define AVR32_USBC_UDINTSET_EORSTS_SIZE                              1
#define AVR32_USBC_UDINTSET_MASK                            0x000000ff
#define AVR32_USBC_UDINTSET_MSOFS                                    1
#define AVR32_USBC_UDINTSET_MSOFS_MASK                      0x00000002
#define AVR32_USBC_UDINTSET_MSOFS_OFFSET                             1
#define AVR32_USBC_UDINTSET_MSOFS_SIZE                               1
#define AVR32_USBC_UDINTSET_RESETVALUE                      0x00000000
#define AVR32_USBC_UDINTSET_SOFS                                     2
#define AVR32_USBC_UDINTSET_SOFS_MASK                       0x00000004
#define AVR32_USBC_UDINTSET_SOFS_OFFSET                              2
#define AVR32_USBC_UDINTSET_SOFS_SIZE                                1
#define AVR32_USBC_UDINTSET_SUSPS                                    0
#define AVR32_USBC_UDINTSET_SUSPS_MASK                      0x00000001
#define AVR32_USBC_UDINTSET_SUSPS_OFFSET                             0
#define AVR32_USBC_UDINTSET_SUSPS_SIZE                               1
#define AVR32_USBC_UDINTSET_UPRSMS                                   6
#define AVR32_USBC_UDINTSET_UPRSMS_MASK                     0x00000040
#define AVR32_USBC_UDINTSET_UPRSMS_OFFSET                            6
#define AVR32_USBC_UDINTSET_UPRSMS_SIZE                              1
#define AVR32_USBC_UDINTSET_VBUSTIS                                  7
#define AVR32_USBC_UDINTSET_VBUSTIS_MASK                    0x00000080
#define AVR32_USBC_UDINTSET_VBUSTIS_OFFSET                           7
#define AVR32_USBC_UDINTSET_VBUSTIS_SIZE                             1
#define AVR32_USBC_UDINTSET_WAKEUPS                                  4
#define AVR32_USBC_UDINTSET_WAKEUPS_MASK                    0x00000010
#define AVR32_USBC_UDINTSET_WAKEUPS_OFFSET                           4
#define AVR32_USBC_UDINTSET_WAKEUPS_SIZE                             1
#define AVR32_USBC_UDINT_EORSM                                       5
#define AVR32_USBC_UDINT_EORSM_MASK                         0x00000020
#define AVR32_USBC_UDINT_EORSM_OFFSET                                5
#define AVR32_USBC_UDINT_EORSM_SIZE                                  1
#define AVR32_USBC_UDINT_EORST                                       3
#define AVR32_USBC_UDINT_EORST_MASK                         0x00000008
#define AVR32_USBC_UDINT_EORST_OFFSET                                3
#define AVR32_USBC_UDINT_EORST_SIZE                                  1
#define AVR32_USBC_UDINT_EP0INT                                     12
#define AVR32_USBC_UDINT_EP0INT_MASK                        0x00001000
#define AVR32_USBC_UDINT_EP0INT_OFFSET                              12
#define AVR32_USBC_UDINT_EP0INT_SIZE                                 1
#define AVR32_USBC_UDINT_EP1INT                                     13
#define AVR32_USBC_UDINT_EP1INT_MASK                        0x00002000
#define AVR32_USBC_UDINT_EP1INT_OFFSET                              13
#define AVR32_USBC_UDINT_EP1INT_SIZE                                 1
#define AVR32_USBC_UDINT_EP2INT                                     14
#define AVR32_USBC_UDINT_EP2INT_MASK                        0x00004000
#define AVR32_USBC_UDINT_EP2INT_OFFSET                              14
#define AVR32_USBC_UDINT_EP2INT_SIZE                                 1
#define AVR32_USBC_UDINT_EP3INT                                     15
#define AVR32_USBC_UDINT_EP3INT_MASK                        0x00008000
#define AVR32_USBC_UDINT_EP3INT_OFFSET                              15
#define AVR32_USBC_UDINT_EP3INT_SIZE                                 1
#define AVR32_USBC_UDINT_EP4INT                                     16
#define AVR32_USBC_UDINT_EP4INT_MASK                        0x00010000
#define AVR32_USBC_UDINT_EP4INT_OFFSET                              16
#define AVR32_USBC_UDINT_EP4INT_SIZE                                 1
#define AVR32_USBC_UDINT_EP5INT                                     17
#define AVR32_USBC_UDINT_EP5INT_MASK                        0x00020000
#define AVR32_USBC_UDINT_EP5INT_OFFSET                              17
#define AVR32_USBC_UDINT_EP5INT_SIZE                                 1
#define AVR32_USBC_UDINT_EP6INT                                     18
#define AVR32_USBC_UDINT_EP6INT_MASK                        0x00040000
#define AVR32_USBC_UDINT_EP6INT_OFFSET                              18
#define AVR32_USBC_UDINT_EP6INT_SIZE                                 1
#define AVR32_USBC_UDINT_EP7INT                                     19
#define AVR32_USBC_UDINT_EP7INT_MASK                        0x00080000
#define AVR32_USBC_UDINT_EP7INT_OFFSET                              19
#define AVR32_USBC_UDINT_EP7INT_SIZE                                 1
#define AVR32_USBC_UDINT_MASK                               0x000ff07f
#define AVR32_USBC_UDINT_MSOF                                        1
#define AVR32_USBC_UDINT_MSOF_MASK                          0x00000002
#define AVR32_USBC_UDINT_MSOF_OFFSET                                 1
#define AVR32_USBC_UDINT_MSOF_SIZE                                   1
#define AVR32_USBC_UDINT_RESETVALUE                         0x00000000
#define AVR32_USBC_UDINT_SOF                                         2
#define AVR32_USBC_UDINT_SOF_MASK                           0x00000004
#define AVR32_USBC_UDINT_SOF_OFFSET                                  2
#define AVR32_USBC_UDINT_SOF_SIZE                                    1
#define AVR32_USBC_UDINT_SUSP                                        0
#define AVR32_USBC_UDINT_SUSP_MASK                          0x00000001
#define AVR32_USBC_UDINT_SUSP_OFFSET                                 0
#define AVR32_USBC_UDINT_SUSP_SIZE                                   1
#define AVR32_USBC_UDINT_UPRSM                                       6
#define AVR32_USBC_UDINT_UPRSM_MASK                         0x00000040
#define AVR32_USBC_UDINT_UPRSM_OFFSET                                6
#define AVR32_USBC_UDINT_UPRSM_SIZE                                  1
#define AVR32_USBC_UDINT_WAKEUP                                      4
#define AVR32_USBC_UDINT_WAKEUP_MASK                        0x00000010
#define AVR32_USBC_UDINT_WAKEUP_OFFSET                               4
#define AVR32_USBC_UDINT_WAKEUP_SIZE                                 1
#define AVR32_USBC_UECFG0                                   0x00000100
#define AVR32_USBC_UECFG0_EPBK                                       2
#define AVR32_USBC_UECFG0_EPBK_DOUBLE                       0x00000001
#define AVR32_USBC_UECFG0_EPBK_MASK                         0x00000004
#define AVR32_USBC_UECFG0_EPBK_OFFSET                                2
#define AVR32_USBC_UECFG0_EPBK_SINGLE                       0x00000000
#define AVR32_USBC_UECFG0_EPBK_SIZE                                  1
#define AVR32_USBC_UECFG0_EPBK_TRIPLE                       0x00000002
#define AVR32_USBC_UECFG0_EPDIR                                      8
#define AVR32_USBC_UECFG0_EPDIR_IN                          0x00000001
#define AVR32_USBC_UECFG0_EPDIR_MASK                        0x00000100
#define AVR32_USBC_UECFG0_EPDIR_OFFSET                               8
#define AVR32_USBC_UECFG0_EPDIR_OUT                         0x00000000
#define AVR32_USBC_UECFG0_EPDIR_SIZE                                 1
#define AVR32_USBC_UECFG0_EPSIZE                                     4
#define AVR32_USBC_UECFG0_EPSIZE_1024                       0x00000007
#define AVR32_USBC_UECFG0_EPSIZE_128                        0x00000004
#define AVR32_USBC_UECFG0_EPSIZE_16                         0x00000001
#define AVR32_USBC_UECFG0_EPSIZE_256                        0x00000005
#define AVR32_USBC_UECFG0_EPSIZE_32                         0x00000002
#define AVR32_USBC_UECFG0_EPSIZE_512                        0x00000006
#define AVR32_USBC_UECFG0_EPSIZE_64                         0x00000003
#define AVR32_USBC_UECFG0_EPSIZE_8                          0x00000000
#define AVR32_USBC_UECFG0_EPSIZE_MASK                       0x00000070
#define AVR32_USBC_UECFG0_EPSIZE_OFFSET                              4
#define AVR32_USBC_UECFG0_EPSIZE_SIZE                                3
#define AVR32_USBC_UECFG0_EPTYPE                                    11
#define AVR32_USBC_UECFG0_EPTYPE_BULK                       0x00000002
#define AVR32_USBC_UECFG0_EPTYPE_CONTROL                    0x00000000
#define AVR32_USBC_UECFG0_EPTYPE_INTERRUPT                  0x00000003
#define AVR32_USBC_UECFG0_EPTYPE_ISOCHRONOUS                0x00000001
#define AVR32_USBC_UECFG0_EPTYPE_MASK                       0x00001800
#define AVR32_USBC_UECFG0_EPTYPE_OFFSET                             11
#define AVR32_USBC_UECFG0_EPTYPE_SIZE                                2
#define AVR32_USBC_UECFG0_MASK                              0x00007974
#define AVR32_USBC_UECFG0_NBTRANS                                   13
#define AVR32_USBC_UECFG0_NBTRANS_MASK                      0x00006000
#define AVR32_USBC_UECFG0_NBTRANS_OFFSET                            13
#define AVR32_USBC_UECFG0_NBTRANS_SIZE                               2
#define AVR32_USBC_UECFG0_RESETVALUE                        0x00000000
#define AVR32_USBC_UECFG1                                   0x00000104
#define AVR32_USBC_UECFG1_EPBK                                       2
#define AVR32_USBC_UECFG1_EPBK_DOUBLE                       0x00000001
#define AVR32_USBC_UECFG1_EPBK_MASK                         0x00000004
#define AVR32_USBC_UECFG1_EPBK_OFFSET                                2
#define AVR32_USBC_UECFG1_EPBK_SINGLE                       0x00000000
#define AVR32_USBC_UECFG1_EPBK_SIZE                                  1
#define AVR32_USBC_UECFG1_EPBK_TRIPLE                       0x00000002
#define AVR32_USBC_UECFG1_EPDIR                                      8
#define AVR32_USBC_UECFG1_EPDIR_IN                          0x00000001
#define AVR32_USBC_UECFG1_EPDIR_MASK                        0x00000100
#define AVR32_USBC_UECFG1_EPDIR_OFFSET                               8
#define AVR32_USBC_UECFG1_EPDIR_OUT                         0x00000000
#define AVR32_USBC_UECFG1_EPDIR_SIZE                                 1
#define AVR32_USBC_UECFG1_EPSIZE                                     4
#define AVR32_USBC_UECFG1_EPSIZE_1024                       0x00000007
#define AVR32_USBC_UECFG1_EPSIZE_128                        0x00000004
#define AVR32_USBC_UECFG1_EPSIZE_16                         0x00000001
#define AVR32_USBC_UECFG1_EPSIZE_256                        0x00000005
#define AVR32_USBC_UECFG1_EPSIZE_32                         0x00000002
#define AVR32_USBC_UECFG1_EPSIZE_512                        0x00000006
#define AVR32_USBC_UECFG1_EPSIZE_64                         0x00000003
#define AVR32_USBC_UECFG1_EPSIZE_8                          0x00000000
#define AVR32_USBC_UECFG1_EPSIZE_MASK                       0x00000070
#define AVR32_USBC_UECFG1_EPSIZE_OFFSET                              4
#define AVR32_USBC_UECFG1_EPSIZE_SIZE                                3
#define AVR32_USBC_UECFG1_EPTYPE                                    11
#define AVR32_USBC_UECFG1_EPTYPE_BULK                       0x00000002
#define AVR32_USBC_UECFG1_EPTYPE_CONTROL                    0x00000000
#define AVR32_USBC_UECFG1_EPTYPE_INTERRUPT                  0x00000003
#define AVR32_USBC_UECFG1_EPTYPE_ISOCHRONOUS                0x00000001
#define AVR32_USBC_UECFG1_EPTYPE_MASK                       0x00001800
#define AVR32_USBC_UECFG1_EPTYPE_OFFSET                             11
#define AVR32_USBC_UECFG1_EPTYPE_SIZE                                2
#define AVR32_USBC_UECFG1_MASK                              0x00007974
#define AVR32_USBC_UECFG1_NBTRANS                                   13
#define AVR32_USBC_UECFG1_NBTRANS_MASK                      0x00006000
#define AVR32_USBC_UECFG1_NBTRANS_OFFSET                            13
#define AVR32_USBC_UECFG1_NBTRANS_SIZE                               2
#define AVR32_USBC_UECFG1_RESETVALUE                        0x00000000
#define AVR32_USBC_UECFG2                                   0x00000108
#define AVR32_USBC_UECFG2_EPBK                                       2
#define AVR32_USBC_UECFG2_EPBK_DOUBLE                       0x00000001
#define AVR32_USBC_UECFG2_EPBK_MASK                         0x00000004
#define AVR32_USBC_UECFG2_EPBK_OFFSET                                2
#define AVR32_USBC_UECFG2_EPBK_SINGLE                       0x00000000
#define AVR32_USBC_UECFG2_EPBK_SIZE                                  1
#define AVR32_USBC_UECFG2_EPBK_TRIPLE                       0x00000002
#define AVR32_USBC_UECFG2_EPDIR                                      8
#define AVR32_USBC_UECFG2_EPDIR_IN                          0x00000001
#define AVR32_USBC_UECFG2_EPDIR_MASK                        0x00000100
#define AVR32_USBC_UECFG2_EPDIR_OFFSET                               8
#define AVR32_USBC_UECFG2_EPDIR_OUT                         0x00000000
#define AVR32_USBC_UECFG2_EPDIR_SIZE                                 1
#define AVR32_USBC_UECFG2_EPSIZE                                     4
#define AVR32_USBC_UECFG2_EPSIZE_1024                       0x00000007
#define AVR32_USBC_UECFG2_EPSIZE_128                        0x00000004
#define AVR32_USBC_UECFG2_EPSIZE_16                         0x00000001
#define AVR32_USBC_UECFG2_EPSIZE_256                        0x00000005
#define AVR32_USBC_UECFG2_EPSIZE_32                         0x00000002
#define AVR32_USBC_UECFG2_EPSIZE_512                        0x00000006
#define AVR32_USBC_UECFG2_EPSIZE_64                         0x00000003
#define AVR32_USBC_UECFG2_EPSIZE_8                          0x00000000
#define AVR32_USBC_UECFG2_EPSIZE_MASK                       0x00000070
#define AVR32_USBC_UECFG2_EPSIZE_OFFSET                              4
#define AVR32_USBC_UECFG2_EPSIZE_SIZE                                3
#define AVR32_USBC_UECFG2_EPTYPE                                    11
#define AVR32_USBC_UECFG2_EPTYPE_BULK                       0x00000002
#define AVR32_USBC_UECFG2_EPTYPE_CONTROL                    0x00000000
#define AVR32_USBC_UECFG2_EPTYPE_INTERRUPT                  0x00000003
#define AVR32_USBC_UECFG2_EPTYPE_ISOCHRONOUS                0x00000001
#define AVR32_USBC_UECFG2_EPTYPE_MASK                       0x00001800
#define AVR32_USBC_UECFG2_EPTYPE_OFFSET                             11
#define AVR32_USBC_UECFG2_EPTYPE_SIZE                                2
#define AVR32_USBC_UECFG2_MASK                              0x00007974
#define AVR32_USBC_UECFG2_NBTRANS                                   13
#define AVR32_USBC_UECFG2_NBTRANS_MASK                      0x00006000
#define AVR32_USBC_UECFG2_NBTRANS_OFFSET                            13
#define AVR32_USBC_UECFG2_NBTRANS_SIZE                               2
#define AVR32_USBC_UECFG2_RESETVALUE                        0x00000000
#define AVR32_USBC_UECFG3                                   0x0000010c
#define AVR32_USBC_UECFG3_EPBK                                       2
#define AVR32_USBC_UECFG3_EPBK_DOUBLE                       0x00000001
#define AVR32_USBC_UECFG3_EPBK_MASK                         0x00000004
#define AVR32_USBC_UECFG3_EPBK_OFFSET                                2
#define AVR32_USBC_UECFG3_EPBK_SINGLE                       0x00000000
#define AVR32_USBC_UECFG3_EPBK_SIZE                                  1
#define AVR32_USBC_UECFG3_EPBK_TRIPLE                       0x00000002
#define AVR32_USBC_UECFG3_EPDIR                                      8
#define AVR32_USBC_UECFG3_EPDIR_IN                          0x00000001
#define AVR32_USBC_UECFG3_EPDIR_MASK                        0x00000100
#define AVR32_USBC_UECFG3_EPDIR_OFFSET                               8
#define AVR32_USBC_UECFG3_EPDIR_OUT                         0x00000000
#define AVR32_USBC_UECFG3_EPDIR_SIZE                                 1
#define AVR32_USBC_UECFG3_EPSIZE                                     4
#define AVR32_USBC_UECFG3_EPSIZE_1024                       0x00000007
#define AVR32_USBC_UECFG3_EPSIZE_128                        0x00000004
#define AVR32_USBC_UECFG3_EPSIZE_16                         0x00000001
#define AVR32_USBC_UECFG3_EPSIZE_256                        0x00000005
#define AVR32_USBC_UECFG3_EPSIZE_32                         0x00000002
#define AVR32_USBC_UECFG3_EPSIZE_512                        0x00000006
#define AVR32_USBC_UECFG3_EPSIZE_64                         0x00000003
#define AVR32_USBC_UECFG3_EPSIZE_8                          0x00000000
#define AVR32_USBC_UECFG3_EPSIZE_MASK                       0x00000070
#define AVR32_USBC_UECFG3_EPSIZE_OFFSET                              4
#define AVR32_USBC_UECFG3_EPSIZE_SIZE                                3
#define AVR32_USBC_UECFG3_EPTYPE                                    11
#define AVR32_USBC_UECFG3_EPTYPE_BULK                       0x00000002
#define AVR32_USBC_UECFG3_EPTYPE_CONTROL                    0x00000000
#define AVR32_USBC_UECFG3_EPTYPE_INTERRUPT                  0x00000003
#define AVR32_USBC_UECFG3_EPTYPE_ISOCHRONOUS                0x00000001
#define AVR32_USBC_UECFG3_EPTYPE_MASK                       0x00001800
#define AVR32_USBC_UECFG3_EPTYPE_OFFSET                             11
#define AVR32_USBC_UECFG3_EPTYPE_SIZE                                2
#define AVR32_USBC_UECFG3_MASK                              0x00007974
#define AVR32_USBC_UECFG3_NBTRANS                                   13
#define AVR32_USBC_UECFG3_NBTRANS_MASK                      0x00006000
#define AVR32_USBC_UECFG3_NBTRANS_OFFSET                            13
#define AVR32_USBC_UECFG3_NBTRANS_SIZE                               2
#define AVR32_USBC_UECFG3_RESETVALUE                        0x00000000
#define AVR32_USBC_UECFG4                                   0x00000110
#define AVR32_USBC_UECFG4_EPBK                                       2
#define AVR32_USBC_UECFG4_EPBK_DOUBLE                       0x00000001
#define AVR32_USBC_UECFG4_EPBK_MASK                         0x00000004
#define AVR32_USBC_UECFG4_EPBK_OFFSET                                2
#define AVR32_USBC_UECFG4_EPBK_SINGLE                       0x00000000
#define AVR32_USBC_UECFG4_EPBK_SIZE                                  1
#define AVR32_USBC_UECFG4_EPBK_TRIPLE                       0x00000002
#define AVR32_USBC_UECFG4_EPDIR                                      8
#define AVR32_USBC_UECFG4_EPDIR_IN                          0x00000001
#define AVR32_USBC_UECFG4_EPDIR_MASK                        0x00000100
#define AVR32_USBC_UECFG4_EPDIR_OFFSET                               8
#define AVR32_USBC_UECFG4_EPDIR_OUT                         0x00000000
#define AVR32_USBC_UECFG4_EPDIR_SIZE                                 1
#define AVR32_USBC_UECFG4_EPSIZE                                     4
#define AVR32_USBC_UECFG4_EPSIZE_1024                       0x00000007
#define AVR32_USBC_UECFG4_EPSIZE_128                        0x00000004
#define AVR32_USBC_UECFG4_EPSIZE_16                         0x00000001
#define AVR32_USBC_UECFG4_EPSIZE_256                        0x00000005
#define AVR32_USBC_UECFG4_EPSIZE_32                         0x00000002
#define AVR32_USBC_UECFG4_EPSIZE_512                        0x00000006
#define AVR32_USBC_UECFG4_EPSIZE_64                         0x00000003
#define AVR32_USBC_UECFG4_EPSIZE_8                          0x00000000
#define AVR32_USBC_UECFG4_EPSIZE_MASK                       0x00000070
#define AVR32_USBC_UECFG4_EPSIZE_OFFSET                              4
#define AVR32_USBC_UECFG4_EPSIZE_SIZE                                3
#define AVR32_USBC_UECFG4_EPTYPE                                    11
#define AVR32_USBC_UECFG4_EPTYPE_BULK                       0x00000002
#define AVR32_USBC_UECFG4_EPTYPE_CONTROL                    0x00000000
#define AVR32_USBC_UECFG4_EPTYPE_INTERRUPT                  0x00000003
#define AVR32_USBC_UECFG4_EPTYPE_ISOCHRONOUS                0x00000001
#define AVR32_USBC_UECFG4_EPTYPE_MASK                       0x00001800
#define AVR32_USBC_UECFG4_EPTYPE_OFFSET                             11
#define AVR32_USBC_UECFG4_EPTYPE_SIZE                                2
#define AVR32_USBC_UECFG4_MASK                              0x00007974
#define AVR32_USBC_UECFG4_NBTRANS                                   13
#define AVR32_USBC_UECFG4_NBTRANS_MASK                      0x00006000
#define AVR32_USBC_UECFG4_NBTRANS_OFFSET                            13
#define AVR32_USBC_UECFG4_NBTRANS_SIZE                               2
#define AVR32_USBC_UECFG4_RESETVALUE                        0x00000000
#define AVR32_USBC_UECFG5                                   0x00000114
#define AVR32_USBC_UECFG5_EPBK                                       2
#define AVR32_USBC_UECFG5_EPBK_DOUBLE                       0x00000001
#define AVR32_USBC_UECFG5_EPBK_MASK                         0x00000004
#define AVR32_USBC_UECFG5_EPBK_OFFSET                                2
#define AVR32_USBC_UECFG5_EPBK_SINGLE                       0x00000000
#define AVR32_USBC_UECFG5_EPBK_SIZE                                  1
#define AVR32_USBC_UECFG5_EPBK_TRIPLE                       0x00000002
#define AVR32_USBC_UECFG5_EPDIR                                      8
#define AVR32_USBC_UECFG5_EPDIR_IN                          0x00000001
#define AVR32_USBC_UECFG5_EPDIR_MASK                        0x00000100
#define AVR32_USBC_UECFG5_EPDIR_OFFSET                               8
#define AVR32_USBC_UECFG5_EPDIR_OUT                         0x00000000
#define AVR32_USBC_UECFG5_EPDIR_SIZE                                 1
#define AVR32_USBC_UECFG5_EPSIZE                                     4
#define AVR32_USBC_UECFG5_EPSIZE_1024                       0x00000007
#define AVR32_USBC_UECFG5_EPSIZE_128                        0x00000004
#define AVR32_USBC_UECFG5_EPSIZE_16                         0x00000001
#define AVR32_USBC_UECFG5_EPSIZE_256                        0x00000005
#define AVR32_USBC_UECFG5_EPSIZE_32                         0x00000002
#define AVR32_USBC_UECFG5_EPSIZE_512                        0x00000006
#define AVR32_USBC_UECFG5_EPSIZE_64                         0x00000003
#define AVR32_USBC_UECFG5_EPSIZE_8                          0x00000000
#define AVR32_USBC_UECFG5_EPSIZE_MASK                       0x00000070
#define AVR32_USBC_UECFG5_EPSIZE_OFFSET                              4
#define AVR32_USBC_UECFG5_EPSIZE_SIZE                                3
#define AVR32_USBC_UECFG5_EPTYPE                                    11
#define AVR32_USBC_UECFG5_EPTYPE_BULK                       0x00000002
#define AVR32_USBC_UECFG5_EPTYPE_CONTROL                    0x00000000
#define AVR32_USBC_UECFG5_EPTYPE_INTERRUPT                  0x00000003
#define AVR32_USBC_UECFG5_EPTYPE_ISOCHRONOUS                0x00000001
#define AVR32_USBC_UECFG5_EPTYPE_MASK                       0x00001800
#define AVR32_USBC_UECFG5_EPTYPE_OFFSET                             11
#define AVR32_USBC_UECFG5_EPTYPE_SIZE                                2
#define AVR32_USBC_UECFG5_MASK                              0x00007974
#define AVR32_USBC_UECFG5_NBTRANS                                   13
#define AVR32_USBC_UECFG5_NBTRANS_MASK                      0x00006000
#define AVR32_USBC_UECFG5_NBTRANS_OFFSET                            13
#define AVR32_USBC_UECFG5_NBTRANS_SIZE                               2
#define AVR32_USBC_UECFG5_RESETVALUE                        0x00000000
#define AVR32_USBC_UECFG6                                   0x00000118
#define AVR32_USBC_UECFG6_EPBK                                       2
#define AVR32_USBC_UECFG6_EPBK_DOUBLE                       0x00000001
#define AVR32_USBC_UECFG6_EPBK_MASK                         0x00000004
#define AVR32_USBC_UECFG6_EPBK_OFFSET                                2
#define AVR32_USBC_UECFG6_EPBK_SINGLE                       0x00000000
#define AVR32_USBC_UECFG6_EPBK_SIZE                                  1
#define AVR32_USBC_UECFG6_EPBK_TRIPLE                       0x00000002
#define AVR32_USBC_UECFG6_EPDIR                                      8
#define AVR32_USBC_UECFG6_EPDIR_IN                          0x00000001
#define AVR32_USBC_UECFG6_EPDIR_MASK                        0x00000100
#define AVR32_USBC_UECFG6_EPDIR_OFFSET                               8
#define AVR32_USBC_UECFG6_EPDIR_OUT                         0x00000000
#define AVR32_USBC_UECFG6_EPDIR_SIZE                                 1
#define AVR32_USBC_UECFG6_EPSIZE                                     4
#define AVR32_USBC_UECFG6_EPSIZE_1024                       0x00000007
#define AVR32_USBC_UECFG6_EPSIZE_128                        0x00000004
#define AVR32_USBC_UECFG6_EPSIZE_16                         0x00000001
#define AVR32_USBC_UECFG6_EPSIZE_256                        0x00000005
#define AVR32_USBC_UECFG6_EPSIZE_32                         0x00000002
#define AVR32_USBC_UECFG6_EPSIZE_512                        0x00000006
#define AVR32_USBC_UECFG6_EPSIZE_64                         0x00000003
#define AVR32_USBC_UECFG6_EPSIZE_8                          0x00000000
#define AVR32_USBC_UECFG6_EPSIZE_MASK                       0x00000070
#define AVR32_USBC_UECFG6_EPSIZE_OFFSET                              4
#define AVR32_USBC_UECFG6_EPSIZE_SIZE                                3
#define AVR32_USBC_UECFG6_EPTYPE                                    11
#define AVR32_USBC_UECFG6_EPTYPE_BULK                       0x00000002
#define AVR32_USBC_UECFG6_EPTYPE_CONTROL                    0x00000000
#define AVR32_USBC_UECFG6_EPTYPE_INTERRUPT                  0x00000003
#define AVR32_USBC_UECFG6_EPTYPE_ISOCHRONOUS                0x00000001
#define AVR32_USBC_UECFG6_EPTYPE_MASK                       0x00001800
#define AVR32_USBC_UECFG6_EPTYPE_OFFSET                             11
#define AVR32_USBC_UECFG6_EPTYPE_SIZE                                2
#define AVR32_USBC_UECFG6_MASK                              0x00007974
#define AVR32_USBC_UECFG6_NBTRANS                                   13
#define AVR32_USBC_UECFG6_NBTRANS_MASK                      0x00006000
#define AVR32_USBC_UECFG6_NBTRANS_OFFSET                            13
#define AVR32_USBC_UECFG6_NBTRANS_SIZE                               2
#define AVR32_USBC_UECFG6_RESETVALUE                        0x00000000
#define AVR32_USBC_UECFG7                                   0x0000011c
#define AVR32_USBC_UECFG7_EPBK                                       2
#define AVR32_USBC_UECFG7_EPBK_DOUBLE                       0x00000001
#define AVR32_USBC_UECFG7_EPBK_MASK                         0x00000004
#define AVR32_USBC_UECFG7_EPBK_OFFSET                                2
#define AVR32_USBC_UECFG7_EPBK_SINGLE                       0x00000000
#define AVR32_USBC_UECFG7_EPBK_SIZE                                  1
#define AVR32_USBC_UECFG7_EPBK_TRIPLE                       0x00000002
#define AVR32_USBC_UECFG7_EPDIR                                      8
#define AVR32_USBC_UECFG7_EPDIR_IN                          0x00000001
#define AVR32_USBC_UECFG7_EPDIR_MASK                        0x00000100
#define AVR32_USBC_UECFG7_EPDIR_OFFSET                               8
#define AVR32_USBC_UECFG7_EPDIR_OUT                         0x00000000
#define AVR32_USBC_UECFG7_EPDIR_SIZE                                 1
#define AVR32_USBC_UECFG7_EPSIZE                                     4
#define AVR32_USBC_UECFG7_EPSIZE_1024                       0x00000007
#define AVR32_USBC_UECFG7_EPSIZE_128                        0x00000004
#define AVR32_USBC_UECFG7_EPSIZE_16                         0x00000001
#define AVR32_USBC_UECFG7_EPSIZE_256                        0x00000005
#define AVR32_USBC_UECFG7_EPSIZE_32                         0x00000002
#define AVR32_USBC_UECFG7_EPSIZE_512                        0x00000006
#define AVR32_USBC_UECFG7_EPSIZE_64                         0x00000003
#define AVR32_USBC_UECFG7_EPSIZE_8                          0x00000000
#define AVR32_USBC_UECFG7_EPSIZE_MASK                       0x00000070
#define AVR32_USBC_UECFG7_EPSIZE_OFFSET                              4
#define AVR32_USBC_UECFG7_EPSIZE_SIZE                                3
#define AVR32_USBC_UECFG7_EPTYPE                                    11
#define AVR32_USBC_UECFG7_EPTYPE_BULK                       0x00000002
#define AVR32_USBC_UECFG7_EPTYPE_CONTROL                    0x00000000
#define AVR32_USBC_UECFG7_EPTYPE_INTERRUPT                  0x00000003
#define AVR32_USBC_UECFG7_EPTYPE_ISOCHRONOUS                0x00000001
#define AVR32_USBC_UECFG7_EPTYPE_MASK                       0x00001800
#define AVR32_USBC_UECFG7_EPTYPE_OFFSET                             11
#define AVR32_USBC_UECFG7_EPTYPE_SIZE                                2
#define AVR32_USBC_UECFG7_MASK                              0x00007974
#define AVR32_USBC_UECFG7_NBTRANS                                   13
#define AVR32_USBC_UECFG7_NBTRANS_MASK                      0x00006000
#define AVR32_USBC_UECFG7_NBTRANS_OFFSET                            13
#define AVR32_USBC_UECFG7_NBTRANS_SIZE                               2
#define AVR32_USBC_UECFG7_RESETVALUE                        0x00000000
#define AVR32_USBC_UECON0                                   0x000001c0
#define AVR32_USBC_UECON0CLR                                0x00000220
#define AVR32_USBC_UECON0CLR_BUSY0C                                 24
#define AVR32_USBC_UECON0CLR_BUSY0C_MASK                    0x01000000
#define AVR32_USBC_UECON0CLR_BUSY0C_OFFSET                          24
#define AVR32_USBC_UECON0CLR_BUSY0C_SIZE                             1
#define AVR32_USBC_UECON0CLR_BUSY1C                                 25
#define AVR32_USBC_UECON0CLR_BUSY1C_MASK                    0x02000000
#define AVR32_USBC_UECON0CLR_BUSY1C_OFFSET                          25
#define AVR32_USBC_UECON0CLR_BUSY1C_SIZE                             1
#define AVR32_USBC_UECON0CLR_DATAXEC                                 9
#define AVR32_USBC_UECON0CLR_DATAXEC_MASK                   0x00000200
#define AVR32_USBC_UECON0CLR_DATAXEC_OFFSET                          9
#define AVR32_USBC_UECON0CLR_DATAXEC_SIZE                            1
#define AVR32_USBC_UECON0CLR_ERRORTRANSEC                           10
#define AVR32_USBC_UECON0CLR_ERRORTRANSEC_MASK              0x00000400
#define AVR32_USBC_UECON0CLR_ERRORTRANSEC_OFFSET                    10
#define AVR32_USBC_UECON0CLR_ERRORTRANSEC_SIZE                       1
#define AVR32_USBC_UECON0CLR_FIFOCONC                               14
#define AVR32_USBC_UECON0CLR_FIFOCONC_MASK                  0x00004000
#define AVR32_USBC_UECON0CLR_FIFOCONC_OFFSET                        14
#define AVR32_USBC_UECON0CLR_FIFOCONC_SIZE                           1
#define AVR32_USBC_UECON0CLR_MASK                           0x030a5f5f
#define AVR32_USBC_UECON0CLR_MDATAEC                                 8
#define AVR32_USBC_UECON0CLR_MDATAEC_MASK                   0x00000100
#define AVR32_USBC_UECON0CLR_MDATAEC_OFFSET                          8
#define AVR32_USBC_UECON0CLR_MDATAEC_SIZE                            1
#define AVR32_USBC_UECON0CLR_NAKINEC                                 4
#define AVR32_USBC_UECON0CLR_NAKINEC_MASK                   0x00000010
#define AVR32_USBC_UECON0CLR_NAKINEC_OFFSET                          4
#define AVR32_USBC_UECON0CLR_NAKINEC_SIZE                            1
#define AVR32_USBC_UECON0CLR_NAKOUTEC                                3
#define AVR32_USBC_UECON0CLR_NAKOUTEC_MASK                  0x00000008
#define AVR32_USBC_UECON0CLR_NAKOUTEC_OFFSET                         3
#define AVR32_USBC_UECON0CLR_NAKOUTEC_SIZE                           1
#define AVR32_USBC_UECON0CLR_NBUSYBKEC                              12
#define AVR32_USBC_UECON0CLR_NBUSYBKEC_MASK                 0x00001000
#define AVR32_USBC_UECON0CLR_NBUSYBKEC_OFFSET                       12
#define AVR32_USBC_UECON0CLR_NBUSYBKEC_SIZE                          1
#define AVR32_USBC_UECON0CLR_NYETDISC                               17
#define AVR32_USBC_UECON0CLR_NYETDISC_MASK                  0x00020000
#define AVR32_USBC_UECON0CLR_NYETDISC_OFFSET                        17
#define AVR32_USBC_UECON0CLR_NYETDISC_SIZE                           1
#define AVR32_USBC_UECON0CLR_RAMACCEREC                             11
#define AVR32_USBC_UECON0CLR_RAMACCEREC_MASK                0x00000800
#define AVR32_USBC_UECON0CLR_RAMACCEREC_OFFSET                      11
#define AVR32_USBC_UECON0CLR_RAMACCEREC_SIZE                         1
#define AVR32_USBC_UECON0CLR_RESETVALUE                     0x00000000
#define AVR32_USBC_UECON0CLR_RXOUTEC                                 1
#define AVR32_USBC_UECON0CLR_RXOUTEC_MASK                   0x00000002
#define AVR32_USBC_UECON0CLR_RXOUTEC_OFFSET                          1
#define AVR32_USBC_UECON0CLR_RXOUTEC_SIZE                            1
#define AVR32_USBC_UECON0CLR_RXSTPEC                                 2
#define AVR32_USBC_UECON0CLR_RXSTPEC_MASK                   0x00000004
#define AVR32_USBC_UECON0CLR_RXSTPEC_OFFSET                          2
#define AVR32_USBC_UECON0CLR_RXSTPEC_SIZE                            1
#define AVR32_USBC_UECON0CLR_STALLEDEC                               6
#define AVR32_USBC_UECON0CLR_STALLEDEC_MASK                 0x00000040
#define AVR32_USBC_UECON0CLR_STALLEDEC_OFFSET                        6
#define AVR32_USBC_UECON0CLR_STALLEDEC_SIZE                          1
#define AVR32_USBC_UECON0CLR_STALLRQC                               19
#define AVR32_USBC_UECON0CLR_STALLRQC_MASK                  0x00080000
#define AVR32_USBC_UECON0CLR_STALLRQC_OFFSET                        19
#define AVR32_USBC_UECON0CLR_STALLRQC_SIZE                           1
#define AVR32_USBC_UECON0CLR_TXINEC                                  0
#define AVR32_USBC_UECON0CLR_TXINEC_MASK                    0x00000001
#define AVR32_USBC_UECON0CLR_TXINEC_OFFSET                           0
#define AVR32_USBC_UECON0CLR_TXINEC_SIZE                             1
#define AVR32_USBC_UECON0SET                                0x000001f0
#define AVR32_USBC_UECON0SET_BUSY0S                                 24
#define AVR32_USBC_UECON0SET_BUSY0S_MASK                    0x01000000
#define AVR32_USBC_UECON0SET_BUSY0S_OFFSET                          24
#define AVR32_USBC_UECON0SET_BUSY0S_SIZE                             1
#define AVR32_USBC_UECON0SET_BUSY1S                                 25
#define AVR32_USBC_UECON0SET_BUSY1S_MASK                    0x02000000
#define AVR32_USBC_UECON0SET_BUSY1S_OFFSET                          25
#define AVR32_USBC_UECON0SET_BUSY1S_SIZE                             1
#define AVR32_USBC_UECON0SET_DATAXES                                 9
#define AVR32_USBC_UECON0SET_DATAXES_MASK                   0x00000200
#define AVR32_USBC_UECON0SET_DATAXES_OFFSET                          9
#define AVR32_USBC_UECON0SET_DATAXES_SIZE                            1
#define AVR32_USBC_UECON0SET_ERRORTRANSES                           10
#define AVR32_USBC_UECON0SET_ERRORTRANSES_MASK              0x00000400
#define AVR32_USBC_UECON0SET_ERRORTRANSES_OFFSET                    10
#define AVR32_USBC_UECON0SET_ERRORTRANSES_SIZE                       1
#define AVR32_USBC_UECON0SET_KILLBKS                                13
#define AVR32_USBC_UECON0SET_KILLBKS_MASK                   0x00002000
#define AVR32_USBC_UECON0SET_KILLBKS_OFFSET                         13
#define AVR32_USBC_UECON0SET_KILLBKS_SIZE                            1
#define AVR32_USBC_UECON0SET_MASK                           0x030e3f5f
#define AVR32_USBC_UECON0SET_MDATAES                                 8
#define AVR32_USBC_UECON0SET_MDATAES_MASK                   0x00000100
#define AVR32_USBC_UECON0SET_MDATAES_OFFSET                          8
#define AVR32_USBC_UECON0SET_MDATAES_SIZE                            1
#define AVR32_USBC_UECON0SET_NAKINES                                 4
#define AVR32_USBC_UECON0SET_NAKINES_MASK                   0x00000010
#define AVR32_USBC_UECON0SET_NAKINES_OFFSET                          4
#define AVR32_USBC_UECON0SET_NAKINES_SIZE                            1
#define AVR32_USBC_UECON0SET_NAKOUTES                                3
#define AVR32_USBC_UECON0SET_NAKOUTES_MASK                  0x00000008
#define AVR32_USBC_UECON0SET_NAKOUTES_OFFSET                         3
#define AVR32_USBC_UECON0SET_NAKOUTES_SIZE                           1
#define AVR32_USBC_UECON0SET_NBUSYBKES                              12
#define AVR32_USBC_UECON0SET_NBUSYBKES_MASK                 0x00001000
#define AVR32_USBC_UECON0SET_NBUSYBKES_OFFSET                       12
#define AVR32_USBC_UECON0SET_NBUSYBKES_SIZE                          1
#define AVR32_USBC_UECON0SET_NYETDISS                               17
#define AVR32_USBC_UECON0SET_NYETDISS_MASK                  0x00020000
#define AVR32_USBC_UECON0SET_NYETDISS_OFFSET                        17
#define AVR32_USBC_UECON0SET_NYETDISS_SIZE                           1
#define AVR32_USBC_UECON0SET_RAMACCERES                             11
#define AVR32_USBC_UECON0SET_RAMACCERES_MASK                0x00000800
#define AVR32_USBC_UECON0SET_RAMACCERES_OFFSET                      11
#define AVR32_USBC_UECON0SET_RAMACCERES_SIZE                         1
#define AVR32_USBC_UECON0SET_RESETVALUE                     0x00000000
#define AVR32_USBC_UECON0SET_RSTDTS                                 18
#define AVR32_USBC_UECON0SET_RSTDTS_MASK                    0x00040000
#define AVR32_USBC_UECON0SET_RSTDTS_OFFSET                          18
#define AVR32_USBC_UECON0SET_RSTDTS_SIZE                             1
#define AVR32_USBC_UECON0SET_RXOUTES                                 1
#define AVR32_USBC_UECON0SET_RXOUTES_MASK                   0x00000002
#define AVR32_USBC_UECON0SET_RXOUTES_OFFSET                          1
#define AVR32_USBC_UECON0SET_RXOUTES_SIZE                            1
#define AVR32_USBC_UECON0SET_RXSTPES                                 2
#define AVR32_USBC_UECON0SET_RXSTPES_MASK                   0x00000004
#define AVR32_USBC_UECON0SET_RXSTPES_OFFSET                          2
#define AVR32_USBC_UECON0SET_RXSTPES_SIZE                            1
#define AVR32_USBC_UECON0SET_STALLEDES                               6
#define AVR32_USBC_UECON0SET_STALLEDES_MASK                 0x00000040
#define AVR32_USBC_UECON0SET_STALLEDES_OFFSET                        6
#define AVR32_USBC_UECON0SET_STALLEDES_SIZE                          1
#define AVR32_USBC_UECON0SET_STALLRQS                               19
#define AVR32_USBC_UECON0SET_STALLRQS_MASK                  0x00080000
#define AVR32_USBC_UECON0SET_STALLRQS_OFFSET                        19
#define AVR32_USBC_UECON0SET_STALLRQS_SIZE                           1
#define AVR32_USBC_UECON0SET_TXINES                                  0
#define AVR32_USBC_UECON0SET_TXINES_MASK                    0x00000001
#define AVR32_USBC_UECON0SET_TXINES_OFFSET                           0
#define AVR32_USBC_UECON0SET_TXINES_SIZE                             1
#define AVR32_USBC_UECON0_BUSY0                                     24
#define AVR32_USBC_UECON0_BUSY0_MASK                        0x01000000
#define AVR32_USBC_UECON0_BUSY0_OFFSET                              24
#define AVR32_USBC_UECON0_BUSY0_SIZE                                 1
#define AVR32_USBC_UECON0_BUSY1                                     25
#define AVR32_USBC_UECON0_BUSY1_MASK                        0x02000000
#define AVR32_USBC_UECON0_BUSY1_OFFSET                              25
#define AVR32_USBC_UECON0_BUSY1_SIZE                                 1
#define AVR32_USBC_UECON0_DATAXE                                     9
#define AVR32_USBC_UECON0_DATAXE_MASK                       0x00000200
#define AVR32_USBC_UECON0_DATAXE_OFFSET                              9
#define AVR32_USBC_UECON0_DATAXE_SIZE                                1
#define AVR32_USBC_UECON0_ERRORTRANSE                               10
#define AVR32_USBC_UECON0_ERRORTRANSE_MASK                  0x00000400
#define AVR32_USBC_UECON0_ERRORTRANSE_OFFSET                        10
#define AVR32_USBC_UECON0_ERRORTRANSE_SIZE                           1
#define AVR32_USBC_UECON0_FIFOCON                                   14
#define AVR32_USBC_UECON0_FIFOCON_MASK                      0x00004000
#define AVR32_USBC_UECON0_FIFOCON_OFFSET                            14
#define AVR32_USBC_UECON0_FIFOCON_SIZE                               1
#define AVR32_USBC_UECON0_KILLBK                                    13
#define AVR32_USBC_UECON0_KILLBK_MASK                       0x00002000
#define AVR32_USBC_UECON0_KILLBK_OFFSET                             13
#define AVR32_USBC_UECON0_KILLBK_SIZE                                1
#define AVR32_USBC_UECON0_MASK                              0x030e7f5f
#define AVR32_USBC_UECON0_MDATAE                                     8
#define AVR32_USBC_UECON0_MDATAE_MASK                       0x00000100
#define AVR32_USBC_UECON0_MDATAE_OFFSET                              8
#define AVR32_USBC_UECON0_MDATAE_SIZE                                1
#define AVR32_USBC_UECON0_NAKINE                                     4
#define AVR32_USBC_UECON0_NAKINE_MASK                       0x00000010
#define AVR32_USBC_UECON0_NAKINE_OFFSET                              4
#define AVR32_USBC_UECON0_NAKINE_SIZE                                1
#define AVR32_USBC_UECON0_NAKOUTE                                    3
#define AVR32_USBC_UECON0_NAKOUTE_MASK                      0x00000008
#define AVR32_USBC_UECON0_NAKOUTE_OFFSET                             3
#define AVR32_USBC_UECON0_NAKOUTE_SIZE                               1
#define AVR32_USBC_UECON0_NBUSYBKE                                  12
#define AVR32_USBC_UECON0_NBUSYBKE_MASK                     0x00001000
#define AVR32_USBC_UECON0_NBUSYBKE_OFFSET                           12
#define AVR32_USBC_UECON0_NBUSYBKE_SIZE                              1
#define AVR32_USBC_UECON0_NYETDIS                                   17
#define AVR32_USBC_UECON0_NYETDIS_MASK                      0x00020000
#define AVR32_USBC_UECON0_NYETDIS_OFFSET                            17
#define AVR32_USBC_UECON0_NYETDIS_SIZE                               1
#define AVR32_USBC_UECON0_RAMACCERE                                 11
#define AVR32_USBC_UECON0_RAMACCERE_MASK                    0x00000800
#define AVR32_USBC_UECON0_RAMACCERE_OFFSET                          11
#define AVR32_USBC_UECON0_RAMACCERE_SIZE                             1
#define AVR32_USBC_UECON0_RESETVALUE                        0x00000000
#define AVR32_USBC_UECON0_RSTDT                                     18
#define AVR32_USBC_UECON0_RSTDT_MASK                        0x00040000
#define AVR32_USBC_UECON0_RSTDT_OFFSET                              18
#define AVR32_USBC_UECON0_RSTDT_SIZE                                 1
#define AVR32_USBC_UECON0_RXOUTE                                     1
#define AVR32_USBC_UECON0_RXOUTE_MASK                       0x00000002
#define AVR32_USBC_UECON0_RXOUTE_OFFSET                              1
#define AVR32_USBC_UECON0_RXOUTE_SIZE                                1
#define AVR32_USBC_UECON0_RXSTPE                                     2
#define AVR32_USBC_UECON0_RXSTPE_MASK                       0x00000004
#define AVR32_USBC_UECON0_RXSTPE_OFFSET                              2
#define AVR32_USBC_UECON0_RXSTPE_SIZE                                1
#define AVR32_USBC_UECON0_STALLEDE                                   6
#define AVR32_USBC_UECON0_STALLEDE_MASK                     0x00000040
#define AVR32_USBC_UECON0_STALLEDE_OFFSET                            6
#define AVR32_USBC_UECON0_STALLEDE_SIZE                              1
#define AVR32_USBC_UECON0_STALLRQ                                   19
#define AVR32_USBC_UECON0_STALLRQ_MASK                      0x00080000
#define AVR32_USBC_UECON0_STALLRQ_OFFSET                            19
#define AVR32_USBC_UECON0_STALLRQ_SIZE                               1
#define AVR32_USBC_UECON0_TXINE                                      0
#define AVR32_USBC_UECON0_TXINE_MASK                        0x00000001
#define AVR32_USBC_UECON0_TXINE_OFFSET                               0
#define AVR32_USBC_UECON0_TXINE_SIZE                                 1
#define AVR32_USBC_UECON1                                   0x000001c4
#define AVR32_USBC_UECON1CLR                                0x00000224
#define AVR32_USBC_UECON1CLR_BUSY0C                                 24
#define AVR32_USBC_UECON1CLR_BUSY0C_MASK                    0x01000000
#define AVR32_USBC_UECON1CLR_BUSY0C_OFFSET                          24
#define AVR32_USBC_UECON1CLR_BUSY0C_SIZE                             1
#define AVR32_USBC_UECON1CLR_BUSY1C                                 25
#define AVR32_USBC_UECON1CLR_BUSY1C_MASK                    0x02000000
#define AVR32_USBC_UECON1CLR_BUSY1C_OFFSET                          25
#define AVR32_USBC_UECON1CLR_BUSY1C_SIZE                             1
#define AVR32_USBC_UECON1CLR_DATAXEC                                 9
#define AVR32_USBC_UECON1CLR_DATAXEC_MASK                   0x00000200
#define AVR32_USBC_UECON1CLR_DATAXEC_OFFSET                          9
#define AVR32_USBC_UECON1CLR_DATAXEC_SIZE                            1
#define AVR32_USBC_UECON1CLR_ERRORTRANSEC                           10
#define AVR32_USBC_UECON1CLR_ERRORTRANSEC_MASK              0x00000400
#define AVR32_USBC_UECON1CLR_ERRORTRANSEC_OFFSET                    10
#define AVR32_USBC_UECON1CLR_ERRORTRANSEC_SIZE                       1
#define AVR32_USBC_UECON1CLR_FIFOCONC                               14
#define AVR32_USBC_UECON1CLR_FIFOCONC_MASK                  0x00004000
#define AVR32_USBC_UECON1CLR_FIFOCONC_OFFSET                        14
#define AVR32_USBC_UECON1CLR_FIFOCONC_SIZE                           1
#define AVR32_USBC_UECON1CLR_MASK                           0x030a575f
#define AVR32_USBC_UECON1CLR_MDATAEC                                 8
#define AVR32_USBC_UECON1CLR_MDATAEC_MASK                   0x00000100
#define AVR32_USBC_UECON1CLR_MDATAEC_OFFSET                          8
#define AVR32_USBC_UECON1CLR_MDATAEC_SIZE                            1
#define AVR32_USBC_UECON1CLR_NAKINEC                                 4
#define AVR32_USBC_UECON1CLR_NAKINEC_MASK                   0x00000010
#define AVR32_USBC_UECON1CLR_NAKINEC_OFFSET                          4
#define AVR32_USBC_UECON1CLR_NAKINEC_SIZE                            1
#define AVR32_USBC_UECON1CLR_NAKOUTEC                                3
#define AVR32_USBC_UECON1CLR_NAKOUTEC_MASK                  0x00000008
#define AVR32_USBC_UECON1CLR_NAKOUTEC_OFFSET                         3
#define AVR32_USBC_UECON1CLR_NAKOUTEC_SIZE                           1
#define AVR32_USBC_UECON1CLR_NBUSYBKEC                              12
#define AVR32_USBC_UECON1CLR_NBUSYBKEC_MASK                 0x00001000
#define AVR32_USBC_UECON1CLR_NBUSYBKEC_OFFSET                       12
#define AVR32_USBC_UECON1CLR_NBUSYBKEC_SIZE                          1
#define AVR32_USBC_UECON1CLR_NYETDISC                               17
#define AVR32_USBC_UECON1CLR_NYETDISC_MASK                  0x00020000
#define AVR32_USBC_UECON1CLR_NYETDISC_OFFSET                        17
#define AVR32_USBC_UECON1CLR_NYETDISC_SIZE                           1
#define AVR32_USBC_UECON1CLR_RESETVALUE                     0x00000000
#define AVR32_USBC_UECON1CLR_RXOUTEC                                 1
#define AVR32_USBC_UECON1CLR_RXOUTEC_MASK                   0x00000002
#define AVR32_USBC_UECON1CLR_RXOUTEC_OFFSET                          1
#define AVR32_USBC_UECON1CLR_RXOUTEC_SIZE                            1
#define AVR32_USBC_UECON1CLR_RXSTPEC                                 2
#define AVR32_USBC_UECON1CLR_RXSTPEC_MASK                   0x00000004
#define AVR32_USBC_UECON1CLR_RXSTPEC_OFFSET                          2
#define AVR32_USBC_UECON1CLR_RXSTPEC_SIZE                            1
#define AVR32_USBC_UECON1CLR_STALLEDEC                               6
#define AVR32_USBC_UECON1CLR_STALLEDEC_MASK                 0x00000040
#define AVR32_USBC_UECON1CLR_STALLEDEC_OFFSET                        6
#define AVR32_USBC_UECON1CLR_STALLEDEC_SIZE                          1
#define AVR32_USBC_UECON1CLR_STALLRQC                               19
#define AVR32_USBC_UECON1CLR_STALLRQC_MASK                  0x00080000
#define AVR32_USBC_UECON1CLR_STALLRQC_OFFSET                        19
#define AVR32_USBC_UECON1CLR_STALLRQC_SIZE                           1
#define AVR32_USBC_UECON1CLR_TXINEC                                  0
#define AVR32_USBC_UECON1CLR_TXINEC_MASK                    0x00000001
#define AVR32_USBC_UECON1CLR_TXINEC_OFFSET                           0
#define AVR32_USBC_UECON1CLR_TXINEC_SIZE                             1
#define AVR32_USBC_UECON1SET                                0x000001f4
#define AVR32_USBC_UECON1SET_BUSY0S                                 24
#define AVR32_USBC_UECON1SET_BUSY0S_MASK                    0x01000000
#define AVR32_USBC_UECON1SET_BUSY0S_OFFSET                          24
#define AVR32_USBC_UECON1SET_BUSY0S_SIZE                             1
#define AVR32_USBC_UECON1SET_BUSY1S                                 25
#define AVR32_USBC_UECON1SET_BUSY1S_MASK                    0x02000000
#define AVR32_USBC_UECON1SET_BUSY1S_OFFSET                          25
#define AVR32_USBC_UECON1SET_BUSY1S_SIZE                             1
#define AVR32_USBC_UECON1SET_DATAXES                                 9
#define AVR32_USBC_UECON1SET_DATAXES_MASK                   0x00000200
#define AVR32_USBC_UECON1SET_DATAXES_OFFSET                          9
#define AVR32_USBC_UECON1SET_DATAXES_SIZE                            1
#define AVR32_USBC_UECON1SET_ERRORTRANSES                           10
#define AVR32_USBC_UECON1SET_ERRORTRANSES_MASK              0x00000400
#define AVR32_USBC_UECON1SET_ERRORTRANSES_OFFSET                    10
#define AVR32_USBC_UECON1SET_ERRORTRANSES_SIZE                       1
#define AVR32_USBC_UECON1SET_KILLBKS                                13
#define AVR32_USBC_UECON1SET_KILLBKS_MASK                   0x00002000
#define AVR32_USBC_UECON1SET_KILLBKS_OFFSET                         13
#define AVR32_USBC_UECON1SET_KILLBKS_SIZE                            1
#define AVR32_USBC_UECON1SET_MASK                           0x030e375f
#define AVR32_USBC_UECON1SET_MDATAES                                 8
#define AVR32_USBC_UECON1SET_MDATAES_MASK                   0x00000100
#define AVR32_USBC_UECON1SET_MDATAES_OFFSET                          8
#define AVR32_USBC_UECON1SET_MDATAES_SIZE                            1
#define AVR32_USBC_UECON1SET_NAKINES                                 4
#define AVR32_USBC_UECON1SET_NAKINES_MASK                   0x00000010
#define AVR32_USBC_UECON1SET_NAKINES_OFFSET                          4
#define AVR32_USBC_UECON1SET_NAKINES_SIZE                            1
#define AVR32_USBC_UECON1SET_NAKOUTES                                3
#define AVR32_USBC_UECON1SET_NAKOUTES_MASK                  0x00000008
#define AVR32_USBC_UECON1SET_NAKOUTES_OFFSET                         3
#define AVR32_USBC_UECON1SET_NAKOUTES_SIZE                           1
#define AVR32_USBC_UECON1SET_NBUSYBKES                              12
#define AVR32_USBC_UECON1SET_NBUSYBKES_MASK                 0x00001000
#define AVR32_USBC_UECON1SET_NBUSYBKES_OFFSET                       12
#define AVR32_USBC_UECON1SET_NBUSYBKES_SIZE                          1
#define AVR32_USBC_UECON1SET_NYETDISS                               17
#define AVR32_USBC_UECON1SET_NYETDISS_MASK                  0x00020000
#define AVR32_USBC_UECON1SET_NYETDISS_OFFSET                        17
#define AVR32_USBC_UECON1SET_NYETDISS_SIZE                           1
#define AVR32_USBC_UECON1SET_RESETVALUE                     0x00000000
#define AVR32_USBC_UECON1SET_RSTDTS                                 18
#define AVR32_USBC_UECON1SET_RSTDTS_MASK                    0x00040000
#define AVR32_USBC_UECON1SET_RSTDTS_OFFSET                          18
#define AVR32_USBC_UECON1SET_RSTDTS_SIZE                             1
#define AVR32_USBC_UECON1SET_RXOUTES                                 1
#define AVR32_USBC_UECON1SET_RXOUTES_MASK                   0x00000002
#define AVR32_USBC_UECON1SET_RXOUTES_OFFSET                          1
#define AVR32_USBC_UECON1SET_RXOUTES_SIZE                            1
#define AVR32_USBC_UECON1SET_RXSTPES                                 2
#define AVR32_USBC_UECON1SET_RXSTPES_MASK                   0x00000004
#define AVR32_USBC_UECON1SET_RXSTPES_OFFSET                          2
#define AVR32_USBC_UECON1SET_RXSTPES_SIZE                            1
#define AVR32_USBC_UECON1SET_STALLEDES                               6
#define AVR32_USBC_UECON1SET_STALLEDES_MASK                 0x00000040
#define AVR32_USBC_UECON1SET_STALLEDES_OFFSET                        6
#define AVR32_USBC_UECON1SET_STALLEDES_SIZE                          1
#define AVR32_USBC_UECON1SET_STALLRQS                               19
#define AVR32_USBC_UECON1SET_STALLRQS_MASK                  0x00080000
#define AVR32_USBC_UECON1SET_STALLRQS_OFFSET                        19
#define AVR32_USBC_UECON1SET_STALLRQS_SIZE                           1
#define AVR32_USBC_UECON1SET_TXINES                                  0
#define AVR32_USBC_UECON1SET_TXINES_MASK                    0x00000001
#define AVR32_USBC_UECON1SET_TXINES_OFFSET                           0
#define AVR32_USBC_UECON1SET_TXINES_SIZE                             1
#define AVR32_USBC_UECON1_BUSY0                                     24
#define AVR32_USBC_UECON1_BUSY0_MASK                        0x01000000
#define AVR32_USBC_UECON1_BUSY0_OFFSET                              24
#define AVR32_USBC_UECON1_BUSY0_SIZE                                 1
#define AVR32_USBC_UECON1_BUSY1                                     25
#define AVR32_USBC_UECON1_BUSY1_MASK                        0x02000000
#define AVR32_USBC_UECON1_BUSY1_OFFSET                              25
#define AVR32_USBC_UECON1_BUSY1_SIZE                                 1
#define AVR32_USBC_UECON1_DATAXE                                     9
#define AVR32_USBC_UECON1_DATAXE_MASK                       0x00000200
#define AVR32_USBC_UECON1_DATAXE_OFFSET                              9
#define AVR32_USBC_UECON1_DATAXE_SIZE                                1
#define AVR32_USBC_UECON1_ERRORTRANSE                               10
#define AVR32_USBC_UECON1_ERRORTRANSE_MASK                  0x00000400
#define AVR32_USBC_UECON1_ERRORTRANSE_OFFSET                        10
#define AVR32_USBC_UECON1_ERRORTRANSE_SIZE                           1
#define AVR32_USBC_UECON1_FIFOCON                                   14
#define AVR32_USBC_UECON1_FIFOCON_MASK                      0x00004000
#define AVR32_USBC_UECON1_FIFOCON_OFFSET                            14
#define AVR32_USBC_UECON1_FIFOCON_SIZE                               1
#define AVR32_USBC_UECON1_KILLBK                                    13
#define AVR32_USBC_UECON1_KILLBK_MASK                       0x00002000
#define AVR32_USBC_UECON1_KILLBK_OFFSET                             13
#define AVR32_USBC_UECON1_KILLBK_SIZE                                1
#define AVR32_USBC_UECON1_MASK                              0x030e775f
#define AVR32_USBC_UECON1_MDATAE                                     8
#define AVR32_USBC_UECON1_MDATAE_MASK                       0x00000100
#define AVR32_USBC_UECON1_MDATAE_OFFSET                              8
#define AVR32_USBC_UECON1_MDATAE_SIZE                                1
#define AVR32_USBC_UECON1_NAKINE                                     4
#define AVR32_USBC_UECON1_NAKINE_MASK                       0x00000010
#define AVR32_USBC_UECON1_NAKINE_OFFSET                              4
#define AVR32_USBC_UECON1_NAKINE_SIZE                                1
#define AVR32_USBC_UECON1_NAKOUTE                                    3
#define AVR32_USBC_UECON1_NAKOUTE_MASK                      0x00000008
#define AVR32_USBC_UECON1_NAKOUTE_OFFSET                             3
#define AVR32_USBC_UECON1_NAKOUTE_SIZE                               1
#define AVR32_USBC_UECON1_NBUSYBKE                                  12
#define AVR32_USBC_UECON1_NBUSYBKE_MASK                     0x00001000
#define AVR32_USBC_UECON1_NBUSYBKE_OFFSET                           12
#define AVR32_USBC_UECON1_NBUSYBKE_SIZE                              1
#define AVR32_USBC_UECON1_NYETDIS                                   17
#define AVR32_USBC_UECON1_NYETDIS_MASK                      0x00020000
#define AVR32_USBC_UECON1_NYETDIS_OFFSET                            17
#define AVR32_USBC_UECON1_NYETDIS_SIZE                               1
#define AVR32_USBC_UECON1_RESETVALUE                        0x00000000
#define AVR32_USBC_UECON1_RSTDT                                     18
#define AVR32_USBC_UECON1_RSTDT_MASK                        0x00040000
#define AVR32_USBC_UECON1_RSTDT_OFFSET                              18
#define AVR32_USBC_UECON1_RSTDT_SIZE                                 1
#define AVR32_USBC_UECON1_RXOUTE                                     1
#define AVR32_USBC_UECON1_RXOUTE_MASK                       0x00000002
#define AVR32_USBC_UECON1_RXOUTE_OFFSET                              1
#define AVR32_USBC_UECON1_RXOUTE_SIZE                                1
#define AVR32_USBC_UECON1_RXSTPE                                     2
#define AVR32_USBC_UECON1_RXSTPE_MASK                       0x00000004
#define AVR32_USBC_UECON1_RXSTPE_OFFSET                              2
#define AVR32_USBC_UECON1_RXSTPE_SIZE                                1
#define AVR32_USBC_UECON1_STALLEDE                                   6
#define AVR32_USBC_UECON1_STALLEDE_MASK                     0x00000040
#define AVR32_USBC_UECON1_STALLEDE_OFFSET                            6
#define AVR32_USBC_UECON1_STALLEDE_SIZE                              1
#define AVR32_USBC_UECON1_STALLRQ                                   19
#define AVR32_USBC_UECON1_STALLRQ_MASK                      0x00080000
#define AVR32_USBC_UECON1_STALLRQ_OFFSET                            19
#define AVR32_USBC_UECON1_STALLRQ_SIZE                               1
#define AVR32_USBC_UECON1_TXINE                                      0
#define AVR32_USBC_UECON1_TXINE_MASK                        0x00000001
#define AVR32_USBC_UECON1_TXINE_OFFSET                               0
#define AVR32_USBC_UECON1_TXINE_SIZE                                 1
#define AVR32_USBC_UECON2                                   0x000001c8
#define AVR32_USBC_UECON2CLR                                0x00000228
#define AVR32_USBC_UECON2CLR_BUSY0C                                 24
#define AVR32_USBC_UECON2CLR_BUSY0C_MASK                    0x01000000
#define AVR32_USBC_UECON2CLR_BUSY0C_OFFSET                          24
#define AVR32_USBC_UECON2CLR_BUSY0C_SIZE                             1
#define AVR32_USBC_UECON2CLR_BUSY1C                                 25
#define AVR32_USBC_UECON2CLR_BUSY1C_MASK                    0x02000000
#define AVR32_USBC_UECON2CLR_BUSY1C_OFFSET                          25
#define AVR32_USBC_UECON2CLR_BUSY1C_SIZE                             1
#define AVR32_USBC_UECON2CLR_DATAXEC                                 9
#define AVR32_USBC_UECON2CLR_DATAXEC_MASK                   0x00000200
#define AVR32_USBC_UECON2CLR_DATAXEC_OFFSET                          9
#define AVR32_USBC_UECON2CLR_DATAXEC_SIZE                            1
#define AVR32_USBC_UECON2CLR_ERRORTRANSEC                           10
#define AVR32_USBC_UECON2CLR_ERRORTRANSEC_MASK              0x00000400
#define AVR32_USBC_UECON2CLR_ERRORTRANSEC_OFFSET                    10
#define AVR32_USBC_UECON2CLR_ERRORTRANSEC_SIZE                       1
#define AVR32_USBC_UECON2CLR_FIFOCONC                               14
#define AVR32_USBC_UECON2CLR_FIFOCONC_MASK                  0x00004000
#define AVR32_USBC_UECON2CLR_FIFOCONC_OFFSET                        14
#define AVR32_USBC_UECON2CLR_FIFOCONC_SIZE                           1
#define AVR32_USBC_UECON2CLR_MASK                           0x030a575f
#define AVR32_USBC_UECON2CLR_MDATAEC                                 8
#define AVR32_USBC_UECON2CLR_MDATAEC_MASK                   0x00000100
#define AVR32_USBC_UECON2CLR_MDATAEC_OFFSET                          8
#define AVR32_USBC_UECON2CLR_MDATAEC_SIZE                            1
#define AVR32_USBC_UECON2CLR_NAKINEC                                 4
#define AVR32_USBC_UECON2CLR_NAKINEC_MASK                   0x00000010
#define AVR32_USBC_UECON2CLR_NAKINEC_OFFSET                          4
#define AVR32_USBC_UECON2CLR_NAKINEC_SIZE                            1
#define AVR32_USBC_UECON2CLR_NAKOUTEC                                3
#define AVR32_USBC_UECON2CLR_NAKOUTEC_MASK                  0x00000008
#define AVR32_USBC_UECON2CLR_NAKOUTEC_OFFSET                         3
#define AVR32_USBC_UECON2CLR_NAKOUTEC_SIZE                           1
#define AVR32_USBC_UECON2CLR_NBUSYBKEC                              12
#define AVR32_USBC_UECON2CLR_NBUSYBKEC_MASK                 0x00001000
#define AVR32_USBC_UECON2CLR_NBUSYBKEC_OFFSET                       12
#define AVR32_USBC_UECON2CLR_NBUSYBKEC_SIZE                          1
#define AVR32_USBC_UECON2CLR_NYETDISC                               17
#define AVR32_USBC_UECON2CLR_NYETDISC_MASK                  0x00020000
#define AVR32_USBC_UECON2CLR_NYETDISC_OFFSET                        17
#define AVR32_USBC_UECON2CLR_NYETDISC_SIZE                           1
#define AVR32_USBC_UECON2CLR_RESETVALUE                     0x00000000
#define AVR32_USBC_UECON2CLR_RXOUTEC                                 1
#define AVR32_USBC_UECON2CLR_RXOUTEC_MASK                   0x00000002
#define AVR32_USBC_UECON2CLR_RXOUTEC_OFFSET                          1
#define AVR32_USBC_UECON2CLR_RXOUTEC_SIZE                            1
#define AVR32_USBC_UECON2CLR_RXSTPEC                                 2
#define AVR32_USBC_UECON2CLR_RXSTPEC_MASK                   0x00000004
#define AVR32_USBC_UECON2CLR_RXSTPEC_OFFSET                          2
#define AVR32_USBC_UECON2CLR_RXSTPEC_SIZE                            1
#define AVR32_USBC_UECON2CLR_STALLEDEC                               6
#define AVR32_USBC_UECON2CLR_STALLEDEC_MASK                 0x00000040
#define AVR32_USBC_UECON2CLR_STALLEDEC_OFFSET                        6
#define AVR32_USBC_UECON2CLR_STALLEDEC_SIZE                          1
#define AVR32_USBC_UECON2CLR_STALLRQC                               19
#define AVR32_USBC_UECON2CLR_STALLRQC_MASK                  0x00080000
#define AVR32_USBC_UECON2CLR_STALLRQC_OFFSET                        19
#define AVR32_USBC_UECON2CLR_STALLRQC_SIZE                           1
#define AVR32_USBC_UECON2CLR_TXINEC                                  0
#define AVR32_USBC_UECON2CLR_TXINEC_MASK                    0x00000001
#define AVR32_USBC_UECON2CLR_TXINEC_OFFSET                           0
#define AVR32_USBC_UECON2CLR_TXINEC_SIZE                             1
#define AVR32_USBC_UECON2SET                                0x000001f8
#define AVR32_USBC_UECON2SET_BUSY0S                                 24
#define AVR32_USBC_UECON2SET_BUSY0S_MASK                    0x01000000
#define AVR32_USBC_UECON2SET_BUSY0S_OFFSET                          24
#define AVR32_USBC_UECON2SET_BUSY0S_SIZE                             1
#define AVR32_USBC_UECON2SET_BUSY1S                                 25
#define AVR32_USBC_UECON2SET_BUSY1S_MASK                    0x02000000
#define AVR32_USBC_UECON2SET_BUSY1S_OFFSET                          25
#define AVR32_USBC_UECON2SET_BUSY1S_SIZE                             1
#define AVR32_USBC_UECON2SET_DATAXES                                 9
#define AVR32_USBC_UECON2SET_DATAXES_MASK                   0x00000200
#define AVR32_USBC_UECON2SET_DATAXES_OFFSET                          9
#define AVR32_USBC_UECON2SET_DATAXES_SIZE                            1
#define AVR32_USBC_UECON2SET_ERRORTRANSES                           10
#define AVR32_USBC_UECON2SET_ERRORTRANSES_MASK              0x00000400
#define AVR32_USBC_UECON2SET_ERRORTRANSES_OFFSET                    10
#define AVR32_USBC_UECON2SET_ERRORTRANSES_SIZE                       1
#define AVR32_USBC_UECON2SET_KILLBKS                                13
#define AVR32_USBC_UECON2SET_KILLBKS_MASK                   0x00002000
#define AVR32_USBC_UECON2SET_KILLBKS_OFFSET                         13
#define AVR32_USBC_UECON2SET_KILLBKS_SIZE                            1
#define AVR32_USBC_UECON2SET_MASK                           0x030e375f
#define AVR32_USBC_UECON2SET_MDATAES                                 8
#define AVR32_USBC_UECON2SET_MDATAES_MASK                   0x00000100
#define AVR32_USBC_UECON2SET_MDATAES_OFFSET                          8
#define AVR32_USBC_UECON2SET_MDATAES_SIZE                            1
#define AVR32_USBC_UECON2SET_NAKINES                                 4
#define AVR32_USBC_UECON2SET_NAKINES_MASK                   0x00000010
#define AVR32_USBC_UECON2SET_NAKINES_OFFSET                          4
#define AVR32_USBC_UECON2SET_NAKINES_SIZE                            1
#define AVR32_USBC_UECON2SET_NAKOUTES                                3
#define AVR32_USBC_UECON2SET_NAKOUTES_MASK                  0x00000008
#define AVR32_USBC_UECON2SET_NAKOUTES_OFFSET                         3
#define AVR32_USBC_UECON2SET_NAKOUTES_SIZE                           1
#define AVR32_USBC_UECON2SET_NBUSYBKES                              12
#define AVR32_USBC_UECON2SET_NBUSYBKES_MASK                 0x00001000
#define AVR32_USBC_UECON2SET_NBUSYBKES_OFFSET                       12
#define AVR32_USBC_UECON2SET_NBUSYBKES_SIZE                          1
#define AVR32_USBC_UECON2SET_NYETDISS                               17
#define AVR32_USBC_UECON2SET_NYETDISS_MASK                  0x00020000
#define AVR32_USBC_UECON2SET_NYETDISS_OFFSET                        17
#define AVR32_USBC_UECON2SET_NYETDISS_SIZE                           1
#define AVR32_USBC_UECON2SET_RESETVALUE                     0x00000000
#define AVR32_USBC_UECON2SET_RSTDTS                                 18
#define AVR32_USBC_UECON2SET_RSTDTS_MASK                    0x00040000
#define AVR32_USBC_UECON2SET_RSTDTS_OFFSET                          18
#define AVR32_USBC_UECON2SET_RSTDTS_SIZE                             1
#define AVR32_USBC_UECON2SET_RXOUTES                                 1
#define AVR32_USBC_UECON2SET_RXOUTES_MASK                   0x00000002
#define AVR32_USBC_UECON2SET_RXOUTES_OFFSET                          1
#define AVR32_USBC_UECON2SET_RXOUTES_SIZE                            1
#define AVR32_USBC_UECON2SET_RXSTPES                                 2
#define AVR32_USBC_UECON2SET_RXSTPES_MASK                   0x00000004
#define AVR32_USBC_UECON2SET_RXSTPES_OFFSET                          2
#define AVR32_USBC_UECON2SET_RXSTPES_SIZE                            1
#define AVR32_USBC_UECON2SET_STALLEDES                               6
#define AVR32_USBC_UECON2SET_STALLEDES_MASK                 0x00000040
#define AVR32_USBC_UECON2SET_STALLEDES_OFFSET                        6
#define AVR32_USBC_UECON2SET_STALLEDES_SIZE                          1
#define AVR32_USBC_UECON2SET_STALLRQS                               19
#define AVR32_USBC_UECON2SET_STALLRQS_MASK                  0x00080000
#define AVR32_USBC_UECON2SET_STALLRQS_OFFSET                        19
#define AVR32_USBC_UECON2SET_STALLRQS_SIZE                           1
#define AVR32_USBC_UECON2SET_TXINES                                  0
#define AVR32_USBC_UECON2SET_TXINES_MASK                    0x00000001
#define AVR32_USBC_UECON2SET_TXINES_OFFSET                           0
#define AVR32_USBC_UECON2SET_TXINES_SIZE                             1
#define AVR32_USBC_UECON2_BUSY0                                     24
#define AVR32_USBC_UECON2_BUSY0_MASK                        0x01000000
#define AVR32_USBC_UECON2_BUSY0_OFFSET                              24
#define AVR32_USBC_UECON2_BUSY0_SIZE                                 1
#define AVR32_USBC_UECON2_BUSY1                                     25
#define AVR32_USBC_UECON2_BUSY1_MASK                        0x02000000
#define AVR32_USBC_UECON2_BUSY1_OFFSET                              25
#define AVR32_USBC_UECON2_BUSY1_SIZE                                 1
#define AVR32_USBC_UECON2_DATAXE                                     9
#define AVR32_USBC_UECON2_DATAXE_MASK                       0x00000200
#define AVR32_USBC_UECON2_DATAXE_OFFSET                              9
#define AVR32_USBC_UECON2_DATAXE_SIZE                                1
#define AVR32_USBC_UECON2_ERRORTRANSE                               10
#define AVR32_USBC_UECON2_ERRORTRANSE_MASK                  0x00000400
#define AVR32_USBC_UECON2_ERRORTRANSE_OFFSET                        10
#define AVR32_USBC_UECON2_ERRORTRANSE_SIZE                           1
#define AVR32_USBC_UECON2_FIFOCON                                   14
#define AVR32_USBC_UECON2_FIFOCON_MASK                      0x00004000
#define AVR32_USBC_UECON2_FIFOCON_OFFSET                            14
#define AVR32_USBC_UECON2_FIFOCON_SIZE                               1
#define AVR32_USBC_UECON2_KILLBK                                    13
#define AVR32_USBC_UECON2_KILLBK_MASK                       0x00002000
#define AVR32_USBC_UECON2_KILLBK_OFFSET                             13
#define AVR32_USBC_UECON2_KILLBK_SIZE                                1
#define AVR32_USBC_UECON2_MASK                              0x030e775f
#define AVR32_USBC_UECON2_MDATAE                                     8
#define AVR32_USBC_UECON2_MDATAE_MASK                       0x00000100
#define AVR32_USBC_UECON2_MDATAE_OFFSET                              8
#define AVR32_USBC_UECON2_MDATAE_SIZE                                1
#define AVR32_USBC_UECON2_NAKINE                                     4
#define AVR32_USBC_UECON2_NAKINE_MASK                       0x00000010
#define AVR32_USBC_UECON2_NAKINE_OFFSET                              4
#define AVR32_USBC_UECON2_NAKINE_SIZE                                1
#define AVR32_USBC_UECON2_NAKOUTE                                    3
#define AVR32_USBC_UECON2_NAKOUTE_MASK                      0x00000008
#define AVR32_USBC_UECON2_NAKOUTE_OFFSET                             3
#define AVR32_USBC_UECON2_NAKOUTE_SIZE                               1
#define AVR32_USBC_UECON2_NBUSYBKE                                  12
#define AVR32_USBC_UECON2_NBUSYBKE_MASK                     0x00001000
#define AVR32_USBC_UECON2_NBUSYBKE_OFFSET                           12
#define AVR32_USBC_UECON2_NBUSYBKE_SIZE                              1
#define AVR32_USBC_UECON2_NYETDIS                                   17
#define AVR32_USBC_UECON2_NYETDIS_MASK                      0x00020000
#define AVR32_USBC_UECON2_NYETDIS_OFFSET                            17
#define AVR32_USBC_UECON2_NYETDIS_SIZE                               1
#define AVR32_USBC_UECON2_RESETVALUE                        0x00000000
#define AVR32_USBC_UECON2_RSTDT                                     18
#define AVR32_USBC_UECON2_RSTDT_MASK                        0x00040000
#define AVR32_USBC_UECON2_RSTDT_OFFSET                              18
#define AVR32_USBC_UECON2_RSTDT_SIZE                                 1
#define AVR32_USBC_UECON2_RXOUTE                                     1
#define AVR32_USBC_UECON2_RXOUTE_MASK                       0x00000002
#define AVR32_USBC_UECON2_RXOUTE_OFFSET                              1
#define AVR32_USBC_UECON2_RXOUTE_SIZE                                1
#define AVR32_USBC_UECON2_RXSTPE                                     2
#define AVR32_USBC_UECON2_RXSTPE_MASK                       0x00000004
#define AVR32_USBC_UECON2_RXSTPE_OFFSET                              2
#define AVR32_USBC_UECON2_RXSTPE_SIZE                                1
#define AVR32_USBC_UECON2_STALLEDE                                   6
#define AVR32_USBC_UECON2_STALLEDE_MASK                     0x00000040
#define AVR32_USBC_UECON2_STALLEDE_OFFSET                            6
#define AVR32_USBC_UECON2_STALLEDE_SIZE                              1
#define AVR32_USBC_UECON2_STALLRQ                                   19
#define AVR32_USBC_UECON2_STALLRQ_MASK                      0x00080000
#define AVR32_USBC_UECON2_STALLRQ_OFFSET                            19
#define AVR32_USBC_UECON2_STALLRQ_SIZE                               1
#define AVR32_USBC_UECON2_TXINE                                      0
#define AVR32_USBC_UECON2_TXINE_MASK                        0x00000001
#define AVR32_USBC_UECON2_TXINE_OFFSET                               0
#define AVR32_USBC_UECON2_TXINE_SIZE                                 1
#define AVR32_USBC_UECON3                                   0x000001cc
#define AVR32_USBC_UECON3CLR                                0x0000022c
#define AVR32_USBC_UECON3CLR_BUSY0C                                 24
#define AVR32_USBC_UECON3CLR_BUSY0C_MASK                    0x01000000
#define AVR32_USBC_UECON3CLR_BUSY0C_OFFSET                          24
#define AVR32_USBC_UECON3CLR_BUSY0C_SIZE                             1
#define AVR32_USBC_UECON3CLR_BUSY1C                                 25
#define AVR32_USBC_UECON3CLR_BUSY1C_MASK                    0x02000000
#define AVR32_USBC_UECON3CLR_BUSY1C_OFFSET                          25
#define AVR32_USBC_UECON3CLR_BUSY1C_SIZE                             1
#define AVR32_USBC_UECON3CLR_DATAXEC                                 9
#define AVR32_USBC_UECON3CLR_DATAXEC_MASK                   0x00000200
#define AVR32_USBC_UECON3CLR_DATAXEC_OFFSET                          9
#define AVR32_USBC_UECON3CLR_DATAXEC_SIZE                            1
#define AVR32_USBC_UECON3CLR_ERRORTRANSEC                           10
#define AVR32_USBC_UECON3CLR_ERRORTRANSEC_MASK              0x00000400
#define AVR32_USBC_UECON3CLR_ERRORTRANSEC_OFFSET                    10
#define AVR32_USBC_UECON3CLR_ERRORTRANSEC_SIZE                       1
#define AVR32_USBC_UECON3CLR_FIFOCONC                               14
#define AVR32_USBC_UECON3CLR_FIFOCONC_MASK                  0x00004000
#define AVR32_USBC_UECON3CLR_FIFOCONC_OFFSET                        14
#define AVR32_USBC_UECON3CLR_FIFOCONC_SIZE                           1
#define AVR32_USBC_UECON3CLR_MASK                           0x030a575f
#define AVR32_USBC_UECON3CLR_MDATAEC                                 8
#define AVR32_USBC_UECON3CLR_MDATAEC_MASK                   0x00000100
#define AVR32_USBC_UECON3CLR_MDATAEC_OFFSET                          8
#define AVR32_USBC_UECON3CLR_MDATAEC_SIZE                            1
#define AVR32_USBC_UECON3CLR_NAKINEC                                 4
#define AVR32_USBC_UECON3CLR_NAKINEC_MASK                   0x00000010
#define AVR32_USBC_UECON3CLR_NAKINEC_OFFSET                          4
#define AVR32_USBC_UECON3CLR_NAKINEC_SIZE                            1
#define AVR32_USBC_UECON3CLR_NAKOUTEC                                3
#define AVR32_USBC_UECON3CLR_NAKOUTEC_MASK                  0x00000008
#define AVR32_USBC_UECON3CLR_NAKOUTEC_OFFSET                         3
#define AVR32_USBC_UECON3CLR_NAKOUTEC_SIZE                           1
#define AVR32_USBC_UECON3CLR_NBUSYBKEC                              12
#define AVR32_USBC_UECON3CLR_NBUSYBKEC_MASK                 0x00001000
#define AVR32_USBC_UECON3CLR_NBUSYBKEC_OFFSET                       12
#define AVR32_USBC_UECON3CLR_NBUSYBKEC_SIZE                          1
#define AVR32_USBC_UECON3CLR_NYETDISC                               17
#define AVR32_USBC_UECON3CLR_NYETDISC_MASK                  0x00020000
#define AVR32_USBC_UECON3CLR_NYETDISC_OFFSET                        17
#define AVR32_USBC_UECON3CLR_NYETDISC_SIZE                           1
#define AVR32_USBC_UECON3CLR_RESETVALUE                     0x00000000
#define AVR32_USBC_UECON3CLR_RXOUTEC                                 1
#define AVR32_USBC_UECON3CLR_RXOUTEC_MASK                   0x00000002
#define AVR32_USBC_UECON3CLR_RXOUTEC_OFFSET                          1
#define AVR32_USBC_UECON3CLR_RXOUTEC_SIZE                            1
#define AVR32_USBC_UECON3CLR_RXSTPEC                                 2
#define AVR32_USBC_UECON3CLR_RXSTPEC_MASK                   0x00000004
#define AVR32_USBC_UECON3CLR_RXSTPEC_OFFSET                          2
#define AVR32_USBC_UECON3CLR_RXSTPEC_SIZE                            1
#define AVR32_USBC_UECON3CLR_STALLEDEC                               6
#define AVR32_USBC_UECON3CLR_STALLEDEC_MASK                 0x00000040
#define AVR32_USBC_UECON3CLR_STALLEDEC_OFFSET                        6
#define AVR32_USBC_UECON3CLR_STALLEDEC_SIZE                          1
#define AVR32_USBC_UECON3CLR_STALLRQC                               19
#define AVR32_USBC_UECON3CLR_STALLRQC_MASK                  0x00080000
#define AVR32_USBC_UECON3CLR_STALLRQC_OFFSET                        19
#define AVR32_USBC_UECON3CLR_STALLRQC_SIZE                           1
#define AVR32_USBC_UECON3CLR_TXINEC                                  0
#define AVR32_USBC_UECON3CLR_TXINEC_MASK                    0x00000001
#define AVR32_USBC_UECON3CLR_TXINEC_OFFSET                           0
#define AVR32_USBC_UECON3CLR_TXINEC_SIZE                             1
#define AVR32_USBC_UECON3SET                                0x000001fc
#define AVR32_USBC_UECON3SET_BUSY0S                                 24
#define AVR32_USBC_UECON3SET_BUSY0S_MASK                    0x01000000
#define AVR32_USBC_UECON3SET_BUSY0S_OFFSET                          24
#define AVR32_USBC_UECON3SET_BUSY0S_SIZE                             1
#define AVR32_USBC_UECON3SET_BUSY1S                                 25
#define AVR32_USBC_UECON3SET_BUSY1S_MASK                    0x02000000
#define AVR32_USBC_UECON3SET_BUSY1S_OFFSET                          25
#define AVR32_USBC_UECON3SET_BUSY1S_SIZE                             1
#define AVR32_USBC_UECON3SET_DATAXES                                 9
#define AVR32_USBC_UECON3SET_DATAXES_MASK                   0x00000200
#define AVR32_USBC_UECON3SET_DATAXES_OFFSET                          9
#define AVR32_USBC_UECON3SET_DATAXES_SIZE                            1
#define AVR32_USBC_UECON3SET_ERRORTRANSES                           10
#define AVR32_USBC_UECON3SET_ERRORTRANSES_MASK              0x00000400
#define AVR32_USBC_UECON3SET_ERRORTRANSES_OFFSET                    10
#define AVR32_USBC_UECON3SET_ERRORTRANSES_SIZE                       1
#define AVR32_USBC_UECON3SET_KILLBKS                                13
#define AVR32_USBC_UECON3SET_KILLBKS_MASK                   0x00002000
#define AVR32_USBC_UECON3SET_KILLBKS_OFFSET                         13
#define AVR32_USBC_UECON3SET_KILLBKS_SIZE                            1
#define AVR32_USBC_UECON3SET_MASK                           0x030e375f
#define AVR32_USBC_UECON3SET_MDATAES                                 8
#define AVR32_USBC_UECON3SET_MDATAES_MASK                   0x00000100
#define AVR32_USBC_UECON3SET_MDATAES_OFFSET                          8
#define AVR32_USBC_UECON3SET_MDATAES_SIZE                            1
#define AVR32_USBC_UECON3SET_NAKINES                                 4
#define AVR32_USBC_UECON3SET_NAKINES_MASK                   0x00000010
#define AVR32_USBC_UECON3SET_NAKINES_OFFSET                          4
#define AVR32_USBC_UECON3SET_NAKINES_SIZE                            1
#define AVR32_USBC_UECON3SET_NAKOUTES                                3
#define AVR32_USBC_UECON3SET_NAKOUTES_MASK                  0x00000008
#define AVR32_USBC_UECON3SET_NAKOUTES_OFFSET                         3
#define AVR32_USBC_UECON3SET_NAKOUTES_SIZE                           1
#define AVR32_USBC_UECON3SET_NBUSYBKES                              12
#define AVR32_USBC_UECON3SET_NBUSYBKES_MASK                 0x00001000
#define AVR32_USBC_UECON3SET_NBUSYBKES_OFFSET                       12
#define AVR32_USBC_UECON3SET_NBUSYBKES_SIZE                          1
#define AVR32_USBC_UECON3SET_NYETDISS                               17
#define AVR32_USBC_UECON3SET_NYETDISS_MASK                  0x00020000
#define AVR32_USBC_UECON3SET_NYETDISS_OFFSET                        17
#define AVR32_USBC_UECON3SET_NYETDISS_SIZE                           1
#define AVR32_USBC_UECON3SET_RESETVALUE                     0x00000000
#define AVR32_USBC_UECON3SET_RSTDTS                                 18
#define AVR32_USBC_UECON3SET_RSTDTS_MASK                    0x00040000
#define AVR32_USBC_UECON3SET_RSTDTS_OFFSET                          18
#define AVR32_USBC_UECON3SET_RSTDTS_SIZE                             1
#define AVR32_USBC_UECON3SET_RXOUTES                                 1
#define AVR32_USBC_UECON3SET_RXOUTES_MASK                   0x00000002
#define AVR32_USBC_UECON3SET_RXOUTES_OFFSET                          1
#define AVR32_USBC_UECON3SET_RXOUTES_SIZE                            1
#define AVR32_USBC_UECON3SET_RXSTPES                                 2
#define AVR32_USBC_UECON3SET_RXSTPES_MASK                   0x00000004
#define AVR32_USBC_UECON3SET_RXSTPES_OFFSET                          2
#define AVR32_USBC_UECON3SET_RXSTPES_SIZE                            1
#define AVR32_USBC_UECON3SET_STALLEDES                               6
#define AVR32_USBC_UECON3SET_STALLEDES_MASK                 0x00000040
#define AVR32_USBC_UECON3SET_STALLEDES_OFFSET                        6
#define AVR32_USBC_UECON3SET_STALLEDES_SIZE                          1
#define AVR32_USBC_UECON3SET_STALLRQS                               19
#define AVR32_USBC_UECON3SET_STALLRQS_MASK                  0x00080000
#define AVR32_USBC_UECON3SET_STALLRQS_OFFSET                        19
#define AVR32_USBC_UECON3SET_STALLRQS_SIZE                           1
#define AVR32_USBC_UECON3SET_TXINES                                  0
#define AVR32_USBC_UECON3SET_TXINES_MASK                    0x00000001
#define AVR32_USBC_UECON3SET_TXINES_OFFSET                           0
#define AVR32_USBC_UECON3SET_TXINES_SIZE                             1
#define AVR32_USBC_UECON3_BUSY0                                     24
#define AVR32_USBC_UECON3_BUSY0_MASK                        0x01000000
#define AVR32_USBC_UECON3_BUSY0_OFFSET                              24
#define AVR32_USBC_UECON3_BUSY0_SIZE                                 1
#define AVR32_USBC_UECON3_BUSY1                                     25
#define AVR32_USBC_UECON3_BUSY1_MASK                        0x02000000
#define AVR32_USBC_UECON3_BUSY1_OFFSET                              25
#define AVR32_USBC_UECON3_BUSY1_SIZE                                 1
#define AVR32_USBC_UECON3_DATAXE                                     9
#define AVR32_USBC_UECON3_DATAXE_MASK                       0x00000200
#define AVR32_USBC_UECON3_DATAXE_OFFSET                              9
#define AVR32_USBC_UECON3_DATAXE_SIZE                                1
#define AVR32_USBC_UECON3_ERRORTRANSE                               10
#define AVR32_USBC_UECON3_ERRORTRANSE_MASK                  0x00000400
#define AVR32_USBC_UECON3_ERRORTRANSE_OFFSET                        10
#define AVR32_USBC_UECON3_ERRORTRANSE_SIZE                           1
#define AVR32_USBC_UECON3_FIFOCON                                   14
#define AVR32_USBC_UECON3_FIFOCON_MASK                      0x00004000
#define AVR32_USBC_UECON3_FIFOCON_OFFSET                            14
#define AVR32_USBC_UECON3_FIFOCON_SIZE                               1
#define AVR32_USBC_UECON3_KILLBK                                    13
#define AVR32_USBC_UECON3_KILLBK_MASK                       0x00002000
#define AVR32_USBC_UECON3_KILLBK_OFFSET                             13
#define AVR32_USBC_UECON3_KILLBK_SIZE                                1
#define AVR32_USBC_UECON3_MASK                              0x030e775f
#define AVR32_USBC_UECON3_MDATAE                                     8
#define AVR32_USBC_UECON3_MDATAE_MASK                       0x00000100
#define AVR32_USBC_UECON3_MDATAE_OFFSET                              8
#define AVR32_USBC_UECON3_MDATAE_SIZE                                1
#define AVR32_USBC_UECON3_NAKINE                                     4
#define AVR32_USBC_UECON3_NAKINE_MASK                       0x00000010
#define AVR32_USBC_UECON3_NAKINE_OFFSET                              4
#define AVR32_USBC_UECON3_NAKINE_SIZE                                1
#define AVR32_USBC_UECON3_NAKOUTE                                    3
#define AVR32_USBC_UECON3_NAKOUTE_MASK                      0x00000008
#define AVR32_USBC_UECON3_NAKOUTE_OFFSET                             3
#define AVR32_USBC_UECON3_NAKOUTE_SIZE                               1
#define AVR32_USBC_UECON3_NBUSYBKE                                  12
#define AVR32_USBC_UECON3_NBUSYBKE_MASK                     0x00001000
#define AVR32_USBC_UECON3_NBUSYBKE_OFFSET                           12
#define AVR32_USBC_UECON3_NBUSYBKE_SIZE                              1
#define AVR32_USBC_UECON3_NYETDIS                                   17
#define AVR32_USBC_UECON3_NYETDIS_MASK                      0x00020000
#define AVR32_USBC_UECON3_NYETDIS_OFFSET                            17
#define AVR32_USBC_UECON3_NYETDIS_SIZE                               1
#define AVR32_USBC_UECON3_RESETVALUE                        0x00000000
#define AVR32_USBC_UECON3_RSTDT                                     18
#define AVR32_USBC_UECON3_RSTDT_MASK                        0x00040000
#define AVR32_USBC_UECON3_RSTDT_OFFSET                              18
#define AVR32_USBC_UECON3_RSTDT_SIZE                                 1
#define AVR32_USBC_UECON3_RXOUTE                                     1
#define AVR32_USBC_UECON3_RXOUTE_MASK                       0x00000002
#define AVR32_USBC_UECON3_RXOUTE_OFFSET                              1
#define AVR32_USBC_UECON3_RXOUTE_SIZE                                1
#define AVR32_USBC_UECON3_RXSTPE                                     2
#define AVR32_USBC_UECON3_RXSTPE_MASK                       0x00000004
#define AVR32_USBC_UECON3_RXSTPE_OFFSET                              2
#define AVR32_USBC_UECON3_RXSTPE_SIZE                                1
#define AVR32_USBC_UECON3_STALLEDE                                   6
#define AVR32_USBC_UECON3_STALLEDE_MASK                     0x00000040
#define AVR32_USBC_UECON3_STALLEDE_OFFSET                            6
#define AVR32_USBC_UECON3_STALLEDE_SIZE                              1
#define AVR32_USBC_UECON3_STALLRQ                                   19
#define AVR32_USBC_UECON3_STALLRQ_MASK                      0x00080000
#define AVR32_USBC_UECON3_STALLRQ_OFFSET                            19
#define AVR32_USBC_UECON3_STALLRQ_SIZE                               1
#define AVR32_USBC_UECON3_TXINE                                      0
#define AVR32_USBC_UECON3_TXINE_MASK                        0x00000001
#define AVR32_USBC_UECON3_TXINE_OFFSET                               0
#define AVR32_USBC_UECON3_TXINE_SIZE                                 1
#define AVR32_USBC_UECON4                                   0x000001d0
#define AVR32_USBC_UECON4CLR                                0x00000230
#define AVR32_USBC_UECON4CLR_BUSY0C                                 24
#define AVR32_USBC_UECON4CLR_BUSY0C_MASK                    0x01000000
#define AVR32_USBC_UECON4CLR_BUSY0C_OFFSET                          24
#define AVR32_USBC_UECON4CLR_BUSY0C_SIZE                             1
#define AVR32_USBC_UECON4CLR_BUSY1C                                 25
#define AVR32_USBC_UECON4CLR_BUSY1C_MASK                    0x02000000
#define AVR32_USBC_UECON4CLR_BUSY1C_OFFSET                          25
#define AVR32_USBC_UECON4CLR_BUSY1C_SIZE                             1
#define AVR32_USBC_UECON4CLR_DATAXEC                                 9
#define AVR32_USBC_UECON4CLR_DATAXEC_MASK                   0x00000200
#define AVR32_USBC_UECON4CLR_DATAXEC_OFFSET                          9
#define AVR32_USBC_UECON4CLR_DATAXEC_SIZE                            1
#define AVR32_USBC_UECON4CLR_ERRORTRANSEC                           10
#define AVR32_USBC_UECON4CLR_ERRORTRANSEC_MASK              0x00000400
#define AVR32_USBC_UECON4CLR_ERRORTRANSEC_OFFSET                    10
#define AVR32_USBC_UECON4CLR_ERRORTRANSEC_SIZE                       1
#define AVR32_USBC_UECON4CLR_FIFOCONC                               14
#define AVR32_USBC_UECON4CLR_FIFOCONC_MASK                  0x00004000
#define AVR32_USBC_UECON4CLR_FIFOCONC_OFFSET                        14
#define AVR32_USBC_UECON4CLR_FIFOCONC_SIZE                           1
#define AVR32_USBC_UECON4CLR_MASK                           0x030a575f
#define AVR32_USBC_UECON4CLR_MDATAEC                                 8
#define AVR32_USBC_UECON4CLR_MDATAEC_MASK                   0x00000100
#define AVR32_USBC_UECON4CLR_MDATAEC_OFFSET                          8
#define AVR32_USBC_UECON4CLR_MDATAEC_SIZE                            1
#define AVR32_USBC_UECON4CLR_NAKINEC                                 4
#define AVR32_USBC_UECON4CLR_NAKINEC_MASK                   0x00000010
#define AVR32_USBC_UECON4CLR_NAKINEC_OFFSET                          4
#define AVR32_USBC_UECON4CLR_NAKINEC_SIZE                            1
#define AVR32_USBC_UECON4CLR_NAKOUTEC                                3
#define AVR32_USBC_UECON4CLR_NAKOUTEC_MASK                  0x00000008
#define AVR32_USBC_UECON4CLR_NAKOUTEC_OFFSET                         3
#define AVR32_USBC_UECON4CLR_NAKOUTEC_SIZE                           1
#define AVR32_USBC_UECON4CLR_NBUSYBKEC                              12
#define AVR32_USBC_UECON4CLR_NBUSYBKEC_MASK                 0x00001000
#define AVR32_USBC_UECON4CLR_NBUSYBKEC_OFFSET                       12
#define AVR32_USBC_UECON4CLR_NBUSYBKEC_SIZE                          1
#define AVR32_USBC_UECON4CLR_NYETDISC                               17
#define AVR32_USBC_UECON4CLR_NYETDISC_MASK                  0x00020000
#define AVR32_USBC_UECON4CLR_NYETDISC_OFFSET                        17
#define AVR32_USBC_UECON4CLR_NYETDISC_SIZE                           1
#define AVR32_USBC_UECON4CLR_RESETVALUE                     0x00000000
#define AVR32_USBC_UECON4CLR_RXOUTEC                                 1
#define AVR32_USBC_UECON4CLR_RXOUTEC_MASK                   0x00000002
#define AVR32_USBC_UECON4CLR_RXOUTEC_OFFSET                          1
#define AVR32_USBC_UECON4CLR_RXOUTEC_SIZE                            1
#define AVR32_USBC_UECON4CLR_RXSTPEC                                 2
#define AVR32_USBC_UECON4CLR_RXSTPEC_MASK                   0x00000004
#define AVR32_USBC_UECON4CLR_RXSTPEC_OFFSET                          2
#define AVR32_USBC_UECON4CLR_RXSTPEC_SIZE                            1
#define AVR32_USBC_UECON4CLR_STALLEDEC                               6
#define AVR32_USBC_UECON4CLR_STALLEDEC_MASK                 0x00000040
#define AVR32_USBC_UECON4CLR_STALLEDEC_OFFSET                        6
#define AVR32_USBC_UECON4CLR_STALLEDEC_SIZE                          1
#define AVR32_USBC_UECON4CLR_STALLRQC                               19
#define AVR32_USBC_UECON4CLR_STALLRQC_MASK                  0x00080000
#define AVR32_USBC_UECON4CLR_STALLRQC_OFFSET                        19
#define AVR32_USBC_UECON4CLR_STALLRQC_SIZE                           1
#define AVR32_USBC_UECON4CLR_TXINEC                                  0
#define AVR32_USBC_UECON4CLR_TXINEC_MASK                    0x00000001
#define AVR32_USBC_UECON4CLR_TXINEC_OFFSET                           0
#define AVR32_USBC_UECON4CLR_TXINEC_SIZE                             1
#define AVR32_USBC_UECON4SET                                0x00000200
#define AVR32_USBC_UECON4SET_BUSY0S                                 24
#define AVR32_USBC_UECON4SET_BUSY0S_MASK                    0x01000000
#define AVR32_USBC_UECON4SET_BUSY0S_OFFSET                          24
#define AVR32_USBC_UECON4SET_BUSY0S_SIZE                             1
#define AVR32_USBC_UECON4SET_BUSY1S                                 25
#define AVR32_USBC_UECON4SET_BUSY1S_MASK                    0x02000000
#define AVR32_USBC_UECON4SET_BUSY1S_OFFSET                          25
#define AVR32_USBC_UECON4SET_BUSY1S_SIZE                             1
#define AVR32_USBC_UECON4SET_DATAXES                                 9
#define AVR32_USBC_UECON4SET_DATAXES_MASK                   0x00000200
#define AVR32_USBC_UECON4SET_DATAXES_OFFSET                          9
#define AVR32_USBC_UECON4SET_DATAXES_SIZE                            1
#define AVR32_USBC_UECON4SET_ERRORTRANSES                           10
#define AVR32_USBC_UECON4SET_ERRORTRANSES_MASK              0x00000400
#define AVR32_USBC_UECON4SET_ERRORTRANSES_OFFSET                    10
#define AVR32_USBC_UECON4SET_ERRORTRANSES_SIZE                       1
#define AVR32_USBC_UECON4SET_KILLBKS                                13
#define AVR32_USBC_UECON4SET_KILLBKS_MASK                   0x00002000
#define AVR32_USBC_UECON4SET_KILLBKS_OFFSET                         13
#define AVR32_USBC_UECON4SET_KILLBKS_SIZE                            1
#define AVR32_USBC_UECON4SET_MASK                           0x030e375f
#define AVR32_USBC_UECON4SET_MDATAES                                 8
#define AVR32_USBC_UECON4SET_MDATAES_MASK                   0x00000100
#define AVR32_USBC_UECON4SET_MDATAES_OFFSET                          8
#define AVR32_USBC_UECON4SET_MDATAES_SIZE                            1
#define AVR32_USBC_UECON4SET_NAKINES                                 4
#define AVR32_USBC_UECON4SET_NAKINES_MASK                   0x00000010
#define AVR32_USBC_UECON4SET_NAKINES_OFFSET                          4
#define AVR32_USBC_UECON4SET_NAKINES_SIZE                            1
#define AVR32_USBC_UECON4SET_NAKOUTES                                3
#define AVR32_USBC_UECON4SET_NAKOUTES_MASK                  0x00000008
#define AVR32_USBC_UECON4SET_NAKOUTES_OFFSET                         3
#define AVR32_USBC_UECON4SET_NAKOUTES_SIZE                           1
#define AVR32_USBC_UECON4SET_NBUSYBKES                              12
#define AVR32_USBC_UECON4SET_NBUSYBKES_MASK                 0x00001000
#define AVR32_USBC_UECON4SET_NBUSYBKES_OFFSET                       12
#define AVR32_USBC_UECON4SET_NBUSYBKES_SIZE                          1
#define AVR32_USBC_UECON4SET_NYETDISS                               17
#define AVR32_USBC_UECON4SET_NYETDISS_MASK                  0x00020000
#define AVR32_USBC_UECON4SET_NYETDISS_OFFSET                        17
#define AVR32_USBC_UECON4SET_NYETDISS_SIZE                           1
#define AVR32_USBC_UECON4SET_RESETVALUE                     0x00000000
#define AVR32_USBC_UECON4SET_RSTDTS                                 18
#define AVR32_USBC_UECON4SET_RSTDTS_MASK                    0x00040000
#define AVR32_USBC_UECON4SET_RSTDTS_OFFSET                          18
#define AVR32_USBC_UECON4SET_RSTDTS_SIZE                             1
#define AVR32_USBC_UECON4SET_RXOUTES                                 1
#define AVR32_USBC_UECON4SET_RXOUTES_MASK                   0x00000002
#define AVR32_USBC_UECON4SET_RXOUTES_OFFSET                          1
#define AVR32_USBC_UECON4SET_RXOUTES_SIZE                            1
#define AVR32_USBC_UECON4SET_RXSTPES                                 2
#define AVR32_USBC_UECON4SET_RXSTPES_MASK                   0x00000004
#define AVR32_USBC_UECON4SET_RXSTPES_OFFSET                          2
#define AVR32_USBC_UECON4SET_RXSTPES_SIZE                            1
#define AVR32_USBC_UECON4SET_STALLEDES                               6
#define AVR32_USBC_UECON4SET_STALLEDES_MASK                 0x00000040
#define AVR32_USBC_UECON4SET_STALLEDES_OFFSET                        6
#define AVR32_USBC_UECON4SET_STALLEDES_SIZE                          1
#define AVR32_USBC_UECON4SET_STALLRQS                               19
#define AVR32_USBC_UECON4SET_STALLRQS_MASK                  0x00080000
#define AVR32_USBC_UECON4SET_STALLRQS_OFFSET                        19
#define AVR32_USBC_UECON4SET_STALLRQS_SIZE                           1
#define AVR32_USBC_UECON4SET_TXINES                                  0
#define AVR32_USBC_UECON4SET_TXINES_MASK                    0x00000001
#define AVR32_USBC_UECON4SET_TXINES_OFFSET                           0
#define AVR32_USBC_UECON4SET_TXINES_SIZE                             1
#define AVR32_USBC_UECON4_BUSY0                                     24
#define AVR32_USBC_UECON4_BUSY0_MASK                        0x01000000
#define AVR32_USBC_UECON4_BUSY0_OFFSET                              24
#define AVR32_USBC_UECON4_BUSY0_SIZE                                 1
#define AVR32_USBC_UECON4_BUSY1                                     25
#define AVR32_USBC_UECON4_BUSY1_MASK                        0x02000000
#define AVR32_USBC_UECON4_BUSY1_OFFSET                              25
#define AVR32_USBC_UECON4_BUSY1_SIZE                                 1
#define AVR32_USBC_UECON4_DATAXE                                     9
#define AVR32_USBC_UECON4_DATAXE_MASK                       0x00000200
#define AVR32_USBC_UECON4_DATAXE_OFFSET                              9
#define AVR32_USBC_UECON4_DATAXE_SIZE                                1
#define AVR32_USBC_UECON4_ERRORTRANSE                               10
#define AVR32_USBC_UECON4_ERRORTRANSE_MASK                  0x00000400
#define AVR32_USBC_UECON4_ERRORTRANSE_OFFSET                        10
#define AVR32_USBC_UECON4_ERRORTRANSE_SIZE                           1
#define AVR32_USBC_UECON4_FIFOCON                                   14
#define AVR32_USBC_UECON4_FIFOCON_MASK                      0x00004000
#define AVR32_USBC_UECON4_FIFOCON_OFFSET                            14
#define AVR32_USBC_UECON4_FIFOCON_SIZE                               1
#define AVR32_USBC_UECON4_KILLBK                                    13
#define AVR32_USBC_UECON4_KILLBK_MASK                       0x00002000
#define AVR32_USBC_UECON4_KILLBK_OFFSET                             13
#define AVR32_USBC_UECON4_KILLBK_SIZE                                1
#define AVR32_USBC_UECON4_MASK                              0x030e775f
#define AVR32_USBC_UECON4_MDATAE                                     8
#define AVR32_USBC_UECON4_MDATAE_MASK                       0x00000100
#define AVR32_USBC_UECON4_MDATAE_OFFSET                              8
#define AVR32_USBC_UECON4_MDATAE_SIZE                                1
#define AVR32_USBC_UECON4_NAKINE                                     4
#define AVR32_USBC_UECON4_NAKINE_MASK                       0x00000010
#define AVR32_USBC_UECON4_NAKINE_OFFSET                              4
#define AVR32_USBC_UECON4_NAKINE_SIZE                                1
#define AVR32_USBC_UECON4_NAKOUTE                                    3
#define AVR32_USBC_UECON4_NAKOUTE_MASK                      0x00000008
#define AVR32_USBC_UECON4_NAKOUTE_OFFSET                             3
#define AVR32_USBC_UECON4_NAKOUTE_SIZE                               1
#define AVR32_USBC_UECON4_NBUSYBKE                                  12
#define AVR32_USBC_UECON4_NBUSYBKE_MASK                     0x00001000
#define AVR32_USBC_UECON4_NBUSYBKE_OFFSET                           12
#define AVR32_USBC_UECON4_NBUSYBKE_SIZE                              1
#define AVR32_USBC_UECON4_NYETDIS                                   17
#define AVR32_USBC_UECON4_NYETDIS_MASK                      0x00020000
#define AVR32_USBC_UECON4_NYETDIS_OFFSET                            17
#define AVR32_USBC_UECON4_NYETDIS_SIZE                               1
#define AVR32_USBC_UECON4_RESETVALUE                        0x00000000
#define AVR32_USBC_UECON4_RSTDT                                     18
#define AVR32_USBC_UECON4_RSTDT_MASK                        0x00040000
#define AVR32_USBC_UECON4_RSTDT_OFFSET                              18
#define AVR32_USBC_UECON4_RSTDT_SIZE                                 1
#define AVR32_USBC_UECON4_RXOUTE                                     1
#define AVR32_USBC_UECON4_RXOUTE_MASK                       0x00000002
#define AVR32_USBC_UECON4_RXOUTE_OFFSET                              1
#define AVR32_USBC_UECON4_RXOUTE_SIZE                                1
#define AVR32_USBC_UECON4_RXSTPE                                     2
#define AVR32_USBC_UECON4_RXSTPE_MASK                       0x00000004
#define AVR32_USBC_UECON4_RXSTPE_OFFSET                              2
#define AVR32_USBC_UECON4_RXSTPE_SIZE                                1
#define AVR32_USBC_UECON4_STALLEDE                                   6
#define AVR32_USBC_UECON4_STALLEDE_MASK                     0x00000040
#define AVR32_USBC_UECON4_STALLEDE_OFFSET                            6
#define AVR32_USBC_UECON4_STALLEDE_SIZE                              1
#define AVR32_USBC_UECON4_STALLRQ                                   19
#define AVR32_USBC_UECON4_STALLRQ_MASK                      0x00080000
#define AVR32_USBC_UECON4_STALLRQ_OFFSET                            19
#define AVR32_USBC_UECON4_STALLRQ_SIZE                               1
#define AVR32_USBC_UECON4_TXINE                                      0
#define AVR32_USBC_UECON4_TXINE_MASK                        0x00000001
#define AVR32_USBC_UECON4_TXINE_OFFSET                               0
#define AVR32_USBC_UECON4_TXINE_SIZE                                 1
#define AVR32_USBC_UECON5                                   0x000001d4
#define AVR32_USBC_UECON5CLR                                0x00000234
#define AVR32_USBC_UECON5CLR_BUSY0C                                 24
#define AVR32_USBC_UECON5CLR_BUSY0C_MASK                    0x01000000
#define AVR32_USBC_UECON5CLR_BUSY0C_OFFSET                          24
#define AVR32_USBC_UECON5CLR_BUSY0C_SIZE                             1
#define AVR32_USBC_UECON5CLR_BUSY1C                                 25
#define AVR32_USBC_UECON5CLR_BUSY1C_MASK                    0x02000000
#define AVR32_USBC_UECON5CLR_BUSY1C_OFFSET                          25
#define AVR32_USBC_UECON5CLR_BUSY1C_SIZE                             1
#define AVR32_USBC_UECON5CLR_DATAXEC                                 9
#define AVR32_USBC_UECON5CLR_DATAXEC_MASK                   0x00000200
#define AVR32_USBC_UECON5CLR_DATAXEC_OFFSET                          9
#define AVR32_USBC_UECON5CLR_DATAXEC_SIZE                            1
#define AVR32_USBC_UECON5CLR_ERRORTRANSEC                           10
#define AVR32_USBC_UECON5CLR_ERRORTRANSEC_MASK              0x00000400
#define AVR32_USBC_UECON5CLR_ERRORTRANSEC_OFFSET                    10
#define AVR32_USBC_UECON5CLR_ERRORTRANSEC_SIZE                       1
#define AVR32_USBC_UECON5CLR_FIFOCONC                               14
#define AVR32_USBC_UECON5CLR_FIFOCONC_MASK                  0x00004000
#define AVR32_USBC_UECON5CLR_FIFOCONC_OFFSET                        14
#define AVR32_USBC_UECON5CLR_FIFOCONC_SIZE                           1
#define AVR32_USBC_UECON5CLR_MASK                           0x030a575f
#define AVR32_USBC_UECON5CLR_MDATAEC                                 8
#define AVR32_USBC_UECON5CLR_MDATAEC_MASK                   0x00000100
#define AVR32_USBC_UECON5CLR_MDATAEC_OFFSET                          8
#define AVR32_USBC_UECON5CLR_MDATAEC_SIZE                            1
#define AVR32_USBC_UECON5CLR_NAKINEC                                 4
#define AVR32_USBC_UECON5CLR_NAKINEC_MASK                   0x00000010
#define AVR32_USBC_UECON5CLR_NAKINEC_OFFSET                          4
#define AVR32_USBC_UECON5CLR_NAKINEC_SIZE                            1
#define AVR32_USBC_UECON5CLR_NAKOUTEC                                3
#define AVR32_USBC_UECON5CLR_NAKOUTEC_MASK                  0x00000008
#define AVR32_USBC_UECON5CLR_NAKOUTEC_OFFSET                         3
#define AVR32_USBC_UECON5CLR_NAKOUTEC_SIZE                           1
#define AVR32_USBC_UECON5CLR_NBUSYBKEC                              12
#define AVR32_USBC_UECON5CLR_NBUSYBKEC_MASK                 0x00001000
#define AVR32_USBC_UECON5CLR_NBUSYBKEC_OFFSET                       12
#define AVR32_USBC_UECON5CLR_NBUSYBKEC_SIZE                          1
#define AVR32_USBC_UECON5CLR_NYETDISC                               17
#define AVR32_USBC_UECON5CLR_NYETDISC_MASK                  0x00020000
#define AVR32_USBC_UECON5CLR_NYETDISC_OFFSET                        17
#define AVR32_USBC_UECON5CLR_NYETDISC_SIZE                           1
#define AVR32_USBC_UECON5CLR_RESETVALUE                     0x00000000
#define AVR32_USBC_UECON5CLR_RXOUTEC                                 1
#define AVR32_USBC_UECON5CLR_RXOUTEC_MASK                   0x00000002
#define AVR32_USBC_UECON5CLR_RXOUTEC_OFFSET                          1
#define AVR32_USBC_UECON5CLR_RXOUTEC_SIZE                            1
#define AVR32_USBC_UECON5CLR_RXSTPEC                                 2
#define AVR32_USBC_UECON5CLR_RXSTPEC_MASK                   0x00000004
#define AVR32_USBC_UECON5CLR_RXSTPEC_OFFSET                          2
#define AVR32_USBC_UECON5CLR_RXSTPEC_SIZE                            1
#define AVR32_USBC_UECON5CLR_STALLEDEC                               6
#define AVR32_USBC_UECON5CLR_STALLEDEC_MASK                 0x00000040
#define AVR32_USBC_UECON5CLR_STALLEDEC_OFFSET                        6
#define AVR32_USBC_UECON5CLR_STALLEDEC_SIZE                          1
#define AVR32_USBC_UECON5CLR_STALLRQC                               19
#define AVR32_USBC_UECON5CLR_STALLRQC_MASK                  0x00080000
#define AVR32_USBC_UECON5CLR_STALLRQC_OFFSET                        19
#define AVR32_USBC_UECON5CLR_STALLRQC_SIZE                           1
#define AVR32_USBC_UECON5CLR_TXINEC                                  0
#define AVR32_USBC_UECON5CLR_TXINEC_MASK                    0x00000001
#define AVR32_USBC_UECON5CLR_TXINEC_OFFSET                           0
#define AVR32_USBC_UECON5CLR_TXINEC_SIZE                             1
#define AVR32_USBC_UECON5SET                                0x00000204
#define AVR32_USBC_UECON5SET_BUSY0S                                 24
#define AVR32_USBC_UECON5SET_BUSY0S_MASK                    0x01000000
#define AVR32_USBC_UECON5SET_BUSY0S_OFFSET                          24
#define AVR32_USBC_UECON5SET_BUSY0S_SIZE                             1
#define AVR32_USBC_UECON5SET_BUSY1S                                 25
#define AVR32_USBC_UECON5SET_BUSY1S_MASK                    0x02000000
#define AVR32_USBC_UECON5SET_BUSY1S_OFFSET                          25
#define AVR32_USBC_UECON5SET_BUSY1S_SIZE                             1
#define AVR32_USBC_UECON5SET_DATAXES                                 9
#define AVR32_USBC_UECON5SET_DATAXES_MASK                   0x00000200
#define AVR32_USBC_UECON5SET_DATAXES_OFFSET                          9
#define AVR32_USBC_UECON5SET_DATAXES_SIZE                            1
#define AVR32_USBC_UECON5SET_ERRORTRANSES                           10
#define AVR32_USBC_UECON5SET_ERRORTRANSES_MASK              0x00000400
#define AVR32_USBC_UECON5SET_ERRORTRANSES_OFFSET                    10
#define AVR32_USBC_UECON5SET_ERRORTRANSES_SIZE                       1
#define AVR32_USBC_UECON5SET_KILLBKS                                13
#define AVR32_USBC_UECON5SET_KILLBKS_MASK                   0x00002000
#define AVR32_USBC_UECON5SET_KILLBKS_OFFSET                         13
#define AVR32_USBC_UECON5SET_KILLBKS_SIZE                            1
#define AVR32_USBC_UECON5SET_MASK                           0x030e375f
#define AVR32_USBC_UECON5SET_MDATAES                                 8
#define AVR32_USBC_UECON5SET_MDATAES_MASK                   0x00000100
#define AVR32_USBC_UECON5SET_MDATAES_OFFSET                          8
#define AVR32_USBC_UECON5SET_MDATAES_SIZE                            1
#define AVR32_USBC_UECON5SET_NAKINES                                 4
#define AVR32_USBC_UECON5SET_NAKINES_MASK                   0x00000010
#define AVR32_USBC_UECON5SET_NAKINES_OFFSET                          4
#define AVR32_USBC_UECON5SET_NAKINES_SIZE                            1
#define AVR32_USBC_UECON5SET_NAKOUTES                                3
#define AVR32_USBC_UECON5SET_NAKOUTES_MASK                  0x00000008
#define AVR32_USBC_UECON5SET_NAKOUTES_OFFSET                         3
#define AVR32_USBC_UECON5SET_NAKOUTES_SIZE                           1
#define AVR32_USBC_UECON5SET_NBUSYBKES                              12
#define AVR32_USBC_UECON5SET_NBUSYBKES_MASK                 0x00001000
#define AVR32_USBC_UECON5SET_NBUSYBKES_OFFSET                       12
#define AVR32_USBC_UECON5SET_NBUSYBKES_SIZE                          1
#define AVR32_USBC_UECON5SET_NYETDISS                               17
#define AVR32_USBC_UECON5SET_NYETDISS_MASK                  0x00020000
#define AVR32_USBC_UECON5SET_NYETDISS_OFFSET                        17
#define AVR32_USBC_UECON5SET_NYETDISS_SIZE                           1
#define AVR32_USBC_UECON5SET_RESETVALUE                     0x00000000
#define AVR32_USBC_UECON5SET_RSTDTS                                 18
#define AVR32_USBC_UECON5SET_RSTDTS_MASK                    0x00040000
#define AVR32_USBC_UECON5SET_RSTDTS_OFFSET                          18
#define AVR32_USBC_UECON5SET_RSTDTS_SIZE                             1
#define AVR32_USBC_UECON5SET_RXOUTES                                 1
#define AVR32_USBC_UECON5SET_RXOUTES_MASK                   0x00000002
#define AVR32_USBC_UECON5SET_RXOUTES_OFFSET                          1
#define AVR32_USBC_UECON5SET_RXOUTES_SIZE                            1
#define AVR32_USBC_UECON5SET_RXSTPES                                 2
#define AVR32_USBC_UECON5SET_RXSTPES_MASK                   0x00000004
#define AVR32_USBC_UECON5SET_RXSTPES_OFFSET                          2
#define AVR32_USBC_UECON5SET_RXSTPES_SIZE                            1
#define AVR32_USBC_UECON5SET_STALLEDES                               6
#define AVR32_USBC_UECON5SET_STALLEDES_MASK                 0x00000040
#define AVR32_USBC_UECON5SET_STALLEDES_OFFSET                        6
#define AVR32_USBC_UECON5SET_STALLEDES_SIZE                          1
#define AVR32_USBC_UECON5SET_STALLRQS                               19
#define AVR32_USBC_UECON5SET_STALLRQS_MASK                  0x00080000
#define AVR32_USBC_UECON5SET_STALLRQS_OFFSET                        19
#define AVR32_USBC_UECON5SET_STALLRQS_SIZE                           1
#define AVR32_USBC_UECON5SET_TXINES                                  0
#define AVR32_USBC_UECON5SET_TXINES_MASK                    0x00000001
#define AVR32_USBC_UECON5SET_TXINES_OFFSET                           0
#define AVR32_USBC_UECON5SET_TXINES_SIZE                             1
#define AVR32_USBC_UECON5_BUSY0                                     24
#define AVR32_USBC_UECON5_BUSY0_MASK                        0x01000000
#define AVR32_USBC_UECON5_BUSY0_OFFSET                              24
#define AVR32_USBC_UECON5_BUSY0_SIZE                                 1
#define AVR32_USBC_UECON5_BUSY1                                     25
#define AVR32_USBC_UECON5_BUSY1_MASK                        0x02000000
#define AVR32_USBC_UECON5_BUSY1_OFFSET                              25
#define AVR32_USBC_UECON5_BUSY1_SIZE                                 1
#define AVR32_USBC_UECON5_DATAXE                                     9
#define AVR32_USBC_UECON5_DATAXE_MASK                       0x00000200
#define AVR32_USBC_UECON5_DATAXE_OFFSET                              9
#define AVR32_USBC_UECON5_DATAXE_SIZE                                1
#define AVR32_USBC_UECON5_ERRORTRANSE                               10
#define AVR32_USBC_UECON5_ERRORTRANSE_MASK                  0x00000400
#define AVR32_USBC_UECON5_ERRORTRANSE_OFFSET                        10
#define AVR32_USBC_UECON5_ERRORTRANSE_SIZE                           1
#define AVR32_USBC_UECON5_FIFOCON                                   14
#define AVR32_USBC_UECON5_FIFOCON_MASK                      0x00004000
#define AVR32_USBC_UECON5_FIFOCON_OFFSET                            14
#define AVR32_USBC_UECON5_FIFOCON_SIZE                               1
#define AVR32_USBC_UECON5_KILLBK                                    13
#define AVR32_USBC_UECON5_KILLBK_MASK                       0x00002000
#define AVR32_USBC_UECON5_KILLBK_OFFSET                             13
#define AVR32_USBC_UECON5_KILLBK_SIZE                                1
#define AVR32_USBC_UECON5_MASK                              0x030e775f
#define AVR32_USBC_UECON5_MDATAE                                     8
#define AVR32_USBC_UECON5_MDATAE_MASK                       0x00000100
#define AVR32_USBC_UECON5_MDATAE_OFFSET                              8
#define AVR32_USBC_UECON5_MDATAE_SIZE                                1
#define AVR32_USBC_UECON5_NAKINE                                     4
#define AVR32_USBC_UECON5_NAKINE_MASK                       0x00000010
#define AVR32_USBC_UECON5_NAKINE_OFFSET                              4
#define AVR32_USBC_UECON5_NAKINE_SIZE                                1
#define AVR32_USBC_UECON5_NAKOUTE                                    3
#define AVR32_USBC_UECON5_NAKOUTE_MASK                      0x00000008
#define AVR32_USBC_UECON5_NAKOUTE_OFFSET                             3
#define AVR32_USBC_UECON5_NAKOUTE_SIZE                               1
#define AVR32_USBC_UECON5_NBUSYBKE                                  12
#define AVR32_USBC_UECON5_NBUSYBKE_MASK                     0x00001000
#define AVR32_USBC_UECON5_NBUSYBKE_OFFSET                           12
#define AVR32_USBC_UECON5_NBUSYBKE_SIZE                              1
#define AVR32_USBC_UECON5_NYETDIS                                   17
#define AVR32_USBC_UECON5_NYETDIS_MASK                      0x00020000
#define AVR32_USBC_UECON5_NYETDIS_OFFSET                            17
#define AVR32_USBC_UECON5_NYETDIS_SIZE                               1
#define AVR32_USBC_UECON5_RESETVALUE                        0x00000000
#define AVR32_USBC_UECON5_RSTDT                                     18
#define AVR32_USBC_UECON5_RSTDT_MASK                        0x00040000
#define AVR32_USBC_UECON5_RSTDT_OFFSET                              18
#define AVR32_USBC_UECON5_RSTDT_SIZE                                 1
#define AVR32_USBC_UECON5_RXOUTE                                     1
#define AVR32_USBC_UECON5_RXOUTE_MASK                       0x00000002
#define AVR32_USBC_UECON5_RXOUTE_OFFSET                              1
#define AVR32_USBC_UECON5_RXOUTE_SIZE                                1
#define AVR32_USBC_UECON5_RXSTPE                                     2
#define AVR32_USBC_UECON5_RXSTPE_MASK                       0x00000004
#define AVR32_USBC_UECON5_RXSTPE_OFFSET                              2
#define AVR32_USBC_UECON5_RXSTPE_SIZE                                1
#define AVR32_USBC_UECON5_STALLEDE                                   6
#define AVR32_USBC_UECON5_STALLEDE_MASK                     0x00000040
#define AVR32_USBC_UECON5_STALLEDE_OFFSET                            6
#define AVR32_USBC_UECON5_STALLEDE_SIZE                              1
#define AVR32_USBC_UECON5_STALLRQ                                   19
#define AVR32_USBC_UECON5_STALLRQ_MASK                      0x00080000
#define AVR32_USBC_UECON5_STALLRQ_OFFSET                            19
#define AVR32_USBC_UECON5_STALLRQ_SIZE                               1
#define AVR32_USBC_UECON5_TXINE                                      0
#define AVR32_USBC_UECON5_TXINE_MASK                        0x00000001
#define AVR32_USBC_UECON5_TXINE_OFFSET                               0
#define AVR32_USBC_UECON5_TXINE_SIZE                                 1
#define AVR32_USBC_UECON6                                   0x000001d8
#define AVR32_USBC_UECON6CLR                                0x00000238
#define AVR32_USBC_UECON6CLR_BUSY0C                                 24
#define AVR32_USBC_UECON6CLR_BUSY0C_MASK                    0x01000000
#define AVR32_USBC_UECON6CLR_BUSY0C_OFFSET                          24
#define AVR32_USBC_UECON6CLR_BUSY0C_SIZE                             1
#define AVR32_USBC_UECON6CLR_BUSY1C                                 25
#define AVR32_USBC_UECON6CLR_BUSY1C_MASK                    0x02000000
#define AVR32_USBC_UECON6CLR_BUSY1C_OFFSET                          25
#define AVR32_USBC_UECON6CLR_BUSY1C_SIZE                             1
#define AVR32_USBC_UECON6CLR_DATAXEC                                 9
#define AVR32_USBC_UECON6CLR_DATAXEC_MASK                   0x00000200
#define AVR32_USBC_UECON6CLR_DATAXEC_OFFSET                          9
#define AVR32_USBC_UECON6CLR_DATAXEC_SIZE                            1
#define AVR32_USBC_UECON6CLR_ERRORTRANSEC                           10
#define AVR32_USBC_UECON6CLR_ERRORTRANSEC_MASK              0x00000400
#define AVR32_USBC_UECON6CLR_ERRORTRANSEC_OFFSET                    10
#define AVR32_USBC_UECON6CLR_ERRORTRANSEC_SIZE                       1
#define AVR32_USBC_UECON6CLR_FIFOCONC                               14
#define AVR32_USBC_UECON6CLR_FIFOCONC_MASK                  0x00004000
#define AVR32_USBC_UECON6CLR_FIFOCONC_OFFSET                        14
#define AVR32_USBC_UECON6CLR_FIFOCONC_SIZE                           1
#define AVR32_USBC_UECON6CLR_MASK                           0x030a575f
#define AVR32_USBC_UECON6CLR_MDATAEC                                 8
#define AVR32_USBC_UECON6CLR_MDATAEC_MASK                   0x00000100
#define AVR32_USBC_UECON6CLR_MDATAEC_OFFSET                          8
#define AVR32_USBC_UECON6CLR_MDATAEC_SIZE                            1
#define AVR32_USBC_UECON6CLR_NAKINEC                                 4
#define AVR32_USBC_UECON6CLR_NAKINEC_MASK                   0x00000010
#define AVR32_USBC_UECON6CLR_NAKINEC_OFFSET                          4
#define AVR32_USBC_UECON6CLR_NAKINEC_SIZE                            1
#define AVR32_USBC_UECON6CLR_NAKOUTEC                                3
#define AVR32_USBC_UECON6CLR_NAKOUTEC_MASK                  0x00000008
#define AVR32_USBC_UECON6CLR_NAKOUTEC_OFFSET                         3
#define AVR32_USBC_UECON6CLR_NAKOUTEC_SIZE                           1
#define AVR32_USBC_UECON6CLR_NBUSYBKEC                              12
#define AVR32_USBC_UECON6CLR_NBUSYBKEC_MASK                 0x00001000
#define AVR32_USBC_UECON6CLR_NBUSYBKEC_OFFSET                       12
#define AVR32_USBC_UECON6CLR_NBUSYBKEC_SIZE                          1
#define AVR32_USBC_UECON6CLR_NYETDISC                               17
#define AVR32_USBC_UECON6CLR_NYETDISC_MASK                  0x00020000
#define AVR32_USBC_UECON6CLR_NYETDISC_OFFSET                        17
#define AVR32_USBC_UECON6CLR_NYETDISC_SIZE                           1
#define AVR32_USBC_UECON6CLR_RESETVALUE                     0x00000000
#define AVR32_USBC_UECON6CLR_RXOUTEC                                 1
#define AVR32_USBC_UECON6CLR_RXOUTEC_MASK                   0x00000002
#define AVR32_USBC_UECON6CLR_RXOUTEC_OFFSET                          1
#define AVR32_USBC_UECON6CLR_RXOUTEC_SIZE                            1
#define AVR32_USBC_UECON6CLR_RXSTPEC                                 2
#define AVR32_USBC_UECON6CLR_RXSTPEC_MASK                   0x00000004
#define AVR32_USBC_UECON6CLR_RXSTPEC_OFFSET                          2
#define AVR32_USBC_UECON6CLR_RXSTPEC_SIZE                            1
#define AVR32_USBC_UECON6CLR_STALLEDEC                               6
#define AVR32_USBC_UECON6CLR_STALLEDEC_MASK                 0x00000040
#define AVR32_USBC_UECON6CLR_STALLEDEC_OFFSET                        6
#define AVR32_USBC_UECON6CLR_STALLEDEC_SIZE                          1
#define AVR32_USBC_UECON6CLR_STALLRQC                               19
#define AVR32_USBC_UECON6CLR_STALLRQC_MASK                  0x00080000
#define AVR32_USBC_UECON6CLR_STALLRQC_OFFSET                        19
#define AVR32_USBC_UECON6CLR_STALLRQC_SIZE                           1
#define AVR32_USBC_UECON6CLR_TXINEC                                  0
#define AVR32_USBC_UECON6CLR_TXINEC_MASK                    0x00000001
#define AVR32_USBC_UECON6CLR_TXINEC_OFFSET                           0
#define AVR32_USBC_UECON6CLR_TXINEC_SIZE                             1
#define AVR32_USBC_UECON6SET                                0x00000208
#define AVR32_USBC_UECON6SET_BUSY0S                                 24
#define AVR32_USBC_UECON6SET_BUSY0S_MASK                    0x01000000
#define AVR32_USBC_UECON6SET_BUSY0S_OFFSET                          24
#define AVR32_USBC_UECON6SET_BUSY0S_SIZE                             1
#define AVR32_USBC_UECON6SET_BUSY1S                                 25
#define AVR32_USBC_UECON6SET_BUSY1S_MASK                    0x02000000
#define AVR32_USBC_UECON6SET_BUSY1S_OFFSET                          25
#define AVR32_USBC_UECON6SET_BUSY1S_SIZE                             1
#define AVR32_USBC_UECON6SET_DATAXES                                 9
#define AVR32_USBC_UECON6SET_DATAXES_MASK                   0x00000200
#define AVR32_USBC_UECON6SET_DATAXES_OFFSET                          9
#define AVR32_USBC_UECON6SET_DATAXES_SIZE                            1
#define AVR32_USBC_UECON6SET_ERRORTRANSES                           10
#define AVR32_USBC_UECON6SET_ERRORTRANSES_MASK              0x00000400
#define AVR32_USBC_UECON6SET_ERRORTRANSES_OFFSET                    10
#define AVR32_USBC_UECON6SET_ERRORTRANSES_SIZE                       1
#define AVR32_USBC_UECON6SET_KILLBKS                                13
#define AVR32_USBC_UECON6SET_KILLBKS_MASK                   0x00002000
#define AVR32_USBC_UECON6SET_KILLBKS_OFFSET                         13
#define AVR32_USBC_UECON6SET_KILLBKS_SIZE                            1
#define AVR32_USBC_UECON6SET_MASK                           0x030e375f
#define AVR32_USBC_UECON6SET_MDATAES                                 8
#define AVR32_USBC_UECON6SET_MDATAES_MASK                   0x00000100
#define AVR32_USBC_UECON6SET_MDATAES_OFFSET                          8
#define AVR32_USBC_UECON6SET_MDATAES_SIZE                            1
#define AVR32_USBC_UECON6SET_NAKINES                                 4
#define AVR32_USBC_UECON6SET_NAKINES_MASK                   0x00000010
#define AVR32_USBC_UECON6SET_NAKINES_OFFSET                          4
#define AVR32_USBC_UECON6SET_NAKINES_SIZE                            1
#define AVR32_USBC_UECON6SET_NAKOUTES                                3
#define AVR32_USBC_UECON6SET_NAKOUTES_MASK                  0x00000008
#define AVR32_USBC_UECON6SET_NAKOUTES_OFFSET                         3
#define AVR32_USBC_UECON6SET_NAKOUTES_SIZE                           1
#define AVR32_USBC_UECON6SET_NBUSYBKES                              12
#define AVR32_USBC_UECON6SET_NBUSYBKES_MASK                 0x00001000
#define AVR32_USBC_UECON6SET_NBUSYBKES_OFFSET                       12
#define AVR32_USBC_UECON6SET_NBUSYBKES_SIZE                          1
#define AVR32_USBC_UECON6SET_NYETDISS                               17
#define AVR32_USBC_UECON6SET_NYETDISS_MASK                  0x00020000
#define AVR32_USBC_UECON6SET_NYETDISS_OFFSET                        17
#define AVR32_USBC_UECON6SET_NYETDISS_SIZE                           1
#define AVR32_USBC_UECON6SET_RESETVALUE                     0x00000000
#define AVR32_USBC_UECON6SET_RSTDTS                                 18
#define AVR32_USBC_UECON6SET_RSTDTS_MASK                    0x00040000
#define AVR32_USBC_UECON6SET_RSTDTS_OFFSET                          18
#define AVR32_USBC_UECON6SET_RSTDTS_SIZE                             1
#define AVR32_USBC_UECON6SET_RXOUTES                                 1
#define AVR32_USBC_UECON6SET_RXOUTES_MASK                   0x00000002
#define AVR32_USBC_UECON6SET_RXOUTES_OFFSET                          1
#define AVR32_USBC_UECON6SET_RXOUTES_SIZE                            1
#define AVR32_USBC_UECON6SET_RXSTPES                                 2
#define AVR32_USBC_UECON6SET_RXSTPES_MASK                   0x00000004
#define AVR32_USBC_UECON6SET_RXSTPES_OFFSET                          2
#define AVR32_USBC_UECON6SET_RXSTPES_SIZE                            1
#define AVR32_USBC_UECON6SET_STALLEDES                               6
#define AVR32_USBC_UECON6SET_STALLEDES_MASK                 0x00000040
#define AVR32_USBC_UECON6SET_STALLEDES_OFFSET                        6
#define AVR32_USBC_UECON6SET_STALLEDES_SIZE                          1
#define AVR32_USBC_UECON6SET_STALLRQS                               19
#define AVR32_USBC_UECON6SET_STALLRQS_MASK                  0x00080000
#define AVR32_USBC_UECON6SET_STALLRQS_OFFSET                        19
#define AVR32_USBC_UECON6SET_STALLRQS_SIZE                           1
#define AVR32_USBC_UECON6SET_TXINES                                  0
#define AVR32_USBC_UECON6SET_TXINES_MASK                    0x00000001
#define AVR32_USBC_UECON6SET_TXINES_OFFSET                           0
#define AVR32_USBC_UECON6SET_TXINES_SIZE                             1
#define AVR32_USBC_UECON6_BUSY0                                     24
#define AVR32_USBC_UECON6_BUSY0_MASK                        0x01000000
#define AVR32_USBC_UECON6_BUSY0_OFFSET                              24
#define AVR32_USBC_UECON6_BUSY0_SIZE                                 1
#define AVR32_USBC_UECON6_BUSY1                                     25
#define AVR32_USBC_UECON6_BUSY1_MASK                        0x02000000
#define AVR32_USBC_UECON6_BUSY1_OFFSET                              25
#define AVR32_USBC_UECON6_BUSY1_SIZE                                 1
#define AVR32_USBC_UECON6_DATAXE                                     9
#define AVR32_USBC_UECON6_DATAXE_MASK                       0x00000200
#define AVR32_USBC_UECON6_DATAXE_OFFSET                              9
#define AVR32_USBC_UECON6_DATAXE_SIZE                                1
#define AVR32_USBC_UECON6_ERRORTRANSE                               10
#define AVR32_USBC_UECON6_ERRORTRANSE_MASK                  0x00000400
#define AVR32_USBC_UECON6_ERRORTRANSE_OFFSET                        10
#define AVR32_USBC_UECON6_ERRORTRANSE_SIZE                           1
#define AVR32_USBC_UECON6_FIFOCON                                   14
#define AVR32_USBC_UECON6_FIFOCON_MASK                      0x00004000
#define AVR32_USBC_UECON6_FIFOCON_OFFSET                            14
#define AVR32_USBC_UECON6_FIFOCON_SIZE                               1
#define AVR32_USBC_UECON6_KILLBK                                    13
#define AVR32_USBC_UECON6_KILLBK_MASK                       0x00002000
#define AVR32_USBC_UECON6_KILLBK_OFFSET                             13
#define AVR32_USBC_UECON6_KILLBK_SIZE                                1
#define AVR32_USBC_UECON6_MASK                              0x030e775f
#define AVR32_USBC_UECON6_MDATAE                                     8
#define AVR32_USBC_UECON6_MDATAE_MASK                       0x00000100
#define AVR32_USBC_UECON6_MDATAE_OFFSET                              8
#define AVR32_USBC_UECON6_MDATAE_SIZE                                1
#define AVR32_USBC_UECON6_NAKINE                                     4
#define AVR32_USBC_UECON6_NAKINE_MASK                       0x00000010
#define AVR32_USBC_UECON6_NAKINE_OFFSET                              4
#define AVR32_USBC_UECON6_NAKINE_SIZE                                1
#define AVR32_USBC_UECON6_NAKOUTE                                    3
#define AVR32_USBC_UECON6_NAKOUTE_MASK                      0x00000008
#define AVR32_USBC_UECON6_NAKOUTE_OFFSET                             3
#define AVR32_USBC_UECON6_NAKOUTE_SIZE                               1
#define AVR32_USBC_UECON6_NBUSYBKE                                  12
#define AVR32_USBC_UECON6_NBUSYBKE_MASK                     0x00001000
#define AVR32_USBC_UECON6_NBUSYBKE_OFFSET                           12
#define AVR32_USBC_UECON6_NBUSYBKE_SIZE                              1
#define AVR32_USBC_UECON6_NYETDIS                                   17
#define AVR32_USBC_UECON6_NYETDIS_MASK                      0x00020000
#define AVR32_USBC_UECON6_NYETDIS_OFFSET                            17
#define AVR32_USBC_UECON6_NYETDIS_SIZE                               1
#define AVR32_USBC_UECON6_RESETVALUE                        0x00000000
#define AVR32_USBC_UECON6_RSTDT                                     18
#define AVR32_USBC_UECON6_RSTDT_MASK                        0x00040000
#define AVR32_USBC_UECON6_RSTDT_OFFSET                              18
#define AVR32_USBC_UECON6_RSTDT_SIZE                                 1
#define AVR32_USBC_UECON6_RXOUTE                                     1
#define AVR32_USBC_UECON6_RXOUTE_MASK                       0x00000002
#define AVR32_USBC_UECON6_RXOUTE_OFFSET                              1
#define AVR32_USBC_UECON6_RXOUTE_SIZE                                1
#define AVR32_USBC_UECON6_RXSTPE                                     2
#define AVR32_USBC_UECON6_RXSTPE_MASK                       0x00000004
#define AVR32_USBC_UECON6_RXSTPE_OFFSET                              2
#define AVR32_USBC_UECON6_RXSTPE_SIZE                                1
#define AVR32_USBC_UECON6_STALLEDE                                   6
#define AVR32_USBC_UECON6_STALLEDE_MASK                     0x00000040
#define AVR32_USBC_UECON6_STALLEDE_OFFSET                            6
#define AVR32_USBC_UECON6_STALLEDE_SIZE                              1
#define AVR32_USBC_UECON6_STALLRQ                                   19
#define AVR32_USBC_UECON6_STALLRQ_MASK                      0x00080000
#define AVR32_USBC_UECON6_STALLRQ_OFFSET                            19
#define AVR32_USBC_UECON6_STALLRQ_SIZE                               1
#define AVR32_USBC_UECON6_TXINE                                      0
#define AVR32_USBC_UECON6_TXINE_MASK                        0x00000001
#define AVR32_USBC_UECON6_TXINE_OFFSET                               0
#define AVR32_USBC_UECON6_TXINE_SIZE                                 1
#define AVR32_USBC_UECON7                                   0x000001dc
#define AVR32_USBC_UECON7CLR                                0x0000023c
#define AVR32_USBC_UECON7CLR_BUSY0C                                 24
#define AVR32_USBC_UECON7CLR_BUSY0C_MASK                    0x01000000
#define AVR32_USBC_UECON7CLR_BUSY0C_OFFSET                          24
#define AVR32_USBC_UECON7CLR_BUSY0C_SIZE                             1
#define AVR32_USBC_UECON7CLR_BUSY1C                                 25
#define AVR32_USBC_UECON7CLR_BUSY1C_MASK                    0x02000000
#define AVR32_USBC_UECON7CLR_BUSY1C_OFFSET                          25
#define AVR32_USBC_UECON7CLR_BUSY1C_SIZE                             1
#define AVR32_USBC_UECON7CLR_DATAXEC                                 9
#define AVR32_USBC_UECON7CLR_DATAXEC_MASK                   0x00000200
#define AVR32_USBC_UECON7CLR_DATAXEC_OFFSET                          9
#define AVR32_USBC_UECON7CLR_DATAXEC_SIZE                            1
#define AVR32_USBC_UECON7CLR_ERRORTRANSEC                           10
#define AVR32_USBC_UECON7CLR_ERRORTRANSEC_MASK              0x00000400
#define AVR32_USBC_UECON7CLR_ERRORTRANSEC_OFFSET                    10
#define AVR32_USBC_UECON7CLR_ERRORTRANSEC_SIZE                       1
#define AVR32_USBC_UECON7CLR_FIFOCONC                               14
#define AVR32_USBC_UECON7CLR_FIFOCONC_MASK                  0x00004000
#define AVR32_USBC_UECON7CLR_FIFOCONC_OFFSET                        14
#define AVR32_USBC_UECON7CLR_FIFOCONC_SIZE                           1
#define AVR32_USBC_UECON7CLR_MASK                           0x030a575f
#define AVR32_USBC_UECON7CLR_MDATAEC                                 8
#define AVR32_USBC_UECON7CLR_MDATAEC_MASK                   0x00000100
#define AVR32_USBC_UECON7CLR_MDATAEC_OFFSET                          8
#define AVR32_USBC_UECON7CLR_MDATAEC_SIZE                            1
#define AVR32_USBC_UECON7CLR_NAKINEC                                 4
#define AVR32_USBC_UECON7CLR_NAKINEC_MASK                   0x00000010
#define AVR32_USBC_UECON7CLR_NAKINEC_OFFSET                          4
#define AVR32_USBC_UECON7CLR_NAKINEC_SIZE                            1
#define AVR32_USBC_UECON7CLR_NAKOUTEC                                3
#define AVR32_USBC_UECON7CLR_NAKOUTEC_MASK                  0x00000008
#define AVR32_USBC_UECON7CLR_NAKOUTEC_OFFSET                         3
#define AVR32_USBC_UECON7CLR_NAKOUTEC_SIZE                           1
#define AVR32_USBC_UECON7CLR_NBUSYBKEC                              12
#define AVR32_USBC_UECON7CLR_NBUSYBKEC_MASK                 0x00001000
#define AVR32_USBC_UECON7CLR_NBUSYBKEC_OFFSET                       12
#define AVR32_USBC_UECON7CLR_NBUSYBKEC_SIZE                          1
#define AVR32_USBC_UECON7CLR_NYETDISC                               17
#define AVR32_USBC_UECON7CLR_NYETDISC_MASK                  0x00020000
#define AVR32_USBC_UECON7CLR_NYETDISC_OFFSET                        17
#define AVR32_USBC_UECON7CLR_NYETDISC_SIZE                           1
#define AVR32_USBC_UECON7CLR_RESETVALUE                     0x00000000
#define AVR32_USBC_UECON7CLR_RXOUTEC                                 1
#define AVR32_USBC_UECON7CLR_RXOUTEC_MASK                   0x00000002
#define AVR32_USBC_UECON7CLR_RXOUTEC_OFFSET                          1
#define AVR32_USBC_UECON7CLR_RXOUTEC_SIZE                            1
#define AVR32_USBC_UECON7CLR_RXSTPEC                                 2
#define AVR32_USBC_UECON7CLR_RXSTPEC_MASK                   0x00000004
#define AVR32_USBC_UECON7CLR_RXSTPEC_OFFSET                          2
#define AVR32_USBC_UECON7CLR_RXSTPEC_SIZE                            1
#define AVR32_USBC_UECON7CLR_STALLEDEC                               6
#define AVR32_USBC_UECON7CLR_STALLEDEC_MASK                 0x00000040
#define AVR32_USBC_UECON7CLR_STALLEDEC_OFFSET                        6
#define AVR32_USBC_UECON7CLR_STALLEDEC_SIZE                          1
#define AVR32_USBC_UECON7CLR_STALLRQC                               19
#define AVR32_USBC_UECON7CLR_STALLRQC_MASK                  0x00080000
#define AVR32_USBC_UECON7CLR_STALLRQC_OFFSET                        19
#define AVR32_USBC_UECON7CLR_STALLRQC_SIZE                           1
#define AVR32_USBC_UECON7CLR_TXINEC                                  0
#define AVR32_USBC_UECON7CLR_TXINEC_MASK                    0x00000001
#define AVR32_USBC_UECON7CLR_TXINEC_OFFSET                           0
#define AVR32_USBC_UECON7CLR_TXINEC_SIZE                             1
#define AVR32_USBC_UECON7SET                                0x0000020c
#define AVR32_USBC_UECON7SET_BUSY0S                                 24
#define AVR32_USBC_UECON7SET_BUSY0S_MASK                    0x01000000
#define AVR32_USBC_UECON7SET_BUSY0S_OFFSET                          24
#define AVR32_USBC_UECON7SET_BUSY0S_SIZE                             1
#define AVR32_USBC_UECON7SET_BUSY1S                                 25
#define AVR32_USBC_UECON7SET_BUSY1S_MASK                    0x02000000
#define AVR32_USBC_UECON7SET_BUSY1S_OFFSET                          25
#define AVR32_USBC_UECON7SET_BUSY1S_SIZE                             1
#define AVR32_USBC_UECON7SET_DATAXES                                 9
#define AVR32_USBC_UECON7SET_DATAXES_MASK                   0x00000200
#define AVR32_USBC_UECON7SET_DATAXES_OFFSET                          9
#define AVR32_USBC_UECON7SET_DATAXES_SIZE                            1
#define AVR32_USBC_UECON7SET_ERRORTRANSES                           10
#define AVR32_USBC_UECON7SET_ERRORTRANSES_MASK              0x00000400
#define AVR32_USBC_UECON7SET_ERRORTRANSES_OFFSET                    10
#define AVR32_USBC_UECON7SET_ERRORTRANSES_SIZE                       1
#define AVR32_USBC_UECON7SET_KILLBKS                                13
#define AVR32_USBC_UECON7SET_KILLBKS_MASK                   0x00002000
#define AVR32_USBC_UECON7SET_KILLBKS_OFFSET                         13
#define AVR32_USBC_UECON7SET_KILLBKS_SIZE                            1
#define AVR32_USBC_UECON7SET_MASK                           0x030e375f
#define AVR32_USBC_UECON7SET_MDATAES                                 8
#define AVR32_USBC_UECON7SET_MDATAES_MASK                   0x00000100
#define AVR32_USBC_UECON7SET_MDATAES_OFFSET                          8
#define AVR32_USBC_UECON7SET_MDATAES_SIZE                            1
#define AVR32_USBC_UECON7SET_NAKINES                                 4
#define AVR32_USBC_UECON7SET_NAKINES_MASK                   0x00000010
#define AVR32_USBC_UECON7SET_NAKINES_OFFSET                          4
#define AVR32_USBC_UECON7SET_NAKINES_SIZE                            1
#define AVR32_USBC_UECON7SET_NAKOUTES                                3
#define AVR32_USBC_UECON7SET_NAKOUTES_MASK                  0x00000008
#define AVR32_USBC_UECON7SET_NAKOUTES_OFFSET                         3
#define AVR32_USBC_UECON7SET_NAKOUTES_SIZE                           1
#define AVR32_USBC_UECON7SET_NBUSYBKES                              12
#define AVR32_USBC_UECON7SET_NBUSYBKES_MASK                 0x00001000
#define AVR32_USBC_UECON7SET_NBUSYBKES_OFFSET                       12
#define AVR32_USBC_UECON7SET_NBUSYBKES_SIZE                          1
#define AVR32_USBC_UECON7SET_NYETDISS                               17
#define AVR32_USBC_UECON7SET_NYETDISS_MASK                  0x00020000
#define AVR32_USBC_UECON7SET_NYETDISS_OFFSET                        17
#define AVR32_USBC_UECON7SET_NYETDISS_SIZE                           1
#define AVR32_USBC_UECON7SET_RESETVALUE                     0x00000000
#define AVR32_USBC_UECON7SET_RSTDTS                                 18
#define AVR32_USBC_UECON7SET_RSTDTS_MASK                    0x00040000
#define AVR32_USBC_UECON7SET_RSTDTS_OFFSET                          18
#define AVR32_USBC_UECON7SET_RSTDTS_SIZE                             1
#define AVR32_USBC_UECON7SET_RXOUTES                                 1
#define AVR32_USBC_UECON7SET_RXOUTES_MASK                   0x00000002
#define AVR32_USBC_UECON7SET_RXOUTES_OFFSET                          1
#define AVR32_USBC_UECON7SET_RXOUTES_SIZE                            1
#define AVR32_USBC_UECON7SET_RXSTPES                                 2
#define AVR32_USBC_UECON7SET_RXSTPES_MASK                   0x00000004
#define AVR32_USBC_UECON7SET_RXSTPES_OFFSET                          2
#define AVR32_USBC_UECON7SET_RXSTPES_SIZE                            1
#define AVR32_USBC_UECON7SET_STALLEDES                               6
#define AVR32_USBC_UECON7SET_STALLEDES_MASK                 0x00000040
#define AVR32_USBC_UECON7SET_STALLEDES_OFFSET                        6
#define AVR32_USBC_UECON7SET_STALLEDES_SIZE                          1
#define AVR32_USBC_UECON7SET_STALLRQS                               19
#define AVR32_USBC_UECON7SET_STALLRQS_MASK                  0x00080000
#define AVR32_USBC_UECON7SET_STALLRQS_OFFSET                        19
#define AVR32_USBC_UECON7SET_STALLRQS_SIZE                           1
#define AVR32_USBC_UECON7SET_TXINES                                  0
#define AVR32_USBC_UECON7SET_TXINES_MASK                    0x00000001
#define AVR32_USBC_UECON7SET_TXINES_OFFSET                           0
#define AVR32_USBC_UECON7SET_TXINES_SIZE                             1
#define AVR32_USBC_UECON7_BUSY0                                     24
#define AVR32_USBC_UECON7_BUSY0_MASK                        0x01000000
#define AVR32_USBC_UECON7_BUSY0_OFFSET                              24
#define AVR32_USBC_UECON7_BUSY0_SIZE                                 1
#define AVR32_USBC_UECON7_BUSY1                                     25
#define AVR32_USBC_UECON7_BUSY1_MASK                        0x02000000
#define AVR32_USBC_UECON7_BUSY1_OFFSET                              25
#define AVR32_USBC_UECON7_BUSY1_SIZE                                 1
#define AVR32_USBC_UECON7_DATAXE                                     9
#define AVR32_USBC_UECON7_DATAXE_MASK                       0x00000200
#define AVR32_USBC_UECON7_DATAXE_OFFSET                              9
#define AVR32_USBC_UECON7_DATAXE_SIZE                                1
#define AVR32_USBC_UECON7_ERRORTRANSE                               10
#define AVR32_USBC_UECON7_ERRORTRANSE_MASK                  0x00000400
#define AVR32_USBC_UECON7_ERRORTRANSE_OFFSET                        10
#define AVR32_USBC_UECON7_ERRORTRANSE_SIZE                           1
#define AVR32_USBC_UECON7_FIFOCON                                   14
#define AVR32_USBC_UECON7_FIFOCON_MASK                      0x00004000
#define AVR32_USBC_UECON7_FIFOCON_OFFSET                            14
#define AVR32_USBC_UECON7_FIFOCON_SIZE                               1
#define AVR32_USBC_UECON7_KILLBK                                    13
#define AVR32_USBC_UECON7_KILLBK_MASK                       0x00002000
#define AVR32_USBC_UECON7_KILLBK_OFFSET                             13
#define AVR32_USBC_UECON7_KILLBK_SIZE                                1
#define AVR32_USBC_UECON7_MASK                              0x030e775f
#define AVR32_USBC_UECON7_MDATAE                                     8
#define AVR32_USBC_UECON7_MDATAE_MASK                       0x00000100
#define AVR32_USBC_UECON7_MDATAE_OFFSET                              8
#define AVR32_USBC_UECON7_MDATAE_SIZE                                1
#define AVR32_USBC_UECON7_NAKINE                                     4
#define AVR32_USBC_UECON7_NAKINE_MASK                       0x00000010
#define AVR32_USBC_UECON7_NAKINE_OFFSET                              4
#define AVR32_USBC_UECON7_NAKINE_SIZE                                1
#define AVR32_USBC_UECON7_NAKOUTE                                    3
#define AVR32_USBC_UECON7_NAKOUTE_MASK                      0x00000008
#define AVR32_USBC_UECON7_NAKOUTE_OFFSET                             3
#define AVR32_USBC_UECON7_NAKOUTE_SIZE                               1
#define AVR32_USBC_UECON7_NBUSYBKE                                  12
#define AVR32_USBC_UECON7_NBUSYBKE_MASK                     0x00001000
#define AVR32_USBC_UECON7_NBUSYBKE_OFFSET                           12
#define AVR32_USBC_UECON7_NBUSYBKE_SIZE                              1
#define AVR32_USBC_UECON7_NYETDIS                                   17
#define AVR32_USBC_UECON7_NYETDIS_MASK                      0x00020000
#define AVR32_USBC_UECON7_NYETDIS_OFFSET                            17
#define AVR32_USBC_UECON7_NYETDIS_SIZE                               1
#define AVR32_USBC_UECON7_RESETVALUE                        0x00000000
#define AVR32_USBC_UECON7_RSTDT                                     18
#define AVR32_USBC_UECON7_RSTDT_MASK                        0x00040000
#define AVR32_USBC_UECON7_RSTDT_OFFSET                              18
#define AVR32_USBC_UECON7_RSTDT_SIZE                                 1
#define AVR32_USBC_UECON7_RXOUTE                                     1
#define AVR32_USBC_UECON7_RXOUTE_MASK                       0x00000002
#define AVR32_USBC_UECON7_RXOUTE_OFFSET                              1
#define AVR32_USBC_UECON7_RXOUTE_SIZE                                1
#define AVR32_USBC_UECON7_RXSTPE                                     2
#define AVR32_USBC_UECON7_RXSTPE_MASK                       0x00000004
#define AVR32_USBC_UECON7_RXSTPE_OFFSET                              2
#define AVR32_USBC_UECON7_RXSTPE_SIZE                                1
#define AVR32_USBC_UECON7_STALLEDE                                   6
#define AVR32_USBC_UECON7_STALLEDE_MASK                     0x00000040
#define AVR32_USBC_UECON7_STALLEDE_OFFSET                            6
#define AVR32_USBC_UECON7_STALLEDE_SIZE                              1
#define AVR32_USBC_UECON7_STALLRQ                                   19
#define AVR32_USBC_UECON7_STALLRQ_MASK                      0x00080000
#define AVR32_USBC_UECON7_STALLRQ_OFFSET                            19
#define AVR32_USBC_UECON7_STALLRQ_SIZE                               1
#define AVR32_USBC_UECON7_TXINE                                      0
#define AVR32_USBC_UECON7_TXINE_MASK                        0x00000001
#define AVR32_USBC_UECON7_TXINE_OFFSET                               0
#define AVR32_USBC_UECON7_TXINE_SIZE                                 1
#define AVR32_USBC_UERST                                    0x0000001c
#define AVR32_USBC_UERST_EPEN0                                       0
#define AVR32_USBC_UERST_EPEN0_MASK                         0x00000001
#define AVR32_USBC_UERST_EPEN0_OFFSET                                0
#define AVR32_USBC_UERST_EPEN0_SIZE                                  1
#define AVR32_USBC_UERST_EPEN1                                       1
#define AVR32_USBC_UERST_EPEN1_MASK                         0x00000002
#define AVR32_USBC_UERST_EPEN1_OFFSET                                1
#define AVR32_USBC_UERST_EPEN1_SIZE                                  1
#define AVR32_USBC_UERST_EPEN2                                       2
#define AVR32_USBC_UERST_EPEN2_MASK                         0x00000004
#define AVR32_USBC_UERST_EPEN2_OFFSET                                2
#define AVR32_USBC_UERST_EPEN2_SIZE                                  1
#define AVR32_USBC_UERST_EPEN3                                       3
#define AVR32_USBC_UERST_EPEN3_MASK                         0x00000008
#define AVR32_USBC_UERST_EPEN3_OFFSET                                3
#define AVR32_USBC_UERST_EPEN3_SIZE                                  1
#define AVR32_USBC_UERST_EPEN4                                       4
#define AVR32_USBC_UERST_EPEN4_MASK                         0x00000010
#define AVR32_USBC_UERST_EPEN4_OFFSET                                4
#define AVR32_USBC_UERST_EPEN4_SIZE                                  1
#define AVR32_USBC_UERST_EPEN5                                       5
#define AVR32_USBC_UERST_EPEN5_MASK                         0x00000020
#define AVR32_USBC_UERST_EPEN5_OFFSET                                5
#define AVR32_USBC_UERST_EPEN5_SIZE                                  1
#define AVR32_USBC_UERST_EPEN6                                       6
#define AVR32_USBC_UERST_EPEN6_MASK                         0x00000040
#define AVR32_USBC_UERST_EPEN6_OFFSET                                6
#define AVR32_USBC_UERST_EPEN6_SIZE                                  1
#define AVR32_USBC_UERST_EPEN7                                       7
#define AVR32_USBC_UERST_EPEN7_MASK                         0x00000080
#define AVR32_USBC_UERST_EPEN7_OFFSET                                7
#define AVR32_USBC_UERST_EPEN7_SIZE                                  1
#define AVR32_USBC_UERST_MASK                               0x000000ff
#define AVR32_USBC_UERST_RESETVALUE                         0x00000000
#define AVR32_USBC_UESTA0                                   0x00000130
#define AVR32_USBC_UESTA0CLR                                0x00000160
#define AVR32_USBC_UESTA0CLR_MASK                           0x0000085f
#define AVR32_USBC_UESTA0CLR_NAKINIC                                 4
#define AVR32_USBC_UESTA0CLR_NAKINIC_MASK                   0x00000010
#define AVR32_USBC_UESTA0CLR_NAKINIC_OFFSET                          4
#define AVR32_USBC_UESTA0CLR_NAKINIC_SIZE                            1
#define AVR32_USBC_UESTA0CLR_NAKOUTIC                                3
#define AVR32_USBC_UESTA0CLR_NAKOUTIC_MASK                  0x00000008
#define AVR32_USBC_UESTA0CLR_NAKOUTIC_OFFSET                         3
#define AVR32_USBC_UESTA0CLR_NAKOUTIC_SIZE                           1
#define AVR32_USBC_UESTA0CLR_RAMACCERIC                             11
#define AVR32_USBC_UESTA0CLR_RAMACCERIC_MASK                0x00000800
#define AVR32_USBC_UESTA0CLR_RAMACCERIC_OFFSET                      11
#define AVR32_USBC_UESTA0CLR_RAMACCERIC_SIZE                         1
#define AVR32_USBC_UESTA0CLR_RESETVALUE                     0x00000000
#define AVR32_USBC_UESTA0CLR_RXOUTIC                                 1
#define AVR32_USBC_UESTA0CLR_RXOUTIC_MASK                   0x00000002
#define AVR32_USBC_UESTA0CLR_RXOUTIC_OFFSET                          1
#define AVR32_USBC_UESTA0CLR_RXOUTIC_SIZE                            1
#define AVR32_USBC_UESTA0CLR_RXSTPIC                                 2
#define AVR32_USBC_UESTA0CLR_RXSTPIC_MASK                   0x00000004
#define AVR32_USBC_UESTA0CLR_RXSTPIC_OFFSET                          2
#define AVR32_USBC_UESTA0CLR_RXSTPIC_SIZE                            1
#define AVR32_USBC_UESTA0CLR_STALLEDIC                               6
#define AVR32_USBC_UESTA0CLR_STALLEDIC_MASK                 0x00000040
#define AVR32_USBC_UESTA0CLR_STALLEDIC_OFFSET                        6
#define AVR32_USBC_UESTA0CLR_STALLEDIC_SIZE                          1
#define AVR32_USBC_UESTA0CLR_TXINIC                                  0
#define AVR32_USBC_UESTA0CLR_TXINIC_MASK                    0x00000001
#define AVR32_USBC_UESTA0CLR_TXINIC_OFFSET                           0
#define AVR32_USBC_UESTA0CLR_TXINIC_SIZE                             1
#define AVR32_USBC_UESTA0SET                                0x00000190
#define AVR32_USBC_UESTA0SET_ERRORTRANSS                            10
#define AVR32_USBC_UESTA0SET_ERRORTRANSS_MASK               0x00000400
#define AVR32_USBC_UESTA0SET_ERRORTRANSS_OFFSET                     10
#define AVR32_USBC_UESTA0SET_ERRORTRANSS_SIZE                        1
#define AVR32_USBC_UESTA0SET_MASK                           0x00001d5f
#define AVR32_USBC_UESTA0SET_NAKINIS                                 4
#define AVR32_USBC_UESTA0SET_NAKINIS_MASK                   0x00000010
#define AVR32_USBC_UESTA0SET_NAKINIS_OFFSET                          4
#define AVR32_USBC_UESTA0SET_NAKINIS_SIZE                            1
#define AVR32_USBC_UESTA0SET_NAKOUTIS                                3
#define AVR32_USBC_UESTA0SET_NAKOUTIS_MASK                  0x00000008
#define AVR32_USBC_UESTA0SET_NAKOUTIS_OFFSET                         3
#define AVR32_USBC_UESTA0SET_NAKOUTIS_SIZE                           1
#define AVR32_USBC_UESTA0SET_NBUSYBKS                               12
#define AVR32_USBC_UESTA0SET_NBUSYBKS_MASK                  0x00001000
#define AVR32_USBC_UESTA0SET_NBUSYBKS_OFFSET                        12
#define AVR32_USBC_UESTA0SET_NBUSYBKS_SIZE                           1
#define AVR32_USBC_UESTA0SET_RAMACCERIS                             11
#define AVR32_USBC_UESTA0SET_RAMACCERIS_MASK                0x00000800
#define AVR32_USBC_UESTA0SET_RAMACCERIS_OFFSET                      11
#define AVR32_USBC_UESTA0SET_RAMACCERIS_SIZE                         1
#define AVR32_USBC_UESTA0SET_RESETVALUE                     0x00000000
#define AVR32_USBC_UESTA0SET_RXOUTIS                                 1
#define AVR32_USBC_UESTA0SET_RXOUTIS_MASK                   0x00000002
#define AVR32_USBC_UESTA0SET_RXOUTIS_OFFSET                          1
#define AVR32_USBC_UESTA0SET_RXOUTIS_SIZE                            1
#define AVR32_USBC_UESTA0SET_RXSTPIS                                 2
#define AVR32_USBC_UESTA0SET_RXSTPIS_MASK                   0x00000004
#define AVR32_USBC_UESTA0SET_RXSTPIS_OFFSET                          2
#define AVR32_USBC_UESTA0SET_RXSTPIS_SIZE                            1
#define AVR32_USBC_UESTA0SET_SETMDATA                                8
#define AVR32_USBC_UESTA0SET_SETMDATA_MASK                  0x00000100
#define AVR32_USBC_UESTA0SET_SETMDATA_OFFSET                         8
#define AVR32_USBC_UESTA0SET_SETMDATA_SIZE                           1
#define AVR32_USBC_UESTA0SET_STALLEDIS                               6
#define AVR32_USBC_UESTA0SET_STALLEDIS_MASK                 0x00000040
#define AVR32_USBC_UESTA0SET_STALLEDIS_OFFSET                        6
#define AVR32_USBC_UESTA0SET_STALLEDIS_SIZE                          1
#define AVR32_USBC_UESTA0SET_TXINIS                                  0
#define AVR32_USBC_UESTA0SET_TXINIS_MASK                    0x00000001
#define AVR32_USBC_UESTA0SET_TXINIS_OFFSET                           0
#define AVR32_USBC_UESTA0SET_TXINIS_SIZE                             1
#define AVR32_USBC_UESTA0_CTRLDIR                                   17
#define AVR32_USBC_UESTA0_CTRLDIR_IN                        0x00000001
#define AVR32_USBC_UESTA0_CTRLDIR_MASK                      0x00020000
#define AVR32_USBC_UESTA0_CTRLDIR_OFFSET                            17
#define AVR32_USBC_UESTA0_CTRLDIR_OUT                       0x00000000
#define AVR32_USBC_UESTA0_CTRLDIR_SIZE                               1
#define AVR32_USBC_UESTA0_CURRBK                                    14
#define AVR32_USBC_UESTA0_CURRBK_MASK                       0x0000c000
#define AVR32_USBC_UESTA0_CURRBK_OFFSET                             14
#define AVR32_USBC_UESTA0_CURRBK_SIZE                                2
#define AVR32_USBC_UESTA0_DTSEQ                                      8
#define AVR32_USBC_UESTA0_DTSEQ_MASK                        0x00000300
#define AVR32_USBC_UESTA0_DTSEQ_OFFSET                               8
#define AVR32_USBC_UESTA0_DTSEQ_SIZE                                 2
#define AVR32_USBC_UESTA0_ERRORTRANS                                10
#define AVR32_USBC_UESTA0_ERRORTRANS_MASK                   0x00000400
#define AVR32_USBC_UESTA0_ERRORTRANS_OFFSET                         10
#define AVR32_USBC_UESTA0_ERRORTRANS_SIZE                            1
#define AVR32_USBC_UESTA0_MASK                              0x0002ff5f
#define AVR32_USBC_UESTA0_NAKINI                                     4
#define AVR32_USBC_UESTA0_NAKINI_MASK                       0x00000010
#define AVR32_USBC_UESTA0_NAKINI_OFFSET                              4
#define AVR32_USBC_UESTA0_NAKINI_SIZE                                1
#define AVR32_USBC_UESTA0_NAKOUTI                                    3
#define AVR32_USBC_UESTA0_NAKOUTI_MASK                      0x00000008
#define AVR32_USBC_UESTA0_NAKOUTI_OFFSET                             3
#define AVR32_USBC_UESTA0_NAKOUTI_SIZE                               1
#define AVR32_USBC_UESTA0_NBUSYBK                                   12
#define AVR32_USBC_UESTA0_NBUSYBK_MASK                      0x00003000
#define AVR32_USBC_UESTA0_NBUSYBK_OFFSET                            12
#define AVR32_USBC_UESTA0_NBUSYBK_SIZE                               2
#define AVR32_USBC_UESTA0_RAMACCERI                                 11
#define AVR32_USBC_UESTA0_RAMACCERI_MASK                    0x00000800
#define AVR32_USBC_UESTA0_RAMACCERI_OFFSET                          11
#define AVR32_USBC_UESTA0_RAMACCERI_SIZE                             1
#define AVR32_USBC_UESTA0_RESETVALUE                        0x00000100
#define AVR32_USBC_UESTA0_RXOUTI                                     1
#define AVR32_USBC_UESTA0_RXOUTI_MASK                       0x00000002
#define AVR32_USBC_UESTA0_RXOUTI_OFFSET                              1
#define AVR32_USBC_UESTA0_RXOUTI_SIZE                                1
#define AVR32_USBC_UESTA0_RXSTPI                                     2
#define AVR32_USBC_UESTA0_RXSTPI_MASK                       0x00000004
#define AVR32_USBC_UESTA0_RXSTPI_OFFSET                              2
#define AVR32_USBC_UESTA0_RXSTPI_SIZE                                1
#define AVR32_USBC_UESTA0_STALLEDI                                   6
#define AVR32_USBC_UESTA0_STALLEDI_MASK                     0x00000040
#define AVR32_USBC_UESTA0_STALLEDI_OFFSET                            6
#define AVR32_USBC_UESTA0_STALLEDI_SIZE                              1
#define AVR32_USBC_UESTA0_TXINI                                      0
#define AVR32_USBC_UESTA0_TXINI_MASK                        0x00000001
#define AVR32_USBC_UESTA0_TXINI_OFFSET                               0
#define AVR32_USBC_UESTA0_TXINI_SIZE                                 1
#define AVR32_USBC_UESTA1                                   0x00000134
#define AVR32_USBC_UESTA1CLR                                0x00000164
#define AVR32_USBC_UESTA1CLR_MASK                           0x0000005f
#define AVR32_USBC_UESTA1CLR_NAKINIC                                 4
#define AVR32_USBC_UESTA1CLR_NAKINIC_MASK                   0x00000010
#define AVR32_USBC_UESTA1CLR_NAKINIC_OFFSET                          4
#define AVR32_USBC_UESTA1CLR_NAKINIC_SIZE                            1
#define AVR32_USBC_UESTA1CLR_NAKOUTIC                                3
#define AVR32_USBC_UESTA1CLR_NAKOUTIC_MASK                  0x00000008
#define AVR32_USBC_UESTA1CLR_NAKOUTIC_OFFSET                         3
#define AVR32_USBC_UESTA1CLR_NAKOUTIC_SIZE                           1
#define AVR32_USBC_UESTA1CLR_RESETVALUE                     0x00000000
#define AVR32_USBC_UESTA1CLR_RXOUTIC                                 1
#define AVR32_USBC_UESTA1CLR_RXOUTIC_MASK                   0x00000002
#define AVR32_USBC_UESTA1CLR_RXOUTIC_OFFSET                          1
#define AVR32_USBC_UESTA1CLR_RXOUTIC_SIZE                            1
#define AVR32_USBC_UESTA1CLR_RXSTPIC                                 2
#define AVR32_USBC_UESTA1CLR_RXSTPIC_MASK                   0x00000004
#define AVR32_USBC_UESTA1CLR_RXSTPIC_OFFSET                          2
#define AVR32_USBC_UESTA1CLR_RXSTPIC_SIZE                            1
#define AVR32_USBC_UESTA1CLR_STALLEDIC                               6
#define AVR32_USBC_UESTA1CLR_STALLEDIC_MASK                 0x00000040
#define AVR32_USBC_UESTA1CLR_STALLEDIC_OFFSET                        6
#define AVR32_USBC_UESTA1CLR_STALLEDIC_SIZE                          1
#define AVR32_USBC_UESTA1CLR_TXINIC                                  0
#define AVR32_USBC_UESTA1CLR_TXINIC_MASK                    0x00000001
#define AVR32_USBC_UESTA1CLR_TXINIC_OFFSET                           0
#define AVR32_USBC_UESTA1CLR_TXINIC_SIZE                             1
#define AVR32_USBC_UESTA1SET                                0x00000194
#define AVR32_USBC_UESTA1SET_ERRORTRANSS                            10
#define AVR32_USBC_UESTA1SET_ERRORTRANSS_MASK               0x00000400
#define AVR32_USBC_UESTA1SET_ERRORTRANSS_OFFSET                     10
#define AVR32_USBC_UESTA1SET_ERRORTRANSS_SIZE                        1
#define AVR32_USBC_UESTA1SET_MASK                           0x0000155f
#define AVR32_USBC_UESTA1SET_NAKINIS                                 4
#define AVR32_USBC_UESTA1SET_NAKINIS_MASK                   0x00000010
#define AVR32_USBC_UESTA1SET_NAKINIS_OFFSET                          4
#define AVR32_USBC_UESTA1SET_NAKINIS_SIZE                            1
#define AVR32_USBC_UESTA1SET_NAKOUTIS                                3
#define AVR32_USBC_UESTA1SET_NAKOUTIS_MASK                  0x00000008
#define AVR32_USBC_UESTA1SET_NAKOUTIS_OFFSET                         3
#define AVR32_USBC_UESTA1SET_NAKOUTIS_SIZE                           1
#define AVR32_USBC_UESTA1SET_NBUSYBKS                               12
#define AVR32_USBC_UESTA1SET_NBUSYBKS_MASK                  0x00001000
#define AVR32_USBC_UESTA1SET_NBUSYBKS_OFFSET                        12
#define AVR32_USBC_UESTA1SET_NBUSYBKS_SIZE                           1
#define AVR32_USBC_UESTA1SET_RESETVALUE                     0x00000000
#define AVR32_USBC_UESTA1SET_RXOUTIS                                 1
#define AVR32_USBC_UESTA1SET_RXOUTIS_MASK                   0x00000002
#define AVR32_USBC_UESTA1SET_RXOUTIS_OFFSET                          1
#define AVR32_USBC_UESTA1SET_RXOUTIS_SIZE                            1
#define AVR32_USBC_UESTA1SET_RXSTPIS                                 2
#define AVR32_USBC_UESTA1SET_RXSTPIS_MASK                   0x00000004
#define AVR32_USBC_UESTA1SET_RXSTPIS_OFFSET                          2
#define AVR32_USBC_UESTA1SET_RXSTPIS_SIZE                            1
#define AVR32_USBC_UESTA1SET_SETMDATA                                8
#define AVR32_USBC_UESTA1SET_SETMDATA_MASK                  0x00000100
#define AVR32_USBC_UESTA1SET_SETMDATA_OFFSET                         8
#define AVR32_USBC_UESTA1SET_SETMDATA_SIZE                           1
#define AVR32_USBC_UESTA1SET_STALLEDIS                               6
#define AVR32_USBC_UESTA1SET_STALLEDIS_MASK                 0x00000040
#define AVR32_USBC_UESTA1SET_STALLEDIS_OFFSET                        6
#define AVR32_USBC_UESTA1SET_STALLEDIS_SIZE                          1
#define AVR32_USBC_UESTA1SET_TXINIS                                  0
#define AVR32_USBC_UESTA1SET_TXINIS_MASK                    0x00000001
#define AVR32_USBC_UESTA1SET_TXINIS_OFFSET                           0
#define AVR32_USBC_UESTA1SET_TXINIS_SIZE                             1
#define AVR32_USBC_UESTA1_CTRLDIR                                   17
#define AVR32_USBC_UESTA1_CTRLDIR_IN                        0x00000001
#define AVR32_USBC_UESTA1_CTRLDIR_MASK                      0x00020000
#define AVR32_USBC_UESTA1_CTRLDIR_OFFSET                            17
#define AVR32_USBC_UESTA1_CTRLDIR_OUT                       0x00000000
#define AVR32_USBC_UESTA1_CTRLDIR_SIZE                               1
#define AVR32_USBC_UESTA1_CURRBK                                    14
#define AVR32_USBC_UESTA1_CURRBK_MASK                       0x0000c000
#define AVR32_USBC_UESTA1_CURRBK_OFFSET                             14
#define AVR32_USBC_UESTA1_CURRBK_SIZE                                2
#define AVR32_USBC_UESTA1_DTSEQ                                      8
#define AVR32_USBC_UESTA1_DTSEQ_MASK                        0x00000300
#define AVR32_USBC_UESTA1_DTSEQ_OFFSET                               8
#define AVR32_USBC_UESTA1_DTSEQ_SIZE                                 2
#define AVR32_USBC_UESTA1_ERRORTRANS                                10
#define AVR32_USBC_UESTA1_ERRORTRANS_MASK                   0x00000400
#define AVR32_USBC_UESTA1_ERRORTRANS_OFFSET                         10
#define AVR32_USBC_UESTA1_ERRORTRANS_SIZE                            1
#define AVR32_USBC_UESTA1_MASK                              0x0002f75f
#define AVR32_USBC_UESTA1_NAKINI                                     4
#define AVR32_USBC_UESTA1_NAKINI_MASK                       0x00000010
#define AVR32_USBC_UESTA1_NAKINI_OFFSET                              4
#define AVR32_USBC_UESTA1_NAKINI_SIZE                                1
#define AVR32_USBC_UESTA1_NAKOUTI                                    3
#define AVR32_USBC_UESTA1_NAKOUTI_MASK                      0x00000008
#define AVR32_USBC_UESTA1_NAKOUTI_OFFSET                             3
#define AVR32_USBC_UESTA1_NAKOUTI_SIZE                               1
#define AVR32_USBC_UESTA1_NBUSYBK                                   12
#define AVR32_USBC_UESTA1_NBUSYBK_MASK                      0x00003000
#define AVR32_USBC_UESTA1_NBUSYBK_OFFSET                            12
#define AVR32_USBC_UESTA1_NBUSYBK_SIZE                               2
#define AVR32_USBC_UESTA1_RESETVALUE                        0x00000100
#define AVR32_USBC_UESTA1_RXOUTI                                     1
#define AVR32_USBC_UESTA1_RXOUTI_MASK                       0x00000002
#define AVR32_USBC_UESTA1_RXOUTI_OFFSET                              1
#define AVR32_USBC_UESTA1_RXOUTI_SIZE                                1
#define AVR32_USBC_UESTA1_RXSTPI                                     2
#define AVR32_USBC_UESTA1_RXSTPI_MASK                       0x00000004
#define AVR32_USBC_UESTA1_RXSTPI_OFFSET                              2
#define AVR32_USBC_UESTA1_RXSTPI_SIZE                                1
#define AVR32_USBC_UESTA1_STALLEDI                                   6
#define AVR32_USBC_UESTA1_STALLEDI_MASK                     0x00000040
#define AVR32_USBC_UESTA1_STALLEDI_OFFSET                            6
#define AVR32_USBC_UESTA1_STALLEDI_SIZE                              1
#define AVR32_USBC_UESTA1_TXINI                                      0
#define AVR32_USBC_UESTA1_TXINI_MASK                        0x00000001
#define AVR32_USBC_UESTA1_TXINI_OFFSET                               0
#define AVR32_USBC_UESTA1_TXINI_SIZE                                 1
#define AVR32_USBC_UESTA2                                   0x00000138
#define AVR32_USBC_UESTA2CLR                                0x00000168
#define AVR32_USBC_UESTA2CLR_MASK                           0x0000005f
#define AVR32_USBC_UESTA2CLR_NAKINIC                                 4
#define AVR32_USBC_UESTA2CLR_NAKINIC_MASK                   0x00000010
#define AVR32_USBC_UESTA2CLR_NAKINIC_OFFSET                          4
#define AVR32_USBC_UESTA2CLR_NAKINIC_SIZE                            1
#define AVR32_USBC_UESTA2CLR_NAKOUTIC                                3
#define AVR32_USBC_UESTA2CLR_NAKOUTIC_MASK                  0x00000008
#define AVR32_USBC_UESTA2CLR_NAKOUTIC_OFFSET                         3
#define AVR32_USBC_UESTA2CLR_NAKOUTIC_SIZE                           1
#define AVR32_USBC_UESTA2CLR_RESETVALUE                     0x00000000
#define AVR32_USBC_UESTA2CLR_RXOUTIC                                 1
#define AVR32_USBC_UESTA2CLR_RXOUTIC_MASK                   0x00000002
#define AVR32_USBC_UESTA2CLR_RXOUTIC_OFFSET                          1
#define AVR32_USBC_UESTA2CLR_RXOUTIC_SIZE                            1
#define AVR32_USBC_UESTA2CLR_RXSTPIC                                 2
#define AVR32_USBC_UESTA2CLR_RXSTPIC_MASK                   0x00000004
#define AVR32_USBC_UESTA2CLR_RXSTPIC_OFFSET                          2
#define AVR32_USBC_UESTA2CLR_RXSTPIC_SIZE                            1
#define AVR32_USBC_UESTA2CLR_STALLEDIC                               6
#define AVR32_USBC_UESTA2CLR_STALLEDIC_MASK                 0x00000040
#define AVR32_USBC_UESTA2CLR_STALLEDIC_OFFSET                        6
#define AVR32_USBC_UESTA2CLR_STALLEDIC_SIZE                          1
#define AVR32_USBC_UESTA2CLR_TXINIC                                  0
#define AVR32_USBC_UESTA2CLR_TXINIC_MASK                    0x00000001
#define AVR32_USBC_UESTA2CLR_TXINIC_OFFSET                           0
#define AVR32_USBC_UESTA2CLR_TXINIC_SIZE                             1
#define AVR32_USBC_UESTA2SET                                0x00000198
#define AVR32_USBC_UESTA2SET_ERRORTRANSS                            10
#define AVR32_USBC_UESTA2SET_ERRORTRANSS_MASK               0x00000400
#define AVR32_USBC_UESTA2SET_ERRORTRANSS_OFFSET                     10
#define AVR32_USBC_UESTA2SET_ERRORTRANSS_SIZE                        1
#define AVR32_USBC_UESTA2SET_MASK                           0x0000155f
#define AVR32_USBC_UESTA2SET_NAKINIS                                 4
#define AVR32_USBC_UESTA2SET_NAKINIS_MASK                   0x00000010
#define AVR32_USBC_UESTA2SET_NAKINIS_OFFSET                          4
#define AVR32_USBC_UESTA2SET_NAKINIS_SIZE                            1
#define AVR32_USBC_UESTA2SET_NAKOUTIS                                3
#define AVR32_USBC_UESTA2SET_NAKOUTIS_MASK                  0x00000008
#define AVR32_USBC_UESTA2SET_NAKOUTIS_OFFSET                         3
#define AVR32_USBC_UESTA2SET_NAKOUTIS_SIZE                           1
#define AVR32_USBC_UESTA2SET_NBUSYBKS                               12
#define AVR32_USBC_UESTA2SET_NBUSYBKS_MASK                  0x00001000
#define AVR32_USBC_UESTA2SET_NBUSYBKS_OFFSET                        12
#define AVR32_USBC_UESTA2SET_NBUSYBKS_SIZE                           1
#define AVR32_USBC_UESTA2SET_RESETVALUE                     0x00000000
#define AVR32_USBC_UESTA2SET_RXOUTIS                                 1
#define AVR32_USBC_UESTA2SET_RXOUTIS_MASK                   0x00000002
#define AVR32_USBC_UESTA2SET_RXOUTIS_OFFSET                          1
#define AVR32_USBC_UESTA2SET_RXOUTIS_SIZE                            1
#define AVR32_USBC_UESTA2SET_RXSTPIS                                 2
#define AVR32_USBC_UESTA2SET_RXSTPIS_MASK                   0x00000004
#define AVR32_USBC_UESTA2SET_RXSTPIS_OFFSET                          2
#define AVR32_USBC_UESTA2SET_RXSTPIS_SIZE                            1
#define AVR32_USBC_UESTA2SET_SETMDATA                                8
#define AVR32_USBC_UESTA2SET_SETMDATA_MASK                  0x00000100
#define AVR32_USBC_UESTA2SET_SETMDATA_OFFSET                         8
#define AVR32_USBC_UESTA2SET_SETMDATA_SIZE                           1
#define AVR32_USBC_UESTA2SET_STALLEDIS                               6
#define AVR32_USBC_UESTA2SET_STALLEDIS_MASK                 0x00000040
#define AVR32_USBC_UESTA2SET_STALLEDIS_OFFSET                        6
#define AVR32_USBC_UESTA2SET_STALLEDIS_SIZE                          1
#define AVR32_USBC_UESTA2SET_TXINIS                                  0
#define AVR32_USBC_UESTA2SET_TXINIS_MASK                    0x00000001
#define AVR32_USBC_UESTA2SET_TXINIS_OFFSET                           0
#define AVR32_USBC_UESTA2SET_TXINIS_SIZE                             1
#define AVR32_USBC_UESTA2_CTRLDIR                                   17
#define AVR32_USBC_UESTA2_CTRLDIR_IN                        0x00000001
#define AVR32_USBC_UESTA2_CTRLDIR_MASK                      0x00020000
#define AVR32_USBC_UESTA2_CTRLDIR_OFFSET                            17
#define AVR32_USBC_UESTA2_CTRLDIR_OUT                       0x00000000
#define AVR32_USBC_UESTA2_CTRLDIR_SIZE                               1
#define AVR32_USBC_UESTA2_CURRBK                                    14
#define AVR32_USBC_UESTA2_CURRBK_MASK                       0x0000c000
#define AVR32_USBC_UESTA2_CURRBK_OFFSET                             14
#define AVR32_USBC_UESTA2_CURRBK_SIZE                                2
#define AVR32_USBC_UESTA2_DTSEQ                                      8
#define AVR32_USBC_UESTA2_DTSEQ_MASK                        0x00000300
#define AVR32_USBC_UESTA2_DTSEQ_OFFSET                               8
#define AVR32_USBC_UESTA2_DTSEQ_SIZE                                 2
#define AVR32_USBC_UESTA2_ERRORTRANS                                10
#define AVR32_USBC_UESTA2_ERRORTRANS_MASK                   0x00000400
#define AVR32_USBC_UESTA2_ERRORTRANS_OFFSET                         10
#define AVR32_USBC_UESTA2_ERRORTRANS_SIZE                            1
#define AVR32_USBC_UESTA2_MASK                              0x0002f75f
#define AVR32_USBC_UESTA2_NAKINI                                     4
#define AVR32_USBC_UESTA2_NAKINI_MASK                       0x00000010
#define AVR32_USBC_UESTA2_NAKINI_OFFSET                              4
#define AVR32_USBC_UESTA2_NAKINI_SIZE                                1
#define AVR32_USBC_UESTA2_NAKOUTI                                    3
#define AVR32_USBC_UESTA2_NAKOUTI_MASK                      0x00000008
#define AVR32_USBC_UESTA2_NAKOUTI_OFFSET                             3
#define AVR32_USBC_UESTA2_NAKOUTI_SIZE                               1
#define AVR32_USBC_UESTA2_NBUSYBK                                   12
#define AVR32_USBC_UESTA2_NBUSYBK_MASK                      0x00003000
#define AVR32_USBC_UESTA2_NBUSYBK_OFFSET                            12
#define AVR32_USBC_UESTA2_NBUSYBK_SIZE                               2
#define AVR32_USBC_UESTA2_RESETVALUE                        0x00000100
#define AVR32_USBC_UESTA2_RXOUTI                                     1
#define AVR32_USBC_UESTA2_RXOUTI_MASK                       0x00000002
#define AVR32_USBC_UESTA2_RXOUTI_OFFSET                              1
#define AVR32_USBC_UESTA2_RXOUTI_SIZE                                1
#define AVR32_USBC_UESTA2_RXSTPI                                     2
#define AVR32_USBC_UESTA2_RXSTPI_MASK                       0x00000004
#define AVR32_USBC_UESTA2_RXSTPI_OFFSET                              2
#define AVR32_USBC_UESTA2_RXSTPI_SIZE                                1
#define AVR32_USBC_UESTA2_STALLEDI                                   6
#define AVR32_USBC_UESTA2_STALLEDI_MASK                     0x00000040
#define AVR32_USBC_UESTA2_STALLEDI_OFFSET                            6
#define AVR32_USBC_UESTA2_STALLEDI_SIZE                              1
#define AVR32_USBC_UESTA2_TXINI                                      0
#define AVR32_USBC_UESTA2_TXINI_MASK                        0x00000001
#define AVR32_USBC_UESTA2_TXINI_OFFSET                               0
#define AVR32_USBC_UESTA2_TXINI_SIZE                                 1
#define AVR32_USBC_UESTA3                                   0x0000013c
#define AVR32_USBC_UESTA3CLR                                0x0000016c
#define AVR32_USBC_UESTA3CLR_MASK                           0x0000005f
#define AVR32_USBC_UESTA3CLR_NAKINIC                                 4
#define AVR32_USBC_UESTA3CLR_NAKINIC_MASK                   0x00000010
#define AVR32_USBC_UESTA3CLR_NAKINIC_OFFSET                          4
#define AVR32_USBC_UESTA3CLR_NAKINIC_SIZE                            1
#define AVR32_USBC_UESTA3CLR_NAKOUTIC                                3
#define AVR32_USBC_UESTA3CLR_NAKOUTIC_MASK                  0x00000008
#define AVR32_USBC_UESTA3CLR_NAKOUTIC_OFFSET                         3
#define AVR32_USBC_UESTA3CLR_NAKOUTIC_SIZE                           1
#define AVR32_USBC_UESTA3CLR_RESETVALUE                     0x00000000
#define AVR32_USBC_UESTA3CLR_RXOUTIC                                 1
#define AVR32_USBC_UESTA3CLR_RXOUTIC_MASK                   0x00000002
#define AVR32_USBC_UESTA3CLR_RXOUTIC_OFFSET                          1
#define AVR32_USBC_UESTA3CLR_RXOUTIC_SIZE                            1
#define AVR32_USBC_UESTA3CLR_RXSTPIC                                 2
#define AVR32_USBC_UESTA3CLR_RXSTPIC_MASK                   0x00000004
#define AVR32_USBC_UESTA3CLR_RXSTPIC_OFFSET                          2
#define AVR32_USBC_UESTA3CLR_RXSTPIC_SIZE                            1
#define AVR32_USBC_UESTA3CLR_STALLEDIC                               6
#define AVR32_USBC_UESTA3CLR_STALLEDIC_MASK                 0x00000040
#define AVR32_USBC_UESTA3CLR_STALLEDIC_OFFSET                        6
#define AVR32_USBC_UESTA3CLR_STALLEDIC_SIZE                          1
#define AVR32_USBC_UESTA3CLR_TXINIC                                  0
#define AVR32_USBC_UESTA3CLR_TXINIC_MASK                    0x00000001
#define AVR32_USBC_UESTA3CLR_TXINIC_OFFSET                           0
#define AVR32_USBC_UESTA3CLR_TXINIC_SIZE                             1
#define AVR32_USBC_UESTA3SET                                0x0000019c
#define AVR32_USBC_UESTA3SET_ERRORTRANSS                            10
#define AVR32_USBC_UESTA3SET_ERRORTRANSS_MASK               0x00000400
#define AVR32_USBC_UESTA3SET_ERRORTRANSS_OFFSET                     10
#define AVR32_USBC_UESTA3SET_ERRORTRANSS_SIZE                        1
#define AVR32_USBC_UESTA3SET_MASK                           0x0000155f
#define AVR32_USBC_UESTA3SET_NAKINIS                                 4
#define AVR32_USBC_UESTA3SET_NAKINIS_MASK                   0x00000010
#define AVR32_USBC_UESTA3SET_NAKINIS_OFFSET                          4
#define AVR32_USBC_UESTA3SET_NAKINIS_SIZE                            1
#define AVR32_USBC_UESTA3SET_NAKOUTIS                                3
#define AVR32_USBC_UESTA3SET_NAKOUTIS_MASK                  0x00000008
#define AVR32_USBC_UESTA3SET_NAKOUTIS_OFFSET                         3
#define AVR32_USBC_UESTA3SET_NAKOUTIS_SIZE                           1
#define AVR32_USBC_UESTA3SET_NBUSYBKS                               12
#define AVR32_USBC_UESTA3SET_NBUSYBKS_MASK                  0x00001000
#define AVR32_USBC_UESTA3SET_NBUSYBKS_OFFSET                        12
#define AVR32_USBC_UESTA3SET_NBUSYBKS_SIZE                           1
#define AVR32_USBC_UESTA3SET_RESETVALUE                     0x00000000
#define AVR32_USBC_UESTA3SET_RXOUTIS                                 1
#define AVR32_USBC_UESTA3SET_RXOUTIS_MASK                   0x00000002
#define AVR32_USBC_UESTA3SET_RXOUTIS_OFFSET                          1
#define AVR32_USBC_UESTA3SET_RXOUTIS_SIZE                            1
#define AVR32_USBC_UESTA3SET_RXSTPIS                                 2
#define AVR32_USBC_UESTA3SET_RXSTPIS_MASK                   0x00000004
#define AVR32_USBC_UESTA3SET_RXSTPIS_OFFSET                          2
#define AVR32_USBC_UESTA3SET_RXSTPIS_SIZE                            1
#define AVR32_USBC_UESTA3SET_SETMDATA                                8
#define AVR32_USBC_UESTA3SET_SETMDATA_MASK                  0x00000100
#define AVR32_USBC_UESTA3SET_SETMDATA_OFFSET                         8
#define AVR32_USBC_UESTA3SET_SETMDATA_SIZE                           1
#define AVR32_USBC_UESTA3SET_STALLEDIS                               6
#define AVR32_USBC_UESTA3SET_STALLEDIS_MASK                 0x00000040
#define AVR32_USBC_UESTA3SET_STALLEDIS_OFFSET                        6
#define AVR32_USBC_UESTA3SET_STALLEDIS_SIZE                          1
#define AVR32_USBC_UESTA3SET_TXINIS                                  0
#define AVR32_USBC_UESTA3SET_TXINIS_MASK                    0x00000001
#define AVR32_USBC_UESTA3SET_TXINIS_OFFSET                           0
#define AVR32_USBC_UESTA3SET_TXINIS_SIZE                             1
#define AVR32_USBC_UESTA3_CTRLDIR                                   17
#define AVR32_USBC_UESTA3_CTRLDIR_IN                        0x00000001
#define AVR32_USBC_UESTA3_CTRLDIR_MASK                      0x00020000
#define AVR32_USBC_UESTA3_CTRLDIR_OFFSET                            17
#define AVR32_USBC_UESTA3_CTRLDIR_OUT                       0x00000000
#define AVR32_USBC_UESTA3_CTRLDIR_SIZE                               1
#define AVR32_USBC_UESTA3_CURRBK                                    14
#define AVR32_USBC_UESTA3_CURRBK_MASK                       0x0000c000
#define AVR32_USBC_UESTA3_CURRBK_OFFSET                             14
#define AVR32_USBC_UESTA3_CURRBK_SIZE                                2
#define AVR32_USBC_UESTA3_DTSEQ                                      8
#define AVR32_USBC_UESTA3_DTSEQ_MASK                        0x00000300
#define AVR32_USBC_UESTA3_DTSEQ_OFFSET                               8
#define AVR32_USBC_UESTA3_DTSEQ_SIZE                                 2
#define AVR32_USBC_UESTA3_ERRORTRANS                                10
#define AVR32_USBC_UESTA3_ERRORTRANS_MASK                   0x00000400
#define AVR32_USBC_UESTA3_ERRORTRANS_OFFSET                         10
#define AVR32_USBC_UESTA3_ERRORTRANS_SIZE                            1
#define AVR32_USBC_UESTA3_MASK                              0x0002f75f
#define AVR32_USBC_UESTA3_NAKINI                                     4
#define AVR32_USBC_UESTA3_NAKINI_MASK                       0x00000010
#define AVR32_USBC_UESTA3_NAKINI_OFFSET                              4
#define AVR32_USBC_UESTA3_NAKINI_SIZE                                1
#define AVR32_USBC_UESTA3_NAKOUTI                                    3
#define AVR32_USBC_UESTA3_NAKOUTI_MASK                      0x00000008
#define AVR32_USBC_UESTA3_NAKOUTI_OFFSET                             3
#define AVR32_USBC_UESTA3_NAKOUTI_SIZE                               1
#define AVR32_USBC_UESTA3_NBUSYBK                                   12
#define AVR32_USBC_UESTA3_NBUSYBK_MASK                      0x00003000
#define AVR32_USBC_UESTA3_NBUSYBK_OFFSET                            12
#define AVR32_USBC_UESTA3_NBUSYBK_SIZE                               2
#define AVR32_USBC_UESTA3_RESETVALUE                        0x00000100
#define AVR32_USBC_UESTA3_RXOUTI                                     1
#define AVR32_USBC_UESTA3_RXOUTI_MASK                       0x00000002
#define AVR32_USBC_UESTA3_RXOUTI_OFFSET                              1
#define AVR32_USBC_UESTA3_RXOUTI_SIZE                                1
#define AVR32_USBC_UESTA3_RXSTPI                                     2
#define AVR32_USBC_UESTA3_RXSTPI_MASK                       0x00000004
#define AVR32_USBC_UESTA3_RXSTPI_OFFSET                              2
#define AVR32_USBC_UESTA3_RXSTPI_SIZE                                1
#define AVR32_USBC_UESTA3_STALLEDI                                   6
#define AVR32_USBC_UESTA3_STALLEDI_MASK                     0x00000040
#define AVR32_USBC_UESTA3_STALLEDI_OFFSET                            6
#define AVR32_USBC_UESTA3_STALLEDI_SIZE                              1
#define AVR32_USBC_UESTA3_TXINI                                      0
#define AVR32_USBC_UESTA3_TXINI_MASK                        0x00000001
#define AVR32_USBC_UESTA3_TXINI_OFFSET                               0
#define AVR32_USBC_UESTA3_TXINI_SIZE                                 1
#define AVR32_USBC_UESTA4                                   0x00000140
#define AVR32_USBC_UESTA4CLR                                0x00000170
#define AVR32_USBC_UESTA4CLR_MASK                           0x0000005f
#define AVR32_USBC_UESTA4CLR_NAKINIC                                 4
#define AVR32_USBC_UESTA4CLR_NAKINIC_MASK                   0x00000010
#define AVR32_USBC_UESTA4CLR_NAKINIC_OFFSET                          4
#define AVR32_USBC_UESTA4CLR_NAKINIC_SIZE                            1
#define AVR32_USBC_UESTA4CLR_NAKOUTIC                                3
#define AVR32_USBC_UESTA4CLR_NAKOUTIC_MASK                  0x00000008
#define AVR32_USBC_UESTA4CLR_NAKOUTIC_OFFSET                         3
#define AVR32_USBC_UESTA4CLR_NAKOUTIC_SIZE                           1
#define AVR32_USBC_UESTA4CLR_RESETVALUE                     0x00000000
#define AVR32_USBC_UESTA4CLR_RXOUTIC                                 1
#define AVR32_USBC_UESTA4CLR_RXOUTIC_MASK                   0x00000002
#define AVR32_USBC_UESTA4CLR_RXOUTIC_OFFSET                          1
#define AVR32_USBC_UESTA4CLR_RXOUTIC_SIZE                            1
#define AVR32_USBC_UESTA4CLR_RXSTPIC                                 2
#define AVR32_USBC_UESTA4CLR_RXSTPIC_MASK                   0x00000004
#define AVR32_USBC_UESTA4CLR_RXSTPIC_OFFSET                          2
#define AVR32_USBC_UESTA4CLR_RXSTPIC_SIZE                            1
#define AVR32_USBC_UESTA4CLR_STALLEDIC                               6
#define AVR32_USBC_UESTA4CLR_STALLEDIC_MASK                 0x00000040
#define AVR32_USBC_UESTA4CLR_STALLEDIC_OFFSET                        6
#define AVR32_USBC_UESTA4CLR_STALLEDIC_SIZE                          1
#define AVR32_USBC_UESTA4CLR_TXINIC                                  0
#define AVR32_USBC_UESTA4CLR_TXINIC_MASK                    0x00000001
#define AVR32_USBC_UESTA4CLR_TXINIC_OFFSET                           0
#define AVR32_USBC_UESTA4CLR_TXINIC_SIZE                             1
#define AVR32_USBC_UESTA4SET                                0x000001a0
#define AVR32_USBC_UESTA4SET_ERRORTRANSS                            10
#define AVR32_USBC_UESTA4SET_ERRORTRANSS_MASK               0x00000400
#define AVR32_USBC_UESTA4SET_ERRORTRANSS_OFFSET                     10
#define AVR32_USBC_UESTA4SET_ERRORTRANSS_SIZE                        1
#define AVR32_USBC_UESTA4SET_MASK                           0x0000155f
#define AVR32_USBC_UESTA4SET_NAKINIS                                 4
#define AVR32_USBC_UESTA4SET_NAKINIS_MASK                   0x00000010
#define AVR32_USBC_UESTA4SET_NAKINIS_OFFSET                          4
#define AVR32_USBC_UESTA4SET_NAKINIS_SIZE                            1
#define AVR32_USBC_UESTA4SET_NAKOUTIS                                3
#define AVR32_USBC_UESTA4SET_NAKOUTIS_MASK                  0x00000008
#define AVR32_USBC_UESTA4SET_NAKOUTIS_OFFSET                         3
#define AVR32_USBC_UESTA4SET_NAKOUTIS_SIZE                           1
#define AVR32_USBC_UESTA4SET_NBUSYBKS                               12
#define AVR32_USBC_UESTA4SET_NBUSYBKS_MASK                  0x00001000
#define AVR32_USBC_UESTA4SET_NBUSYBKS_OFFSET                        12
#define AVR32_USBC_UESTA4SET_NBUSYBKS_SIZE                           1
#define AVR32_USBC_UESTA4SET_RESETVALUE                     0x00000000
#define AVR32_USBC_UESTA4SET_RXOUTIS                                 1
#define AVR32_USBC_UESTA4SET_RXOUTIS_MASK                   0x00000002
#define AVR32_USBC_UESTA4SET_RXOUTIS_OFFSET                          1
#define AVR32_USBC_UESTA4SET_RXOUTIS_SIZE                            1
#define AVR32_USBC_UESTA4SET_RXSTPIS                                 2
#define AVR32_USBC_UESTA4SET_RXSTPIS_MASK                   0x00000004
#define AVR32_USBC_UESTA4SET_RXSTPIS_OFFSET                          2
#define AVR32_USBC_UESTA4SET_RXSTPIS_SIZE                            1
#define AVR32_USBC_UESTA4SET_SETMDATA                                8
#define AVR32_USBC_UESTA4SET_SETMDATA_MASK                  0x00000100
#define AVR32_USBC_UESTA4SET_SETMDATA_OFFSET                         8
#define AVR32_USBC_UESTA4SET_SETMDATA_SIZE                           1
#define AVR32_USBC_UESTA4SET_STALLEDIS                               6
#define AVR32_USBC_UESTA4SET_STALLEDIS_MASK                 0x00000040
#define AVR32_USBC_UESTA4SET_STALLEDIS_OFFSET                        6
#define AVR32_USBC_UESTA4SET_STALLEDIS_SIZE                          1
#define AVR32_USBC_UESTA4SET_TXINIS                                  0
#define AVR32_USBC_UESTA4SET_TXINIS_MASK                    0x00000001
#define AVR32_USBC_UESTA4SET_TXINIS_OFFSET                           0
#define AVR32_USBC_UESTA4SET_TXINIS_SIZE                             1
#define AVR32_USBC_UESTA4_CTRLDIR                                   17
#define AVR32_USBC_UESTA4_CTRLDIR_IN                        0x00000001
#define AVR32_USBC_UESTA4_CTRLDIR_MASK                      0x00020000
#define AVR32_USBC_UESTA4_CTRLDIR_OFFSET                            17
#define AVR32_USBC_UESTA4_CTRLDIR_OUT                       0x00000000
#define AVR32_USBC_UESTA4_CTRLDIR_SIZE                               1
#define AVR32_USBC_UESTA4_CURRBK                                    14
#define AVR32_USBC_UESTA4_CURRBK_MASK                       0x0000c000
#define AVR32_USBC_UESTA4_CURRBK_OFFSET                             14
#define AVR32_USBC_UESTA4_CURRBK_SIZE                                2
#define AVR32_USBC_UESTA4_DTSEQ                                      8
#define AVR32_USBC_UESTA4_DTSEQ_MASK                        0x00000300
#define AVR32_USBC_UESTA4_DTSEQ_OFFSET                               8
#define AVR32_USBC_UESTA4_DTSEQ_SIZE                                 2
#define AVR32_USBC_UESTA4_ERRORTRANS                                10
#define AVR32_USBC_UESTA4_ERRORTRANS_MASK                   0x00000400
#define AVR32_USBC_UESTA4_ERRORTRANS_OFFSET                         10
#define AVR32_USBC_UESTA4_ERRORTRANS_SIZE                            1
#define AVR32_USBC_UESTA4_MASK                              0x0002f75f
#define AVR32_USBC_UESTA4_NAKINI                                     4
#define AVR32_USBC_UESTA4_NAKINI_MASK                       0x00000010
#define AVR32_USBC_UESTA4_NAKINI_OFFSET                              4
#define AVR32_USBC_UESTA4_NAKINI_SIZE                                1
#define AVR32_USBC_UESTA4_NAKOUTI                                    3
#define AVR32_USBC_UESTA4_NAKOUTI_MASK                      0x00000008
#define AVR32_USBC_UESTA4_NAKOUTI_OFFSET                             3
#define AVR32_USBC_UESTA4_NAKOUTI_SIZE                               1
#define AVR32_USBC_UESTA4_NBUSYBK                                   12
#define AVR32_USBC_UESTA4_NBUSYBK_MASK                      0x00003000
#define AVR32_USBC_UESTA4_NBUSYBK_OFFSET                            12
#define AVR32_USBC_UESTA4_NBUSYBK_SIZE                               2
#define AVR32_USBC_UESTA4_RESETVALUE                        0x00000100
#define AVR32_USBC_UESTA4_RXOUTI                                     1
#define AVR32_USBC_UESTA4_RXOUTI_MASK                       0x00000002
#define AVR32_USBC_UESTA4_RXOUTI_OFFSET                              1
#define AVR32_USBC_UESTA4_RXOUTI_SIZE                                1
#define AVR32_USBC_UESTA4_RXSTPI                                     2
#define AVR32_USBC_UESTA4_RXSTPI_MASK                       0x00000004
#define AVR32_USBC_UESTA4_RXSTPI_OFFSET                              2
#define AVR32_USBC_UESTA4_RXSTPI_SIZE                                1
#define AVR32_USBC_UESTA4_STALLEDI                                   6
#define AVR32_USBC_UESTA4_STALLEDI_MASK                     0x00000040
#define AVR32_USBC_UESTA4_STALLEDI_OFFSET                            6
#define AVR32_USBC_UESTA4_STALLEDI_SIZE                              1
#define AVR32_USBC_UESTA4_TXINI                                      0
#define AVR32_USBC_UESTA4_TXINI_MASK                        0x00000001
#define AVR32_USBC_UESTA4_TXINI_OFFSET                               0
#define AVR32_USBC_UESTA4_TXINI_SIZE                                 1
#define AVR32_USBC_UESTA5                                   0x00000144
#define AVR32_USBC_UESTA5CLR                                0x00000174
#define AVR32_USBC_UESTA5CLR_MASK                           0x0000005f
#define AVR32_USBC_UESTA5CLR_NAKINIC                                 4
#define AVR32_USBC_UESTA5CLR_NAKINIC_MASK                   0x00000010
#define AVR32_USBC_UESTA5CLR_NAKINIC_OFFSET                          4
#define AVR32_USBC_UESTA5CLR_NAKINIC_SIZE                            1
#define AVR32_USBC_UESTA5CLR_NAKOUTIC                                3
#define AVR32_USBC_UESTA5CLR_NAKOUTIC_MASK                  0x00000008
#define AVR32_USBC_UESTA5CLR_NAKOUTIC_OFFSET                         3
#define AVR32_USBC_UESTA5CLR_NAKOUTIC_SIZE                           1
#define AVR32_USBC_UESTA5CLR_RESETVALUE                     0x00000000
#define AVR32_USBC_UESTA5CLR_RXOUTIC                                 1
#define AVR32_USBC_UESTA5CLR_RXOUTIC_MASK                   0x00000002
#define AVR32_USBC_UESTA5CLR_RXOUTIC_OFFSET                          1
#define AVR32_USBC_UESTA5CLR_RXOUTIC_SIZE                            1
#define AVR32_USBC_UESTA5CLR_RXSTPIC                                 2
#define AVR32_USBC_UESTA5CLR_RXSTPIC_MASK                   0x00000004
#define AVR32_USBC_UESTA5CLR_RXSTPIC_OFFSET                          2
#define AVR32_USBC_UESTA5CLR_RXSTPIC_SIZE                            1
#define AVR32_USBC_UESTA5CLR_STALLEDIC                               6
#define AVR32_USBC_UESTA5CLR_STALLEDIC_MASK                 0x00000040
#define AVR32_USBC_UESTA5CLR_STALLEDIC_OFFSET                        6
#define AVR32_USBC_UESTA5CLR_STALLEDIC_SIZE                          1
#define AVR32_USBC_UESTA5CLR_TXINIC                                  0
#define AVR32_USBC_UESTA5CLR_TXINIC_MASK                    0x00000001
#define AVR32_USBC_UESTA5CLR_TXINIC_OFFSET                           0
#define AVR32_USBC_UESTA5CLR_TXINIC_SIZE                             1
#define AVR32_USBC_UESTA5SET                                0x000001a4
#define AVR32_USBC_UESTA5SET_ERRORTRANSS                            10
#define AVR32_USBC_UESTA5SET_ERRORTRANSS_MASK               0x00000400
#define AVR32_USBC_UESTA5SET_ERRORTRANSS_OFFSET                     10
#define AVR32_USBC_UESTA5SET_ERRORTRANSS_SIZE                        1
#define AVR32_USBC_UESTA5SET_MASK                           0x0000155f
#define AVR32_USBC_UESTA5SET_NAKINIS                                 4
#define AVR32_USBC_UESTA5SET_NAKINIS_MASK                   0x00000010
#define AVR32_USBC_UESTA5SET_NAKINIS_OFFSET                          4
#define AVR32_USBC_UESTA5SET_NAKINIS_SIZE                            1
#define AVR32_USBC_UESTA5SET_NAKOUTIS                                3
#define AVR32_USBC_UESTA5SET_NAKOUTIS_MASK                  0x00000008
#define AVR32_USBC_UESTA5SET_NAKOUTIS_OFFSET                         3
#define AVR32_USBC_UESTA5SET_NAKOUTIS_SIZE                           1
#define AVR32_USBC_UESTA5SET_NBUSYBKS                               12
#define AVR32_USBC_UESTA5SET_NBUSYBKS_MASK                  0x00001000
#define AVR32_USBC_UESTA5SET_NBUSYBKS_OFFSET                        12
#define AVR32_USBC_UESTA5SET_NBUSYBKS_SIZE                           1
#define AVR32_USBC_UESTA5SET_RESETVALUE                     0x00000000
#define AVR32_USBC_UESTA5SET_RXOUTIS                                 1
#define AVR32_USBC_UESTA5SET_RXOUTIS_MASK                   0x00000002
#define AVR32_USBC_UESTA5SET_RXOUTIS_OFFSET                          1
#define AVR32_USBC_UESTA5SET_RXOUTIS_SIZE                            1
#define AVR32_USBC_UESTA5SET_RXSTPIS                                 2
#define AVR32_USBC_UESTA5SET_RXSTPIS_MASK                   0x00000004
#define AVR32_USBC_UESTA5SET_RXSTPIS_OFFSET                          2
#define AVR32_USBC_UESTA5SET_RXSTPIS_SIZE                            1
#define AVR32_USBC_UESTA5SET_SETMDATA                                8
#define AVR32_USBC_UESTA5SET_SETMDATA_MASK                  0x00000100
#define AVR32_USBC_UESTA5SET_SETMDATA_OFFSET                         8
#define AVR32_USBC_UESTA5SET_SETMDATA_SIZE                           1
#define AVR32_USBC_UESTA5SET_STALLEDIS                               6
#define AVR32_USBC_UESTA5SET_STALLEDIS_MASK                 0x00000040
#define AVR32_USBC_UESTA5SET_STALLEDIS_OFFSET                        6
#define AVR32_USBC_UESTA5SET_STALLEDIS_SIZE                          1
#define AVR32_USBC_UESTA5SET_TXINIS                                  0
#define AVR32_USBC_UESTA5SET_TXINIS_MASK                    0x00000001
#define AVR32_USBC_UESTA5SET_TXINIS_OFFSET                           0
#define AVR32_USBC_UESTA5SET_TXINIS_SIZE                             1
#define AVR32_USBC_UESTA5_CTRLDIR                                   17
#define AVR32_USBC_UESTA5_CTRLDIR_IN                        0x00000001
#define AVR32_USBC_UESTA5_CTRLDIR_MASK                      0x00020000
#define AVR32_USBC_UESTA5_CTRLDIR_OFFSET                            17
#define AVR32_USBC_UESTA5_CTRLDIR_OUT                       0x00000000
#define AVR32_USBC_UESTA5_CTRLDIR_SIZE                               1
#define AVR32_USBC_UESTA5_CURRBK                                    14
#define AVR32_USBC_UESTA5_CURRBK_MASK                       0x0000c000
#define AVR32_USBC_UESTA5_CURRBK_OFFSET                             14
#define AVR32_USBC_UESTA5_CURRBK_SIZE                                2
#define AVR32_USBC_UESTA5_DTSEQ                                      8
#define AVR32_USBC_UESTA5_DTSEQ_MASK                        0x00000300
#define AVR32_USBC_UESTA5_DTSEQ_OFFSET                               8
#define AVR32_USBC_UESTA5_DTSEQ_SIZE                                 2
#define AVR32_USBC_UESTA5_ERRORTRANS                                10
#define AVR32_USBC_UESTA5_ERRORTRANS_MASK                   0x00000400
#define AVR32_USBC_UESTA5_ERRORTRANS_OFFSET                         10
#define AVR32_USBC_UESTA5_ERRORTRANS_SIZE                            1
#define AVR32_USBC_UESTA5_MASK                              0x0002f75f
#define AVR32_USBC_UESTA5_NAKINI                                     4
#define AVR32_USBC_UESTA5_NAKINI_MASK                       0x00000010
#define AVR32_USBC_UESTA5_NAKINI_OFFSET                              4
#define AVR32_USBC_UESTA5_NAKINI_SIZE                                1
#define AVR32_USBC_UESTA5_NAKOUTI                                    3
#define AVR32_USBC_UESTA5_NAKOUTI_MASK                      0x00000008
#define AVR32_USBC_UESTA5_NAKOUTI_OFFSET                             3
#define AVR32_USBC_UESTA5_NAKOUTI_SIZE                               1
#define AVR32_USBC_UESTA5_NBUSYBK                                   12
#define AVR32_USBC_UESTA5_NBUSYBK_MASK                      0x00003000
#define AVR32_USBC_UESTA5_NBUSYBK_OFFSET                            12
#define AVR32_USBC_UESTA5_NBUSYBK_SIZE                               2
#define AVR32_USBC_UESTA5_RESETVALUE                        0x00000100
#define AVR32_USBC_UESTA5_RXOUTI                                     1
#define AVR32_USBC_UESTA5_RXOUTI_MASK                       0x00000002
#define AVR32_USBC_UESTA5_RXOUTI_OFFSET                              1
#define AVR32_USBC_UESTA5_RXOUTI_SIZE                                1
#define AVR32_USBC_UESTA5_RXSTPI                                     2
#define AVR32_USBC_UESTA5_RXSTPI_MASK                       0x00000004
#define AVR32_USBC_UESTA5_RXSTPI_OFFSET                              2
#define AVR32_USBC_UESTA5_RXSTPI_SIZE                                1
#define AVR32_USBC_UESTA5_STALLEDI                                   6
#define AVR32_USBC_UESTA5_STALLEDI_MASK                     0x00000040
#define AVR32_USBC_UESTA5_STALLEDI_OFFSET                            6
#define AVR32_USBC_UESTA5_STALLEDI_SIZE                              1
#define AVR32_USBC_UESTA5_TXINI                                      0
#define AVR32_USBC_UESTA5_TXINI_MASK                        0x00000001
#define AVR32_USBC_UESTA5_TXINI_OFFSET                               0
#define AVR32_USBC_UESTA5_TXINI_SIZE                                 1
#define AVR32_USBC_UESTA6                                   0x00000148
#define AVR32_USBC_UESTA6CLR                                0x00000178
#define AVR32_USBC_UESTA6CLR_MASK                           0x0000005f
#define AVR32_USBC_UESTA6CLR_NAKINIC                                 4
#define AVR32_USBC_UESTA6CLR_NAKINIC_MASK                   0x00000010
#define AVR32_USBC_UESTA6CLR_NAKINIC_OFFSET                          4
#define AVR32_USBC_UESTA6CLR_NAKINIC_SIZE                            1
#define AVR32_USBC_UESTA6CLR_NAKOUTIC                                3
#define AVR32_USBC_UESTA6CLR_NAKOUTIC_MASK                  0x00000008
#define AVR32_USBC_UESTA6CLR_NAKOUTIC_OFFSET                         3
#define AVR32_USBC_UESTA6CLR_NAKOUTIC_SIZE                           1
#define AVR32_USBC_UESTA6CLR_RESETVALUE                     0x00000000
#define AVR32_USBC_UESTA6CLR_RXOUTIC                                 1
#define AVR32_USBC_UESTA6CLR_RXOUTIC_MASK                   0x00000002
#define AVR32_USBC_UESTA6CLR_RXOUTIC_OFFSET                          1
#define AVR32_USBC_UESTA6CLR_RXOUTIC_SIZE                            1
#define AVR32_USBC_UESTA6CLR_RXSTPIC                                 2
#define AVR32_USBC_UESTA6CLR_RXSTPIC_MASK                   0x00000004
#define AVR32_USBC_UESTA6CLR_RXSTPIC_OFFSET                          2
#define AVR32_USBC_UESTA6CLR_RXSTPIC_SIZE                            1
#define AVR32_USBC_UESTA6CLR_STALLEDIC                               6
#define AVR32_USBC_UESTA6CLR_STALLEDIC_MASK                 0x00000040
#define AVR32_USBC_UESTA6CLR_STALLEDIC_OFFSET                        6
#define AVR32_USBC_UESTA6CLR_STALLEDIC_SIZE                          1
#define AVR32_USBC_UESTA6CLR_TXINIC                                  0
#define AVR32_USBC_UESTA6CLR_TXINIC_MASK                    0x00000001
#define AVR32_USBC_UESTA6CLR_TXINIC_OFFSET                           0
#define AVR32_USBC_UESTA6CLR_TXINIC_SIZE                             1
#define AVR32_USBC_UESTA6SET                                0x000001a8
#define AVR32_USBC_UESTA6SET_ERRORTRANSS                            10
#define AVR32_USBC_UESTA6SET_ERRORTRANSS_MASK               0x00000400
#define AVR32_USBC_UESTA6SET_ERRORTRANSS_OFFSET                     10
#define AVR32_USBC_UESTA6SET_ERRORTRANSS_SIZE                        1
#define AVR32_USBC_UESTA6SET_MASK                           0x0000155f
#define AVR32_USBC_UESTA6SET_NAKINIS                                 4
#define AVR32_USBC_UESTA6SET_NAKINIS_MASK                   0x00000010
#define AVR32_USBC_UESTA6SET_NAKINIS_OFFSET                          4
#define AVR32_USBC_UESTA6SET_NAKINIS_SIZE                            1
#define AVR32_USBC_UESTA6SET_NAKOUTIS                                3
#define AVR32_USBC_UESTA6SET_NAKOUTIS_MASK                  0x00000008
#define AVR32_USBC_UESTA6SET_NAKOUTIS_OFFSET                         3
#define AVR32_USBC_UESTA6SET_NAKOUTIS_SIZE                           1
#define AVR32_USBC_UESTA6SET_NBUSYBKS                               12
#define AVR32_USBC_UESTA6SET_NBUSYBKS_MASK                  0x00001000
#define AVR32_USBC_UESTA6SET_NBUSYBKS_OFFSET                        12
#define AVR32_USBC_UESTA6SET_NBUSYBKS_SIZE                           1
#define AVR32_USBC_UESTA6SET_RESETVALUE                     0x00000000
#define AVR32_USBC_UESTA6SET_RXOUTIS                                 1
#define AVR32_USBC_UESTA6SET_RXOUTIS_MASK                   0x00000002
#define AVR32_USBC_UESTA6SET_RXOUTIS_OFFSET                          1
#define AVR32_USBC_UESTA6SET_RXOUTIS_SIZE                            1
#define AVR32_USBC_UESTA6SET_RXSTPIS                                 2
#define AVR32_USBC_UESTA6SET_RXSTPIS_MASK                   0x00000004
#define AVR32_USBC_UESTA6SET_RXSTPIS_OFFSET                          2
#define AVR32_USBC_UESTA6SET_RXSTPIS_SIZE                            1
#define AVR32_USBC_UESTA6SET_SETMDATA                                8
#define AVR32_USBC_UESTA6SET_SETMDATA_MASK                  0x00000100
#define AVR32_USBC_UESTA6SET_SETMDATA_OFFSET                         8
#define AVR32_USBC_UESTA6SET_SETMDATA_SIZE                           1
#define AVR32_USBC_UESTA6SET_STALLEDIS                               6
#define AVR32_USBC_UESTA6SET_STALLEDIS_MASK                 0x00000040
#define AVR32_USBC_UESTA6SET_STALLEDIS_OFFSET                        6
#define AVR32_USBC_UESTA6SET_STALLEDIS_SIZE                          1
#define AVR32_USBC_UESTA6SET_TXINIS                                  0
#define AVR32_USBC_UESTA6SET_TXINIS_MASK                    0x00000001
#define AVR32_USBC_UESTA6SET_TXINIS_OFFSET                           0
#define AVR32_USBC_UESTA6SET_TXINIS_SIZE                             1
#define AVR32_USBC_UESTA6_CTRLDIR                                   17
#define AVR32_USBC_UESTA6_CTRLDIR_IN                        0x00000001
#define AVR32_USBC_UESTA6_CTRLDIR_MASK                      0x00020000
#define AVR32_USBC_UESTA6_CTRLDIR_OFFSET                            17
#define AVR32_USBC_UESTA6_CTRLDIR_OUT                       0x00000000
#define AVR32_USBC_UESTA6_CTRLDIR_SIZE                               1
#define AVR32_USBC_UESTA6_CURRBK                                    14
#define AVR32_USBC_UESTA6_CURRBK_MASK                       0x0000c000
#define AVR32_USBC_UESTA6_CURRBK_OFFSET                             14
#define AVR32_USBC_UESTA6_CURRBK_SIZE                                2
#define AVR32_USBC_UESTA6_DTSEQ                                      8
#define AVR32_USBC_UESTA6_DTSEQ_MASK                        0x00000300
#define AVR32_USBC_UESTA6_DTSEQ_OFFSET                               8
#define AVR32_USBC_UESTA6_DTSEQ_SIZE                                 2
#define AVR32_USBC_UESTA6_ERRORTRANS                                10
#define AVR32_USBC_UESTA6_ERRORTRANS_MASK                   0x00000400
#define AVR32_USBC_UESTA6_ERRORTRANS_OFFSET                         10
#define AVR32_USBC_UESTA6_ERRORTRANS_SIZE                            1
#define AVR32_USBC_UESTA6_MASK                              0x0002f75f
#define AVR32_USBC_UESTA6_NAKINI                                     4
#define AVR32_USBC_UESTA6_NAKINI_MASK                       0x00000010
#define AVR32_USBC_UESTA6_NAKINI_OFFSET                              4
#define AVR32_USBC_UESTA6_NAKINI_SIZE                                1
#define AVR32_USBC_UESTA6_NAKOUTI                                    3
#define AVR32_USBC_UESTA6_NAKOUTI_MASK                      0x00000008
#define AVR32_USBC_UESTA6_NAKOUTI_OFFSET                             3
#define AVR32_USBC_UESTA6_NAKOUTI_SIZE                               1
#define AVR32_USBC_UESTA6_NBUSYBK                                   12
#define AVR32_USBC_UESTA6_NBUSYBK_MASK                      0x00003000
#define AVR32_USBC_UESTA6_NBUSYBK_OFFSET                            12
#define AVR32_USBC_UESTA6_NBUSYBK_SIZE                               2
#define AVR32_USBC_UESTA6_RESETVALUE                        0x00000100
#define AVR32_USBC_UESTA6_RXOUTI                                     1
#define AVR32_USBC_UESTA6_RXOUTI_MASK                       0x00000002
#define AVR32_USBC_UESTA6_RXOUTI_OFFSET                              1
#define AVR32_USBC_UESTA6_RXOUTI_SIZE                                1
#define AVR32_USBC_UESTA6_RXSTPI                                     2
#define AVR32_USBC_UESTA6_RXSTPI_MASK                       0x00000004
#define AVR32_USBC_UESTA6_RXSTPI_OFFSET                              2
#define AVR32_USBC_UESTA6_RXSTPI_SIZE                                1
#define AVR32_USBC_UESTA6_STALLEDI                                   6
#define AVR32_USBC_UESTA6_STALLEDI_MASK                     0x00000040
#define AVR32_USBC_UESTA6_STALLEDI_OFFSET                            6
#define AVR32_USBC_UESTA6_STALLEDI_SIZE                              1
#define AVR32_USBC_UESTA6_TXINI                                      0
#define AVR32_USBC_UESTA6_TXINI_MASK                        0x00000001
#define AVR32_USBC_UESTA6_TXINI_OFFSET                               0
#define AVR32_USBC_UESTA6_TXINI_SIZE                                 1
#define AVR32_USBC_UESTA7                                   0x0000014c
#define AVR32_USBC_UESTA7CLR                                0x0000017c
#define AVR32_USBC_UESTA7CLR_MASK                           0x0000005f
#define AVR32_USBC_UESTA7CLR_NAKINIC                                 4
#define AVR32_USBC_UESTA7CLR_NAKINIC_MASK                   0x00000010
#define AVR32_USBC_UESTA7CLR_NAKINIC_OFFSET                          4
#define AVR32_USBC_UESTA7CLR_NAKINIC_SIZE                            1
#define AVR32_USBC_UESTA7CLR_NAKOUTIC                                3
#define AVR32_USBC_UESTA7CLR_NAKOUTIC_MASK                  0x00000008
#define AVR32_USBC_UESTA7CLR_NAKOUTIC_OFFSET                         3
#define AVR32_USBC_UESTA7CLR_NAKOUTIC_SIZE                           1
#define AVR32_USBC_UESTA7CLR_RESETVALUE                     0x00000000
#define AVR32_USBC_UESTA7CLR_RXOUTIC                                 1
#define AVR32_USBC_UESTA7CLR_RXOUTIC_MASK                   0x00000002
#define AVR32_USBC_UESTA7CLR_RXOUTIC_OFFSET                          1
#define AVR32_USBC_UESTA7CLR_RXOUTIC_SIZE                            1
#define AVR32_USBC_UESTA7CLR_RXSTPIC                                 2
#define AVR32_USBC_UESTA7CLR_RXSTPIC_MASK                   0x00000004
#define AVR32_USBC_UESTA7CLR_RXSTPIC_OFFSET                          2
#define AVR32_USBC_UESTA7CLR_RXSTPIC_SIZE                            1
#define AVR32_USBC_UESTA7CLR_STALLEDIC                               6
#define AVR32_USBC_UESTA7CLR_STALLEDIC_MASK                 0x00000040
#define AVR32_USBC_UESTA7CLR_STALLEDIC_OFFSET                        6
#define AVR32_USBC_UESTA7CLR_STALLEDIC_SIZE                          1
#define AVR32_USBC_UESTA7CLR_TXINIC                                  0
#define AVR32_USBC_UESTA7CLR_TXINIC_MASK                    0x00000001
#define AVR32_USBC_UESTA7CLR_TXINIC_OFFSET                           0
#define AVR32_USBC_UESTA7CLR_TXINIC_SIZE                             1
#define AVR32_USBC_UESTA7SET                                0x000001ac
#define AVR32_USBC_UESTA7SET_ERRORTRANSS                            10
#define AVR32_USBC_UESTA7SET_ERRORTRANSS_MASK               0x00000400
#define AVR32_USBC_UESTA7SET_ERRORTRANSS_OFFSET                     10
#define AVR32_USBC_UESTA7SET_ERRORTRANSS_SIZE                        1
#define AVR32_USBC_UESTA7SET_MASK                           0x0000155f
#define AVR32_USBC_UESTA7SET_NAKINIS                                 4
#define AVR32_USBC_UESTA7SET_NAKINIS_MASK                   0x00000010
#define AVR32_USBC_UESTA7SET_NAKINIS_OFFSET                          4
#define AVR32_USBC_UESTA7SET_NAKINIS_SIZE                            1
#define AVR32_USBC_UESTA7SET_NAKOUTIS                                3
#define AVR32_USBC_UESTA7SET_NAKOUTIS_MASK                  0x00000008
#define AVR32_USBC_UESTA7SET_NAKOUTIS_OFFSET                         3
#define AVR32_USBC_UESTA7SET_NAKOUTIS_SIZE                           1
#define AVR32_USBC_UESTA7SET_NBUSYBKS                               12
#define AVR32_USBC_UESTA7SET_NBUSYBKS_MASK                  0x00001000
#define AVR32_USBC_UESTA7SET_NBUSYBKS_OFFSET                        12
#define AVR32_USBC_UESTA7SET_NBUSYBKS_SIZE                           1
#define AVR32_USBC_UESTA7SET_RESETVALUE                     0x00000000
#define AVR32_USBC_UESTA7SET_RXOUTIS                                 1
#define AVR32_USBC_UESTA7SET_RXOUTIS_MASK                   0x00000002
#define AVR32_USBC_UESTA7SET_RXOUTIS_OFFSET                          1
#define AVR32_USBC_UESTA7SET_RXOUTIS_SIZE                            1
#define AVR32_USBC_UESTA7SET_RXSTPIS                                 2
#define AVR32_USBC_UESTA7SET_RXSTPIS_MASK                   0x00000004
#define AVR32_USBC_UESTA7SET_RXSTPIS_OFFSET                          2
#define AVR32_USBC_UESTA7SET_RXSTPIS_SIZE                            1
#define AVR32_USBC_UESTA7SET_SETMDATA                                8
#define AVR32_USBC_UESTA7SET_SETMDATA_MASK                  0x00000100
#define AVR32_USBC_UESTA7SET_SETMDATA_OFFSET                         8
#define AVR32_USBC_UESTA7SET_SETMDATA_SIZE                           1
#define AVR32_USBC_UESTA7SET_STALLEDIS                               6
#define AVR32_USBC_UESTA7SET_STALLEDIS_MASK                 0x00000040
#define AVR32_USBC_UESTA7SET_STALLEDIS_OFFSET                        6
#define AVR32_USBC_UESTA7SET_STALLEDIS_SIZE                          1
#define AVR32_USBC_UESTA7SET_TXINIS                                  0
#define AVR32_USBC_UESTA7SET_TXINIS_MASK                    0x00000001
#define AVR32_USBC_UESTA7SET_TXINIS_OFFSET                           0
#define AVR32_USBC_UESTA7SET_TXINIS_SIZE                             1
#define AVR32_USBC_UESTA7_CTRLDIR                                   17
#define AVR32_USBC_UESTA7_CTRLDIR_MASK                      0x00020000
#define AVR32_USBC_UESTA7_CTRLDIR_OFFSET                            17
#define AVR32_USBC_UESTA7_CTRLDIR_SIZE                               1
#define AVR32_USBC_UESTA7_CURRBK                                    14
#define AVR32_USBC_UESTA7_CURRBK_MASK                       0x0000c000
#define AVR32_USBC_UESTA7_CURRBK_OFFSET                             14
#define AVR32_USBC_UESTA7_CURRBK_SIZE                                2
#define AVR32_USBC_UESTA7_DTSEQ                                      8
#define AVR32_USBC_UESTA7_DTSEQ_MASK                        0x00000300
#define AVR32_USBC_UESTA7_DTSEQ_OFFSET                               8
#define AVR32_USBC_UESTA7_DTSEQ_SIZE                                 2
#define AVR32_USBC_UESTA7_ERRORTRANS                                10
#define AVR32_USBC_UESTA7_ERRORTRANS_MASK                   0x00000400
#define AVR32_USBC_UESTA7_ERRORTRANS_OFFSET                         10
#define AVR32_USBC_UESTA7_ERRORTRANS_SIZE                            1
#define AVR32_USBC_UESTA7_MASK                              0x0002f75f
#define AVR32_USBC_UESTA7_NAKINI                                     4
#define AVR32_USBC_UESTA7_NAKINI_MASK                       0x00000010
#define AVR32_USBC_UESTA7_NAKINI_OFFSET                              4
#define AVR32_USBC_UESTA7_NAKINI_SIZE                                1
#define AVR32_USBC_UESTA7_NAKOUTI                                    3
#define AVR32_USBC_UESTA7_NAKOUTI_MASK                      0x00000008
#define AVR32_USBC_UESTA7_NAKOUTI_OFFSET                             3
#define AVR32_USBC_UESTA7_NAKOUTI_SIZE                               1
#define AVR32_USBC_UESTA7_NBUSYBK                                   12
#define AVR32_USBC_UESTA7_NBUSYBK_MASK                      0x00003000
#define AVR32_USBC_UESTA7_NBUSYBK_OFFSET                            12
#define AVR32_USBC_UESTA7_NBUSYBK_SIZE                               2
#define AVR32_USBC_UESTA7_RESETVALUE                        0x00000100
#define AVR32_USBC_UESTA7_RXOUTI                                     1
#define AVR32_USBC_UESTA7_RXOUTI_MASK                       0x00000002
#define AVR32_USBC_UESTA7_RXOUTI_OFFSET                              1
#define AVR32_USBC_UESTA7_RXOUTI_SIZE                                1
#define AVR32_USBC_UESTA7_RXSTPI                                     2
#define AVR32_USBC_UESTA7_RXSTPI_MASK                       0x00000004
#define AVR32_USBC_UESTA7_RXSTPI_OFFSET                              2
#define AVR32_USBC_UESTA7_RXSTPI_SIZE                                1
#define AVR32_USBC_UESTA7_STALLEDI                                   6
#define AVR32_USBC_UESTA7_STALLEDI_MASK                     0x00000040
#define AVR32_USBC_UESTA7_STALLEDI_OFFSET                            6
#define AVR32_USBC_UESTA7_STALLEDI_SIZE                              1
#define AVR32_USBC_UESTA7_TXINI                                      0
#define AVR32_USBC_UESTA7_TXINI_MASK                        0x00000001
#define AVR32_USBC_UESTA7_TXINI_OFFSET                               0
#define AVR32_USBC_UESTA7_TXINI_SIZE                                 1
#define AVR32_USBC_UFEATURES                                0x0000081c
#define AVR32_USBC_UFEATURES_EPT_NBR_MAX                             0
#define AVR32_USBC_UFEATURES_EPT_NBR_MAX_MASK               0x0000000f
#define AVR32_USBC_UFEATURES_EPT_NBR_MAX_OFFSET                      0
#define AVR32_USBC_UFEATURES_EPT_NBR_MAX_SIZE                        4
#define AVR32_USBC_UFEATURES_MASK                           0x0000010f
#define AVR32_USBC_UFEATURES_RESETVALUE                     0x00000007
#define AVR32_USBC_UFEATURES_UTMI_MODE                               8
#define AVR32_USBC_UFEATURES_UTMI_MODE_MASK                 0x00000100
#define AVR32_USBC_UFEATURES_UTMI_MODE_OFFSET                        8
#define AVR32_USBC_UFEATURES_UTMI_MODE_SIZE                          1
#define AVR32_USBC_UHCON                                    0x00000400
#define AVR32_USBC_UHCON_MASK                               0x00003700
#define AVR32_USBC_UHCON_RESET                                       9
#define AVR32_USBC_UHCON_RESETVALUE                         0x00000000
#define AVR32_USBC_UHCON_RESET_MASK                         0x00000200
#define AVR32_USBC_UHCON_RESET_OFFSET                                9
#define AVR32_USBC_UHCON_RESET_SIZE                                  1
#define AVR32_USBC_UHCON_RESUME                                     10
#define AVR32_USBC_UHCON_RESUME_MASK                        0x00000400
#define AVR32_USBC_UHCON_RESUME_OFFSET                              10
#define AVR32_USBC_UHCON_RESUME_SIZE                                 1
#define AVR32_USBC_UHCON_SOFE                                        8
#define AVR32_USBC_UHCON_SOFE_MASK                          0x00000100
#define AVR32_USBC_UHCON_SOFE_OFFSET                                 8
#define AVR32_USBC_UHCON_SOFE_SIZE                                   1
#define AVR32_USBC_UHCON_SPDCONF                                    12
#define AVR32_USBC_UHCON_SPDCONF_MASK                       0x00003000
#define AVR32_USBC_UHCON_SPDCONF_OFFSET                             12
#define AVR32_USBC_UHCON_SPDCONF_SIZE                                2
#define AVR32_USBC_UHFNUM                                   0x00000420
#define AVR32_USBC_UHFNUM_FLENHIGH                                  16
#define AVR32_USBC_UHFNUM_FLENHIGH_MASK                     0x00ff0000
#define AVR32_USBC_UHFNUM_FLENHIGH_OFFSET                           16
#define AVR32_USBC_UHFNUM_FLENHIGH_SIZE                              8
#define AVR32_USBC_UHFNUM_FNUM                                       3
#define AVR32_USBC_UHFNUM_FNUM_MASK                         0x00003ff8
#define AVR32_USBC_UHFNUM_FNUM_OFFSET                                3
#define AVR32_USBC_UHFNUM_FNUM_SIZE                                 11
#define AVR32_USBC_UHFNUM_MASK                              0x00ff3fff
#define AVR32_USBC_UHFNUM_MFNUM                                      0
#define AVR32_USBC_UHFNUM_MFNUM_MASK                        0x00000007
#define AVR32_USBC_UHFNUM_MFNUM_OFFSET                               0
#define AVR32_USBC_UHFNUM_MFNUM_SIZE                                 3
#define AVR32_USBC_UHFNUM_RESETVALUE                        0x00000000
#define AVR32_USBC_UHINT                                    0x00000404
#define AVR32_USBC_UHINTCLR                                 0x00000408
#define AVR32_USBC_UHINTCLR_DCONNIC                                  0
#define AVR32_USBC_UHINTCLR_DCONNIC_MASK                    0x00000001
#define AVR32_USBC_UHINTCLR_DCONNIC_OFFSET                           0
#define AVR32_USBC_UHINTCLR_DCONNIC_SIZE                             1
#define AVR32_USBC_UHINTCLR_DDISCIC                                  1
#define AVR32_USBC_UHINTCLR_DDISCIC_MASK                    0x00000002
#define AVR32_USBC_UHINTCLR_DDISCIC_OFFSET                           1
#define AVR32_USBC_UHINTCLR_DDISCIC_SIZE                             1
#define AVR32_USBC_UHINTCLR_HSOFIC                                   5
#define AVR32_USBC_UHINTCLR_HSOFIC_MASK                     0x00000020
#define AVR32_USBC_UHINTCLR_HSOFIC_OFFSET                            5
#define AVR32_USBC_UHINTCLR_HSOFIC_SIZE                              1
#define AVR32_USBC_UHINTCLR_HWUPIC                                   6
#define AVR32_USBC_UHINTCLR_HWUPIC_MASK                     0x00000040
#define AVR32_USBC_UHINTCLR_HWUPIC_OFFSET                            6
#define AVR32_USBC_UHINTCLR_HWUPIC_SIZE                              1
#define AVR32_USBC_UHINTCLR_MASK                            0x0000007f
#define AVR32_USBC_UHINTCLR_RESETVALUE                      0x00000000
#define AVR32_USBC_UHINTCLR_RSMEDIC                                  3
#define AVR32_USBC_UHINTCLR_RSMEDIC_MASK                    0x00000008
#define AVR32_USBC_UHINTCLR_RSMEDIC_OFFSET                           3
#define AVR32_USBC_UHINTCLR_RSMEDIC_SIZE                             1
#define AVR32_USBC_UHINTCLR_RSTIC                                    2
#define AVR32_USBC_UHINTCLR_RSTIC_MASK                      0x00000004
#define AVR32_USBC_UHINTCLR_RSTIC_OFFSET                             2
#define AVR32_USBC_UHINTCLR_RSTIC_SIZE                               1
#define AVR32_USBC_UHINTCLR_RXRSMIC                                  4
#define AVR32_USBC_UHINTCLR_RXRSMIC_MASK                    0x00000010
#define AVR32_USBC_UHINTCLR_RXRSMIC_OFFSET                           4
#define AVR32_USBC_UHINTCLR_RXRSMIC_SIZE                             1
#define AVR32_USBC_UHINTE                                   0x00000410
#define AVR32_USBC_UHINTECLR                                0x00000414
#define AVR32_USBC_UHINTECLR_DCONNIEC                                0
#define AVR32_USBC_UHINTECLR_DCONNIEC_MASK                  0x00000001
#define AVR32_USBC_UHINTECLR_DCONNIEC_OFFSET                         0
#define AVR32_USBC_UHINTECLR_DCONNIEC_SIZE                           1
#define AVR32_USBC_UHINTECLR_DDISCIEC                                1
#define AVR32_USBC_UHINTECLR_DDISCIEC_MASK                  0x00000002
#define AVR32_USBC_UHINTECLR_DDISCIEC_OFFSET                         1
#define AVR32_USBC_UHINTECLR_DDISCIEC_SIZE                           1
#define AVR32_USBC_UHINTECLR_HSOFIEC                                 5
#define AVR32_USBC_UHINTECLR_HSOFIEC_MASK                   0x00000020
#define AVR32_USBC_UHINTECLR_HSOFIEC_OFFSET                          5
#define AVR32_USBC_UHINTECLR_HSOFIEC_SIZE                            1
#define AVR32_USBC_UHINTECLR_HWUPIEC                                 6
#define AVR32_USBC_UHINTECLR_HWUPIEC_MASK                   0x00000040
#define AVR32_USBC_UHINTECLR_HWUPIEC_OFFSET                          6
#define AVR32_USBC_UHINTECLR_HWUPIEC_SIZE                            1
#define AVR32_USBC_UHINTECLR_MASK                           0x0000ff7f
#define AVR32_USBC_UHINTECLR_P0INTEC                                 8
#define AVR32_USBC_UHINTECLR_P0INTEC_MASK                   0x00000100
#define AVR32_USBC_UHINTECLR_P0INTEC_OFFSET                          8
#define AVR32_USBC_UHINTECLR_P0INTEC_SIZE                            1
#define AVR32_USBC_UHINTECLR_P1INTEC                                 9
#define AVR32_USBC_UHINTECLR_P1INTEC_MASK                   0x00000200
#define AVR32_USBC_UHINTECLR_P1INTEC_OFFSET                          9
#define AVR32_USBC_UHINTECLR_P1INTEC_SIZE                            1
#define AVR32_USBC_UHINTECLR_P2INTEC                                10
#define AVR32_USBC_UHINTECLR_P2INTEC_MASK                   0x00000400
#define AVR32_USBC_UHINTECLR_P2INTEC_OFFSET                         10
#define AVR32_USBC_UHINTECLR_P2INTEC_SIZE                            1
#define AVR32_USBC_UHINTECLR_P3INTEC                                11
#define AVR32_USBC_UHINTECLR_P3INTEC_MASK                   0x00000800
#define AVR32_USBC_UHINTECLR_P3INTEC_OFFSET                         11
#define AVR32_USBC_UHINTECLR_P3INTEC_SIZE                            1
#define AVR32_USBC_UHINTECLR_P4INTEC                                12
#define AVR32_USBC_UHINTECLR_P4INTEC_MASK                   0x00001000
#define AVR32_USBC_UHINTECLR_P4INTEC_OFFSET                         12
#define AVR32_USBC_UHINTECLR_P4INTEC_SIZE                            1
#define AVR32_USBC_UHINTECLR_P5INTEC                                13
#define AVR32_USBC_UHINTECLR_P5INTEC_MASK                   0x00002000
#define AVR32_USBC_UHINTECLR_P5INTEC_OFFSET                         13
#define AVR32_USBC_UHINTECLR_P5INTEC_SIZE                            1
#define AVR32_USBC_UHINTECLR_P6INTEC                                14
#define AVR32_USBC_UHINTECLR_P6INTEC_MASK                   0x00004000
#define AVR32_USBC_UHINTECLR_P6INTEC_OFFSET                         14
#define AVR32_USBC_UHINTECLR_P6INTEC_SIZE                            1
#define AVR32_USBC_UHINTECLR_P7INTEC                                15
#define AVR32_USBC_UHINTECLR_P7INTEC_MASK                   0x00008000
#define AVR32_USBC_UHINTECLR_P7INTEC_OFFSET                         15
#define AVR32_USBC_UHINTECLR_P7INTEC_SIZE                            1
#define AVR32_USBC_UHINTECLR_RESETVALUE                     0x00000000
#define AVR32_USBC_UHINTECLR_RSMEDIEC                                3
#define AVR32_USBC_UHINTECLR_RSMEDIEC_MASK                  0x00000008
#define AVR32_USBC_UHINTECLR_RSMEDIEC_OFFSET                         3
#define AVR32_USBC_UHINTECLR_RSMEDIEC_SIZE                           1
#define AVR32_USBC_UHINTECLR_RSTIEC                                  2
#define AVR32_USBC_UHINTECLR_RSTIEC_MASK                    0x00000004
#define AVR32_USBC_UHINTECLR_RSTIEC_OFFSET                           2
#define AVR32_USBC_UHINTECLR_RSTIEC_SIZE                             1
#define AVR32_USBC_UHINTECLR_RXRSMIEC                                4
#define AVR32_USBC_UHINTECLR_RXRSMIEC_MASK                  0x00000010
#define AVR32_USBC_UHINTECLR_RXRSMIEC_OFFSET                         4
#define AVR32_USBC_UHINTECLR_RXRSMIEC_SIZE                           1
#define AVR32_USBC_UHINTESET                                0x00000418
#define AVR32_USBC_UHINTESET_DCONNIES                                0
#define AVR32_USBC_UHINTESET_DCONNIES_MASK                  0x00000001
#define AVR32_USBC_UHINTESET_DCONNIES_OFFSET                         0
#define AVR32_USBC_UHINTESET_DCONNIES_SIZE                           1
#define AVR32_USBC_UHINTESET_DDISCIES                                1
#define AVR32_USBC_UHINTESET_DDISCIES_MASK                  0x00000002
#define AVR32_USBC_UHINTESET_DDISCIES_OFFSET                         1
#define AVR32_USBC_UHINTESET_DDISCIES_SIZE                           1
#define AVR32_USBC_UHINTESET_HSOFIES                                 5
#define AVR32_USBC_UHINTESET_HSOFIES_MASK                   0x00000020
#define AVR32_USBC_UHINTESET_HSOFIES_OFFSET                          5
#define AVR32_USBC_UHINTESET_HSOFIES_SIZE                            1
#define AVR32_USBC_UHINTESET_HWUPIES                                 6
#define AVR32_USBC_UHINTESET_HWUPIES_MASK                   0x00000040
#define AVR32_USBC_UHINTESET_HWUPIES_OFFSET                          6
#define AVR32_USBC_UHINTESET_HWUPIES_SIZE                            1
#define AVR32_USBC_UHINTESET_MASK                           0x0000ff7f
#define AVR32_USBC_UHINTESET_P0INTES                                 8
#define AVR32_USBC_UHINTESET_P0INTES_MASK                   0x00000100
#define AVR32_USBC_UHINTESET_P0INTES_OFFSET                          8
#define AVR32_USBC_UHINTESET_P0INTES_SIZE                            1
#define AVR32_USBC_UHINTESET_P1INTES                                 9
#define AVR32_USBC_UHINTESET_P1INTES_MASK                   0x00000200
#define AVR32_USBC_UHINTESET_P1INTES_OFFSET                          9
#define AVR32_USBC_UHINTESET_P1INTES_SIZE                            1
#define AVR32_USBC_UHINTESET_P2INTES                                10
#define AVR32_USBC_UHINTESET_P2INTES_MASK                   0x00000400
#define AVR32_USBC_UHINTESET_P2INTES_OFFSET                         10
#define AVR32_USBC_UHINTESET_P2INTES_SIZE                            1
#define AVR32_USBC_UHINTESET_P3INTES                                11
#define AVR32_USBC_UHINTESET_P3INTES_MASK                   0x00000800
#define AVR32_USBC_UHINTESET_P3INTES_OFFSET                         11
#define AVR32_USBC_UHINTESET_P3INTES_SIZE                            1
#define AVR32_USBC_UHINTESET_P4INTES                                12
#define AVR32_USBC_UHINTESET_P4INTES_MASK                   0x00001000
#define AVR32_USBC_UHINTESET_P4INTES_OFFSET                         12
#define AVR32_USBC_UHINTESET_P4INTES_SIZE                            1
#define AVR32_USBC_UHINTESET_P5INTES                                13
#define AVR32_USBC_UHINTESET_P5INTES_MASK                   0x00002000
#define AVR32_USBC_UHINTESET_P5INTES_OFFSET                         13
#define AVR32_USBC_UHINTESET_P5INTES_SIZE                            1
#define AVR32_USBC_UHINTESET_P6INTES                                14
#define AVR32_USBC_UHINTESET_P6INTES_MASK                   0x00004000
#define AVR32_USBC_UHINTESET_P6INTES_OFFSET                         14
#define AVR32_USBC_UHINTESET_P6INTES_SIZE                            1
#define AVR32_USBC_UHINTESET_P7INTES                                15
#define AVR32_USBC_UHINTESET_P7INTES_MASK                   0x00008000
#define AVR32_USBC_UHINTESET_P7INTES_OFFSET                         15
#define AVR32_USBC_UHINTESET_P7INTES_SIZE                            1
#define AVR32_USBC_UHINTESET_RESETVALUE                     0x00000000
#define AVR32_USBC_UHINTESET_RSMEDIES                                3
#define AVR32_USBC_UHINTESET_RSMEDIES_MASK                  0x00000008
#define AVR32_USBC_UHINTESET_RSMEDIES_OFFSET                         3
#define AVR32_USBC_UHINTESET_RSMEDIES_SIZE                           1
#define AVR32_USBC_UHINTESET_RSTIES                                  2
#define AVR32_USBC_UHINTESET_RSTIES_MASK                    0x00000004
#define AVR32_USBC_UHINTESET_RSTIES_OFFSET                           2
#define AVR32_USBC_UHINTESET_RSTIES_SIZE                             1
#define AVR32_USBC_UHINTESET_RXRSMIES                                4
#define AVR32_USBC_UHINTESET_RXRSMIES_MASK                  0x00000010
#define AVR32_USBC_UHINTESET_RXRSMIES_OFFSET                         4
#define AVR32_USBC_UHINTESET_RXRSMIES_SIZE                           1
#define AVR32_USBC_UHINTE_DCONNIE                                    0
#define AVR32_USBC_UHINTE_DCONNIE_MASK                      0x00000001
#define AVR32_USBC_UHINTE_DCONNIE_OFFSET                             0
#define AVR32_USBC_UHINTE_DCONNIE_SIZE                               1
#define AVR32_USBC_UHINTE_DDISCIE                                    1
#define AVR32_USBC_UHINTE_DDISCIE_MASK                      0x00000002
#define AVR32_USBC_UHINTE_DDISCIE_OFFSET                             1
#define AVR32_USBC_UHINTE_DDISCIE_SIZE                               1
#define AVR32_USBC_UHINTE_HSOFIE                                     5
#define AVR32_USBC_UHINTE_HSOFIE_MASK                       0x00000020
#define AVR32_USBC_UHINTE_HSOFIE_OFFSET                              5
#define AVR32_USBC_UHINTE_HSOFIE_SIZE                                1
#define AVR32_USBC_UHINTE_HWUPIE                                     6
#define AVR32_USBC_UHINTE_HWUPIE_MASK                       0x00000040
#define AVR32_USBC_UHINTE_HWUPIE_OFFSET                              6
#define AVR32_USBC_UHINTE_HWUPIE_SIZE                                1
#define AVR32_USBC_UHINTE_MASK                              0x0000ff7f
#define AVR32_USBC_UHINTE_P0INTE                                     8
#define AVR32_USBC_UHINTE_P0INTE_MASK                       0x00000100
#define AVR32_USBC_UHINTE_P0INTE_OFFSET                              8
#define AVR32_USBC_UHINTE_P0INTE_SIZE                                1
#define AVR32_USBC_UHINTE_P1INTE                                     9
#define AVR32_USBC_UHINTE_P1INTE_MASK                       0x00000200
#define AVR32_USBC_UHINTE_P1INTE_OFFSET                              9
#define AVR32_USBC_UHINTE_P1INTE_SIZE                                1
#define AVR32_USBC_UHINTE_P2INTE                                    10
#define AVR32_USBC_UHINTE_P2INTE_MASK                       0x00000400
#define AVR32_USBC_UHINTE_P2INTE_OFFSET                             10
#define AVR32_USBC_UHINTE_P2INTE_SIZE                                1
#define AVR32_USBC_UHINTE_P3INTE                                    11
#define AVR32_USBC_UHINTE_P3INTE_MASK                       0x00000800
#define AVR32_USBC_UHINTE_P3INTE_OFFSET                             11
#define AVR32_USBC_UHINTE_P3INTE_SIZE                                1
#define AVR32_USBC_UHINTE_P4INTE                                    12
#define AVR32_USBC_UHINTE_P4INTE_MASK                       0x00001000
#define AVR32_USBC_UHINTE_P4INTE_OFFSET                             12
#define AVR32_USBC_UHINTE_P4INTE_SIZE                                1
#define AVR32_USBC_UHINTE_P5INTE                                    13
#define AVR32_USBC_UHINTE_P5INTE_MASK                       0x00002000
#define AVR32_USBC_UHINTE_P5INTE_OFFSET                             13
#define AVR32_USBC_UHINTE_P5INTE_SIZE                                1
#define AVR32_USBC_UHINTE_P6INTE                                    14
#define AVR32_USBC_UHINTE_P6INTE_MASK                       0x00004000
#define AVR32_USBC_UHINTE_P6INTE_OFFSET                             14
#define AVR32_USBC_UHINTE_P6INTE_SIZE                                1
#define AVR32_USBC_UHINTE_P7INTE                                    15
#define AVR32_USBC_UHINTE_P7INTE_MASK                       0x00008000
#define AVR32_USBC_UHINTE_P7INTE_OFFSET                             15
#define AVR32_USBC_UHINTE_P7INTE_SIZE                                1
#define AVR32_USBC_UHINTE_RESETVALUE                        0x00000000
#define AVR32_USBC_UHINTE_RSMEDIE                                    3
#define AVR32_USBC_UHINTE_RSMEDIE_MASK                      0x00000008
#define AVR32_USBC_UHINTE_RSMEDIE_OFFSET                             3
#define AVR32_USBC_UHINTE_RSMEDIE_SIZE                               1
#define AVR32_USBC_UHINTE_RSTIE                                      2
#define AVR32_USBC_UHINTE_RSTIE_MASK                        0x00000004
#define AVR32_USBC_UHINTE_RSTIE_OFFSET                               2
#define AVR32_USBC_UHINTE_RSTIE_SIZE                                 1
#define AVR32_USBC_UHINTE_RXRSMIE                                    4
#define AVR32_USBC_UHINTE_RXRSMIE_MASK                      0x00000010
#define AVR32_USBC_UHINTE_RXRSMIE_OFFSET                             4
#define AVR32_USBC_UHINTE_RXRSMIE_SIZE                               1
#define AVR32_USBC_UHINTSET                                 0x0000040c
#define AVR32_USBC_UHINTSET_DCONNIS                                  0
#define AVR32_USBC_UHINTSET_DCONNIS_MASK                    0x00000001
#define AVR32_USBC_UHINTSET_DCONNIS_OFFSET                           0
#define AVR32_USBC_UHINTSET_DCONNIS_SIZE                             1
#define AVR32_USBC_UHINTSET_DDISCIS                                  1
#define AVR32_USBC_UHINTSET_DDISCIS_MASK                    0x00000002
#define AVR32_USBC_UHINTSET_DDISCIS_OFFSET                           1
#define AVR32_USBC_UHINTSET_DDISCIS_SIZE                             1
#define AVR32_USBC_UHINTSET_HSOFIS                                   5
#define AVR32_USBC_UHINTSET_HSOFIS_MASK                     0x00000020
#define AVR32_USBC_UHINTSET_HSOFIS_OFFSET                            5
#define AVR32_USBC_UHINTSET_HSOFIS_SIZE                              1
#define AVR32_USBC_UHINTSET_HWUPIS                                   6
#define AVR32_USBC_UHINTSET_HWUPIS_MASK                     0x00000040
#define AVR32_USBC_UHINTSET_HWUPIS_OFFSET                            6
#define AVR32_USBC_UHINTSET_HWUPIS_SIZE                              1
#define AVR32_USBC_UHINTSET_MASK                            0x0000007f
#define AVR32_USBC_UHINTSET_RESETVALUE                      0x00000000
#define AVR32_USBC_UHINTSET_RSMEDIS                                  3
#define AVR32_USBC_UHINTSET_RSMEDIS_MASK                    0x00000008
#define AVR32_USBC_UHINTSET_RSMEDIS_OFFSET                           3
#define AVR32_USBC_UHINTSET_RSMEDIS_SIZE                             1
#define AVR32_USBC_UHINTSET_RSTIS                                    2
#define AVR32_USBC_UHINTSET_RSTIS_MASK                      0x00000004
#define AVR32_USBC_UHINTSET_RSTIS_OFFSET                             2
#define AVR32_USBC_UHINTSET_RSTIS_SIZE                               1
#define AVR32_USBC_UHINTSET_RXRSMIS                                  4
#define AVR32_USBC_UHINTSET_RXRSMIS_MASK                    0x00000010
#define AVR32_USBC_UHINTSET_RXRSMIS_OFFSET                           4
#define AVR32_USBC_UHINTSET_RXRSMIS_SIZE                             1
#define AVR32_USBC_UHINT_DCONNI                                      0
#define AVR32_USBC_UHINT_DCONNI_MASK                        0x00000001
#define AVR32_USBC_UHINT_DCONNI_OFFSET                               0
#define AVR32_USBC_UHINT_DCONNI_SIZE                                 1
#define AVR32_USBC_UHINT_DDISCI                                      1
#define AVR32_USBC_UHINT_DDISCI_MASK                        0x00000002
#define AVR32_USBC_UHINT_DDISCI_OFFSET                               1
#define AVR32_USBC_UHINT_DDISCI_SIZE                                 1
#define AVR32_USBC_UHINT_HSOFI                                       5
#define AVR32_USBC_UHINT_HSOFI_MASK                         0x00000020
#define AVR32_USBC_UHINT_HSOFI_OFFSET                                5
#define AVR32_USBC_UHINT_HSOFI_SIZE                                  1
#define AVR32_USBC_UHINT_HWUPI                                       6
#define AVR32_USBC_UHINT_HWUPI_MASK                         0x00000040
#define AVR32_USBC_UHINT_HWUPI_OFFSET                                6
#define AVR32_USBC_UHINT_HWUPI_SIZE                                  1
#define AVR32_USBC_UHINT_MASK                               0x00007f7f
#define AVR32_USBC_UHINT_P0INT                                       8
#define AVR32_USBC_UHINT_P0INT_MASK                         0x00000100
#define AVR32_USBC_UHINT_P0INT_OFFSET                                8
#define AVR32_USBC_UHINT_P0INT_SIZE                                  1
#define AVR32_USBC_UHINT_P1INT                                       9
#define AVR32_USBC_UHINT_P1INT_MASK                         0x00000200
#define AVR32_USBC_UHINT_P1INT_OFFSET                                9
#define AVR32_USBC_UHINT_P1INT_SIZE                                  1
#define AVR32_USBC_UHINT_P2INT                                      10
#define AVR32_USBC_UHINT_P2INT_MASK                         0x00000400
#define AVR32_USBC_UHINT_P2INT_OFFSET                               10
#define AVR32_USBC_UHINT_P2INT_SIZE                                  1
#define AVR32_USBC_UHINT_P3INT                                      11
#define AVR32_USBC_UHINT_P3INT_MASK                         0x00000800
#define AVR32_USBC_UHINT_P3INT_OFFSET                               11
#define AVR32_USBC_UHINT_P3INT_SIZE                                  1
#define AVR32_USBC_UHINT_P4INT                                      12
#define AVR32_USBC_UHINT_P4INT_MASK                         0x00001000
#define AVR32_USBC_UHINT_P4INT_OFFSET                               12
#define AVR32_USBC_UHINT_P4INT_SIZE                                  1
#define AVR32_USBC_UHINT_P5INT                                      13
#define AVR32_USBC_UHINT_P5INT_MASK                         0x00002000
#define AVR32_USBC_UHINT_P5INT_OFFSET                               13
#define AVR32_USBC_UHINT_P5INT_SIZE                                  1
#define AVR32_USBC_UHINT_P6INT                                      14
#define AVR32_USBC_UHINT_P6INT_MASK                         0x00004000
#define AVR32_USBC_UHINT_P6INT_OFFSET                               14
#define AVR32_USBC_UHINT_P6INT_SIZE                                  1
#define AVR32_USBC_UHINT_RESETVALUE                         0x00000000
#define AVR32_USBC_UHINT_RSMEDI                                      3
#define AVR32_USBC_UHINT_RSMEDI_MASK                        0x00000008
#define AVR32_USBC_UHINT_RSMEDI_OFFSET                               3
#define AVR32_USBC_UHINT_RSMEDI_SIZE                                 1
#define AVR32_USBC_UHINT_RSTI                                        2
#define AVR32_USBC_UHINT_RSTI_MASK                          0x00000004
#define AVR32_USBC_UHINT_RSTI_OFFSET                                 2
#define AVR32_USBC_UHINT_RSTI_SIZE                                   1
#define AVR32_USBC_UHINT_RXRSMI                                      4
#define AVR32_USBC_UHINT_RXRSMI_MASK                        0x00000010
#define AVR32_USBC_UHINT_RXRSMI_OFFSET                               4
#define AVR32_USBC_UHINT_RXRSMI_SIZE                                 1
#define AVR32_USBC_UIDE                                             24
#define AVR32_USBC_UIDE_MASK                                0x01000000
#define AVR32_USBC_UIDE_OFFSET                                      24
#define AVR32_USBC_UIDE_SIZE                                         1
#define AVR32_USBC_UIMOD                                            25
#define AVR32_USBC_UIMOD_MASK                               0x02000000
#define AVR32_USBC_UIMOD_OFFSET                                     25
#define AVR32_USBC_UIMOD_SIZE                                        1
#define AVR32_USBC_UNAME1                                   0x00000824
#define AVR32_USBC_UNAME1_MASK                              0xffffffff
#define AVR32_USBC_UNAME1_OFFSET                                     0
#define AVR32_USBC_UNAME1_RESETVALUE                        0x48555342
#define AVR32_USBC_UNAME1_SIZE                                      32
#define AVR32_USBC_UNAME1_UNAME1                                     0
#define AVR32_USBC_UNAME1_UNAME1_MASK                       0xffffffff
#define AVR32_USBC_UNAME1_UNAME1_OFFSET                              0
#define AVR32_USBC_UNAME1_UNAME1_SIZE                               32
#define AVR32_USBC_UNAME2                                   0x00000828
#define AVR32_USBC_UNAME2_MASK                              0xffffffff
#define AVR32_USBC_UNAME2_OFFSET                                     0
#define AVR32_USBC_UNAME2_RESETVALUE                        0x004f5447
#define AVR32_USBC_UNAME2_SIZE                                      32
#define AVR32_USBC_UNAME2_UNAME2                                     0
#define AVR32_USBC_UNAME2_UNAME2_MASK                       0xffffffff
#define AVR32_USBC_UNAME2_UNAME2_OFFSET                              0
#define AVR32_USBC_UNAME2_UNAME2_SIZE                               32
#define AVR32_USBC_UNLOCK                                           22
#define AVR32_USBC_UNLOCK_MASK                              0x00400000
#define AVR32_USBC_UNLOCK_OFFSET                                    22
#define AVR32_USBC_UNLOCK_SIZE                                       1
#define AVR32_USBC_UPCFG0                                   0x00000500
#define AVR32_USBC_UPCFG0_BINTERVAL                                 24
#define AVR32_USBC_UPCFG0_BINTERVAL_MASK                    0xff000000
#define AVR32_USBC_UPCFG0_BINTERVAL_OFFSET                          24
#define AVR32_USBC_UPCFG0_BINTERVAL_SIZE                             8
#define AVR32_USBC_UPCFG0_MASK                              0xff103374
#define AVR32_USBC_UPCFG0_PBK                                        2
#define AVR32_USBC_UPCFG0_PBK_DOUBLE                        0x00000001
#define AVR32_USBC_UPCFG0_PBK_MASK                          0x00000004
#define AVR32_USBC_UPCFG0_PBK_OFFSET                                 2
#define AVR32_USBC_UPCFG0_PBK_SINGLE                        0x00000000
#define AVR32_USBC_UPCFG0_PBK_SIZE                                   1
#define AVR32_USBC_UPCFG0_PINGEN                                    20
#define AVR32_USBC_UPCFG0_PINGEN_MASK                       0x00100000
#define AVR32_USBC_UPCFG0_PINGEN_OFFSET                             20
#define AVR32_USBC_UPCFG0_PINGEN_SIZE                                1
#define AVR32_USBC_UPCFG0_PSIZE                                      4
#define AVR32_USBC_UPCFG0_PSIZE_1024                        0x00000007
#define AVR32_USBC_UPCFG0_PSIZE_128                         0x00000004
#define AVR32_USBC_UPCFG0_PSIZE_16                          0x00000001
#define AVR32_USBC_UPCFG0_PSIZE_256                         0x00000005
#define AVR32_USBC_UPCFG0_PSIZE_32                          0x00000002
#define AVR32_USBC_UPCFG0_PSIZE_512                         0x00000006
#define AVR32_USBC_UPCFG0_PSIZE_64                          0x00000003
#define AVR32_USBC_UPCFG0_PSIZE_8                           0x00000000
#define AVR32_USBC_UPCFG0_PSIZE_MASK                        0x00000070
#define AVR32_USBC_UPCFG0_PSIZE_OFFSET                               4
#define AVR32_USBC_UPCFG0_PSIZE_SIZE                                 3
#define AVR32_USBC_UPCFG0_PTOKEN                                     8
#define AVR32_USBC_UPCFG0_PTOKEN_IN                         0x00000001
#define AVR32_USBC_UPCFG0_PTOKEN_MASK                       0x00000300
#define AVR32_USBC_UPCFG0_PTOKEN_OFFSET                              8
#define AVR32_USBC_UPCFG0_PTOKEN_OUT                        0x00000002
#define AVR32_USBC_UPCFG0_PTOKEN_SETUP                      0x00000000
#define AVR32_USBC_UPCFG0_PTOKEN_SIZE                                2
#define AVR32_USBC_UPCFG0_PTYPE                                     12
#define AVR32_USBC_UPCFG0_PTYPE_BULK                        0x00000002
#define AVR32_USBC_UPCFG0_PTYPE_CONTROL                     0x00000000
#define AVR32_USBC_UPCFG0_PTYPE_INTERRUPT                   0x00000003
#define AVR32_USBC_UPCFG0_PTYPE_ISOCHRONOUS                 0x00000001
#define AVR32_USBC_UPCFG0_PTYPE_MASK                        0x00003000
#define AVR32_USBC_UPCFG0_PTYPE_OFFSET                              12
#define AVR32_USBC_UPCFG0_PTYPE_SIZE                                 2
#define AVR32_USBC_UPCFG0_RESETVALUE                        0x00000000
#define AVR32_USBC_UPCFG1                                   0x00000504
#define AVR32_USBC_UPCFG1_BINTERVAL                                 24
#define AVR32_USBC_UPCFG1_BINTERVAL_MASK                    0xff000000
#define AVR32_USBC_UPCFG1_BINTERVAL_OFFSET                          24
#define AVR32_USBC_UPCFG1_BINTERVAL_SIZE                             8
#define AVR32_USBC_UPCFG1_MASK                              0xff103374
#define AVR32_USBC_UPCFG1_PBK                                        2
#define AVR32_USBC_UPCFG1_PBK_DOUBLE                        0x00000001
#define AVR32_USBC_UPCFG1_PBK_MASK                          0x00000004
#define AVR32_USBC_UPCFG1_PBK_OFFSET                                 2
#define AVR32_USBC_UPCFG1_PBK_SINGLE                        0x00000000
#define AVR32_USBC_UPCFG1_PBK_SIZE                                   1
#define AVR32_USBC_UPCFG1_PINGEN                                    20
#define AVR32_USBC_UPCFG1_PINGEN_MASK                       0x00100000
#define AVR32_USBC_UPCFG1_PINGEN_OFFSET                             20
#define AVR32_USBC_UPCFG1_PINGEN_SIZE                                1
#define AVR32_USBC_UPCFG1_PSIZE                                      4
#define AVR32_USBC_UPCFG1_PSIZE_1024                        0x00000007
#define AVR32_USBC_UPCFG1_PSIZE_128                         0x00000004
#define AVR32_USBC_UPCFG1_PSIZE_16                          0x00000001
#define AVR32_USBC_UPCFG1_PSIZE_256                         0x00000005
#define AVR32_USBC_UPCFG1_PSIZE_32                          0x00000002
#define AVR32_USBC_UPCFG1_PSIZE_512                         0x00000006
#define AVR32_USBC_UPCFG1_PSIZE_64                          0x00000003
#define AVR32_USBC_UPCFG1_PSIZE_8                           0x00000000
#define AVR32_USBC_UPCFG1_PSIZE_MASK                        0x00000070
#define AVR32_USBC_UPCFG1_PSIZE_OFFSET                               4
#define AVR32_USBC_UPCFG1_PSIZE_SIZE                                 3
#define AVR32_USBC_UPCFG1_PTOKEN                                     8
#define AVR32_USBC_UPCFG1_PTOKEN_IN                         0x00000001
#define AVR32_USBC_UPCFG1_PTOKEN_MASK                       0x00000300
#define AVR32_USBC_UPCFG1_PTOKEN_OFFSET                              8
#define AVR32_USBC_UPCFG1_PTOKEN_OUT                        0x00000002
#define AVR32_USBC_UPCFG1_PTOKEN_SETUP                      0x00000000
#define AVR32_USBC_UPCFG1_PTOKEN_SIZE                                2
#define AVR32_USBC_UPCFG1_PTYPE                                     12
#define AVR32_USBC_UPCFG1_PTYPE_BULK                        0x00000002
#define AVR32_USBC_UPCFG1_PTYPE_CONTROL                     0x00000000
#define AVR32_USBC_UPCFG1_PTYPE_INTERRUPT                   0x00000003
#define AVR32_USBC_UPCFG1_PTYPE_ISOCHRONOUS                 0x00000001
#define AVR32_USBC_UPCFG1_PTYPE_MASK                        0x00003000
#define AVR32_USBC_UPCFG1_PTYPE_OFFSET                              12
#define AVR32_USBC_UPCFG1_PTYPE_SIZE                                 2
#define AVR32_USBC_UPCFG1_RESETVALUE                        0x00000000
#define AVR32_USBC_UPCFG2                                   0x00000508
#define AVR32_USBC_UPCFG2_BINTERVAL                                 24
#define AVR32_USBC_UPCFG2_BINTERVAL_MASK                    0xff000000
#define AVR32_USBC_UPCFG2_BINTERVAL_OFFSET                          24
#define AVR32_USBC_UPCFG2_BINTERVAL_SIZE                             8
#define AVR32_USBC_UPCFG2_MASK                              0xff103374
#define AVR32_USBC_UPCFG2_PBK                                        2
#define AVR32_USBC_UPCFG2_PBK_DOUBLE                        0x00000001
#define AVR32_USBC_UPCFG2_PBK_MASK                          0x00000004
#define AVR32_USBC_UPCFG2_PBK_OFFSET                                 2
#define AVR32_USBC_UPCFG2_PBK_SINGLE                        0x00000000
#define AVR32_USBC_UPCFG2_PBK_SIZE                                   1
#define AVR32_USBC_UPCFG2_PINGEN                                    20
#define AVR32_USBC_UPCFG2_PINGEN_MASK                       0x00100000
#define AVR32_USBC_UPCFG2_PINGEN_OFFSET                             20
#define AVR32_USBC_UPCFG2_PINGEN_SIZE                                1
#define AVR32_USBC_UPCFG2_PSIZE                                      4
#define AVR32_USBC_UPCFG2_PSIZE_1024                        0x00000007
#define AVR32_USBC_UPCFG2_PSIZE_128                         0x00000004
#define AVR32_USBC_UPCFG2_PSIZE_16                          0x00000001
#define AVR32_USBC_UPCFG2_PSIZE_256                         0x00000005
#define AVR32_USBC_UPCFG2_PSIZE_32                          0x00000002
#define AVR32_USBC_UPCFG2_PSIZE_512                         0x00000006
#define AVR32_USBC_UPCFG2_PSIZE_64                          0x00000003
#define AVR32_USBC_UPCFG2_PSIZE_8                           0x00000000
#define AVR32_USBC_UPCFG2_PSIZE_MASK                        0x00000070
#define AVR32_USBC_UPCFG2_PSIZE_OFFSET                               4
#define AVR32_USBC_UPCFG2_PSIZE_SIZE                                 3
#define AVR32_USBC_UPCFG2_PTOKEN                                     8
#define AVR32_USBC_UPCFG2_PTOKEN_IN                         0x00000001
#define AVR32_USBC_UPCFG2_PTOKEN_MASK                       0x00000300
#define AVR32_USBC_UPCFG2_PTOKEN_OFFSET                              8
#define AVR32_USBC_UPCFG2_PTOKEN_OUT                        0x00000002
#define AVR32_USBC_UPCFG2_PTOKEN_SETUP                      0x00000000
#define AVR32_USBC_UPCFG2_PTOKEN_SIZE                                2
#define AVR32_USBC_UPCFG2_PTYPE                                     12
#define AVR32_USBC_UPCFG2_PTYPE_BULK                        0x00000002
#define AVR32_USBC_UPCFG2_PTYPE_CONTROL                     0x00000000
#define AVR32_USBC_UPCFG2_PTYPE_INTERRUPT                   0x00000003
#define AVR32_USBC_UPCFG2_PTYPE_ISOCHRONOUS                 0x00000001
#define AVR32_USBC_UPCFG2_PTYPE_MASK                        0x00003000
#define AVR32_USBC_UPCFG2_PTYPE_OFFSET                              12
#define AVR32_USBC_UPCFG2_PTYPE_SIZE                                 2
#define AVR32_USBC_UPCFG2_RESETVALUE                        0x00000000
#define AVR32_USBC_UPCFG3                                   0x0000050c
#define AVR32_USBC_UPCFG3_BINTERVAL                                 24
#define AVR32_USBC_UPCFG3_BINTERVAL_MASK                    0xff000000
#define AVR32_USBC_UPCFG3_BINTERVAL_OFFSET                          24
#define AVR32_USBC_UPCFG3_BINTERVAL_SIZE                             8
#define AVR32_USBC_UPCFG3_MASK                              0xff103374
#define AVR32_USBC_UPCFG3_PBK                                        2
#define AVR32_USBC_UPCFG3_PBK_DOUBLE                        0x00000001
#define AVR32_USBC_UPCFG3_PBK_MASK                          0x00000004
#define AVR32_USBC_UPCFG3_PBK_OFFSET                                 2
#define AVR32_USBC_UPCFG3_PBK_SINGLE                        0x00000000
#define AVR32_USBC_UPCFG3_PBK_SIZE                                   1
#define AVR32_USBC_UPCFG3_PINGEN                                    20
#define AVR32_USBC_UPCFG3_PINGEN_MASK                       0x00100000
#define AVR32_USBC_UPCFG3_PINGEN_OFFSET                             20
#define AVR32_USBC_UPCFG3_PINGEN_SIZE                                1
#define AVR32_USBC_UPCFG3_PSIZE                                      4
#define AVR32_USBC_UPCFG3_PSIZE_MASK                        0x00000070
#define AVR32_USBC_UPCFG3_PSIZE_OFFSET                               4
#define AVR32_USBC_UPCFG3_PSIZE_SIZE                                 3
#define AVR32_USBC_UPCFG3_PTOKEN                                     8
#define AVR32_USBC_UPCFG3_PTOKEN_IN                         0x00000001
#define AVR32_USBC_UPCFG3_PTOKEN_MASK                       0x00000300
#define AVR32_USBC_UPCFG3_PTOKEN_OFFSET                              8
#define AVR32_USBC_UPCFG3_PTOKEN_OUT                        0x00000002
#define AVR32_USBC_UPCFG3_PTOKEN_SETUP                      0x00000000
#define AVR32_USBC_UPCFG3_PTOKEN_SIZE                                2
#define AVR32_USBC_UPCFG3_PTYPE                                     12
#define AVR32_USBC_UPCFG3_PTYPE_BULK                        0x00000002
#define AVR32_USBC_UPCFG3_PTYPE_CONTROL                     0x00000000
#define AVR32_USBC_UPCFG3_PTYPE_INTERRUPT                   0x00000003
#define AVR32_USBC_UPCFG3_PTYPE_ISOCHRONOUS                 0x00000001
#define AVR32_USBC_UPCFG3_PTYPE_MASK                        0x00003000
#define AVR32_USBC_UPCFG3_PTYPE_OFFSET                              12
#define AVR32_USBC_UPCFG3_PTYPE_SIZE                                 2
#define AVR32_USBC_UPCFG3_RESETVALUE                        0x00000000
#define AVR32_USBC_UPCFG4                                   0x00000510
#define AVR32_USBC_UPCFG4_BINTERVAL                                 24
#define AVR32_USBC_UPCFG4_BINTERVAL_MASK                    0xff000000
#define AVR32_USBC_UPCFG4_BINTERVAL_OFFSET                          24
#define AVR32_USBC_UPCFG4_BINTERVAL_SIZE                             8
#define AVR32_USBC_UPCFG4_MASK                              0xff103374
#define AVR32_USBC_UPCFG4_PBK                                        2
#define AVR32_USBC_UPCFG4_PBK_DOUBLE                        0x00000001
#define AVR32_USBC_UPCFG4_PBK_MASK                          0x00000004
#define AVR32_USBC_UPCFG4_PBK_OFFSET                                 2
#define AVR32_USBC_UPCFG4_PBK_SINGLE                        0x00000000
#define AVR32_USBC_UPCFG4_PBK_SIZE                                   1
#define AVR32_USBC_UPCFG4_PINGEN                                    20
#define AVR32_USBC_UPCFG4_PINGEN_MASK                       0x00100000
#define AVR32_USBC_UPCFG4_PINGEN_OFFSET                             20
#define AVR32_USBC_UPCFG4_PINGEN_SIZE                                1
#define AVR32_USBC_UPCFG4_PSIZE                                      4
#define AVR32_USBC_UPCFG4_PSIZE_1024                        0x00000007
#define AVR32_USBC_UPCFG4_PSIZE_128                         0x00000004
#define AVR32_USBC_UPCFG4_PSIZE_16                          0x00000001
#define AVR32_USBC_UPCFG4_PSIZE_256                         0x00000005
#define AVR32_USBC_UPCFG4_PSIZE_32                          0x00000002
#define AVR32_USBC_UPCFG4_PSIZE_512                         0x00000006
#define AVR32_USBC_UPCFG4_PSIZE_64                          0x00000003
#define AVR32_USBC_UPCFG4_PSIZE_8                           0x00000000
#define AVR32_USBC_UPCFG4_PSIZE_MASK                        0x00000070
#define AVR32_USBC_UPCFG4_PSIZE_OFFSET                               4
#define AVR32_USBC_UPCFG4_PSIZE_SIZE                                 3
#define AVR32_USBC_UPCFG4_PTOKEN                                     8
#define AVR32_USBC_UPCFG4_PTOKEN_IN                         0x00000001
#define AVR32_USBC_UPCFG4_PTOKEN_MASK                       0x00000300
#define AVR32_USBC_UPCFG4_PTOKEN_OFFSET                              8
#define AVR32_USBC_UPCFG4_PTOKEN_OUT                        0x00000002
#define AVR32_USBC_UPCFG4_PTOKEN_SETUP                      0x00000000
#define AVR32_USBC_UPCFG4_PTOKEN_SIZE                                2
#define AVR32_USBC_UPCFG4_PTYPE                                     12
#define AVR32_USBC_UPCFG4_PTYPE_BULK                        0x00000002
#define AVR32_USBC_UPCFG4_PTYPE_CONTROL                     0x00000000
#define AVR32_USBC_UPCFG4_PTYPE_INTERRUPT                   0x00000003
#define AVR32_USBC_UPCFG4_PTYPE_ISOCHRONOUS                 0x00000001
#define AVR32_USBC_UPCFG4_PTYPE_MASK                        0x00003000
#define AVR32_USBC_UPCFG4_PTYPE_OFFSET                              12
#define AVR32_USBC_UPCFG4_PTYPE_SIZE                                 2
#define AVR32_USBC_UPCFG4_RESETVALUE                        0x00000000
#define AVR32_USBC_UPCFG5                                   0x00000514
#define AVR32_USBC_UPCFG5_BINTERVAL                                 24
#define AVR32_USBC_UPCFG5_BINTERVAL_MASK                    0xff000000
#define AVR32_USBC_UPCFG5_BINTERVAL_OFFSET                          24
#define AVR32_USBC_UPCFG5_BINTERVAL_SIZE                             8
#define AVR32_USBC_UPCFG5_MASK                              0xff103374
#define AVR32_USBC_UPCFG5_PBK                                        2
#define AVR32_USBC_UPCFG5_PBK_DOUBLE                        0x00000001
#define AVR32_USBC_UPCFG5_PBK_MASK                          0x00000004
#define AVR32_USBC_UPCFG5_PBK_OFFSET                                 2
#define AVR32_USBC_UPCFG5_PBK_SINGLE                        0x00000000
#define AVR32_USBC_UPCFG5_PBK_SIZE                                   1
#define AVR32_USBC_UPCFG5_PINGEN                                    20
#define AVR32_USBC_UPCFG5_PINGEN_MASK                       0x00100000
#define AVR32_USBC_UPCFG5_PINGEN_OFFSET                             20
#define AVR32_USBC_UPCFG5_PINGEN_SIZE                                1
#define AVR32_USBC_UPCFG5_PSIZE                                      4
#define AVR32_USBC_UPCFG5_PSIZE_1024                        0x00000007
#define AVR32_USBC_UPCFG5_PSIZE_128                         0x00000004
#define AVR32_USBC_UPCFG5_PSIZE_16                          0x00000001
#define AVR32_USBC_UPCFG5_PSIZE_256                         0x00000005
#define AVR32_USBC_UPCFG5_PSIZE_32                          0x00000002
#define AVR32_USBC_UPCFG5_PSIZE_512                         0x00000006
#define AVR32_USBC_UPCFG5_PSIZE_64                          0x00000003
#define AVR32_USBC_UPCFG5_PSIZE_8                           0x00000000
#define AVR32_USBC_UPCFG5_PSIZE_MASK                        0x00000070
#define AVR32_USBC_UPCFG5_PSIZE_OFFSET                               4
#define AVR32_USBC_UPCFG5_PSIZE_SIZE                                 3
#define AVR32_USBC_UPCFG5_PTOKEN                                     8
#define AVR32_USBC_UPCFG5_PTOKEN_IN                         0x00000001
#define AVR32_USBC_UPCFG5_PTOKEN_MASK                       0x00000300
#define AVR32_USBC_UPCFG5_PTOKEN_OFFSET                              8
#define AVR32_USBC_UPCFG5_PTOKEN_OUT                        0x00000002
#define AVR32_USBC_UPCFG5_PTOKEN_SETUP                      0x00000000
#define AVR32_USBC_UPCFG5_PTOKEN_SIZE                                2
#define AVR32_USBC_UPCFG5_PTYPE                                     12
#define AVR32_USBC_UPCFG5_PTYPE_BULK                        0x00000002
#define AVR32_USBC_UPCFG5_PTYPE_CONTROL                     0x00000000
#define AVR32_USBC_UPCFG5_PTYPE_INTERRUPT                   0x00000003
#define AVR32_USBC_UPCFG5_PTYPE_ISOCHRONOUS                 0x00000001
#define AVR32_USBC_UPCFG5_PTYPE_MASK                        0x00003000
#define AVR32_USBC_UPCFG5_PTYPE_OFFSET                              12
#define AVR32_USBC_UPCFG5_PTYPE_SIZE                                 2
#define AVR32_USBC_UPCFG5_RESETVALUE                        0x00000000
#define AVR32_USBC_UPCFG6                                   0x00000518
#define AVR32_USBC_UPCFG6_BINTERVAL                                 24
#define AVR32_USBC_UPCFG6_BINTERVAL_MASK                    0xff000000
#define AVR32_USBC_UPCFG6_BINTERVAL_OFFSET                          24
#define AVR32_USBC_UPCFG6_BINTERVAL_SIZE                             8
#define AVR32_USBC_UPCFG6_MASK                              0xff103374
#define AVR32_USBC_UPCFG6_PBK                                        2
#define AVR32_USBC_UPCFG6_PBK_DOUBLE                        0x00000001
#define AVR32_USBC_UPCFG6_PBK_MASK                          0x00000004
#define AVR32_USBC_UPCFG6_PBK_OFFSET                                 2
#define AVR32_USBC_UPCFG6_PBK_SINGLE                        0x00000000
#define AVR32_USBC_UPCFG6_PBK_SIZE                                   1
#define AVR32_USBC_UPCFG6_PINGEN                                    20
#define AVR32_USBC_UPCFG6_PINGEN_MASK                       0x00100000
#define AVR32_USBC_UPCFG6_PINGEN_OFFSET                             20
#define AVR32_USBC_UPCFG6_PINGEN_SIZE                                1
#define AVR32_USBC_UPCFG6_PSIZE                                      4
#define AVR32_USBC_UPCFG6_PSIZE_1024                        0x00000007
#define AVR32_USBC_UPCFG6_PSIZE_128                         0x00000004
#define AVR32_USBC_UPCFG6_PSIZE_16                          0x00000001
#define AVR32_USBC_UPCFG6_PSIZE_256                         0x00000005
#define AVR32_USBC_UPCFG6_PSIZE_32                          0x00000002
#define AVR32_USBC_UPCFG6_PSIZE_512                         0x00000006
#define AVR32_USBC_UPCFG6_PSIZE_64                          0x00000003
#define AVR32_USBC_UPCFG6_PSIZE_8                           0x00000000
#define AVR32_USBC_UPCFG6_PSIZE_MASK                        0x00000070
#define AVR32_USBC_UPCFG6_PSIZE_OFFSET                               4
#define AVR32_USBC_UPCFG6_PSIZE_SIZE                                 3
#define AVR32_USBC_UPCFG6_PTOKEN                                     8
#define AVR32_USBC_UPCFG6_PTOKEN_IN                         0x00000001
#define AVR32_USBC_UPCFG6_PTOKEN_MASK                       0x00000300
#define AVR32_USBC_UPCFG6_PTOKEN_OFFSET                              8
#define AVR32_USBC_UPCFG6_PTOKEN_OUT                        0x00000002
#define AVR32_USBC_UPCFG6_PTOKEN_SETUP                      0x00000000
#define AVR32_USBC_UPCFG6_PTOKEN_SIZE                                2
#define AVR32_USBC_UPCFG6_PTYPE                                     12
#define AVR32_USBC_UPCFG6_PTYPE_BULK                        0x00000002
#define AVR32_USBC_UPCFG6_PTYPE_CONTROL                     0x00000000
#define AVR32_USBC_UPCFG6_PTYPE_INTERRUPT                   0x00000003
#define AVR32_USBC_UPCFG6_PTYPE_ISOCHRONOUS                 0x00000001
#define AVR32_USBC_UPCFG6_PTYPE_MASK                        0x00003000
#define AVR32_USBC_UPCFG6_PTYPE_OFFSET                              12
#define AVR32_USBC_UPCFG6_PTYPE_SIZE                                 2
#define AVR32_USBC_UPCFG6_RESETVALUE                        0x00000000
#define AVR32_USBC_UPCFG7                                   0x0000051c
#define AVR32_USBC_UPCFG7_BINTERVAL                                 24
#define AVR32_USBC_UPCFG7_BINTERVAL_MASK                    0xff000000
#define AVR32_USBC_UPCFG7_BINTERVAL_OFFSET                          24
#define AVR32_USBC_UPCFG7_BINTERVAL_SIZE                             8
#define AVR32_USBC_UPCFG7_MASK                              0xff103374
#define AVR32_USBC_UPCFG7_PBK                                        2
#define AVR32_USBC_UPCFG7_PBK_MASK                          0x00000004
#define AVR32_USBC_UPCFG7_PBK_OFFSET                                 2
#define AVR32_USBC_UPCFG7_PBK_SIZE                                   1
#define AVR32_USBC_UPCFG7_PINGEN                                    20
#define AVR32_USBC_UPCFG7_PINGEN_MASK                       0x00100000
#define AVR32_USBC_UPCFG7_PINGEN_OFFSET                             20
#define AVR32_USBC_UPCFG7_PINGEN_SIZE                                1
#define AVR32_USBC_UPCFG7_PSIZE                                      4
#define AVR32_USBC_UPCFG7_PSIZE_MASK                        0x00000070
#define AVR32_USBC_UPCFG7_PSIZE_OFFSET                               4
#define AVR32_USBC_UPCFG7_PSIZE_SIZE                                 3
#define AVR32_USBC_UPCFG7_PTOKEN                                     8
#define AVR32_USBC_UPCFG7_PTOKEN_MASK                       0x00000300
#define AVR32_USBC_UPCFG7_PTOKEN_OFFSET                              8
#define AVR32_USBC_UPCFG7_PTOKEN_SIZE                                2
#define AVR32_USBC_UPCFG7_PTYPE                                     12
#define AVR32_USBC_UPCFG7_PTYPE_MASK                        0x00003000
#define AVR32_USBC_UPCFG7_PTYPE_OFFSET                              12
#define AVR32_USBC_UPCFG7_PTYPE_SIZE                                 2
#define AVR32_USBC_UPCFG7_RESETVALUE                        0x00000000
#define AVR32_USBC_UPCON0                                   0x000005c0
#define AVR32_USBC_UPCON0CLR                                0x00000620
#define AVR32_USBC_UPCON0CLR_ERRORFIEC                               5
#define AVR32_USBC_UPCON0CLR_ERRORFIEC_MASK                 0x00000020
#define AVR32_USBC_UPCON0CLR_ERRORFIEC_OFFSET                        5
#define AVR32_USBC_UPCON0CLR_ERRORFIEC_SIZE                          1
#define AVR32_USBC_UPCON0CLR_FIFOCONC                               14
#define AVR32_USBC_UPCON0CLR_FIFOCONC_MASK                  0x00004000
#define AVR32_USBC_UPCON0CLR_FIFOCONC_OFFSET                        14
#define AVR32_USBC_UPCON0CLR_FIFOCONC_SIZE                           1
#define AVR32_USBC_UPCON0CLR_INITBKC                                19
#define AVR32_USBC_UPCON0CLR_INITBKC_MASK                   0x00080000
#define AVR32_USBC_UPCON0CLR_INITBKC_OFFSET                         19
#define AVR32_USBC_UPCON0CLR_INITBKC_SIZE                            1
#define AVR32_USBC_UPCON0CLR_INITDTGLC                              18
#define AVR32_USBC_UPCON0CLR_INITDTGLC_MASK                 0x00040000
#define AVR32_USBC_UPCON0CLR_INITDTGLC_OFFSET                       18
#define AVR32_USBC_UPCON0CLR_INITDTGLC_SIZE                          1
#define AVR32_USBC_UPCON0CLR_MASK                           0x000e547f
#define AVR32_USBC_UPCON0CLR_NAKEDEC                                 4
#define AVR32_USBC_UPCON0CLR_NAKEDEC_MASK                   0x00000010
#define AVR32_USBC_UPCON0CLR_NAKEDEC_OFFSET                          4
#define AVR32_USBC_UPCON0CLR_NAKEDEC_SIZE                            1
#define AVR32_USBC_UPCON0CLR_NBUSYBKEC                              12
#define AVR32_USBC_UPCON0CLR_NBUSYBKEC_MASK                 0x00001000
#define AVR32_USBC_UPCON0CLR_NBUSYBKEC_OFFSET                       12
#define AVR32_USBC_UPCON0CLR_NBUSYBKEC_SIZE                          1
#define AVR32_USBC_UPCON0CLR_PERREC                                  3
#define AVR32_USBC_UPCON0CLR_PERREC_MASK                    0x00000008
#define AVR32_USBC_UPCON0CLR_PERREC_OFFSET                           3
#define AVR32_USBC_UPCON0CLR_PERREC_SIZE                             1
#define AVR32_USBC_UPCON0CLR_PFREEZEC                               17
#define AVR32_USBC_UPCON0CLR_PFREEZEC_MASK                  0x00020000
#define AVR32_USBC_UPCON0CLR_PFREEZEC_OFFSET                        17
#define AVR32_USBC_UPCON0CLR_PFREEZEC_SIZE                           1
#define AVR32_USBC_UPCON0CLR_RAMACCEREC                             10
#define AVR32_USBC_UPCON0CLR_RAMACCEREC_MASK                0x00000400
#define AVR32_USBC_UPCON0CLR_RAMACCEREC_OFFSET                      10
#define AVR32_USBC_UPCON0CLR_RAMACCEREC_SIZE                         1
#define AVR32_USBC_UPCON0CLR_RESETVALUE                     0x00000000
#define AVR32_USBC_UPCON0CLR_RXINEC                                  0
#define AVR32_USBC_UPCON0CLR_RXINEC_MASK                    0x00000001
#define AVR32_USBC_UPCON0CLR_RXINEC_OFFSET                           0
#define AVR32_USBC_UPCON0CLR_RXINEC_SIZE                             1
#define AVR32_USBC_UPCON0CLR_RXSTALLDEC                              6
#define AVR32_USBC_UPCON0CLR_RXSTALLDEC_MASK                0x00000040
#define AVR32_USBC_UPCON0CLR_RXSTALLDEC_OFFSET                       6
#define AVR32_USBC_UPCON0CLR_RXSTALLDEC_SIZE                         1
#define AVR32_USBC_UPCON0CLR_TXOUTEC                                 1
#define AVR32_USBC_UPCON0CLR_TXOUTEC_MASK                   0x00000002
#define AVR32_USBC_UPCON0CLR_TXOUTEC_OFFSET                          1
#define AVR32_USBC_UPCON0CLR_TXOUTEC_SIZE                            1
#define AVR32_USBC_UPCON0CLR_TXSTPEC                                 2
#define AVR32_USBC_UPCON0CLR_TXSTPEC_MASK                   0x00000004
#define AVR32_USBC_UPCON0CLR_TXSTPEC_OFFSET                          2
#define AVR32_USBC_UPCON0CLR_TXSTPEC_SIZE                            1
#define AVR32_USBC_UPCON0SET                                0x000005f0
#define AVR32_USBC_UPCON0SET_ERRORFIES                               5
#define AVR32_USBC_UPCON0SET_ERRORFIES_MASK                 0x00000020
#define AVR32_USBC_UPCON0SET_ERRORFIES_OFFSET                        5
#define AVR32_USBC_UPCON0SET_ERRORFIES_SIZE                          1
#define AVR32_USBC_UPCON0SET_FIFOCONS                               14
#define AVR32_USBC_UPCON0SET_FIFOCONS_MASK                  0x00004000
#define AVR32_USBC_UPCON0SET_FIFOCONS_OFFSET                        14
#define AVR32_USBC_UPCON0SET_FIFOCONS_SIZE                           1
#define AVR32_USBC_UPCON0SET_INITBKS                                19
#define AVR32_USBC_UPCON0SET_INITBKS_MASK                   0x00080000
#define AVR32_USBC_UPCON0SET_INITBKS_OFFSET                         19
#define AVR32_USBC_UPCON0SET_INITBKS_SIZE                            1
#define AVR32_USBC_UPCON0SET_INITDTGLS                              18
#define AVR32_USBC_UPCON0SET_INITDTGLS_MASK                 0x00040000
#define AVR32_USBC_UPCON0SET_INITDTGLS_OFFSET                       18
#define AVR32_USBC_UPCON0SET_INITDTGLS_SIZE                          1
#define AVR32_USBC_UPCON0SET_MASK                           0x000e547f
#define AVR32_USBC_UPCON0SET_NAKEDES                                 4
#define AVR32_USBC_UPCON0SET_NAKEDES_MASK                   0x00000010
#define AVR32_USBC_UPCON0SET_NAKEDES_OFFSET                          4
#define AVR32_USBC_UPCON0SET_NAKEDES_SIZE                            1
#define AVR32_USBC_UPCON0SET_NBUSYBKES                              12
#define AVR32_USBC_UPCON0SET_NBUSYBKES_MASK                 0x00001000
#define AVR32_USBC_UPCON0SET_NBUSYBKES_OFFSET                       12
#define AVR32_USBC_UPCON0SET_NBUSYBKES_SIZE                          1
#define AVR32_USBC_UPCON0SET_PERRES                                  3
#define AVR32_USBC_UPCON0SET_PERRES_MASK                    0x00000008
#define AVR32_USBC_UPCON0SET_PERRES_OFFSET                           3
#define AVR32_USBC_UPCON0SET_PERRES_SIZE                             1
#define AVR32_USBC_UPCON0SET_PFREEZES                               17
#define AVR32_USBC_UPCON0SET_PFREEZES_MASK                  0x00020000
#define AVR32_USBC_UPCON0SET_PFREEZES_OFFSET                        17
#define AVR32_USBC_UPCON0SET_PFREEZES_SIZE                           1
#define AVR32_USBC_UPCON0SET_RAMACCERES                             10
#define AVR32_USBC_UPCON0SET_RAMACCERES_MASK                0x00000400
#define AVR32_USBC_UPCON0SET_RAMACCERES_OFFSET                      10
#define AVR32_USBC_UPCON0SET_RAMACCERES_SIZE                         1
#define AVR32_USBC_UPCON0SET_RESETVALUE                     0x00000000
#define AVR32_USBC_UPCON0SET_RXINES                                  0
#define AVR32_USBC_UPCON0SET_RXINES_MASK                    0x00000001
#define AVR32_USBC_UPCON0SET_RXINES_OFFSET                           0
#define AVR32_USBC_UPCON0SET_RXINES_SIZE                             1
#define AVR32_USBC_UPCON0SET_RXSTALLDES                              6
#define AVR32_USBC_UPCON0SET_RXSTALLDES_MASK                0x00000040
#define AVR32_USBC_UPCON0SET_RXSTALLDES_OFFSET                       6
#define AVR32_USBC_UPCON0SET_RXSTALLDES_SIZE                         1
#define AVR32_USBC_UPCON0SET_TXOUTES                                 1
#define AVR32_USBC_UPCON0SET_TXOUTES_MASK                   0x00000002
#define AVR32_USBC_UPCON0SET_TXOUTES_OFFSET                          1
#define AVR32_USBC_UPCON0SET_TXOUTES_SIZE                            1
#define AVR32_USBC_UPCON0SET_TXSTPES                                 2
#define AVR32_USBC_UPCON0SET_TXSTPES_MASK                   0x00000004
#define AVR32_USBC_UPCON0SET_TXSTPES_OFFSET                          2
#define AVR32_USBC_UPCON0SET_TXSTPES_SIZE                            1
#define AVR32_USBC_UPCON0_ERRORFIE                                   5
#define AVR32_USBC_UPCON0_ERRORFIE_MASK                     0x00000020
#define AVR32_USBC_UPCON0_ERRORFIE_OFFSET                            5
#define AVR32_USBC_UPCON0_ERRORFIE_SIZE                              1
#define AVR32_USBC_UPCON0_FIFOCON                                   14
#define AVR32_USBC_UPCON0_FIFOCON_MASK                      0x00004000
#define AVR32_USBC_UPCON0_FIFOCON_OFFSET                            14
#define AVR32_USBC_UPCON0_FIFOCON_SIZE                               1
#define AVR32_USBC_UPCON0_INITBK                                    19
#define AVR32_USBC_UPCON0_INITBK_MASK                       0x00080000
#define AVR32_USBC_UPCON0_INITBK_OFFSET                             19
#define AVR32_USBC_UPCON0_INITBK_SIZE                                1
#define AVR32_USBC_UPCON0_INITDTGL                                  18
#define AVR32_USBC_UPCON0_INITDTGL_MASK                     0x00040000
#define AVR32_USBC_UPCON0_INITDTGL_OFFSET                           18
#define AVR32_USBC_UPCON0_INITDTGL_SIZE                              1
#define AVR32_USBC_UPCON0_MASK                              0x000e547f
#define AVR32_USBC_UPCON0_NAKEDE                                     4
#define AVR32_USBC_UPCON0_NAKEDE_MASK                       0x00000010
#define AVR32_USBC_UPCON0_NAKEDE_OFFSET                              4
#define AVR32_USBC_UPCON0_NAKEDE_SIZE                                1
#define AVR32_USBC_UPCON0_NBUSYBKE                                  12
#define AVR32_USBC_UPCON0_NBUSYBKE_MASK                     0x00001000
#define AVR32_USBC_UPCON0_NBUSYBKE_OFFSET                           12
#define AVR32_USBC_UPCON0_NBUSYBKE_SIZE                              1
#define AVR32_USBC_UPCON0_PERRE                                      3
#define AVR32_USBC_UPCON0_PERRE_MASK                        0x00000008
#define AVR32_USBC_UPCON0_PERRE_OFFSET                               3
#define AVR32_USBC_UPCON0_PERRE_SIZE                                 1
#define AVR32_USBC_UPCON0_PFREEZE                                   17
#define AVR32_USBC_UPCON0_PFREEZE_MASK                      0x00020000
#define AVR32_USBC_UPCON0_PFREEZE_OFFSET                            17
#define AVR32_USBC_UPCON0_PFREEZE_SIZE                               1
#define AVR32_USBC_UPCON0_RAMACCERE                                 10
#define AVR32_USBC_UPCON0_RAMACCERE_MASK                    0x00000400
#define AVR32_USBC_UPCON0_RAMACCERE_OFFSET                          10
#define AVR32_USBC_UPCON0_RAMACCERE_SIZE                             1
#define AVR32_USBC_UPCON0_RESETVALUE                        0x00000000
#define AVR32_USBC_UPCON0_RXINE                                      0
#define AVR32_USBC_UPCON0_RXINE_MASK                        0x00000001
#define AVR32_USBC_UPCON0_RXINE_OFFSET                               0
#define AVR32_USBC_UPCON0_RXINE_SIZE                                 1
#define AVR32_USBC_UPCON0_RXSTALLDE                                  6
#define AVR32_USBC_UPCON0_RXSTALLDE_MASK                    0x00000040
#define AVR32_USBC_UPCON0_RXSTALLDE_OFFSET                           6
#define AVR32_USBC_UPCON0_RXSTALLDE_SIZE                             1
#define AVR32_USBC_UPCON0_TXOUTE                                     1
#define AVR32_USBC_UPCON0_TXOUTE_MASK                       0x00000002
#define AVR32_USBC_UPCON0_TXOUTE_OFFSET                              1
#define AVR32_USBC_UPCON0_TXOUTE_SIZE                                1
#define AVR32_USBC_UPCON0_TXSTPE                                     2
#define AVR32_USBC_UPCON0_TXSTPE_MASK                       0x00000004
#define AVR32_USBC_UPCON0_TXSTPE_OFFSET                              2
#define AVR32_USBC_UPCON0_TXSTPE_SIZE                                1
#define AVR32_USBC_UPCON1                                   0x000005c4
#define AVR32_USBC_UPCON1CLR                                0x00000624
#define AVR32_USBC_UPCON1CLR_ERRORFIEC                               5
#define AVR32_USBC_UPCON1CLR_ERRORFIEC_MASK                 0x00000020
#define AVR32_USBC_UPCON1CLR_ERRORFIEC_OFFSET                        5
#define AVR32_USBC_UPCON1CLR_ERRORFIEC_SIZE                          1
#define AVR32_USBC_UPCON1CLR_FIFOCONC                               14
#define AVR32_USBC_UPCON1CLR_FIFOCONC_MASK                  0x00004000
#define AVR32_USBC_UPCON1CLR_FIFOCONC_OFFSET                        14
#define AVR32_USBC_UPCON1CLR_FIFOCONC_SIZE                           1
#define AVR32_USBC_UPCON1CLR_INITBKC                                19
#define AVR32_USBC_UPCON1CLR_INITBKC_MASK                   0x00080000
#define AVR32_USBC_UPCON1CLR_INITBKC_OFFSET                         19
#define AVR32_USBC_UPCON1CLR_INITBKC_SIZE                            1
#define AVR32_USBC_UPCON1CLR_INITDTGLC                              18
#define AVR32_USBC_UPCON1CLR_INITDTGLC_MASK                 0x00040000
#define AVR32_USBC_UPCON1CLR_INITDTGLC_OFFSET                       18
#define AVR32_USBC_UPCON1CLR_INITDTGLC_SIZE                          1
#define AVR32_USBC_UPCON1CLR_MASK                           0x000e547f
#define AVR32_USBC_UPCON1CLR_NAKEDEC                                 4
#define AVR32_USBC_UPCON1CLR_NAKEDEC_MASK                   0x00000010
#define AVR32_USBC_UPCON1CLR_NAKEDEC_OFFSET                          4
#define AVR32_USBC_UPCON1CLR_NAKEDEC_SIZE                            1
#define AVR32_USBC_UPCON1CLR_NBUSYBKEC                              12
#define AVR32_USBC_UPCON1CLR_NBUSYBKEC_MASK                 0x00001000
#define AVR32_USBC_UPCON1CLR_NBUSYBKEC_OFFSET                       12
#define AVR32_USBC_UPCON1CLR_NBUSYBKEC_SIZE                          1
#define AVR32_USBC_UPCON1CLR_PERREC                                  3
#define AVR32_USBC_UPCON1CLR_PERREC_MASK                    0x00000008
#define AVR32_USBC_UPCON1CLR_PERREC_OFFSET                           3
#define AVR32_USBC_UPCON1CLR_PERREC_SIZE                             1
#define AVR32_USBC_UPCON1CLR_PFREEZEC                               17
#define AVR32_USBC_UPCON1CLR_PFREEZEC_MASK                  0x00020000
#define AVR32_USBC_UPCON1CLR_PFREEZEC_OFFSET                        17
#define AVR32_USBC_UPCON1CLR_PFREEZEC_SIZE                           1
#define AVR32_USBC_UPCON1CLR_RAMACCEREC                             10
#define AVR32_USBC_UPCON1CLR_RAMACCEREC_MASK                0x00000400
#define AVR32_USBC_UPCON1CLR_RAMACCEREC_OFFSET                      10
#define AVR32_USBC_UPCON1CLR_RAMACCEREC_SIZE                         1
#define AVR32_USBC_UPCON1CLR_RESETVALUE                     0x00000000
#define AVR32_USBC_UPCON1CLR_RXINEC                                  0
#define AVR32_USBC_UPCON1CLR_RXINEC_MASK                    0x00000001
#define AVR32_USBC_UPCON1CLR_RXINEC_OFFSET                           0
#define AVR32_USBC_UPCON1CLR_RXINEC_SIZE                             1
#define AVR32_USBC_UPCON1CLR_RXSTALLDEC                              6
#define AVR32_USBC_UPCON1CLR_RXSTALLDEC_MASK                0x00000040
#define AVR32_USBC_UPCON1CLR_RXSTALLDEC_OFFSET                       6
#define AVR32_USBC_UPCON1CLR_RXSTALLDEC_SIZE                         1
#define AVR32_USBC_UPCON1CLR_TXOUTEC                                 1
#define AVR32_USBC_UPCON1CLR_TXOUTEC_MASK                   0x00000002
#define AVR32_USBC_UPCON1CLR_TXOUTEC_OFFSET                          1
#define AVR32_USBC_UPCON1CLR_TXOUTEC_SIZE                            1
#define AVR32_USBC_UPCON1CLR_TXSTPEC                                 2
#define AVR32_USBC_UPCON1CLR_TXSTPEC_MASK                   0x00000004
#define AVR32_USBC_UPCON1CLR_TXSTPEC_OFFSET                          2
#define AVR32_USBC_UPCON1CLR_TXSTPEC_SIZE                            1
#define AVR32_USBC_UPCON1SET                                0x000005f4
#define AVR32_USBC_UPCON1SET_ERRORFIES                               5
#define AVR32_USBC_UPCON1SET_ERRORFIES_MASK                 0x00000020
#define AVR32_USBC_UPCON1SET_ERRORFIES_OFFSET                        5
#define AVR32_USBC_UPCON1SET_ERRORFIES_SIZE                          1
#define AVR32_USBC_UPCON1SET_FIFOCONS                               14
#define AVR32_USBC_UPCON1SET_FIFOCONS_MASK                  0x00004000
#define AVR32_USBC_UPCON1SET_FIFOCONS_OFFSET                        14
#define AVR32_USBC_UPCON1SET_FIFOCONS_SIZE                           1
#define AVR32_USBC_UPCON1SET_INITBKS                                19
#define AVR32_USBC_UPCON1SET_INITBKS_MASK                   0x00080000
#define AVR32_USBC_UPCON1SET_INITBKS_OFFSET                         19
#define AVR32_USBC_UPCON1SET_INITBKS_SIZE                            1
#define AVR32_USBC_UPCON1SET_INITDTGLS                              18
#define AVR32_USBC_UPCON1SET_INITDTGLS_MASK                 0x00040000
#define AVR32_USBC_UPCON1SET_INITDTGLS_OFFSET                       18
#define AVR32_USBC_UPCON1SET_INITDTGLS_SIZE                          1
#define AVR32_USBC_UPCON1SET_MASK                           0x000e547f
#define AVR32_USBC_UPCON1SET_NAKEDES                                 4
#define AVR32_USBC_UPCON1SET_NAKEDES_MASK                   0x00000010
#define AVR32_USBC_UPCON1SET_NAKEDES_OFFSET                          4
#define AVR32_USBC_UPCON1SET_NAKEDES_SIZE                            1
#define AVR32_USBC_UPCON1SET_NBUSYBKES                              12
#define AVR32_USBC_UPCON1SET_NBUSYBKES_MASK                 0x00001000
#define AVR32_USBC_UPCON1SET_NBUSYBKES_OFFSET                       12
#define AVR32_USBC_UPCON1SET_NBUSYBKES_SIZE                          1
#define AVR32_USBC_UPCON1SET_PERRES                                  3
#define AVR32_USBC_UPCON1SET_PERRES_MASK                    0x00000008
#define AVR32_USBC_UPCON1SET_PERRES_OFFSET                           3
#define AVR32_USBC_UPCON1SET_PERRES_SIZE                             1
#define AVR32_USBC_UPCON1SET_PFREEZES                               17
#define AVR32_USBC_UPCON1SET_PFREEZES_MASK                  0x00020000
#define AVR32_USBC_UPCON1SET_PFREEZES_OFFSET                        17
#define AVR32_USBC_UPCON1SET_PFREEZES_SIZE                           1
#define AVR32_USBC_UPCON1SET_RAMACCERES                             10
#define AVR32_USBC_UPCON1SET_RAMACCERES_MASK                0x00000400
#define AVR32_USBC_UPCON1SET_RAMACCERES_OFFSET                      10
#define AVR32_USBC_UPCON1SET_RAMACCERES_SIZE                         1
#define AVR32_USBC_UPCON1SET_RESETVALUE                     0x00000000
#define AVR32_USBC_UPCON1SET_RXINES                                  0
#define AVR32_USBC_UPCON1SET_RXINES_MASK                    0x00000001
#define AVR32_USBC_UPCON1SET_RXINES_OFFSET                           0
#define AVR32_USBC_UPCON1SET_RXINES_SIZE                             1
#define AVR32_USBC_UPCON1SET_RXSTALLDES                              6
#define AVR32_USBC_UPCON1SET_RXSTALLDES_MASK                0x00000040
#define AVR32_USBC_UPCON1SET_RXSTALLDES_OFFSET                       6
#define AVR32_USBC_UPCON1SET_RXSTALLDES_SIZE                         1
#define AVR32_USBC_UPCON1SET_TXOUTES                                 1
#define AVR32_USBC_UPCON1SET_TXOUTES_MASK                   0x00000002
#define AVR32_USBC_UPCON1SET_TXOUTES_OFFSET                          1
#define AVR32_USBC_UPCON1SET_TXOUTES_SIZE                            1
#define AVR32_USBC_UPCON1SET_TXSTPES                                 2
#define AVR32_USBC_UPCON1SET_TXSTPES_MASK                   0x00000004
#define AVR32_USBC_UPCON1SET_TXSTPES_OFFSET                          2
#define AVR32_USBC_UPCON1SET_TXSTPES_SIZE                            1
#define AVR32_USBC_UPCON1_ERRORFIE                                   5
#define AVR32_USBC_UPCON1_ERRORFIE_MASK                     0x00000020
#define AVR32_USBC_UPCON1_ERRORFIE_OFFSET                            5
#define AVR32_USBC_UPCON1_ERRORFIE_SIZE                              1
#define AVR32_USBC_UPCON1_FIFOCON                                   14
#define AVR32_USBC_UPCON1_FIFOCON_MASK                      0x00004000
#define AVR32_USBC_UPCON1_FIFOCON_OFFSET                            14
#define AVR32_USBC_UPCON1_FIFOCON_SIZE                               1
#define AVR32_USBC_UPCON1_INITBK                                    19
#define AVR32_USBC_UPCON1_INITBK_MASK                       0x00080000
#define AVR32_USBC_UPCON1_INITBK_OFFSET                             19
#define AVR32_USBC_UPCON1_INITBK_SIZE                                1
#define AVR32_USBC_UPCON1_INITDTGL                                  18
#define AVR32_USBC_UPCON1_INITDTGL_MASK                     0x00040000
#define AVR32_USBC_UPCON1_INITDTGL_OFFSET                           18
#define AVR32_USBC_UPCON1_INITDTGL_SIZE                              1
#define AVR32_USBC_UPCON1_MASK                              0x000e547f
#define AVR32_USBC_UPCON1_NAKEDE                                     4
#define AVR32_USBC_UPCON1_NAKEDE_MASK                       0x00000010
#define AVR32_USBC_UPCON1_NAKEDE_OFFSET                              4
#define AVR32_USBC_UPCON1_NAKEDE_SIZE                                1
#define AVR32_USBC_UPCON1_NBUSYBKE                                  12
#define AVR32_USBC_UPCON1_NBUSYBKE_MASK                     0x00001000
#define AVR32_USBC_UPCON1_NBUSYBKE_OFFSET                           12
#define AVR32_USBC_UPCON1_NBUSYBKE_SIZE                              1
#define AVR32_USBC_UPCON1_PERRE                                      3
#define AVR32_USBC_UPCON1_PERRE_MASK                        0x00000008
#define AVR32_USBC_UPCON1_PERRE_OFFSET                               3
#define AVR32_USBC_UPCON1_PERRE_SIZE                                 1
#define AVR32_USBC_UPCON1_PFREEZE                                   17
#define AVR32_USBC_UPCON1_PFREEZE_MASK                      0x00020000
#define AVR32_USBC_UPCON1_PFREEZE_OFFSET                            17
#define AVR32_USBC_UPCON1_PFREEZE_SIZE                               1
#define AVR32_USBC_UPCON1_RAMACCERE                                 10
#define AVR32_USBC_UPCON1_RAMACCERE_MASK                    0x00000400
#define AVR32_USBC_UPCON1_RAMACCERE_OFFSET                          10
#define AVR32_USBC_UPCON1_RAMACCERE_SIZE                             1
#define AVR32_USBC_UPCON1_RESETVALUE                        0x00000000
#define AVR32_USBC_UPCON1_RXINE                                      0
#define AVR32_USBC_UPCON1_RXINE_MASK                        0x00000001
#define AVR32_USBC_UPCON1_RXINE_OFFSET                               0
#define AVR32_USBC_UPCON1_RXINE_SIZE                                 1
#define AVR32_USBC_UPCON1_RXSTALLDE                                  6
#define AVR32_USBC_UPCON1_RXSTALLDE_MASK                    0x00000040
#define AVR32_USBC_UPCON1_RXSTALLDE_OFFSET                           6
#define AVR32_USBC_UPCON1_RXSTALLDE_SIZE                             1
#define AVR32_USBC_UPCON1_TXOUTE                                     1
#define AVR32_USBC_UPCON1_TXOUTE_MASK                       0x00000002
#define AVR32_USBC_UPCON1_TXOUTE_OFFSET                              1
#define AVR32_USBC_UPCON1_TXOUTE_SIZE                                1
#define AVR32_USBC_UPCON1_TXSTPE                                     2
#define AVR32_USBC_UPCON1_TXSTPE_MASK                       0x00000004
#define AVR32_USBC_UPCON1_TXSTPE_OFFSET                              2
#define AVR32_USBC_UPCON1_TXSTPE_SIZE                                1
#define AVR32_USBC_UPCON2                                   0x000005c8
#define AVR32_USBC_UPCON2CLR                                0x00000628
#define AVR32_USBC_UPCON2CLR_ERRORFIEC                               5
#define AVR32_USBC_UPCON2CLR_ERRORFIEC_MASK                 0x00000020
#define AVR32_USBC_UPCON2CLR_ERRORFIEC_OFFSET                        5
#define AVR32_USBC_UPCON2CLR_ERRORFIEC_SIZE                          1
#define AVR32_USBC_UPCON2CLR_FIFOCONC                               14
#define AVR32_USBC_UPCON2CLR_FIFOCONC_MASK                  0x00004000
#define AVR32_USBC_UPCON2CLR_FIFOCONC_OFFSET                        14
#define AVR32_USBC_UPCON2CLR_FIFOCONC_SIZE                           1
#define AVR32_USBC_UPCON2CLR_INITBKC                                19
#define AVR32_USBC_UPCON2CLR_INITBKC_MASK                   0x00080000
#define AVR32_USBC_UPCON2CLR_INITBKC_OFFSET                         19
#define AVR32_USBC_UPCON2CLR_INITBKC_SIZE                            1
#define AVR32_USBC_UPCON2CLR_INITDTGLC                              18
#define AVR32_USBC_UPCON2CLR_INITDTGLC_MASK                 0x00040000
#define AVR32_USBC_UPCON2CLR_INITDTGLC_OFFSET                       18
#define AVR32_USBC_UPCON2CLR_INITDTGLC_SIZE                          1
#define AVR32_USBC_UPCON2CLR_MASK                           0x000e547f
#define AVR32_USBC_UPCON2CLR_NAKEDEC                                 4
#define AVR32_USBC_UPCON2CLR_NAKEDEC_MASK                   0x00000010
#define AVR32_USBC_UPCON2CLR_NAKEDEC_OFFSET                          4
#define AVR32_USBC_UPCON2CLR_NAKEDEC_SIZE                            1
#define AVR32_USBC_UPCON2CLR_NBUSYBKEC                              12
#define AVR32_USBC_UPCON2CLR_NBUSYBKEC_MASK                 0x00001000
#define AVR32_USBC_UPCON2CLR_NBUSYBKEC_OFFSET                       12
#define AVR32_USBC_UPCON2CLR_NBUSYBKEC_SIZE                          1
#define AVR32_USBC_UPCON2CLR_PERREC                                  3
#define AVR32_USBC_UPCON2CLR_PERREC_MASK                    0x00000008
#define AVR32_USBC_UPCON2CLR_PERREC_OFFSET                           3
#define AVR32_USBC_UPCON2CLR_PERREC_SIZE                             1
#define AVR32_USBC_UPCON2CLR_PFREEZEC                               17
#define AVR32_USBC_UPCON2CLR_PFREEZEC_MASK                  0x00020000
#define AVR32_USBC_UPCON2CLR_PFREEZEC_OFFSET                        17
#define AVR32_USBC_UPCON2CLR_PFREEZEC_SIZE                           1
#define AVR32_USBC_UPCON2CLR_RAMACCEREC                             10
#define AVR32_USBC_UPCON2CLR_RAMACCEREC_MASK                0x00000400
#define AVR32_USBC_UPCON2CLR_RAMACCEREC_OFFSET                      10
#define AVR32_USBC_UPCON2CLR_RAMACCEREC_SIZE                         1
#define AVR32_USBC_UPCON2CLR_RESETVALUE                     0x00000000
#define AVR32_USBC_UPCON2CLR_RXINEC                                  0
#define AVR32_USBC_UPCON2CLR_RXINEC_MASK                    0x00000001
#define AVR32_USBC_UPCON2CLR_RXINEC_OFFSET                           0
#define AVR32_USBC_UPCON2CLR_RXINEC_SIZE                             1
#define AVR32_USBC_UPCON2CLR_RXSTALLDEC                              6
#define AVR32_USBC_UPCON2CLR_RXSTALLDEC_MASK                0x00000040
#define AVR32_USBC_UPCON2CLR_RXSTALLDEC_OFFSET                       6
#define AVR32_USBC_UPCON2CLR_RXSTALLDEC_SIZE                         1
#define AVR32_USBC_UPCON2CLR_TXOUTEC                                 1
#define AVR32_USBC_UPCON2CLR_TXOUTEC_MASK                   0x00000002
#define AVR32_USBC_UPCON2CLR_TXOUTEC_OFFSET                          1
#define AVR32_USBC_UPCON2CLR_TXOUTEC_SIZE                            1
#define AVR32_USBC_UPCON2CLR_TXSTPEC                                 2
#define AVR32_USBC_UPCON2CLR_TXSTPEC_MASK                   0x00000004
#define AVR32_USBC_UPCON2CLR_TXSTPEC_OFFSET                          2
#define AVR32_USBC_UPCON2CLR_TXSTPEC_SIZE                            1
#define AVR32_USBC_UPCON2SET                                0x000005f8
#define AVR32_USBC_UPCON2SET_ERRORFIES                               5
#define AVR32_USBC_UPCON2SET_ERRORFIES_MASK                 0x00000020
#define AVR32_USBC_UPCON2SET_ERRORFIES_OFFSET                        5
#define AVR32_USBC_UPCON2SET_ERRORFIES_SIZE                          1
#define AVR32_USBC_UPCON2SET_FIFOCONS                               14
#define AVR32_USBC_UPCON2SET_FIFOCONS_MASK                  0x00004000
#define AVR32_USBC_UPCON2SET_FIFOCONS_OFFSET                        14
#define AVR32_USBC_UPCON2SET_FIFOCONS_SIZE                           1
#define AVR32_USBC_UPCON2SET_INITBKS                                19
#define AVR32_USBC_UPCON2SET_INITBKS_MASK                   0x00080000
#define AVR32_USBC_UPCON2SET_INITBKS_OFFSET                         19
#define AVR32_USBC_UPCON2SET_INITBKS_SIZE                            1
#define AVR32_USBC_UPCON2SET_INITDTGLS                              18
#define AVR32_USBC_UPCON2SET_INITDTGLS_MASK                 0x00040000
#define AVR32_USBC_UPCON2SET_INITDTGLS_OFFSET                       18
#define AVR32_USBC_UPCON2SET_INITDTGLS_SIZE                          1
#define AVR32_USBC_UPCON2SET_MASK                           0x000e547f
#define AVR32_USBC_UPCON2SET_NAKEDES                                 4
#define AVR32_USBC_UPCON2SET_NAKEDES_MASK                   0x00000010
#define AVR32_USBC_UPCON2SET_NAKEDES_OFFSET                          4
#define AVR32_USBC_UPCON2SET_NAKEDES_SIZE                            1
#define AVR32_USBC_UPCON2SET_NBUSYBKES                              12
#define AVR32_USBC_UPCON2SET_NBUSYBKES_MASK                 0x00001000
#define AVR32_USBC_UPCON2SET_NBUSYBKES_OFFSET                       12
#define AVR32_USBC_UPCON2SET_NBUSYBKES_SIZE                          1
#define AVR32_USBC_UPCON2SET_PERRES                                  3
#define AVR32_USBC_UPCON2SET_PERRES_MASK                    0x00000008
#define AVR32_USBC_UPCON2SET_PERRES_OFFSET                           3
#define AVR32_USBC_UPCON2SET_PERRES_SIZE                             1
#define AVR32_USBC_UPCON2SET_PFREEZES                               17
#define AVR32_USBC_UPCON2SET_PFREEZES_MASK                  0x00020000
#define AVR32_USBC_UPCON2SET_PFREEZES_OFFSET                        17
#define AVR32_USBC_UPCON2SET_PFREEZES_SIZE                           1
#define AVR32_USBC_UPCON2SET_RAMACCERES                             10
#define AVR32_USBC_UPCON2SET_RAMACCERES_MASK                0x00000400
#define AVR32_USBC_UPCON2SET_RAMACCERES_OFFSET                      10
#define AVR32_USBC_UPCON2SET_RAMACCERES_SIZE                         1
#define AVR32_USBC_UPCON2SET_RESETVALUE                     0x00000000
#define AVR32_USBC_UPCON2SET_RXINES                                  0
#define AVR32_USBC_UPCON2SET_RXINES_MASK                    0x00000001
#define AVR32_USBC_UPCON2SET_RXINES_OFFSET                           0
#define AVR32_USBC_UPCON2SET_RXINES_SIZE                             1
#define AVR32_USBC_UPCON2SET_RXSTALLDES                              6
#define AVR32_USBC_UPCON2SET_RXSTALLDES_MASK                0x00000040
#define AVR32_USBC_UPCON2SET_RXSTALLDES_OFFSET                       6
#define AVR32_USBC_UPCON2SET_RXSTALLDES_SIZE                         1
#define AVR32_USBC_UPCON2SET_TXOUTES                                 1
#define AVR32_USBC_UPCON2SET_TXOUTES_MASK                   0x00000002
#define AVR32_USBC_UPCON2SET_TXOUTES_OFFSET                          1
#define AVR32_USBC_UPCON2SET_TXOUTES_SIZE                            1
#define AVR32_USBC_UPCON2SET_TXSTPES                                 2
#define AVR32_USBC_UPCON2SET_TXSTPES_MASK                   0x00000004
#define AVR32_USBC_UPCON2SET_TXSTPES_OFFSET                          2
#define AVR32_USBC_UPCON2SET_TXSTPES_SIZE                            1
#define AVR32_USBC_UPCON2_ERRORFIE                                   5
#define AVR32_USBC_UPCON2_ERRORFIE_MASK                     0x00000020
#define AVR32_USBC_UPCON2_ERRORFIE_OFFSET                            5
#define AVR32_USBC_UPCON2_ERRORFIE_SIZE                              1
#define AVR32_USBC_UPCON2_FIFOCON                                   14
#define AVR32_USBC_UPCON2_FIFOCON_MASK                      0x00004000
#define AVR32_USBC_UPCON2_FIFOCON_OFFSET                            14
#define AVR32_USBC_UPCON2_FIFOCON_SIZE                               1
#define AVR32_USBC_UPCON2_INITBK                                    19
#define AVR32_USBC_UPCON2_INITBK_MASK                       0x00080000
#define AVR32_USBC_UPCON2_INITBK_OFFSET                             19
#define AVR32_USBC_UPCON2_INITBK_SIZE                                1
#define AVR32_USBC_UPCON2_INITDTGL                                  18
#define AVR32_USBC_UPCON2_INITDTGL_MASK                     0x00040000
#define AVR32_USBC_UPCON2_INITDTGL_OFFSET                           18
#define AVR32_USBC_UPCON2_INITDTGL_SIZE                              1
#define AVR32_USBC_UPCON2_MASK                              0x000e547f
#define AVR32_USBC_UPCON2_NAKEDE                                     4
#define AVR32_USBC_UPCON2_NAKEDE_MASK                       0x00000010
#define AVR32_USBC_UPCON2_NAKEDE_OFFSET                              4
#define AVR32_USBC_UPCON2_NAKEDE_SIZE                                1
#define AVR32_USBC_UPCON2_NBUSYBKE                                  12
#define AVR32_USBC_UPCON2_NBUSYBKE_MASK                     0x00001000
#define AVR32_USBC_UPCON2_NBUSYBKE_OFFSET                           12
#define AVR32_USBC_UPCON2_NBUSYBKE_SIZE                              1
#define AVR32_USBC_UPCON2_PERRE                                      3
#define AVR32_USBC_UPCON2_PERRE_MASK                        0x00000008
#define AVR32_USBC_UPCON2_PERRE_OFFSET                               3
#define AVR32_USBC_UPCON2_PERRE_SIZE                                 1
#define AVR32_USBC_UPCON2_PFREEZE                                   17
#define AVR32_USBC_UPCON2_PFREEZE_MASK                      0x00020000
#define AVR32_USBC_UPCON2_PFREEZE_OFFSET                            17
#define AVR32_USBC_UPCON2_PFREEZE_SIZE                               1
#define AVR32_USBC_UPCON2_RAMACCERE                                 10
#define AVR32_USBC_UPCON2_RAMACCERE_MASK                    0x00000400
#define AVR32_USBC_UPCON2_RAMACCERE_OFFSET                          10
#define AVR32_USBC_UPCON2_RAMACCERE_SIZE                             1
#define AVR32_USBC_UPCON2_RESETVALUE                        0x00000000
#define AVR32_USBC_UPCON2_RXINE                                      0
#define AVR32_USBC_UPCON2_RXINE_MASK                        0x00000001
#define AVR32_USBC_UPCON2_RXINE_OFFSET                               0
#define AVR32_USBC_UPCON2_RXINE_SIZE                                 1
#define AVR32_USBC_UPCON2_RXSTALLDE                                  6
#define AVR32_USBC_UPCON2_RXSTALLDE_MASK                    0x00000040
#define AVR32_USBC_UPCON2_RXSTALLDE_OFFSET                           6
#define AVR32_USBC_UPCON2_RXSTALLDE_SIZE                             1
#define AVR32_USBC_UPCON2_TXOUTE                                     1
#define AVR32_USBC_UPCON2_TXOUTE_MASK                       0x00000002
#define AVR32_USBC_UPCON2_TXOUTE_OFFSET                              1
#define AVR32_USBC_UPCON2_TXOUTE_SIZE                                1
#define AVR32_USBC_UPCON2_TXSTPE                                     2
#define AVR32_USBC_UPCON2_TXSTPE_MASK                       0x00000004
#define AVR32_USBC_UPCON2_TXSTPE_OFFSET                              2
#define AVR32_USBC_UPCON2_TXSTPE_SIZE                                1
#define AVR32_USBC_UPCON3                                   0x000005cc
#define AVR32_USBC_UPCON3CLR                                0x0000062c
#define AVR32_USBC_UPCON3CLR_ERRORFIEC                               5
#define AVR32_USBC_UPCON3CLR_ERRORFIEC_MASK                 0x00000020
#define AVR32_USBC_UPCON3CLR_ERRORFIEC_OFFSET                        5
#define AVR32_USBC_UPCON3CLR_ERRORFIEC_SIZE                          1
#define AVR32_USBC_UPCON3CLR_FIFOCONC                               14
#define AVR32_USBC_UPCON3CLR_FIFOCONC_MASK                  0x00004000
#define AVR32_USBC_UPCON3CLR_FIFOCONC_OFFSET                        14
#define AVR32_USBC_UPCON3CLR_FIFOCONC_SIZE                           1
#define AVR32_USBC_UPCON3CLR_INITBKC                                19
#define AVR32_USBC_UPCON3CLR_INITBKC_MASK                   0x00080000
#define AVR32_USBC_UPCON3CLR_INITBKC_OFFSET                         19
#define AVR32_USBC_UPCON3CLR_INITBKC_SIZE                            1
#define AVR32_USBC_UPCON3CLR_INITDTGLC                              18
#define AVR32_USBC_UPCON3CLR_INITDTGLC_MASK                 0x00040000
#define AVR32_USBC_UPCON3CLR_INITDTGLC_OFFSET                       18
#define AVR32_USBC_UPCON3CLR_INITDTGLC_SIZE                          1
#define AVR32_USBC_UPCON3CLR_MASK                           0x000e547f
#define AVR32_USBC_UPCON3CLR_NAKEDEC                                 4
#define AVR32_USBC_UPCON3CLR_NAKEDEC_MASK                   0x00000010
#define AVR32_USBC_UPCON3CLR_NAKEDEC_OFFSET                          4
#define AVR32_USBC_UPCON3CLR_NAKEDEC_SIZE                            1
#define AVR32_USBC_UPCON3CLR_NBUSYBKEC                              12
#define AVR32_USBC_UPCON3CLR_NBUSYBKEC_MASK                 0x00001000
#define AVR32_USBC_UPCON3CLR_NBUSYBKEC_OFFSET                       12
#define AVR32_USBC_UPCON3CLR_NBUSYBKEC_SIZE                          1
#define AVR32_USBC_UPCON3CLR_PERREC                                  3
#define AVR32_USBC_UPCON3CLR_PERREC_MASK                    0x00000008
#define AVR32_USBC_UPCON3CLR_PERREC_OFFSET                           3
#define AVR32_USBC_UPCON3CLR_PERREC_SIZE                             1
#define AVR32_USBC_UPCON3CLR_PFREEZEC                               17
#define AVR32_USBC_UPCON3CLR_PFREEZEC_MASK                  0x00020000
#define AVR32_USBC_UPCON3CLR_PFREEZEC_OFFSET                        17
#define AVR32_USBC_UPCON3CLR_PFREEZEC_SIZE                           1
#define AVR32_USBC_UPCON3CLR_RAMACCEREC                             10
#define AVR32_USBC_UPCON3CLR_RAMACCEREC_MASK                0x00000400
#define AVR32_USBC_UPCON3CLR_RAMACCEREC_OFFSET                      10
#define AVR32_USBC_UPCON3CLR_RAMACCEREC_SIZE                         1
#define AVR32_USBC_UPCON3CLR_RESETVALUE                     0x00000000
#define AVR32_USBC_UPCON3CLR_RXINEC                                  0
#define AVR32_USBC_UPCON3CLR_RXINEC_MASK                    0x00000001
#define AVR32_USBC_UPCON3CLR_RXINEC_OFFSET                           0
#define AVR32_USBC_UPCON3CLR_RXINEC_SIZE                             1
#define AVR32_USBC_UPCON3CLR_RXSTALLDEC                              6
#define AVR32_USBC_UPCON3CLR_RXSTALLDEC_MASK                0x00000040
#define AVR32_USBC_UPCON3CLR_RXSTALLDEC_OFFSET                       6
#define AVR32_USBC_UPCON3CLR_RXSTALLDEC_SIZE                         1
#define AVR32_USBC_UPCON3CLR_TXOUTEC                                 1
#define AVR32_USBC_UPCON3CLR_TXOUTEC_MASK                   0x00000002
#define AVR32_USBC_UPCON3CLR_TXOUTEC_OFFSET                          1
#define AVR32_USBC_UPCON3CLR_TXOUTEC_SIZE                            1
#define AVR32_USBC_UPCON3CLR_TXSTPEC                                 2
#define AVR32_USBC_UPCON3CLR_TXSTPEC_MASK                   0x00000004
#define AVR32_USBC_UPCON3CLR_TXSTPEC_OFFSET                          2
#define AVR32_USBC_UPCON3CLR_TXSTPEC_SIZE                            1
#define AVR32_USBC_UPCON3SET                                0x000005fc
#define AVR32_USBC_UPCON3SET_ERRORFIES                               5
#define AVR32_USBC_UPCON3SET_ERRORFIES_MASK                 0x00000020
#define AVR32_USBC_UPCON3SET_ERRORFIES_OFFSET                        5
#define AVR32_USBC_UPCON3SET_ERRORFIES_SIZE                          1
#define AVR32_USBC_UPCON3SET_FIFOCONS                               14
#define AVR32_USBC_UPCON3SET_FIFOCONS_MASK                  0x00004000
#define AVR32_USBC_UPCON3SET_FIFOCONS_OFFSET                        14
#define AVR32_USBC_UPCON3SET_FIFOCONS_SIZE                           1
#define AVR32_USBC_UPCON3SET_INITBKS                                19
#define AVR32_USBC_UPCON3SET_INITBKS_MASK                   0x00080000
#define AVR32_USBC_UPCON3SET_INITBKS_OFFSET                         19
#define AVR32_USBC_UPCON3SET_INITBKS_SIZE                            1
#define AVR32_USBC_UPCON3SET_INITDTGLS                              18
#define AVR32_USBC_UPCON3SET_INITDTGLS_MASK                 0x00040000
#define AVR32_USBC_UPCON3SET_INITDTGLS_OFFSET                       18
#define AVR32_USBC_UPCON3SET_INITDTGLS_SIZE                          1
#define AVR32_USBC_UPCON3SET_MASK                           0x000e547f
#define AVR32_USBC_UPCON3SET_NAKEDES                                 4
#define AVR32_USBC_UPCON3SET_NAKEDES_MASK                   0x00000010
#define AVR32_USBC_UPCON3SET_NAKEDES_OFFSET                          4
#define AVR32_USBC_UPCON3SET_NAKEDES_SIZE                            1
#define AVR32_USBC_UPCON3SET_NBUSYBKES                              12
#define AVR32_USBC_UPCON3SET_NBUSYBKES_MASK                 0x00001000
#define AVR32_USBC_UPCON3SET_NBUSYBKES_OFFSET                       12
#define AVR32_USBC_UPCON3SET_NBUSYBKES_SIZE                          1
#define AVR32_USBC_UPCON3SET_PERRES                                  3
#define AVR32_USBC_UPCON3SET_PERRES_MASK                    0x00000008
#define AVR32_USBC_UPCON3SET_PERRES_OFFSET                           3
#define AVR32_USBC_UPCON3SET_PERRES_SIZE                             1
#define AVR32_USBC_UPCON3SET_PFREEZES                               17
#define AVR32_USBC_UPCON3SET_PFREEZES_MASK                  0x00020000
#define AVR32_USBC_UPCON3SET_PFREEZES_OFFSET                        17
#define AVR32_USBC_UPCON3SET_PFREEZES_SIZE                           1
#define AVR32_USBC_UPCON3SET_RAMACCERES                             10
#define AVR32_USBC_UPCON3SET_RAMACCERES_MASK                0x00000400
#define AVR32_USBC_UPCON3SET_RAMACCERES_OFFSET                      10
#define AVR32_USBC_UPCON3SET_RAMACCERES_SIZE                         1
#define AVR32_USBC_UPCON3SET_RESETVALUE                     0x00000000
#define AVR32_USBC_UPCON3SET_RXINES                                  0
#define AVR32_USBC_UPCON3SET_RXINES_MASK                    0x00000001
#define AVR32_USBC_UPCON3SET_RXINES_OFFSET                           0
#define AVR32_USBC_UPCON3SET_RXINES_SIZE                             1
#define AVR32_USBC_UPCON3SET_RXSTALLDES                              6
#define AVR32_USBC_UPCON3SET_RXSTALLDES_MASK                0x00000040
#define AVR32_USBC_UPCON3SET_RXSTALLDES_OFFSET                       6
#define AVR32_USBC_UPCON3SET_RXSTALLDES_SIZE                         1
#define AVR32_USBC_UPCON3SET_TXOUTES                                 1
#define AVR32_USBC_UPCON3SET_TXOUTES_MASK                   0x00000002
#define AVR32_USBC_UPCON3SET_TXOUTES_OFFSET                          1
#define AVR32_USBC_UPCON3SET_TXOUTES_SIZE                            1
#define AVR32_USBC_UPCON3SET_TXSTPES                                 2
#define AVR32_USBC_UPCON3SET_TXSTPES_MASK                   0x00000004
#define AVR32_USBC_UPCON3SET_TXSTPES_OFFSET                          2
#define AVR32_USBC_UPCON3SET_TXSTPES_SIZE                            1
#define AVR32_USBC_UPCON3_ERRORFIE                                   5
#define AVR32_USBC_UPCON3_ERRORFIE_MASK                     0x00000020
#define AVR32_USBC_UPCON3_ERRORFIE_OFFSET                            5
#define AVR32_USBC_UPCON3_ERRORFIE_SIZE                              1
#define AVR32_USBC_UPCON3_FIFOCON                                   14
#define AVR32_USBC_UPCON3_FIFOCON_MASK                      0x00004000
#define AVR32_USBC_UPCON3_FIFOCON_OFFSET                            14
#define AVR32_USBC_UPCON3_FIFOCON_SIZE                               1
#define AVR32_USBC_UPCON3_INITBK                                    19
#define AVR32_USBC_UPCON3_INITBK_MASK                       0x00080000
#define AVR32_USBC_UPCON3_INITBK_OFFSET                             19
#define AVR32_USBC_UPCON3_INITBK_SIZE                                1
#define AVR32_USBC_UPCON3_INITDTGL                                  18
#define AVR32_USBC_UPCON3_INITDTGL_MASK                     0x00040000
#define AVR32_USBC_UPCON3_INITDTGL_OFFSET                           18
#define AVR32_USBC_UPCON3_INITDTGL_SIZE                              1
#define AVR32_USBC_UPCON3_MASK                              0x000e547f
#define AVR32_USBC_UPCON3_NAKEDE                                     4
#define AVR32_USBC_UPCON3_NAKEDE_MASK                       0x00000010
#define AVR32_USBC_UPCON3_NAKEDE_OFFSET                              4
#define AVR32_USBC_UPCON3_NAKEDE_SIZE                                1
#define AVR32_USBC_UPCON3_NBUSYBKE                                  12
#define AVR32_USBC_UPCON3_NBUSYBKE_MASK                     0x00001000
#define AVR32_USBC_UPCON3_NBUSYBKE_OFFSET                           12
#define AVR32_USBC_UPCON3_NBUSYBKE_SIZE                              1
#define AVR32_USBC_UPCON3_PERRE                                      3
#define AVR32_USBC_UPCON3_PERRE_MASK                        0x00000008
#define AVR32_USBC_UPCON3_PERRE_OFFSET                               3
#define AVR32_USBC_UPCON3_PERRE_SIZE                                 1
#define AVR32_USBC_UPCON3_PFREEZE                                   17
#define AVR32_USBC_UPCON3_PFREEZE_MASK                      0x00020000
#define AVR32_USBC_UPCON3_PFREEZE_OFFSET                            17
#define AVR32_USBC_UPCON3_PFREEZE_SIZE                               1
#define AVR32_USBC_UPCON3_RAMACCERE                                 10
#define AVR32_USBC_UPCON3_RAMACCERE_MASK                    0x00000400
#define AVR32_USBC_UPCON3_RAMACCERE_OFFSET                          10
#define AVR32_USBC_UPCON3_RAMACCERE_SIZE                             1
#define AVR32_USBC_UPCON3_RESETVALUE                        0x00000000
#define AVR32_USBC_UPCON3_RXINE                                      0
#define AVR32_USBC_UPCON3_RXINE_MASK                        0x00000001
#define AVR32_USBC_UPCON3_RXINE_OFFSET                               0
#define AVR32_USBC_UPCON3_RXINE_SIZE                                 1
#define AVR32_USBC_UPCON3_RXSTALLDE                                  6
#define AVR32_USBC_UPCON3_RXSTALLDE_MASK                    0x00000040
#define AVR32_USBC_UPCON3_RXSTALLDE_OFFSET                           6
#define AVR32_USBC_UPCON3_RXSTALLDE_SIZE                             1
#define AVR32_USBC_UPCON3_TXOUTE                                     1
#define AVR32_USBC_UPCON3_TXOUTE_MASK                       0x00000002
#define AVR32_USBC_UPCON3_TXOUTE_OFFSET                              1
#define AVR32_USBC_UPCON3_TXOUTE_SIZE                                1
#define AVR32_USBC_UPCON3_TXSTPE                                     2
#define AVR32_USBC_UPCON3_TXSTPE_MASK                       0x00000004
#define AVR32_USBC_UPCON3_TXSTPE_OFFSET                              2
#define AVR32_USBC_UPCON3_TXSTPE_SIZE                                1
#define AVR32_USBC_UPCON4                                   0x000005d0
#define AVR32_USBC_UPCON4CLR                                0x00000630
#define AVR32_USBC_UPCON4CLR_ERRORFIEC                               5
#define AVR32_USBC_UPCON4CLR_ERRORFIEC_MASK                 0x00000020
#define AVR32_USBC_UPCON4CLR_ERRORFIEC_OFFSET                        5
#define AVR32_USBC_UPCON4CLR_ERRORFIEC_SIZE                          1
#define AVR32_USBC_UPCON4CLR_FIFOCONC                               14
#define AVR32_USBC_UPCON4CLR_FIFOCONC_MASK                  0x00004000
#define AVR32_USBC_UPCON4CLR_FIFOCONC_OFFSET                        14
#define AVR32_USBC_UPCON4CLR_FIFOCONC_SIZE                           1
#define AVR32_USBC_UPCON4CLR_INITBKC                                19
#define AVR32_USBC_UPCON4CLR_INITBKC_MASK                   0x00080000
#define AVR32_USBC_UPCON4CLR_INITBKC_OFFSET                         19
#define AVR32_USBC_UPCON4CLR_INITBKC_SIZE                            1
#define AVR32_USBC_UPCON4CLR_INITDTGLC                              18
#define AVR32_USBC_UPCON4CLR_INITDTGLC_MASK                 0x00040000
#define AVR32_USBC_UPCON4CLR_INITDTGLC_OFFSET                       18
#define AVR32_USBC_UPCON4CLR_INITDTGLC_SIZE                          1
#define AVR32_USBC_UPCON4CLR_MASK                           0x000e547f
#define AVR32_USBC_UPCON4CLR_NAKEDEC                                 4
#define AVR32_USBC_UPCON4CLR_NAKEDEC_MASK                   0x00000010
#define AVR32_USBC_UPCON4CLR_NAKEDEC_OFFSET                          4
#define AVR32_USBC_UPCON4CLR_NAKEDEC_SIZE                            1
#define AVR32_USBC_UPCON4CLR_NBUSYBKEC                              12
#define AVR32_USBC_UPCON4CLR_NBUSYBKEC_MASK                 0x00001000
#define AVR32_USBC_UPCON4CLR_NBUSYBKEC_OFFSET                       12
#define AVR32_USBC_UPCON4CLR_NBUSYBKEC_SIZE                          1
#define AVR32_USBC_UPCON4CLR_PERREC                                  3
#define AVR32_USBC_UPCON4CLR_PERREC_MASK                    0x00000008
#define AVR32_USBC_UPCON4CLR_PERREC_OFFSET                           3
#define AVR32_USBC_UPCON4CLR_PERREC_SIZE                             1
#define AVR32_USBC_UPCON4CLR_PFREEZEC                               17
#define AVR32_USBC_UPCON4CLR_PFREEZEC_MASK                  0x00020000
#define AVR32_USBC_UPCON4CLR_PFREEZEC_OFFSET                        17
#define AVR32_USBC_UPCON4CLR_PFREEZEC_SIZE                           1
#define AVR32_USBC_UPCON4CLR_RAMACCEREC                             10
#define AVR32_USBC_UPCON4CLR_RAMACCEREC_MASK                0x00000400
#define AVR32_USBC_UPCON4CLR_RAMACCEREC_OFFSET                      10
#define AVR32_USBC_UPCON4CLR_RAMACCEREC_SIZE                         1
#define AVR32_USBC_UPCON4CLR_RESETVALUE                     0x00000000
#define AVR32_USBC_UPCON4CLR_RXINEC                                  0
#define AVR32_USBC_UPCON4CLR_RXINEC_MASK                    0x00000001
#define AVR32_USBC_UPCON4CLR_RXINEC_OFFSET                           0
#define AVR32_USBC_UPCON4CLR_RXINEC_SIZE                             1
#define AVR32_USBC_UPCON4CLR_RXSTALLDEC                              6
#define AVR32_USBC_UPCON4CLR_RXSTALLDEC_MASK                0x00000040
#define AVR32_USBC_UPCON4CLR_RXSTALLDEC_OFFSET                       6
#define AVR32_USBC_UPCON4CLR_RXSTALLDEC_SIZE                         1
#define AVR32_USBC_UPCON4CLR_TXOUTEC                                 1
#define AVR32_USBC_UPCON4CLR_TXOUTEC_MASK                   0x00000002
#define AVR32_USBC_UPCON4CLR_TXOUTEC_OFFSET                          1
#define AVR32_USBC_UPCON4CLR_TXOUTEC_SIZE                            1
#define AVR32_USBC_UPCON4CLR_TXSTPEC                                 2
#define AVR32_USBC_UPCON4CLR_TXSTPEC_MASK                   0x00000004
#define AVR32_USBC_UPCON4CLR_TXSTPEC_OFFSET                          2
#define AVR32_USBC_UPCON4CLR_TXSTPEC_SIZE                            1
#define AVR32_USBC_UPCON4SET                                0x00000600
#define AVR32_USBC_UPCON4SET_ERRORFIES                               5
#define AVR32_USBC_UPCON4SET_ERRORFIES_MASK                 0x00000020
#define AVR32_USBC_UPCON4SET_ERRORFIES_OFFSET                        5
#define AVR32_USBC_UPCON4SET_ERRORFIES_SIZE                          1
#define AVR32_USBC_UPCON4SET_FIFOCONS                               14
#define AVR32_USBC_UPCON4SET_FIFOCONS_MASK                  0x00004000
#define AVR32_USBC_UPCON4SET_FIFOCONS_OFFSET                        14
#define AVR32_USBC_UPCON4SET_FIFOCONS_SIZE                           1
#define AVR32_USBC_UPCON4SET_INITBKS                                19
#define AVR32_USBC_UPCON4SET_INITBKS_MASK                   0x00080000
#define AVR32_USBC_UPCON4SET_INITBKS_OFFSET                         19
#define AVR32_USBC_UPCON4SET_INITBKS_SIZE                            1
#define AVR32_USBC_UPCON4SET_INITDTGLS                              18
#define AVR32_USBC_UPCON4SET_INITDTGLS_MASK                 0x00040000
#define AVR32_USBC_UPCON4SET_INITDTGLS_OFFSET                       18
#define AVR32_USBC_UPCON4SET_INITDTGLS_SIZE                          1
#define AVR32_USBC_UPCON4SET_MASK                           0x000e547f
#define AVR32_USBC_UPCON4SET_NAKEDES                                 4
#define AVR32_USBC_UPCON4SET_NAKEDES_MASK                   0x00000010
#define AVR32_USBC_UPCON4SET_NAKEDES_OFFSET                          4
#define AVR32_USBC_UPCON4SET_NAKEDES_SIZE                            1
#define AVR32_USBC_UPCON4SET_NBUSYBKES                              12
#define AVR32_USBC_UPCON4SET_NBUSYBKES_MASK                 0x00001000
#define AVR32_USBC_UPCON4SET_NBUSYBKES_OFFSET                       12
#define AVR32_USBC_UPCON4SET_NBUSYBKES_SIZE                          1
#define AVR32_USBC_UPCON4SET_PERRES                                  3
#define AVR32_USBC_UPCON4SET_PERRES_MASK                    0x00000008
#define AVR32_USBC_UPCON4SET_PERRES_OFFSET                           3
#define AVR32_USBC_UPCON4SET_PERRES_SIZE                             1
#define AVR32_USBC_UPCON4SET_PFREEZES                               17
#define AVR32_USBC_UPCON4SET_PFREEZES_MASK                  0x00020000
#define AVR32_USBC_UPCON4SET_PFREEZES_OFFSET                        17
#define AVR32_USBC_UPCON4SET_PFREEZES_SIZE                           1
#define AVR32_USBC_UPCON4SET_RAMACCERES                             10
#define AVR32_USBC_UPCON4SET_RAMACCERES_MASK                0x00000400
#define AVR32_USBC_UPCON4SET_RAMACCERES_OFFSET                      10
#define AVR32_USBC_UPCON4SET_RAMACCERES_SIZE                         1
#define AVR32_USBC_UPCON4SET_RESETVALUE                     0x00000000
#define AVR32_USBC_UPCON4SET_RXINES                                  0
#define AVR32_USBC_UPCON4SET_RXINES_MASK                    0x00000001
#define AVR32_USBC_UPCON4SET_RXINES_OFFSET                           0
#define AVR32_USBC_UPCON4SET_RXINES_SIZE                             1
#define AVR32_USBC_UPCON4SET_RXSTALLDES                              6
#define AVR32_USBC_UPCON4SET_RXSTALLDES_MASK                0x00000040
#define AVR32_USBC_UPCON4SET_RXSTALLDES_OFFSET                       6
#define AVR32_USBC_UPCON4SET_RXSTALLDES_SIZE                         1
#define AVR32_USBC_UPCON4SET_TXOUTES                                 1
#define AVR32_USBC_UPCON4SET_TXOUTES_MASK                   0x00000002
#define AVR32_USBC_UPCON4SET_TXOUTES_OFFSET                          1
#define AVR32_USBC_UPCON4SET_TXOUTES_SIZE                            1
#define AVR32_USBC_UPCON4SET_TXSTPES                                 2
#define AVR32_USBC_UPCON4SET_TXSTPES_MASK                   0x00000004
#define AVR32_USBC_UPCON4SET_TXSTPES_OFFSET                          2
#define AVR32_USBC_UPCON4SET_TXSTPES_SIZE                            1
#define AVR32_USBC_UPCON4_ERRORFIE                                   5
#define AVR32_USBC_UPCON4_ERRORFIE_MASK                     0x00000020
#define AVR32_USBC_UPCON4_ERRORFIE_OFFSET                            5
#define AVR32_USBC_UPCON4_ERRORFIE_SIZE                              1
#define AVR32_USBC_UPCON4_FIFOCON                                   14
#define AVR32_USBC_UPCON4_FIFOCON_MASK                      0x00004000
#define AVR32_USBC_UPCON4_FIFOCON_OFFSET                            14
#define AVR32_USBC_UPCON4_FIFOCON_SIZE                               1
#define AVR32_USBC_UPCON4_INITBK                                    19
#define AVR32_USBC_UPCON4_INITBK_MASK                       0x00080000
#define AVR32_USBC_UPCON4_INITBK_OFFSET                             19
#define AVR32_USBC_UPCON4_INITBK_SIZE                                1
#define AVR32_USBC_UPCON4_INITDTGL                                  18
#define AVR32_USBC_UPCON4_INITDTGL_MASK                     0x00040000
#define AVR32_USBC_UPCON4_INITDTGL_OFFSET                           18
#define AVR32_USBC_UPCON4_INITDTGL_SIZE                              1
#define AVR32_USBC_UPCON4_MASK                              0x000e547f
#define AVR32_USBC_UPCON4_NAKEDE                                     4
#define AVR32_USBC_UPCON4_NAKEDE_MASK                       0x00000010
#define AVR32_USBC_UPCON4_NAKEDE_OFFSET                              4
#define AVR32_USBC_UPCON4_NAKEDE_SIZE                                1
#define AVR32_USBC_UPCON4_NBUSYBKE                                  12
#define AVR32_USBC_UPCON4_NBUSYBKE_MASK                     0x00001000
#define AVR32_USBC_UPCON4_NBUSYBKE_OFFSET                           12
#define AVR32_USBC_UPCON4_NBUSYBKE_SIZE                              1
#define AVR32_USBC_UPCON4_PERRE                                      3
#define AVR32_USBC_UPCON4_PERRE_MASK                        0x00000008
#define AVR32_USBC_UPCON4_PERRE_OFFSET                               3
#define AVR32_USBC_UPCON4_PERRE_SIZE                                 1
#define AVR32_USBC_UPCON4_PFREEZE                                   17
#define AVR32_USBC_UPCON4_PFREEZE_MASK                      0x00020000
#define AVR32_USBC_UPCON4_PFREEZE_OFFSET                            17
#define AVR32_USBC_UPCON4_PFREEZE_SIZE                               1
#define AVR32_USBC_UPCON4_RAMACCERE                                 10
#define AVR32_USBC_UPCON4_RAMACCERE_MASK                    0x00000400
#define AVR32_USBC_UPCON4_RAMACCERE_OFFSET                          10
#define AVR32_USBC_UPCON4_RAMACCERE_SIZE                             1
#define AVR32_USBC_UPCON4_RESETVALUE                        0x00000000
#define AVR32_USBC_UPCON4_RXINE                                      0
#define AVR32_USBC_UPCON4_RXINE_MASK                        0x00000001
#define AVR32_USBC_UPCON4_RXINE_OFFSET                               0
#define AVR32_USBC_UPCON4_RXINE_SIZE                                 1
#define AVR32_USBC_UPCON4_RXSTALLDE                                  6
#define AVR32_USBC_UPCON4_RXSTALLDE_MASK                    0x00000040
#define AVR32_USBC_UPCON4_RXSTALLDE_OFFSET                           6
#define AVR32_USBC_UPCON4_RXSTALLDE_SIZE                             1
#define AVR32_USBC_UPCON4_TXOUTE                                     1
#define AVR32_USBC_UPCON4_TXOUTE_MASK                       0x00000002
#define AVR32_USBC_UPCON4_TXOUTE_OFFSET                              1
#define AVR32_USBC_UPCON4_TXOUTE_SIZE                                1
#define AVR32_USBC_UPCON4_TXSTPE                                     2
#define AVR32_USBC_UPCON4_TXSTPE_MASK                       0x00000004
#define AVR32_USBC_UPCON4_TXSTPE_OFFSET                              2
#define AVR32_USBC_UPCON4_TXSTPE_SIZE                                1
#define AVR32_USBC_UPCON5                                   0x000005d4
#define AVR32_USBC_UPCON5CLR                                0x00000634
#define AVR32_USBC_UPCON5CLR_ERRORFIEC                               5
#define AVR32_USBC_UPCON5CLR_ERRORFIEC_MASK                 0x00000020
#define AVR32_USBC_UPCON5CLR_ERRORFIEC_OFFSET                        5
#define AVR32_USBC_UPCON5CLR_ERRORFIEC_SIZE                          1
#define AVR32_USBC_UPCON5CLR_FIFOCONC                               14
#define AVR32_USBC_UPCON5CLR_FIFOCONC_MASK                  0x00004000
#define AVR32_USBC_UPCON5CLR_FIFOCONC_OFFSET                        14
#define AVR32_USBC_UPCON5CLR_FIFOCONC_SIZE                           1
#define AVR32_USBC_UPCON5CLR_INITBKC                                19
#define AVR32_USBC_UPCON5CLR_INITBKC_MASK                   0x00080000
#define AVR32_USBC_UPCON5CLR_INITBKC_OFFSET                         19
#define AVR32_USBC_UPCON5CLR_INITBKC_SIZE                            1
#define AVR32_USBC_UPCON5CLR_INITDTGLC                              18
#define AVR32_USBC_UPCON5CLR_INITDTGLC_MASK                 0x00040000
#define AVR32_USBC_UPCON5CLR_INITDTGLC_OFFSET                       18
#define AVR32_USBC_UPCON5CLR_INITDTGLC_SIZE                          1
#define AVR32_USBC_UPCON5CLR_MASK                           0x000e547f
#define AVR32_USBC_UPCON5CLR_NAKEDEC                                 4
#define AVR32_USBC_UPCON5CLR_NAKEDEC_MASK                   0x00000010
#define AVR32_USBC_UPCON5CLR_NAKEDEC_OFFSET                          4
#define AVR32_USBC_UPCON5CLR_NAKEDEC_SIZE                            1
#define AVR32_USBC_UPCON5CLR_NBUSYBKEC                              12
#define AVR32_USBC_UPCON5CLR_NBUSYBKEC_MASK                 0x00001000
#define AVR32_USBC_UPCON5CLR_NBUSYBKEC_OFFSET                       12
#define AVR32_USBC_UPCON5CLR_NBUSYBKEC_SIZE                          1
#define AVR32_USBC_UPCON5CLR_PERREC                                  3
#define AVR32_USBC_UPCON5CLR_PERREC_MASK                    0x00000008
#define AVR32_USBC_UPCON5CLR_PERREC_OFFSET                           3
#define AVR32_USBC_UPCON5CLR_PERREC_SIZE                             1
#define AVR32_USBC_UPCON5CLR_PFREEZEC                               17
#define AVR32_USBC_UPCON5CLR_PFREEZEC_MASK                  0x00020000
#define AVR32_USBC_UPCON5CLR_PFREEZEC_OFFSET                        17
#define AVR32_USBC_UPCON5CLR_PFREEZEC_SIZE                           1
#define AVR32_USBC_UPCON5CLR_RAMACCEREC                             10
#define AVR32_USBC_UPCON5CLR_RAMACCEREC_MASK                0x00000400
#define AVR32_USBC_UPCON5CLR_RAMACCEREC_OFFSET                      10
#define AVR32_USBC_UPCON5CLR_RAMACCEREC_SIZE                         1
#define AVR32_USBC_UPCON5CLR_RESETVALUE                     0x00000000
#define AVR32_USBC_UPCON5CLR_RXINEC                                  0
#define AVR32_USBC_UPCON5CLR_RXINEC_MASK                    0x00000001
#define AVR32_USBC_UPCON5CLR_RXINEC_OFFSET                           0
#define AVR32_USBC_UPCON5CLR_RXINEC_SIZE                             1
#define AVR32_USBC_UPCON5CLR_RXSTALLDEC                              6
#define AVR32_USBC_UPCON5CLR_RXSTALLDEC_MASK                0x00000040
#define AVR32_USBC_UPCON5CLR_RXSTALLDEC_OFFSET                       6
#define AVR32_USBC_UPCON5CLR_RXSTALLDEC_SIZE                         1
#define AVR32_USBC_UPCON5CLR_TXOUTEC                                 1
#define AVR32_USBC_UPCON5CLR_TXOUTEC_MASK                   0x00000002
#define AVR32_USBC_UPCON5CLR_TXOUTEC_OFFSET                          1
#define AVR32_USBC_UPCON5CLR_TXOUTEC_SIZE                            1
#define AVR32_USBC_UPCON5CLR_TXSTPEC                                 2
#define AVR32_USBC_UPCON5CLR_TXSTPEC_MASK                   0x00000004
#define AVR32_USBC_UPCON5CLR_TXSTPEC_OFFSET                          2
#define AVR32_USBC_UPCON5CLR_TXSTPEC_SIZE                            1
#define AVR32_USBC_UPCON5SET                                0x00000604
#define AVR32_USBC_UPCON5SET_ERRORFIES                               5
#define AVR32_USBC_UPCON5SET_ERRORFIES_MASK                 0x00000020
#define AVR32_USBC_UPCON5SET_ERRORFIES_OFFSET                        5
#define AVR32_USBC_UPCON5SET_ERRORFIES_SIZE                          1
#define AVR32_USBC_UPCON5SET_FIFOCONS                               14
#define AVR32_USBC_UPCON5SET_FIFOCONS_MASK                  0x00004000
#define AVR32_USBC_UPCON5SET_FIFOCONS_OFFSET                        14
#define AVR32_USBC_UPCON5SET_FIFOCONS_SIZE                           1
#define AVR32_USBC_UPCON5SET_INITBKS                                19
#define AVR32_USBC_UPCON5SET_INITBKS_MASK                   0x00080000
#define AVR32_USBC_UPCON5SET_INITBKS_OFFSET                         19
#define AVR32_USBC_UPCON5SET_INITBKS_SIZE                            1
#define AVR32_USBC_UPCON5SET_INITDTGLS                              18
#define AVR32_USBC_UPCON5SET_INITDTGLS_MASK                 0x00040000
#define AVR32_USBC_UPCON5SET_INITDTGLS_OFFSET                       18
#define AVR32_USBC_UPCON5SET_INITDTGLS_SIZE                          1
#define AVR32_USBC_UPCON5SET_MASK                           0x000e547f
#define AVR32_USBC_UPCON5SET_NAKEDES                                 4
#define AVR32_USBC_UPCON5SET_NAKEDES_MASK                   0x00000010
#define AVR32_USBC_UPCON5SET_NAKEDES_OFFSET                          4
#define AVR32_USBC_UPCON5SET_NAKEDES_SIZE                            1
#define AVR32_USBC_UPCON5SET_NBUSYBKES                              12
#define AVR32_USBC_UPCON5SET_NBUSYBKES_MASK                 0x00001000
#define AVR32_USBC_UPCON5SET_NBUSYBKES_OFFSET                       12
#define AVR32_USBC_UPCON5SET_NBUSYBKES_SIZE                          1
#define AVR32_USBC_UPCON5SET_PERRES                                  3
#define AVR32_USBC_UPCON5SET_PERRES_MASK                    0x00000008
#define AVR32_USBC_UPCON5SET_PERRES_OFFSET                           3
#define AVR32_USBC_UPCON5SET_PERRES_SIZE                             1
#define AVR32_USBC_UPCON5SET_PFREEZES                               17
#define AVR32_USBC_UPCON5SET_PFREEZES_MASK                  0x00020000
#define AVR32_USBC_UPCON5SET_PFREEZES_OFFSET                        17
#define AVR32_USBC_UPCON5SET_PFREEZES_SIZE                           1
#define AVR32_USBC_UPCON5SET_RAMACCERES                             10
#define AVR32_USBC_UPCON5SET_RAMACCERES_MASK                0x00000400
#define AVR32_USBC_UPCON5SET_RAMACCERES_OFFSET                      10
#define AVR32_USBC_UPCON5SET_RAMACCERES_SIZE                         1
#define AVR32_USBC_UPCON5SET_RESETVALUE                     0x00000000
#define AVR32_USBC_UPCON5SET_RXINES                                  0
#define AVR32_USBC_UPCON5SET_RXINES_MASK                    0x00000001
#define AVR32_USBC_UPCON5SET_RXINES_OFFSET                           0
#define AVR32_USBC_UPCON5SET_RXINES_SIZE                             1
#define AVR32_USBC_UPCON5SET_RXSTALLDES                              6
#define AVR32_USBC_UPCON5SET_RXSTALLDES_MASK                0x00000040
#define AVR32_USBC_UPCON5SET_RXSTALLDES_OFFSET                       6
#define AVR32_USBC_UPCON5SET_RXSTALLDES_SIZE                         1
#define AVR32_USBC_UPCON5SET_TXOUTES                                 1
#define AVR32_USBC_UPCON5SET_TXOUTES_MASK                   0x00000002
#define AVR32_USBC_UPCON5SET_TXOUTES_OFFSET                          1
#define AVR32_USBC_UPCON5SET_TXOUTES_SIZE                            1
#define AVR32_USBC_UPCON5SET_TXSTPES                                 2
#define AVR32_USBC_UPCON5SET_TXSTPES_MASK                   0x00000004
#define AVR32_USBC_UPCON5SET_TXSTPES_OFFSET                          2
#define AVR32_USBC_UPCON5SET_TXSTPES_SIZE                            1
#define AVR32_USBC_UPCON5_ERRORFIE                                   5
#define AVR32_USBC_UPCON5_ERRORFIE_MASK                     0x00000020
#define AVR32_USBC_UPCON5_ERRORFIE_OFFSET                            5
#define AVR32_USBC_UPCON5_ERRORFIE_SIZE                              1
#define AVR32_USBC_UPCON5_FIFOCON                                   14
#define AVR32_USBC_UPCON5_FIFOCON_MASK                      0x00004000
#define AVR32_USBC_UPCON5_FIFOCON_OFFSET                            14
#define AVR32_USBC_UPCON5_FIFOCON_SIZE                               1
#define AVR32_USBC_UPCON5_INITBK                                    19
#define AVR32_USBC_UPCON5_INITBK_MASK                       0x00080000
#define AVR32_USBC_UPCON5_INITBK_OFFSET                             19
#define AVR32_USBC_UPCON5_INITBK_SIZE                                1
#define AVR32_USBC_UPCON5_INITDTGL                                  18
#define AVR32_USBC_UPCON5_INITDTGL_MASK                     0x00040000
#define AVR32_USBC_UPCON5_INITDTGL_OFFSET                           18
#define AVR32_USBC_UPCON5_INITDTGL_SIZE                              1
#define AVR32_USBC_UPCON5_MASK                              0x000e547f
#define AVR32_USBC_UPCON5_NAKEDE                                     4
#define AVR32_USBC_UPCON5_NAKEDE_MASK                       0x00000010
#define AVR32_USBC_UPCON5_NAKEDE_OFFSET                              4
#define AVR32_USBC_UPCON5_NAKEDE_SIZE                                1
#define AVR32_USBC_UPCON5_NBUSYBKE                                  12
#define AVR32_USBC_UPCON5_NBUSYBKE_MASK                     0x00001000
#define AVR32_USBC_UPCON5_NBUSYBKE_OFFSET                           12
#define AVR32_USBC_UPCON5_NBUSYBKE_SIZE                              1
#define AVR32_USBC_UPCON5_PERRE                                      3
#define AVR32_USBC_UPCON5_PERRE_MASK                        0x00000008
#define AVR32_USBC_UPCON5_PERRE_OFFSET                               3
#define AVR32_USBC_UPCON5_PERRE_SIZE                                 1
#define AVR32_USBC_UPCON5_PFREEZE                                   17
#define AVR32_USBC_UPCON5_PFREEZE_MASK                      0x00020000
#define AVR32_USBC_UPCON5_PFREEZE_OFFSET                            17
#define AVR32_USBC_UPCON5_PFREEZE_SIZE                               1
#define AVR32_USBC_UPCON5_RAMACCERE                                 10
#define AVR32_USBC_UPCON5_RAMACCERE_MASK                    0x00000400
#define AVR32_USBC_UPCON5_RAMACCERE_OFFSET                          10
#define AVR32_USBC_UPCON5_RAMACCERE_SIZE                             1
#define AVR32_USBC_UPCON5_RESETVALUE                        0x00000000
#define AVR32_USBC_UPCON5_RXINE                                      0
#define AVR32_USBC_UPCON5_RXINE_MASK                        0x00000001
#define AVR32_USBC_UPCON5_RXINE_OFFSET                               0
#define AVR32_USBC_UPCON5_RXINE_SIZE                                 1
#define AVR32_USBC_UPCON5_RXSTALLDE                                  6
#define AVR32_USBC_UPCON5_RXSTALLDE_MASK                    0x00000040
#define AVR32_USBC_UPCON5_RXSTALLDE_OFFSET                           6
#define AVR32_USBC_UPCON5_RXSTALLDE_SIZE                             1
#define AVR32_USBC_UPCON5_TXOUTE                                     1
#define AVR32_USBC_UPCON5_TXOUTE_MASK                       0x00000002
#define AVR32_USBC_UPCON5_TXOUTE_OFFSET                              1
#define AVR32_USBC_UPCON5_TXOUTE_SIZE                                1
#define AVR32_USBC_UPCON5_TXSTPE                                     2
#define AVR32_USBC_UPCON5_TXSTPE_MASK                       0x00000004
#define AVR32_USBC_UPCON5_TXSTPE_OFFSET                              2
#define AVR32_USBC_UPCON5_TXSTPE_SIZE                                1
#define AVR32_USBC_UPCON6                                   0x000005d8
#define AVR32_USBC_UPCON6CLR                                0x00000638
#define AVR32_USBC_UPCON6CLR_ERRORFIEC                               5
#define AVR32_USBC_UPCON6CLR_ERRORFIEC_MASK                 0x00000020
#define AVR32_USBC_UPCON6CLR_ERRORFIEC_OFFSET                        5
#define AVR32_USBC_UPCON6CLR_ERRORFIEC_SIZE                          1
#define AVR32_USBC_UPCON6CLR_FIFOCONC                               14
#define AVR32_USBC_UPCON6CLR_FIFOCONC_MASK                  0x00004000
#define AVR32_USBC_UPCON6CLR_FIFOCONC_OFFSET                        14
#define AVR32_USBC_UPCON6CLR_FIFOCONC_SIZE                           1
#define AVR32_USBC_UPCON6CLR_INITBKC                                19
#define AVR32_USBC_UPCON6CLR_INITBKC_MASK                   0x00080000
#define AVR32_USBC_UPCON6CLR_INITBKC_OFFSET                         19
#define AVR32_USBC_UPCON6CLR_INITBKC_SIZE                            1
#define AVR32_USBC_UPCON6CLR_INITDTGLC                              18
#define AVR32_USBC_UPCON6CLR_INITDTGLC_MASK                 0x00040000
#define AVR32_USBC_UPCON6CLR_INITDTGLC_OFFSET                       18
#define AVR32_USBC_UPCON6CLR_INITDTGLC_SIZE                          1
#define AVR32_USBC_UPCON6CLR_MASK                           0x000e547f
#define AVR32_USBC_UPCON6CLR_NAKEDEC                                 4
#define AVR32_USBC_UPCON6CLR_NAKEDEC_MASK                   0x00000010
#define AVR32_USBC_UPCON6CLR_NAKEDEC_OFFSET                          4
#define AVR32_USBC_UPCON6CLR_NAKEDEC_SIZE                            1
#define AVR32_USBC_UPCON6CLR_NBUSYBKEC                              12
#define AVR32_USBC_UPCON6CLR_NBUSYBKEC_MASK                 0x00001000
#define AVR32_USBC_UPCON6CLR_NBUSYBKEC_OFFSET                       12
#define AVR32_USBC_UPCON6CLR_NBUSYBKEC_SIZE                          1
#define AVR32_USBC_UPCON6CLR_PERREC                                  3
#define AVR32_USBC_UPCON6CLR_PERREC_MASK                    0x00000008
#define AVR32_USBC_UPCON6CLR_PERREC_OFFSET                           3
#define AVR32_USBC_UPCON6CLR_PERREC_SIZE                             1
#define AVR32_USBC_UPCON6CLR_PFREEZEC                               17
#define AVR32_USBC_UPCON6CLR_PFREEZEC_MASK                  0x00020000
#define AVR32_USBC_UPCON6CLR_PFREEZEC_OFFSET                        17
#define AVR32_USBC_UPCON6CLR_PFREEZEC_SIZE                           1
#define AVR32_USBC_UPCON6CLR_RAMACCEREC                             10
#define AVR32_USBC_UPCON6CLR_RAMACCEREC_MASK                0x00000400
#define AVR32_USBC_UPCON6CLR_RAMACCEREC_OFFSET                      10
#define AVR32_USBC_UPCON6CLR_RAMACCEREC_SIZE                         1
#define AVR32_USBC_UPCON6CLR_RESETVALUE                     0x00000000
#define AVR32_USBC_UPCON6CLR_RXINEC                                  0
#define AVR32_USBC_UPCON6CLR_RXINEC_MASK                    0x00000001
#define AVR32_USBC_UPCON6CLR_RXINEC_OFFSET                           0
#define AVR32_USBC_UPCON6CLR_RXINEC_SIZE                             1
#define AVR32_USBC_UPCON6CLR_RXSTALLDEC                              6
#define AVR32_USBC_UPCON6CLR_RXSTALLDEC_MASK                0x00000040
#define AVR32_USBC_UPCON6CLR_RXSTALLDEC_OFFSET                       6
#define AVR32_USBC_UPCON6CLR_RXSTALLDEC_SIZE                         1
#define AVR32_USBC_UPCON6CLR_TXOUTEC                                 1
#define AVR32_USBC_UPCON6CLR_TXOUTEC_MASK                   0x00000002
#define AVR32_USBC_UPCON6CLR_TXOUTEC_OFFSET                          1
#define AVR32_USBC_UPCON6CLR_TXOUTEC_SIZE                            1
#define AVR32_USBC_UPCON6CLR_TXSTPEC                                 2
#define AVR32_USBC_UPCON6CLR_TXSTPEC_MASK                   0x00000004
#define AVR32_USBC_UPCON6CLR_TXSTPEC_OFFSET                          2
#define AVR32_USBC_UPCON6CLR_TXSTPEC_SIZE                            1
#define AVR32_USBC_UPCON6SET                                0x00000608
#define AVR32_USBC_UPCON6SET_ERRORFIES                               5
#define AVR32_USBC_UPCON6SET_ERRORFIES_MASK                 0x00000020
#define AVR32_USBC_UPCON6SET_ERRORFIES_OFFSET                        5
#define AVR32_USBC_UPCON6SET_ERRORFIES_SIZE                          1
#define AVR32_USBC_UPCON6SET_FIFOCONS                               14
#define AVR32_USBC_UPCON6SET_FIFOCONS_MASK                  0x00004000
#define AVR32_USBC_UPCON6SET_FIFOCONS_OFFSET                        14
#define AVR32_USBC_UPCON6SET_FIFOCONS_SIZE                           1
#define AVR32_USBC_UPCON6SET_INITBKS                                19
#define AVR32_USBC_UPCON6SET_INITBKS_MASK                   0x00080000
#define AVR32_USBC_UPCON6SET_INITBKS_OFFSET                         19
#define AVR32_USBC_UPCON6SET_INITBKS_SIZE                            1
#define AVR32_USBC_UPCON6SET_INITDTGLS                              18
#define AVR32_USBC_UPCON6SET_INITDTGLS_MASK                 0x00040000
#define AVR32_USBC_UPCON6SET_INITDTGLS_OFFSET                       18
#define AVR32_USBC_UPCON6SET_INITDTGLS_SIZE                          1
#define AVR32_USBC_UPCON6SET_MASK                           0x000e547f
#define AVR32_USBC_UPCON6SET_NAKEDES                                 4
#define AVR32_USBC_UPCON6SET_NAKEDES_MASK                   0x00000010
#define AVR32_USBC_UPCON6SET_NAKEDES_OFFSET                          4
#define AVR32_USBC_UPCON6SET_NAKEDES_SIZE                            1
#define AVR32_USBC_UPCON6SET_NBUSYBKES                              12
#define AVR32_USBC_UPCON6SET_NBUSYBKES_MASK                 0x00001000
#define AVR32_USBC_UPCON6SET_NBUSYBKES_OFFSET                       12
#define AVR32_USBC_UPCON6SET_NBUSYBKES_SIZE                          1
#define AVR32_USBC_UPCON6SET_PERRES                                  3
#define AVR32_USBC_UPCON6SET_PERRES_MASK                    0x00000008
#define AVR32_USBC_UPCON6SET_PERRES_OFFSET                           3
#define AVR32_USBC_UPCON6SET_PERRES_SIZE                             1
#define AVR32_USBC_UPCON6SET_PFREEZES                               17
#define AVR32_USBC_UPCON6SET_PFREEZES_MASK                  0x00020000
#define AVR32_USBC_UPCON6SET_PFREEZES_OFFSET                        17
#define AVR32_USBC_UPCON6SET_PFREEZES_SIZE                           1
#define AVR32_USBC_UPCON6SET_RAMACCERES                             10
#define AVR32_USBC_UPCON6SET_RAMACCERES_MASK                0x00000400
#define AVR32_USBC_UPCON6SET_RAMACCERES_OFFSET                      10
#define AVR32_USBC_UPCON6SET_RAMACCERES_SIZE                         1
#define AVR32_USBC_UPCON6SET_RESETVALUE                     0x00000000
#define AVR32_USBC_UPCON6SET_RXINES                                  0
#define AVR32_USBC_UPCON6SET_RXINES_MASK                    0x00000001
#define AVR32_USBC_UPCON6SET_RXINES_OFFSET                           0
#define AVR32_USBC_UPCON6SET_RXINES_SIZE                             1
#define AVR32_USBC_UPCON6SET_RXSTALLDES                              6
#define AVR32_USBC_UPCON6SET_RXSTALLDES_MASK                0x00000040
#define AVR32_USBC_UPCON6SET_RXSTALLDES_OFFSET                       6
#define AVR32_USBC_UPCON6SET_RXSTALLDES_SIZE                         1
#define AVR32_USBC_UPCON6SET_TXOUTES                                 1
#define AVR32_USBC_UPCON6SET_TXOUTES_MASK                   0x00000002
#define AVR32_USBC_UPCON6SET_TXOUTES_OFFSET                          1
#define AVR32_USBC_UPCON6SET_TXOUTES_SIZE                            1
#define AVR32_USBC_UPCON6SET_TXSTPES                                 2
#define AVR32_USBC_UPCON6SET_TXSTPES_MASK                   0x00000004
#define AVR32_USBC_UPCON6SET_TXSTPES_OFFSET                          2
#define AVR32_USBC_UPCON6SET_TXSTPES_SIZE                            1
#define AVR32_USBC_UPCON6_ERRORFIE                                   5
#define AVR32_USBC_UPCON6_ERRORFIE_MASK                     0x00000020
#define AVR32_USBC_UPCON6_ERRORFIE_OFFSET                            5
#define AVR32_USBC_UPCON6_ERRORFIE_SIZE                              1
#define AVR32_USBC_UPCON6_FIFOCON                                   14
#define AVR32_USBC_UPCON6_FIFOCON_MASK                      0x00004000
#define AVR32_USBC_UPCON6_FIFOCON_OFFSET                            14
#define AVR32_USBC_UPCON6_FIFOCON_SIZE                               1
#define AVR32_USBC_UPCON6_INITBK                                    19
#define AVR32_USBC_UPCON6_INITBK_MASK                       0x00080000
#define AVR32_USBC_UPCON6_INITBK_OFFSET                             19
#define AVR32_USBC_UPCON6_INITBK_SIZE                                1
#define AVR32_USBC_UPCON6_INITDTGL                                  18
#define AVR32_USBC_UPCON6_INITDTGL_MASK                     0x00040000
#define AVR32_USBC_UPCON6_INITDTGL_OFFSET                           18
#define AVR32_USBC_UPCON6_INITDTGL_SIZE                              1
#define AVR32_USBC_UPCON6_MASK                              0x000e547f
#define AVR32_USBC_UPCON6_NAKEDE                                     4
#define AVR32_USBC_UPCON6_NAKEDE_MASK                       0x00000010
#define AVR32_USBC_UPCON6_NAKEDE_OFFSET                              4
#define AVR32_USBC_UPCON6_NAKEDE_SIZE                                1
#define AVR32_USBC_UPCON6_NBUSYBKE                                  12
#define AVR32_USBC_UPCON6_NBUSYBKE_MASK                     0x00001000
#define AVR32_USBC_UPCON6_NBUSYBKE_OFFSET                           12
#define AVR32_USBC_UPCON6_NBUSYBKE_SIZE                              1
#define AVR32_USBC_UPCON6_PERRE                                      3
#define AVR32_USBC_UPCON6_PERRE_MASK                        0x00000008
#define AVR32_USBC_UPCON6_PERRE_OFFSET                               3
#define AVR32_USBC_UPCON6_PERRE_SIZE                                 1
#define AVR32_USBC_UPCON6_PFREEZE                                   17
#define AVR32_USBC_UPCON6_PFREEZE_MASK                      0x00020000
#define AVR32_USBC_UPCON6_PFREEZE_OFFSET                            17
#define AVR32_USBC_UPCON6_PFREEZE_SIZE                               1
#define AVR32_USBC_UPCON6_RAMACCERE                                 10
#define AVR32_USBC_UPCON6_RAMACCERE_MASK                    0x00000400
#define AVR32_USBC_UPCON6_RAMACCERE_OFFSET                          10
#define AVR32_USBC_UPCON6_RAMACCERE_SIZE                             1
#define AVR32_USBC_UPCON6_RESETVALUE                        0x00000000
#define AVR32_USBC_UPCON6_RXINE                                      0
#define AVR32_USBC_UPCON6_RXINE_MASK                        0x00000001
#define AVR32_USBC_UPCON6_RXINE_OFFSET                               0
#define AVR32_USBC_UPCON6_RXINE_SIZE                                 1
#define AVR32_USBC_UPCON6_RXSTALLDE                                  6
#define AVR32_USBC_UPCON6_RXSTALLDE_MASK                    0x00000040
#define AVR32_USBC_UPCON6_RXSTALLDE_OFFSET                           6
#define AVR32_USBC_UPCON6_RXSTALLDE_SIZE                             1
#define AVR32_USBC_UPCON6_TXOUTE                                     1
#define AVR32_USBC_UPCON6_TXOUTE_MASK                       0x00000002
#define AVR32_USBC_UPCON6_TXOUTE_OFFSET                              1
#define AVR32_USBC_UPCON6_TXOUTE_SIZE                                1
#define AVR32_USBC_UPCON6_TXSTPE                                     2
#define AVR32_USBC_UPCON6_TXSTPE_MASK                       0x00000004
#define AVR32_USBC_UPCON6_TXSTPE_OFFSET                              2
#define AVR32_USBC_UPCON6_TXSTPE_SIZE                                1
#define AVR32_USBC_UPCON7                                   0x000005dc
#define AVR32_USBC_UPCON7CLR                                0x0000063c
#define AVR32_USBC_UPCON7CLR_ERRORFIEC                               5
#define AVR32_USBC_UPCON7CLR_ERRORFIEC_MASK                 0x00000020
#define AVR32_USBC_UPCON7CLR_ERRORFIEC_OFFSET                        5
#define AVR32_USBC_UPCON7CLR_ERRORFIEC_SIZE                          1
#define AVR32_USBC_UPCON7CLR_FIFOCONC                               14
#define AVR32_USBC_UPCON7CLR_FIFOCONC_MASK                  0x00004000
#define AVR32_USBC_UPCON7CLR_FIFOCONC_OFFSET                        14
#define AVR32_USBC_UPCON7CLR_FIFOCONC_SIZE                           1
#define AVR32_USBC_UPCON7CLR_INITBKC                                19
#define AVR32_USBC_UPCON7CLR_INITBKC_MASK                   0x00080000
#define AVR32_USBC_UPCON7CLR_INITBKC_OFFSET                         19
#define AVR32_USBC_UPCON7CLR_INITBKC_SIZE                            1
#define AVR32_USBC_UPCON7CLR_INITDTGLC                              18
#define AVR32_USBC_UPCON7CLR_INITDTGLC_MASK                 0x00040000
#define AVR32_USBC_UPCON7CLR_INITDTGLC_OFFSET                       18
#define AVR32_USBC_UPCON7CLR_INITDTGLC_SIZE                          1
#define AVR32_USBC_UPCON7CLR_MASK                           0x000e547f
#define AVR32_USBC_UPCON7CLR_NAKEDEC                                 4
#define AVR32_USBC_UPCON7CLR_NAKEDEC_MASK                   0x00000010
#define AVR32_USBC_UPCON7CLR_NAKEDEC_OFFSET                          4
#define AVR32_USBC_UPCON7CLR_NAKEDEC_SIZE                            1
#define AVR32_USBC_UPCON7CLR_NBUSYBKEC                              12
#define AVR32_USBC_UPCON7CLR_NBUSYBKEC_MASK                 0x00001000
#define AVR32_USBC_UPCON7CLR_NBUSYBKEC_OFFSET                       12
#define AVR32_USBC_UPCON7CLR_NBUSYBKEC_SIZE                          1
#define AVR32_USBC_UPCON7CLR_PERREC                                  3
#define AVR32_USBC_UPCON7CLR_PERREC_MASK                    0x00000008
#define AVR32_USBC_UPCON7CLR_PERREC_OFFSET                           3
#define AVR32_USBC_UPCON7CLR_PERREC_SIZE                             1
#define AVR32_USBC_UPCON7CLR_PFREEZEC                               17
#define AVR32_USBC_UPCON7CLR_PFREEZEC_MASK                  0x00020000
#define AVR32_USBC_UPCON7CLR_PFREEZEC_OFFSET                        17
#define AVR32_USBC_UPCON7CLR_PFREEZEC_SIZE                           1
#define AVR32_USBC_UPCON7CLR_RAMACCEREC                             10
#define AVR32_USBC_UPCON7CLR_RAMACCEREC_MASK                0x00000400
#define AVR32_USBC_UPCON7CLR_RAMACCEREC_OFFSET                      10
#define AVR32_USBC_UPCON7CLR_RAMACCEREC_SIZE                         1
#define AVR32_USBC_UPCON7CLR_RESETVALUE                     0x00000000
#define AVR32_USBC_UPCON7CLR_RXINEC                                  0
#define AVR32_USBC_UPCON7CLR_RXINEC_MASK                    0x00000001
#define AVR32_USBC_UPCON7CLR_RXINEC_OFFSET                           0
#define AVR32_USBC_UPCON7CLR_RXINEC_SIZE                             1
#define AVR32_USBC_UPCON7CLR_RXSTALLDEC                              6
#define AVR32_USBC_UPCON7CLR_RXSTALLDEC_MASK                0x00000040
#define AVR32_USBC_UPCON7CLR_RXSTALLDEC_OFFSET                       6
#define AVR32_USBC_UPCON7CLR_RXSTALLDEC_SIZE                         1
#define AVR32_USBC_UPCON7CLR_TXOUTEC                                 1
#define AVR32_USBC_UPCON7CLR_TXOUTEC_MASK                   0x00000002
#define AVR32_USBC_UPCON7CLR_TXOUTEC_OFFSET                          1
#define AVR32_USBC_UPCON7CLR_TXOUTEC_SIZE                            1
#define AVR32_USBC_UPCON7CLR_TXSTPEC                                 2
#define AVR32_USBC_UPCON7CLR_TXSTPEC_MASK                   0x00000004
#define AVR32_USBC_UPCON7CLR_TXSTPEC_OFFSET                          2
#define AVR32_USBC_UPCON7CLR_TXSTPEC_SIZE                            1
#define AVR32_USBC_UPCON7SET                                0x0000060c
#define AVR32_USBC_UPCON7SET_ERRORFIES                               5
#define AVR32_USBC_UPCON7SET_ERRORFIES_MASK                 0x00000020
#define AVR32_USBC_UPCON7SET_ERRORFIES_OFFSET                        5
#define AVR32_USBC_UPCON7SET_ERRORFIES_SIZE                          1
#define AVR32_USBC_UPCON7SET_FIFOCONS                               14
#define AVR32_USBC_UPCON7SET_FIFOCONS_MASK                  0x00004000
#define AVR32_USBC_UPCON7SET_FIFOCONS_OFFSET                        14
#define AVR32_USBC_UPCON7SET_FIFOCONS_SIZE                           1
#define AVR32_USBC_UPCON7SET_INITBKS                                19
#define AVR32_USBC_UPCON7SET_INITBKS_MASK                   0x00080000
#define AVR32_USBC_UPCON7SET_INITBKS_OFFSET                         19
#define AVR32_USBC_UPCON7SET_INITBKS_SIZE                            1
#define AVR32_USBC_UPCON7SET_INITDTGLS                              18
#define AVR32_USBC_UPCON7SET_INITDTGLS_MASK                 0x00040000
#define AVR32_USBC_UPCON7SET_INITDTGLS_OFFSET                       18
#define AVR32_USBC_UPCON7SET_INITDTGLS_SIZE                          1
#define AVR32_USBC_UPCON7SET_MASK                           0x000e547f
#define AVR32_USBC_UPCON7SET_NAKEDES                                 4
#define AVR32_USBC_UPCON7SET_NAKEDES_MASK                   0x00000010
#define AVR32_USBC_UPCON7SET_NAKEDES_OFFSET                          4
#define AVR32_USBC_UPCON7SET_NAKEDES_SIZE                            1
#define AVR32_USBC_UPCON7SET_NBUSYBKES                              12
#define AVR32_USBC_UPCON7SET_NBUSYBKES_MASK                 0x00001000
#define AVR32_USBC_UPCON7SET_NBUSYBKES_OFFSET                       12
#define AVR32_USBC_UPCON7SET_NBUSYBKES_SIZE                          1
#define AVR32_USBC_UPCON7SET_PERRES                                  3
#define AVR32_USBC_UPCON7SET_PERRES_MASK                    0x00000008
#define AVR32_USBC_UPCON7SET_PERRES_OFFSET                           3
#define AVR32_USBC_UPCON7SET_PERRES_SIZE                             1
#define AVR32_USBC_UPCON7SET_PFREEZES                               17
#define AVR32_USBC_UPCON7SET_PFREEZES_MASK                  0x00020000
#define AVR32_USBC_UPCON7SET_PFREEZES_OFFSET                        17
#define AVR32_USBC_UPCON7SET_PFREEZES_SIZE                           1
#define AVR32_USBC_UPCON7SET_RAMACCERES                             10
#define AVR32_USBC_UPCON7SET_RAMACCERES_MASK                0x00000400
#define AVR32_USBC_UPCON7SET_RAMACCERES_OFFSET                      10
#define AVR32_USBC_UPCON7SET_RAMACCERES_SIZE                         1
#define AVR32_USBC_UPCON7SET_RESETVALUE                     0x00000000
#define AVR32_USBC_UPCON7SET_RXINES                                  0
#define AVR32_USBC_UPCON7SET_RXINES_MASK                    0x00000001
#define AVR32_USBC_UPCON7SET_RXINES_OFFSET                           0
#define AVR32_USBC_UPCON7SET_RXINES_SIZE                             1
#define AVR32_USBC_UPCON7SET_RXSTALLDES                              6
#define AVR32_USBC_UPCON7SET_RXSTALLDES_MASK                0x00000040
#define AVR32_USBC_UPCON7SET_RXSTALLDES_OFFSET                       6
#define AVR32_USBC_UPCON7SET_RXSTALLDES_SIZE                         1
#define AVR32_USBC_UPCON7SET_TXOUTES                                 1
#define AVR32_USBC_UPCON7SET_TXOUTES_MASK                   0x00000002
#define AVR32_USBC_UPCON7SET_TXOUTES_OFFSET                          1
#define AVR32_USBC_UPCON7SET_TXOUTES_SIZE                            1
#define AVR32_USBC_UPCON7SET_TXSTPES                                 2
#define AVR32_USBC_UPCON7SET_TXSTPES_MASK                   0x00000004
#define AVR32_USBC_UPCON7SET_TXSTPES_OFFSET                          2
#define AVR32_USBC_UPCON7SET_TXSTPES_SIZE                            1
#define AVR32_USBC_UPCON7_ERRORFIE                                   5
#define AVR32_USBC_UPCON7_ERRORFIE_MASK                     0x00000020
#define AVR32_USBC_UPCON7_ERRORFIE_OFFSET                            5
#define AVR32_USBC_UPCON7_ERRORFIE_SIZE                              1
#define AVR32_USBC_UPCON7_FIFOCON                                   14
#define AVR32_USBC_UPCON7_FIFOCON_MASK                      0x00004000
#define AVR32_USBC_UPCON7_FIFOCON_OFFSET                            14
#define AVR32_USBC_UPCON7_FIFOCON_SIZE                               1
#define AVR32_USBC_UPCON7_INITBK                                    19
#define AVR32_USBC_UPCON7_INITBK_MASK                       0x00080000
#define AVR32_USBC_UPCON7_INITBK_OFFSET                             19
#define AVR32_USBC_UPCON7_INITBK_SIZE                                1
#define AVR32_USBC_UPCON7_INITDTGL                                  18
#define AVR32_USBC_UPCON7_INITDTGL_MASK                     0x00040000
#define AVR32_USBC_UPCON7_INITDTGL_OFFSET                           18
#define AVR32_USBC_UPCON7_INITDTGL_SIZE                              1
#define AVR32_USBC_UPCON7_MASK                              0x000e547f
#define AVR32_USBC_UPCON7_NAKEDE                                     4
#define AVR32_USBC_UPCON7_NAKEDE_MASK                       0x00000010
#define AVR32_USBC_UPCON7_NAKEDE_OFFSET                              4
#define AVR32_USBC_UPCON7_NAKEDE_SIZE                                1
#define AVR32_USBC_UPCON7_NBUSYBKE                                  12
#define AVR32_USBC_UPCON7_NBUSYBKE_MASK                     0x00001000
#define AVR32_USBC_UPCON7_NBUSYBKE_OFFSET                           12
#define AVR32_USBC_UPCON7_NBUSYBKE_SIZE                              1
#define AVR32_USBC_UPCON7_PERRE                                      3
#define AVR32_USBC_UPCON7_PERRE_MASK                        0x00000008
#define AVR32_USBC_UPCON7_PERRE_OFFSET                               3
#define AVR32_USBC_UPCON7_PERRE_SIZE                                 1
#define AVR32_USBC_UPCON7_PFREEZE                                   17
#define AVR32_USBC_UPCON7_PFREEZE_MASK                      0x00020000
#define AVR32_USBC_UPCON7_PFREEZE_OFFSET                            17
#define AVR32_USBC_UPCON7_PFREEZE_SIZE                               1
#define AVR32_USBC_UPCON7_RAMACCERE                                 10
#define AVR32_USBC_UPCON7_RAMACCERE_MASK                    0x00000400
#define AVR32_USBC_UPCON7_RAMACCERE_OFFSET                          10
#define AVR32_USBC_UPCON7_RAMACCERE_SIZE                             1
#define AVR32_USBC_UPCON7_RESETVALUE                        0x00000000
#define AVR32_USBC_UPCON7_RXINE                                      0
#define AVR32_USBC_UPCON7_RXINE_MASK                        0x00000001
#define AVR32_USBC_UPCON7_RXINE_OFFSET                               0
#define AVR32_USBC_UPCON7_RXINE_SIZE                                 1
#define AVR32_USBC_UPCON7_RXSTALLDE                                  6
#define AVR32_USBC_UPCON7_RXSTALLDE_MASK                    0x00000040
#define AVR32_USBC_UPCON7_RXSTALLDE_OFFSET                           6
#define AVR32_USBC_UPCON7_RXSTALLDE_SIZE                             1
#define AVR32_USBC_UPCON7_TXOUTE                                     1
#define AVR32_USBC_UPCON7_TXOUTE_MASK                       0x00000002
#define AVR32_USBC_UPCON7_TXOUTE_OFFSET                              1
#define AVR32_USBC_UPCON7_TXOUTE_SIZE                                1
#define AVR32_USBC_UPCON7_TXSTPE                                     2
#define AVR32_USBC_UPCON7_TXSTPE_MASK                       0x00000004
#define AVR32_USBC_UPCON7_TXSTPE_OFFSET                              2
#define AVR32_USBC_UPCON7_TXSTPE_SIZE                                1
#define AVR32_USBC_UPDAT0                                   0x000006b0
#define AVR32_USBC_UPDAT0_MASK                              0xffffffff
#define AVR32_USBC_UPDAT0_P_DATA                                     0
#define AVR32_USBC_UPDAT0_P_DATA_MASK                       0xffffffff
#define AVR32_USBC_UPDAT0_P_DATA_OFFSET                              0
#define AVR32_USBC_UPDAT0_P_DATA_SIZE                               32
#define AVR32_USBC_UPDAT0_RESETVALUE                        0x00000000
#define AVR32_USBC_UPDAT1                                   0x000006b4
#define AVR32_USBC_UPDAT1_MASK                              0xffffffff
#define AVR32_USBC_UPDAT1_P_DATA                                     0
#define AVR32_USBC_UPDAT1_P_DATA_MASK                       0xffffffff
#define AVR32_USBC_UPDAT1_P_DATA_OFFSET                              0
#define AVR32_USBC_UPDAT1_P_DATA_SIZE                               32
#define AVR32_USBC_UPDAT1_RESETVALUE                        0x00000000
#define AVR32_USBC_UPDAT2                                   0x000006b8
#define AVR32_USBC_UPDAT2_MASK                              0xffffffff
#define AVR32_USBC_UPDAT2_P_DATA                                     0
#define AVR32_USBC_UPDAT2_P_DATA_MASK                       0xffffffff
#define AVR32_USBC_UPDAT2_P_DATA_OFFSET                              0
#define AVR32_USBC_UPDAT2_P_DATA_SIZE                               32
#define AVR32_USBC_UPDAT2_RESETVALUE                        0x00000000
#define AVR32_USBC_UPDAT3                                   0x000006bc
#define AVR32_USBC_UPDAT3_MASK                              0xffffffff
#define AVR32_USBC_UPDAT3_P_DATA                                     0
#define AVR32_USBC_UPDAT3_P_DATA_MASK                       0xffffffff
#define AVR32_USBC_UPDAT3_P_DATA_OFFSET                              0
#define AVR32_USBC_UPDAT3_P_DATA_SIZE                               32
#define AVR32_USBC_UPDAT3_RESETVALUE                        0x00000000
#define AVR32_USBC_UPDAT4                                   0x000006c0
#define AVR32_USBC_UPDAT4_MASK                              0xffffffff
#define AVR32_USBC_UPDAT4_P_DATA                                     0
#define AVR32_USBC_UPDAT4_P_DATA_MASK                       0xffffffff
#define AVR32_USBC_UPDAT4_P_DATA_OFFSET                              0
#define AVR32_USBC_UPDAT4_P_DATA_SIZE                               32
#define AVR32_USBC_UPDAT4_RESETVALUE                        0x00000000
#define AVR32_USBC_UPDAT5                                   0x000006c4
#define AVR32_USBC_UPDAT5_MASK                              0xffffffff
#define AVR32_USBC_UPDAT5_P_DATA                                     0
#define AVR32_USBC_UPDAT5_P_DATA_MASK                       0xffffffff
#define AVR32_USBC_UPDAT5_P_DATA_OFFSET                              0
#define AVR32_USBC_UPDAT5_P_DATA_SIZE                               32
#define AVR32_USBC_UPDAT5_RESETVALUE                        0x00000000
#define AVR32_USBC_UPDAT6                                   0x000006c8
#define AVR32_USBC_UPDAT6_MASK                              0xffffffff
#define AVR32_USBC_UPDAT6_P_DATA                                     0
#define AVR32_USBC_UPDAT6_P_DATA_MASK                       0xffffffff
#define AVR32_USBC_UPDAT6_P_DATA_OFFSET                              0
#define AVR32_USBC_UPDAT6_P_DATA_SIZE                               32
#define AVR32_USBC_UPDAT6_RESETVALUE                        0x00000000
#define AVR32_USBC_UPDAT7                                   0x000006cc
#define AVR32_USBC_UPDAT7_MASK                              0xffffffff
#define AVR32_USBC_UPDAT7_P_DATA                                     0
#define AVR32_USBC_UPDAT7_P_DATA_MASK                       0xffffffff
#define AVR32_USBC_UPDAT7_P_DATA_OFFSET                              0
#define AVR32_USBC_UPDAT7_P_DATA_SIZE                               32
#define AVR32_USBC_UPDAT7_RESETVALUE                        0x00000000
#define AVR32_USBC_UPINRQ0                                  0x00000650
#define AVR32_USBC_UPINRQ0_INMODE                                    8
#define AVR32_USBC_UPINRQ0_INMODE_MASK                      0x00000100
#define AVR32_USBC_UPINRQ0_INMODE_OFFSET                             8
#define AVR32_USBC_UPINRQ0_INMODE_SIZE                               1
#define AVR32_USBC_UPINRQ0_INRQ                                      0
#define AVR32_USBC_UPINRQ0_INRQ_MASK                        0x000000ff
#define AVR32_USBC_UPINRQ0_INRQ_OFFSET                               0
#define AVR32_USBC_UPINRQ0_INRQ_SIZE                                 8
#define AVR32_USBC_UPINRQ0_MASK                             0x000001ff
#define AVR32_USBC_UPINRQ0_RESETVALUE                       0x00000001
#define AVR32_USBC_UPINRQ1                                  0x00000654
#define AVR32_USBC_UPINRQ1_INMODE                                    8
#define AVR32_USBC_UPINRQ1_INMODE_MASK                      0x00000100
#define AVR32_USBC_UPINRQ1_INMODE_OFFSET                             8
#define AVR32_USBC_UPINRQ1_INMODE_SIZE                               1
#define AVR32_USBC_UPINRQ1_INRQ                                      0
#define AVR32_USBC_UPINRQ1_INRQ_MASK                        0x000000ff
#define AVR32_USBC_UPINRQ1_INRQ_OFFSET                               0
#define AVR32_USBC_UPINRQ1_INRQ_SIZE                                 8
#define AVR32_USBC_UPINRQ1_MASK                             0x000001ff
#define AVR32_USBC_UPINRQ1_RESETVALUE                       0x00000001
#define AVR32_USBC_UPINRQ2                                  0x00000658
#define AVR32_USBC_UPINRQ2_INMODE                                    8
#define AVR32_USBC_UPINRQ2_INMODE_MASK                      0x00000100
#define AVR32_USBC_UPINRQ2_INMODE_OFFSET                             8
#define AVR32_USBC_UPINRQ2_INMODE_SIZE                               1
#define AVR32_USBC_UPINRQ2_INRQ                                      0
#define AVR32_USBC_UPINRQ2_INRQ_MASK                        0x000000ff
#define AVR32_USBC_UPINRQ2_INRQ_OFFSET                               0
#define AVR32_USBC_UPINRQ2_INRQ_SIZE                                 8
#define AVR32_USBC_UPINRQ2_MASK                             0x000001ff
#define AVR32_USBC_UPINRQ2_RESETVALUE                       0x00000001
#define AVR32_USBC_UPINRQ3                                  0x0000065c
#define AVR32_USBC_UPINRQ3_INMODE                                    8
#define AVR32_USBC_UPINRQ3_INMODE_MASK                      0x00000100
#define AVR32_USBC_UPINRQ3_INMODE_OFFSET                             8
#define AVR32_USBC_UPINRQ3_INMODE_SIZE                               1
#define AVR32_USBC_UPINRQ3_INRQ                                      0
#define AVR32_USBC_UPINRQ3_INRQ_MASK                        0x000000ff
#define AVR32_USBC_UPINRQ3_INRQ_OFFSET                               0
#define AVR32_USBC_UPINRQ3_INRQ_SIZE                                 8
#define AVR32_USBC_UPINRQ3_MASK                             0x000001ff
#define AVR32_USBC_UPINRQ3_RESETVALUE                       0x00000001
#define AVR32_USBC_UPINRQ4                                  0x00000660
#define AVR32_USBC_UPINRQ4_INMODE                                    8
#define AVR32_USBC_UPINRQ4_INMODE_MASK                      0x00000100
#define AVR32_USBC_UPINRQ4_INMODE_OFFSET                             8
#define AVR32_USBC_UPINRQ4_INMODE_SIZE                               1
#define AVR32_USBC_UPINRQ4_INRQ                                      0
#define AVR32_USBC_UPINRQ4_INRQ_MASK                        0x000000ff
#define AVR32_USBC_UPINRQ4_INRQ_OFFSET                               0
#define AVR32_USBC_UPINRQ4_INRQ_SIZE                                 8
#define AVR32_USBC_UPINRQ4_MASK                             0x000001ff
#define AVR32_USBC_UPINRQ4_RESETVALUE                       0x00000001
#define AVR32_USBC_UPINRQ5                                  0x00000664
#define AVR32_USBC_UPINRQ5_INMODE                                    8
#define AVR32_USBC_UPINRQ5_INMODE_MASK                      0x00000100
#define AVR32_USBC_UPINRQ5_INMODE_OFFSET                             8
#define AVR32_USBC_UPINRQ5_INMODE_SIZE                               1
#define AVR32_USBC_UPINRQ5_INRQ                                      0
#define AVR32_USBC_UPINRQ5_INRQ_MASK                        0x000000ff
#define AVR32_USBC_UPINRQ5_INRQ_OFFSET                               0
#define AVR32_USBC_UPINRQ5_INRQ_SIZE                                 8
#define AVR32_USBC_UPINRQ5_MASK                             0x000001ff
#define AVR32_USBC_UPINRQ5_RESETVALUE                       0x00000001
#define AVR32_USBC_UPINRQ6                                  0x00000668
#define AVR32_USBC_UPINRQ6_INMODE                                    8
#define AVR32_USBC_UPINRQ6_INMODE_MASK                      0x00000100
#define AVR32_USBC_UPINRQ6_INMODE_OFFSET                             8
#define AVR32_USBC_UPINRQ6_INMODE_SIZE                               1
#define AVR32_USBC_UPINRQ6_INRQ                                      0
#define AVR32_USBC_UPINRQ6_INRQ_MASK                        0x000000ff
#define AVR32_USBC_UPINRQ6_INRQ_OFFSET                               0
#define AVR32_USBC_UPINRQ6_INRQ_SIZE                                 8
#define AVR32_USBC_UPINRQ6_MASK                             0x000001ff
#define AVR32_USBC_UPINRQ6_RESETVALUE                       0x00000001
#define AVR32_USBC_UPINRQ7                                  0x0000066c
#define AVR32_USBC_UPINRQ7_INMODE                                    8
#define AVR32_USBC_UPINRQ7_INMODE_MASK                      0x00000100
#define AVR32_USBC_UPINRQ7_INMODE_OFFSET                             8
#define AVR32_USBC_UPINRQ7_INMODE_SIZE                               1
#define AVR32_USBC_UPINRQ7_INRQ                                      0
#define AVR32_USBC_UPINRQ7_INRQ_MASK                        0x000000ff
#define AVR32_USBC_UPINRQ7_INRQ_OFFSET                               0
#define AVR32_USBC_UPINRQ7_INRQ_SIZE                                 8
#define AVR32_USBC_UPINRQ7_MASK                             0x000001ff
#define AVR32_USBC_UPINRQ7_RESETVALUE                       0x00000001
#define AVR32_USBC_UPRSM                                             6
#define AVR32_USBC_UPRSMC                                            6
#define AVR32_USBC_UPRSMC_MASK                              0x00000040
#define AVR32_USBC_UPRSMC_OFFSET                                     6
#define AVR32_USBC_UPRSMC_SIZE                                       1
#define AVR32_USBC_UPRSME                                            6
#define AVR32_USBC_UPRSMEC                                           6
#define AVR32_USBC_UPRSMEC_MASK                             0x00000040
#define AVR32_USBC_UPRSMEC_OFFSET                                    6
#define AVR32_USBC_UPRSMEC_SIZE                                      1
#define AVR32_USBC_UPRSMES                                           6
#define AVR32_USBC_UPRSMES_MASK                             0x00000040
#define AVR32_USBC_UPRSMES_OFFSET                                    6
#define AVR32_USBC_UPRSMES_SIZE                                      1
#define AVR32_USBC_UPRSME_MASK                              0x00000040
#define AVR32_USBC_UPRSME_OFFSET                                     6
#define AVR32_USBC_UPRSME_SIZE                                       1
#define AVR32_USBC_UPRSMS                                            6
#define AVR32_USBC_UPRSMS_MASK                              0x00000040
#define AVR32_USBC_UPRSMS_OFFSET                                     6
#define AVR32_USBC_UPRSMS_SIZE                                       1
#define AVR32_USBC_UPRSM_MASK                               0x00000040
#define AVR32_USBC_UPRSM_OFFSET                                      6
#define AVR32_USBC_UPRSM_SIZE                                        1
#define AVR32_USBC_UPRST                                    0x0000041c
#define AVR32_USBC_UPRST_MASK                               0x000000ff
#define AVR32_USBC_UPRST_PEN0                                        0
#define AVR32_USBC_UPRST_PEN0_MASK                          0x00000001
#define AVR32_USBC_UPRST_PEN0_OFFSET                                 0
#define AVR32_USBC_UPRST_PEN0_SIZE                                   1
#define AVR32_USBC_UPRST_PEN1                                        1
#define AVR32_USBC_UPRST_PEN1_MASK                          0x00000002
#define AVR32_USBC_UPRST_PEN1_OFFSET                                 1
#define AVR32_USBC_UPRST_PEN1_SIZE                                   1
#define AVR32_USBC_UPRST_PEN2                                        2
#define AVR32_USBC_UPRST_PEN2_MASK                          0x00000004
#define AVR32_USBC_UPRST_PEN2_OFFSET                                 2
#define AVR32_USBC_UPRST_PEN2_SIZE                                   1
#define AVR32_USBC_UPRST_PEN3                                        3
#define AVR32_USBC_UPRST_PEN3_MASK                          0x00000008
#define AVR32_USBC_UPRST_PEN3_OFFSET                                 3
#define AVR32_USBC_UPRST_PEN3_SIZE                                   1
#define AVR32_USBC_UPRST_PEN4                                        4
#define AVR32_USBC_UPRST_PEN4_MASK                          0x00000010
#define AVR32_USBC_UPRST_PEN4_OFFSET                                 4
#define AVR32_USBC_UPRST_PEN4_SIZE                                   1
#define AVR32_USBC_UPRST_PEN5                                        5
#define AVR32_USBC_UPRST_PEN5_MASK                          0x00000020
#define AVR32_USBC_UPRST_PEN5_OFFSET                                 5
#define AVR32_USBC_UPRST_PEN5_SIZE                                   1
#define AVR32_USBC_UPRST_PEN6                                        6
#define AVR32_USBC_UPRST_PEN6_MASK                          0x00000040
#define AVR32_USBC_UPRST_PEN6_OFFSET                                 6
#define AVR32_USBC_UPRST_PEN6_SIZE                                   1
#define AVR32_USBC_UPRST_PEN7                                        7
#define AVR32_USBC_UPRST_PEN7_MASK                          0x00000080
#define AVR32_USBC_UPRST_PEN7_OFFSET                                 7
#define AVR32_USBC_UPRST_PEN7_SIZE                                   1
#define AVR32_USBC_UPRST_RESETVALUE                         0x00000000
#define AVR32_USBC_UPSTA0                                   0x00000530
#define AVR32_USBC_UPSTA0CLR                                0x00000560
#define AVR32_USBC_UPSTA0CLR_ERRORFIC                                5
#define AVR32_USBC_UPSTA0CLR_ERRORFIC_MASK                  0x00000020
#define AVR32_USBC_UPSTA0CLR_ERRORFIC_OFFSET                         5
#define AVR32_USBC_UPSTA0CLR_ERRORFIC_SIZE                           1
#define AVR32_USBC_UPSTA0CLR_MASK                           0x00000477
#define AVR32_USBC_UPSTA0CLR_NAKEDIC                                 4
#define AVR32_USBC_UPSTA0CLR_NAKEDIC_MASK                   0x00000010
#define AVR32_USBC_UPSTA0CLR_NAKEDIC_OFFSET                          4
#define AVR32_USBC_UPSTA0CLR_NAKEDIC_SIZE                            1
#define AVR32_USBC_UPSTA0CLR_RAMACCERIC                             10
#define AVR32_USBC_UPSTA0CLR_RAMACCERIC_MASK                0x00000400
#define AVR32_USBC_UPSTA0CLR_RAMACCERIC_OFFSET                      10
#define AVR32_USBC_UPSTA0CLR_RAMACCERIC_SIZE                         1
#define AVR32_USBC_UPSTA0CLR_RESETVALUE                     0x00000000
#define AVR32_USBC_UPSTA0CLR_RXINIC                                  0
#define AVR32_USBC_UPSTA0CLR_RXINIC_MASK                    0x00000001
#define AVR32_USBC_UPSTA0CLR_RXINIC_OFFSET                           0
#define AVR32_USBC_UPSTA0CLR_RXINIC_SIZE                             1
#define AVR32_USBC_UPSTA0CLR_RXSTALLDIC                              6
#define AVR32_USBC_UPSTA0CLR_RXSTALLDIC_MASK                0x00000040
#define AVR32_USBC_UPSTA0CLR_RXSTALLDIC_OFFSET                       6
#define AVR32_USBC_UPSTA0CLR_RXSTALLDIC_SIZE                         1
#define AVR32_USBC_UPSTA0CLR_TXOUTIC                                 1
#define AVR32_USBC_UPSTA0CLR_TXOUTIC_MASK                   0x00000002
#define AVR32_USBC_UPSTA0CLR_TXOUTIC_OFFSET                          1
#define AVR32_USBC_UPSTA0CLR_TXOUTIC_SIZE                            1
#define AVR32_USBC_UPSTA0CLR_TXSTPIC                                 2
#define AVR32_USBC_UPSTA0CLR_TXSTPIC_MASK                   0x00000004
#define AVR32_USBC_UPSTA0CLR_TXSTPIC_OFFSET                          2
#define AVR32_USBC_UPSTA0CLR_TXSTPIC_SIZE                            1
#define AVR32_USBC_UPSTA0SET                                0x00000590
#define AVR32_USBC_UPSTA0SET_ERRORFIS                                5
#define AVR32_USBC_UPSTA0SET_ERRORFIS_MASK                  0x00000020
#define AVR32_USBC_UPSTA0SET_ERRORFIS_OFFSET                         5
#define AVR32_USBC_UPSTA0SET_ERRORFIS_SIZE                           1
#define AVR32_USBC_UPSTA0SET_MASK                           0x0000047f
#define AVR32_USBC_UPSTA0SET_NAKEDIS                                 4
#define AVR32_USBC_UPSTA0SET_NAKEDIS_MASK                   0x00000010
#define AVR32_USBC_UPSTA0SET_NAKEDIS_OFFSET                          4
#define AVR32_USBC_UPSTA0SET_NAKEDIS_SIZE                            1
#define AVR32_USBC_UPSTA0SET_PERRIS                                  3
#define AVR32_USBC_UPSTA0SET_PERRIS_MASK                    0x00000008
#define AVR32_USBC_UPSTA0SET_PERRIS_OFFSET                           3
#define AVR32_USBC_UPSTA0SET_PERRIS_SIZE                             1
#define AVR32_USBC_UPSTA0SET_RAMACCERIS                             10
#define AVR32_USBC_UPSTA0SET_RAMACCERIS_MASK                0x00000400
#define AVR32_USBC_UPSTA0SET_RAMACCERIS_OFFSET                      10
#define AVR32_USBC_UPSTA0SET_RAMACCERIS_SIZE                         1
#define AVR32_USBC_UPSTA0SET_RESETVALUE                     0x00000000
#define AVR32_USBC_UPSTA0SET_RXINIS                                  0
#define AVR32_USBC_UPSTA0SET_RXINIS_MASK                    0x00000001
#define AVR32_USBC_UPSTA0SET_RXINIS_OFFSET                           0
#define AVR32_USBC_UPSTA0SET_RXINIS_SIZE                             1
#define AVR32_USBC_UPSTA0SET_RXSTALLDIS                              6
#define AVR32_USBC_UPSTA0SET_RXSTALLDIS_MASK                0x00000040
#define AVR32_USBC_UPSTA0SET_RXSTALLDIS_OFFSET                       6
#define AVR32_USBC_UPSTA0SET_RXSTALLDIS_SIZE                         1
#define AVR32_USBC_UPSTA0SET_TXOUTIS                                 1
#define AVR32_USBC_UPSTA0SET_TXOUTIS_MASK                   0x00000002
#define AVR32_USBC_UPSTA0SET_TXOUTIS_OFFSET                          1
#define AVR32_USBC_UPSTA0SET_TXOUTIS_SIZE                            1
#define AVR32_USBC_UPSTA0SET_TXSTPIS                                 2
#define AVR32_USBC_UPSTA0SET_TXSTPIS_MASK                   0x00000004
#define AVR32_USBC_UPSTA0SET_TXSTPIS_OFFSET                          2
#define AVR32_USBC_UPSTA0SET_TXSTPIS_SIZE                            1
#define AVR32_USBC_UPSTA0_CFGOK                                     18
#define AVR32_USBC_UPSTA0_CFGOK_MASK                        0x00040000
#define AVR32_USBC_UPSTA0_CFGOK_OFFSET                              18
#define AVR32_USBC_UPSTA0_CFGOK_SIZE                                 1
#define AVR32_USBC_UPSTA0_CURRBK                                    14
#define AVR32_USBC_UPSTA0_CURRBK_MASK                       0x0000c000
#define AVR32_USBC_UPSTA0_CURRBK_OFFSET                             14
#define AVR32_USBC_UPSTA0_CURRBK_SIZE                                2
#define AVR32_USBC_UPSTA0_DTSEQ                                      8
#define AVR32_USBC_UPSTA0_DTSEQ_MASK                        0x00000300
#define AVR32_USBC_UPSTA0_DTSEQ_OFFSET                               8
#define AVR32_USBC_UPSTA0_DTSEQ_SIZE                                 2
#define AVR32_USBC_UPSTA0_ERRORFI                                    5
#define AVR32_USBC_UPSTA0_ERRORFI_MASK                      0x00000020
#define AVR32_USBC_UPSTA0_ERRORFI_OFFSET                             5
#define AVR32_USBC_UPSTA0_ERRORFI_SIZE                               1
#define AVR32_USBC_UPSTA0_MASK                              0x7ff5f77f
#define AVR32_USBC_UPSTA0_NAKEDI                                     4
#define AVR32_USBC_UPSTA0_NAKEDI_MASK                       0x00000010
#define AVR32_USBC_UPSTA0_NAKEDI_OFFSET                              4
#define AVR32_USBC_UPSTA0_NAKEDI_SIZE                                1
#define AVR32_USBC_UPSTA0_NBUSYBK                                   12
#define AVR32_USBC_UPSTA0_NBUSYBK_MASK                      0x00003000
#define AVR32_USBC_UPSTA0_NBUSYBK_OFFSET                            12
#define AVR32_USBC_UPSTA0_NBUSYBK_SIZE                               2
#define AVR32_USBC_UPSTA0_PBYCT                                     20
#define AVR32_USBC_UPSTA0_PBYCT_MASK                        0x7ff00000
#define AVR32_USBC_UPSTA0_PBYCT_OFFSET                              20
#define AVR32_USBC_UPSTA0_PBYCT_SIZE                                11
#define AVR32_USBC_UPSTA0_PERRI                                      3
#define AVR32_USBC_UPSTA0_PERRI_MASK                        0x00000008
#define AVR32_USBC_UPSTA0_PERRI_OFFSET                               3
#define AVR32_USBC_UPSTA0_PERRI_SIZE                                 1
#define AVR32_USBC_UPSTA0_RAMACCERI                                 10
#define AVR32_USBC_UPSTA0_RAMACCERI_MASK                    0x00000400
#define AVR32_USBC_UPSTA0_RAMACCERI_OFFSET                          10
#define AVR32_USBC_UPSTA0_RAMACCERI_SIZE                             1
#define AVR32_USBC_UPSTA0_RESETVALUE                        0x00000000
#define AVR32_USBC_UPSTA0_RWALL                                     16
#define AVR32_USBC_UPSTA0_RWALL_MASK                        0x00010000
#define AVR32_USBC_UPSTA0_RWALL_OFFSET                              16
#define AVR32_USBC_UPSTA0_RWALL_SIZE                                 1
#define AVR32_USBC_UPSTA0_RXINI                                      0
#define AVR32_USBC_UPSTA0_RXINI_MASK                        0x00000001
#define AVR32_USBC_UPSTA0_RXINI_OFFSET                               0
#define AVR32_USBC_UPSTA0_RXINI_SIZE                                 1
#define AVR32_USBC_UPSTA0_RXSTALLDI                                  6
#define AVR32_USBC_UPSTA0_RXSTALLDI_MASK                    0x00000040
#define AVR32_USBC_UPSTA0_RXSTALLDI_OFFSET                           6
#define AVR32_USBC_UPSTA0_RXSTALLDI_SIZE                             1
#define AVR32_USBC_UPSTA0_TXOUTI                                     1
#define AVR32_USBC_UPSTA0_TXOUTI_MASK                       0x00000002
#define AVR32_USBC_UPSTA0_TXOUTI_OFFSET                              1
#define AVR32_USBC_UPSTA0_TXOUTI_SIZE                                1
#define AVR32_USBC_UPSTA0_TXSTPI                                     2
#define AVR32_USBC_UPSTA0_TXSTPI_MASK                       0x00000004
#define AVR32_USBC_UPSTA0_TXSTPI_OFFSET                              2
#define AVR32_USBC_UPSTA0_TXSTPI_SIZE                                1
#define AVR32_USBC_UPSTA1                                   0x00000534
#define AVR32_USBC_UPSTA1CLR                                0x00000564
#define AVR32_USBC_UPSTA1CLR_ERRORFIC                                5
#define AVR32_USBC_UPSTA1CLR_ERRORFIC_MASK                  0x00000020
#define AVR32_USBC_UPSTA1CLR_ERRORFIC_OFFSET                         5
#define AVR32_USBC_UPSTA1CLR_ERRORFIC_SIZE                           1
#define AVR32_USBC_UPSTA1CLR_MASK                           0x00000477
#define AVR32_USBC_UPSTA1CLR_NAKEDIC                                 4
#define AVR32_USBC_UPSTA1CLR_NAKEDIC_MASK                   0x00000010
#define AVR32_USBC_UPSTA1CLR_NAKEDIC_OFFSET                          4
#define AVR32_USBC_UPSTA1CLR_NAKEDIC_SIZE                            1
#define AVR32_USBC_UPSTA1CLR_RAMACCERIC                             10
#define AVR32_USBC_UPSTA1CLR_RAMACCERIC_MASK                0x00000400
#define AVR32_USBC_UPSTA1CLR_RAMACCERIC_OFFSET                      10
#define AVR32_USBC_UPSTA1CLR_RAMACCERIC_SIZE                         1
#define AVR32_USBC_UPSTA1CLR_RESETVALUE                     0x00000000
#define AVR32_USBC_UPSTA1CLR_RXINIC                                  0
#define AVR32_USBC_UPSTA1CLR_RXINIC_MASK                    0x00000001
#define AVR32_USBC_UPSTA1CLR_RXINIC_OFFSET                           0
#define AVR32_USBC_UPSTA1CLR_RXINIC_SIZE                             1
#define AVR32_USBC_UPSTA1CLR_RXSTALLDIC                              6
#define AVR32_USBC_UPSTA1CLR_RXSTALLDIC_MASK                0x00000040
#define AVR32_USBC_UPSTA1CLR_RXSTALLDIC_OFFSET                       6
#define AVR32_USBC_UPSTA1CLR_RXSTALLDIC_SIZE                         1
#define AVR32_USBC_UPSTA1CLR_TXOUTIC                                 1
#define AVR32_USBC_UPSTA1CLR_TXOUTIC_MASK                   0x00000002
#define AVR32_USBC_UPSTA1CLR_TXOUTIC_OFFSET                          1
#define AVR32_USBC_UPSTA1CLR_TXOUTIC_SIZE                            1
#define AVR32_USBC_UPSTA1CLR_TXSTPIC                                 2
#define AVR32_USBC_UPSTA1CLR_TXSTPIC_MASK                   0x00000004
#define AVR32_USBC_UPSTA1CLR_TXSTPIC_OFFSET                          2
#define AVR32_USBC_UPSTA1CLR_TXSTPIC_SIZE                            1
#define AVR32_USBC_UPSTA1SET                                0x00000594
#define AVR32_USBC_UPSTA1SET_ERRORFIS                                5
#define AVR32_USBC_UPSTA1SET_ERRORFIS_MASK                  0x00000020
#define AVR32_USBC_UPSTA1SET_ERRORFIS_OFFSET                         5
#define AVR32_USBC_UPSTA1SET_ERRORFIS_SIZE                           1
#define AVR32_USBC_UPSTA1SET_MASK                           0x0000047f
#define AVR32_USBC_UPSTA1SET_NAKEDIS                                 4
#define AVR32_USBC_UPSTA1SET_NAKEDIS_MASK                   0x00000010
#define AVR32_USBC_UPSTA1SET_NAKEDIS_OFFSET                          4
#define AVR32_USBC_UPSTA1SET_NAKEDIS_SIZE                            1
#define AVR32_USBC_UPSTA1SET_PERRIS                                  3
#define AVR32_USBC_UPSTA1SET_PERRIS_MASK                    0x00000008
#define AVR32_USBC_UPSTA1SET_PERRIS_OFFSET                           3
#define AVR32_USBC_UPSTA1SET_PERRIS_SIZE                             1
#define AVR32_USBC_UPSTA1SET_RAMACCERIS                             10
#define AVR32_USBC_UPSTA1SET_RAMACCERIS_MASK                0x00000400
#define AVR32_USBC_UPSTA1SET_RAMACCERIS_OFFSET                      10
#define AVR32_USBC_UPSTA1SET_RAMACCERIS_SIZE                         1
#define AVR32_USBC_UPSTA1SET_RESETVALUE                     0x00000000
#define AVR32_USBC_UPSTA1SET_RXINIS                                  0
#define AVR32_USBC_UPSTA1SET_RXINIS_MASK                    0x00000001
#define AVR32_USBC_UPSTA1SET_RXINIS_OFFSET                           0
#define AVR32_USBC_UPSTA1SET_RXINIS_SIZE                             1
#define AVR32_USBC_UPSTA1SET_RXSTALLDIS                              6
#define AVR32_USBC_UPSTA1SET_RXSTALLDIS_MASK                0x00000040
#define AVR32_USBC_UPSTA1SET_RXSTALLDIS_OFFSET                       6
#define AVR32_USBC_UPSTA1SET_RXSTALLDIS_SIZE                         1
#define AVR32_USBC_UPSTA1SET_TXOUTIS                                 1
#define AVR32_USBC_UPSTA1SET_TXOUTIS_MASK                   0x00000002
#define AVR32_USBC_UPSTA1SET_TXOUTIS_OFFSET                          1
#define AVR32_USBC_UPSTA1SET_TXOUTIS_SIZE                            1
#define AVR32_USBC_UPSTA1SET_TXSTPIS                                 2
#define AVR32_USBC_UPSTA1SET_TXSTPIS_MASK                   0x00000004
#define AVR32_USBC_UPSTA1SET_TXSTPIS_OFFSET                          2
#define AVR32_USBC_UPSTA1SET_TXSTPIS_SIZE                            1
#define AVR32_USBC_UPSTA1_CFGOK                                     18
#define AVR32_USBC_UPSTA1_CFGOK_MASK                        0x00040000
#define AVR32_USBC_UPSTA1_CFGOK_OFFSET                              18
#define AVR32_USBC_UPSTA1_CFGOK_SIZE                                 1
#define AVR32_USBC_UPSTA1_CURRBK                                    14
#define AVR32_USBC_UPSTA1_CURRBK_MASK                       0x0000c000
#define AVR32_USBC_UPSTA1_CURRBK_OFFSET                             14
#define AVR32_USBC_UPSTA1_CURRBK_SIZE                                2
#define AVR32_USBC_UPSTA1_DTSEQ                                      8
#define AVR32_USBC_UPSTA1_DTSEQ_MASK                        0x00000300
#define AVR32_USBC_UPSTA1_DTSEQ_OFFSET                               8
#define AVR32_USBC_UPSTA1_DTSEQ_SIZE                                 2
#define AVR32_USBC_UPSTA1_ERRORFI                                    5
#define AVR32_USBC_UPSTA1_ERRORFI_MASK                      0x00000020
#define AVR32_USBC_UPSTA1_ERRORFI_OFFSET                             5
#define AVR32_USBC_UPSTA1_ERRORFI_SIZE                               1
#define AVR32_USBC_UPSTA1_MASK                              0x7ff5f77f
#define AVR32_USBC_UPSTA1_NAKEDI                                     4
#define AVR32_USBC_UPSTA1_NAKEDI_MASK                       0x00000010
#define AVR32_USBC_UPSTA1_NAKEDI_OFFSET                              4
#define AVR32_USBC_UPSTA1_NAKEDI_SIZE                                1
#define AVR32_USBC_UPSTA1_NBUSYBK                                   12
#define AVR32_USBC_UPSTA1_NBUSYBK_MASK                      0x00003000
#define AVR32_USBC_UPSTA1_NBUSYBK_OFFSET                            12
#define AVR32_USBC_UPSTA1_NBUSYBK_SIZE                               2
#define AVR32_USBC_UPSTA1_PBYCT                                     20
#define AVR32_USBC_UPSTA1_PBYCT_MASK                        0x7ff00000
#define AVR32_USBC_UPSTA1_PBYCT_OFFSET                              20
#define AVR32_USBC_UPSTA1_PBYCT_SIZE                                11
#define AVR32_USBC_UPSTA1_PERRI                                      3
#define AVR32_USBC_UPSTA1_PERRI_MASK                        0x00000008
#define AVR32_USBC_UPSTA1_PERRI_OFFSET                               3
#define AVR32_USBC_UPSTA1_PERRI_SIZE                                 1
#define AVR32_USBC_UPSTA1_RAMACCERI                                 10
#define AVR32_USBC_UPSTA1_RAMACCERI_MASK                    0x00000400
#define AVR32_USBC_UPSTA1_RAMACCERI_OFFSET                          10
#define AVR32_USBC_UPSTA1_RAMACCERI_SIZE                             1
#define AVR32_USBC_UPSTA1_RESETVALUE                        0x00000000
#define AVR32_USBC_UPSTA1_RWALL                                     16
#define AVR32_USBC_UPSTA1_RWALL_MASK                        0x00010000
#define AVR32_USBC_UPSTA1_RWALL_OFFSET                              16
#define AVR32_USBC_UPSTA1_RWALL_SIZE                                 1
#define AVR32_USBC_UPSTA1_RXINI                                      0
#define AVR32_USBC_UPSTA1_RXINI_MASK                        0x00000001
#define AVR32_USBC_UPSTA1_RXINI_OFFSET                               0
#define AVR32_USBC_UPSTA1_RXINI_SIZE                                 1
#define AVR32_USBC_UPSTA1_RXSTALLDI                                  6
#define AVR32_USBC_UPSTA1_RXSTALLDI_MASK                    0x00000040
#define AVR32_USBC_UPSTA1_RXSTALLDI_OFFSET                           6
#define AVR32_USBC_UPSTA1_RXSTALLDI_SIZE                             1
#define AVR32_USBC_UPSTA1_TXOUTI                                     1
#define AVR32_USBC_UPSTA1_TXOUTI_MASK                       0x00000002
#define AVR32_USBC_UPSTA1_TXOUTI_OFFSET                              1
#define AVR32_USBC_UPSTA1_TXOUTI_SIZE                                1
#define AVR32_USBC_UPSTA1_TXSTPI                                     2
#define AVR32_USBC_UPSTA1_TXSTPI_MASK                       0x00000004
#define AVR32_USBC_UPSTA1_TXSTPI_OFFSET                              2
#define AVR32_USBC_UPSTA1_TXSTPI_SIZE                                1
#define AVR32_USBC_UPSTA2                                   0x00000538
#define AVR32_USBC_UPSTA2CLR                                0x00000568
#define AVR32_USBC_UPSTA2CLR_ERRORFIC                                5
#define AVR32_USBC_UPSTA2CLR_ERRORFIC_MASK                  0x00000020
#define AVR32_USBC_UPSTA2CLR_ERRORFIC_OFFSET                         5
#define AVR32_USBC_UPSTA2CLR_ERRORFIC_SIZE                           1
#define AVR32_USBC_UPSTA2CLR_MASK                           0x00000477
#define AVR32_USBC_UPSTA2CLR_NAKEDIC                                 4
#define AVR32_USBC_UPSTA2CLR_NAKEDIC_MASK                   0x00000010
#define AVR32_USBC_UPSTA2CLR_NAKEDIC_OFFSET                          4
#define AVR32_USBC_UPSTA2CLR_NAKEDIC_SIZE                            1
#define AVR32_USBC_UPSTA2CLR_RAMACCERIC                             10
#define AVR32_USBC_UPSTA2CLR_RAMACCERIC_MASK                0x00000400
#define AVR32_USBC_UPSTA2CLR_RAMACCERIC_OFFSET                      10
#define AVR32_USBC_UPSTA2CLR_RAMACCERIC_SIZE                         1
#define AVR32_USBC_UPSTA2CLR_RESETVALUE                     0x00000000
#define AVR32_USBC_UPSTA2CLR_RXINIC                                  0
#define AVR32_USBC_UPSTA2CLR_RXINIC_MASK                    0x00000001
#define AVR32_USBC_UPSTA2CLR_RXINIC_OFFSET                           0
#define AVR32_USBC_UPSTA2CLR_RXINIC_SIZE                             1
#define AVR32_USBC_UPSTA2CLR_RXSTALLDIC                              6
#define AVR32_USBC_UPSTA2CLR_RXSTALLDIC_MASK                0x00000040
#define AVR32_USBC_UPSTA2CLR_RXSTALLDIC_OFFSET                       6
#define AVR32_USBC_UPSTA2CLR_RXSTALLDIC_SIZE                         1
#define AVR32_USBC_UPSTA2CLR_TXOUTIC                                 1
#define AVR32_USBC_UPSTA2CLR_TXOUTIC_MASK                   0x00000002
#define AVR32_USBC_UPSTA2CLR_TXOUTIC_OFFSET                          1
#define AVR32_USBC_UPSTA2CLR_TXOUTIC_SIZE                            1
#define AVR32_USBC_UPSTA2CLR_TXSTPIC                                 2
#define AVR32_USBC_UPSTA2CLR_TXSTPIC_MASK                   0x00000004
#define AVR32_USBC_UPSTA2CLR_TXSTPIC_OFFSET                          2
#define AVR32_USBC_UPSTA2CLR_TXSTPIC_SIZE                            1
#define AVR32_USBC_UPSTA2SET                                0x00000598
#define AVR32_USBC_UPSTA2SET_ERRORFIS                                5
#define AVR32_USBC_UPSTA2SET_ERRORFIS_MASK                  0x00000020
#define AVR32_USBC_UPSTA2SET_ERRORFIS_OFFSET                         5
#define AVR32_USBC_UPSTA2SET_ERRORFIS_SIZE                           1
#define AVR32_USBC_UPSTA2SET_MASK                           0x0000047f
#define AVR32_USBC_UPSTA2SET_NAKEDIS                                 4
#define AVR32_USBC_UPSTA2SET_NAKEDIS_MASK                   0x00000010
#define AVR32_USBC_UPSTA2SET_NAKEDIS_OFFSET                          4
#define AVR32_USBC_UPSTA2SET_NAKEDIS_SIZE                            1
#define AVR32_USBC_UPSTA2SET_PERRIS                                  3
#define AVR32_USBC_UPSTA2SET_PERRIS_MASK                    0x00000008
#define AVR32_USBC_UPSTA2SET_PERRIS_OFFSET                           3
#define AVR32_USBC_UPSTA2SET_PERRIS_SIZE                             1
#define AVR32_USBC_UPSTA2SET_RAMACCERIS                             10
#define AVR32_USBC_UPSTA2SET_RAMACCERIS_MASK                0x00000400
#define AVR32_USBC_UPSTA2SET_RAMACCERIS_OFFSET                      10
#define AVR32_USBC_UPSTA2SET_RAMACCERIS_SIZE                         1
#define AVR32_USBC_UPSTA2SET_RESETVALUE                     0x00000000
#define AVR32_USBC_UPSTA2SET_RXINIS                                  0
#define AVR32_USBC_UPSTA2SET_RXINIS_MASK                    0x00000001
#define AVR32_USBC_UPSTA2SET_RXINIS_OFFSET                           0
#define AVR32_USBC_UPSTA2SET_RXINIS_SIZE                             1
#define AVR32_USBC_UPSTA2SET_RXSTALLDIS                              6
#define AVR32_USBC_UPSTA2SET_RXSTALLDIS_MASK                0x00000040
#define AVR32_USBC_UPSTA2SET_RXSTALLDIS_OFFSET                       6
#define AVR32_USBC_UPSTA2SET_RXSTALLDIS_SIZE                         1
#define AVR32_USBC_UPSTA2SET_TXOUTIS                                 1
#define AVR32_USBC_UPSTA2SET_TXOUTIS_MASK                   0x00000002
#define AVR32_USBC_UPSTA2SET_TXOUTIS_OFFSET                          1
#define AVR32_USBC_UPSTA2SET_TXOUTIS_SIZE                            1
#define AVR32_USBC_UPSTA2SET_TXSTPIS                                 2
#define AVR32_USBC_UPSTA2SET_TXSTPIS_MASK                   0x00000004
#define AVR32_USBC_UPSTA2SET_TXSTPIS_OFFSET                          2
#define AVR32_USBC_UPSTA2SET_TXSTPIS_SIZE                            1
#define AVR32_USBC_UPSTA2_CFGOK                                     18
#define AVR32_USBC_UPSTA2_CFGOK_MASK                        0x00040000
#define AVR32_USBC_UPSTA2_CFGOK_OFFSET                              18
#define AVR32_USBC_UPSTA2_CFGOK_SIZE                                 1
#define AVR32_USBC_UPSTA2_CURRBK                                    14
#define AVR32_USBC_UPSTA2_CURRBK_MASK                       0x0000c000
#define AVR32_USBC_UPSTA2_CURRBK_OFFSET                             14
#define AVR32_USBC_UPSTA2_CURRBK_SIZE                                2
#define AVR32_USBC_UPSTA2_DTSEQ                                      8
#define AVR32_USBC_UPSTA2_DTSEQ_MASK                        0x00000300
#define AVR32_USBC_UPSTA2_DTSEQ_OFFSET                               8
#define AVR32_USBC_UPSTA2_DTSEQ_SIZE                                 2
#define AVR32_USBC_UPSTA2_ERRORFI                                    5
#define AVR32_USBC_UPSTA2_ERRORFI_MASK                      0x00000020
#define AVR32_USBC_UPSTA2_ERRORFI_OFFSET                             5
#define AVR32_USBC_UPSTA2_ERRORFI_SIZE                               1
#define AVR32_USBC_UPSTA2_MASK                              0x7ff5f77f
#define AVR32_USBC_UPSTA2_NAKEDI                                     4
#define AVR32_USBC_UPSTA2_NAKEDI_MASK                       0x00000010
#define AVR32_USBC_UPSTA2_NAKEDI_OFFSET                              4
#define AVR32_USBC_UPSTA2_NAKEDI_SIZE                                1
#define AVR32_USBC_UPSTA2_NBUSYBK                                   12
#define AVR32_USBC_UPSTA2_NBUSYBK_MASK                      0x00003000
#define AVR32_USBC_UPSTA2_NBUSYBK_OFFSET                            12
#define AVR32_USBC_UPSTA2_NBUSYBK_SIZE                               2
#define AVR32_USBC_UPSTA2_PBYCT                                     20
#define AVR32_USBC_UPSTA2_PBYCT_MASK                        0x7ff00000
#define AVR32_USBC_UPSTA2_PBYCT_OFFSET                              20
#define AVR32_USBC_UPSTA2_PBYCT_SIZE                                11
#define AVR32_USBC_UPSTA2_PERRI                                      3
#define AVR32_USBC_UPSTA2_PERRI_MASK                        0x00000008
#define AVR32_USBC_UPSTA2_PERRI_OFFSET                               3
#define AVR32_USBC_UPSTA2_PERRI_SIZE                                 1
#define AVR32_USBC_UPSTA2_RAMACCERI                                 10
#define AVR32_USBC_UPSTA2_RAMACCERI_MASK                    0x00000400
#define AVR32_USBC_UPSTA2_RAMACCERI_OFFSET                          10
#define AVR32_USBC_UPSTA2_RAMACCERI_SIZE                             1
#define AVR32_USBC_UPSTA2_RESETVALUE                        0x00000000
#define AVR32_USBC_UPSTA2_RWALL                                     16
#define AVR32_USBC_UPSTA2_RWALL_MASK                        0x00010000
#define AVR32_USBC_UPSTA2_RWALL_OFFSET                              16
#define AVR32_USBC_UPSTA2_RWALL_SIZE                                 1
#define AVR32_USBC_UPSTA2_RXINI                                      0
#define AVR32_USBC_UPSTA2_RXINI_MASK                        0x00000001
#define AVR32_USBC_UPSTA2_RXINI_OFFSET                               0
#define AVR32_USBC_UPSTA2_RXINI_SIZE                                 1
#define AVR32_USBC_UPSTA2_RXSTALLDI                                  6
#define AVR32_USBC_UPSTA2_RXSTALLDI_MASK                    0x00000040
#define AVR32_USBC_UPSTA2_RXSTALLDI_OFFSET                           6
#define AVR32_USBC_UPSTA2_RXSTALLDI_SIZE                             1
#define AVR32_USBC_UPSTA2_TXOUTI                                     1
#define AVR32_USBC_UPSTA2_TXOUTI_MASK                       0x00000002
#define AVR32_USBC_UPSTA2_TXOUTI_OFFSET                              1
#define AVR32_USBC_UPSTA2_TXOUTI_SIZE                                1
#define AVR32_USBC_UPSTA2_TXSTPI                                     2
#define AVR32_USBC_UPSTA2_TXSTPI_MASK                       0x00000004
#define AVR32_USBC_UPSTA2_TXSTPI_OFFSET                              2
#define AVR32_USBC_UPSTA2_TXSTPI_SIZE                                1
#define AVR32_USBC_UPSTA3                                   0x0000053c
#define AVR32_USBC_UPSTA3CLR                                0x0000056c
#define AVR32_USBC_UPSTA3CLR_ERRORFIC                                5
#define AVR32_USBC_UPSTA3CLR_ERRORFIC_MASK                  0x00000020
#define AVR32_USBC_UPSTA3CLR_ERRORFIC_OFFSET                         5
#define AVR32_USBC_UPSTA3CLR_ERRORFIC_SIZE                           1
#define AVR32_USBC_UPSTA3CLR_MASK                           0x00000477
#define AVR32_USBC_UPSTA3CLR_NAKEDIC                                 4
#define AVR32_USBC_UPSTA3CLR_NAKEDIC_MASK                   0x00000010
#define AVR32_USBC_UPSTA3CLR_NAKEDIC_OFFSET                          4
#define AVR32_USBC_UPSTA3CLR_NAKEDIC_SIZE                            1
#define AVR32_USBC_UPSTA3CLR_RAMACCERIC                             10
#define AVR32_USBC_UPSTA3CLR_RAMACCERIC_MASK                0x00000400
#define AVR32_USBC_UPSTA3CLR_RAMACCERIC_OFFSET                      10
#define AVR32_USBC_UPSTA3CLR_RAMACCERIC_SIZE                         1
#define AVR32_USBC_UPSTA3CLR_RESETVALUE                     0x00000000
#define AVR32_USBC_UPSTA3CLR_RXINIC                                  0
#define AVR32_USBC_UPSTA3CLR_RXINIC_MASK                    0x00000001
#define AVR32_USBC_UPSTA3CLR_RXINIC_OFFSET                           0
#define AVR32_USBC_UPSTA3CLR_RXINIC_SIZE                             1
#define AVR32_USBC_UPSTA3CLR_RXSTALLDIC                              6
#define AVR32_USBC_UPSTA3CLR_RXSTALLDIC_MASK                0x00000040
#define AVR32_USBC_UPSTA3CLR_RXSTALLDIC_OFFSET                       6
#define AVR32_USBC_UPSTA3CLR_RXSTALLDIC_SIZE                         1
#define AVR32_USBC_UPSTA3CLR_TXOUTIC                                 1
#define AVR32_USBC_UPSTA3CLR_TXOUTIC_MASK                   0x00000002
#define AVR32_USBC_UPSTA3CLR_TXOUTIC_OFFSET                          1
#define AVR32_USBC_UPSTA3CLR_TXOUTIC_SIZE                            1
#define AVR32_USBC_UPSTA3CLR_TXSTPIC                                 2
#define AVR32_USBC_UPSTA3CLR_TXSTPIC_MASK                   0x00000004
#define AVR32_USBC_UPSTA3CLR_TXSTPIC_OFFSET                          2
#define AVR32_USBC_UPSTA3CLR_TXSTPIC_SIZE                            1
#define AVR32_USBC_UPSTA3SET                                0x0000059c
#define AVR32_USBC_UPSTA3SET_ERRORFIS                                5
#define AVR32_USBC_UPSTA3SET_ERRORFIS_MASK                  0x00000020
#define AVR32_USBC_UPSTA3SET_ERRORFIS_OFFSET                         5
#define AVR32_USBC_UPSTA3SET_ERRORFIS_SIZE                           1
#define AVR32_USBC_UPSTA3SET_MASK                           0x0000047f
#define AVR32_USBC_UPSTA3SET_NAKEDIS                                 4
#define AVR32_USBC_UPSTA3SET_NAKEDIS_MASK                   0x00000010
#define AVR32_USBC_UPSTA3SET_NAKEDIS_OFFSET                          4
#define AVR32_USBC_UPSTA3SET_NAKEDIS_SIZE                            1
#define AVR32_USBC_UPSTA3SET_PERRIS                                  3
#define AVR32_USBC_UPSTA3SET_PERRIS_MASK                    0x00000008
#define AVR32_USBC_UPSTA3SET_PERRIS_OFFSET                           3
#define AVR32_USBC_UPSTA3SET_PERRIS_SIZE                             1
#define AVR32_USBC_UPSTA3SET_RAMACCERIS                             10
#define AVR32_USBC_UPSTA3SET_RAMACCERIS_MASK                0x00000400
#define AVR32_USBC_UPSTA3SET_RAMACCERIS_OFFSET                      10
#define AVR32_USBC_UPSTA3SET_RAMACCERIS_SIZE                         1
#define AVR32_USBC_UPSTA3SET_RESETVALUE                     0x00000000
#define AVR32_USBC_UPSTA3SET_RXINIS                                  0
#define AVR32_USBC_UPSTA3SET_RXINIS_MASK                    0x00000001
#define AVR32_USBC_UPSTA3SET_RXINIS_OFFSET                           0
#define AVR32_USBC_UPSTA3SET_RXINIS_SIZE                             1
#define AVR32_USBC_UPSTA3SET_RXSTALLDIS                              6
#define AVR32_USBC_UPSTA3SET_RXSTALLDIS_MASK                0x00000040
#define AVR32_USBC_UPSTA3SET_RXSTALLDIS_OFFSET                       6
#define AVR32_USBC_UPSTA3SET_RXSTALLDIS_SIZE                         1
#define AVR32_USBC_UPSTA3SET_TXOUTIS                                 1
#define AVR32_USBC_UPSTA3SET_TXOUTIS_MASK                   0x00000002
#define AVR32_USBC_UPSTA3SET_TXOUTIS_OFFSET                          1
#define AVR32_USBC_UPSTA3SET_TXOUTIS_SIZE                            1
#define AVR32_USBC_UPSTA3SET_TXSTPIS                                 2
#define AVR32_USBC_UPSTA3SET_TXSTPIS_MASK                   0x00000004
#define AVR32_USBC_UPSTA3SET_TXSTPIS_OFFSET                          2
#define AVR32_USBC_UPSTA3SET_TXSTPIS_SIZE                            1
#define AVR32_USBC_UPSTA3_CFGOK                                     18
#define AVR32_USBC_UPSTA3_CFGOK_MASK                        0x00040000
#define AVR32_USBC_UPSTA3_CFGOK_OFFSET                              18
#define AVR32_USBC_UPSTA3_CFGOK_SIZE                                 1
#define AVR32_USBC_UPSTA3_CURRBK                                    14
#define AVR32_USBC_UPSTA3_CURRBK_MASK                       0x0000c000
#define AVR32_USBC_UPSTA3_CURRBK_OFFSET                             14
#define AVR32_USBC_UPSTA3_CURRBK_SIZE                                2
#define AVR32_USBC_UPSTA3_DTSEQ                                      8
#define AVR32_USBC_UPSTA3_DTSEQ_MASK                        0x00000300
#define AVR32_USBC_UPSTA3_DTSEQ_OFFSET                               8
#define AVR32_USBC_UPSTA3_DTSEQ_SIZE                                 2
#define AVR32_USBC_UPSTA3_ERRORFI                                    5
#define AVR32_USBC_UPSTA3_ERRORFI_MASK                      0x00000020
#define AVR32_USBC_UPSTA3_ERRORFI_OFFSET                             5
#define AVR32_USBC_UPSTA3_ERRORFI_SIZE                               1
#define AVR32_USBC_UPSTA3_MASK                              0x7ff5f77f
#define AVR32_USBC_UPSTA3_NAKEDI                                     4
#define AVR32_USBC_UPSTA3_NAKEDI_MASK                       0x00000010
#define AVR32_USBC_UPSTA3_NAKEDI_OFFSET                              4
#define AVR32_USBC_UPSTA3_NAKEDI_SIZE                                1
#define AVR32_USBC_UPSTA3_NBUSYBK                                   12
#define AVR32_USBC_UPSTA3_NBUSYBK_MASK                      0x00003000
#define AVR32_USBC_UPSTA3_NBUSYBK_OFFSET                            12
#define AVR32_USBC_UPSTA3_NBUSYBK_SIZE                               2
#define AVR32_USBC_UPSTA3_PBYCT                                     20
#define AVR32_USBC_UPSTA3_PBYCT_MASK                        0x7ff00000
#define AVR32_USBC_UPSTA3_PBYCT_OFFSET                              20
#define AVR32_USBC_UPSTA3_PBYCT_SIZE                                11
#define AVR32_USBC_UPSTA3_PERRI                                      3
#define AVR32_USBC_UPSTA3_PERRI_MASK                        0x00000008
#define AVR32_USBC_UPSTA3_PERRI_OFFSET                               3
#define AVR32_USBC_UPSTA3_PERRI_SIZE                                 1
#define AVR32_USBC_UPSTA3_RAMACCERI                                 10
#define AVR32_USBC_UPSTA3_RAMACCERI_MASK                    0x00000400
#define AVR32_USBC_UPSTA3_RAMACCERI_OFFSET                          10
#define AVR32_USBC_UPSTA3_RAMACCERI_SIZE                             1
#define AVR32_USBC_UPSTA3_RESETVALUE                        0x00000000
#define AVR32_USBC_UPSTA3_RWALL                                     16
#define AVR32_USBC_UPSTA3_RWALL_MASK                        0x00010000
#define AVR32_USBC_UPSTA3_RWALL_OFFSET                              16
#define AVR32_USBC_UPSTA3_RWALL_SIZE                                 1
#define AVR32_USBC_UPSTA3_RXINI                                      0
#define AVR32_USBC_UPSTA3_RXINI_MASK                        0x00000001
#define AVR32_USBC_UPSTA3_RXINI_OFFSET                               0
#define AVR32_USBC_UPSTA3_RXINI_SIZE                                 1
#define AVR32_USBC_UPSTA3_RXSTALLDI                                  6
#define AVR32_USBC_UPSTA3_RXSTALLDI_MASK                    0x00000040
#define AVR32_USBC_UPSTA3_RXSTALLDI_OFFSET                           6
#define AVR32_USBC_UPSTA3_RXSTALLDI_SIZE                             1
#define AVR32_USBC_UPSTA3_TXOUTI                                     1
#define AVR32_USBC_UPSTA3_TXOUTI_MASK                       0x00000002
#define AVR32_USBC_UPSTA3_TXOUTI_OFFSET                              1
#define AVR32_USBC_UPSTA3_TXOUTI_SIZE                                1
#define AVR32_USBC_UPSTA3_TXSTPI                                     2
#define AVR32_USBC_UPSTA3_TXSTPI_MASK                       0x00000004
#define AVR32_USBC_UPSTA3_TXSTPI_OFFSET                              2
#define AVR32_USBC_UPSTA3_TXSTPI_SIZE                                1
#define AVR32_USBC_UPSTA4                                   0x00000540
#define AVR32_USBC_UPSTA4CLR                                0x00000570
#define AVR32_USBC_UPSTA4CLR_ERRORFIC                                5
#define AVR32_USBC_UPSTA4CLR_ERRORFIC_MASK                  0x00000020
#define AVR32_USBC_UPSTA4CLR_ERRORFIC_OFFSET                         5
#define AVR32_USBC_UPSTA4CLR_ERRORFIC_SIZE                           1
#define AVR32_USBC_UPSTA4CLR_MASK                           0x00000477
#define AVR32_USBC_UPSTA4CLR_NAKEDIC                                 4
#define AVR32_USBC_UPSTA4CLR_NAKEDIC_MASK                   0x00000010
#define AVR32_USBC_UPSTA4CLR_NAKEDIC_OFFSET                          4
#define AVR32_USBC_UPSTA4CLR_NAKEDIC_SIZE                            1
#define AVR32_USBC_UPSTA4CLR_RAMACCERIC                             10
#define AVR32_USBC_UPSTA4CLR_RAMACCERIC_MASK                0x00000400
#define AVR32_USBC_UPSTA4CLR_RAMACCERIC_OFFSET                      10
#define AVR32_USBC_UPSTA4CLR_RAMACCERIC_SIZE                         1
#define AVR32_USBC_UPSTA4CLR_RESETVALUE                     0x00000000
#define AVR32_USBC_UPSTA4CLR_RXINIC                                  0
#define AVR32_USBC_UPSTA4CLR_RXINIC_MASK                    0x00000001
#define AVR32_USBC_UPSTA4CLR_RXINIC_OFFSET                           0
#define AVR32_USBC_UPSTA4CLR_RXINIC_SIZE                             1
#define AVR32_USBC_UPSTA4CLR_RXSTALLDIC                              6
#define AVR32_USBC_UPSTA4CLR_RXSTALLDIC_MASK                0x00000040
#define AVR32_USBC_UPSTA4CLR_RXSTALLDIC_OFFSET                       6
#define AVR32_USBC_UPSTA4CLR_RXSTALLDIC_SIZE                         1
#define AVR32_USBC_UPSTA4CLR_TXOUTIC                                 1
#define AVR32_USBC_UPSTA4CLR_TXOUTIC_MASK                   0x00000002
#define AVR32_USBC_UPSTA4CLR_TXOUTIC_OFFSET                          1
#define AVR32_USBC_UPSTA4CLR_TXOUTIC_SIZE                            1
#define AVR32_USBC_UPSTA4CLR_TXSTPIC                                 2
#define AVR32_USBC_UPSTA4CLR_TXSTPIC_MASK                   0x00000004
#define AVR32_USBC_UPSTA4CLR_TXSTPIC_OFFSET                          2
#define AVR32_USBC_UPSTA4CLR_TXSTPIC_SIZE                            1
#define AVR32_USBC_UPSTA4SET                                0x000005a0
#define AVR32_USBC_UPSTA4SET_ERRORFIS                                5
#define AVR32_USBC_UPSTA4SET_ERRORFIS_MASK                  0x00000020
#define AVR32_USBC_UPSTA4SET_ERRORFIS_OFFSET                         5
#define AVR32_USBC_UPSTA4SET_ERRORFIS_SIZE                           1
#define AVR32_USBC_UPSTA4SET_MASK                           0x0000047f
#define AVR32_USBC_UPSTA4SET_NAKEDIS                                 4
#define AVR32_USBC_UPSTA4SET_NAKEDIS_MASK                   0x00000010
#define AVR32_USBC_UPSTA4SET_NAKEDIS_OFFSET                          4
#define AVR32_USBC_UPSTA4SET_NAKEDIS_SIZE                            1
#define AVR32_USBC_UPSTA4SET_PERRIS                                  3
#define AVR32_USBC_UPSTA4SET_PERRIS_MASK                    0x00000008
#define AVR32_USBC_UPSTA4SET_PERRIS_OFFSET                           3
#define AVR32_USBC_UPSTA4SET_PERRIS_SIZE                             1
#define AVR32_USBC_UPSTA4SET_RAMACCERIS                             10
#define AVR32_USBC_UPSTA4SET_RAMACCERIS_MASK                0x00000400
#define AVR32_USBC_UPSTA4SET_RAMACCERIS_OFFSET                      10
#define AVR32_USBC_UPSTA4SET_RAMACCERIS_SIZE                         1
#define AVR32_USBC_UPSTA4SET_RESETVALUE                     0x00000000
#define AVR32_USBC_UPSTA4SET_RXINIS                                  0
#define AVR32_USBC_UPSTA4SET_RXINIS_MASK                    0x00000001
#define AVR32_USBC_UPSTA4SET_RXINIS_OFFSET                           0
#define AVR32_USBC_UPSTA4SET_RXINIS_SIZE                             1
#define AVR32_USBC_UPSTA4SET_RXSTALLDIS                              6
#define AVR32_USBC_UPSTA4SET_RXSTALLDIS_MASK                0x00000040
#define AVR32_USBC_UPSTA4SET_RXSTALLDIS_OFFSET                       6
#define AVR32_USBC_UPSTA4SET_RXSTALLDIS_SIZE                         1
#define AVR32_USBC_UPSTA4SET_TXOUTIS                                 1
#define AVR32_USBC_UPSTA4SET_TXOUTIS_MASK                   0x00000002
#define AVR32_USBC_UPSTA4SET_TXOUTIS_OFFSET                          1
#define AVR32_USBC_UPSTA4SET_TXOUTIS_SIZE                            1
#define AVR32_USBC_UPSTA4SET_TXSTPIS                                 2
#define AVR32_USBC_UPSTA4SET_TXSTPIS_MASK                   0x00000004
#define AVR32_USBC_UPSTA4SET_TXSTPIS_OFFSET                          2
#define AVR32_USBC_UPSTA4SET_TXSTPIS_SIZE                            1
#define AVR32_USBC_UPSTA4_CFGOK                                     18
#define AVR32_USBC_UPSTA4_CFGOK_MASK                        0x00040000
#define AVR32_USBC_UPSTA4_CFGOK_OFFSET                              18
#define AVR32_USBC_UPSTA4_CFGOK_SIZE                                 1
#define AVR32_USBC_UPSTA4_CURRBK                                    14
#define AVR32_USBC_UPSTA4_CURRBK_MASK                       0x0000c000
#define AVR32_USBC_UPSTA4_CURRBK_OFFSET                             14
#define AVR32_USBC_UPSTA4_CURRBK_SIZE                                2
#define AVR32_USBC_UPSTA4_DTSEQ                                      8
#define AVR32_USBC_UPSTA4_DTSEQ_MASK                        0x00000300
#define AVR32_USBC_UPSTA4_DTSEQ_OFFSET                               8
#define AVR32_USBC_UPSTA4_DTSEQ_SIZE                                 2
#define AVR32_USBC_UPSTA4_ERRORFI                                    5
#define AVR32_USBC_UPSTA4_ERRORFI_MASK                      0x00000020
#define AVR32_USBC_UPSTA4_ERRORFI_OFFSET                             5
#define AVR32_USBC_UPSTA4_ERRORFI_SIZE                               1
#define AVR32_USBC_UPSTA4_MASK                              0x7ff5f77f
#define AVR32_USBC_UPSTA4_NAKEDI                                     4
#define AVR32_USBC_UPSTA4_NAKEDI_MASK                       0x00000010
#define AVR32_USBC_UPSTA4_NAKEDI_OFFSET                              4
#define AVR32_USBC_UPSTA4_NAKEDI_SIZE                                1
#define AVR32_USBC_UPSTA4_NBUSYBK                                   12
#define AVR32_USBC_UPSTA4_NBUSYBK_MASK                      0x00003000
#define AVR32_USBC_UPSTA4_NBUSYBK_OFFSET                            12
#define AVR32_USBC_UPSTA4_NBUSYBK_SIZE                               2
#define AVR32_USBC_UPSTA4_PBYCT                                     20
#define AVR32_USBC_UPSTA4_PBYCT_MASK                        0x7ff00000
#define AVR32_USBC_UPSTA4_PBYCT_OFFSET                              20
#define AVR32_USBC_UPSTA4_PBYCT_SIZE                                11
#define AVR32_USBC_UPSTA4_PERRI                                      3
#define AVR32_USBC_UPSTA4_PERRI_MASK                        0x00000008
#define AVR32_USBC_UPSTA4_PERRI_OFFSET                               3
#define AVR32_USBC_UPSTA4_PERRI_SIZE                                 1
#define AVR32_USBC_UPSTA4_RAMACCERI                                 10
#define AVR32_USBC_UPSTA4_RAMACCERI_MASK                    0x00000400
#define AVR32_USBC_UPSTA4_RAMACCERI_OFFSET                          10
#define AVR32_USBC_UPSTA4_RAMACCERI_SIZE                             1
#define AVR32_USBC_UPSTA4_RESETVALUE                        0x00000000
#define AVR32_USBC_UPSTA4_RWALL                                     16
#define AVR32_USBC_UPSTA4_RWALL_MASK                        0x00010000
#define AVR32_USBC_UPSTA4_RWALL_OFFSET                              16
#define AVR32_USBC_UPSTA4_RWALL_SIZE                                 1
#define AVR32_USBC_UPSTA4_RXINI                                      0
#define AVR32_USBC_UPSTA4_RXINI_MASK                        0x00000001
#define AVR32_USBC_UPSTA4_RXINI_OFFSET                               0
#define AVR32_USBC_UPSTA4_RXINI_SIZE                                 1
#define AVR32_USBC_UPSTA4_RXSTALLDI                                  6
#define AVR32_USBC_UPSTA4_RXSTALLDI_MASK                    0x00000040
#define AVR32_USBC_UPSTA4_RXSTALLDI_OFFSET                           6
#define AVR32_USBC_UPSTA4_RXSTALLDI_SIZE                             1
#define AVR32_USBC_UPSTA4_TXOUTI                                     1
#define AVR32_USBC_UPSTA4_TXOUTI_MASK                       0x00000002
#define AVR32_USBC_UPSTA4_TXOUTI_OFFSET                              1
#define AVR32_USBC_UPSTA4_TXOUTI_SIZE                                1
#define AVR32_USBC_UPSTA4_TXSTPI                                     2
#define AVR32_USBC_UPSTA4_TXSTPI_MASK                       0x00000004
#define AVR32_USBC_UPSTA4_TXSTPI_OFFSET                              2
#define AVR32_USBC_UPSTA4_TXSTPI_SIZE                                1
#define AVR32_USBC_UPSTA5                                   0x00000544
#define AVR32_USBC_UPSTA5CLR                                0x00000574
#define AVR32_USBC_UPSTA5CLR_ERRORFIC                                5
#define AVR32_USBC_UPSTA5CLR_ERRORFIC_MASK                  0x00000020
#define AVR32_USBC_UPSTA5CLR_ERRORFIC_OFFSET                         5
#define AVR32_USBC_UPSTA5CLR_ERRORFIC_SIZE                           1
#define AVR32_USBC_UPSTA5CLR_MASK                           0x00000477
#define AVR32_USBC_UPSTA5CLR_NAKEDIC                                 4
#define AVR32_USBC_UPSTA5CLR_NAKEDIC_MASK                   0x00000010
#define AVR32_USBC_UPSTA5CLR_NAKEDIC_OFFSET                          4
#define AVR32_USBC_UPSTA5CLR_NAKEDIC_SIZE                            1
#define AVR32_USBC_UPSTA5CLR_RAMACCERIC                             10
#define AVR32_USBC_UPSTA5CLR_RAMACCERIC_MASK                0x00000400
#define AVR32_USBC_UPSTA5CLR_RAMACCERIC_OFFSET                      10
#define AVR32_USBC_UPSTA5CLR_RAMACCERIC_SIZE                         1
#define AVR32_USBC_UPSTA5CLR_RESETVALUE                     0x00000000
#define AVR32_USBC_UPSTA5CLR_RXINIC                                  0
#define AVR32_USBC_UPSTA5CLR_RXINIC_MASK                    0x00000001
#define AVR32_USBC_UPSTA5CLR_RXINIC_OFFSET                           0
#define AVR32_USBC_UPSTA5CLR_RXINIC_SIZE                             1
#define AVR32_USBC_UPSTA5CLR_RXSTALLDIC                              6
#define AVR32_USBC_UPSTA5CLR_RXSTALLDIC_MASK                0x00000040
#define AVR32_USBC_UPSTA5CLR_RXSTALLDIC_OFFSET                       6
#define AVR32_USBC_UPSTA5CLR_RXSTALLDIC_SIZE                         1
#define AVR32_USBC_UPSTA5CLR_TXOUTIC                                 1
#define AVR32_USBC_UPSTA5CLR_TXOUTIC_MASK                   0x00000002
#define AVR32_USBC_UPSTA5CLR_TXOUTIC_OFFSET                          1
#define AVR32_USBC_UPSTA5CLR_TXOUTIC_SIZE                            1
#define AVR32_USBC_UPSTA5CLR_TXSTPIC                                 2
#define AVR32_USBC_UPSTA5CLR_TXSTPIC_MASK                   0x00000004
#define AVR32_USBC_UPSTA5CLR_TXSTPIC_OFFSET                          2
#define AVR32_USBC_UPSTA5CLR_TXSTPIC_SIZE                            1
#define AVR32_USBC_UPSTA5SET                                0x000005a4
#define AVR32_USBC_UPSTA5SET_ERRORFIS                                5
#define AVR32_USBC_UPSTA5SET_ERRORFIS_MASK                  0x00000020
#define AVR32_USBC_UPSTA5SET_ERRORFIS_OFFSET                         5
#define AVR32_USBC_UPSTA5SET_ERRORFIS_SIZE                           1
#define AVR32_USBC_UPSTA5SET_MASK                           0x0000047f
#define AVR32_USBC_UPSTA5SET_NAKEDIS                                 4
#define AVR32_USBC_UPSTA5SET_NAKEDIS_MASK                   0x00000010
#define AVR32_USBC_UPSTA5SET_NAKEDIS_OFFSET                          4
#define AVR32_USBC_UPSTA5SET_NAKEDIS_SIZE                            1
#define AVR32_USBC_UPSTA5SET_PERRIS                                  3
#define AVR32_USBC_UPSTA5SET_PERRIS_MASK                    0x00000008
#define AVR32_USBC_UPSTA5SET_PERRIS_OFFSET                           3
#define AVR32_USBC_UPSTA5SET_PERRIS_SIZE                             1
#define AVR32_USBC_UPSTA5SET_RAMACCERIS                             10
#define AVR32_USBC_UPSTA5SET_RAMACCERIS_MASK                0x00000400
#define AVR32_USBC_UPSTA5SET_RAMACCERIS_OFFSET                      10
#define AVR32_USBC_UPSTA5SET_RAMACCERIS_SIZE                         1
#define AVR32_USBC_UPSTA5SET_RESETVALUE                     0x00000000
#define AVR32_USBC_UPSTA5SET_RXINIS                                  0
#define AVR32_USBC_UPSTA5SET_RXINIS_MASK                    0x00000001
#define AVR32_USBC_UPSTA5SET_RXINIS_OFFSET                           0
#define AVR32_USBC_UPSTA5SET_RXINIS_SIZE                             1
#define AVR32_USBC_UPSTA5SET_RXSTALLDIS                              6
#define AVR32_USBC_UPSTA5SET_RXSTALLDIS_MASK                0x00000040
#define AVR32_USBC_UPSTA5SET_RXSTALLDIS_OFFSET                       6
#define AVR32_USBC_UPSTA5SET_RXSTALLDIS_SIZE                         1
#define AVR32_USBC_UPSTA5SET_TXOUTIS                                 1
#define AVR32_USBC_UPSTA5SET_TXOUTIS_MASK                   0x00000002
#define AVR32_USBC_UPSTA5SET_TXOUTIS_OFFSET                          1
#define AVR32_USBC_UPSTA5SET_TXOUTIS_SIZE                            1
#define AVR32_USBC_UPSTA5SET_TXSTPIS                                 2
#define AVR32_USBC_UPSTA5SET_TXSTPIS_MASK                   0x00000004
#define AVR32_USBC_UPSTA5SET_TXSTPIS_OFFSET                          2
#define AVR32_USBC_UPSTA5SET_TXSTPIS_SIZE                            1
#define AVR32_USBC_UPSTA5_CFGOK                                     18
#define AVR32_USBC_UPSTA5_CFGOK_MASK                        0x00040000
#define AVR32_USBC_UPSTA5_CFGOK_OFFSET                              18
#define AVR32_USBC_UPSTA5_CFGOK_SIZE                                 1
#define AVR32_USBC_UPSTA5_CURRBK                                    14
#define AVR32_USBC_UPSTA5_CURRBK_MASK                       0x0000c000
#define AVR32_USBC_UPSTA5_CURRBK_OFFSET                             14
#define AVR32_USBC_UPSTA5_CURRBK_SIZE                                2
#define AVR32_USBC_UPSTA5_DTSEQ                                      8
#define AVR32_USBC_UPSTA5_DTSEQ_MASK                        0x00000300
#define AVR32_USBC_UPSTA5_DTSEQ_OFFSET                               8
#define AVR32_USBC_UPSTA5_DTSEQ_SIZE                                 2
#define AVR32_USBC_UPSTA5_ERRORFI                                    5
#define AVR32_USBC_UPSTA5_ERRORFI_MASK                      0x00000020
#define AVR32_USBC_UPSTA5_ERRORFI_OFFSET                             5
#define AVR32_USBC_UPSTA5_ERRORFI_SIZE                               1
#define AVR32_USBC_UPSTA5_MASK                              0x7ff5f77f
#define AVR32_USBC_UPSTA5_NAKEDI                                     4
#define AVR32_USBC_UPSTA5_NAKEDI_MASK                       0x00000010
#define AVR32_USBC_UPSTA5_NAKEDI_OFFSET                              4
#define AVR32_USBC_UPSTA5_NAKEDI_SIZE                                1
#define AVR32_USBC_UPSTA5_NBUSYBK                                   12
#define AVR32_USBC_UPSTA5_NBUSYBK_MASK                      0x00003000
#define AVR32_USBC_UPSTA5_NBUSYBK_OFFSET                            12
#define AVR32_USBC_UPSTA5_NBUSYBK_SIZE                               2
#define AVR32_USBC_UPSTA5_PBYCT                                     20
#define AVR32_USBC_UPSTA5_PBYCT_MASK                        0x7ff00000
#define AVR32_USBC_UPSTA5_PBYCT_OFFSET                              20
#define AVR32_USBC_UPSTA5_PBYCT_SIZE                                11
#define AVR32_USBC_UPSTA5_PERRI                                      3
#define AVR32_USBC_UPSTA5_PERRI_MASK                        0x00000008
#define AVR32_USBC_UPSTA5_PERRI_OFFSET                               3
#define AVR32_USBC_UPSTA5_PERRI_SIZE                                 1
#define AVR32_USBC_UPSTA5_RAMACCERI                                 10
#define AVR32_USBC_UPSTA5_RAMACCERI_MASK                    0x00000400
#define AVR32_USBC_UPSTA5_RAMACCERI_OFFSET                          10
#define AVR32_USBC_UPSTA5_RAMACCERI_SIZE                             1
#define AVR32_USBC_UPSTA5_RESETVALUE                        0x00000000
#define AVR32_USBC_UPSTA5_RWALL                                     16
#define AVR32_USBC_UPSTA5_RWALL_MASK                        0x00010000
#define AVR32_USBC_UPSTA5_RWALL_OFFSET                              16
#define AVR32_USBC_UPSTA5_RWALL_SIZE                                 1
#define AVR32_USBC_UPSTA5_RXINI                                      0
#define AVR32_USBC_UPSTA5_RXINI_MASK                        0x00000001
#define AVR32_USBC_UPSTA5_RXINI_OFFSET                               0
#define AVR32_USBC_UPSTA5_RXINI_SIZE                                 1
#define AVR32_USBC_UPSTA5_RXSTALLDI                                  6
#define AVR32_USBC_UPSTA5_RXSTALLDI_MASK                    0x00000040
#define AVR32_USBC_UPSTA5_RXSTALLDI_OFFSET                           6
#define AVR32_USBC_UPSTA5_RXSTALLDI_SIZE                             1
#define AVR32_USBC_UPSTA5_TXOUTI                                     1
#define AVR32_USBC_UPSTA5_TXOUTI_MASK                       0x00000002
#define AVR32_USBC_UPSTA5_TXOUTI_OFFSET                              1
#define AVR32_USBC_UPSTA5_TXOUTI_SIZE                                1
#define AVR32_USBC_UPSTA5_TXSTPI                                     2
#define AVR32_USBC_UPSTA5_TXSTPI_MASK                       0x00000004
#define AVR32_USBC_UPSTA5_TXSTPI_OFFSET                              2
#define AVR32_USBC_UPSTA5_TXSTPI_SIZE                                1
#define AVR32_USBC_UPSTA6                                   0x00000548
#define AVR32_USBC_UPSTA6CLR                                0x00000578
#define AVR32_USBC_UPSTA6CLR_ERRORFIC                                5
#define AVR32_USBC_UPSTA6CLR_ERRORFIC_MASK                  0x00000020
#define AVR32_USBC_UPSTA6CLR_ERRORFIC_OFFSET                         5
#define AVR32_USBC_UPSTA6CLR_ERRORFIC_SIZE                           1
#define AVR32_USBC_UPSTA6CLR_MASK                           0x00000477
#define AVR32_USBC_UPSTA6CLR_NAKEDIC                                 4
#define AVR32_USBC_UPSTA6CLR_NAKEDIC_MASK                   0x00000010
#define AVR32_USBC_UPSTA6CLR_NAKEDIC_OFFSET                          4
#define AVR32_USBC_UPSTA6CLR_NAKEDIC_SIZE                            1
#define AVR32_USBC_UPSTA6CLR_RAMACCERIC                             10
#define AVR32_USBC_UPSTA6CLR_RAMACCERIC_MASK                0x00000400
#define AVR32_USBC_UPSTA6CLR_RAMACCERIC_OFFSET                      10
#define AVR32_USBC_UPSTA6CLR_RAMACCERIC_SIZE                         1
#define AVR32_USBC_UPSTA6CLR_RESETVALUE                     0x00000000
#define AVR32_USBC_UPSTA6CLR_RXINIC                                  0
#define AVR32_USBC_UPSTA6CLR_RXINIC_MASK                    0x00000001
#define AVR32_USBC_UPSTA6CLR_RXINIC_OFFSET                           0
#define AVR32_USBC_UPSTA6CLR_RXINIC_SIZE                             1
#define AVR32_USBC_UPSTA6CLR_RXSTALLDIC                              6
#define AVR32_USBC_UPSTA6CLR_RXSTALLDIC_MASK                0x00000040
#define AVR32_USBC_UPSTA6CLR_RXSTALLDIC_OFFSET                       6
#define AVR32_USBC_UPSTA6CLR_RXSTALLDIC_SIZE                         1
#define AVR32_USBC_UPSTA6CLR_TXOUTIC                                 1
#define AVR32_USBC_UPSTA6CLR_TXOUTIC_MASK                   0x00000002
#define AVR32_USBC_UPSTA6CLR_TXOUTIC_OFFSET                          1
#define AVR32_USBC_UPSTA6CLR_TXOUTIC_SIZE                            1
#define AVR32_USBC_UPSTA6CLR_TXSTPIC                                 2
#define AVR32_USBC_UPSTA6CLR_TXSTPIC_MASK                   0x00000004
#define AVR32_USBC_UPSTA6CLR_TXSTPIC_OFFSET                          2
#define AVR32_USBC_UPSTA6CLR_TXSTPIC_SIZE                            1
#define AVR32_USBC_UPSTA6SET                                0x000005a8
#define AVR32_USBC_UPSTA6SET_ERRORFIS                                5
#define AVR32_USBC_UPSTA6SET_ERRORFIS_MASK                  0x00000020
#define AVR32_USBC_UPSTA6SET_ERRORFIS_OFFSET                         5
#define AVR32_USBC_UPSTA6SET_ERRORFIS_SIZE                           1
#define AVR32_USBC_UPSTA6SET_MASK                           0x0000047f
#define AVR32_USBC_UPSTA6SET_NAKEDIS                                 4
#define AVR32_USBC_UPSTA6SET_NAKEDIS_MASK                   0x00000010
#define AVR32_USBC_UPSTA6SET_NAKEDIS_OFFSET                          4
#define AVR32_USBC_UPSTA6SET_NAKEDIS_SIZE                            1
#define AVR32_USBC_UPSTA6SET_PERRIS                                  3
#define AVR32_USBC_UPSTA6SET_PERRIS_MASK                    0x00000008
#define AVR32_USBC_UPSTA6SET_PERRIS_OFFSET                           3
#define AVR32_USBC_UPSTA6SET_PERRIS_SIZE                             1
#define AVR32_USBC_UPSTA6SET_RAMACCERIS                             10
#define AVR32_USBC_UPSTA6SET_RAMACCERIS_MASK                0x00000400
#define AVR32_USBC_UPSTA6SET_RAMACCERIS_OFFSET                      10
#define AVR32_USBC_UPSTA6SET_RAMACCERIS_SIZE                         1
#define AVR32_USBC_UPSTA6SET_RESETVALUE                     0x00000000
#define AVR32_USBC_UPSTA6SET_RXINIS                                  0
#define AVR32_USBC_UPSTA6SET_RXINIS_MASK                    0x00000001
#define AVR32_USBC_UPSTA6SET_RXINIS_OFFSET                           0
#define AVR32_USBC_UPSTA6SET_RXINIS_SIZE                             1
#define AVR32_USBC_UPSTA6SET_RXSTALLDIS                              6
#define AVR32_USBC_UPSTA6SET_RXSTALLDIS_MASK                0x00000040
#define AVR32_USBC_UPSTA6SET_RXSTALLDIS_OFFSET                       6
#define AVR32_USBC_UPSTA6SET_RXSTALLDIS_SIZE                         1
#define AVR32_USBC_UPSTA6SET_TXOUTIS                                 1
#define AVR32_USBC_UPSTA6SET_TXOUTIS_MASK                   0x00000002
#define AVR32_USBC_UPSTA6SET_TXOUTIS_OFFSET                          1
#define AVR32_USBC_UPSTA6SET_TXOUTIS_SIZE                            1
#define AVR32_USBC_UPSTA6SET_TXSTPIS                                 2
#define AVR32_USBC_UPSTA6SET_TXSTPIS_MASK                   0x00000004
#define AVR32_USBC_UPSTA6SET_TXSTPIS_OFFSET                          2
#define AVR32_USBC_UPSTA6SET_TXSTPIS_SIZE                            1
#define AVR32_USBC_UPSTA6_CFGOK                                     18
#define AVR32_USBC_UPSTA6_CFGOK_MASK                        0x00040000
#define AVR32_USBC_UPSTA6_CFGOK_OFFSET                              18
#define AVR32_USBC_UPSTA6_CFGOK_SIZE                                 1
#define AVR32_USBC_UPSTA6_CURRBK                                    14
#define AVR32_USBC_UPSTA6_CURRBK_MASK                       0x0000c000
#define AVR32_USBC_UPSTA6_CURRBK_OFFSET                             14
#define AVR32_USBC_UPSTA6_CURRBK_SIZE                                2
#define AVR32_USBC_UPSTA6_DTSEQ                                      8
#define AVR32_USBC_UPSTA6_DTSEQ_MASK                        0x00000300
#define AVR32_USBC_UPSTA6_DTSEQ_OFFSET                               8
#define AVR32_USBC_UPSTA6_DTSEQ_SIZE                                 2
#define AVR32_USBC_UPSTA6_ERRORFI                                    5
#define AVR32_USBC_UPSTA6_ERRORFI_MASK                      0x00000020
#define AVR32_USBC_UPSTA6_ERRORFI_OFFSET                             5
#define AVR32_USBC_UPSTA6_ERRORFI_SIZE                               1
#define AVR32_USBC_UPSTA6_MASK                              0x7ff5f77f
#define AVR32_USBC_UPSTA6_NAKEDI                                     4
#define AVR32_USBC_UPSTA6_NAKEDI_MASK                       0x00000010
#define AVR32_USBC_UPSTA6_NAKEDI_OFFSET                              4
#define AVR32_USBC_UPSTA6_NAKEDI_SIZE                                1
#define AVR32_USBC_UPSTA6_NBUSYBK                                   12
#define AVR32_USBC_UPSTA6_NBUSYBK_MASK                      0x00003000
#define AVR32_USBC_UPSTA6_NBUSYBK_OFFSET                            12
#define AVR32_USBC_UPSTA6_NBUSYBK_SIZE                               2
#define AVR32_USBC_UPSTA6_PBYCT                                     20
#define AVR32_USBC_UPSTA6_PBYCT_MASK                        0x7ff00000
#define AVR32_USBC_UPSTA6_PBYCT_OFFSET                              20
#define AVR32_USBC_UPSTA6_PBYCT_SIZE                                11
#define AVR32_USBC_UPSTA6_PERRI                                      3
#define AVR32_USBC_UPSTA6_PERRI_MASK                        0x00000008
#define AVR32_USBC_UPSTA6_PERRI_OFFSET                               3
#define AVR32_USBC_UPSTA6_PERRI_SIZE                                 1
#define AVR32_USBC_UPSTA6_RAMACCERI                                 10
#define AVR32_USBC_UPSTA6_RAMACCERI_MASK                    0x00000400
#define AVR32_USBC_UPSTA6_RAMACCERI_OFFSET                          10
#define AVR32_USBC_UPSTA6_RAMACCERI_SIZE                             1
#define AVR32_USBC_UPSTA6_RESETVALUE                        0x00000000
#define AVR32_USBC_UPSTA6_RWALL                                     16
#define AVR32_USBC_UPSTA6_RWALL_MASK                        0x00010000
#define AVR32_USBC_UPSTA6_RWALL_OFFSET                              16
#define AVR32_USBC_UPSTA6_RWALL_SIZE                                 1
#define AVR32_USBC_UPSTA6_RXINI                                      0
#define AVR32_USBC_UPSTA6_RXINI_MASK                        0x00000001
#define AVR32_USBC_UPSTA6_RXINI_OFFSET                               0
#define AVR32_USBC_UPSTA6_RXINI_SIZE                                 1
#define AVR32_USBC_UPSTA6_RXSTALLDI                                  6
#define AVR32_USBC_UPSTA6_RXSTALLDI_MASK                    0x00000040
#define AVR32_USBC_UPSTA6_RXSTALLDI_OFFSET                           6
#define AVR32_USBC_UPSTA6_RXSTALLDI_SIZE                             1
#define AVR32_USBC_UPSTA6_TXOUTI                                     1
#define AVR32_USBC_UPSTA6_TXOUTI_MASK                       0x00000002
#define AVR32_USBC_UPSTA6_TXOUTI_OFFSET                              1
#define AVR32_USBC_UPSTA6_TXOUTI_SIZE                                1
#define AVR32_USBC_UPSTA6_TXSTPI                                     2
#define AVR32_USBC_UPSTA6_TXSTPI_MASK                       0x00000004
#define AVR32_USBC_UPSTA6_TXSTPI_OFFSET                              2
#define AVR32_USBC_UPSTA6_TXSTPI_SIZE                                1
#define AVR32_USBC_UPSTA7                                   0x0000054c
#define AVR32_USBC_UPSTA7CLR                                0x0000057c
#define AVR32_USBC_UPSTA7CLR_ERRORFIC                                5
#define AVR32_USBC_UPSTA7CLR_ERRORFIC_MASK                  0x00000020
#define AVR32_USBC_UPSTA7CLR_ERRORFIC_OFFSET                         5
#define AVR32_USBC_UPSTA7CLR_ERRORFIC_SIZE                           1
#define AVR32_USBC_UPSTA7CLR_MASK                           0x00000477
#define AVR32_USBC_UPSTA7CLR_NAKEDIC                                 4
#define AVR32_USBC_UPSTA7CLR_NAKEDIC_MASK                   0x00000010
#define AVR32_USBC_UPSTA7CLR_NAKEDIC_OFFSET                          4
#define AVR32_USBC_UPSTA7CLR_NAKEDIC_SIZE                            1
#define AVR32_USBC_UPSTA7CLR_RAMACCERIC                             10
#define AVR32_USBC_UPSTA7CLR_RAMACCERIC_MASK                0x00000400
#define AVR32_USBC_UPSTA7CLR_RAMACCERIC_OFFSET                      10
#define AVR32_USBC_UPSTA7CLR_RAMACCERIC_SIZE                         1
#define AVR32_USBC_UPSTA7CLR_RESETVALUE                     0x00000000
#define AVR32_USBC_UPSTA7CLR_RXINIC                                  0
#define AVR32_USBC_UPSTA7CLR_RXINIC_MASK                    0x00000001
#define AVR32_USBC_UPSTA7CLR_RXINIC_OFFSET                           0
#define AVR32_USBC_UPSTA7CLR_RXINIC_SIZE                             1
#define AVR32_USBC_UPSTA7CLR_RXSTALLDIC                              6
#define AVR32_USBC_UPSTA7CLR_RXSTALLDIC_MASK                0x00000040
#define AVR32_USBC_UPSTA7CLR_RXSTALLDIC_OFFSET                       6
#define AVR32_USBC_UPSTA7CLR_RXSTALLDIC_SIZE                         1
#define AVR32_USBC_UPSTA7CLR_TXOUTIC                                 1
#define AVR32_USBC_UPSTA7CLR_TXOUTIC_MASK                   0x00000002
#define AVR32_USBC_UPSTA7CLR_TXOUTIC_OFFSET                          1
#define AVR32_USBC_UPSTA7CLR_TXOUTIC_SIZE                            1
#define AVR32_USBC_UPSTA7CLR_TXSTPIC                                 2
#define AVR32_USBC_UPSTA7CLR_TXSTPIC_MASK                   0x00000004
#define AVR32_USBC_UPSTA7CLR_TXSTPIC_OFFSET                          2
#define AVR32_USBC_UPSTA7CLR_TXSTPIC_SIZE                            1
#define AVR32_USBC_UPSTA7SET                                0x000005ac
#define AVR32_USBC_UPSTA7SET_ERRORFIS                                5
#define AVR32_USBC_UPSTA7SET_ERRORFIS_MASK                  0x00000020
#define AVR32_USBC_UPSTA7SET_ERRORFIS_OFFSET                         5
#define AVR32_USBC_UPSTA7SET_ERRORFIS_SIZE                           1
#define AVR32_USBC_UPSTA7SET_MASK                           0x0000047f
#define AVR32_USBC_UPSTA7SET_NAKEDIS                                 4
#define AVR32_USBC_UPSTA7SET_NAKEDIS_MASK                   0x00000010
#define AVR32_USBC_UPSTA7SET_NAKEDIS_OFFSET                          4
#define AVR32_USBC_UPSTA7SET_NAKEDIS_SIZE                            1
#define AVR32_USBC_UPSTA7SET_PERRIS                                  3
#define AVR32_USBC_UPSTA7SET_PERRIS_MASK                    0x00000008
#define AVR32_USBC_UPSTA7SET_PERRIS_OFFSET                           3
#define AVR32_USBC_UPSTA7SET_PERRIS_SIZE                             1
#define AVR32_USBC_UPSTA7SET_RAMACCERIS                             10
#define AVR32_USBC_UPSTA7SET_RAMACCERIS_MASK                0x00000400
#define AVR32_USBC_UPSTA7SET_RAMACCERIS_OFFSET                      10
#define AVR32_USBC_UPSTA7SET_RAMACCERIS_SIZE                         1
#define AVR32_USBC_UPSTA7SET_RESETVALUE                     0x00000000
#define AVR32_USBC_UPSTA7SET_RXINIS                                  0
#define AVR32_USBC_UPSTA7SET_RXINIS_MASK                    0x00000001
#define AVR32_USBC_UPSTA7SET_RXINIS_OFFSET                           0
#define AVR32_USBC_UPSTA7SET_RXINIS_SIZE                             1
#define AVR32_USBC_UPSTA7SET_RXSTALLDIS                              6
#define AVR32_USBC_UPSTA7SET_RXSTALLDIS_MASK                0x00000040
#define AVR32_USBC_UPSTA7SET_RXSTALLDIS_OFFSET                       6
#define AVR32_USBC_UPSTA7SET_RXSTALLDIS_SIZE                         1
#define AVR32_USBC_UPSTA7SET_TXOUTIS                                 1
#define AVR32_USBC_UPSTA7SET_TXOUTIS_MASK                   0x00000002
#define AVR32_USBC_UPSTA7SET_TXOUTIS_OFFSET                          1
#define AVR32_USBC_UPSTA7SET_TXOUTIS_SIZE                            1
#define AVR32_USBC_UPSTA7SET_TXSTPIS                                 2
#define AVR32_USBC_UPSTA7SET_TXSTPIS_MASK                   0x00000004
#define AVR32_USBC_UPSTA7SET_TXSTPIS_OFFSET                          2
#define AVR32_USBC_UPSTA7SET_TXSTPIS_SIZE                            1
#define AVR32_USBC_UPSTA7_CFGOK                                     18
#define AVR32_USBC_UPSTA7_CFGOK_MASK                        0x00040000
#define AVR32_USBC_UPSTA7_CFGOK_OFFSET                              18
#define AVR32_USBC_UPSTA7_CFGOK_SIZE                                 1
#define AVR32_USBC_UPSTA7_CURRBK                                    14
#define AVR32_USBC_UPSTA7_CURRBK_MASK                       0x0000c000
#define AVR32_USBC_UPSTA7_CURRBK_OFFSET                             14
#define AVR32_USBC_UPSTA7_CURRBK_SIZE                                2
#define AVR32_USBC_UPSTA7_DTSEQ                                      8
#define AVR32_USBC_UPSTA7_DTSEQ_MASK                        0x00000300
#define AVR32_USBC_UPSTA7_DTSEQ_OFFSET                               8
#define AVR32_USBC_UPSTA7_DTSEQ_SIZE                                 2
#define AVR32_USBC_UPSTA7_ERRORFI                                    5
#define AVR32_USBC_UPSTA7_ERRORFI_MASK                      0x00000020
#define AVR32_USBC_UPSTA7_ERRORFI_OFFSET                             5
#define AVR32_USBC_UPSTA7_ERRORFI_SIZE                               1
#define AVR32_USBC_UPSTA7_MASK                              0x7ff5f77f
#define AVR32_USBC_UPSTA7_NAKEDI                                     4
#define AVR32_USBC_UPSTA7_NAKEDI_MASK                       0x00000010
#define AVR32_USBC_UPSTA7_NAKEDI_OFFSET                              4
#define AVR32_USBC_UPSTA7_NAKEDI_SIZE                                1
#define AVR32_USBC_UPSTA7_NBUSYBK                                   12
#define AVR32_USBC_UPSTA7_NBUSYBK_MASK                      0x00003000
#define AVR32_USBC_UPSTA7_NBUSYBK_OFFSET                            12
#define AVR32_USBC_UPSTA7_NBUSYBK_SIZE                               2
#define AVR32_USBC_UPSTA7_PBYCT                                     20
#define AVR32_USBC_UPSTA7_PBYCT_MASK                        0x7ff00000
#define AVR32_USBC_UPSTA7_PBYCT_OFFSET                              20
#define AVR32_USBC_UPSTA7_PBYCT_SIZE                                11
#define AVR32_USBC_UPSTA7_PERRI                                      3
#define AVR32_USBC_UPSTA7_PERRI_MASK                        0x00000008
#define AVR32_USBC_UPSTA7_PERRI_OFFSET                               3
#define AVR32_USBC_UPSTA7_PERRI_SIZE                                 1
#define AVR32_USBC_UPSTA7_RAMACCERI                                 10
#define AVR32_USBC_UPSTA7_RAMACCERI_MASK                    0x00000400
#define AVR32_USBC_UPSTA7_RAMACCERI_OFFSET                          10
#define AVR32_USBC_UPSTA7_RAMACCERI_SIZE                             1
#define AVR32_USBC_UPSTA7_RESETVALUE                        0x00000000
#define AVR32_USBC_UPSTA7_RWALL                                     16
#define AVR32_USBC_UPSTA7_RWALL_MASK                        0x00010000
#define AVR32_USBC_UPSTA7_RWALL_OFFSET                              16
#define AVR32_USBC_UPSTA7_RWALL_SIZE                                 1
#define AVR32_USBC_UPSTA7_RXINI                                      0
#define AVR32_USBC_UPSTA7_RXINI_MASK                        0x00000001
#define AVR32_USBC_UPSTA7_RXINI_OFFSET                               0
#define AVR32_USBC_UPSTA7_RXINI_SIZE                                 1
#define AVR32_USBC_UPSTA7_RXSTALLDI                                  6
#define AVR32_USBC_UPSTA7_RXSTALLDI_MASK                    0x00000040
#define AVR32_USBC_UPSTA7_RXSTALLDI_OFFSET                           6
#define AVR32_USBC_UPSTA7_RXSTALLDI_SIZE                             1
#define AVR32_USBC_UPSTA7_TXOUTI                                     1
#define AVR32_USBC_UPSTA7_TXOUTI_MASK                       0x00000002
#define AVR32_USBC_UPSTA7_TXOUTI_OFFSET                              1
#define AVR32_USBC_UPSTA7_TXOUTI_SIZE                                1
#define AVR32_USBC_UPSTA7_TXSTPI                                     2
#define AVR32_USBC_UPSTA7_TXSTPI_MASK                       0x00000004
#define AVR32_USBC_UPSTA7_TXSTPI_OFFSET                              2
#define AVR32_USBC_UPSTA7_TXSTPI_SIZE                                1
#define AVR32_USBC_USBCON                                   0x00000800
#define AVR32_USBC_USBCON_BCERRE                                     4
#define AVR32_USBC_USBCON_BCERRE_MASK                       0x00000010
#define AVR32_USBC_USBCON_BCERRE_OFFSET                              4
#define AVR32_USBC_USBCON_BCERRE_SIZE                                1
#define AVR32_USBC_USBCON_FRZCLK                                    14
#define AVR32_USBC_USBCON_FRZCLK_MASK                       0x00004000
#define AVR32_USBC_USBCON_FRZCLK_OFFSET                             14
#define AVR32_USBC_USBCON_FRZCLK_SIZE                                1
#define AVR32_USBC_USBCON_HNPERRE                                    6
#define AVR32_USBC_USBCON_HNPERRE_MASK                      0x00000040
#define AVR32_USBC_USBCON_HNPERRE_OFFSET                             6
#define AVR32_USBC_USBCON_HNPERRE_SIZE                               1
#define AVR32_USBC_USBCON_HNPREQ                                    11
#define AVR32_USBC_USBCON_HNPREQ_MASK                       0x00000800
#define AVR32_USBC_USBCON_HNPREQ_OFFSET                             11
#define AVR32_USBC_USBCON_HNPREQ_SIZE                                1
#define AVR32_USBC_USBCON_IDTE                                       0
#define AVR32_USBC_USBCON_IDTE_MASK                         0x00000001
#define AVR32_USBC_USBCON_IDTE_OFFSET                                0
#define AVR32_USBC_USBCON_IDTE_SIZE                                  1
#define AVR32_USBC_USBCON_MASK                              0x0373ffff
#define AVR32_USBC_USBCON_OTGPADE                                   12
#define AVR32_USBC_USBCON_OTGPADE_MASK                      0x00001000
#define AVR32_USBC_USBCON_OTGPADE_OFFSET                            12
#define AVR32_USBC_USBCON_OTGPADE_SIZE                               1
#define AVR32_USBC_USBCON_RESETVALUE                        0x03004000
#define AVR32_USBC_USBCON_ROLEEXE                                    5
#define AVR32_USBC_USBCON_ROLEEXE_MASK                      0x00000020
#define AVR32_USBC_USBCON_ROLEEXE_OFFSET                             5
#define AVR32_USBC_USBCON_ROLEEXE_SIZE                               1
#define AVR32_USBC_USBCON_SRPE                                       2
#define AVR32_USBC_USBCON_SRPE_MASK                         0x00000004
#define AVR32_USBC_USBCON_SRPE_OFFSET                                2
#define AVR32_USBC_USBCON_SRPE_SIZE                                  1
#define AVR32_USBC_USBCON_SRPREQ                                    10
#define AVR32_USBC_USBCON_SRPREQ_MASK                       0x00000400
#define AVR32_USBC_USBCON_SRPREQ_OFFSET                             10
#define AVR32_USBC_USBCON_SRPREQ_SIZE                                1
#define AVR32_USBC_USBCON_SRPSEL                                     9
#define AVR32_USBC_USBCON_SRPSEL_MASK                       0x00000200
#define AVR32_USBC_USBCON_SRPSEL_OFFSET                              9
#define AVR32_USBC_USBCON_SRPSEL_SIZE                                1
#define AVR32_USBC_USBCON_STOE                                       7
#define AVR32_USBC_USBCON_STOE_MASK                         0x00000080
#define AVR32_USBC_USBCON_STOE_OFFSET                                7
#define AVR32_USBC_USBCON_STOE_SIZE                                  1
#define AVR32_USBC_USBCON_TIMPAGE                                   20
#define AVR32_USBC_USBCON_TIMPAGE_A_WAIT_VRISE              0x00000000
#define AVR32_USBC_USBCON_TIMPAGE_MASK                      0x00300000
#define AVR32_USBC_USBCON_TIMPAGE_OFFSET                            20
#define AVR32_USBC_USBCON_TIMPAGE_PD_TMOUT_CNT              0x00000002
#define AVR32_USBC_USBCON_TIMPAGE_SIZE                               2
#define AVR32_USBC_USBCON_TIMPAGE_SRP_DET_TMOUT             0x00000003
#define AVR32_USBC_USBCON_TIMPAGE_VB_BUS_PULSING            0x00000001
#define AVR32_USBC_USBCON_TIMVALUE                                  16
#define AVR32_USBC_USBCON_TIMVALUE_MASK                     0x00030000
#define AVR32_USBC_USBCON_TIMVALUE_OFFSET                           16
#define AVR32_USBC_USBCON_TIMVALUE_SIZE                              2
#define AVR32_USBC_USBCON_UIDE                                      24
#define AVR32_USBC_USBCON_UIDE_MASK                         0x01000000
#define AVR32_USBC_USBCON_UIDE_OFFSET                               24
#define AVR32_USBC_USBCON_UIDE_SIZE                                  1
#define AVR32_USBC_USBCON_UIMOD                                     25
#define AVR32_USBC_USBCON_UIMOD_MASK                        0x02000000
#define AVR32_USBC_USBCON_UIMOD_OFFSET                              25
#define AVR32_USBC_USBCON_UIMOD_SIZE                                 1
#define AVR32_USBC_USBCON_UNLOCK                                    22
#define AVR32_USBC_USBCON_UNLOCK_MASK                       0x00400000
#define AVR32_USBC_USBCON_UNLOCK_OFFSET                             22
#define AVR32_USBC_USBCON_UNLOCK_SIZE                                1
#define AVR32_USBC_USBCON_USBE                                      15
#define AVR32_USBC_USBCON_USBE_MASK                         0x00008000
#define AVR32_USBC_USBCON_USBE_OFFSET                               15
#define AVR32_USBC_USBCON_USBE_SIZE                                  1
#define AVR32_USBC_USBCON_VBERRE                                     3
#define AVR32_USBC_USBCON_VBERRE_MASK                       0x00000008
#define AVR32_USBC_USBCON_VBERRE_OFFSET                              3
#define AVR32_USBC_USBCON_VBERRE_SIZE                                1
#define AVR32_USBC_USBCON_VBUSHWC                                    8
#define AVR32_USBC_USBCON_VBUSHWC_MASK                      0x00000100
#define AVR32_USBC_USBCON_VBUSHWC_OFFSET                             8
#define AVR32_USBC_USBCON_VBUSHWC_SIZE                               1
#define AVR32_USBC_USBCON_VBUSPO                                    13
#define AVR32_USBC_USBCON_VBUSPO_MASK                       0x00002000
#define AVR32_USBC_USBCON_VBUSPO_OFFSET                             13
#define AVR32_USBC_USBCON_VBUSPO_SIZE                                1
#define AVR32_USBC_USBCON_VBUSTE                                     1
#define AVR32_USBC_USBCON_VBUSTE_MASK                       0x00000002
#define AVR32_USBC_USBCON_VBUSTE_OFFSET                              1
#define AVR32_USBC_USBCON_VBUSTE_SIZE                                1
#define AVR32_USBC_USBE                                             15
#define AVR32_USBC_USBE_MASK                                0x00008000
#define AVR32_USBC_USBE_OFFSET                                      15
#define AVR32_USBC_USBE_SIZE                                         1
#define AVR32_USBC_USBFSM                                   0x0000082c
#define AVR32_USBC_USBFSM_DRDSTATE                                   0
#define AVR32_USBC_USBFSM_DRDSTATE_A_HOST                   0x00000003
#define AVR32_USBC_USBFSM_DRDSTATE_A_IDLE                   0x00000000
#define AVR32_USBC_USBFSM_DRDSTATE_A_PERIPHERAL             0x00000005
#define AVR32_USBC_USBFSM_DRDSTATE_A_SUSPEND                0x00000004
#define AVR32_USBC_USBFSM_DRDSTATE_A_VBUS_ERR               0x00000007
#define AVR32_USBC_USBFSM_DRDSTATE_A_WAIT_BCON              0x00000002
#define AVR32_USBC_USBFSM_DRDSTATE_A_WAIT_DISCHARGE         0x00000008
#define AVR32_USBC_USBFSM_DRDSTATE_A_WAIT_VFALL             0x00000006
#define AVR32_USBC_USBFSM_DRDSTATE_A_WAIT_VRISE             0x00000001
#define AVR32_USBC_USBFSM_DRDSTATE_B_HOST                   0x0000000e
#define AVR32_USBC_USBFSM_DRDSTATE_B_IDLE                   0x00000009
#define AVR32_USBC_USBFSM_DRDSTATE_B_PERIPHERAL             0x0000000a
#define AVR32_USBC_USBFSM_DRDSTATE_B_SRP_INIT               0x0000000f
#define AVR32_USBC_USBFSM_DRDSTATE_B_WAIT_ACON              0x0000000d
#define AVR32_USBC_USBFSM_DRDSTATE_B_WAIT_BEGIN_HNP         0x0000000b
#define AVR32_USBC_USBFSM_DRDSTATE_B_WAIT_DISCHARGE         0x0000000c
#define AVR32_USBC_USBFSM_DRDSTATE_MASK                     0x0000000f
#define AVR32_USBC_USBFSM_DRDSTATE_OFFSET                            0
#define AVR32_USBC_USBFSM_DRDSTATE_SIZE                              4
#define AVR32_USBC_USBFSM_MASK                              0x0000000f
#define AVR32_USBC_USBFSM_RESETVALUE                        0x00000009
#define AVR32_USBC_USBSTA                                   0x00000804
#define AVR32_USBC_USBSTACLR                                0x00000808
#define AVR32_USBC_USBSTACLR_BCERRIC                                 4
#define AVR32_USBC_USBSTACLR_BCERRIC_MASK                   0x00000010
#define AVR32_USBC_USBSTACLR_BCERRIC_OFFSET                          4
#define AVR32_USBC_USBSTACLR_BCERRIC_SIZE                            1
#define AVR32_USBC_USBSTACLR_HNPERRIC                                6
#define AVR32_USBC_USBSTACLR_HNPERRIC_MASK                  0x00000040
#define AVR32_USBC_USBSTACLR_HNPERRIC_OFFSET                         6
#define AVR32_USBC_USBSTACLR_HNPERRIC_SIZE                           1
#define AVR32_USBC_USBSTACLR_IDTIC                                   0
#define AVR32_USBC_USBSTACLR_IDTIC_MASK                     0x00000001
#define AVR32_USBC_USBSTACLR_IDTIC_OFFSET                            0
#define AVR32_USBC_USBSTACLR_IDTIC_SIZE                              1
#define AVR32_USBC_USBSTACLR_MASK                           0x000003ff
#define AVR32_USBC_USBSTACLR_RAMACCERIC                              8
#define AVR32_USBC_USBSTACLR_RAMACCERIC_MASK                0x00000100
#define AVR32_USBC_USBSTACLR_RAMACCERIC_OFFSET                       8
#define AVR32_USBC_USBSTACLR_RAMACCERIC_SIZE                         1
#define AVR32_USBC_USBSTACLR_RESETVALUE                     0x00000000
#define AVR32_USBC_USBSTACLR_ROLEEXIC                                5
#define AVR32_USBC_USBSTACLR_ROLEEXIC_MASK                  0x00000020
#define AVR32_USBC_USBSTACLR_ROLEEXIC_OFFSET                         5
#define AVR32_USBC_USBSTACLR_ROLEEXIC_SIZE                           1
#define AVR32_USBC_USBSTACLR_SRPIC                                   2
#define AVR32_USBC_USBSTACLR_SRPIC_MASK                     0x00000004
#define AVR32_USBC_USBSTACLR_SRPIC_OFFSET                            2
#define AVR32_USBC_USBSTACLR_SRPIC_SIZE                              1
#define AVR32_USBC_USBSTACLR_STOIC                                   7
#define AVR32_USBC_USBSTACLR_STOIC_MASK                     0x00000080
#define AVR32_USBC_USBSTACLR_STOIC_OFFSET                            7
#define AVR32_USBC_USBSTACLR_STOIC_SIZE                              1
#define AVR32_USBC_USBSTACLR_VBERRIC                                 3
#define AVR32_USBC_USBSTACLR_VBERRIC_MASK                   0x00000008
#define AVR32_USBC_USBSTACLR_VBERRIC_OFFSET                          3
#define AVR32_USBC_USBSTACLR_VBERRIC_SIZE                            1
#define AVR32_USBC_USBSTACLR_VBUSRQC                                 9
#define AVR32_USBC_USBSTACLR_VBUSRQC_MASK                   0x00000200
#define AVR32_USBC_USBSTACLR_VBUSRQC_OFFSET                          9
#define AVR32_USBC_USBSTACLR_VBUSRQC_SIZE                            1
#define AVR32_USBC_USBSTACLR_VBUSTIC                                 1
#define AVR32_USBC_USBSTACLR_VBUSTIC_MASK                   0x00000002
#define AVR32_USBC_USBSTACLR_VBUSTIC_OFFSET                          1
#define AVR32_USBC_USBSTACLR_VBUSTIC_SIZE                            1
#define AVR32_USBC_USBSTASET                                0x0000080c
#define AVR32_USBC_USBSTASET_BCERRIS                                 4
#define AVR32_USBC_USBSTASET_BCERRIS_MASK                   0x00000010
#define AVR32_USBC_USBSTASET_BCERRIS_OFFSET                          4
#define AVR32_USBC_USBSTASET_BCERRIS_SIZE                            1
#define AVR32_USBC_USBSTASET_HNPERRIS                                6
#define AVR32_USBC_USBSTASET_HNPERRIS_MASK                  0x00000040
#define AVR32_USBC_USBSTASET_HNPERRIS_OFFSET                         6
#define AVR32_USBC_USBSTASET_HNPERRIS_SIZE                           1
#define AVR32_USBC_USBSTASET_IDTIS                                   0
#define AVR32_USBC_USBSTASET_IDTIS_MASK                     0x00000001
#define AVR32_USBC_USBSTASET_IDTIS_OFFSET                            0
#define AVR32_USBC_USBSTASET_IDTIS_SIZE                              1
#define AVR32_USBC_USBSTASET_MASK                           0x000003ff
#define AVR32_USBC_USBSTASET_RAMACCERIS                              8
#define AVR32_USBC_USBSTASET_RAMACCERIS_MASK                0x00000100
#define AVR32_USBC_USBSTASET_RAMACCERIS_OFFSET                       8
#define AVR32_USBC_USBSTASET_RAMACCERIS_SIZE                         1
#define AVR32_USBC_USBSTASET_RESETVALUE                     0x00000000
#define AVR32_USBC_USBSTASET_ROLEEXIS                                5
#define AVR32_USBC_USBSTASET_ROLEEXIS_MASK                  0x00000020
#define AVR32_USBC_USBSTASET_ROLEEXIS_OFFSET                         5
#define AVR32_USBC_USBSTASET_ROLEEXIS_SIZE                           1
#define AVR32_USBC_USBSTASET_SRPIS                                   2
#define AVR32_USBC_USBSTASET_SRPIS_MASK                     0x00000004
#define AVR32_USBC_USBSTASET_SRPIS_OFFSET                            2
#define AVR32_USBC_USBSTASET_SRPIS_SIZE                              1
#define AVR32_USBC_USBSTASET_STOIS                                   7
#define AVR32_USBC_USBSTASET_STOIS_MASK                     0x00000080
#define AVR32_USBC_USBSTASET_STOIS_OFFSET                            7
#define AVR32_USBC_USBSTASET_STOIS_SIZE                              1
#define AVR32_USBC_USBSTASET_VBERRIS                                 3
#define AVR32_USBC_USBSTASET_VBERRIS_MASK                   0x00000008
#define AVR32_USBC_USBSTASET_VBERRIS_OFFSET                          3
#define AVR32_USBC_USBSTASET_VBERRIS_SIZE                            1
#define AVR32_USBC_USBSTASET_VBUSRQS                                 9
#define AVR32_USBC_USBSTASET_VBUSRQS_MASK                   0x00000200
#define AVR32_USBC_USBSTASET_VBUSRQS_OFFSET                          9
#define AVR32_USBC_USBSTASET_VBUSRQS_SIZE                            1
#define AVR32_USBC_USBSTASET_VBUSTIS                                 1
#define AVR32_USBC_USBSTASET_VBUSTIS_MASK                   0x00000002
#define AVR32_USBC_USBSTASET_VBUSTIS_OFFSET                          1
#define AVR32_USBC_USBSTASET_VBUSTIS_SIZE                            1
#define AVR32_USBC_USBSTA_BCERRI                                     4
#define AVR32_USBC_USBSTA_BCERRI_MASK                       0x00000010
#define AVR32_USBC_USBSTA_BCERRI_OFFSET                              4
#define AVR32_USBC_USBSTA_BCERRI_SIZE                                1
#define AVR32_USBC_USBSTA_CLKUSABLE                                 14
#define AVR32_USBC_USBSTA_CLKUSABLE_MASK                    0x00004000
#define AVR32_USBC_USBSTA_CLKUSABLE_OFFSET                          14
#define AVR32_USBC_USBSTA_CLKUSABLE_SIZE                             1
#define AVR32_USBC_USBSTA_HNPERRI                                    6
#define AVR32_USBC_USBSTA_HNPERRI_MASK                      0x00000040
#define AVR32_USBC_USBSTA_HNPERRI_OFFSET                             6
#define AVR32_USBC_USBSTA_HNPERRI_SIZE                               1
#define AVR32_USBC_USBSTA_ID                                        10
#define AVR32_USBC_USBSTA_IDTI                                       0
#define AVR32_USBC_USBSTA_IDTI_MASK                         0x00000001
#define AVR32_USBC_USBSTA_IDTI_OFFSET                                0
#define AVR32_USBC_USBSTA_IDTI_SIZE                                  1
#define AVR32_USBC_USBSTA_ID_MASK                           0x00000400
#define AVR32_USBC_USBSTA_ID_OFFSET                                 10
#define AVR32_USBC_USBSTA_ID_SIZE                                    1
#define AVR32_USBC_USBSTA_MASK                              0x00007eff
#define AVR32_USBC_USBSTA_RESETVALUE                        0x00000000
#define AVR32_USBC_USBSTA_ROLEEXI                                    5
#define AVR32_USBC_USBSTA_ROLEEXI_MASK                      0x00000020
#define AVR32_USBC_USBSTA_ROLEEXI_OFFSET                             5
#define AVR32_USBC_USBSTA_ROLEEXI_SIZE                               1
#define AVR32_USBC_USBSTA_SPEED                                     12
#define AVR32_USBC_USBSTA_SPEED_FULL                        0x00000000
#define AVR32_USBC_USBSTA_SPEED_LOW                         0x00000002
#define AVR32_USBC_USBSTA_SPEED_MASK                        0x00003000
#define AVR32_USBC_USBSTA_SPEED_OFFSET                              12
#define AVR32_USBC_USBSTA_SPEED_SIZE                                 2
#define AVR32_USBC_USBSTA_SRPI                                       2
#define AVR32_USBC_USBSTA_SRPI_MASK                         0x00000004
#define AVR32_USBC_USBSTA_SRPI_OFFSET                                2
#define AVR32_USBC_USBSTA_SRPI_SIZE                                  1
#define AVR32_USBC_USBSTA_STOI                                       7
#define AVR32_USBC_USBSTA_STOI_MASK                         0x00000080
#define AVR32_USBC_USBSTA_STOI_OFFSET                                7
#define AVR32_USBC_USBSTA_STOI_SIZE                                  1
#define AVR32_USBC_USBSTA_VBERRI                                     3
#define AVR32_USBC_USBSTA_VBERRI_MASK                       0x00000008
#define AVR32_USBC_USBSTA_VBERRI_OFFSET                              3
#define AVR32_USBC_USBSTA_VBERRI_SIZE                                1
#define AVR32_USBC_USBSTA_VBUS                                      11
#define AVR32_USBC_USBSTA_VBUSRQ                                     9
#define AVR32_USBC_USBSTA_VBUSRQ_MASK                       0x00000200
#define AVR32_USBC_USBSTA_VBUSRQ_OFFSET                              9
#define AVR32_USBC_USBSTA_VBUSRQ_SIZE                                1
#define AVR32_USBC_USBSTA_VBUSTI                                     1
#define AVR32_USBC_USBSTA_VBUSTI_MASK                       0x00000002
#define AVR32_USBC_USBSTA_VBUSTI_OFFSET                              1
#define AVR32_USBC_USBSTA_VBUSTI_SIZE                                1
#define AVR32_USBC_USBSTA_VBUS_MASK                         0x00000800
#define AVR32_USBC_USBSTA_VBUS_OFFSET                               11
#define AVR32_USBC_USBSTA_VBUS_SIZE                                  1
#define AVR32_USBC_USB_TABLE_DESCRIPTOR_ADDRESS                      0
#define AVR32_USBC_USB_TABLE_DESCRIPTOR_ADDRESS_MASK        0xffffffff
#define AVR32_USBC_USB_TABLE_DESCRIPTOR_ADDRESS_OFFSET               0
#define AVR32_USBC_USB_TABLE_DESCRIPTOR_ADDRESS_SIZE                32
#define AVR32_USBC_UTMIRESET                                         8
#define AVR32_USBC_UTMIRESET_MASK                           0x00000100
#define AVR32_USBC_UTMIRESET_OFFSET                                  8
#define AVR32_USBC_UTMIRESET_SIZE                                    1
#define AVR32_USBC_UTMI_MODE                                         8
#define AVR32_USBC_UTMI_MODE_MASK                           0x00000100
#define AVR32_USBC_UTMI_MODE_OFFSET                                  8
#define AVR32_USBC_UTMI_MODE_SIZE                                    1
#define AVR32_USBC_UVERS                                    0x00000818
#define AVR32_USBC_UVERS_MASK                               0x0007ffff
#define AVR32_USBC_UVERS_METAL_FIX_NUM                              16
#define AVR32_USBC_UVERS_METAL_FIX_NUM_MASK                 0x00070000
#define AVR32_USBC_UVERS_METAL_FIX_NUM_OFFSET                       16
#define AVR32_USBC_UVERS_METAL_FIX_NUM_SIZE                          3
#define AVR32_USBC_UVERS_RESETVALUE                         0x00000210
#define AVR32_USBC_UVERS_VERSION_NUM                                 0
#define AVR32_USBC_UVERS_VERSION_NUM_MASK                   0x0000ffff
#define AVR32_USBC_UVERS_VERSION_NUM_OFFSET                          0
#define AVR32_USBC_UVERS_VERSION_NUM_SIZE                           16
#define AVR32_USBC_VBERRE                                            3
#define AVR32_USBC_VBERRE_MASK                              0x00000008
#define AVR32_USBC_VBERRE_OFFSET                                     3
#define AVR32_USBC_VBERRE_SIZE                                       1
#define AVR32_USBC_VBERRI                                            3
#define AVR32_USBC_VBERRIC                                           3
#define AVR32_USBC_VBERRIC_MASK                             0x00000008
#define AVR32_USBC_VBERRIC_OFFSET                                    3
#define AVR32_USBC_VBERRIC_SIZE                                      1
#define AVR32_USBC_VBERRIS                                           3
#define AVR32_USBC_VBERRIS_MASK                             0x00000008
#define AVR32_USBC_VBERRIS_OFFSET                                    3
#define AVR32_USBC_VBERRIS_SIZE                                      1
#define AVR32_USBC_VBERRI_MASK                              0x00000008
#define AVR32_USBC_VBERRI_OFFSET                                     3
#define AVR32_USBC_VBERRI_SIZE                                       1
#define AVR32_USBC_VBUS                                             11
#define AVR32_USBC_VBUSE                                             7
#define AVR32_USBC_VBUSEC                                            7
#define AVR32_USBC_VBUSEC_MASK                              0x00000080
#define AVR32_USBC_VBUSEC_OFFSET                                     7
#define AVR32_USBC_VBUSEC_SIZE                                       1
#define AVR32_USBC_VBUSES                                            7
#define AVR32_USBC_VBUSES_MASK                              0x00000080
#define AVR32_USBC_VBUSES_OFFSET                                     7
#define AVR32_USBC_VBUSES_SIZE                                       1
#define AVR32_USBC_VBUSE_MASK                               0x00000080
#define AVR32_USBC_VBUSE_OFFSET                                      7
#define AVR32_USBC_VBUSE_SIZE                                        1
#define AVR32_USBC_VBUSHWC                                           8
#define AVR32_USBC_VBUSHWC_MASK                             0x00000100
#define AVR32_USBC_VBUSHWC_OFFSET                                    8
#define AVR32_USBC_VBUSHWC_SIZE                                      1
#define AVR32_USBC_VBUSPO                                           13
#define AVR32_USBC_VBUSPO_MASK                              0x00002000
#define AVR32_USBC_VBUSPO_OFFSET                                    13
#define AVR32_USBC_VBUSPO_SIZE                                       1
#define AVR32_USBC_VBUSRQ                                            9
#define AVR32_USBC_VBUSRQC                                           9
#define AVR32_USBC_VBUSRQC_MASK                             0x00000200
#define AVR32_USBC_VBUSRQC_OFFSET                                    9
#define AVR32_USBC_VBUSRQC_SIZE                                      1
#define AVR32_USBC_VBUSRQS                                           9
#define AVR32_USBC_VBUSRQS_MASK                             0x00000200
#define AVR32_USBC_VBUSRQS_OFFSET                                    9
#define AVR32_USBC_VBUSRQS_SIZE                                      1
#define AVR32_USBC_VBUSRQ_MASK                              0x00000200
#define AVR32_USBC_VBUSRQ_OFFSET                                     9
#define AVR32_USBC_VBUSRQ_SIZE                                       1
#define AVR32_USBC_VBUSTE                                            1
#define AVR32_USBC_VBUSTE_MASK                              0x00000002
#define AVR32_USBC_VBUSTE_OFFSET                                     1
#define AVR32_USBC_VBUSTE_SIZE                                       1
#define AVR32_USBC_VBUSTI                                            1
#define AVR32_USBC_VBUSTIC_SIZE                                      1
#define AVR32_USBC_VBUSTIS_SIZE                                      1
#define AVR32_USBC_VBUSTI_MASK                              0x00000002
#define AVR32_USBC_VBUSTI_OFFSET                                     1
#define AVR32_USBC_VBUSTI_SIZE                                       1
#define AVR32_USBC_VBUS_MASK                                0x00000800
#define AVR32_USBC_VBUS_OFFSET                                      11
#define AVR32_USBC_VBUS_SIZE                                         1
#define AVR32_USBC_VB_BUS_PULSING                           0x00000001
#define AVR32_USBC_VERSION_NUM                                       0
#define AVR32_USBC_VERSION_NUM_MASK                         0x0000ffff
#define AVR32_USBC_VERSION_NUM_OFFSET                                0
#define AVR32_USBC_VERSION_NUM_SIZE                                 16
#define AVR32_USBC_WAKEUP                                            4
#define AVR32_USBC_WAKEUPC                                           4
#define AVR32_USBC_WAKEUPC_MASK                             0x00000010
#define AVR32_USBC_WAKEUPC_OFFSET                                    4
#define AVR32_USBC_WAKEUPC_SIZE                                      1
#define AVR32_USBC_WAKEUPE                                           4
#define AVR32_USBC_WAKEUPEC                                          4
#define AVR32_USBC_WAKEUPEC_MASK                            0x00000010
#define AVR32_USBC_WAKEUPEC_OFFSET                                   4
#define AVR32_USBC_WAKEUPEC_SIZE                                     1
#define AVR32_USBC_WAKEUPES                                          4
#define AVR32_USBC_WAKEUPES_MASK                            0x00000010
#define AVR32_USBC_WAKEUPES_OFFSET                                   4
#define AVR32_USBC_WAKEUPES_SIZE                                     1
#define AVR32_USBC_WAKEUPE_MASK                             0x00000010
#define AVR32_USBC_WAKEUPE_OFFSET                                    4
#define AVR32_USBC_WAKEUPE_SIZE                                      1
#define AVR32_USBC_WAKEUPS                                           4
#define AVR32_USBC_WAKEUPS_MASK                             0x00000010
#define AVR32_USBC_WAKEUPS_OFFSET                                    4
#define AVR32_USBC_WAKEUPS_SIZE                                      1
#define AVR32_USBC_WAKEUP_MASK                              0x00000010
#define AVR32_USBC_WAKEUP_OFFSET                                     4
#define AVR32_USBC_WAKEUP_SIZE                                       1




#ifdef __AVR32_ABI_COMPILER__


typedef struct avr32_usbc_udcon_t {
    unsigned int                 :14;
    unsigned int gnak            : 1;
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
} avr32_usbc_udcon_t;



typedef struct avr32_usbc_udint_t {
    unsigned int                 :12;
    unsigned int ep7int          : 1;
    unsigned int ep6int          : 1;
    unsigned int ep5int          : 1;
    unsigned int ep4int          : 1;
    unsigned int ep3int          : 1;
    unsigned int ep2int          : 1;
    unsigned int ep1int          : 1;
    unsigned int ep0int          : 1;
    unsigned int                 : 5;
    unsigned int uprsm           : 1;
    unsigned int eorsm           : 1;
    unsigned int wakeup          : 1;
    unsigned int eorst           : 1;
    unsigned int sof             : 1;
    unsigned int msof            : 1;
    unsigned int susp            : 1;
} avr32_usbc_udint_t;



typedef struct avr32_usbc_udintclr_t {
    unsigned int                 :24;
    unsigned int vbustic         : 1;
    unsigned int uprsmc          : 1;
    unsigned int eorsmc          : 1;
    unsigned int wakeupc         : 1;
    unsigned int eorstc          : 1;
    unsigned int sofc            : 1;
    unsigned int msofc           : 1;
    unsigned int suspc           : 1;
} avr32_usbc_udintclr_t;



typedef struct avr32_usbc_udintset_t {
    unsigned int                 :24;
    unsigned int vbustis         : 1;
    unsigned int uprsms          : 1;
    unsigned int eorsms          : 1;
    unsigned int wakeups         : 1;
    unsigned int eorsts          : 1;
    unsigned int sofs            : 1;
    unsigned int msofs           : 1;
    unsigned int susps           : 1;
} avr32_usbc_udintset_t;



typedef struct avr32_usbc_udinte_t {
    unsigned int                 :12;
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
} avr32_usbc_udinte_t;



typedef struct avr32_usbc_udinteclr_t {
    unsigned int                 :12;
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
} avr32_usbc_udinteclr_t;



typedef struct avr32_usbc_udinteset_t {
    unsigned int                 :12;
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
} avr32_usbc_udinteset_t;



typedef struct avr32_usbc_uerst_t {
    unsigned int                 :24;
    unsigned int epen7           : 1;
    unsigned int epen6           : 1;
    unsigned int epen5           : 1;
    unsigned int epen4           : 1;
    unsigned int epen3           : 1;
    unsigned int epen2           : 1;
    unsigned int epen1           : 1;
    unsigned int epen0           : 1;
} avr32_usbc_uerst_t;



typedef struct avr32_usbc_udfnum_t {
    unsigned int                 :16;
    unsigned int fncerr          : 1;
    unsigned int                 : 1;
    unsigned int fnum            :11;
    unsigned int mfnum           : 3;
} avr32_usbc_udfnum_t;



typedef struct avr32_usbc_uecfg0_t {
    unsigned int                 :17;
    unsigned int nbtrans         : 2;
    unsigned int eptype          : 2;
    unsigned int                 : 2;
    unsigned int epdir           : 1;
    unsigned int                 : 1;
    unsigned int epsize          : 3;
    unsigned int                 : 1;
    unsigned int epbk            : 1;
    unsigned int                 : 2;
} avr32_usbc_uecfg0_t;



typedef struct avr32_usbc_uecfg1_t {
    unsigned int                 :17;
    unsigned int nbtrans         : 2;
    unsigned int eptype          : 2;
    unsigned int                 : 2;
    unsigned int epdir           : 1;
    unsigned int                 : 1;
    unsigned int epsize          : 3;
    unsigned int                 : 1;
    unsigned int epbk            : 1;
    unsigned int                 : 2;
} avr32_usbc_uecfg1_t;



typedef struct avr32_usbc_uecfg2_t {
    unsigned int                 :17;
    unsigned int nbtrans         : 2;
    unsigned int eptype          : 2;
    unsigned int                 : 2;
    unsigned int epdir           : 1;
    unsigned int                 : 1;
    unsigned int epsize          : 3;
    unsigned int                 : 1;
    unsigned int epbk            : 1;
    unsigned int                 : 2;
} avr32_usbc_uecfg2_t;



typedef struct avr32_usbc_uecfg3_t {
    unsigned int                 :17;
    unsigned int nbtrans         : 2;
    unsigned int eptype          : 2;
    unsigned int                 : 2;
    unsigned int epdir           : 1;
    unsigned int                 : 1;
    unsigned int epsize          : 3;
    unsigned int                 : 1;
    unsigned int epbk            : 1;
    unsigned int                 : 2;
} avr32_usbc_uecfg3_t;



typedef struct avr32_usbc_uecfg4_t {
    unsigned int                 :17;
    unsigned int nbtrans         : 2;
    unsigned int eptype          : 2;
    unsigned int                 : 2;
    unsigned int epdir           : 1;
    unsigned int                 : 1;
    unsigned int epsize          : 3;
    unsigned int                 : 1;
    unsigned int epbk            : 1;
    unsigned int                 : 2;
} avr32_usbc_uecfg4_t;



typedef struct avr32_usbc_uecfg5_t {
    unsigned int                 :17;
    unsigned int nbtrans         : 2;
    unsigned int eptype          : 2;
    unsigned int                 : 2;
    unsigned int epdir           : 1;
    unsigned int                 : 1;
    unsigned int epsize          : 3;
    unsigned int                 : 1;
    unsigned int epbk            : 1;
    unsigned int                 : 2;
} avr32_usbc_uecfg5_t;



typedef struct avr32_usbc_uecfg6_t {
    unsigned int                 :17;
    unsigned int nbtrans         : 2;
    unsigned int eptype          : 2;
    unsigned int                 : 2;
    unsigned int epdir           : 1;
    unsigned int                 : 1;
    unsigned int epsize          : 3;
    unsigned int                 : 1;
    unsigned int epbk            : 1;
    unsigned int                 : 2;
} avr32_usbc_uecfg6_t;



typedef struct avr32_usbc_uecfg7_t {
    unsigned int                 :17;
    unsigned int nbtrans         : 2;
    unsigned int eptype          : 2;
    unsigned int                 : 2;
    unsigned int epdir           : 1;
    unsigned int                 : 1;
    unsigned int epsize          : 3;
    unsigned int                 : 1;
    unsigned int epbk            : 1;
    unsigned int                 : 2;
} avr32_usbc_uecfg7_t;



typedef struct avr32_usbc_uesta0_t {
    unsigned int                 :14;
    unsigned int ctrldir         : 1;
    unsigned int                 : 1;
    unsigned int currbk          : 2;
    unsigned int nbusybk         : 2;
    unsigned int ramacceri       : 1;
    unsigned int errortrans      : 1;
    unsigned int dtseq           : 2;
    unsigned int                 : 1;
    unsigned int stalledi        : 1;
    unsigned int                 : 1;
    unsigned int nakini          : 1;
    unsigned int nakouti         : 1;
    unsigned int rxstpi          : 1;
    unsigned int rxouti          : 1;
    unsigned int txini           : 1;
} avr32_usbc_uesta0_t;



typedef struct avr32_usbc_uesta1_t {
    unsigned int                 :14;
    unsigned int ctrldir         : 1;
    unsigned int                 : 1;
    unsigned int currbk          : 2;
    unsigned int nbusybk         : 2;
    unsigned int                 : 1;
    unsigned int errortrans      : 1;
    unsigned int dtseq           : 2;
    unsigned int                 : 1;
    unsigned int stalledi        : 1;
    unsigned int                 : 1;
    unsigned int nakini          : 1;
    unsigned int nakouti         : 1;
    unsigned int rxstpi          : 1;
    unsigned int rxouti          : 1;
    unsigned int txini           : 1;
} avr32_usbc_uesta1_t;



typedef struct avr32_usbc_uesta2_t {
    unsigned int                 :14;
    unsigned int ctrldir         : 1;
    unsigned int                 : 1;
    unsigned int currbk          : 2;
    unsigned int nbusybk         : 2;
    unsigned int                 : 1;
    unsigned int errortrans      : 1;
    unsigned int dtseq           : 2;
    unsigned int                 : 1;
    unsigned int stalledi        : 1;
    unsigned int                 : 1;
    unsigned int nakini          : 1;
    unsigned int nakouti         : 1;
    unsigned int rxstpi          : 1;
    unsigned int rxouti          : 1;
    unsigned int txini           : 1;
} avr32_usbc_uesta2_t;



typedef struct avr32_usbc_uesta3_t {
    unsigned int                 :14;
    unsigned int ctrldir         : 1;
    unsigned int                 : 1;
    unsigned int currbk          : 2;
    unsigned int nbusybk         : 2;
    unsigned int                 : 1;
    unsigned int errortrans      : 1;
    unsigned int dtseq           : 2;
    unsigned int                 : 1;
    unsigned int stalledi        : 1;
    unsigned int                 : 1;
    unsigned int nakini          : 1;
    unsigned int nakouti         : 1;
    unsigned int rxstpi          : 1;
    unsigned int rxouti          : 1;
    unsigned int txini           : 1;
} avr32_usbc_uesta3_t;



typedef struct avr32_usbc_uesta4_t {
    unsigned int                 :14;
    unsigned int ctrldir         : 1;
    unsigned int                 : 1;
    unsigned int currbk          : 2;
    unsigned int nbusybk         : 2;
    unsigned int                 : 1;
    unsigned int errortrans      : 1;
    unsigned int dtseq           : 2;
    unsigned int                 : 1;
    unsigned int stalledi        : 1;
    unsigned int                 : 1;
    unsigned int nakini          : 1;
    unsigned int nakouti         : 1;
    unsigned int rxstpi          : 1;
    unsigned int rxouti          : 1;
    unsigned int txini           : 1;
} avr32_usbc_uesta4_t;



typedef struct avr32_usbc_uesta5_t {
    unsigned int                 :14;
    unsigned int ctrldir         : 1;
    unsigned int                 : 1;
    unsigned int currbk          : 2;
    unsigned int nbusybk         : 2;
    unsigned int                 : 1;
    unsigned int errortrans      : 1;
    unsigned int dtseq           : 2;
    unsigned int                 : 1;
    unsigned int stalledi        : 1;
    unsigned int                 : 1;
    unsigned int nakini          : 1;
    unsigned int nakouti         : 1;
    unsigned int rxstpi          : 1;
    unsigned int rxouti          : 1;
    unsigned int txini           : 1;
} avr32_usbc_uesta5_t;



typedef struct avr32_usbc_uesta6_t {
    unsigned int                 :14;
    unsigned int ctrldir         : 1;
    unsigned int                 : 1;
    unsigned int currbk          : 2;
    unsigned int nbusybk         : 2;
    unsigned int                 : 1;
    unsigned int errortrans      : 1;
    unsigned int dtseq           : 2;
    unsigned int                 : 1;
    unsigned int stalledi        : 1;
    unsigned int                 : 1;
    unsigned int nakini          : 1;
    unsigned int nakouti         : 1;
    unsigned int rxstpi          : 1;
    unsigned int rxouti          : 1;
    unsigned int txini           : 1;
} avr32_usbc_uesta6_t;



typedef struct avr32_usbc_uesta7_t {
    unsigned int                 :14;
    unsigned int ctrldir         : 1;
    unsigned int                 : 1;
    unsigned int currbk          : 2;
    unsigned int nbusybk         : 2;
    unsigned int                 : 1;
    unsigned int errortrans      : 1;
    unsigned int dtseq           : 2;
    unsigned int                 : 1;
    unsigned int stalledi        : 1;
    unsigned int                 : 1;
    unsigned int nakini          : 1;
    unsigned int nakouti         : 1;
    unsigned int rxstpi          : 1;
    unsigned int rxouti          : 1;
    unsigned int txini           : 1;
} avr32_usbc_uesta7_t;



typedef struct avr32_usbc_uesta0clr_t {
    unsigned int                 :20;
    unsigned int ramacceric      : 1;
    unsigned int                 : 4;
    unsigned int stalledic       : 1;
    unsigned int                 : 1;
    unsigned int nakinic         : 1;
    unsigned int nakoutic        : 1;
    unsigned int rxstpic         : 1;
    unsigned int rxoutic         : 1;
    unsigned int txinic          : 1;
} avr32_usbc_uesta0clr_t;



typedef struct avr32_usbc_uesta1clr_t {
    unsigned int                 :25;
    unsigned int stalledic       : 1;
    unsigned int                 : 1;
    unsigned int nakinic         : 1;
    unsigned int nakoutic        : 1;
    unsigned int rxstpic         : 1;
    unsigned int rxoutic         : 1;
    unsigned int txinic          : 1;
} avr32_usbc_uesta1clr_t;



typedef struct avr32_usbc_uesta2clr_t {
    unsigned int                 :25;
    unsigned int stalledic       : 1;
    unsigned int                 : 1;
    unsigned int nakinic         : 1;
    unsigned int nakoutic        : 1;
    unsigned int rxstpic         : 1;
    unsigned int rxoutic         : 1;
    unsigned int txinic          : 1;
} avr32_usbc_uesta2clr_t;



typedef struct avr32_usbc_uesta3clr_t {
    unsigned int                 :25;
    unsigned int stalledic       : 1;
    unsigned int                 : 1;
    unsigned int nakinic         : 1;
    unsigned int nakoutic        : 1;
    unsigned int rxstpic         : 1;
    unsigned int rxoutic         : 1;
    unsigned int txinic          : 1;
} avr32_usbc_uesta3clr_t;



typedef struct avr32_usbc_uesta4clr_t {
    unsigned int                 :25;
    unsigned int stalledic       : 1;
    unsigned int                 : 1;
    unsigned int nakinic         : 1;
    unsigned int nakoutic        : 1;
    unsigned int rxstpic         : 1;
    unsigned int rxoutic         : 1;
    unsigned int txinic          : 1;
} avr32_usbc_uesta4clr_t;



typedef struct avr32_usbc_uesta5clr_t {
    unsigned int                 :25;
    unsigned int stalledic       : 1;
    unsigned int                 : 1;
    unsigned int nakinic         : 1;
    unsigned int nakoutic        : 1;
    unsigned int rxstpic         : 1;
    unsigned int rxoutic         : 1;
    unsigned int txinic          : 1;
} avr32_usbc_uesta5clr_t;



typedef struct avr32_usbc_uesta6clr_t {
    unsigned int                 :25;
    unsigned int stalledic       : 1;
    unsigned int                 : 1;
    unsigned int nakinic         : 1;
    unsigned int nakoutic        : 1;
    unsigned int rxstpic         : 1;
    unsigned int rxoutic         : 1;
    unsigned int txinic          : 1;
} avr32_usbc_uesta6clr_t;



typedef struct avr32_usbc_uesta7clr_t {
    unsigned int                 :25;
    unsigned int stalledic       : 1;
    unsigned int                 : 1;
    unsigned int nakinic         : 1;
    unsigned int nakoutic        : 1;
    unsigned int rxstpic         : 1;
    unsigned int rxoutic         : 1;
    unsigned int txinic          : 1;
} avr32_usbc_uesta7clr_t;



typedef struct avr32_usbc_uesta0set_t {
    unsigned int                 :19;
    unsigned int nbusybks        : 1;
    unsigned int ramacceris      : 1;
    unsigned int errortranss     : 1;
    unsigned int                 : 1;
    unsigned int setmdata        : 1;
    unsigned int                 : 1;
    unsigned int stalledis       : 1;
    unsigned int                 : 1;
    unsigned int nakinis         : 1;
    unsigned int nakoutis        : 1;
    unsigned int rxstpis         : 1;
    unsigned int rxoutis         : 1;
    unsigned int txinis          : 1;
} avr32_usbc_uesta0set_t;



typedef struct avr32_usbc_uesta1set_t {
    unsigned int                 :19;
    unsigned int nbusybks        : 1;
    unsigned int                 : 1;
    unsigned int errortranss     : 1;
    unsigned int                 : 1;
    unsigned int setmdata        : 1;
    unsigned int                 : 1;
    unsigned int stalledis       : 1;
    unsigned int                 : 1;
    unsigned int nakinis         : 1;
    unsigned int nakoutis        : 1;
    unsigned int rxstpis         : 1;
    unsigned int rxoutis         : 1;
    unsigned int txinis          : 1;
} avr32_usbc_uesta1set_t;



typedef struct avr32_usbc_uesta2set_t {
    unsigned int                 :19;
    unsigned int nbusybks        : 1;
    unsigned int                 : 1;
    unsigned int errortranss     : 1;
    unsigned int                 : 1;
    unsigned int setmdata        : 1;
    unsigned int                 : 1;
    unsigned int stalledis       : 1;
    unsigned int                 : 1;
    unsigned int nakinis         : 1;
    unsigned int nakoutis        : 1;
    unsigned int rxstpis         : 1;
    unsigned int rxoutis         : 1;
    unsigned int txinis          : 1;
} avr32_usbc_uesta2set_t;



typedef struct avr32_usbc_uesta3set_t {
    unsigned int                 :19;
    unsigned int nbusybks        : 1;
    unsigned int                 : 1;
    unsigned int errortranss     : 1;
    unsigned int                 : 1;
    unsigned int setmdata        : 1;
    unsigned int                 : 1;
    unsigned int stalledis       : 1;
    unsigned int                 : 1;
    unsigned int nakinis         : 1;
    unsigned int nakoutis        : 1;
    unsigned int rxstpis         : 1;
    unsigned int rxoutis         : 1;
    unsigned int txinis          : 1;
} avr32_usbc_uesta3set_t;



typedef struct avr32_usbc_uesta4set_t {
    unsigned int                 :19;
    unsigned int nbusybks        : 1;
    unsigned int                 : 1;
    unsigned int errortranss     : 1;
    unsigned int                 : 1;
    unsigned int setmdata        : 1;
    unsigned int                 : 1;
    unsigned int stalledis       : 1;
    unsigned int                 : 1;
    unsigned int nakinis         : 1;
    unsigned int nakoutis        : 1;
    unsigned int rxstpis         : 1;
    unsigned int rxoutis         : 1;
    unsigned int txinis          : 1;
} avr32_usbc_uesta4set_t;



typedef struct avr32_usbc_uesta5set_t {
    unsigned int                 :19;
    unsigned int nbusybks        : 1;
    unsigned int                 : 1;
    unsigned int errortranss     : 1;
    unsigned int                 : 1;
    unsigned int setmdata        : 1;
    unsigned int                 : 1;
    unsigned int stalledis       : 1;
    unsigned int                 : 1;
    unsigned int nakinis         : 1;
    unsigned int nakoutis        : 1;
    unsigned int rxstpis         : 1;
    unsigned int rxoutis         : 1;
    unsigned int txinis          : 1;
} avr32_usbc_uesta5set_t;



typedef struct avr32_usbc_uesta6set_t {
    unsigned int                 :19;
    unsigned int nbusybks        : 1;
    unsigned int                 : 1;
    unsigned int errortranss     : 1;
    unsigned int                 : 1;
    unsigned int setmdata        : 1;
    unsigned int                 : 1;
    unsigned int stalledis       : 1;
    unsigned int                 : 1;
    unsigned int nakinis         : 1;
    unsigned int nakoutis        : 1;
    unsigned int rxstpis         : 1;
    unsigned int rxoutis         : 1;
    unsigned int txinis          : 1;
} avr32_usbc_uesta6set_t;



typedef struct avr32_usbc_uesta7set_t {
    unsigned int                 :19;
    unsigned int nbusybks        : 1;
    unsigned int                 : 1;
    unsigned int errortranss     : 1;
    unsigned int                 : 1;
    unsigned int setmdata        : 1;
    unsigned int                 : 1;
    unsigned int stalledis       : 1;
    unsigned int                 : 1;
    unsigned int nakinis         : 1;
    unsigned int nakoutis        : 1;
    unsigned int rxstpis         : 1;
    unsigned int rxoutis         : 1;
    unsigned int txinis          : 1;
} avr32_usbc_uesta7set_t;



typedef struct avr32_usbc_uecon0_t {
    unsigned int                 : 6;
    unsigned int busy1           : 1;
    unsigned int busy0           : 1;
    unsigned int                 : 4;
    unsigned int stallrq         : 1;
    unsigned int rstdt           : 1;
    unsigned int nyetdis         : 1;
    unsigned int                 : 2;
    unsigned int fifocon         : 1;
    unsigned int killbk          : 1;
    unsigned int nbusybke        : 1;
    unsigned int ramaccere       : 1;
    unsigned int errortranse     : 1;
    unsigned int dataxe          : 1;
    unsigned int mdatae          : 1;
    unsigned int                 : 1;
    unsigned int stallede        : 1;
    unsigned int                 : 1;
    unsigned int nakine          : 1;
    unsigned int nakoute         : 1;
    unsigned int rxstpe          : 1;
    unsigned int rxoute          : 1;
    unsigned int txine           : 1;
} avr32_usbc_uecon0_t;



typedef struct avr32_usbc_uecon1_t {
    unsigned int                 : 6;
    unsigned int busy1           : 1;
    unsigned int busy0           : 1;
    unsigned int                 : 4;
    unsigned int stallrq         : 1;
    unsigned int rstdt           : 1;
    unsigned int nyetdis         : 1;
    unsigned int                 : 2;
    unsigned int fifocon         : 1;
    unsigned int killbk          : 1;
    unsigned int nbusybke        : 1;
    unsigned int                 : 1;
    unsigned int errortranse     : 1;
    unsigned int dataxe          : 1;
    unsigned int mdatae          : 1;
    unsigned int                 : 1;
    unsigned int stallede        : 1;
    unsigned int                 : 1;
    unsigned int nakine          : 1;
    unsigned int nakoute         : 1;
    unsigned int rxstpe          : 1;
    unsigned int rxoute          : 1;
    unsigned int txine           : 1;
} avr32_usbc_uecon1_t;



typedef struct avr32_usbc_uecon2_t {
    unsigned int                 : 6;
    unsigned int busy1           : 1;
    unsigned int busy0           : 1;
    unsigned int                 : 4;
    unsigned int stallrq         : 1;
    unsigned int rstdt           : 1;
    unsigned int nyetdis         : 1;
    unsigned int                 : 2;
    unsigned int fifocon         : 1;
    unsigned int killbk          : 1;
    unsigned int nbusybke        : 1;
    unsigned int                 : 1;
    unsigned int errortranse     : 1;
    unsigned int dataxe          : 1;
    unsigned int mdatae          : 1;
    unsigned int                 : 1;
    unsigned int stallede        : 1;
    unsigned int                 : 1;
    unsigned int nakine          : 1;
    unsigned int nakoute         : 1;
    unsigned int rxstpe          : 1;
    unsigned int rxoute          : 1;
    unsigned int txine           : 1;
} avr32_usbc_uecon2_t;



typedef struct avr32_usbc_uecon3_t {
    unsigned int                 : 6;
    unsigned int busy1           : 1;
    unsigned int busy0           : 1;
    unsigned int                 : 4;
    unsigned int stallrq         : 1;
    unsigned int rstdt           : 1;
    unsigned int nyetdis         : 1;
    unsigned int                 : 2;
    unsigned int fifocon         : 1;
    unsigned int killbk          : 1;
    unsigned int nbusybke        : 1;
    unsigned int                 : 1;
    unsigned int errortranse     : 1;
    unsigned int dataxe          : 1;
    unsigned int mdatae          : 1;
    unsigned int                 : 1;
    unsigned int stallede        : 1;
    unsigned int                 : 1;
    unsigned int nakine          : 1;
    unsigned int nakoute         : 1;
    unsigned int rxstpe          : 1;
    unsigned int rxoute          : 1;
    unsigned int txine           : 1;
} avr32_usbc_uecon3_t;



typedef struct avr32_usbc_uecon4_t {
    unsigned int                 : 6;
    unsigned int busy1           : 1;
    unsigned int busy0           : 1;
    unsigned int                 : 4;
    unsigned int stallrq         : 1;
    unsigned int rstdt           : 1;
    unsigned int nyetdis         : 1;
    unsigned int                 : 2;
    unsigned int fifocon         : 1;
    unsigned int killbk          : 1;
    unsigned int nbusybke        : 1;
    unsigned int                 : 1;
    unsigned int errortranse     : 1;
    unsigned int dataxe          : 1;
    unsigned int mdatae          : 1;
    unsigned int                 : 1;
    unsigned int stallede        : 1;
    unsigned int                 : 1;
    unsigned int nakine          : 1;
    unsigned int nakoute         : 1;
    unsigned int rxstpe          : 1;
    unsigned int rxoute          : 1;
    unsigned int txine           : 1;
} avr32_usbc_uecon4_t;



typedef struct avr32_usbc_uecon5_t {
    unsigned int                 : 6;
    unsigned int busy1           : 1;
    unsigned int busy0           : 1;
    unsigned int                 : 4;
    unsigned int stallrq         : 1;
    unsigned int rstdt           : 1;
    unsigned int nyetdis         : 1;
    unsigned int                 : 2;
    unsigned int fifocon         : 1;
    unsigned int killbk          : 1;
    unsigned int nbusybke        : 1;
    unsigned int                 : 1;
    unsigned int errortranse     : 1;
    unsigned int dataxe          : 1;
    unsigned int mdatae          : 1;
    unsigned int                 : 1;
    unsigned int stallede        : 1;
    unsigned int                 : 1;
    unsigned int nakine          : 1;
    unsigned int nakoute         : 1;
    unsigned int rxstpe          : 1;
    unsigned int rxoute          : 1;
    unsigned int txine           : 1;
} avr32_usbc_uecon5_t;



typedef struct avr32_usbc_uecon6_t {
    unsigned int                 : 6;
    unsigned int busy1           : 1;
    unsigned int busy0           : 1;
    unsigned int                 : 4;
    unsigned int stallrq         : 1;
    unsigned int rstdt           : 1;
    unsigned int nyetdis         : 1;
    unsigned int                 : 2;
    unsigned int fifocon         : 1;
    unsigned int killbk          : 1;
    unsigned int nbusybke        : 1;
    unsigned int                 : 1;
    unsigned int errortranse     : 1;
    unsigned int dataxe          : 1;
    unsigned int mdatae          : 1;
    unsigned int                 : 1;
    unsigned int stallede        : 1;
    unsigned int                 : 1;
    unsigned int nakine          : 1;
    unsigned int nakoute         : 1;
    unsigned int rxstpe          : 1;
    unsigned int rxoute          : 1;
    unsigned int txine           : 1;
} avr32_usbc_uecon6_t;



typedef struct avr32_usbc_uecon7_t {
    unsigned int                 : 6;
    unsigned int busy1           : 1;
    unsigned int busy0           : 1;
    unsigned int                 : 4;
    unsigned int stallrq         : 1;
    unsigned int rstdt           : 1;
    unsigned int nyetdis         : 1;
    unsigned int                 : 2;
    unsigned int fifocon         : 1;
    unsigned int killbk          : 1;
    unsigned int nbusybke        : 1;
    unsigned int                 : 1;
    unsigned int errortranse     : 1;
    unsigned int dataxe          : 1;
    unsigned int mdatae          : 1;
    unsigned int                 : 1;
    unsigned int stallede        : 1;
    unsigned int                 : 1;
    unsigned int nakine          : 1;
    unsigned int nakoute         : 1;
    unsigned int rxstpe          : 1;
    unsigned int rxoute          : 1;
    unsigned int txine           : 1;
} avr32_usbc_uecon7_t;



typedef struct avr32_usbc_uecon0set_t {
    unsigned int                 : 6;
    unsigned int busy1s          : 1;
    unsigned int busy0s          : 1;
    unsigned int                 : 4;
    unsigned int stallrqs        : 1;
    unsigned int rstdts          : 1;
    unsigned int nyetdiss        : 1;
    unsigned int                 : 3;
    unsigned int killbks         : 1;
    unsigned int nbusybkes       : 1;
    unsigned int ramacceres      : 1;
    unsigned int errortranses    : 1;
    unsigned int dataxes         : 1;
    unsigned int mdataes         : 1;
    unsigned int                 : 1;
    unsigned int stalledes       : 1;
    unsigned int                 : 1;
    unsigned int nakines         : 1;
    unsigned int nakoutes        : 1;
    unsigned int rxstpes         : 1;
    unsigned int rxoutes         : 1;
    unsigned int txines          : 1;
} avr32_usbc_uecon0set_t;



typedef struct avr32_usbc_uecon1set_t {
    unsigned int                 : 6;
    unsigned int busy1s          : 1;
    unsigned int busy0s          : 1;
    unsigned int                 : 4;
    unsigned int stallrqs        : 1;
    unsigned int rstdts          : 1;
    unsigned int nyetdiss        : 1;
    unsigned int                 : 3;
    unsigned int killbks         : 1;
    unsigned int nbusybkes       : 1;
    unsigned int                 : 1;
    unsigned int errortranses    : 1;
    unsigned int dataxes         : 1;
    unsigned int mdataes         : 1;
    unsigned int                 : 1;
    unsigned int stalledes       : 1;
    unsigned int                 : 1;
    unsigned int nakines         : 1;
    unsigned int nakoutes        : 1;
    unsigned int rxstpes         : 1;
    unsigned int rxoutes         : 1;
    unsigned int txines          : 1;
} avr32_usbc_uecon1set_t;



typedef struct avr32_usbc_uecon2set_t {
    unsigned int                 : 6;
    unsigned int busy1s          : 1;
    unsigned int busy0s          : 1;
    unsigned int                 : 4;
    unsigned int stallrqs        : 1;
    unsigned int rstdts          : 1;
    unsigned int nyetdiss        : 1;
    unsigned int                 : 3;
    unsigned int killbks         : 1;
    unsigned int nbusybkes       : 1;
    unsigned int                 : 1;
    unsigned int errortranses    : 1;
    unsigned int dataxes         : 1;
    unsigned int mdataes         : 1;
    unsigned int                 : 1;
    unsigned int stalledes       : 1;
    unsigned int                 : 1;
    unsigned int nakines         : 1;
    unsigned int nakoutes        : 1;
    unsigned int rxstpes         : 1;
    unsigned int rxoutes         : 1;
    unsigned int txines          : 1;
} avr32_usbc_uecon2set_t;



typedef struct avr32_usbc_uecon3set_t {
    unsigned int                 : 6;
    unsigned int busy1s          : 1;
    unsigned int busy0s          : 1;
    unsigned int                 : 4;
    unsigned int stallrqs        : 1;
    unsigned int rstdts          : 1;
    unsigned int nyetdiss        : 1;
    unsigned int                 : 3;
    unsigned int killbks         : 1;
    unsigned int nbusybkes       : 1;
    unsigned int                 : 1;
    unsigned int errortranses    : 1;
    unsigned int dataxes         : 1;
    unsigned int mdataes         : 1;
    unsigned int                 : 1;
    unsigned int stalledes       : 1;
    unsigned int                 : 1;
    unsigned int nakines         : 1;
    unsigned int nakoutes        : 1;
    unsigned int rxstpes         : 1;
    unsigned int rxoutes         : 1;
    unsigned int txines          : 1;
} avr32_usbc_uecon3set_t;



typedef struct avr32_usbc_uecon4set_t {
    unsigned int                 : 6;
    unsigned int busy1s          : 1;
    unsigned int busy0s          : 1;
    unsigned int                 : 4;
    unsigned int stallrqs        : 1;
    unsigned int rstdts          : 1;
    unsigned int nyetdiss        : 1;
    unsigned int                 : 3;
    unsigned int killbks         : 1;
    unsigned int nbusybkes       : 1;
    unsigned int                 : 1;
    unsigned int errortranses    : 1;
    unsigned int dataxes         : 1;
    unsigned int mdataes         : 1;
    unsigned int                 : 1;
    unsigned int stalledes       : 1;
    unsigned int                 : 1;
    unsigned int nakines         : 1;
    unsigned int nakoutes        : 1;
    unsigned int rxstpes         : 1;
    unsigned int rxoutes         : 1;
    unsigned int txines          : 1;
} avr32_usbc_uecon4set_t;



typedef struct avr32_usbc_uecon5set_t {
    unsigned int                 : 6;
    unsigned int busy1s          : 1;
    unsigned int busy0s          : 1;
    unsigned int                 : 4;
    unsigned int stallrqs        : 1;
    unsigned int rstdts          : 1;
    unsigned int nyetdiss        : 1;
    unsigned int                 : 3;
    unsigned int killbks         : 1;
    unsigned int nbusybkes       : 1;
    unsigned int                 : 1;
    unsigned int errortranses    : 1;
    unsigned int dataxes         : 1;
    unsigned int mdataes         : 1;
    unsigned int                 : 1;
    unsigned int stalledes       : 1;
    unsigned int                 : 1;
    unsigned int nakines         : 1;
    unsigned int nakoutes        : 1;
    unsigned int rxstpes         : 1;
    unsigned int rxoutes         : 1;
    unsigned int txines          : 1;
} avr32_usbc_uecon5set_t;



typedef struct avr32_usbc_uecon6set_t {
    unsigned int                 : 6;
    unsigned int busy1s          : 1;
    unsigned int busy0s          : 1;
    unsigned int                 : 4;
    unsigned int stallrqs        : 1;
    unsigned int rstdts          : 1;
    unsigned int nyetdiss        : 1;
    unsigned int                 : 3;
    unsigned int killbks         : 1;
    unsigned int nbusybkes       : 1;
    unsigned int                 : 1;
    unsigned int errortranses    : 1;
    unsigned int dataxes         : 1;
    unsigned int mdataes         : 1;
    unsigned int                 : 1;
    unsigned int stalledes       : 1;
    unsigned int                 : 1;
    unsigned int nakines         : 1;
    unsigned int nakoutes        : 1;
    unsigned int rxstpes         : 1;
    unsigned int rxoutes         : 1;
    unsigned int txines          : 1;
} avr32_usbc_uecon6set_t;



typedef struct avr32_usbc_uecon7set_t {
    unsigned int                 : 6;
    unsigned int busy1s          : 1;
    unsigned int busy0s          : 1;
    unsigned int                 : 4;
    unsigned int stallrqs        : 1;
    unsigned int rstdts          : 1;
    unsigned int nyetdiss        : 1;
    unsigned int                 : 3;
    unsigned int killbks         : 1;
    unsigned int nbusybkes       : 1;
    unsigned int                 : 1;
    unsigned int errortranses    : 1;
    unsigned int dataxes         : 1;
    unsigned int mdataes         : 1;
    unsigned int                 : 1;
    unsigned int stalledes       : 1;
    unsigned int                 : 1;
    unsigned int nakines         : 1;
    unsigned int nakoutes        : 1;
    unsigned int rxstpes         : 1;
    unsigned int rxoutes         : 1;
    unsigned int txines          : 1;
} avr32_usbc_uecon7set_t;



typedef struct avr32_usbc_uecon0clr_t {
    unsigned int                 : 6;
    unsigned int busy1c          : 1;
    unsigned int busy0c          : 1;
    unsigned int                 : 4;
    unsigned int stallrqc        : 1;
    unsigned int                 : 1;
    unsigned int nyetdisc        : 1;
    unsigned int                 : 2;
    unsigned int fifoconc        : 1;
    unsigned int                 : 1;
    unsigned int nbusybkec       : 1;
    unsigned int ramaccerec      : 1;
    unsigned int errortransec    : 1;
    unsigned int dataxec         : 1;
    unsigned int mdataec         : 1;
    unsigned int                 : 1;
    unsigned int stalledec       : 1;
    unsigned int                 : 1;
    unsigned int nakinec         : 1;
    unsigned int nakoutec        : 1;
    unsigned int rxstpec         : 1;
    unsigned int rxoutec         : 1;
    unsigned int txinec          : 1;
} avr32_usbc_uecon0clr_t;



typedef struct avr32_usbc_uecon1clr_t {
    unsigned int                 : 6;
    unsigned int busy1c          : 1;
    unsigned int busy0c          : 1;
    unsigned int                 : 4;
    unsigned int stallrqc        : 1;
    unsigned int                 : 1;
    unsigned int nyetdisc        : 1;
    unsigned int                 : 2;
    unsigned int fifoconc        : 1;
    unsigned int                 : 1;
    unsigned int nbusybkec       : 1;
    unsigned int                 : 1;
    unsigned int errortransec    : 1;
    unsigned int dataxec         : 1;
    unsigned int mdataec         : 1;
    unsigned int                 : 1;
    unsigned int stalledec       : 1;
    unsigned int                 : 1;
    unsigned int nakinec         : 1;
    unsigned int nakoutec        : 1;
    unsigned int rxstpec         : 1;
    unsigned int rxoutec         : 1;
    unsigned int txinec          : 1;
} avr32_usbc_uecon1clr_t;



typedef struct avr32_usbc_uecon2clr_t {
    unsigned int                 : 6;
    unsigned int busy1c          : 1;
    unsigned int busy0c          : 1;
    unsigned int                 : 4;
    unsigned int stallrqc        : 1;
    unsigned int                 : 1;
    unsigned int nyetdisc        : 1;
    unsigned int                 : 2;
    unsigned int fifoconc        : 1;
    unsigned int                 : 1;
    unsigned int nbusybkec       : 1;
    unsigned int                 : 1;
    unsigned int errortransec    : 1;
    unsigned int dataxec         : 1;
    unsigned int mdataec         : 1;
    unsigned int                 : 1;
    unsigned int stalledec       : 1;
    unsigned int                 : 1;
    unsigned int nakinec         : 1;
    unsigned int nakoutec        : 1;
    unsigned int rxstpec         : 1;
    unsigned int rxoutec         : 1;
    unsigned int txinec          : 1;
} avr32_usbc_uecon2clr_t;



typedef struct avr32_usbc_uecon3clr_t {
    unsigned int                 : 6;
    unsigned int busy1c          : 1;
    unsigned int busy0c          : 1;
    unsigned int                 : 4;
    unsigned int stallrqc        : 1;
    unsigned int                 : 1;
    unsigned int nyetdisc        : 1;
    unsigned int                 : 2;
    unsigned int fifoconc        : 1;
    unsigned int                 : 1;
    unsigned int nbusybkec       : 1;
    unsigned int                 : 1;
    unsigned int errortransec    : 1;
    unsigned int dataxec         : 1;
    unsigned int mdataec         : 1;
    unsigned int                 : 1;
    unsigned int stalledec       : 1;
    unsigned int                 : 1;
    unsigned int nakinec         : 1;
    unsigned int nakoutec        : 1;
    unsigned int rxstpec         : 1;
    unsigned int rxoutec         : 1;
    unsigned int txinec          : 1;
} avr32_usbc_uecon3clr_t;



typedef struct avr32_usbc_uecon4clr_t {
    unsigned int                 : 6;
    unsigned int busy1c          : 1;
    unsigned int busy0c          : 1;
    unsigned int                 : 4;
    unsigned int stallrqc        : 1;
    unsigned int                 : 1;
    unsigned int nyetdisc        : 1;
    unsigned int                 : 2;
    unsigned int fifoconc        : 1;
    unsigned int                 : 1;
    unsigned int nbusybkec       : 1;
    unsigned int                 : 1;
    unsigned int errortransec    : 1;
    unsigned int dataxec         : 1;
    unsigned int mdataec         : 1;
    unsigned int                 : 1;
    unsigned int stalledec       : 1;
    unsigned int                 : 1;
    unsigned int nakinec         : 1;
    unsigned int nakoutec        : 1;
    unsigned int rxstpec         : 1;
    unsigned int rxoutec         : 1;
    unsigned int txinec          : 1;
} avr32_usbc_uecon4clr_t;



typedef struct avr32_usbc_uecon5clr_t {
    unsigned int                 : 6;
    unsigned int busy1c          : 1;
    unsigned int busy0c          : 1;
    unsigned int                 : 4;
    unsigned int stallrqc        : 1;
    unsigned int                 : 1;
    unsigned int nyetdisc        : 1;
    unsigned int                 : 2;
    unsigned int fifoconc        : 1;
    unsigned int                 : 1;
    unsigned int nbusybkec       : 1;
    unsigned int                 : 1;
    unsigned int errortransec    : 1;
    unsigned int dataxec         : 1;
    unsigned int mdataec         : 1;
    unsigned int                 : 1;
    unsigned int stalledec       : 1;
    unsigned int                 : 1;
    unsigned int nakinec         : 1;
    unsigned int nakoutec        : 1;
    unsigned int rxstpec         : 1;
    unsigned int rxoutec         : 1;
    unsigned int txinec          : 1;
} avr32_usbc_uecon5clr_t;



typedef struct avr32_usbc_uecon6clr_t {
    unsigned int                 : 6;
    unsigned int busy1c          : 1;
    unsigned int busy0c          : 1;
    unsigned int                 : 4;
    unsigned int stallrqc        : 1;
    unsigned int                 : 1;
    unsigned int nyetdisc        : 1;
    unsigned int                 : 2;
    unsigned int fifoconc        : 1;
    unsigned int                 : 1;
    unsigned int nbusybkec       : 1;
    unsigned int                 : 1;
    unsigned int errortransec    : 1;
    unsigned int dataxec         : 1;
    unsigned int mdataec         : 1;
    unsigned int                 : 1;
    unsigned int stalledec       : 1;
    unsigned int                 : 1;
    unsigned int nakinec         : 1;
    unsigned int nakoutec        : 1;
    unsigned int rxstpec         : 1;
    unsigned int rxoutec         : 1;
    unsigned int txinec          : 1;
} avr32_usbc_uecon6clr_t;



typedef struct avr32_usbc_uecon7clr_t {
    unsigned int                 : 6;
    unsigned int busy1c          : 1;
    unsigned int busy0c          : 1;
    unsigned int                 : 4;
    unsigned int stallrqc        : 1;
    unsigned int                 : 1;
    unsigned int nyetdisc        : 1;
    unsigned int                 : 2;
    unsigned int fifoconc        : 1;
    unsigned int                 : 1;
    unsigned int nbusybkec       : 1;
    unsigned int                 : 1;
    unsigned int errortransec    : 1;
    unsigned int dataxec         : 1;
    unsigned int mdataec         : 1;
    unsigned int                 : 1;
    unsigned int stalledec       : 1;
    unsigned int                 : 1;
    unsigned int nakinec         : 1;
    unsigned int nakoutec        : 1;
    unsigned int rxstpec         : 1;
    unsigned int rxoutec         : 1;
    unsigned int txinec          : 1;
} avr32_usbc_uecon7clr_t;



typedef struct avr32_usbc_uhcon_t {
    unsigned int                 :18;
    unsigned int spdconf         : 2;
    unsigned int                 : 1;
    unsigned int resume          : 1;
    unsigned int reset           : 1;
    unsigned int sofe            : 1;
    unsigned int                 : 8;
} avr32_usbc_uhcon_t;



typedef struct avr32_usbc_uhint_t {
    unsigned int                 :17;
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
} avr32_usbc_uhint_t;



typedef struct avr32_usbc_uhintclr_t {
    unsigned int                 :25;
    unsigned int hwupic          : 1;
    unsigned int hsofic          : 1;
    unsigned int rxrsmic         : 1;
    unsigned int rsmedic         : 1;
    unsigned int rstic           : 1;
    unsigned int ddiscic         : 1;
    unsigned int dconnic         : 1;
} avr32_usbc_uhintclr_t;



typedef struct avr32_usbc_uhintset_t {
    unsigned int                 :25;
    unsigned int hwupis          : 1;
    unsigned int hsofis          : 1;
    unsigned int rxrsmis         : 1;
    unsigned int rsmedis         : 1;
    unsigned int rstis           : 1;
    unsigned int ddiscis         : 1;
    unsigned int dconnis         : 1;
} avr32_usbc_uhintset_t;



typedef struct avr32_usbc_uhinte_t {
    unsigned int                 :16;
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
} avr32_usbc_uhinte_t;



typedef struct avr32_usbc_uhinteclr_t {
    unsigned int                 :16;
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
} avr32_usbc_uhinteclr_t;



typedef struct avr32_usbc_uhinteset_t {
    unsigned int                 :16;
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
} avr32_usbc_uhinteset_t;



typedef struct avr32_usbc_uprst_t {
    unsigned int                 :24;
    unsigned int pen7            : 1;
    unsigned int pen6            : 1;
    unsigned int pen5            : 1;
    unsigned int pen4            : 1;
    unsigned int pen3            : 1;
    unsigned int pen2            : 1;
    unsigned int pen1            : 1;
    unsigned int pen0            : 1;
} avr32_usbc_uprst_t;



typedef struct avr32_usbc_uhfnum_t {
    unsigned int                 : 8;
    unsigned int flenhigh        : 8;
    unsigned int                 : 2;
    unsigned int fnum            :11;
    unsigned int mfnum           : 3;
} avr32_usbc_uhfnum_t;



typedef struct avr32_usbc_upcfg0_t {
    unsigned int binterval       : 8;
    unsigned int                 : 3;
    unsigned int pingen          : 1;
    unsigned int                 : 6;
    unsigned int ptype           : 2;
    unsigned int                 : 2;
    unsigned int ptoken          : 2;
    unsigned int                 : 1;
    unsigned int psize           : 3;
    unsigned int                 : 1;
    unsigned int pbk             : 1;
    unsigned int                 : 2;
} avr32_usbc_upcfg0_t;



typedef struct avr32_usbc_upcfg1_t {
    unsigned int binterval       : 8;
    unsigned int                 : 3;
    unsigned int pingen          : 1;
    unsigned int                 : 6;
    unsigned int ptype           : 2;
    unsigned int                 : 2;
    unsigned int ptoken          : 2;
    unsigned int                 : 1;
    unsigned int psize           : 3;
    unsigned int                 : 1;
    unsigned int pbk             : 1;
    unsigned int                 : 2;
} avr32_usbc_upcfg1_t;



typedef struct avr32_usbc_upcfg2_t {
    unsigned int binterval       : 8;
    unsigned int                 : 3;
    unsigned int pingen          : 1;
    unsigned int                 : 6;
    unsigned int ptype           : 2;
    unsigned int                 : 2;
    unsigned int ptoken          : 2;
    unsigned int                 : 1;
    unsigned int psize           : 3;
    unsigned int                 : 1;
    unsigned int pbk             : 1;
    unsigned int                 : 2;
} avr32_usbc_upcfg2_t;



typedef struct avr32_usbc_upcfg3_t {
    unsigned int binterval       : 8;
    unsigned int                 : 3;
    unsigned int pingen          : 1;
    unsigned int                 : 6;
    unsigned int ptype           : 2;
    unsigned int                 : 2;
    unsigned int ptoken          : 2;
    unsigned int                 : 1;
    unsigned int psize           : 3;
    unsigned int                 : 1;
    unsigned int pbk             : 1;
    unsigned int                 : 2;
} avr32_usbc_upcfg3_t;



typedef struct avr32_usbc_upcfg4_t {
    unsigned int binterval       : 8;
    unsigned int                 : 3;
    unsigned int pingen          : 1;
    unsigned int                 : 6;
    unsigned int ptype           : 2;
    unsigned int                 : 2;
    unsigned int ptoken          : 2;
    unsigned int                 : 1;
    unsigned int psize           : 3;
    unsigned int                 : 1;
    unsigned int pbk             : 1;
    unsigned int                 : 2;
} avr32_usbc_upcfg4_t;



typedef struct avr32_usbc_upcfg5_t {
    unsigned int binterval       : 8;
    unsigned int                 : 3;
    unsigned int pingen          : 1;
    unsigned int                 : 6;
    unsigned int ptype           : 2;
    unsigned int                 : 2;
    unsigned int ptoken          : 2;
    unsigned int                 : 1;
    unsigned int psize           : 3;
    unsigned int                 : 1;
    unsigned int pbk             : 1;
    unsigned int                 : 2;
} avr32_usbc_upcfg5_t;



typedef struct avr32_usbc_upcfg6_t {
    unsigned int binterval       : 8;
    unsigned int                 : 3;
    unsigned int pingen          : 1;
    unsigned int                 : 6;
    unsigned int ptype           : 2;
    unsigned int                 : 2;
    unsigned int ptoken          : 2;
    unsigned int                 : 1;
    unsigned int psize           : 3;
    unsigned int                 : 1;
    unsigned int pbk             : 1;
    unsigned int                 : 2;
} avr32_usbc_upcfg6_t;



typedef struct avr32_usbc_upcfg7_t {
    unsigned int binterval       : 8;
    unsigned int                 : 3;
    unsigned int pingen          : 1;
    unsigned int                 : 6;
    unsigned int ptype           : 2;
    unsigned int                 : 2;
    unsigned int ptoken          : 2;
    unsigned int                 : 1;
    unsigned int psize           : 3;
    unsigned int                 : 1;
    unsigned int pbk             : 1;
    unsigned int                 : 2;
} avr32_usbc_upcfg7_t;



typedef struct avr32_usbc_upsta0_t {
    unsigned int                 : 1;
    unsigned int pbyct           :11;
    unsigned int                 : 1;
    unsigned int cfgok           : 1;
    unsigned int                 : 1;
    unsigned int rwall           : 1;
    unsigned int currbk          : 2;
    unsigned int nbusybk         : 2;
    unsigned int                 : 1;
    unsigned int ramacceri       : 1;
    unsigned int dtseq           : 2;
    unsigned int                 : 1;
    unsigned int rxstalldi       : 1;
    unsigned int errorfi         : 1;
    unsigned int nakedi          : 1;
    unsigned int perri           : 1;
    unsigned int txstpi          : 1;
    unsigned int txouti          : 1;
    unsigned int rxini           : 1;
} avr32_usbc_upsta0_t;



typedef struct avr32_usbc_upsta1_t {
    unsigned int                 : 1;
    unsigned int pbyct           :11;
    unsigned int                 : 1;
    unsigned int cfgok           : 1;
    unsigned int                 : 1;
    unsigned int rwall           : 1;
    unsigned int currbk          : 2;
    unsigned int nbusybk         : 2;
    unsigned int                 : 1;
    unsigned int ramacceri       : 1;
    unsigned int dtseq           : 2;
    unsigned int                 : 1;
    unsigned int rxstalldi       : 1;
    unsigned int errorfi         : 1;
    unsigned int nakedi          : 1;
    unsigned int perri           : 1;
    unsigned int txstpi          : 1;
    unsigned int txouti          : 1;
    unsigned int rxini           : 1;
} avr32_usbc_upsta1_t;



typedef struct avr32_usbc_upsta2_t {
    unsigned int                 : 1;
    unsigned int pbyct           :11;
    unsigned int                 : 1;
    unsigned int cfgok           : 1;
    unsigned int                 : 1;
    unsigned int rwall           : 1;
    unsigned int currbk          : 2;
    unsigned int nbusybk         : 2;
    unsigned int                 : 1;
    unsigned int ramacceri       : 1;
    unsigned int dtseq           : 2;
    unsigned int                 : 1;
    unsigned int rxstalldi       : 1;
    unsigned int errorfi         : 1;
    unsigned int nakedi          : 1;
    unsigned int perri           : 1;
    unsigned int txstpi          : 1;
    unsigned int txouti          : 1;
    unsigned int rxini           : 1;
} avr32_usbc_upsta2_t;



typedef struct avr32_usbc_upsta3_t {
    unsigned int                 : 1;
    unsigned int pbyct           :11;
    unsigned int                 : 1;
    unsigned int cfgok           : 1;
    unsigned int                 : 1;
    unsigned int rwall           : 1;
    unsigned int currbk          : 2;
    unsigned int nbusybk         : 2;
    unsigned int                 : 1;
    unsigned int ramacceri       : 1;
    unsigned int dtseq           : 2;
    unsigned int                 : 1;
    unsigned int rxstalldi       : 1;
    unsigned int errorfi         : 1;
    unsigned int nakedi          : 1;
    unsigned int perri           : 1;
    unsigned int txstpi          : 1;
    unsigned int txouti          : 1;
    unsigned int rxini           : 1;
} avr32_usbc_upsta3_t;



typedef struct avr32_usbc_upsta4_t {
    unsigned int                 : 1;
    unsigned int pbyct           :11;
    unsigned int                 : 1;
    unsigned int cfgok           : 1;
    unsigned int                 : 1;
    unsigned int rwall           : 1;
    unsigned int currbk          : 2;
    unsigned int nbusybk         : 2;
    unsigned int                 : 1;
    unsigned int ramacceri       : 1;
    unsigned int dtseq           : 2;
    unsigned int                 : 1;
    unsigned int rxstalldi       : 1;
    unsigned int errorfi         : 1;
    unsigned int nakedi          : 1;
    unsigned int perri           : 1;
    unsigned int txstpi          : 1;
    unsigned int txouti          : 1;
    unsigned int rxini           : 1;
} avr32_usbc_upsta4_t;



typedef struct avr32_usbc_upsta5_t {
    unsigned int                 : 1;
    unsigned int pbyct           :11;
    unsigned int                 : 1;
    unsigned int cfgok           : 1;
    unsigned int                 : 1;
    unsigned int rwall           : 1;
    unsigned int currbk          : 2;
    unsigned int nbusybk         : 2;
    unsigned int                 : 1;
    unsigned int ramacceri       : 1;
    unsigned int dtseq           : 2;
    unsigned int                 : 1;
    unsigned int rxstalldi       : 1;
    unsigned int errorfi         : 1;
    unsigned int nakedi          : 1;
    unsigned int perri           : 1;
    unsigned int txstpi          : 1;
    unsigned int txouti          : 1;
    unsigned int rxini           : 1;
} avr32_usbc_upsta5_t;



typedef struct avr32_usbc_upsta6_t {
    unsigned int                 : 1;
    unsigned int pbyct           :11;
    unsigned int                 : 1;
    unsigned int cfgok           : 1;
    unsigned int                 : 1;
    unsigned int rwall           : 1;
    unsigned int currbk          : 2;
    unsigned int nbusybk         : 2;
    unsigned int                 : 1;
    unsigned int ramacceri       : 1;
    unsigned int dtseq           : 2;
    unsigned int                 : 1;
    unsigned int rxstalldi       : 1;
    unsigned int errorfi         : 1;
    unsigned int nakedi          : 1;
    unsigned int perri           : 1;
    unsigned int txstpi          : 1;
    unsigned int txouti          : 1;
    unsigned int rxini           : 1;
} avr32_usbc_upsta6_t;



typedef struct avr32_usbc_upsta7_t {
    unsigned int                 : 1;
    unsigned int pbyct           :11;
    unsigned int                 : 1;
    unsigned int cfgok           : 1;
    unsigned int                 : 1;
    unsigned int rwall           : 1;
    unsigned int currbk          : 2;
    unsigned int nbusybk         : 2;
    unsigned int                 : 1;
    unsigned int ramacceri       : 1;
    unsigned int dtseq           : 2;
    unsigned int                 : 1;
    unsigned int rxstalldi       : 1;
    unsigned int errorfi         : 1;
    unsigned int nakedi          : 1;
    unsigned int perri           : 1;
    unsigned int txstpi          : 1;
    unsigned int txouti          : 1;
    unsigned int rxini           : 1;
} avr32_usbc_upsta7_t;



typedef struct avr32_usbc_upsta0clr_t {
    unsigned int                 :21;
    unsigned int ramacceric      : 1;
    unsigned int                 : 3;
    unsigned int rxstalldic      : 1;
    unsigned int errorfic        : 1;
    unsigned int nakedic         : 1;
    unsigned int                 : 1;
    unsigned int txstpic         : 1;
    unsigned int txoutic         : 1;
    unsigned int rxinic          : 1;
} avr32_usbc_upsta0clr_t;



typedef struct avr32_usbc_upsta1clr_t {
    unsigned int                 :21;
    unsigned int ramacceric      : 1;
    unsigned int                 : 3;
    unsigned int rxstalldic      : 1;
    unsigned int errorfic        : 1;
    unsigned int nakedic         : 1;
    unsigned int                 : 1;
    unsigned int txstpic         : 1;
    unsigned int txoutic         : 1;
    unsigned int rxinic          : 1;
} avr32_usbc_upsta1clr_t;



typedef struct avr32_usbc_upsta2clr_t {
    unsigned int                 :21;
    unsigned int ramacceric      : 1;
    unsigned int                 : 3;
    unsigned int rxstalldic      : 1;
    unsigned int errorfic        : 1;
    unsigned int nakedic         : 1;
    unsigned int                 : 1;
    unsigned int txstpic         : 1;
    unsigned int txoutic         : 1;
    unsigned int rxinic          : 1;
} avr32_usbc_upsta2clr_t;



typedef struct avr32_usbc_upsta3clr_t {
    unsigned int                 :21;
    unsigned int ramacceric      : 1;
    unsigned int                 : 3;
    unsigned int rxstalldic      : 1;
    unsigned int errorfic        : 1;
    unsigned int nakedic         : 1;
    unsigned int                 : 1;
    unsigned int txstpic         : 1;
    unsigned int txoutic         : 1;
    unsigned int rxinic          : 1;
} avr32_usbc_upsta3clr_t;



typedef struct avr32_usbc_upsta4clr_t {
    unsigned int                 :21;
    unsigned int ramacceric      : 1;
    unsigned int                 : 3;
    unsigned int rxstalldic      : 1;
    unsigned int errorfic        : 1;
    unsigned int nakedic         : 1;
    unsigned int                 : 1;
    unsigned int txstpic         : 1;
    unsigned int txoutic         : 1;
    unsigned int rxinic          : 1;
} avr32_usbc_upsta4clr_t;



typedef struct avr32_usbc_upsta5clr_t {
    unsigned int                 :21;
    unsigned int ramacceric      : 1;
    unsigned int                 : 3;
    unsigned int rxstalldic      : 1;
    unsigned int errorfic        : 1;
    unsigned int nakedic         : 1;
    unsigned int                 : 1;
    unsigned int txstpic         : 1;
    unsigned int txoutic         : 1;
    unsigned int rxinic          : 1;
} avr32_usbc_upsta5clr_t;



typedef struct avr32_usbc_upsta6clr_t {
    unsigned int                 :21;
    unsigned int ramacceric      : 1;
    unsigned int                 : 3;
    unsigned int rxstalldic      : 1;
    unsigned int errorfic        : 1;
    unsigned int nakedic         : 1;
    unsigned int                 : 1;
    unsigned int txstpic         : 1;
    unsigned int txoutic         : 1;
    unsigned int rxinic          : 1;
} avr32_usbc_upsta6clr_t;



typedef struct avr32_usbc_upsta7clr_t {
    unsigned int                 :21;
    unsigned int ramacceric      : 1;
    unsigned int                 : 3;
    unsigned int rxstalldic      : 1;
    unsigned int errorfic        : 1;
    unsigned int nakedic         : 1;
    unsigned int                 : 1;
    unsigned int txstpic         : 1;
    unsigned int txoutic         : 1;
    unsigned int rxinic          : 1;
} avr32_usbc_upsta7clr_t;



typedef struct avr32_usbc_upsta0set_t {
    unsigned int                 :21;
    unsigned int ramacceris      : 1;
    unsigned int                 : 3;
    unsigned int rxstalldis      : 1;
    unsigned int errorfis        : 1;
    unsigned int nakedis         : 1;
    unsigned int perris          : 1;
    unsigned int txstpis         : 1;
    unsigned int txoutis         : 1;
    unsigned int rxinis          : 1;
} avr32_usbc_upsta0set_t;



typedef struct avr32_usbc_upsta1set_t {
    unsigned int                 :21;
    unsigned int ramacceris      : 1;
    unsigned int                 : 3;
    unsigned int rxstalldis      : 1;
    unsigned int errorfis        : 1;
    unsigned int nakedis         : 1;
    unsigned int perris          : 1;
    unsigned int txstpis         : 1;
    unsigned int txoutis         : 1;
    unsigned int rxinis          : 1;
} avr32_usbc_upsta1set_t;



typedef struct avr32_usbc_upsta2set_t {
    unsigned int                 :21;
    unsigned int ramacceris      : 1;
    unsigned int                 : 3;
    unsigned int rxstalldis      : 1;
    unsigned int errorfis        : 1;
    unsigned int nakedis         : 1;
    unsigned int perris          : 1;
    unsigned int txstpis         : 1;
    unsigned int txoutis         : 1;
    unsigned int rxinis          : 1;
} avr32_usbc_upsta2set_t;



typedef struct avr32_usbc_upsta3set_t {
    unsigned int                 :21;
    unsigned int ramacceris      : 1;
    unsigned int                 : 3;
    unsigned int rxstalldis      : 1;
    unsigned int errorfis        : 1;
    unsigned int nakedis         : 1;
    unsigned int perris          : 1;
    unsigned int txstpis         : 1;
    unsigned int txoutis         : 1;
    unsigned int rxinis          : 1;
} avr32_usbc_upsta3set_t;



typedef struct avr32_usbc_upsta4set_t {
    unsigned int                 :21;
    unsigned int ramacceris      : 1;
    unsigned int                 : 3;
    unsigned int rxstalldis      : 1;
    unsigned int errorfis        : 1;
    unsigned int nakedis         : 1;
    unsigned int perris          : 1;
    unsigned int txstpis         : 1;
    unsigned int txoutis         : 1;
    unsigned int rxinis          : 1;
} avr32_usbc_upsta4set_t;



typedef struct avr32_usbc_upsta5set_t {
    unsigned int                 :21;
    unsigned int ramacceris      : 1;
    unsigned int                 : 3;
    unsigned int rxstalldis      : 1;
    unsigned int errorfis        : 1;
    unsigned int nakedis         : 1;
    unsigned int perris          : 1;
    unsigned int txstpis         : 1;
    unsigned int txoutis         : 1;
    unsigned int rxinis          : 1;
} avr32_usbc_upsta5set_t;



typedef struct avr32_usbc_upsta6set_t {
    unsigned int                 :21;
    unsigned int ramacceris      : 1;
    unsigned int                 : 3;
    unsigned int rxstalldis      : 1;
    unsigned int errorfis        : 1;
    unsigned int nakedis         : 1;
    unsigned int perris          : 1;
    unsigned int txstpis         : 1;
    unsigned int txoutis         : 1;
    unsigned int rxinis          : 1;
} avr32_usbc_upsta6set_t;



typedef struct avr32_usbc_upsta7set_t {
    unsigned int                 :21;
    unsigned int ramacceris      : 1;
    unsigned int                 : 3;
    unsigned int rxstalldis      : 1;
    unsigned int errorfis        : 1;
    unsigned int nakedis         : 1;
    unsigned int perris          : 1;
    unsigned int txstpis         : 1;
    unsigned int txoutis         : 1;
    unsigned int rxinis          : 1;
} avr32_usbc_upsta7set_t;



typedef struct avr32_usbc_upcon0_t {
    unsigned int                 :12;
    unsigned int initbk          : 1;
    unsigned int initdtgl        : 1;
    unsigned int pfreeze         : 1;
    unsigned int                 : 2;
    unsigned int fifocon         : 1;
    unsigned int                 : 1;
    unsigned int nbusybke        : 1;
    unsigned int                 : 1;
    unsigned int ramaccere       : 1;
    unsigned int                 : 3;
    unsigned int rxstallde       : 1;
    unsigned int errorfie        : 1;
    unsigned int nakede          : 1;
    unsigned int perre           : 1;
    unsigned int txstpe          : 1;
    unsigned int txoute          : 1;
    unsigned int rxine           : 1;
} avr32_usbc_upcon0_t;



typedef struct avr32_usbc_upcon1_t {
    unsigned int                 :12;
    unsigned int initbk          : 1;
    unsigned int initdtgl        : 1;
    unsigned int pfreeze         : 1;
    unsigned int                 : 2;
    unsigned int fifocon         : 1;
    unsigned int                 : 1;
    unsigned int nbusybke        : 1;
    unsigned int                 : 1;
    unsigned int ramaccere       : 1;
    unsigned int                 : 3;
    unsigned int rxstallde       : 1;
    unsigned int errorfie        : 1;
    unsigned int nakede          : 1;
    unsigned int perre           : 1;
    unsigned int txstpe          : 1;
    unsigned int txoute          : 1;
    unsigned int rxine           : 1;
} avr32_usbc_upcon1_t;



typedef struct avr32_usbc_upcon2_t {
    unsigned int                 :12;
    unsigned int initbk          : 1;
    unsigned int initdtgl        : 1;
    unsigned int pfreeze         : 1;
    unsigned int                 : 2;
    unsigned int fifocon         : 1;
    unsigned int                 : 1;
    unsigned int nbusybke        : 1;
    unsigned int                 : 1;
    unsigned int ramaccere       : 1;
    unsigned int                 : 3;
    unsigned int rxstallde       : 1;
    unsigned int errorfie        : 1;
    unsigned int nakede          : 1;
    unsigned int perre           : 1;
    unsigned int txstpe          : 1;
    unsigned int txoute          : 1;
    unsigned int rxine           : 1;
} avr32_usbc_upcon2_t;



typedef struct avr32_usbc_upcon3_t {
    unsigned int                 :12;
    unsigned int initbk          : 1;
    unsigned int initdtgl        : 1;
    unsigned int pfreeze         : 1;
    unsigned int                 : 2;
    unsigned int fifocon         : 1;
    unsigned int                 : 1;
    unsigned int nbusybke        : 1;
    unsigned int                 : 1;
    unsigned int ramaccere       : 1;
    unsigned int                 : 3;
    unsigned int rxstallde       : 1;
    unsigned int errorfie        : 1;
    unsigned int nakede          : 1;
    unsigned int perre           : 1;
    unsigned int txstpe          : 1;
    unsigned int txoute          : 1;
    unsigned int rxine           : 1;
} avr32_usbc_upcon3_t;



typedef struct avr32_usbc_upcon4_t {
    unsigned int                 :12;
    unsigned int initbk          : 1;
    unsigned int initdtgl        : 1;
    unsigned int pfreeze         : 1;
    unsigned int                 : 2;
    unsigned int fifocon         : 1;
    unsigned int                 : 1;
    unsigned int nbusybke        : 1;
    unsigned int                 : 1;
    unsigned int ramaccere       : 1;
    unsigned int                 : 3;
    unsigned int rxstallde       : 1;
    unsigned int errorfie        : 1;
    unsigned int nakede          : 1;
    unsigned int perre           : 1;
    unsigned int txstpe          : 1;
    unsigned int txoute          : 1;
    unsigned int rxine           : 1;
} avr32_usbc_upcon4_t;



typedef struct avr32_usbc_upcon5_t {
    unsigned int                 :12;
    unsigned int initbk          : 1;
    unsigned int initdtgl        : 1;
    unsigned int pfreeze         : 1;
    unsigned int                 : 2;
    unsigned int fifocon         : 1;
    unsigned int                 : 1;
    unsigned int nbusybke        : 1;
    unsigned int                 : 1;
    unsigned int ramaccere       : 1;
    unsigned int                 : 3;
    unsigned int rxstallde       : 1;
    unsigned int errorfie        : 1;
    unsigned int nakede          : 1;
    unsigned int perre           : 1;
    unsigned int txstpe          : 1;
    unsigned int txoute          : 1;
    unsigned int rxine           : 1;
} avr32_usbc_upcon5_t;



typedef struct avr32_usbc_upcon6_t {
    unsigned int                 :12;
    unsigned int initbk          : 1;
    unsigned int initdtgl        : 1;
    unsigned int pfreeze         : 1;
    unsigned int                 : 2;
    unsigned int fifocon         : 1;
    unsigned int                 : 1;
    unsigned int nbusybke        : 1;
    unsigned int                 : 1;
    unsigned int ramaccere       : 1;
    unsigned int                 : 3;
    unsigned int rxstallde       : 1;
    unsigned int errorfie        : 1;
    unsigned int nakede          : 1;
    unsigned int perre           : 1;
    unsigned int txstpe          : 1;
    unsigned int txoute          : 1;
    unsigned int rxine           : 1;
} avr32_usbc_upcon6_t;



typedef struct avr32_usbc_upcon7_t {
    unsigned int                 :12;
    unsigned int initbk          : 1;
    unsigned int initdtgl        : 1;
    unsigned int pfreeze         : 1;
    unsigned int                 : 2;
    unsigned int fifocon         : 1;
    unsigned int                 : 1;
    unsigned int nbusybke        : 1;
    unsigned int                 : 1;
    unsigned int ramaccere       : 1;
    unsigned int                 : 3;
    unsigned int rxstallde       : 1;
    unsigned int errorfie        : 1;
    unsigned int nakede          : 1;
    unsigned int perre           : 1;
    unsigned int txstpe          : 1;
    unsigned int txoute          : 1;
    unsigned int rxine           : 1;
} avr32_usbc_upcon7_t;



typedef struct avr32_usbc_upcon0set_t {
    unsigned int                 :12;
    unsigned int initbks         : 1;
    unsigned int initdtgls       : 1;
    unsigned int pfreezes        : 1;
    unsigned int                 : 2;
    unsigned int fifocons        : 1;
    unsigned int                 : 1;
    unsigned int nbusybkes       : 1;
    unsigned int                 : 1;
    unsigned int ramacceres      : 1;
    unsigned int                 : 3;
    unsigned int rxstalldes      : 1;
    unsigned int errorfies       : 1;
    unsigned int nakedes         : 1;
    unsigned int perres          : 1;
    unsigned int txstpes         : 1;
    unsigned int txoutes         : 1;
    unsigned int rxines          : 1;
} avr32_usbc_upcon0set_t;



typedef struct avr32_usbc_upcon1set_t {
    unsigned int                 :12;
    unsigned int initbks         : 1;
    unsigned int initdtgls       : 1;
    unsigned int pfreezes        : 1;
    unsigned int                 : 2;
    unsigned int fifocons        : 1;
    unsigned int                 : 1;
    unsigned int nbusybkes       : 1;
    unsigned int                 : 1;
    unsigned int ramacceres      : 1;
    unsigned int                 : 3;
    unsigned int rxstalldes      : 1;
    unsigned int errorfies       : 1;
    unsigned int nakedes         : 1;
    unsigned int perres          : 1;
    unsigned int txstpes         : 1;
    unsigned int txoutes         : 1;
    unsigned int rxines          : 1;
} avr32_usbc_upcon1set_t;



typedef struct avr32_usbc_upcon2set_t {
    unsigned int                 :12;
    unsigned int initbks         : 1;
    unsigned int initdtgls       : 1;
    unsigned int pfreezes        : 1;
    unsigned int                 : 2;
    unsigned int fifocons        : 1;
    unsigned int                 : 1;
    unsigned int nbusybkes       : 1;
    unsigned int                 : 1;
    unsigned int ramacceres      : 1;
    unsigned int                 : 3;
    unsigned int rxstalldes      : 1;
    unsigned int errorfies       : 1;
    unsigned int nakedes         : 1;
    unsigned int perres          : 1;
    unsigned int txstpes         : 1;
    unsigned int txoutes         : 1;
    unsigned int rxines          : 1;
} avr32_usbc_upcon2set_t;



typedef struct avr32_usbc_upcon3set_t {
    unsigned int                 :12;
    unsigned int initbks         : 1;
    unsigned int initdtgls       : 1;
    unsigned int pfreezes        : 1;
    unsigned int                 : 2;
    unsigned int fifocons        : 1;
    unsigned int                 : 1;
    unsigned int nbusybkes       : 1;
    unsigned int                 : 1;
    unsigned int ramacceres      : 1;
    unsigned int                 : 3;
    unsigned int rxstalldes      : 1;
    unsigned int errorfies       : 1;
    unsigned int nakedes         : 1;
    unsigned int perres          : 1;
    unsigned int txstpes         : 1;
    unsigned int txoutes         : 1;
    unsigned int rxines          : 1;
} avr32_usbc_upcon3set_t;



typedef struct avr32_usbc_upcon4set_t {
    unsigned int                 :12;
    unsigned int initbks         : 1;
    unsigned int initdtgls       : 1;
    unsigned int pfreezes        : 1;
    unsigned int                 : 2;
    unsigned int fifocons        : 1;
    unsigned int                 : 1;
    unsigned int nbusybkes       : 1;
    unsigned int                 : 1;
    unsigned int ramacceres      : 1;
    unsigned int                 : 3;
    unsigned int rxstalldes      : 1;
    unsigned int errorfies       : 1;
    unsigned int nakedes         : 1;
    unsigned int perres          : 1;
    unsigned int txstpes         : 1;
    unsigned int txoutes         : 1;
    unsigned int rxines          : 1;
} avr32_usbc_upcon4set_t;



typedef struct avr32_usbc_upcon5set_t {
    unsigned int                 :12;
    unsigned int initbks         : 1;
    unsigned int initdtgls       : 1;
    unsigned int pfreezes        : 1;
    unsigned int                 : 2;
    unsigned int fifocons        : 1;
    unsigned int                 : 1;
    unsigned int nbusybkes       : 1;
    unsigned int                 : 1;
    unsigned int ramacceres      : 1;
    unsigned int                 : 3;
    unsigned int rxstalldes      : 1;
    unsigned int errorfies       : 1;
    unsigned int nakedes         : 1;
    unsigned int perres          : 1;
    unsigned int txstpes         : 1;
    unsigned int txoutes         : 1;
    unsigned int rxines          : 1;
} avr32_usbc_upcon5set_t;



typedef struct avr32_usbc_upcon6set_t {
    unsigned int                 :12;
    unsigned int initbks         : 1;
    unsigned int initdtgls       : 1;
    unsigned int pfreezes        : 1;
    unsigned int                 : 2;
    unsigned int fifocons        : 1;
    unsigned int                 : 1;
    unsigned int nbusybkes       : 1;
    unsigned int                 : 1;
    unsigned int ramacceres      : 1;
    unsigned int                 : 3;
    unsigned int rxstalldes      : 1;
    unsigned int errorfies       : 1;
    unsigned int nakedes         : 1;
    unsigned int perres          : 1;
    unsigned int txstpes         : 1;
    unsigned int txoutes         : 1;
    unsigned int rxines          : 1;
} avr32_usbc_upcon6set_t;



typedef struct avr32_usbc_upcon7set_t {
    unsigned int                 :12;
    unsigned int initbks         : 1;
    unsigned int initdtgls       : 1;
    unsigned int pfreezes        : 1;
    unsigned int                 : 2;
    unsigned int fifocons        : 1;
    unsigned int                 : 1;
    unsigned int nbusybkes       : 1;
    unsigned int                 : 1;
    unsigned int ramacceres      : 1;
    unsigned int                 : 3;
    unsigned int rxstalldes      : 1;
    unsigned int errorfies       : 1;
    unsigned int nakedes         : 1;
    unsigned int perres          : 1;
    unsigned int txstpes         : 1;
    unsigned int txoutes         : 1;
    unsigned int rxines          : 1;
} avr32_usbc_upcon7set_t;



typedef struct avr32_usbc_upcon0clr_t {
    unsigned int                 :12;
    unsigned int initbkc         : 1;
    unsigned int initdtglc       : 1;
    unsigned int pfreezec        : 1;
    unsigned int                 : 2;
    unsigned int fifoconc        : 1;
    unsigned int                 : 1;
    unsigned int nbusybkec       : 1;
    unsigned int                 : 1;
    unsigned int ramaccerec      : 1;
    unsigned int                 : 3;
    unsigned int rxstalldec      : 1;
    unsigned int errorfiec       : 1;
    unsigned int nakedec         : 1;
    unsigned int perrec          : 1;
    unsigned int txstpec         : 1;
    unsigned int txoutec         : 1;
    unsigned int rxinec          : 1;
} avr32_usbc_upcon0clr_t;



typedef struct avr32_usbc_upcon1clr_t {
    unsigned int                 :12;
    unsigned int initbkc         : 1;
    unsigned int initdtglc       : 1;
    unsigned int pfreezec        : 1;
    unsigned int                 : 2;
    unsigned int fifoconc        : 1;
    unsigned int                 : 1;
    unsigned int nbusybkec       : 1;
    unsigned int                 : 1;
    unsigned int ramaccerec      : 1;
    unsigned int                 : 3;
    unsigned int rxstalldec      : 1;
    unsigned int errorfiec       : 1;
    unsigned int nakedec         : 1;
    unsigned int perrec          : 1;
    unsigned int txstpec         : 1;
    unsigned int txoutec         : 1;
    unsigned int rxinec          : 1;
} avr32_usbc_upcon1clr_t;



typedef struct avr32_usbc_upcon2clr_t {
    unsigned int                 :12;
    unsigned int initbkc         : 1;
    unsigned int initdtglc       : 1;
    unsigned int pfreezec        : 1;
    unsigned int                 : 2;
    unsigned int fifoconc        : 1;
    unsigned int                 : 1;
    unsigned int nbusybkec       : 1;
    unsigned int                 : 1;
    unsigned int ramaccerec      : 1;
    unsigned int                 : 3;
    unsigned int rxstalldec      : 1;
    unsigned int errorfiec       : 1;
    unsigned int nakedec         : 1;
    unsigned int perrec          : 1;
    unsigned int txstpec         : 1;
    unsigned int txoutec         : 1;
    unsigned int rxinec          : 1;
} avr32_usbc_upcon2clr_t;



typedef struct avr32_usbc_upcon3clr_t {
    unsigned int                 :12;
    unsigned int initbkc         : 1;
    unsigned int initdtglc       : 1;
    unsigned int pfreezec        : 1;
    unsigned int                 : 2;
    unsigned int fifoconc        : 1;
    unsigned int                 : 1;
    unsigned int nbusybkec       : 1;
    unsigned int                 : 1;
    unsigned int ramaccerec      : 1;
    unsigned int                 : 3;
    unsigned int rxstalldec      : 1;
    unsigned int errorfiec       : 1;
    unsigned int nakedec         : 1;
    unsigned int perrec          : 1;
    unsigned int txstpec         : 1;
    unsigned int txoutec         : 1;
    unsigned int rxinec          : 1;
} avr32_usbc_upcon3clr_t;



typedef struct avr32_usbc_upcon4clr_t {
    unsigned int                 :12;
    unsigned int initbkc         : 1;
    unsigned int initdtglc       : 1;
    unsigned int pfreezec        : 1;
    unsigned int                 : 2;
    unsigned int fifoconc        : 1;
    unsigned int                 : 1;
    unsigned int nbusybkec       : 1;
    unsigned int                 : 1;
    unsigned int ramaccerec      : 1;
    unsigned int                 : 3;
    unsigned int rxstalldec      : 1;
    unsigned int errorfiec       : 1;
    unsigned int nakedec         : 1;
    unsigned int perrec          : 1;
    unsigned int txstpec         : 1;
    unsigned int txoutec         : 1;
    unsigned int rxinec          : 1;
} avr32_usbc_upcon4clr_t;



typedef struct avr32_usbc_upcon5clr_t {
    unsigned int                 :12;
    unsigned int initbkc         : 1;
    unsigned int initdtglc       : 1;
    unsigned int pfreezec        : 1;
    unsigned int                 : 2;
    unsigned int fifoconc        : 1;
    unsigned int                 : 1;
    unsigned int nbusybkec       : 1;
    unsigned int                 : 1;
    unsigned int ramaccerec      : 1;
    unsigned int                 : 3;
    unsigned int rxstalldec      : 1;
    unsigned int errorfiec       : 1;
    unsigned int nakedec         : 1;
    unsigned int perrec          : 1;
    unsigned int txstpec         : 1;
    unsigned int txoutec         : 1;
    unsigned int rxinec          : 1;
} avr32_usbc_upcon5clr_t;



typedef struct avr32_usbc_upcon6clr_t {
    unsigned int                 :12;
    unsigned int initbkc         : 1;
    unsigned int initdtglc       : 1;
    unsigned int pfreezec        : 1;
    unsigned int                 : 2;
    unsigned int fifoconc        : 1;
    unsigned int                 : 1;
    unsigned int nbusybkec       : 1;
    unsigned int                 : 1;
    unsigned int ramaccerec      : 1;
    unsigned int                 : 3;
    unsigned int rxstalldec      : 1;
    unsigned int errorfiec       : 1;
    unsigned int nakedec         : 1;
    unsigned int perrec          : 1;
    unsigned int txstpec         : 1;
    unsigned int txoutec         : 1;
    unsigned int rxinec          : 1;
} avr32_usbc_upcon6clr_t;



typedef struct avr32_usbc_upcon7clr_t {
    unsigned int                 :12;
    unsigned int initbkc         : 1;
    unsigned int initdtglc       : 1;
    unsigned int pfreezec        : 1;
    unsigned int                 : 2;
    unsigned int fifoconc        : 1;
    unsigned int                 : 1;
    unsigned int nbusybkec       : 1;
    unsigned int                 : 1;
    unsigned int ramaccerec      : 1;
    unsigned int                 : 3;
    unsigned int rxstalldec      : 1;
    unsigned int errorfiec       : 1;
    unsigned int nakedec         : 1;
    unsigned int perrec          : 1;
    unsigned int txstpec         : 1;
    unsigned int txoutec         : 1;
    unsigned int rxinec          : 1;
} avr32_usbc_upcon7clr_t;



typedef struct avr32_usbc_upinrq0_t {
    unsigned int                 :23;
    unsigned int inmode          : 1;
    unsigned int inrq            : 8;
} avr32_usbc_upinrq0_t;



typedef struct avr32_usbc_upinrq1_t {
    unsigned int                 :23;
    unsigned int inmode          : 1;
    unsigned int inrq            : 8;
} avr32_usbc_upinrq1_t;



typedef struct avr32_usbc_upinrq2_t {
    unsigned int                 :23;
    unsigned int inmode          : 1;
    unsigned int inrq            : 8;
} avr32_usbc_upinrq2_t;



typedef struct avr32_usbc_upinrq3_t {
    unsigned int                 :23;
    unsigned int inmode          : 1;
    unsigned int inrq            : 8;
} avr32_usbc_upinrq3_t;



typedef struct avr32_usbc_upinrq4_t {
    unsigned int                 :23;
    unsigned int inmode          : 1;
    unsigned int inrq            : 8;
} avr32_usbc_upinrq4_t;



typedef struct avr32_usbc_upinrq5_t {
    unsigned int                 :23;
    unsigned int inmode          : 1;
    unsigned int inrq            : 8;
} avr32_usbc_upinrq5_t;



typedef struct avr32_usbc_upinrq6_t {
    unsigned int                 :23;
    unsigned int inmode          : 1;
    unsigned int inrq            : 8;
} avr32_usbc_upinrq6_t;



typedef struct avr32_usbc_upinrq7_t {
    unsigned int                 :23;
    unsigned int inmode          : 1;
    unsigned int inrq            : 8;
} avr32_usbc_upinrq7_t;



typedef struct avr32_usbc_usbcon_t {
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
} avr32_usbc_usbcon_t;



typedef struct avr32_usbc_usbsta_t {
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
} avr32_usbc_usbsta_t;



typedef struct avr32_usbc_usbstaclr_t {
    unsigned int                 :22;
    unsigned int vbusrqc         : 1;
    unsigned int ramacceric      : 1;
    unsigned int stoic           : 1;
    unsigned int hnperric        : 1;
    unsigned int roleexic        : 1;
    unsigned int bcerric         : 1;
    unsigned int vberric         : 1;
    unsigned int srpic           : 1;
    unsigned int vbustic         : 1;
    unsigned int idtic           : 1;
} avr32_usbc_usbstaclr_t;



typedef struct avr32_usbc_usbstaset_t {
    unsigned int                 :22;
    unsigned int vbusrqs         : 1;
    unsigned int ramacceris      : 1;
    unsigned int stois           : 1;
    unsigned int hnperris        : 1;
    unsigned int roleexis        : 1;
    unsigned int bcerris         : 1;
    unsigned int vberris         : 1;
    unsigned int srpis           : 1;
    unsigned int vbustis         : 1;
    unsigned int idtis           : 1;
} avr32_usbc_usbstaset_t;



typedef struct avr32_usbc_uatst1_t {
    unsigned int loadsofcnt      : 1;
    unsigned int sofcntmax       : 7;
    unsigned int loadcntb        : 1;
    unsigned int                 : 1;
    unsigned int counterb        : 6;
    unsigned int loadcnta        : 1;
    unsigned int countera        :15;
} avr32_usbc_uatst1_t;



typedef struct avr32_usbc_uatst2_t {
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
} avr32_usbc_uatst2_t;



typedef struct avr32_usbc_uvers_t {
    unsigned int                 :13;
    unsigned int metal_fix_num   : 3;
    unsigned int version_num     :16;
} avr32_usbc_uvers_t;



typedef struct avr32_usbc_ufeatures_t {
    unsigned int                 :23;
    unsigned int utmi_mode       : 1;
    unsigned int                 : 4;
    unsigned int ept_nbr_max     : 4;
} avr32_usbc_ufeatures_t;



typedef struct avr32_usbc_usbfsm_t {
    unsigned int                 :28;
    unsigned int drdstate        : 4;
} avr32_usbc_usbfsm_t;



typedef struct avr32_usbc_t {
  union {
          unsigned long                  udcon     ;//0x0000
          avr32_usbc_udcon_t             UDCON     ;
  };
  union {
    const unsigned long                  udint     ;//0x0004
    const avr32_usbc_udint_t             UDINT     ;
  };
  union {
          unsigned long                  udintclr  ;//0x0008
          avr32_usbc_udintclr_t          UDINTCLR  ;
  };
  union {
          unsigned long                  udintset  ;//0x000c
          avr32_usbc_udintset_t          UDINTSET  ;
  };
  union {
    const unsigned long                  udinte    ;//0x0010
    const avr32_usbc_udinte_t            UDINTE    ;
  };
  union {
          unsigned long                  udinteclr ;//0x0014
          avr32_usbc_udinteclr_t         UDINTECLR ;
  };
  union {
          unsigned long                  udinteset ;//0x0018
          avr32_usbc_udinteset_t         UDINTESET ;
  };
  union {
          unsigned long                  uerst     ;//0x001c
          avr32_usbc_uerst_t             UERST     ;
  };
  union {
    const unsigned long                  udfnum    ;//0x0020
    const avr32_usbc_udfnum_t            UDFNUM    ;
  };
          unsigned int                   :32       ;//0x0024
          unsigned int                   :32       ;//0x0028
          unsigned int                   :32       ;//0x002c
          unsigned int                   :32       ;//0x0030
          unsigned int                   :32       ;//0x0034
          unsigned int                   :32       ;//0x0038
          unsigned int                   :32       ;//0x003c
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
          avr32_usbc_uecfg0_t            UECFG0    ;
  };
  union {
          unsigned long                  uecfg1    ;//0x0104
          avr32_usbc_uecfg1_t            UECFG1    ;
  };
  union {
          unsigned long                  uecfg2    ;//0x0108
          avr32_usbc_uecfg2_t            UECFG2    ;
  };
  union {
          unsigned long                  uecfg3    ;//0x010c
          avr32_usbc_uecfg3_t            UECFG3    ;
  };
  union {
          unsigned long                  uecfg4    ;//0x0110
          avr32_usbc_uecfg4_t            UECFG4    ;
  };
  union {
          unsigned long                  uecfg5    ;//0x0114
          avr32_usbc_uecfg5_t            UECFG5    ;
  };
  union {
          unsigned long                  uecfg6    ;//0x0118
          avr32_usbc_uecfg6_t            UECFG6    ;
  };
  union {
          unsigned long                  uecfg7    ;//0x011c
          avr32_usbc_uecfg7_t            UECFG7    ;
  };
          unsigned int                   :32       ;//0x0120
          unsigned int                   :32       ;//0x0124
          unsigned int                   :32       ;//0x0128
          unsigned int                   :32       ;//0x012c
  union {
    const unsigned long                  uesta0    ;//0x0130
    const avr32_usbc_uesta0_t            UESTA0    ;
  };
  union {
    const unsigned long                  uesta1    ;//0x0134
    const avr32_usbc_uesta1_t            UESTA1    ;
  };
  union {
    const unsigned long                  uesta2    ;//0x0138
    const avr32_usbc_uesta2_t            UESTA2    ;
  };
  union {
    const unsigned long                  uesta3    ;//0x013c
    const avr32_usbc_uesta3_t            UESTA3    ;
  };
  union {
    const unsigned long                  uesta4    ;//0x0140
    const avr32_usbc_uesta4_t            UESTA4    ;
  };
  union {
    const unsigned long                  uesta5    ;//0x0144
    const avr32_usbc_uesta5_t            UESTA5    ;
  };
  union {
    const unsigned long                  uesta6    ;//0x0148
    const avr32_usbc_uesta6_t            UESTA6    ;
  };
  union {
    const unsigned long                  uesta7    ;//0x014c
    const avr32_usbc_uesta7_t            UESTA7    ;
  };
          unsigned int                   :32       ;//0x0150
          unsigned int                   :32       ;//0x0154
          unsigned int                   :32       ;//0x0158
          unsigned int                   :32       ;//0x015c
  union {
          unsigned long                  uesta0clr ;//0x0160
          avr32_usbc_uesta0clr_t         UESTA0CLR ;
  };
  union {
          unsigned long                  uesta1clr ;//0x0164
          avr32_usbc_uesta1clr_t         UESTA1CLR ;
  };
  union {
          unsigned long                  uesta2clr ;//0x0168
          avr32_usbc_uesta2clr_t         UESTA2CLR ;
  };
  union {
          unsigned long                  uesta3clr ;//0x016c
          avr32_usbc_uesta3clr_t         UESTA3CLR ;
  };
  union {
          unsigned long                  uesta4clr ;//0x0170
          avr32_usbc_uesta4clr_t         UESTA4CLR ;
  };
  union {
          unsigned long                  uesta5clr ;//0x0174
          avr32_usbc_uesta5clr_t         UESTA5CLR ;
  };
  union {
          unsigned long                  uesta6clr ;//0x0178
          avr32_usbc_uesta6clr_t         UESTA6CLR ;
  };
  union {
          unsigned long                  uesta7clr ;//0x017c
          avr32_usbc_uesta7clr_t         UESTA7CLR ;
  };
          unsigned int                   :32       ;//0x0180
          unsigned int                   :32       ;//0x0184
          unsigned int                   :32       ;//0x0188
          unsigned int                   :32       ;//0x018c
  union {
          unsigned long                  uesta0set ;//0x0190
          avr32_usbc_uesta0set_t         UESTA0SET ;
  };
  union {
          unsigned long                  uesta1set ;//0x0194
          avr32_usbc_uesta1set_t         UESTA1SET ;
  };
  union {
          unsigned long                  uesta2set ;//0x0198
          avr32_usbc_uesta2set_t         UESTA2SET ;
  };
  union {
          unsigned long                  uesta3set ;//0x019c
          avr32_usbc_uesta3set_t         UESTA3SET ;
  };
  union {
          unsigned long                  uesta4set ;//0x01a0
          avr32_usbc_uesta4set_t         UESTA4SET ;
  };
  union {
          unsigned long                  uesta5set ;//0x01a4
          avr32_usbc_uesta5set_t         UESTA5SET ;
  };
  union {
          unsigned long                  uesta6set ;//0x01a8
          avr32_usbc_uesta6set_t         UESTA6SET ;
  };
  union {
          unsigned long                  uesta7set ;//0x01ac
          avr32_usbc_uesta7set_t         UESTA7SET ;
  };
          unsigned int                   :32       ;//0x01b0
          unsigned int                   :32       ;//0x01b4
          unsigned int                   :32       ;//0x01b8
          unsigned int                   :32       ;//0x01bc
  union {
    const unsigned long                  uecon0    ;//0x01c0
    const avr32_usbc_uecon0_t            UECON0    ;
  };
  union {
    const unsigned long                  uecon1    ;//0x01c4
    const avr32_usbc_uecon1_t            UECON1    ;
  };
  union {
    const unsigned long                  uecon2    ;//0x01c8
    const avr32_usbc_uecon2_t            UECON2    ;
  };
  union {
    const unsigned long                  uecon3    ;//0x01cc
    const avr32_usbc_uecon3_t            UECON3    ;
  };
  union {
    const unsigned long                  uecon4    ;//0x01d0
    const avr32_usbc_uecon4_t            UECON4    ;
  };
  union {
    const unsigned long                  uecon5    ;//0x01d4
    const avr32_usbc_uecon5_t            UECON5    ;
  };
  union {
    const unsigned long                  uecon6    ;//0x01d8
    const avr32_usbc_uecon6_t            UECON6    ;
  };
  union {
    const unsigned long                  uecon7    ;//0x01dc
    const avr32_usbc_uecon7_t            UECON7    ;
  };
          unsigned int                   :32       ;//0x01e0
          unsigned int                   :32       ;//0x01e4
          unsigned int                   :32       ;//0x01e8
          unsigned int                   :32       ;//0x01ec
  union {
          unsigned long                  uecon0set ;//0x01f0
          avr32_usbc_uecon0set_t         UECON0SET ;
  };
  union {
          unsigned long                  uecon1set ;//0x01f4
          avr32_usbc_uecon1set_t         UECON1SET ;
  };
  union {
          unsigned long                  uecon2set ;//0x01f8
          avr32_usbc_uecon2set_t         UECON2SET ;
  };
  union {
          unsigned long                  uecon3set ;//0x01fc
          avr32_usbc_uecon3set_t         UECON3SET ;
  };
  union {
          unsigned long                  uecon4set ;//0x0200
          avr32_usbc_uecon4set_t         UECON4SET ;
  };
  union {
          unsigned long                  uecon5set ;//0x0204
          avr32_usbc_uecon5set_t         UECON5SET ;
  };
  union {
          unsigned long                  uecon6set ;//0x0208
          avr32_usbc_uecon6set_t         UECON6SET ;
  };
  union {
          unsigned long                  uecon7set ;//0x020c
          avr32_usbc_uecon7set_t         UECON7SET ;
  };
          unsigned int                   :32       ;//0x0210
          unsigned int                   :32       ;//0x0214
          unsigned int                   :32       ;//0x0218
          unsigned int                   :32       ;//0x021c
  union {
          unsigned long                  uecon0clr ;//0x0220
          avr32_usbc_uecon0clr_t         UECON0CLR ;
  };
  union {
          unsigned long                  uecon1clr ;//0x0224
          avr32_usbc_uecon1clr_t         UECON1CLR ;
  };
  union {
          unsigned long                  uecon2clr ;//0x0228
          avr32_usbc_uecon2clr_t         UECON2CLR ;
  };
  union {
          unsigned long                  uecon3clr ;//0x022c
          avr32_usbc_uecon3clr_t         UECON3CLR ;
  };
  union {
          unsigned long                  uecon4clr ;//0x0230
          avr32_usbc_uecon4clr_t         UECON4CLR ;
  };
  union {
          unsigned long                  uecon5clr ;//0x0234
          avr32_usbc_uecon5clr_t         UECON5CLR ;
  };
  union {
          unsigned long                  uecon6clr ;//0x0238
          avr32_usbc_uecon6clr_t         UECON6CLR ;
  };
  union {
          unsigned long                  uecon7clr ;//0x023c
          avr32_usbc_uecon7clr_t         UECON7CLR ;
  };
          unsigned int                   :32       ;//0x0240
          unsigned int                   :32       ;//0x0244
          unsigned int                   :32       ;//0x0248
          unsigned int                   :32       ;//0x024c
          unsigned int                   :32       ;//0x0250
          unsigned int                   :32       ;//0x0254
          unsigned int                   :32       ;//0x0258
          unsigned int                   :32       ;//0x025c
          unsigned int                   :32       ;//0x0260
          unsigned int                   :32       ;//0x0264
          unsigned int                   :32       ;//0x0268
          unsigned int                   :32       ;//0x026c
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
          unsigned int                   :32       ;//0x0310
          unsigned int                   :32       ;//0x0314
          unsigned int                   :32       ;//0x0318
          unsigned int                   :32       ;//0x031c
          unsigned int                   :32       ;//0x0320
          unsigned int                   :32       ;//0x0324
          unsigned int                   :32       ;//0x0328
          unsigned int                   :32       ;//0x032c
          unsigned int                   :32       ;//0x0330
          unsigned int                   :32       ;//0x0334
          unsigned int                   :32       ;//0x0338
          unsigned int                   :32       ;//0x033c
          unsigned int                   :32       ;//0x0340
          unsigned int                   :32       ;//0x0344
          unsigned int                   :32       ;//0x0348
          unsigned int                   :32       ;//0x034c
          unsigned int                   :32       ;//0x0350
          unsigned int                   :32       ;//0x0354
          unsigned int                   :32       ;//0x0358
          unsigned int                   :32       ;//0x035c
          unsigned int                   :32       ;//0x0360
          unsigned int                   :32       ;//0x0364
          unsigned int                   :32       ;//0x0368
          unsigned int                   :32       ;//0x036c
          unsigned int                   :32       ;//0x0370
          unsigned int                   :32       ;//0x0374
          unsigned int                   :32       ;//0x0378
          unsigned int                   :32       ;//0x037c
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
          avr32_usbc_uhcon_t             UHCON     ;
  };
  union {
    const unsigned long                  uhint     ;//0x0404
    const avr32_usbc_uhint_t             UHINT     ;
  };
  union {
          unsigned long                  uhintclr  ;//0x0408
          avr32_usbc_uhintclr_t          UHINTCLR  ;
  };
  union {
          unsigned long                  uhintset  ;//0x040c
          avr32_usbc_uhintset_t          UHINTSET  ;
  };
  union {
    const unsigned long                  uhinte    ;//0x0410
    const avr32_usbc_uhinte_t            UHINTE    ;
  };
  union {
          unsigned long                  uhinteclr ;//0x0414
          avr32_usbc_uhinteclr_t         UHINTECLR ;
  };
  union {
          unsigned long                  uhinteset ;//0x0418
          avr32_usbc_uhinteset_t         UHINTESET ;
  };
  union {
          unsigned long                  uprst     ;//0x041c
          avr32_usbc_uprst_t             UPRST     ;
  };
  union {
          unsigned long                  uhfnum    ;//0x0420
          avr32_usbc_uhfnum_t            UHFNUM    ;
  };
          unsigned int                   :32       ;//0x0424
          unsigned int                   :32       ;//0x0428
          unsigned int                   :32       ;//0x042c
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
          avr32_usbc_upcfg0_t            UPCFG0    ;
  };
  union {
          unsigned long                  upcfg1    ;//0x0504
          avr32_usbc_upcfg1_t            UPCFG1    ;
  };
  union {
          unsigned long                  upcfg2    ;//0x0508
          avr32_usbc_upcfg2_t            UPCFG2    ;
  };
  union {
          unsigned long                  upcfg3    ;//0x050c
          avr32_usbc_upcfg3_t            UPCFG3    ;
  };
  union {
          unsigned long                  upcfg4    ;//0x0510
          avr32_usbc_upcfg4_t            UPCFG4    ;
  };
  union {
          unsigned long                  upcfg5    ;//0x0514
          avr32_usbc_upcfg5_t            UPCFG5    ;
  };
  union {
          unsigned long                  upcfg6    ;//0x0518
          avr32_usbc_upcfg6_t            UPCFG6    ;
  };
  union {
          unsigned long                  upcfg7    ;//0x051c
          avr32_usbc_upcfg7_t            UPCFG7    ;
  };
          unsigned int                   :32       ;//0x0520
          unsigned int                   :32       ;//0x0524
          unsigned int                   :32       ;//0x0528
          unsigned int                   :32       ;//0x052c
  union {
    const unsigned long                  upsta0    ;//0x0530
    const avr32_usbc_upsta0_t            UPSTA0    ;
  };
  union {
    const unsigned long                  upsta1    ;//0x0534
    const avr32_usbc_upsta1_t            UPSTA1    ;
  };
  union {
    const unsigned long                  upsta2    ;//0x0538
    const avr32_usbc_upsta2_t            UPSTA2    ;
  };
  union {
    const unsigned long                  upsta3    ;//0x053c
    const avr32_usbc_upsta3_t            UPSTA3    ;
  };
  union {
    const unsigned long                  upsta4    ;//0x0540
    const avr32_usbc_upsta4_t            UPSTA4    ;
  };
  union {
    const unsigned long                  upsta5    ;//0x0544
    const avr32_usbc_upsta5_t            UPSTA5    ;
  };
  union {
    const unsigned long                  upsta6    ;//0x0548
    const avr32_usbc_upsta6_t            UPSTA6    ;
  };
  union {
    const unsigned long                  upsta7    ;//0x054c
    const avr32_usbc_upsta7_t            UPSTA7    ;
  };
          unsigned int                   :32       ;//0x0550
          unsigned int                   :32       ;//0x0554
          unsigned int                   :32       ;//0x0558
          unsigned int                   :32       ;//0x055c
  union {
          unsigned long                  upsta0clr ;//0x0560
          avr32_usbc_upsta0clr_t         UPSTA0CLR ;
  };
  union {
          unsigned long                  upsta1clr ;//0x0564
          avr32_usbc_upsta1clr_t         UPSTA1CLR ;
  };
  union {
          unsigned long                  upsta2clr ;//0x0568
          avr32_usbc_upsta2clr_t         UPSTA2CLR ;
  };
  union {
          unsigned long                  upsta3clr ;//0x056c
          avr32_usbc_upsta3clr_t         UPSTA3CLR ;
  };
  union {
          unsigned long                  upsta4clr ;//0x0570
          avr32_usbc_upsta4clr_t         UPSTA4CLR ;
  };
  union {
          unsigned long                  upsta5clr ;//0x0574
          avr32_usbc_upsta5clr_t         UPSTA5CLR ;
  };
  union {
          unsigned long                  upsta6clr ;//0x0578
          avr32_usbc_upsta6clr_t         UPSTA6CLR ;
  };
  union {
          unsigned long                  upsta7clr ;//0x057c
          avr32_usbc_upsta7clr_t         UPSTA7CLR ;
  };
          unsigned int                   :32       ;//0x0580
          unsigned int                   :32       ;//0x0584
          unsigned int                   :32       ;//0x0588
          unsigned int                   :32       ;//0x058c
  union {
          unsigned long                  upsta0set ;//0x0590
          avr32_usbc_upsta0set_t         UPSTA0SET ;
  };
  union {
          unsigned long                  upsta1set ;//0x0594
          avr32_usbc_upsta1set_t         UPSTA1SET ;
  };
  union {
          unsigned long                  upsta2set ;//0x0598
          avr32_usbc_upsta2set_t         UPSTA2SET ;
  };
  union {
          unsigned long                  upsta3set ;//0x059c
          avr32_usbc_upsta3set_t         UPSTA3SET ;
  };
  union {
          unsigned long                  upsta4set ;//0x05a0
          avr32_usbc_upsta4set_t         UPSTA4SET ;
  };
  union {
          unsigned long                  upsta5set ;//0x05a4
          avr32_usbc_upsta5set_t         UPSTA5SET ;
  };
  union {
          unsigned long                  upsta6set ;//0x05a8
          avr32_usbc_upsta6set_t         UPSTA6SET ;
  };
  union {
          unsigned long                  upsta7set ;//0x05ac
          avr32_usbc_upsta7set_t         UPSTA7SET ;
  };
          unsigned int                   :32       ;//0x05b0
          unsigned int                   :32       ;//0x05b4
          unsigned int                   :32       ;//0x05b8
          unsigned int                   :32       ;//0x05bc
  union {
    const unsigned long                  upcon0    ;//0x05c0
    const avr32_usbc_upcon0_t            UPCON0    ;
  };
  union {
    const unsigned long                  upcon1    ;//0x05c4
    const avr32_usbc_upcon1_t            UPCON1    ;
  };
  union {
    const unsigned long                  upcon2    ;//0x05c8
    const avr32_usbc_upcon2_t            UPCON2    ;
  };
  union {
    const unsigned long                  upcon3    ;//0x05cc
    const avr32_usbc_upcon3_t            UPCON3    ;
  };
  union {
    const unsigned long                  upcon4    ;//0x05d0
    const avr32_usbc_upcon4_t            UPCON4    ;
  };
  union {
    const unsigned long                  upcon5    ;//0x05d4
    const avr32_usbc_upcon5_t            UPCON5    ;
  };
  union {
    const unsigned long                  upcon6    ;//0x05d8
    const avr32_usbc_upcon6_t            UPCON6    ;
  };
  union {
    const unsigned long                  upcon7    ;//0x05dc
    const avr32_usbc_upcon7_t            UPCON7    ;
  };
          unsigned int                   :32       ;//0x05e0
          unsigned int                   :32       ;//0x05e4
          unsigned int                   :32       ;//0x05e8
          unsigned int                   :32       ;//0x05ec
  union {
          unsigned long                  upcon0set ;//0x05f0
          avr32_usbc_upcon0set_t         UPCON0SET ;
  };
  union {
          unsigned long                  upcon1set ;//0x05f4
          avr32_usbc_upcon1set_t         UPCON1SET ;
  };
  union {
          unsigned long                  upcon2set ;//0x05f8
          avr32_usbc_upcon2set_t         UPCON2SET ;
  };
  union {
          unsigned long                  upcon3set ;//0x05fc
          avr32_usbc_upcon3set_t         UPCON3SET ;
  };
  union {
          unsigned long                  upcon4set ;//0x0600
          avr32_usbc_upcon4set_t         UPCON4SET ;
  };
  union {
          unsigned long                  upcon5set ;//0x0604
          avr32_usbc_upcon5set_t         UPCON5SET ;
  };
  union {
          unsigned long                  upcon6set ;//0x0608
          avr32_usbc_upcon6set_t         UPCON6SET ;
  };
  union {
          unsigned long                  upcon7set ;//0x060c
          avr32_usbc_upcon7set_t         UPCON7SET ;
  };
          unsigned int                   :32       ;//0x0610
          unsigned int                   :32       ;//0x0614
          unsigned int                   :32       ;//0x0618
          unsigned int                   :32       ;//0x061c
  union {
          unsigned long                  upcon0clr ;//0x0620
          avr32_usbc_upcon0clr_t         UPCON0CLR ;
  };
  union {
          unsigned long                  upcon1clr ;//0x0624
          avr32_usbc_upcon1clr_t         UPCON1CLR ;
  };
  union {
          unsigned long                  upcon2clr ;//0x0628
          avr32_usbc_upcon2clr_t         UPCON2CLR ;
  };
  union {
          unsigned long                  upcon3clr ;//0x062c
          avr32_usbc_upcon3clr_t         UPCON3CLR ;
  };
  union {
          unsigned long                  upcon4clr ;//0x0630
          avr32_usbc_upcon4clr_t         UPCON4CLR ;
  };
  union {
          unsigned long                  upcon5clr ;//0x0634
          avr32_usbc_upcon5clr_t         UPCON5CLR ;
  };
  union {
          unsigned long                  upcon6clr ;//0x0638
          avr32_usbc_upcon6clr_t         UPCON6CLR ;
  };
  union {
          unsigned long                  upcon7clr ;//0x063c
          avr32_usbc_upcon7clr_t         UPCON7CLR ;
  };
          unsigned int                   :32       ;//0x0640
          unsigned int                   :32       ;//0x0644
          unsigned int                   :32       ;//0x0648
          unsigned int                   :32       ;//0x064c
  union {
          unsigned long                  upinrq0   ;//0x0650
          avr32_usbc_upinrq0_t           UPINRQ0   ;
  };
  union {
          unsigned long                  upinrq1   ;//0x0654
          avr32_usbc_upinrq1_t           UPINRQ1   ;
  };
  union {
          unsigned long                  upinrq2   ;//0x0658
          avr32_usbc_upinrq2_t           UPINRQ2   ;
  };
  union {
          unsigned long                  upinrq3   ;//0x065c
          avr32_usbc_upinrq3_t           UPINRQ3   ;
  };
  union {
          unsigned long                  upinrq4   ;//0x0660
          avr32_usbc_upinrq4_t           UPINRQ4   ;
  };
  union {
          unsigned long                  upinrq5   ;//0x0664
          avr32_usbc_upinrq5_t           UPINRQ5   ;
  };
  union {
          unsigned long                  upinrq6   ;//0x0668
          avr32_usbc_upinrq6_t           UPINRQ6   ;
  };
  union {
          unsigned long                  upinrq7   ;//0x066c
          avr32_usbc_upinrq7_t           UPINRQ7   ;
  };
          unsigned int                   :32       ;//0x0670
          unsigned int                   :32       ;//0x0674
          unsigned int                   :32       ;//0x0678
          unsigned int                   :32       ;//0x067c
          unsigned int                   :32       ;//0x0680
          unsigned int                   :32       ;//0x0684
          unsigned int                   :32       ;//0x0688
          unsigned int                   :32       ;//0x068c
          unsigned int                   :32       ;//0x0690
          unsigned int                   :32       ;//0x0694
          unsigned int                   :32       ;//0x0698
          unsigned int                   :32       ;//0x069c
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
          unsigned int                   :32       ;//0x0710
          unsigned int                   :32       ;//0x0714
          unsigned int                   :32       ;//0x0718
          unsigned int                   :32       ;//0x071c
          unsigned int                   :32       ;//0x0720
          unsigned int                   :32       ;//0x0724
          unsigned int                   :32       ;//0x0728
          unsigned int                   :32       ;//0x072c
          unsigned int                   :32       ;//0x0730
          unsigned int                   :32       ;//0x0734
          unsigned int                   :32       ;//0x0738
          unsigned int                   :32       ;//0x073c
          unsigned int                   :32       ;//0x0740
          unsigned int                   :32       ;//0x0744
          unsigned int                   :32       ;//0x0748
          unsigned int                   :32       ;//0x074c
          unsigned int                   :32       ;//0x0750
          unsigned int                   :32       ;//0x0754
          unsigned int                   :32       ;//0x0758
          unsigned int                   :32       ;//0x075c
          unsigned int                   :32       ;//0x0760
          unsigned int                   :32       ;//0x0764
          unsigned int                   :32       ;//0x0768
          unsigned int                   :32       ;//0x076c
          unsigned int                   :32       ;//0x0770
          unsigned int                   :32       ;//0x0774
          unsigned int                   :32       ;//0x0778
          unsigned int                   :32       ;//0x077c
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
          avr32_usbc_usbcon_t            USBCON    ;
  };
  union {
    const unsigned long                  usbsta    ;//0x0804
    const avr32_usbc_usbsta_t            USBSTA    ;
  };
  union {
          unsigned long                  usbstaclr ;//0x0808
          avr32_usbc_usbstaclr_t         USBSTACLR ;
  };
  union {
          unsigned long                  usbstaset ;//0x080c
          avr32_usbc_usbstaset_t         USBSTASET ;
  };
  union {
          unsigned long                  uatst1    ;//0x0810
          avr32_usbc_uatst1_t            UATST1    ;
  };
  union {
          unsigned long                  uatst2    ;//0x0814
          avr32_usbc_uatst2_t            UATST2    ;
  };
  union {
    const unsigned long                  uvers     ;//0x0818
    const avr32_usbc_uvers_t             UVERS     ;
  };
  union {
    const unsigned long                  ufeatures ;//0x081c
    const avr32_usbc_ufeatures_t         UFEATURES ;
  };
    const unsigned long                  uaddrsize ;//0x0820
    const unsigned long                  uname1    ;//0x0824
    const unsigned long                  uname2    ;//0x0828
  union {
    const unsigned long                  usbfsm    ;//0x082c
    const avr32_usbc_usbfsm_t            USBFSM    ;
  };
          unsigned long                  udesc     ;//0x0830
} avr32_usbc_t;



/*#ifdef __AVR32_ABI_COMPILER__*/
#endif

/*#ifdef AVR32_USBC_210_H_INCLUDED*/
#endif

