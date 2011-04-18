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
#ifndef AVR32_ADCIFA_110_H_INCLUDED
#define AVR32_ADCIFA_110_H_INCLUDED

#define AVR32_ADCIFA_H_VERSION 110

#include "avr32/abi.h"


/*
 Note to user:

 The following defines are always generated:
 - Register offset: AVR32_ADCIFA_<register>
 - Bitfield mask:   AVR32_ADCIFA_<register>_<bitfield>
 - Bitfield offset: AVR32_ADCIFA_<register>_<bitfield>_OFFSET
 - Bitfield size:   AVR32_ADCIFA_<register>_<bitfield>_SIZE
 - Bitfield values: AVR32_ADCIFA_<register>_<bitfield>_<value name>

 The following defines are generated if they don't cause ambiguities,
 i.e. the name is unique, or all values with that name are the same.
 - Bitfield mask:   AVR32_ADCIFA_<bitfield>
 - Bitfield offset: AVR32_ADCIFA_<bitfield>_OFFSET
 - Bitfield size:   AVR32_ADCIFA_<bitfield>_SIZE
 - Bitfield values: AVR32_ADCIFA_<bitfield>_<value name>
 - Bitfield values: AVR32_ADCIFA_<value name>

 All defines are sorted alphabetically.
*/


#define AVR32_ADCIFA_ADCCAL                                   0x00000068
#define AVR32_ADCIFA_ADCCAL_GCAL                                       0
#define AVR32_ADCIFA_ADCCAL_GCAL_MASK                         0x00007fff
#define AVR32_ADCIFA_ADCCAL_GCAL_OFFSET                                0
#define AVR32_ADCIFA_ADCCAL_GCAL_SIZE                                 15
#define AVR32_ADCIFA_ADCCAL_MASK                              0x3f007fff
#define AVR32_ADCIFA_ADCCAL_OCAL                                      24
#define AVR32_ADCIFA_ADCCAL_OCAL_MASK                         0x3f000000
#define AVR32_ADCIFA_ADCCAL_OCAL_OFFSET                               24
#define AVR32_ADCIFA_ADCCAL_OCAL_SIZE                                  6
#define AVR32_ADCIFA_ADCCAL_RESETVALUE                        0x00000000
#define AVR32_ADCIFA_ADCEN                                             0
#define AVR32_ADCIFA_ADCEN_MASK                               0x00000001
#define AVR32_ADCIFA_ADCEN_OFFSET                                      0
#define AVR32_ADCIFA_ADCEN_SIZE                                        1
#define AVR32_ADCIFA_AWKE                                              8
#define AVR32_ADCIFA_AWKE_MASK                                0x00000100
#define AVR32_ADCIFA_AWKE_OFFSET                                       8
#define AVR32_ADCIFA_AWKE_SIZE                                         1
#define AVR32_ADCIFA_AWUP                                             31
#define AVR32_ADCIFA_AWUP_MASK                                0x80000000
#define AVR32_ADCIFA_AWUP_OFFSET                                      31
#define AVR32_ADCIFA_AWUP_SIZE                                         1
#define AVR32_ADCIFA_CFG                                      0x00000004
#define AVR32_ADCIFA_CFG_ADCEN                                         0
#define AVR32_ADCIFA_CFG_ADCEN_MASK                           0x00000001
#define AVR32_ADCIFA_CFG_ADCEN_OFFSET                                  0
#define AVR32_ADCIFA_CFG_ADCEN_SIZE                                    1
#define AVR32_ADCIFA_CFG_AWKE                                          8
#define AVR32_ADCIFA_CFG_AWKE_MASK                            0x00000100
#define AVR32_ADCIFA_CFG_AWKE_OFFSET                                   8
#define AVR32_ADCIFA_CFG_AWKE_SIZE                                     1
#define AVR32_ADCIFA_CFG_EXREF                                         9
#define AVR32_ADCIFA_CFG_EXREF_MASK                           0x00000200
#define AVR32_ADCIFA_CFG_EXREF_OFFSET                                  9
#define AVR32_ADCIFA_CFG_EXREF_SIZE                                    1
#define AVR32_ADCIFA_CFG_FRM                                           4
#define AVR32_ADCIFA_CFG_FRM_MASK                             0x00000010
#define AVR32_ADCIFA_CFG_FRM_OFFSET                                    4
#define AVR32_ADCIFA_CFG_FRM_SIZE                                      1
#define AVR32_ADCIFA_CFG_MASK                                 0x003f07ff
#define AVR32_ADCIFA_CFG_MUXSET                                       10
#define AVR32_ADCIFA_CFG_MUXSET_MASK                          0x00000400
#define AVR32_ADCIFA_CFG_MUXSET_OFFSET                                10
#define AVR32_ADCIFA_CFG_MUXSET_SIZE                                   1
#define AVR32_ADCIFA_CFG_RESETVALUE                           0x00000000
#define AVR32_ADCIFA_CFG_RS                                            5
#define AVR32_ADCIFA_CFG_RS_MASK                              0x00000060
#define AVR32_ADCIFA_CFG_RS_OFFSET                                     5
#define AVR32_ADCIFA_CFG_RS_SIZE                                       2
#define AVR32_ADCIFA_CFG_SHD                                           7
#define AVR32_ADCIFA_CFG_SHD_MASK                             0x00000080
#define AVR32_ADCIFA_CFG_SHD_OFFSET                                    7
#define AVR32_ADCIFA_CFG_SHD_SIZE                                      1
#define AVR32_ADCIFA_CFG_SLEEP                                         2
#define AVR32_ADCIFA_CFG_SLEEP_MASK                           0x00000004
#define AVR32_ADCIFA_CFG_SLEEP_OFFSET                                  2
#define AVR32_ADCIFA_CFG_SLEEP_SIZE                                    1
#define AVR32_ADCIFA_CFG_SSMQ                                          3
#define AVR32_ADCIFA_CFG_SSMQ_MASK                            0x00000008
#define AVR32_ADCIFA_CFG_SSMQ_OFFSET                                   3
#define AVR32_ADCIFA_CFG_SSMQ_SIZE                                     1
#define AVR32_ADCIFA_CFG_SUT                                          16
#define AVR32_ADCIFA_CFG_SUT_MASK                             0x003f0000
#define AVR32_ADCIFA_CFG_SUT_OFFSET                                   16
#define AVR32_ADCIFA_CFG_SUT_SIZE                                      6
#define AVR32_ADCIFA_CFG_TSEN                                          1
#define AVR32_ADCIFA_CFG_TSEN_MASK                            0x00000002
#define AVR32_ADCIFA_CFG_TSEN_OFFSET                                   1
#define AVR32_ADCIFA_CFG_TSEN_SIZE                                     1
#define AVR32_ADCIFA_CKDIV                                    0x00000044
#define AVR32_ADCIFA_CKDIV_CNT                                         0
#define AVR32_ADCIFA_CKDIV_CNT_MASK                           0x000001ff
#define AVR32_ADCIFA_CKDIV_CNT_OFFSET                                  0
#define AVR32_ADCIFA_CKDIV_CNT_SIZE                                    9
#define AVR32_ADCIFA_CKDIV_MASK                               0x000001ff
#define AVR32_ADCIFA_CKDIV_RESETVALUE                         0x00000000
#define AVR32_ADCIFA_CNT                                               0
#define AVR32_ADCIFA_CNT_MASK                                 0x000001ff
#define AVR32_ADCIFA_CNT_OFFSET                                        0
#define AVR32_ADCIFA_CNT_SIZE                                          9
#define AVR32_ADCIFA_CNV0                                              0
#define AVR32_ADCIFA_CNV0_MASK                                0x0000000f
#define AVR32_ADCIFA_CNV0_OFFSET                                       0
#define AVR32_ADCIFA_CNV0_SIZE                                         4
#define AVR32_ADCIFA_CNV1                                              8
#define AVR32_ADCIFA_CNV1_MASK                                0x00000f00
#define AVR32_ADCIFA_CNV1_OFFSET                                       8
#define AVR32_ADCIFA_CNV1_SIZE                                         4
#define AVR32_ADCIFA_CNV2                                             16
#define AVR32_ADCIFA_CNV2_MASK                                0x000f0000
#define AVR32_ADCIFA_CNV2_OFFSET                                      16
#define AVR32_ADCIFA_CNV2_SIZE                                         4
#define AVR32_ADCIFA_CNV3                                             24
#define AVR32_ADCIFA_CNV3_MASK                                0x0f000000
#define AVR32_ADCIFA_CNV3_OFFSET                                      24
#define AVR32_ADCIFA_CNV3_SIZE                                         4
#define AVR32_ADCIFA_CNV4                                              0
#define AVR32_ADCIFA_CNV4_MASK                                0x0000000f
#define AVR32_ADCIFA_CNV4_OFFSET                                       0
#define AVR32_ADCIFA_CNV4_SIZE                                         4
#define AVR32_ADCIFA_CNV5                                              8
#define AVR32_ADCIFA_CNV5_MASK                                0x00000f00
#define AVR32_ADCIFA_CNV5_OFFSET                                       8
#define AVR32_ADCIFA_CNV5_SIZE                                         4
#define AVR32_ADCIFA_CNV6                                             16
#define AVR32_ADCIFA_CNV6_MASK                                0x000f0000
#define AVR32_ADCIFA_CNV6_OFFSET                                      16
#define AVR32_ADCIFA_CNV6_SIZE                                         4
#define AVR32_ADCIFA_CNV7                                             24
#define AVR32_ADCIFA_CNV7_MASK                                0x0f000000
#define AVR32_ADCIFA_CNV7_OFFSET                                      24
#define AVR32_ADCIFA_CNV7_SIZE                                         4
#define AVR32_ADCIFA_CNVNB                                            16
#define AVR32_ADCIFA_CNVNB_MASK                               0x000f0000
#define AVR32_ADCIFA_CNVNB_OFFSET                                     16
#define AVR32_ADCIFA_CNVNB_SIZE                                        4
#define AVR32_ADCIFA_CR                                       0x00000000
#define AVR32_ADCIFA_CR_MASK                                  0x0000000f
#define AVR32_ADCIFA_CR_RESETVALUE                            0x00000000
#define AVR32_ADCIFA_CR_SOC0                                           0
#define AVR32_ADCIFA_CR_SOC0_MASK                             0x00000001
#define AVR32_ADCIFA_CR_SOC0_OFFSET                                    0
#define AVR32_ADCIFA_CR_SOC0_SIZE                                      1
#define AVR32_ADCIFA_CR_SOC1                                           1
#define AVR32_ADCIFA_CR_SOC1_MASK                             0x00000002
#define AVR32_ADCIFA_CR_SOC1_OFFSET                                    1
#define AVR32_ADCIFA_CR_SOC1_SIZE                                      1
#define AVR32_ADCIFA_CR_TSTART                                         3
#define AVR32_ADCIFA_CR_TSTART_MASK                           0x00000008
#define AVR32_ADCIFA_CR_TSTART_OFFSET                                  3
#define AVR32_ADCIFA_CR_TSTART_SIZE                                    1
#define AVR32_ADCIFA_CR_TSTOP                                          2
#define AVR32_ADCIFA_CR_TSTOP_MASK                            0x00000004
#define AVR32_ADCIFA_CR_TSTOP_OFFSET                                   2
#define AVR32_ADCIFA_CR_TSTOP_SIZE                                     1
#define AVR32_ADCIFA_EXREF                                             9
#define AVR32_ADCIFA_EXREF_MASK                               0x00000200
#define AVR32_ADCIFA_EXREF_OFFSET                                      9
#define AVR32_ADCIFA_EXREF_SIZE                                        1
#define AVR32_ADCIFA_FRM                                               4
#define AVR32_ADCIFA_FRM_MASK                                 0x00000010
#define AVR32_ADCIFA_FRM_OFFSET                                        4
#define AVR32_ADCIFA_FRM_SIZE                                          1
#define AVR32_ADCIFA_GAIN0                                             0
#define AVR32_ADCIFA_GAIN0_MASK                               0x000003ff
#define AVR32_ADCIFA_GAIN0_OFFSET                                      0
#define AVR32_ADCIFA_GAIN0_SIZE                                       10
#define AVR32_ADCIFA_GAIN1                                            16
#define AVR32_ADCIFA_GAIN1_MASK                               0x03ff0000
#define AVR32_ADCIFA_GAIN1_OFFSET                                     16
#define AVR32_ADCIFA_GAIN1_SIZE                                       10
#define AVR32_ADCIFA_GCAL                                              0
#define AVR32_ADCIFA_GCAL_MASK                                0x00007fff
#define AVR32_ADCIFA_GCAL_OFFSET                                       0
#define AVR32_ADCIFA_GCAL_SIZE                                        15
#define AVR32_ADCIFA_GCNV0                                             0
#define AVR32_ADCIFA_GCNV0_MASK                               0x00000007
#define AVR32_ADCIFA_GCNV0_OFFSET                                      0
#define AVR32_ADCIFA_GCNV0_SIZE                                        3
#define AVR32_ADCIFA_GCNV1                                             4
#define AVR32_ADCIFA_GCNV1_MASK                               0x00000070
#define AVR32_ADCIFA_GCNV1_OFFSET                                      4
#define AVR32_ADCIFA_GCNV1_SIZE                                        3
#define AVR32_ADCIFA_GCNV2                                             8
#define AVR32_ADCIFA_GCNV2_MASK                               0x00000700
#define AVR32_ADCIFA_GCNV2_OFFSET                                      8
#define AVR32_ADCIFA_GCNV2_SIZE                                        3
#define AVR32_ADCIFA_GCNV3                                            12
#define AVR32_ADCIFA_GCNV3_MASK                               0x00007000
#define AVR32_ADCIFA_GCNV3_OFFSET                                     12
#define AVR32_ADCIFA_GCNV3_SIZE                                        3
#define AVR32_ADCIFA_GCNV4                                            16
#define AVR32_ADCIFA_GCNV4_MASK                               0x00070000
#define AVR32_ADCIFA_GCNV4_OFFSET                                     16
#define AVR32_ADCIFA_GCNV4_SIZE                                        3
#define AVR32_ADCIFA_GCNV5                                            20
#define AVR32_ADCIFA_GCNV5_MASK                               0x00700000
#define AVR32_ADCIFA_GCNV5_OFFSET                                     20
#define AVR32_ADCIFA_GCNV5_SIZE                                        3
#define AVR32_ADCIFA_GCNV6                                            24
#define AVR32_ADCIFA_GCNV6_MASK                               0x07000000
#define AVR32_ADCIFA_GCNV6_OFFSET                                     24
#define AVR32_ADCIFA_GCNV6_SIZE                                        3
#define AVR32_ADCIFA_GCNV7                                            28
#define AVR32_ADCIFA_GCNV7_MASK                               0x70000000
#define AVR32_ADCIFA_GCNV7_OFFSET                                     28
#define AVR32_ADCIFA_GCNV7_SIZE                                        3
#define AVR32_ADCIFA_HT                                               12
#define AVR32_ADCIFA_HT_MASK                                  0x00fff000
#define AVR32_ADCIFA_HT_OFFSET                                        12
#define AVR32_ADCIFA_HT_SIZE                                          12
#define AVR32_ADCIFA_HWLA                                              1
#define AVR32_ADCIFA_HWLA_MASK                                0x00000002
#define AVR32_ADCIFA_HWLA_OFFSET                                       1
#define AVR32_ADCIFA_HWLA_SIZE                                         1
#define AVR32_ADCIFA_IDR                                      0x00000074
#define AVR32_ADCIFA_IDR_AWUP                                         31
#define AVR32_ADCIFA_IDR_AWUP_MASK                            0x80000000
#define AVR32_ADCIFA_IDR_AWUP_OFFSET                                  31
#define AVR32_ADCIFA_IDR_AWUP_SIZE                                     1
#define AVR32_ADCIFA_IDR_LOVR0                                         3
#define AVR32_ADCIFA_IDR_LOVR0_MASK                           0x00000008
#define AVR32_ADCIFA_IDR_LOVR0_OFFSET                                  3
#define AVR32_ADCIFA_IDR_LOVR0_SIZE                                    1
#define AVR32_ADCIFA_IDR_LOVR1                                         7
#define AVR32_ADCIFA_IDR_LOVR1_MASK                           0x00000080
#define AVR32_ADCIFA_IDR_LOVR1_OFFSET                                  7
#define AVR32_ADCIFA_IDR_LOVR1_SIZE                                    1
#define AVR32_ADCIFA_IDR_MASK                                 0x80007fff
#define AVR32_ADCIFA_IDR_MSOC0                                        12
#define AVR32_ADCIFA_IDR_MSOC0_MASK                           0x00001000
#define AVR32_ADCIFA_IDR_MSOC0_OFFSET                                 12
#define AVR32_ADCIFA_IDR_MSOC0_SIZE                                    1
#define AVR32_ADCIFA_IDR_MSOC1                                        13
#define AVR32_ADCIFA_IDR_MSOC1_MASK                           0x00002000
#define AVR32_ADCIFA_IDR_MSOC1_OFFSET                                 13
#define AVR32_ADCIFA_IDR_MSOC1_SIZE                                    1
#define AVR32_ADCIFA_IDR_OVR0                                          2
#define AVR32_ADCIFA_IDR_OVR0_MASK                            0x00000004
#define AVR32_ADCIFA_IDR_OVR0_OFFSET                                   2
#define AVR32_ADCIFA_IDR_OVR0_SIZE                                     1
#define AVR32_ADCIFA_IDR_OVR1                                          6
#define AVR32_ADCIFA_IDR_OVR1_MASK                            0x00000040
#define AVR32_ADCIFA_IDR_OVR1_OFFSET                                   6
#define AVR32_ADCIFA_IDR_OVR1_SIZE                                     1
#define AVR32_ADCIFA_IDR_PCNT                                          9
#define AVR32_ADCIFA_IDR_PCNT_MASK                            0x00000200
#define AVR32_ADCIFA_IDR_PCNT_OFFSET                                   9
#define AVR32_ADCIFA_IDR_PCNT_SIZE                                     1
#define AVR32_ADCIFA_IDR_PLOSS                                         8
#define AVR32_ADCIFA_IDR_PLOSS_MASK                           0x00000100
#define AVR32_ADCIFA_IDR_PLOSS_OFFSET                                  8
#define AVR32_ADCIFA_IDR_PLOSS_SIZE                                    1
#define AVR32_ADCIFA_IDR_RESETVALUE                           0x00000000
#define AVR32_ADCIFA_IDR_SEOC0                                         1
#define AVR32_ADCIFA_IDR_SEOC0_MASK                           0x00000002
#define AVR32_ADCIFA_IDR_SEOC0_OFFSET                                  1
#define AVR32_ADCIFA_IDR_SEOC0_SIZE                                    1
#define AVR32_ADCIFA_IDR_SEOC1                                         5
#define AVR32_ADCIFA_IDR_SEOC1_MASK                           0x00000020
#define AVR32_ADCIFA_IDR_SEOC1_OFFSET                                  5
#define AVR32_ADCIFA_IDR_SEOC1_SIZE                                    1
#define AVR32_ADCIFA_IDR_SEOS0                                         0
#define AVR32_ADCIFA_IDR_SEOS0_MASK                           0x00000001
#define AVR32_ADCIFA_IDR_SEOS0_OFFSET                                  0
#define AVR32_ADCIFA_IDR_SEOS0_SIZE                                    1
#define AVR32_ADCIFA_IDR_SEOS1                                         4
#define AVR32_ADCIFA_IDR_SEOS1_MASK                           0x00000010
#define AVR32_ADCIFA_IDR_SEOS1_OFFSET                                  4
#define AVR32_ADCIFA_IDR_SEOS1_SIZE                                    1
#define AVR32_ADCIFA_IDR_SUTD                                         14
#define AVR32_ADCIFA_IDR_SUTD_MASK                            0x00004000
#define AVR32_ADCIFA_IDR_SUTD_OFFSET                                  14
#define AVR32_ADCIFA_IDR_SUTD_SIZE                                     1
#define AVR32_ADCIFA_IDR_WM0                                          10
#define AVR32_ADCIFA_IDR_WM0_MASK                             0x00000400
#define AVR32_ADCIFA_IDR_WM0_OFFSET                                   10
#define AVR32_ADCIFA_IDR_WM0_SIZE                                      1
#define AVR32_ADCIFA_IDR_WM1                                          11
#define AVR32_ADCIFA_IDR_WM1_MASK                             0x00000800
#define AVR32_ADCIFA_IDR_WM1_OFFSET                                   11
#define AVR32_ADCIFA_IDR_WM1_SIZE                                      1
#define AVR32_ADCIFA_IER                                      0x00000070
#define AVR32_ADCIFA_IER_AWUP                                         31
#define AVR32_ADCIFA_IER_AWUP_MASK                            0x80000000
#define AVR32_ADCIFA_IER_AWUP_OFFSET                                  31
#define AVR32_ADCIFA_IER_AWUP_SIZE                                     1
#define AVR32_ADCIFA_IER_LOVR0                                         3
#define AVR32_ADCIFA_IER_LOVR0_MASK                           0x00000008
#define AVR32_ADCIFA_IER_LOVR0_OFFSET                                  3
#define AVR32_ADCIFA_IER_LOVR0_SIZE                                    1
#define AVR32_ADCIFA_IER_LOVR1                                         7
#define AVR32_ADCIFA_IER_LOVR1_MASK                           0x00000080
#define AVR32_ADCIFA_IER_LOVR1_OFFSET                                  7
#define AVR32_ADCIFA_IER_LOVR1_SIZE                                    1
#define AVR32_ADCIFA_IER_MASK                                 0x80007fff
#define AVR32_ADCIFA_IER_MSOC0                                        12
#define AVR32_ADCIFA_IER_MSOC0_MASK                           0x00001000
#define AVR32_ADCIFA_IER_MSOC0_OFFSET                                 12
#define AVR32_ADCIFA_IER_MSOC0_SIZE                                    1
#define AVR32_ADCIFA_IER_MSOC1                                        13
#define AVR32_ADCIFA_IER_MSOC1_MASK                           0x00002000
#define AVR32_ADCIFA_IER_MSOC1_OFFSET                                 13
#define AVR32_ADCIFA_IER_MSOC1_SIZE                                    1
#define AVR32_ADCIFA_IER_OVR0                                          2
#define AVR32_ADCIFA_IER_OVR0_MASK                            0x00000004
#define AVR32_ADCIFA_IER_OVR0_OFFSET                                   2
#define AVR32_ADCIFA_IER_OVR0_SIZE                                     1
#define AVR32_ADCIFA_IER_OVR1                                          6
#define AVR32_ADCIFA_IER_OVR1_MASK                            0x00000040
#define AVR32_ADCIFA_IER_OVR1_OFFSET                                   6
#define AVR32_ADCIFA_IER_OVR1_SIZE                                     1
#define AVR32_ADCIFA_IER_PCNT                                          9
#define AVR32_ADCIFA_IER_PCNT_MASK                            0x00000200
#define AVR32_ADCIFA_IER_PCNT_OFFSET                                   9
#define AVR32_ADCIFA_IER_PCNT_SIZE                                     1
#define AVR32_ADCIFA_IER_PLOSS                                         8
#define AVR32_ADCIFA_IER_PLOSS_MASK                           0x00000100
#define AVR32_ADCIFA_IER_PLOSS_OFFSET                                  8
#define AVR32_ADCIFA_IER_PLOSS_SIZE                                    1
#define AVR32_ADCIFA_IER_RESETVALUE                           0x00000000
#define AVR32_ADCIFA_IER_SEOC0                                         1
#define AVR32_ADCIFA_IER_SEOC0_MASK                           0x00000002
#define AVR32_ADCIFA_IER_SEOC0_OFFSET                                  1
#define AVR32_ADCIFA_IER_SEOC0_SIZE                                    1
#define AVR32_ADCIFA_IER_SEOC1                                         5
#define AVR32_ADCIFA_IER_SEOC1_MASK                           0x00000020
#define AVR32_ADCIFA_IER_SEOC1_OFFSET                                  5
#define AVR32_ADCIFA_IER_SEOC1_SIZE                                    1
#define AVR32_ADCIFA_IER_SEOS0                                         0
#define AVR32_ADCIFA_IER_SEOS0_MASK                           0x00000001
#define AVR32_ADCIFA_IER_SEOS0_OFFSET                                  0
#define AVR32_ADCIFA_IER_SEOS0_SIZE                                    1
#define AVR32_ADCIFA_IER_SEOS1                                         4
#define AVR32_ADCIFA_IER_SEOS1_MASK                           0x00000010
#define AVR32_ADCIFA_IER_SEOS1_OFFSET                                  4
#define AVR32_ADCIFA_IER_SEOS1_SIZE                                    1
#define AVR32_ADCIFA_IER_SUTD                                         14
#define AVR32_ADCIFA_IER_SUTD_MASK                            0x00004000
#define AVR32_ADCIFA_IER_SUTD_OFFSET                                  14
#define AVR32_ADCIFA_IER_SUTD_SIZE                                     1
#define AVR32_ADCIFA_IER_WM0                                          10
#define AVR32_ADCIFA_IER_WM0_MASK                             0x00000400
#define AVR32_ADCIFA_IER_WM0_OFFSET                                   10
#define AVR32_ADCIFA_IER_WM0_SIZE                                      1
#define AVR32_ADCIFA_IER_WM1                                          11
#define AVR32_ADCIFA_IER_WM1_MASK                             0x00000800
#define AVR32_ADCIFA_IER_WM1_OFFSET                                   11
#define AVR32_ADCIFA_IER_WM1_SIZE                                      1
#define AVR32_ADCIFA_IMR                                      0x00000078
#define AVR32_ADCIFA_IMR_AWUP                                         31
#define AVR32_ADCIFA_IMR_AWUP_MASK                            0x80000000
#define AVR32_ADCIFA_IMR_AWUP_OFFSET                                  31
#define AVR32_ADCIFA_IMR_AWUP_SIZE                                     1
#define AVR32_ADCIFA_IMR_LOVR0                                         3
#define AVR32_ADCIFA_IMR_LOVR0_MASK                           0x00000008
#define AVR32_ADCIFA_IMR_LOVR0_OFFSET                                  3
#define AVR32_ADCIFA_IMR_LOVR0_SIZE                                    1
#define AVR32_ADCIFA_IMR_LOVR1                                         7
#define AVR32_ADCIFA_IMR_LOVR1_MASK                           0x00000080
#define AVR32_ADCIFA_IMR_LOVR1_OFFSET                                  7
#define AVR32_ADCIFA_IMR_LOVR1_SIZE                                    1
#define AVR32_ADCIFA_IMR_MASK                                 0x80007fff
#define AVR32_ADCIFA_IMR_MSOC0                                        12
#define AVR32_ADCIFA_IMR_MSOC0_MASK                           0x00001000
#define AVR32_ADCIFA_IMR_MSOC0_OFFSET                                 12
#define AVR32_ADCIFA_IMR_MSOC0_SIZE                                    1
#define AVR32_ADCIFA_IMR_MSOC1                                        13
#define AVR32_ADCIFA_IMR_MSOC1_MASK                           0x00002000
#define AVR32_ADCIFA_IMR_MSOC1_OFFSET                                 13
#define AVR32_ADCIFA_IMR_MSOC1_SIZE                                    1
#define AVR32_ADCIFA_IMR_OVR0                                          2
#define AVR32_ADCIFA_IMR_OVR0_MASK                            0x00000004
#define AVR32_ADCIFA_IMR_OVR0_OFFSET                                   2
#define AVR32_ADCIFA_IMR_OVR0_SIZE                                     1
#define AVR32_ADCIFA_IMR_OVR1                                          6
#define AVR32_ADCIFA_IMR_OVR1_MASK                            0x00000040
#define AVR32_ADCIFA_IMR_OVR1_OFFSET                                   6
#define AVR32_ADCIFA_IMR_OVR1_SIZE                                     1
#define AVR32_ADCIFA_IMR_PCNT                                          9
#define AVR32_ADCIFA_IMR_PCNT_MASK                            0x00000200
#define AVR32_ADCIFA_IMR_PCNT_OFFSET                                   9
#define AVR32_ADCIFA_IMR_PCNT_SIZE                                     1
#define AVR32_ADCIFA_IMR_PLOSS                                         8
#define AVR32_ADCIFA_IMR_PLOSS_MASK                           0x00000100
#define AVR32_ADCIFA_IMR_PLOSS_OFFSET                                  8
#define AVR32_ADCIFA_IMR_PLOSS_SIZE                                    1
#define AVR32_ADCIFA_IMR_RESETVALUE                           0x00000000
#define AVR32_ADCIFA_IMR_SEOC0                                         1
#define AVR32_ADCIFA_IMR_SEOC0_MASK                           0x00000002
#define AVR32_ADCIFA_IMR_SEOC0_OFFSET                                  1
#define AVR32_ADCIFA_IMR_SEOC0_SIZE                                    1
#define AVR32_ADCIFA_IMR_SEOC1                                         5
#define AVR32_ADCIFA_IMR_SEOC1_MASK                           0x00000020
#define AVR32_ADCIFA_IMR_SEOC1_OFFSET                                  5
#define AVR32_ADCIFA_IMR_SEOC1_SIZE                                    1
#define AVR32_ADCIFA_IMR_SEOS0                                         0
#define AVR32_ADCIFA_IMR_SEOS0_MASK                           0x00000001
#define AVR32_ADCIFA_IMR_SEOS0_OFFSET                                  0
#define AVR32_ADCIFA_IMR_SEOS0_SIZE                                    1
#define AVR32_ADCIFA_IMR_SEOS1                                         4
#define AVR32_ADCIFA_IMR_SEOS1_MASK                           0x00000010
#define AVR32_ADCIFA_IMR_SEOS1_OFFSET                                  4
#define AVR32_ADCIFA_IMR_SEOS1_SIZE                                    1
#define AVR32_ADCIFA_IMR_SUTD                                         14
#define AVR32_ADCIFA_IMR_SUTD_MASK                            0x00004000
#define AVR32_ADCIFA_IMR_SUTD_OFFSET                                  14
#define AVR32_ADCIFA_IMR_SUTD_SIZE                                     1
#define AVR32_ADCIFA_IMR_WM0                                          10
#define AVR32_ADCIFA_IMR_WM0_MASK                             0x00000400
#define AVR32_ADCIFA_IMR_WM0_OFFSET                                   10
#define AVR32_ADCIFA_IMR_WM0_SIZE                                      1
#define AVR32_ADCIFA_IMR_WM1                                          11
#define AVR32_ADCIFA_IMR_WM1_MASK                             0x00000800
#define AVR32_ADCIFA_IMR_WM1_OFFSET                                   11
#define AVR32_ADCIFA_IMR_WM1_SIZE                                      1
#define AVR32_ADCIFA_INNSEL00                                 0x00000034
#define AVR32_ADCIFA_INNSEL00_CNV0                                     0
#define AVR32_ADCIFA_INNSEL00_CNV0_MASK                       0x0000000f
#define AVR32_ADCIFA_INNSEL00_CNV0_OFFSET                              0
#define AVR32_ADCIFA_INNSEL00_CNV0_SIZE                                4
#define AVR32_ADCIFA_INNSEL00_CNV1                                     8
#define AVR32_ADCIFA_INNSEL00_CNV1_MASK                       0x00000f00
#define AVR32_ADCIFA_INNSEL00_CNV1_OFFSET                              8
#define AVR32_ADCIFA_INNSEL00_CNV1_SIZE                                4
#define AVR32_ADCIFA_INNSEL00_CNV2                                    16
#define AVR32_ADCIFA_INNSEL00_CNV2_MASK                       0x000f0000
#define AVR32_ADCIFA_INNSEL00_CNV2_OFFSET                             16
#define AVR32_ADCIFA_INNSEL00_CNV2_SIZE                                4
#define AVR32_ADCIFA_INNSEL00_CNV3                                    24
#define AVR32_ADCIFA_INNSEL00_CNV3_MASK                       0x0f000000
#define AVR32_ADCIFA_INNSEL00_CNV3_OFFSET                             24
#define AVR32_ADCIFA_INNSEL00_CNV3_SIZE                                4
#define AVR32_ADCIFA_INNSEL00_MASK                            0x0f0f0f0f
#define AVR32_ADCIFA_INNSEL00_RESETVALUE                      0x00000000
#define AVR32_ADCIFA_INNSEL01                                 0x00000038
#define AVR32_ADCIFA_INNSEL01_CNV0                                     0
#define AVR32_ADCIFA_INNSEL01_CNV0_MASK                       0x0000000f
#define AVR32_ADCIFA_INNSEL01_CNV0_OFFSET                              0
#define AVR32_ADCIFA_INNSEL01_CNV0_SIZE                                4
#define AVR32_ADCIFA_INNSEL01_CNV1                                     8
#define AVR32_ADCIFA_INNSEL01_CNV1_MASK                       0x00000f00
#define AVR32_ADCIFA_INNSEL01_CNV1_OFFSET                              8
#define AVR32_ADCIFA_INNSEL01_CNV1_SIZE                                4
#define AVR32_ADCIFA_INNSEL01_CNV2                                    16
#define AVR32_ADCIFA_INNSEL01_CNV2_MASK                       0x000f0000
#define AVR32_ADCIFA_INNSEL01_CNV2_OFFSET                             16
#define AVR32_ADCIFA_INNSEL01_CNV2_SIZE                                4
#define AVR32_ADCIFA_INNSEL01_CNV3                                    24
#define AVR32_ADCIFA_INNSEL01_CNV3_MASK                       0x0f000000
#define AVR32_ADCIFA_INNSEL01_CNV3_OFFSET                             24
#define AVR32_ADCIFA_INNSEL01_CNV3_SIZE                                4
#define AVR32_ADCIFA_INNSEL01_MASK                            0x0f0f0f0f
#define AVR32_ADCIFA_INNSEL01_RESETVALUE                      0x00000000
#define AVR32_ADCIFA_INNSEL10                                 0x0000003c
#define AVR32_ADCIFA_INNSEL10_CNV4                                     0
#define AVR32_ADCIFA_INNSEL10_CNV4_MASK                       0x0000000f
#define AVR32_ADCIFA_INNSEL10_CNV4_OFFSET                              0
#define AVR32_ADCIFA_INNSEL10_CNV4_SIZE                                4
#define AVR32_ADCIFA_INNSEL10_CNV5                                     8
#define AVR32_ADCIFA_INNSEL10_CNV5_MASK                       0x00000f00
#define AVR32_ADCIFA_INNSEL10_CNV5_OFFSET                              8
#define AVR32_ADCIFA_INNSEL10_CNV5_SIZE                                4
#define AVR32_ADCIFA_INNSEL10_CNV6                                    16
#define AVR32_ADCIFA_INNSEL10_CNV6_MASK                       0x000f0000
#define AVR32_ADCIFA_INNSEL10_CNV6_OFFSET                             16
#define AVR32_ADCIFA_INNSEL10_CNV6_SIZE                                4
#define AVR32_ADCIFA_INNSEL10_CNV7                                    24
#define AVR32_ADCIFA_INNSEL10_CNV7_MASK                       0x0f000000
#define AVR32_ADCIFA_INNSEL10_CNV7_OFFSET                             24
#define AVR32_ADCIFA_INNSEL10_CNV7_SIZE                                4
#define AVR32_ADCIFA_INNSEL10_MASK                            0x0f0f0f0f
#define AVR32_ADCIFA_INNSEL10_RESETVALUE                      0x00000000
#define AVR32_ADCIFA_INNSEL11                                 0x00000040
#define AVR32_ADCIFA_INNSEL11_CNV4                                     0
#define AVR32_ADCIFA_INNSEL11_CNV4_MASK                       0x0000000f
#define AVR32_ADCIFA_INNSEL11_CNV4_OFFSET                              0
#define AVR32_ADCIFA_INNSEL11_CNV4_SIZE                                4
#define AVR32_ADCIFA_INNSEL11_CNV5                                     8
#define AVR32_ADCIFA_INNSEL11_CNV5_MASK                       0x00000f00
#define AVR32_ADCIFA_INNSEL11_CNV5_OFFSET                              8
#define AVR32_ADCIFA_INNSEL11_CNV5_SIZE                                4
#define AVR32_ADCIFA_INNSEL11_CNV6                                    16
#define AVR32_ADCIFA_INNSEL11_CNV6_MASK                       0x000f0000
#define AVR32_ADCIFA_INNSEL11_CNV6_OFFSET                             16
#define AVR32_ADCIFA_INNSEL11_CNV6_SIZE                                4
#define AVR32_ADCIFA_INNSEL11_CNV7                                    24
#define AVR32_ADCIFA_INNSEL11_CNV7_MASK                       0x0f000000
#define AVR32_ADCIFA_INNSEL11_CNV7_OFFSET                             24
#define AVR32_ADCIFA_INNSEL11_CNV7_SIZE                                4
#define AVR32_ADCIFA_INNSEL11_MASK                            0x0f0f0f0f
#define AVR32_ADCIFA_INNSEL11_RESETVALUE                      0x00000000
#define AVR32_ADCIFA_INPSEL00                                 0x00000024
#define AVR32_ADCIFA_INPSEL00_CNV0                                     0
#define AVR32_ADCIFA_INPSEL00_CNV0_MASK                       0x0000000f
#define AVR32_ADCIFA_INPSEL00_CNV0_OFFSET                              0
#define AVR32_ADCIFA_INPSEL00_CNV0_SIZE                                4
#define AVR32_ADCIFA_INPSEL00_CNV1                                     8
#define AVR32_ADCIFA_INPSEL00_CNV1_MASK                       0x00000f00
#define AVR32_ADCIFA_INPSEL00_CNV1_OFFSET                              8
#define AVR32_ADCIFA_INPSEL00_CNV1_SIZE                                4
#define AVR32_ADCIFA_INPSEL00_CNV2                                    16
#define AVR32_ADCIFA_INPSEL00_CNV2_MASK                       0x000f0000
#define AVR32_ADCIFA_INPSEL00_CNV2_OFFSET                             16
#define AVR32_ADCIFA_INPSEL00_CNV2_SIZE                                4
#define AVR32_ADCIFA_INPSEL00_CNV3                                    24
#define AVR32_ADCIFA_INPSEL00_CNV3_MASK                       0x0f000000
#define AVR32_ADCIFA_INPSEL00_CNV3_OFFSET                             24
#define AVR32_ADCIFA_INPSEL00_CNV3_SIZE                                4
#define AVR32_ADCIFA_INPSEL00_MASK                            0x0f0f0f0f
#define AVR32_ADCIFA_INPSEL00_RESETVALUE                      0x00000000
#define AVR32_ADCIFA_INPSEL01                                 0x00000028
#define AVR32_ADCIFA_INPSEL01_CNV0                                     0
#define AVR32_ADCIFA_INPSEL01_CNV0_MASK                       0x0000000f
#define AVR32_ADCIFA_INPSEL01_CNV0_OFFSET                              0
#define AVR32_ADCIFA_INPSEL01_CNV0_SIZE                                4
#define AVR32_ADCIFA_INPSEL01_CNV1                                     8
#define AVR32_ADCIFA_INPSEL01_CNV1_MASK                       0x00000f00
#define AVR32_ADCIFA_INPSEL01_CNV1_OFFSET                              8
#define AVR32_ADCIFA_INPSEL01_CNV1_SIZE                                4
#define AVR32_ADCIFA_INPSEL01_CNV2                                    16
#define AVR32_ADCIFA_INPSEL01_CNV2_MASK                       0x000f0000
#define AVR32_ADCIFA_INPSEL01_CNV2_OFFSET                             16
#define AVR32_ADCIFA_INPSEL01_CNV2_SIZE                                4
#define AVR32_ADCIFA_INPSEL01_CNV3                                    24
#define AVR32_ADCIFA_INPSEL01_CNV3_MASK                       0x0f000000
#define AVR32_ADCIFA_INPSEL01_CNV3_OFFSET                             24
#define AVR32_ADCIFA_INPSEL01_CNV3_SIZE                                4
#define AVR32_ADCIFA_INPSEL01_MASK                            0x0f0f0f0f
#define AVR32_ADCIFA_INPSEL01_RESETVALUE                      0x00000000
#define AVR32_ADCIFA_INPSEL10                                 0x0000002c
#define AVR32_ADCIFA_INPSEL10_CNV4                                     0
#define AVR32_ADCIFA_INPSEL10_CNV4_MASK                       0x0000000f
#define AVR32_ADCIFA_INPSEL10_CNV4_OFFSET                              0
#define AVR32_ADCIFA_INPSEL10_CNV4_SIZE                                4
#define AVR32_ADCIFA_INPSEL10_CNV5                                     8
#define AVR32_ADCIFA_INPSEL10_CNV5_MASK                       0x00000f00
#define AVR32_ADCIFA_INPSEL10_CNV5_OFFSET                              8
#define AVR32_ADCIFA_INPSEL10_CNV5_SIZE                                4
#define AVR32_ADCIFA_INPSEL10_CNV6                                    16
#define AVR32_ADCIFA_INPSEL10_CNV6_MASK                       0x000f0000
#define AVR32_ADCIFA_INPSEL10_CNV6_OFFSET                             16
#define AVR32_ADCIFA_INPSEL10_CNV6_SIZE                                4
#define AVR32_ADCIFA_INPSEL10_CNV7                                    24
#define AVR32_ADCIFA_INPSEL10_CNV7_MASK                       0x0f000000
#define AVR32_ADCIFA_INPSEL10_CNV7_OFFSET                             24
#define AVR32_ADCIFA_INPSEL10_CNV7_SIZE                                4
#define AVR32_ADCIFA_INPSEL10_MASK                            0x0f0f0f0f
#define AVR32_ADCIFA_INPSEL10_RESETVALUE                      0x00000000
#define AVR32_ADCIFA_INPSEL11                                 0x00000030
#define AVR32_ADCIFA_INPSEL11_CNV4                                     0
#define AVR32_ADCIFA_INPSEL11_CNV4_MASK                       0x0000000f
#define AVR32_ADCIFA_INPSEL11_CNV4_OFFSET                              0
#define AVR32_ADCIFA_INPSEL11_CNV4_SIZE                                4
#define AVR32_ADCIFA_INPSEL11_CNV5                                     8
#define AVR32_ADCIFA_INPSEL11_CNV5_MASK                       0x00000f00
#define AVR32_ADCIFA_INPSEL11_CNV5_OFFSET                              8
#define AVR32_ADCIFA_INPSEL11_CNV5_SIZE                                4
#define AVR32_ADCIFA_INPSEL11_CNV6                                    16
#define AVR32_ADCIFA_INPSEL11_CNV6_MASK                       0x000f0000
#define AVR32_ADCIFA_INPSEL11_CNV6_OFFSET                             16
#define AVR32_ADCIFA_INPSEL11_CNV6_SIZE                                4
#define AVR32_ADCIFA_INPSEL11_CNV7                                    24
#define AVR32_ADCIFA_INPSEL11_CNV7_MASK                       0x0f000000
#define AVR32_ADCIFA_INPSEL11_CNV7_OFFSET                             24
#define AVR32_ADCIFA_INPSEL11_CNV7_SIZE                                4
#define AVR32_ADCIFA_INPSEL11_MASK                            0x0f0f0f0f
#define AVR32_ADCIFA_INPSEL11_RESETVALUE                      0x00000000
#define AVR32_ADCIFA_ITIMER                                   0x00000048
#define AVR32_ADCIFA_ITIMER_ITMC                                       0
#define AVR32_ADCIFA_ITIMER_ITMC_MASK                         0x0001ffff
#define AVR32_ADCIFA_ITIMER_ITMC_OFFSET                                0
#define AVR32_ADCIFA_ITIMER_ITMC_SIZE                                 17
#define AVR32_ADCIFA_ITIMER_MASK                              0x0001ffff
#define AVR32_ADCIFA_ITIMER_RESETVALUE                        0x00000000
#define AVR32_ADCIFA_ITMC                                              0
#define AVR32_ADCIFA_ITMC_MASK                                0x0001ffff
#define AVR32_ADCIFA_ITMC_OFFSET                                       0
#define AVR32_ADCIFA_ITMC_SIZE                                        17
#define AVR32_ADCIFA_LCV                                               0
#define AVR32_ADCIFA_LCV0                                     0x00000060
#define AVR32_ADCIFA_LCV0_LCV                                          0
#define AVR32_ADCIFA_LCV0_LCV_MASK                            0xffffffff
#define AVR32_ADCIFA_LCV0_LCV_OFFSET                                   0
#define AVR32_ADCIFA_LCV0_LCV_SIZE                                    32
#define AVR32_ADCIFA_LCV0_MASK                                0xffffffff
#define AVR32_ADCIFA_LCV0_RESETVALUE                          0x00000000
#define AVR32_ADCIFA_LCV1                                     0x00000064
#define AVR32_ADCIFA_LCV1_LCV                                          0
#define AVR32_ADCIFA_LCV1_LCV_MASK                            0xffffffff
#define AVR32_ADCIFA_LCV1_LCV_OFFSET                                   0
#define AVR32_ADCIFA_LCV1_LCV_SIZE                                    32
#define AVR32_ADCIFA_LCV1_MASK                                0xffffffff
#define AVR32_ADCIFA_LCV1_RESETVALUE                          0x00000000
#define AVR32_ADCIFA_LCV_MASK                                 0xffffffff
#define AVR32_ADCIFA_LCV_OFFSET                                        0
#define AVR32_ADCIFA_LCV_SIZE                                         32
#define AVR32_ADCIFA_LOVR0                                             3
#define AVR32_ADCIFA_LOVR0_MASK                               0x00000008
#define AVR32_ADCIFA_LOVR0_OFFSET                                      3
#define AVR32_ADCIFA_LOVR0_SIZE                                        1
#define AVR32_ADCIFA_LOVR1                                             7
#define AVR32_ADCIFA_LOVR1_MASK                               0x00000080
#define AVR32_ADCIFA_LOVR1_OFFSET                                      7
#define AVR32_ADCIFA_LOVR1_SIZE                                        1
#define AVR32_ADCIFA_LT                                                0
#define AVR32_ADCIFA_LT_MASK                                  0x00000fff
#define AVR32_ADCIFA_LT_OFFSET                                         0
#define AVR32_ADCIFA_LT_SIZE                                          12
#define AVR32_ADCIFA_M                                                 0
#define AVR32_ADCIFA_MSOC0                                            12
#define AVR32_ADCIFA_MSOC0_MASK                               0x00001000
#define AVR32_ADCIFA_MSOC0_OFFSET                                     12
#define AVR32_ADCIFA_MSOC0_SIZE                                        1
#define AVR32_ADCIFA_MSOC1                                            13
#define AVR32_ADCIFA_MSOC1_MASK                               0x00002000
#define AVR32_ADCIFA_MSOC1_OFFSET                                     13
#define AVR32_ADCIFA_MSOC1_SIZE                                        1
#define AVR32_ADCIFA_MUXSET                                           10
#define AVR32_ADCIFA_MUXSET_MASK                              0x00000400
#define AVR32_ADCIFA_MUXSET_OFFSET                                    10
#define AVR32_ADCIFA_MUXSET_SIZE                                       1
#define AVR32_ADCIFA_M_MASK                                   0x000000ff
#define AVR32_ADCIFA_M_OFFSET                                          0
#define AVR32_ADCIFA_M_SIZE                                            8
#define AVR32_ADCIFA_N                                                 8
#define AVR32_ADCIFA_N_MASK                                   0x0000ff00
#define AVR32_ADCIFA_N_OFFSET                                          8
#define AVR32_ADCIFA_N_SIZE                                            8
#define AVR32_ADCIFA_OCAL                                             24
#define AVR32_ADCIFA_OCAL_MASK                                0x3f000000
#define AVR32_ADCIFA_OCAL_OFFSET                                      24
#define AVR32_ADCIFA_OCAL_SIZE                                         6
#define AVR32_ADCIFA_OVR0                                              2
#define AVR32_ADCIFA_OVR0_MASK                                0x00000004
#define AVR32_ADCIFA_OVR0_OFFSET                                       2
#define AVR32_ADCIFA_OVR0_SIZE                                         1
#define AVR32_ADCIFA_OVR1                                              6
#define AVR32_ADCIFA_OVR1_MASK                                0x00000040
#define AVR32_ADCIFA_OVR1_OFFSET                                       6
#define AVR32_ADCIFA_OVR1_SIZE                                         1
#define AVR32_ADCIFA_OVSX2                                             3
#define AVR32_ADCIFA_OVSX2_MASK                               0x00000008
#define AVR32_ADCIFA_OVSX2_OFFSET                                      3
#define AVR32_ADCIFA_OVSX2_SIZE                                        1
#define AVR32_ADCIFA_PARAMETER                                0x00000080
#define AVR32_ADCIFA_PARAMETER_M                                       0
#define AVR32_ADCIFA_PARAMETER_MASK                           0x0000ffff
#define AVR32_ADCIFA_PARAMETER_M_MASK                         0x000000ff
#define AVR32_ADCIFA_PARAMETER_M_OFFSET                                0
#define AVR32_ADCIFA_PARAMETER_M_SIZE                                  8
#define AVR32_ADCIFA_PARAMETER_N                                       8
#define AVR32_ADCIFA_PARAMETER_N_MASK                         0x0000ff00
#define AVR32_ADCIFA_PARAMETER_N_OFFSET                                8
#define AVR32_ADCIFA_PARAMETER_N_SIZE                                  8
#define AVR32_ADCIFA_PARAMETER_RESETVALUE                     0x00000000
#define AVR32_ADCIFA_PCNT                                              9
#define AVR32_ADCIFA_PCNT_MASK                                0x00000200
#define AVR32_ADCIFA_PCNT_OFFSET                                       9
#define AVR32_ADCIFA_PCNT_SIZE                                         1
#define AVR32_ADCIFA_PDPSW                                            11
#define AVR32_ADCIFA_PDPSW_MASK                               0x00003800
#define AVR32_ADCIFA_PDPSW_OFFSET                                     11
#define AVR32_ADCIFA_PDPSW_SIZE                                        3
#define AVR32_ADCIFA_PENDBC                                            0
#define AVR32_ADCIFA_PENDBC_MASK                              0x0000000f
#define AVR32_ADCIFA_PENDBC_OFFSET                                     0
#define AVR32_ADCIFA_PENDBC_SIZE                                       4
#define AVR32_ADCIFA_PENDT                                            10
#define AVR32_ADCIFA_PENDT_MASK                               0x00000400
#define AVR32_ADCIFA_PENDT_OFFSET                                     10
#define AVR32_ADCIFA_PENDT_SIZE                                        1
#define AVR32_ADCIFA_PLOSS                                             8
#define AVR32_ADCIFA_PLOSS_MASK                               0x00000100
#define AVR32_ADCIFA_PLOSS_OFFSET                                      8
#define AVR32_ADCIFA_PLOSS_SIZE                                        1
#define AVR32_ADCIFA_RES                                      0x00000084
#define AVR32_ADCIFA_RES_MASK                                 0xffffffff
#define AVR32_ADCIFA_RES_OFFSET                                        0
#define AVR32_ADCIFA_RES_RES                                           0
#define AVR32_ADCIFA_RES_RESETVALUE                           0x00000000
#define AVR32_ADCIFA_RES_RES_MASK                             0xffffffff
#define AVR32_ADCIFA_RES_RES_OFFSET                                    0
#define AVR32_ADCIFA_RES_RES_SIZE                                     32
#define AVR32_ADCIFA_RES_SIZE                                         32
#define AVR32_ADCIFA_RS                                                5
#define AVR32_ADCIFA_RS_MASK                                  0x00000060
#define AVR32_ADCIFA_RS_OFFSET                                         5
#define AVR32_ADCIFA_RS_SIZE                                           2
#define AVR32_ADCIFA_RUNT                                             15
#define AVR32_ADCIFA_RUNT_MASK                                0x00008000
#define AVR32_ADCIFA_RUNT_OFFSET                                      15
#define AVR32_ADCIFA_RUNT_SIZE                                         1
#define AVR32_ADCIFA_SA                                                0
#define AVR32_ADCIFA_SA_MASK                                  0x00000001
#define AVR32_ADCIFA_SA_OFFSET                                         0
#define AVR32_ADCIFA_SA_SIZE                                           1
#define AVR32_ADCIFA_SCR                                      0x0000000c
#define AVR32_ADCIFA_SCR_AWUP                                         31
#define AVR32_ADCIFA_SCR_AWUP_MASK                            0x80000000
#define AVR32_ADCIFA_SCR_AWUP_OFFSET                                  31
#define AVR32_ADCIFA_SCR_AWUP_SIZE                                     1
#define AVR32_ADCIFA_SCR_LOVR0                                         3
#define AVR32_ADCIFA_SCR_LOVR0_MASK                           0x00000008
#define AVR32_ADCIFA_SCR_LOVR0_OFFSET                                  3
#define AVR32_ADCIFA_SCR_LOVR0_SIZE                                    1
#define AVR32_ADCIFA_SCR_LOVR1                                         7
#define AVR32_ADCIFA_SCR_LOVR1_MASK                           0x00000080
#define AVR32_ADCIFA_SCR_LOVR1_OFFSET                                  7
#define AVR32_ADCIFA_SCR_LOVR1_SIZE                                    1
#define AVR32_ADCIFA_SCR_MASK                                 0x80007fff
#define AVR32_ADCIFA_SCR_MSOC0                                        12
#define AVR32_ADCIFA_SCR_MSOC0_MASK                           0x00001000
#define AVR32_ADCIFA_SCR_MSOC0_OFFSET                                 12
#define AVR32_ADCIFA_SCR_MSOC0_SIZE                                    1
#define AVR32_ADCIFA_SCR_MSOC1                                        13
#define AVR32_ADCIFA_SCR_MSOC1_MASK                           0x00002000
#define AVR32_ADCIFA_SCR_MSOC1_OFFSET                                 13
#define AVR32_ADCIFA_SCR_MSOC1_SIZE                                    1
#define AVR32_ADCIFA_SCR_OVR0                                          2
#define AVR32_ADCIFA_SCR_OVR0_MASK                            0x00000004
#define AVR32_ADCIFA_SCR_OVR0_OFFSET                                   2
#define AVR32_ADCIFA_SCR_OVR0_SIZE                                     1
#define AVR32_ADCIFA_SCR_OVR1                                          6
#define AVR32_ADCIFA_SCR_OVR1_MASK                            0x00000040
#define AVR32_ADCIFA_SCR_OVR1_OFFSET                                   6
#define AVR32_ADCIFA_SCR_OVR1_SIZE                                     1
#define AVR32_ADCIFA_SCR_PCNT                                          9
#define AVR32_ADCIFA_SCR_PCNT_MASK                            0x00000200
#define AVR32_ADCIFA_SCR_PCNT_OFFSET                                   9
#define AVR32_ADCIFA_SCR_PCNT_SIZE                                     1
#define AVR32_ADCIFA_SCR_PLOSS                                         8
#define AVR32_ADCIFA_SCR_PLOSS_MASK                           0x00000100
#define AVR32_ADCIFA_SCR_PLOSS_OFFSET                                  8
#define AVR32_ADCIFA_SCR_PLOSS_SIZE                                    1
#define AVR32_ADCIFA_SCR_RESETVALUE                           0x00000000
#define AVR32_ADCIFA_SCR_SEOC0                                         1
#define AVR32_ADCIFA_SCR_SEOC0_MASK                           0x00000002
#define AVR32_ADCIFA_SCR_SEOC0_OFFSET                                  1
#define AVR32_ADCIFA_SCR_SEOC0_SIZE                                    1
#define AVR32_ADCIFA_SCR_SEOC1                                         5
#define AVR32_ADCIFA_SCR_SEOC1_MASK                           0x00000020
#define AVR32_ADCIFA_SCR_SEOC1_OFFSET                                  5
#define AVR32_ADCIFA_SCR_SEOC1_SIZE                                    1
#define AVR32_ADCIFA_SCR_SEOS0                                         0
#define AVR32_ADCIFA_SCR_SEOS0_MASK                           0x00000001
#define AVR32_ADCIFA_SCR_SEOS0_OFFSET                                  0
#define AVR32_ADCIFA_SCR_SEOS0_SIZE                                    1
#define AVR32_ADCIFA_SCR_SEOS1                                         4
#define AVR32_ADCIFA_SCR_SEOS1_MASK                           0x00000010
#define AVR32_ADCIFA_SCR_SEOS1_OFFSET                                  4
#define AVR32_ADCIFA_SCR_SEOS1_SIZE                                    1
#define AVR32_ADCIFA_SCR_SUTD                                         14
#define AVR32_ADCIFA_SCR_SUTD_MASK                            0x00004000
#define AVR32_ADCIFA_SCR_SUTD_OFFSET                                  14
#define AVR32_ADCIFA_SCR_SUTD_SIZE                                     1
#define AVR32_ADCIFA_SCR_WM0                                          10
#define AVR32_ADCIFA_SCR_WM0_MASK                             0x00000400
#define AVR32_ADCIFA_SCR_WM0_OFFSET                                   10
#define AVR32_ADCIFA_SCR_WM0_SIZE                                      1
#define AVR32_ADCIFA_SCR_WM1                                          11
#define AVR32_ADCIFA_SCR_WM1_MASK                             0x00000800
#define AVR32_ADCIFA_SCR_WM1_OFFSET                                   11
#define AVR32_ADCIFA_SCR_WM1_SIZE                                      1
#define AVR32_ADCIFA_SEOC0                                             1
#define AVR32_ADCIFA_SEOC0_MASK                               0x00000002
#define AVR32_ADCIFA_SEOC0_OFFSET                                      1
#define AVR32_ADCIFA_SEOC0_SIZE                                        1
#define AVR32_ADCIFA_SEOC1                                             5
#define AVR32_ADCIFA_SEOC1_MASK                               0x00000020
#define AVR32_ADCIFA_SEOC1_OFFSET                                      5
#define AVR32_ADCIFA_SEOC1_SIZE                                        1
#define AVR32_ADCIFA_SEOS0                                             0
#define AVR32_ADCIFA_SEOS0_MASK                               0x00000001
#define AVR32_ADCIFA_SEOS0_OFFSET                                      0
#define AVR32_ADCIFA_SEOS0_SIZE                                        1
#define AVR32_ADCIFA_SEOS1                                             4
#define AVR32_ADCIFA_SEOS1_MASK                               0x00000010
#define AVR32_ADCIFA_SEOS1_OFFSET                                      4
#define AVR32_ADCIFA_SEOS1_SIZE                                        1
#define AVR32_ADCIFA_SEQCFG0                                  0x00000014
#define AVR32_ADCIFA_SEQCFG0_CNVNB                                    16
#define AVR32_ADCIFA_SEQCFG0_CNVNB_MASK                       0x000f0000
#define AVR32_ADCIFA_SEQCFG0_CNVNB_OFFSET                             16
#define AVR32_ADCIFA_SEQCFG0_CNVNB_SIZE                                4
#define AVR32_ADCIFA_SEQCFG0_HWLA                                      1
#define AVR32_ADCIFA_SEQCFG0_HWLA_MASK                        0x00000002
#define AVR32_ADCIFA_SEQCFG0_HWLA_OFFSET                               1
#define AVR32_ADCIFA_SEQCFG0_HWLA_SIZE                                 1
#define AVR32_ADCIFA_SEQCFG0_MASK                             0x000f331f
#define AVR32_ADCIFA_SEQCFG0_OVSX2                                     3
#define AVR32_ADCIFA_SEQCFG0_OVSX2_MASK                       0x00000008
#define AVR32_ADCIFA_SEQCFG0_OVSX2_OFFSET                              3
#define AVR32_ADCIFA_SEQCFG0_OVSX2_SIZE                                1
#define AVR32_ADCIFA_SEQCFG0_RESETVALUE                       0x00000000
#define AVR32_ADCIFA_SEQCFG0_SA                                        0
#define AVR32_ADCIFA_SEQCFG0_SA_MASK                          0x00000001
#define AVR32_ADCIFA_SEQCFG0_SA_OFFSET                                 0
#define AVR32_ADCIFA_SEQCFG0_SA_SIZE                                   1
#define AVR32_ADCIFA_SEQCFG0_SHDYN                                     4
#define AVR32_ADCIFA_SEQCFG0_SHDYN_MASK                       0x00000010
#define AVR32_ADCIFA_SEQCFG0_SHDYN_OFFSET                              4
#define AVR32_ADCIFA_SEQCFG0_SHDYN_SIZE                                1
#define AVR32_ADCIFA_SEQCFG0_SOCB                                      2
#define AVR32_ADCIFA_SEQCFG0_SOCB_MASK                        0x00000004
#define AVR32_ADCIFA_SEQCFG0_SOCB_OFFSET                               2
#define AVR32_ADCIFA_SEQCFG0_SOCB_SIZE                                 1
#define AVR32_ADCIFA_SEQCFG0_SRES                                     12
#define AVR32_ADCIFA_SEQCFG0_SRES_MASK                        0x00003000
#define AVR32_ADCIFA_SEQCFG0_SRES_OFFSET                              12
#define AVR32_ADCIFA_SEQCFG0_SRES_SIZE                                 2
#define AVR32_ADCIFA_SEQCFG0_TRGSEL                                    8
#define AVR32_ADCIFA_SEQCFG0_TRGSEL_MASK                      0x00000300
#define AVR32_ADCIFA_SEQCFG0_TRGSEL_OFFSET                             8
#define AVR32_ADCIFA_SEQCFG0_TRGSEL_SIZE                               2
#define AVR32_ADCIFA_SEQCFG1                                  0x00000018
#define AVR32_ADCIFA_SEQCFG1_CNVNB                                    16
#define AVR32_ADCIFA_SEQCFG1_CNVNB_MASK                       0x000f0000
#define AVR32_ADCIFA_SEQCFG1_CNVNB_OFFSET                             16
#define AVR32_ADCIFA_SEQCFG1_CNVNB_SIZE                                4
#define AVR32_ADCIFA_SEQCFG1_HWLA                                      1
#define AVR32_ADCIFA_SEQCFG1_HWLA_MASK                        0x00000002
#define AVR32_ADCIFA_SEQCFG1_HWLA_OFFSET                               1
#define AVR32_ADCIFA_SEQCFG1_HWLA_SIZE                                 1
#define AVR32_ADCIFA_SEQCFG1_MASK                             0x000f331f
#define AVR32_ADCIFA_SEQCFG1_OVSX2                                     3
#define AVR32_ADCIFA_SEQCFG1_OVSX2_MASK                       0x00000008
#define AVR32_ADCIFA_SEQCFG1_OVSX2_OFFSET                              3
#define AVR32_ADCIFA_SEQCFG1_OVSX2_SIZE                                1
#define AVR32_ADCIFA_SEQCFG1_RESETVALUE                       0x00000000
#define AVR32_ADCIFA_SEQCFG1_SA                                        0
#define AVR32_ADCIFA_SEQCFG1_SA_MASK                          0x00000001
#define AVR32_ADCIFA_SEQCFG1_SA_OFFSET                                 0
#define AVR32_ADCIFA_SEQCFG1_SA_SIZE                                   1
#define AVR32_ADCIFA_SEQCFG1_SHDYN                                     4
#define AVR32_ADCIFA_SEQCFG1_SHDYN_MASK                       0x00000010
#define AVR32_ADCIFA_SEQCFG1_SHDYN_OFFSET                              4
#define AVR32_ADCIFA_SEQCFG1_SHDYN_SIZE                                1
#define AVR32_ADCIFA_SEQCFG1_SOCB                                      2
#define AVR32_ADCIFA_SEQCFG1_SOCB_MASK                        0x00000004
#define AVR32_ADCIFA_SEQCFG1_SOCB_OFFSET                               2
#define AVR32_ADCIFA_SEQCFG1_SOCB_SIZE                                 1
#define AVR32_ADCIFA_SEQCFG1_SRES                                     12
#define AVR32_ADCIFA_SEQCFG1_SRES_MASK                        0x00003000
#define AVR32_ADCIFA_SEQCFG1_SRES_OFFSET                              12
#define AVR32_ADCIFA_SEQCFG1_SRES_SIZE                                 2
#define AVR32_ADCIFA_SEQCFG1_TRGSEL                                    8
#define AVR32_ADCIFA_SEQCFG1_TRGSEL_MASK                      0x00000300
#define AVR32_ADCIFA_SEQCFG1_TRGSEL_OFFSET                             8
#define AVR32_ADCIFA_SEQCFG1_TRGSEL_SIZE                               2
#define AVR32_ADCIFA_SHCAL                                    0x0000006c
#define AVR32_ADCIFA_SHCAL_GAIN0                                       0
#define AVR32_ADCIFA_SHCAL_GAIN0_MASK                         0x000003ff
#define AVR32_ADCIFA_SHCAL_GAIN0_OFFSET                                0
#define AVR32_ADCIFA_SHCAL_GAIN0_SIZE                                 10
#define AVR32_ADCIFA_SHCAL_GAIN1                                      16
#define AVR32_ADCIFA_SHCAL_GAIN1_MASK                         0x03ff0000
#define AVR32_ADCIFA_SHCAL_GAIN1_OFFSET                               16
#define AVR32_ADCIFA_SHCAL_GAIN1_SIZE                                 10
#define AVR32_ADCIFA_SHCAL_MASK                               0x03ff03ff
#define AVR32_ADCIFA_SHCAL_RESETVALUE                         0x00000000
#define AVR32_ADCIFA_SHD                                               7
#define AVR32_ADCIFA_SHDYN                                             4
#define AVR32_ADCIFA_SHDYN_MASK                               0x00000010
#define AVR32_ADCIFA_SHDYN_OFFSET                                      4
#define AVR32_ADCIFA_SHDYN_SIZE                                        1
#define AVR32_ADCIFA_SHD_MASK                                 0x00000080
#define AVR32_ADCIFA_SHD_OFFSET                                        7
#define AVR32_ADCIFA_SHD_SIZE                                          1
#define AVR32_ADCIFA_SHG0                                     0x0000001c
#define AVR32_ADCIFA_SHG0_GCNV0                                        0
#define AVR32_ADCIFA_SHG0_GCNV0_MASK                          0x00000007
#define AVR32_ADCIFA_SHG0_GCNV0_OFFSET                                 0
#define AVR32_ADCIFA_SHG0_GCNV0_SIZE                                   3
#define AVR32_ADCIFA_SHG0_GCNV1                                        4
#define AVR32_ADCIFA_SHG0_GCNV1_MASK                          0x00000070
#define AVR32_ADCIFA_SHG0_GCNV1_OFFSET                                 4
#define AVR32_ADCIFA_SHG0_GCNV1_SIZE                                   3
#define AVR32_ADCIFA_SHG0_GCNV2                                        8
#define AVR32_ADCIFA_SHG0_GCNV2_MASK                          0x00000700
#define AVR32_ADCIFA_SHG0_GCNV2_OFFSET                                 8
#define AVR32_ADCIFA_SHG0_GCNV2_SIZE                                   3
#define AVR32_ADCIFA_SHG0_GCNV3                                       12
#define AVR32_ADCIFA_SHG0_GCNV3_MASK                          0x00007000
#define AVR32_ADCIFA_SHG0_GCNV3_OFFSET                                12
#define AVR32_ADCIFA_SHG0_GCNV3_SIZE                                   3
#define AVR32_ADCIFA_SHG0_GCNV4                                       16
#define AVR32_ADCIFA_SHG0_GCNV4_MASK                          0x00070000
#define AVR32_ADCIFA_SHG0_GCNV4_OFFSET                                16
#define AVR32_ADCIFA_SHG0_GCNV4_SIZE                                   3
#define AVR32_ADCIFA_SHG0_GCNV5                                       20
#define AVR32_ADCIFA_SHG0_GCNV5_MASK                          0x00700000
#define AVR32_ADCIFA_SHG0_GCNV5_OFFSET                                20
#define AVR32_ADCIFA_SHG0_GCNV5_SIZE                                   3
#define AVR32_ADCIFA_SHG0_GCNV6                                       24
#define AVR32_ADCIFA_SHG0_GCNV6_MASK                          0x07000000
#define AVR32_ADCIFA_SHG0_GCNV6_OFFSET                                24
#define AVR32_ADCIFA_SHG0_GCNV6_SIZE                                   3
#define AVR32_ADCIFA_SHG0_GCNV7                                       28
#define AVR32_ADCIFA_SHG0_GCNV7_MASK                          0x70000000
#define AVR32_ADCIFA_SHG0_GCNV7_OFFSET                                28
#define AVR32_ADCIFA_SHG0_GCNV7_SIZE                                   3
#define AVR32_ADCIFA_SHG0_MASK                                0x77777777
#define AVR32_ADCIFA_SHG0_RESETVALUE                          0x00000000
#define AVR32_ADCIFA_SHG1                                     0x00000020
#define AVR32_ADCIFA_SHG1_GCNV0                                        0
#define AVR32_ADCIFA_SHG1_GCNV0_MASK                          0x00000007
#define AVR32_ADCIFA_SHG1_GCNV0_OFFSET                                 0
#define AVR32_ADCIFA_SHG1_GCNV0_SIZE                                   3
#define AVR32_ADCIFA_SHG1_GCNV1                                        4
#define AVR32_ADCIFA_SHG1_GCNV1_MASK                          0x00000070
#define AVR32_ADCIFA_SHG1_GCNV1_OFFSET                                 4
#define AVR32_ADCIFA_SHG1_GCNV1_SIZE                                   3
#define AVR32_ADCIFA_SHG1_GCNV2                                        8
#define AVR32_ADCIFA_SHG1_GCNV2_MASK                          0x00000700
#define AVR32_ADCIFA_SHG1_GCNV2_OFFSET                                 8
#define AVR32_ADCIFA_SHG1_GCNV2_SIZE                                   3
#define AVR32_ADCIFA_SHG1_GCNV3                                       12
#define AVR32_ADCIFA_SHG1_GCNV3_MASK                          0x00007000
#define AVR32_ADCIFA_SHG1_GCNV3_OFFSET                                12
#define AVR32_ADCIFA_SHG1_GCNV3_SIZE                                   3
#define AVR32_ADCIFA_SHG1_GCNV4                                       16
#define AVR32_ADCIFA_SHG1_GCNV4_MASK                          0x00070000
#define AVR32_ADCIFA_SHG1_GCNV4_OFFSET                                16
#define AVR32_ADCIFA_SHG1_GCNV4_SIZE                                   3
#define AVR32_ADCIFA_SHG1_GCNV5                                       20
#define AVR32_ADCIFA_SHG1_GCNV5_MASK                          0x00700000
#define AVR32_ADCIFA_SHG1_GCNV5_OFFSET                                20
#define AVR32_ADCIFA_SHG1_GCNV5_SIZE                                   3
#define AVR32_ADCIFA_SHG1_GCNV6                                       24
#define AVR32_ADCIFA_SHG1_GCNV6_MASK                          0x07000000
#define AVR32_ADCIFA_SHG1_GCNV6_OFFSET                                24
#define AVR32_ADCIFA_SHG1_GCNV6_SIZE                                   3
#define AVR32_ADCIFA_SHG1_GCNV7                                       28
#define AVR32_ADCIFA_SHG1_GCNV7_MASK                          0x70000000
#define AVR32_ADCIFA_SHG1_GCNV7_OFFSET                                28
#define AVR32_ADCIFA_SHG1_GCNV7_SIZE                                   3
#define AVR32_ADCIFA_SHG1_MASK                                0x77777777
#define AVR32_ADCIFA_SHG1_RESETVALUE                          0x00000000
#define AVR32_ADCIFA_SLEEP                                             2
#define AVR32_ADCIFA_SLEEP_MASK                               0x00000004
#define AVR32_ADCIFA_SLEEP_OFFSET                                      2
#define AVR32_ADCIFA_SLEEP_SIZE                                        1
#define AVR32_ADCIFA_SOC0                                              0
#define AVR32_ADCIFA_SOC0_MASK                                0x00000001
#define AVR32_ADCIFA_SOC0_OFFSET                                       0
#define AVR32_ADCIFA_SOC0_SIZE                                         1
#define AVR32_ADCIFA_SOC1                                              1
#define AVR32_ADCIFA_SOC1_MASK                                0x00000002
#define AVR32_ADCIFA_SOC1_OFFSET                                       1
#define AVR32_ADCIFA_SOC1_SIZE                                         1
#define AVR32_ADCIFA_SOCB                                              2
#define AVR32_ADCIFA_SOCB_MASK                                0x00000004
#define AVR32_ADCIFA_SOCB_OFFSET                                       2
#define AVR32_ADCIFA_SOCB_SIZE                                         1
#define AVR32_ADCIFA_SR                                       0x00000008
#define AVR32_ADCIFA_SRC                                              27
#define AVR32_ADCIFA_SRC_MASK                                 0x78000000
#define AVR32_ADCIFA_SRC_OFFSET                                       27
#define AVR32_ADCIFA_SRC_SIZE                                          4
#define AVR32_ADCIFA_SRES                                             12
#define AVR32_ADCIFA_SRES_MASK                                0x00003000
#define AVR32_ADCIFA_SRES_OFFSET                                      12
#define AVR32_ADCIFA_SRES_SIZE                                         2
#define AVR32_ADCIFA_SR_AWUP                                          31
#define AVR32_ADCIFA_SR_AWUP_MASK                             0x80000000
#define AVR32_ADCIFA_SR_AWUP_OFFSET                                   31
#define AVR32_ADCIFA_SR_AWUP_SIZE                                      1
#define AVR32_ADCIFA_SR_LOVR0                                          3
#define AVR32_ADCIFA_SR_LOVR0_MASK                            0x00000008
#define AVR32_ADCIFA_SR_LOVR0_OFFSET                                   3
#define AVR32_ADCIFA_SR_LOVR0_SIZE                                     1
#define AVR32_ADCIFA_SR_LOVR1                                          7
#define AVR32_ADCIFA_SR_LOVR1_MASK                            0x00000080
#define AVR32_ADCIFA_SR_LOVR1_OFFSET                                   7
#define AVR32_ADCIFA_SR_LOVR1_SIZE                                     1
#define AVR32_ADCIFA_SR_MASK                                  0x8f0fffff
#define AVR32_ADCIFA_SR_MSOC0                                         12
#define AVR32_ADCIFA_SR_MSOC0_MASK                            0x00001000
#define AVR32_ADCIFA_SR_MSOC0_OFFSET                                  12
#define AVR32_ADCIFA_SR_MSOC0_SIZE                                     1
#define AVR32_ADCIFA_SR_MSOC1                                         13
#define AVR32_ADCIFA_SR_MSOC1_MASK                            0x00002000
#define AVR32_ADCIFA_SR_MSOC1_OFFSET                                  13
#define AVR32_ADCIFA_SR_MSOC1_SIZE                                     1
#define AVR32_ADCIFA_SR_OVR0                                           2
#define AVR32_ADCIFA_SR_OVR0_MASK                             0x00000004
#define AVR32_ADCIFA_SR_OVR0_OFFSET                                    2
#define AVR32_ADCIFA_SR_OVR0_SIZE                                      1
#define AVR32_ADCIFA_SR_OVR1                                           6
#define AVR32_ADCIFA_SR_OVR1_MASK                             0x00000040
#define AVR32_ADCIFA_SR_OVR1_OFFSET                                    6
#define AVR32_ADCIFA_SR_OVR1_SIZE                                      1
#define AVR32_ADCIFA_SR_PCNT                                           9
#define AVR32_ADCIFA_SR_PCNT_MASK                             0x00000200
#define AVR32_ADCIFA_SR_PCNT_OFFSET                                    9
#define AVR32_ADCIFA_SR_PCNT_SIZE                                      1
#define AVR32_ADCIFA_SR_PLOSS                                          8
#define AVR32_ADCIFA_SR_PLOSS_MASK                            0x00000100
#define AVR32_ADCIFA_SR_PLOSS_OFFSET                                   8
#define AVR32_ADCIFA_SR_PLOSS_SIZE                                     1
#define AVR32_ADCIFA_SR_RESETVALUE                            0x00000000
#define AVR32_ADCIFA_SR_RUNT                                          15
#define AVR32_ADCIFA_SR_RUNT_MASK                             0x00008000
#define AVR32_ADCIFA_SR_RUNT_OFFSET                                   15
#define AVR32_ADCIFA_SR_RUNT_SIZE                                      1
#define AVR32_ADCIFA_SR_SEOC0                                          1
#define AVR32_ADCIFA_SR_SEOC0_MASK                            0x00000002
#define AVR32_ADCIFA_SR_SEOC0_OFFSET                                   1
#define AVR32_ADCIFA_SR_SEOC0_SIZE                                     1
#define AVR32_ADCIFA_SR_SEOC1                                          5
#define AVR32_ADCIFA_SR_SEOC1_MASK                            0x00000020
#define AVR32_ADCIFA_SR_SEOC1_OFFSET                                   5
#define AVR32_ADCIFA_SR_SEOC1_SIZE                                     1
#define AVR32_ADCIFA_SR_SEOS0                                          0
#define AVR32_ADCIFA_SR_SEOS0_MASK                            0x00000001
#define AVR32_ADCIFA_SR_SEOS0_OFFSET                                   0
#define AVR32_ADCIFA_SR_SEOS0_SIZE                                     1
#define AVR32_ADCIFA_SR_SEOS1                                          4
#define AVR32_ADCIFA_SR_SEOS1_MASK                            0x00000010
#define AVR32_ADCIFA_SR_SEOS1_OFFSET                                   4
#define AVR32_ADCIFA_SR_SEOS1_SIZE                                     1
#define AVR32_ADCIFA_SR_STATE0                                        16
#define AVR32_ADCIFA_SR_STATE0_MASK                           0x000f0000
#define AVR32_ADCIFA_SR_STATE0_OFFSET                                 16
#define AVR32_ADCIFA_SR_STATE0_SIZE                                    4
#define AVR32_ADCIFA_SR_STATE1                                        24
#define AVR32_ADCIFA_SR_STATE1_MASK                           0x0f000000
#define AVR32_ADCIFA_SR_STATE1_OFFSET                                 24
#define AVR32_ADCIFA_SR_STATE1_SIZE                                    4
#define AVR32_ADCIFA_SR_SUTD                                          14
#define AVR32_ADCIFA_SR_SUTD_MASK                             0x00004000
#define AVR32_ADCIFA_SR_SUTD_OFFSET                                   14
#define AVR32_ADCIFA_SR_SUTD_SIZE                                      1
#define AVR32_ADCIFA_SR_WM0                                           10
#define AVR32_ADCIFA_SR_WM0_MASK                              0x00000400
#define AVR32_ADCIFA_SR_WM0_OFFSET                                    10
#define AVR32_ADCIFA_SR_WM0_SIZE                                       1
#define AVR32_ADCIFA_SR_WM1                                           11
#define AVR32_ADCIFA_SR_WM1_MASK                              0x00000800
#define AVR32_ADCIFA_SR_WM1_OFFSET                                    11
#define AVR32_ADCIFA_SR_WM1_SIZE                                       1
#define AVR32_ADCIFA_SSMQ                                              3
#define AVR32_ADCIFA_SSMQ_MASK                                0x00000008
#define AVR32_ADCIFA_SSMQ_OFFSET                                       3
#define AVR32_ADCIFA_SSMQ_SIZE                                         1
#define AVR32_ADCIFA_SSR                                      0x00000010
#define AVR32_ADCIFA_SSR_AWUP                                         31
#define AVR32_ADCIFA_SSR_AWUP_MASK                            0x80000000
#define AVR32_ADCIFA_SSR_AWUP_OFFSET                                  31
#define AVR32_ADCIFA_SSR_AWUP_SIZE                                     1
#define AVR32_ADCIFA_SSR_LOVR0                                         3
#define AVR32_ADCIFA_SSR_LOVR0_MASK                           0x00000008
#define AVR32_ADCIFA_SSR_LOVR0_OFFSET                                  3
#define AVR32_ADCIFA_SSR_LOVR0_SIZE                                    1
#define AVR32_ADCIFA_SSR_LOVR1                                         7
#define AVR32_ADCIFA_SSR_LOVR1_MASK                           0x00000080
#define AVR32_ADCIFA_SSR_LOVR1_OFFSET                                  7
#define AVR32_ADCIFA_SSR_LOVR1_SIZE                                    1
#define AVR32_ADCIFA_SSR_MASK                                 0x80007fff
#define AVR32_ADCIFA_SSR_MSOC0                                        12
#define AVR32_ADCIFA_SSR_MSOC0_MASK                           0x00001000
#define AVR32_ADCIFA_SSR_MSOC0_OFFSET                                 12
#define AVR32_ADCIFA_SSR_MSOC0_SIZE                                    1
#define AVR32_ADCIFA_SSR_MSOC1                                        13
#define AVR32_ADCIFA_SSR_MSOC1_MASK                           0x00002000
#define AVR32_ADCIFA_SSR_MSOC1_OFFSET                                 13
#define AVR32_ADCIFA_SSR_MSOC1_SIZE                                    1
#define AVR32_ADCIFA_SSR_OVR0                                          2
#define AVR32_ADCIFA_SSR_OVR0_MASK                            0x00000004
#define AVR32_ADCIFA_SSR_OVR0_OFFSET                                   2
#define AVR32_ADCIFA_SSR_OVR0_SIZE                                     1
#define AVR32_ADCIFA_SSR_OVR1                                          6
#define AVR32_ADCIFA_SSR_OVR1_MASK                            0x00000040
#define AVR32_ADCIFA_SSR_OVR1_OFFSET                                   6
#define AVR32_ADCIFA_SSR_OVR1_SIZE                                     1
#define AVR32_ADCIFA_SSR_PCNT                                          9
#define AVR32_ADCIFA_SSR_PCNT_MASK                            0x00000200
#define AVR32_ADCIFA_SSR_PCNT_OFFSET                                   9
#define AVR32_ADCIFA_SSR_PCNT_SIZE                                     1
#define AVR32_ADCIFA_SSR_PLOSS                                         8
#define AVR32_ADCIFA_SSR_PLOSS_MASK                           0x00000100
#define AVR32_ADCIFA_SSR_PLOSS_OFFSET                                  8
#define AVR32_ADCIFA_SSR_PLOSS_SIZE                                    1
#define AVR32_ADCIFA_SSR_RESETVALUE                           0x00000000
#define AVR32_ADCIFA_SSR_SEOC0                                         1
#define AVR32_ADCIFA_SSR_SEOC0_MASK                           0x00000002
#define AVR32_ADCIFA_SSR_SEOC0_OFFSET                                  1
#define AVR32_ADCIFA_SSR_SEOC0_SIZE                                    1
#define AVR32_ADCIFA_SSR_SEOC1                                         5
#define AVR32_ADCIFA_SSR_SEOC1_MASK                           0x00000020
#define AVR32_ADCIFA_SSR_SEOC1_OFFSET                                  5
#define AVR32_ADCIFA_SSR_SEOC1_SIZE                                    1
#define AVR32_ADCIFA_SSR_SEOS0                                         0
#define AVR32_ADCIFA_SSR_SEOS0_MASK                           0x00000001
#define AVR32_ADCIFA_SSR_SEOS0_OFFSET                                  0
#define AVR32_ADCIFA_SSR_SEOS0_SIZE                                    1
#define AVR32_ADCIFA_SSR_SEOS1                                         4
#define AVR32_ADCIFA_SSR_SEOS1_MASK                           0x00000010
#define AVR32_ADCIFA_SSR_SEOS1_OFFSET                                  4
#define AVR32_ADCIFA_SSR_SEOS1_SIZE                                    1
#define AVR32_ADCIFA_SSR_SUTD                                         14
#define AVR32_ADCIFA_SSR_SUTD_MASK                            0x00004000
#define AVR32_ADCIFA_SSR_SUTD_OFFSET                                  14
#define AVR32_ADCIFA_SSR_SUTD_SIZE                                     1
#define AVR32_ADCIFA_SSR_WM0                                          10
#define AVR32_ADCIFA_SSR_WM0_MASK                             0x00000400
#define AVR32_ADCIFA_SSR_WM0_OFFSET                                   10
#define AVR32_ADCIFA_SSR_WM0_SIZE                                      1
#define AVR32_ADCIFA_SSR_WM1                                          11
#define AVR32_ADCIFA_SSR_WM1_MASK                             0x00000800
#define AVR32_ADCIFA_SSR_WM1_OFFSET                                   11
#define AVR32_ADCIFA_SSR_WM1_SIZE                                      1
#define AVR32_ADCIFA_STATE0                                           16
#define AVR32_ADCIFA_STATE0_MASK                              0x000f0000
#define AVR32_ADCIFA_STATE0_OFFSET                                    16
#define AVR32_ADCIFA_STATE0_SIZE                                       4
#define AVR32_ADCIFA_STATE1                                           24
#define AVR32_ADCIFA_STATE1_MASK                              0x0f000000
#define AVR32_ADCIFA_STATE1_OFFSET                                    24
#define AVR32_ADCIFA_STATE1_SIZE                                       4
#define AVR32_ADCIFA_STM                                               4
#define AVR32_ADCIFA_STM_MASK                                 0x000000f0
#define AVR32_ADCIFA_STM_OFFSET                                        4
#define AVR32_ADCIFA_STM_SIZE                                          4
#define AVR32_ADCIFA_SUT                                              16
#define AVR32_ADCIFA_SUTD                                             14
#define AVR32_ADCIFA_SUTD_MASK                                0x00004000
#define AVR32_ADCIFA_SUTD_OFFSET                                      14
#define AVR32_ADCIFA_SUTD_SIZE                                         1
#define AVR32_ADCIFA_SUT_MASK                                 0x003f0000
#define AVR32_ADCIFA_SUT_OFFSET                                       16
#define AVR32_ADCIFA_SUT_SIZE                                          6
#define AVR32_ADCIFA_SW0                                               0
#define AVR32_ADCIFA_SW0_MASK                                 0x0000000f
#define AVR32_ADCIFA_SW0_OFFSET                                        0
#define AVR32_ADCIFA_SW0_SIZE                                          4
#define AVR32_ADCIFA_SW1                                               8
#define AVR32_ADCIFA_SW1_MASK                                 0x00000f00
#define AVR32_ADCIFA_SW1_OFFSET                                        8
#define AVR32_ADCIFA_SW1_SIZE                                          4
#define AVR32_ADCIFA_SW2                                              16
#define AVR32_ADCIFA_SW2_MASK                                 0x000f0000
#define AVR32_ADCIFA_SW2_OFFSET                                       16
#define AVR32_ADCIFA_SW2_SIZE                                          4
#define AVR32_ADCIFA_SW3                                              24
#define AVR32_ADCIFA_SW3_MASK                                 0x0f000000
#define AVR32_ADCIFA_SW3_OFFSET                                       24
#define AVR32_ADCIFA_SW3_SIZE                                          4
#define AVR32_ADCIFA_TRGSEL                                            8
#define AVR32_ADCIFA_TRGSEL_MASK                              0x00000300
#define AVR32_ADCIFA_TRGSEL_OFFSET                                     8
#define AVR32_ADCIFA_TRGSEL_SIZE                                       2
#define AVR32_ADCIFA_TSEN                                              1
#define AVR32_ADCIFA_TSEN_MASK                                0x00000002
#define AVR32_ADCIFA_TSEN_OFFSET                                       1
#define AVR32_ADCIFA_TSEN_SIZE                                         1
#define AVR32_ADCIFA_TSSCFG                                   0x0000004c
#define AVR32_ADCIFA_TSSCFG_MASK                              0x00003fff
#define AVR32_ADCIFA_TSSCFG_PDPSW                                     11
#define AVR32_ADCIFA_TSSCFG_PDPSW_MASK                        0x00003800
#define AVR32_ADCIFA_TSSCFG_PDPSW_OFFSET                              11
#define AVR32_ADCIFA_TSSCFG_PDPSW_SIZE                                 3
#define AVR32_ADCIFA_TSSCFG_PENDBC                                     0
#define AVR32_ADCIFA_TSSCFG_PENDBC_MASK                       0x0000000f
#define AVR32_ADCIFA_TSSCFG_PENDBC_OFFSET                              0
#define AVR32_ADCIFA_TSSCFG_PENDBC_SIZE                                4
#define AVR32_ADCIFA_TSSCFG_PENDT                                     10
#define AVR32_ADCIFA_TSSCFG_PENDT_MASK                        0x00000400
#define AVR32_ADCIFA_TSSCFG_PENDT_OFFSET                              10
#define AVR32_ADCIFA_TSSCFG_PENDT_SIZE                                 1
#define AVR32_ADCIFA_TSSCFG_RESETVALUE                        0x00000000
#define AVR32_ADCIFA_TSSCFG_STM                                        4
#define AVR32_ADCIFA_TSSCFG_STM_MASK                          0x000000f0
#define AVR32_ADCIFA_TSSCFG_STM_OFFSET                                 4
#define AVR32_ADCIFA_TSSCFG_STM_SIZE                                   4
#define AVR32_ADCIFA_TSSCFG_TRGSEL                                     8
#define AVR32_ADCIFA_TSSCFG_TRGSEL_MASK                       0x00000300
#define AVR32_ADCIFA_TSSCFG_TRGSEL_OFFSET                              8
#define AVR32_ADCIFA_TSSCFG_TRGSEL_SIZE                                2
#define AVR32_ADCIFA_TSSWSEQ0                                 0x00000050
#define AVR32_ADCIFA_TSSWSEQ0_MASK                            0x0f0f0f0f
#define AVR32_ADCIFA_TSSWSEQ0_RESETVALUE                      0x00000000
#define AVR32_ADCIFA_TSSWSEQ0_SW0                                      0
#define AVR32_ADCIFA_TSSWSEQ0_SW0_MASK                        0x0000000f
#define AVR32_ADCIFA_TSSWSEQ0_SW0_OFFSET                               0
#define AVR32_ADCIFA_TSSWSEQ0_SW0_SIZE                                 4
#define AVR32_ADCIFA_TSSWSEQ0_SW1                                      8
#define AVR32_ADCIFA_TSSWSEQ0_SW1_MASK                        0x00000f00
#define AVR32_ADCIFA_TSSWSEQ0_SW1_OFFSET                               8
#define AVR32_ADCIFA_TSSWSEQ0_SW1_SIZE                                 4
#define AVR32_ADCIFA_TSSWSEQ0_SW2                                     16
#define AVR32_ADCIFA_TSSWSEQ0_SW2_MASK                        0x000f0000
#define AVR32_ADCIFA_TSSWSEQ0_SW2_OFFSET                              16
#define AVR32_ADCIFA_TSSWSEQ0_SW2_SIZE                                 4
#define AVR32_ADCIFA_TSSWSEQ0_SW3                                     24
#define AVR32_ADCIFA_TSSWSEQ0_SW3_MASK                        0x0f000000
#define AVR32_ADCIFA_TSSWSEQ0_SW3_OFFSET                              24
#define AVR32_ADCIFA_TSSWSEQ0_SW3_SIZE                                 4
#define AVR32_ADCIFA_TSSWSEQ1                                 0x00000054
#define AVR32_ADCIFA_TSSWSEQ1_MASK                            0x0f0f0f0f
#define AVR32_ADCIFA_TSSWSEQ1_RESETVALUE                      0x00000000
#define AVR32_ADCIFA_TSSWSEQ1_SW0                                      0
#define AVR32_ADCIFA_TSSWSEQ1_SW0_MASK                        0x0000000f
#define AVR32_ADCIFA_TSSWSEQ1_SW0_OFFSET                               0
#define AVR32_ADCIFA_TSSWSEQ1_SW0_SIZE                                 4
#define AVR32_ADCIFA_TSSWSEQ1_SW1                                      8
#define AVR32_ADCIFA_TSSWSEQ1_SW1_MASK                        0x00000f00
#define AVR32_ADCIFA_TSSWSEQ1_SW1_OFFSET                               8
#define AVR32_ADCIFA_TSSWSEQ1_SW1_SIZE                                 4
#define AVR32_ADCIFA_TSSWSEQ1_SW2                                     16
#define AVR32_ADCIFA_TSSWSEQ1_SW2_MASK                        0x000f0000
#define AVR32_ADCIFA_TSSWSEQ1_SW2_OFFSET                              16
#define AVR32_ADCIFA_TSSWSEQ1_SW2_SIZE                                 4
#define AVR32_ADCIFA_TSSWSEQ1_SW3                                     24
#define AVR32_ADCIFA_TSSWSEQ1_SW3_MASK                        0x0f000000
#define AVR32_ADCIFA_TSSWSEQ1_SW3_OFFSET                              24
#define AVR32_ADCIFA_TSSWSEQ1_SW3_SIZE                                 4
#define AVR32_ADCIFA_TSTART                                            3
#define AVR32_ADCIFA_TSTART_MASK                              0x00000008
#define AVR32_ADCIFA_TSTART_OFFSET                                     3
#define AVR32_ADCIFA_TSTART_SIZE                                       1
#define AVR32_ADCIFA_TSTOP                                             2
#define AVR32_ADCIFA_TSTOP_MASK                               0x00000004
#define AVR32_ADCIFA_TSTOP_OFFSET                                      2
#define AVR32_ADCIFA_TSTOP_SIZE                                        1
#define AVR32_ADCIFA_VARIANT                                          16
#define AVR32_ADCIFA_VARIANT_MASK                             0x000f0000
#define AVR32_ADCIFA_VARIANT_OFFSET                                   16
#define AVR32_ADCIFA_VARIANT_SIZE                                      4
#define AVR32_ADCIFA_VERSION                                  0x0000007c
#define AVR32_ADCIFA_VERSION_MASK                             0x000f0fff
#define AVR32_ADCIFA_VERSION_OFFSET                                    0
#define AVR32_ADCIFA_VERSION_RESETVALUE                       0x00000110
#define AVR32_ADCIFA_VERSION_SIZE                                     12
#define AVR32_ADCIFA_VERSION_VARIANT                                  16
#define AVR32_ADCIFA_VERSION_VARIANT_MASK                     0x000f0000
#define AVR32_ADCIFA_VERSION_VARIANT_OFFSET                           16
#define AVR32_ADCIFA_VERSION_VARIANT_SIZE                              4
#define AVR32_ADCIFA_VERSION_VERSION                                   0
#define AVR32_ADCIFA_VERSION_VERSION_MASK                     0x00000fff
#define AVR32_ADCIFA_VERSION_VERSION_OFFSET                            0
#define AVR32_ADCIFA_VERSION_VERSION_SIZE                             12
#define AVR32_ADCIFA_WCFG0                                    0x00000058
#define AVR32_ADCIFA_WCFG0_HT                                         12
#define AVR32_ADCIFA_WCFG0_HT_MASK                            0x00fff000
#define AVR32_ADCIFA_WCFG0_HT_OFFSET                                  12
#define AVR32_ADCIFA_WCFG0_HT_SIZE                                    12
#define AVR32_ADCIFA_WCFG0_LT                                          0
#define AVR32_ADCIFA_WCFG0_LT_MASK                            0x00000fff
#define AVR32_ADCIFA_WCFG0_LT_OFFSET                                   0
#define AVR32_ADCIFA_WCFG0_LT_SIZE                                    12
#define AVR32_ADCIFA_WCFG0_MASK                               0x7fffffff
#define AVR32_ADCIFA_WCFG0_RESETVALUE                         0x00000000
#define AVR32_ADCIFA_WCFG0_SRC                                        27
#define AVR32_ADCIFA_WCFG0_SRC_MASK                           0x78000000
#define AVR32_ADCIFA_WCFG0_SRC_OFFSET                                 27
#define AVR32_ADCIFA_WCFG0_SRC_SIZE                                    4
#define AVR32_ADCIFA_WCFG0_WM                                         24
#define AVR32_ADCIFA_WCFG0_WM_MASK                            0x07000000
#define AVR32_ADCIFA_WCFG0_WM_OFFSET                                  24
#define AVR32_ADCIFA_WCFG0_WM_SIZE                                     3
#define AVR32_ADCIFA_WCFG1                                    0x0000005c
#define AVR32_ADCIFA_WCFG1_HT                                         12
#define AVR32_ADCIFA_WCFG1_HT_MASK                            0x00fff000
#define AVR32_ADCIFA_WCFG1_HT_OFFSET                                  12
#define AVR32_ADCIFA_WCFG1_HT_SIZE                                    12
#define AVR32_ADCIFA_WCFG1_LT                                          0
#define AVR32_ADCIFA_WCFG1_LT_MASK                            0x00000fff
#define AVR32_ADCIFA_WCFG1_LT_OFFSET                                   0
#define AVR32_ADCIFA_WCFG1_LT_SIZE                                    12
#define AVR32_ADCIFA_WCFG1_MASK                               0x7fffffff
#define AVR32_ADCIFA_WCFG1_RESETVALUE                         0x00000000
#define AVR32_ADCIFA_WCFG1_SRC                                        27
#define AVR32_ADCIFA_WCFG1_SRC_MASK                           0x78000000
#define AVR32_ADCIFA_WCFG1_SRC_OFFSET                                 27
#define AVR32_ADCIFA_WCFG1_SRC_SIZE                                    4
#define AVR32_ADCIFA_WCFG1_WM                                         24
#define AVR32_ADCIFA_WCFG1_WM_MASK                            0x07000000
#define AVR32_ADCIFA_WCFG1_WM_OFFSET                                  24
#define AVR32_ADCIFA_WCFG1_WM_SIZE                                     3
#define AVR32_ADCIFA_WM                                               24
#define AVR32_ADCIFA_WM0                                              10
#define AVR32_ADCIFA_WM0_MASK                                 0x00000400
#define AVR32_ADCIFA_WM0_OFFSET                                       10
#define AVR32_ADCIFA_WM0_SIZE                                          1
#define AVR32_ADCIFA_WM1                                              11
#define AVR32_ADCIFA_WM1_MASK                                 0x00000800
#define AVR32_ADCIFA_WM1_OFFSET                                       11
#define AVR32_ADCIFA_WM1_SIZE                                          1
#define AVR32_ADCIFA_WM_MASK                                  0x07000000
#define AVR32_ADCIFA_WM_OFFSET                                        24
#define AVR32_ADCIFA_WM_SIZE                                           3




#ifdef __AVR32_ABI_COMPILER__


typedef struct avr32_adcifa_cr_t {
    unsigned int                 :28;
    unsigned int tstart          : 1;
    unsigned int tstop           : 1;
    unsigned int soc1            : 1;
    unsigned int soc0            : 1;
} avr32_adcifa_cr_t;



typedef struct avr32_adcifa_cfg_t {
    unsigned int                 :10;
    unsigned int sut             : 6;
    unsigned int                 : 5;
    unsigned int muxset          : 1;
    unsigned int exref           : 1;
    unsigned int awke            : 1;
    unsigned int shd             : 1;
    unsigned int rs              : 2;
    unsigned int frm             : 1;
    unsigned int ssmq            : 1;
    unsigned int sleep           : 1;
    unsigned int tsen            : 1;
    unsigned int adcen           : 1;
} avr32_adcifa_cfg_t;



typedef struct avr32_adcifa_sr_t {
    unsigned int awup            : 1;
    unsigned int                 : 3;
    unsigned int state1          : 4;
    unsigned int                 : 4;
    unsigned int state0          : 4;
    unsigned int runt            : 1;
    unsigned int sutd            : 1;
    unsigned int msoc1           : 1;
    unsigned int msoc0           : 1;
    unsigned int wm1             : 1;
    unsigned int wm0             : 1;
    unsigned int pcnt            : 1;
    unsigned int ploss           : 1;
    unsigned int lovr1           : 1;
    unsigned int ovr1            : 1;
    unsigned int seoc1           : 1;
    unsigned int seos1           : 1;
    unsigned int lovr0           : 1;
    unsigned int ovr0            : 1;
    unsigned int seoc0           : 1;
    unsigned int seos0           : 1;
} avr32_adcifa_sr_t;



typedef struct avr32_adcifa_scr_t {
    unsigned int awup            : 1;
    unsigned int                 :16;
    unsigned int sutd            : 1;
    unsigned int msoc1           : 1;
    unsigned int msoc0           : 1;
    unsigned int wm1             : 1;
    unsigned int wm0             : 1;
    unsigned int pcnt            : 1;
    unsigned int ploss           : 1;
    unsigned int lovr1           : 1;
    unsigned int ovr1            : 1;
    unsigned int seoc1           : 1;
    unsigned int seos1           : 1;
    unsigned int lovr0           : 1;
    unsigned int ovr0            : 1;
    unsigned int seoc0           : 1;
    unsigned int seos0           : 1;
} avr32_adcifa_scr_t;



typedef struct avr32_adcifa_ssr_t {
    unsigned int awup            : 1;
    unsigned int                 :16;
    unsigned int sutd            : 1;
    unsigned int msoc1           : 1;
    unsigned int msoc0           : 1;
    unsigned int wm1             : 1;
    unsigned int wm0             : 1;
    unsigned int pcnt            : 1;
    unsigned int ploss           : 1;
    unsigned int lovr1           : 1;
    unsigned int ovr1            : 1;
    unsigned int seoc1           : 1;
    unsigned int seos1           : 1;
    unsigned int lovr0           : 1;
    unsigned int ovr0            : 1;
    unsigned int seoc0           : 1;
    unsigned int seos0           : 1;
} avr32_adcifa_ssr_t;



typedef struct avr32_adcifa_seqcfg0_t {
    unsigned int                 :12;
    unsigned int cnvnb           : 4;
    unsigned int                 : 2;
    unsigned int sres            : 2;
    unsigned int                 : 2;
    unsigned int trgsel          : 2;
    unsigned int                 : 3;
    unsigned int shdyn           : 1;
    unsigned int ovsx2           : 1;
    unsigned int socb            : 1;
    unsigned int hwla            : 1;
    unsigned int sa              : 1;
} avr32_adcifa_seqcfg0_t;



typedef struct avr32_adcifa_seqcfg1_t {
    unsigned int                 :12;
    unsigned int cnvnb           : 4;
    unsigned int                 : 2;
    unsigned int sres            : 2;
    unsigned int                 : 2;
    unsigned int trgsel          : 2;
    unsigned int                 : 3;
    unsigned int shdyn           : 1;
    unsigned int ovsx2           : 1;
    unsigned int socb            : 1;
    unsigned int hwla            : 1;
    unsigned int sa              : 1;
} avr32_adcifa_seqcfg1_t;



typedef struct avr32_adcifa_shg0_t {
    unsigned int                 : 1;
    unsigned int gcnv7           : 3;
    unsigned int                 : 1;
    unsigned int gcnv6           : 3;
    unsigned int                 : 1;
    unsigned int gcnv5           : 3;
    unsigned int                 : 1;
    unsigned int gcnv4           : 3;
    unsigned int                 : 1;
    unsigned int gcnv3           : 3;
    unsigned int                 : 1;
    unsigned int gcnv2           : 3;
    unsigned int                 : 1;
    unsigned int gcnv1           : 3;
    unsigned int                 : 1;
    unsigned int gcnv0           : 3;
} avr32_adcifa_shg0_t;



typedef struct avr32_adcifa_shg1_t {
    unsigned int                 : 1;
    unsigned int gcnv7           : 3;
    unsigned int                 : 1;
    unsigned int gcnv6           : 3;
    unsigned int                 : 1;
    unsigned int gcnv5           : 3;
    unsigned int                 : 1;
    unsigned int gcnv4           : 3;
    unsigned int                 : 1;
    unsigned int gcnv3           : 3;
    unsigned int                 : 1;
    unsigned int gcnv2           : 3;
    unsigned int                 : 1;
    unsigned int gcnv1           : 3;
    unsigned int                 : 1;
    unsigned int gcnv0           : 3;
} avr32_adcifa_shg1_t;



typedef struct avr32_adcifa_inpsel00_t {
    unsigned int                 : 4;
    unsigned int cnv3            : 4;
    unsigned int                 : 4;
    unsigned int cnv2            : 4;
    unsigned int                 : 4;
    unsigned int cnv1            : 4;
    unsigned int                 : 4;
    unsigned int cnv0            : 4;
} avr32_adcifa_inpsel00_t;



typedef struct avr32_adcifa_inpsel01_t {
    unsigned int                 : 4;
    unsigned int cnv3            : 4;
    unsigned int                 : 4;
    unsigned int cnv2            : 4;
    unsigned int                 : 4;
    unsigned int cnv1            : 4;
    unsigned int                 : 4;
    unsigned int cnv0            : 4;
} avr32_adcifa_inpsel01_t;



typedef struct avr32_adcifa_inpsel10_t {
    unsigned int                 : 4;
    unsigned int cnv7            : 4;
    unsigned int                 : 4;
    unsigned int cnv6            : 4;
    unsigned int                 : 4;
    unsigned int cnv5            : 4;
    unsigned int                 : 4;
    unsigned int cnv4            : 4;
} avr32_adcifa_inpsel10_t;



typedef struct avr32_adcifa_inpsel11_t {
    unsigned int                 : 4;
    unsigned int cnv7            : 4;
    unsigned int                 : 4;
    unsigned int cnv6            : 4;
    unsigned int                 : 4;
    unsigned int cnv5            : 4;
    unsigned int                 : 4;
    unsigned int cnv4            : 4;
} avr32_adcifa_inpsel11_t;



typedef struct avr32_adcifa_innsel00_t {
    unsigned int                 : 4;
    unsigned int cnv3            : 4;
    unsigned int                 : 4;
    unsigned int cnv2            : 4;
    unsigned int                 : 4;
    unsigned int cnv1            : 4;
    unsigned int                 : 4;
    unsigned int cnv0            : 4;
} avr32_adcifa_innsel00_t;



typedef struct avr32_adcifa_innsel01_t {
    unsigned int                 : 4;
    unsigned int cnv3            : 4;
    unsigned int                 : 4;
    unsigned int cnv2            : 4;
    unsigned int                 : 4;
    unsigned int cnv1            : 4;
    unsigned int                 : 4;
    unsigned int cnv0            : 4;
} avr32_adcifa_innsel01_t;



typedef struct avr32_adcifa_innsel10_t {
    unsigned int                 : 4;
    unsigned int cnv7            : 4;
    unsigned int                 : 4;
    unsigned int cnv6            : 4;
    unsigned int                 : 4;
    unsigned int cnv5            : 4;
    unsigned int                 : 4;
    unsigned int cnv4            : 4;
} avr32_adcifa_innsel10_t;



typedef struct avr32_adcifa_innsel11_t {
    unsigned int                 : 4;
    unsigned int cnv7            : 4;
    unsigned int                 : 4;
    unsigned int cnv6            : 4;
    unsigned int                 : 4;
    unsigned int cnv5            : 4;
    unsigned int                 : 4;
    unsigned int cnv4            : 4;
} avr32_adcifa_innsel11_t;



typedef struct avr32_adcifa_ckdiv_t {
    unsigned int                 :23;
    unsigned int cnt             : 9;
} avr32_adcifa_ckdiv_t;



typedef struct avr32_adcifa_itimer_t {
    unsigned int                 :15;
    unsigned int itmc            :17;
} avr32_adcifa_itimer_t;



typedef struct avr32_adcifa_tsscfg_t {
    unsigned int                 :18;
    unsigned int pdpsw           : 3;
    unsigned int pendt           : 1;
    unsigned int trgsel          : 2;
    unsigned int stm             : 4;
    unsigned int pendbc          : 4;
} avr32_adcifa_tsscfg_t;



typedef struct avr32_adcifa_tsswseq0_t {
    unsigned int                 : 4;
    unsigned int sw3             : 4;
    unsigned int                 : 4;
    unsigned int sw2             : 4;
    unsigned int                 : 4;
    unsigned int sw1             : 4;
    unsigned int                 : 4;
    unsigned int sw0             : 4;
} avr32_adcifa_tsswseq0_t;



typedef struct avr32_adcifa_tsswseq1_t {
    unsigned int                 : 4;
    unsigned int sw3             : 4;
    unsigned int                 : 4;
    unsigned int sw2             : 4;
    unsigned int                 : 4;
    unsigned int sw1             : 4;
    unsigned int                 : 4;
    unsigned int sw0             : 4;
} avr32_adcifa_tsswseq1_t;



typedef struct avr32_adcifa_wcfg0_t {
    unsigned int                 : 1;
    unsigned int src             : 4;
    unsigned int wm              : 3;
    unsigned int ht              :12;
    unsigned int lt              :12;
} avr32_adcifa_wcfg0_t;



typedef struct avr32_adcifa_wcfg1_t {
    unsigned int                 : 1;
    unsigned int src             : 4;
    unsigned int wm              : 3;
    unsigned int ht              :12;
    unsigned int lt              :12;
} avr32_adcifa_wcfg1_t;



typedef struct avr32_adcifa_adccal_t {
    unsigned int                 : 2;
    unsigned int ocal            : 6;
    unsigned int                 : 9;
    unsigned int gcal            :15;
} avr32_adcifa_adccal_t;



typedef struct avr32_adcifa_shcal_t {
    unsigned int                 : 6;
    unsigned int gain1           :10;
    unsigned int                 : 6;
    unsigned int gain0           :10;
} avr32_adcifa_shcal_t;



typedef struct avr32_adcifa_ier_t {
    unsigned int awup            : 1;
    unsigned int                 :16;
    unsigned int sutd            : 1;
    unsigned int msoc1           : 1;
    unsigned int msoc0           : 1;
    unsigned int wm1             : 1;
    unsigned int wm0             : 1;
    unsigned int pcnt            : 1;
    unsigned int ploss           : 1;
    unsigned int lovr1           : 1;
    unsigned int ovr1            : 1;
    unsigned int seoc1           : 1;
    unsigned int seos1           : 1;
    unsigned int lovr0           : 1;
    unsigned int ovr0            : 1;
    unsigned int seoc0           : 1;
    unsigned int seos0           : 1;
} avr32_adcifa_ier_t;



typedef struct avr32_adcifa_idr_t {
    unsigned int awup            : 1;
    unsigned int                 :16;
    unsigned int sutd            : 1;
    unsigned int msoc1           : 1;
    unsigned int msoc0           : 1;
    unsigned int wm1             : 1;
    unsigned int wm0             : 1;
    unsigned int pcnt            : 1;
    unsigned int ploss           : 1;
    unsigned int lovr1           : 1;
    unsigned int ovr1            : 1;
    unsigned int seoc1           : 1;
    unsigned int seos1           : 1;
    unsigned int lovr0           : 1;
    unsigned int ovr0            : 1;
    unsigned int seoc0           : 1;
    unsigned int seos0           : 1;
} avr32_adcifa_idr_t;



typedef struct avr32_adcifa_imr_t {
    unsigned int awup            : 1;
    unsigned int                 :16;
    unsigned int sutd            : 1;
    unsigned int msoc1           : 1;
    unsigned int msoc0           : 1;
    unsigned int wm1             : 1;
    unsigned int wm0             : 1;
    unsigned int pcnt            : 1;
    unsigned int ploss           : 1;
    unsigned int lovr1           : 1;
    unsigned int ovr1            : 1;
    unsigned int seoc1           : 1;
    unsigned int seos1           : 1;
    unsigned int lovr0           : 1;
    unsigned int ovr0            : 1;
    unsigned int seoc0           : 1;
    unsigned int seos0           : 1;
} avr32_adcifa_imr_t;



typedef struct avr32_adcifa_version_t {
    unsigned int                 :12;
    unsigned int variant         : 4;
    unsigned int                 : 4;
    unsigned int version         :12;
} avr32_adcifa_version_t;



typedef struct avr32_adcifa_parameter_t {
    unsigned int                 :16;
    unsigned int n               : 8;
    unsigned int m               : 8;
} avr32_adcifa_parameter_t;



typedef struct avr32_adcifa_t {
  union {
          unsigned long                  cr        ;//0x0000
          avr32_adcifa_cr_t              CR        ;
  };
  union {
          unsigned long                  cfg       ;//0x0004
          avr32_adcifa_cfg_t             CFG       ;
  };
  union {
    const unsigned long                  sr        ;//0x0008
    const avr32_adcifa_sr_t              SR        ;
  };
  union {
          unsigned long                  scr       ;//0x000c
          avr32_adcifa_scr_t             SCR       ;
  };
  union {
          unsigned long                  ssr       ;//0x0010
          avr32_adcifa_ssr_t             SSR       ;
  };
  union {
          unsigned long                  seqcfg0   ;//0x0014
          avr32_adcifa_seqcfg0_t         SEQCFG0   ;
  };
  union {
          unsigned long                  seqcfg1   ;//0x0018
          avr32_adcifa_seqcfg1_t         SEQCFG1   ;
  };
  union {
          unsigned long                  shg0      ;//0x001c
          avr32_adcifa_shg0_t            SHG0      ;
  };
  union {
          unsigned long                  shg1      ;//0x0020
          avr32_adcifa_shg1_t            SHG1      ;
  };
  union {
          unsigned long                  inpsel00  ;//0x0024
          avr32_adcifa_inpsel00_t        INPSEL00  ;
  };
  union {
          unsigned long                  inpsel01  ;//0x0028
          avr32_adcifa_inpsel01_t        INPSEL01  ;
  };
  union {
          unsigned long                  inpsel10  ;//0x002c
          avr32_adcifa_inpsel10_t        INPSEL10  ;
  };
  union {
          unsigned long                  inpsel11  ;//0x0030
          avr32_adcifa_inpsel11_t        INPSEL11  ;
  };
  union {
          unsigned long                  innsel00  ;//0x0034
          avr32_adcifa_innsel00_t        INNSEL00  ;
  };
  union {
          unsigned long                  innsel01  ;//0x0038
          avr32_adcifa_innsel01_t        INNSEL01  ;
  };
  union {
          unsigned long                  innsel10  ;//0x003c
          avr32_adcifa_innsel10_t        INNSEL10  ;
  };
  union {
          unsigned long                  innsel11  ;//0x0040
          avr32_adcifa_innsel11_t        INNSEL11  ;
  };
  union {
          unsigned long                  ckdiv     ;//0x0044
          avr32_adcifa_ckdiv_t           CKDIV     ;
  };
  union {
          unsigned long                  itimer    ;//0x0048
          avr32_adcifa_itimer_t          ITIMER    ;
  };
  union {
          unsigned long                  tsscfg    ;//0x004c
          avr32_adcifa_tsscfg_t          TSSCFG    ;
  };
  union {
          unsigned long                  tsswseq0  ;//0x0050
          avr32_adcifa_tsswseq0_t        TSSWSEQ0  ;
  };
  union {
          unsigned long                  tsswseq1  ;//0x0054
          avr32_adcifa_tsswseq1_t        TSSWSEQ1  ;
  };
  union {
          unsigned long                  wcfg0     ;//0x0058
          avr32_adcifa_wcfg0_t           WCFG0     ;
  };
  union {
          unsigned long                  wcfg1     ;//0x005c
          avr32_adcifa_wcfg1_t           WCFG1     ;
  };
    const unsigned long                  lcv0      ;//0x0060
    const unsigned long                  lcv1      ;//0x0064
  union {
          unsigned long                  adccal    ;//0x0068
          avr32_adcifa_adccal_t          ADCCAL    ;
  };
  union {
          unsigned long                  shcal     ;//0x006c
          avr32_adcifa_shcal_t           SHCAL     ;
  };
  union {
          unsigned long                  ier       ;//0x0070
          avr32_adcifa_ier_t             IER       ;
  };
  union {
          unsigned long                  idr       ;//0x0074
          avr32_adcifa_idr_t             IDR       ;
  };
  union {
          unsigned long                  imr       ;//0x0078
          avr32_adcifa_imr_t             IMR       ;
  };
  union {
    const unsigned long                  version   ;//0x007c
    const avr32_adcifa_version_t         VERSION   ;
  };
  union {
    const unsigned long                  parameter ;//0x0080
    const avr32_adcifa_parameter_t       PARAMETER ;
  };
    const unsigned long                  resx      [16];//0x0084
} avr32_adcifa_t;



/*#ifdef __AVR32_ABI_COMPILER__*/
#endif

/*#ifdef AVR32_ADCIFA_110_H_INCLUDED*/
#endif

