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
 * Model        : UC3L064T
 * Revision     : $Revision: 74772 $
 * Checkin Date : $Date: 2010-05-14 06:51:12 +0200 (Fri, 14 May 2010) $
 *
 ****************************************************************************/
#ifndef AVR32_PDCA_120_H_INCLUDED
#define AVR32_PDCA_120_H_INCLUDED

#define AVR32_PDCA_H_VERSION 120

#include "avr32/abi.h"


/*
 Note to user:

 The following defines are always generated:
 - Register offset: AVR32_PDCA_<register>
 - Bitfield mask:   AVR32_PDCA_<register>_<bitfield>
 - Bitfield offset: AVR32_PDCA_<register>_<bitfield>_OFFSET
 - Bitfield size:   AVR32_PDCA_<register>_<bitfield>_SIZE
 - Bitfield values: AVR32_PDCA_<register>_<bitfield>_<value name>

 The following defines are generated if they don't cause ambiguities,
 i.e. the name is unique, or all values with that name are the same.
 - Bitfield mask:   AVR32_PDCA_<bitfield>
 - Bitfield offset: AVR32_PDCA_<bitfield>_OFFSET
 - Bitfield size:   AVR32_PDCA_<bitfield>_SIZE
 - Bitfield values: AVR32_PDCA_<bitfield>_<value name>
 - Bitfield values: AVR32_PDCA_<value name>

 All defines are sorted alphabetically.
*/


#define AVR32_PDCA_BYTE                                     0x00000000
#define AVR32_PDCA_CH0EN                                             0
#define AVR32_PDCA_CH0EN_MASK                               0x00000001
#define AVR32_PDCA_CH0EN_OFFSET                                      0
#define AVR32_PDCA_CH0EN_SIZE                                        1
#define AVR32_PDCA_CH0OF                                             4
#define AVR32_PDCA_CH0OF_MASK                               0x00000010
#define AVR32_PDCA_CH0OF_OFFSET                                      4
#define AVR32_PDCA_CH0OF_SIZE                                        1
#define AVR32_PDCA_CH0RES                                            8
#define AVR32_PDCA_CH0RES_MASK                              0x00000100
#define AVR32_PDCA_CH0RES_OFFSET                                     8
#define AVR32_PDCA_CH0RES_SIZE                                       1
#define AVR32_PDCA_CH1EN                                             1
#define AVR32_PDCA_CH1EN_MASK                               0x00000002
#define AVR32_PDCA_CH1EN_OFFSET                                      1
#define AVR32_PDCA_CH1EN_SIZE                                        1
#define AVR32_PDCA_CH1OF                                             5
#define AVR32_PDCA_CH1OF_MASK                               0x00000020
#define AVR32_PDCA_CH1OF_OFFSET                                      5
#define AVR32_PDCA_CH1OF_SIZE                                        1
#define AVR32_PDCA_CH1RES                                            9
#define AVR32_PDCA_CH1RES_MASK                              0x00000200
#define AVR32_PDCA_CH1RES_OFFSET                                     9
#define AVR32_PDCA_CH1RES_SIZE                                       1
#define AVR32_PDCA_CR                                       0x00000014
#define AVR32_PDCA_CR_ECLR                                           8
#define AVR32_PDCA_CR_ECLR_MASK                             0x00000100
#define AVR32_PDCA_CR_ECLR_OFFSET                                    8
#define AVR32_PDCA_CR_ECLR_SIZE                                      1
#define AVR32_PDCA_CR_MASK                                  0x00000103
#define AVR32_PDCA_CR_RESETVALUE                            0x00000000
#define AVR32_PDCA_CR_TDIS                                           1
#define AVR32_PDCA_CR_TDIS_MASK                             0x00000002
#define AVR32_PDCA_CR_TDIS_OFFSET                                    1
#define AVR32_PDCA_CR_TDIS_SIZE                                      1
#define AVR32_PDCA_CR_TEN                                            0
#define AVR32_PDCA_CR_TEN_MASK                              0x00000001
#define AVR32_PDCA_CR_TEN_OFFSET                                     0
#define AVR32_PDCA_CR_TEN_SIZE                                       1
#define AVR32_PDCA_DATA                                              0
#define AVR32_PDCA_DATA_MASK                                0xffffffff
#define AVR32_PDCA_DATA_OFFSET                                       0
#define AVR32_PDCA_DATA_SIZE                                        32
#define AVR32_PDCA_ECLR                                              8
#define AVR32_PDCA_ECLR_MASK                                0x00000100
#define AVR32_PDCA_ECLR_OFFSET                                       8
#define AVR32_PDCA_ECLR_SIZE                                         1
#define AVR32_PDCA_ETRIG                                             2
#define AVR32_PDCA_ETRIG_MASK                               0x00000004
#define AVR32_PDCA_ETRIG_OFFSET                                      2
#define AVR32_PDCA_ETRIG_SIZE                                        1
#define AVR32_PDCA_HALF_WORD                                0x00000001
#define AVR32_PDCA_IDR                                      0x00000024
#define AVR32_PDCA_IDR_MASK                                 0x00000007
#define AVR32_PDCA_IDR_RCZ                                           0
#define AVR32_PDCA_IDR_RCZ_MASK                             0x00000001
#define AVR32_PDCA_IDR_RCZ_OFFSET                                    0
#define AVR32_PDCA_IDR_RCZ_SIZE                                      1
#define AVR32_PDCA_IDR_RESETVALUE                           0x00000000
#define AVR32_PDCA_IDR_TERR                                          2
#define AVR32_PDCA_IDR_TERR_MASK                            0x00000004
#define AVR32_PDCA_IDR_TERR_OFFSET                                   2
#define AVR32_PDCA_IDR_TERR_SIZE                                     1
#define AVR32_PDCA_IDR_TRC                                           1
#define AVR32_PDCA_IDR_TRC_MASK                             0x00000002
#define AVR32_PDCA_IDR_TRC_OFFSET                                    1
#define AVR32_PDCA_IDR_TRC_SIZE                                      1
#define AVR32_PDCA_IER                                      0x00000020
#define AVR32_PDCA_IER_MASK                                0x00000007
#define AVR32_PDCA_IER_RCZ                                          0
#define AVR32_PDCA_IER_RCZ_MASK                             0x00000001
#define AVR32_PDCA_IER_RCZ_OFFSET                                    0
#define AVR32_PDCA_IER_RCZ_SIZE                                      1
#define AVR32_PDCA_IER_RESETVALUE                           0x00000000
#define AVR32_PDCA_IER_TERR                                          2
#define AVR32_PDCA_IER_TERR_MASK                            0x00000004
#define AVR32_PDCA_IER_TERR_OFFSET                                   2
#define AVR32_PDCA_IER_TERR_SIZE                                     1
#define AVR32_PDCA_IER_TRC                                           1
#define AVR32_PDCA_IER_TRC_MASK                             0x00000002
#define AVR32_PDCA_IER_TRC_OFFSET                                    1
#define AVR32_PDCA_IER_TRC_SIZE                                      1
#define AVR32_PDCA_IMR                                      0x00000028
#define AVR32_PDCA_IMR_MASK                                 0x00000007
#define AVR32_PDCA_IMR_RCZ                                           0
#define AVR32_PDCA_IMR_RCZ_MASK                             0x00000001
#define AVR32_PDCA_IMR_RCZ_OFFSET                                    0
#define AVR32_PDCA_IMR_RCZ_SIZE                                      1
#define AVR32_PDCA_IMR_RESETVALUE                           0x00000000
#define AVR32_PDCA_IMR_TERR                                          2
#define AVR32_PDCA_IMR_TERR_MASK                            0x00000004
#define AVR32_PDCA_IMR_TERR_OFFSET                                   2
#define AVR32_PDCA_IMR_TERR_SIZE                                     1
#define AVR32_PDCA_IMR_TRC                                           1
#define AVR32_PDCA_IMR_TRC_MASK                             0x00000002
#define AVR32_PDCA_IMR_TRC_OFFSET                                    1
#define AVR32_PDCA_IMR_TRC_SIZE                                      1
#define AVR32_PDCA_ISR                                      0x0000002c
#define AVR32_PDCA_ISR_MASK                                 0x00000007
#define AVR32_PDCA_ISR_RCZ                                           0
#define AVR32_PDCA_ISR_RCZ_MASK                             0x00000001
#define AVR32_PDCA_ISR_RCZ_OFFSET                                    0
#define AVR32_PDCA_ISR_RCZ_SIZE                                      1
#define AVR32_PDCA_ISR_RESETVALUE                           0x00000000
#define AVR32_PDCA_ISR_TERR                                          2
#define AVR32_PDCA_ISR_TERR_MASK                            0x00000004
#define AVR32_PDCA_ISR_TERR_OFFSET                                   2
#define AVR32_PDCA_ISR_TERR_SIZE                                     1
#define AVR32_PDCA_ISR_TRC                                           1
#define AVR32_PDCA_ISR_TRC_MASK                             0x00000002
#define AVR32_PDCA_ISR_TRC_OFFSET                                    1
#define AVR32_PDCA_ISR_TRC_SIZE                                      1
#define AVR32_PDCA_LAT                                               0
#define AVR32_PDCA_LAT_MASK                                 0x0000ffff
#define AVR32_PDCA_LAT_OFFSET                                        0
#define AVR32_PDCA_LAT_SIZE                                         16
#define AVR32_PDCA_MADDR                                             0
#define AVR32_PDCA_MADDR_MASK                               0xffffffff
#define AVR32_PDCA_MADDR_OFFSET                                      0
#define AVR32_PDCA_MADDR_SIZE                                       32
#define AVR32_PDCA_MAR                                      0x00000000
#define AVR32_PDCA_MAR_MADDR                                         0
#define AVR32_PDCA_MAR_MADDR_MASK                           0xffffffff
#define AVR32_PDCA_MAR_MADDR_OFFSET                                  0
#define AVR32_PDCA_MAR_MADDR_SIZE                                   32
#define AVR32_PDCA_MAR_MASK                                 0xffffffff
#define AVR32_PDCA_MAR_RESETVALUE                           0x00000000
#define AVR32_PDCA_MARR                                     0x0000000c
#define AVR32_PDCA_MARR_MARV                                         0
#define AVR32_PDCA_MARR_MARV_MASK                           0xffffffff
#define AVR32_PDCA_MARR_MARV_OFFSET                                  0
#define AVR32_PDCA_MARR_MARV_SIZE                                   32
#define AVR32_PDCA_MARV                                              0
#define AVR32_PDCA_MARV_MASK                                0xffffffff
#define AVR32_PDCA_MARV_OFFSET                                       0
#define AVR32_PDCA_MARV_SIZE                                        32
#define AVR32_PDCA_MON0CH                                           16
#define AVR32_PDCA_MON0CH_MASK                              0x003f0000
#define AVR32_PDCA_MON0CH_OFFSET                                    16
#define AVR32_PDCA_MON0CH_SIZE                                       6
#define AVR32_PDCA_MON1CH                                           24
#define AVR32_PDCA_MON1CH_MASK                              0x3f000000
#define AVR32_PDCA_MON1CH_OFFSET                                    24
#define AVR32_PDCA_MON1CH_SIZE                                       6
#define AVR32_PDCA_MR                                       0x00000018
#define AVR32_PDCA_MR_ETRIG                                          2
#define AVR32_PDCA_MR_ETRIG_MASK                            0x00000004
#define AVR32_PDCA_MR_ETRIG_OFFSET                                   2
#define AVR32_PDCA_MR_ETRIG_SIZE                                     1
#define AVR32_PDCA_MR_MASK                                  0x0000000f
#define AVR32_PDCA_MR_RESETVALUE                            0x00000000
#define AVR32_PDCA_MR_RING                                           3
#define AVR32_PDCA_MR_RING_MASK                             0x00000008
#define AVR32_PDCA_MR_RING_OFFSET                                    3
#define AVR32_PDCA_MR_RING_SIZE                                      1
#define AVR32_PDCA_MR_SIZE                                           0
#define AVR32_PDCA_MR_SIZE_BYTE                             0x00000000
#define AVR32_PDCA_MR_SIZE_HALF_WORD                        0x00000001
#define AVR32_PDCA_MR_SIZE_MASK                             0x00000003
#define AVR32_PDCA_MR_SIZE_OFFSET                                    0
#define AVR32_PDCA_MR_SIZE_SIZE                                      2
#define AVR32_PDCA_MR_SIZE_WORD                             0x00000002
#define AVR32_PDCA_PCONTROL                                 0x00000800
#define AVR32_PDCA_PCONTROL_CH0EN                                    0
#define AVR32_PDCA_PCONTROL_CH0EN_MASK                      0x00000001
#define AVR32_PDCA_PCONTROL_CH0EN_OFFSET                             0
#define AVR32_PDCA_PCONTROL_CH0EN_SIZE                               1
#define AVR32_PDCA_PCONTROL_CH0OF                                    4
#define AVR32_PDCA_PCONTROL_CH0OF_MASK                      0x00000010
#define AVR32_PDCA_PCONTROL_CH0OF_OFFSET                             4
#define AVR32_PDCA_PCONTROL_CH0OF_SIZE                               1
#define AVR32_PDCA_PCONTROL_CH0RES                                   8
#define AVR32_PDCA_PCONTROL_CH0RES_MASK                     0x00000100
#define AVR32_PDCA_PCONTROL_CH0RES_OFFSET                            8
#define AVR32_PDCA_PCONTROL_CH0RES_SIZE                              1
#define AVR32_PDCA_PCONTROL_CH1EN                                    1
#define AVR32_PDCA_PCONTROL_CH1EN_MASK                      0x00000002
#define AVR32_PDCA_PCONTROL_CH1EN_OFFSET                             1
#define AVR32_PDCA_PCONTROL_CH1EN_SIZE                               1
#define AVR32_PDCA_PCONTROL_CH1OF                                    5
#define AVR32_PDCA_PCONTROL_CH1OF_MASK                      0x00000020
#define AVR32_PDCA_PCONTROL_CH1OF_OFFSET                             5
#define AVR32_PDCA_PCONTROL_CH1OF_SIZE                               1
#define AVR32_PDCA_PCONTROL_CH1RES                                   9
#define AVR32_PDCA_PCONTROL_CH1RES_MASK                     0x00000200
#define AVR32_PDCA_PCONTROL_CH1RES_OFFSET                            9
#define AVR32_PDCA_PCONTROL_CH1RES_SIZE                              1
#define AVR32_PDCA_PCONTROL_MASK                            0x3f3f0333
#define AVR32_PDCA_PCONTROL_MON0CH                                  16
#define AVR32_PDCA_PCONTROL_MON0CH_MASK                     0x003f0000
#define AVR32_PDCA_PCONTROL_MON0CH_OFFSET                           16
#define AVR32_PDCA_PCONTROL_MON0CH_SIZE                              6
#define AVR32_PDCA_PCONTROL_MON1CH                                  24
#define AVR32_PDCA_PCONTROL_MON1CH_MASK                     0x3f000000
#define AVR32_PDCA_PCONTROL_MON1CH_OFFSET                           24
#define AVR32_PDCA_PCONTROL_MON1CH_SIZE                              6
#define AVR32_PDCA_PCONTROL_RESETVALUE                      0x00000000
#define AVR32_PDCA_PID                                               0
#define AVR32_PDCA_PID_MASK                                 0x000000ff
#define AVR32_PDCA_PID_OFFSET                                        0
#define AVR32_PDCA_PID_SIZE                                          8
#define AVR32_PDCA_PRDATA0                                  0x00000804
#define AVR32_PDCA_PRDATA0_DATA                                      0
#define AVR32_PDCA_PRDATA0_DATA_MASK                        0xffffffff
#define AVR32_PDCA_PRDATA0_DATA_OFFSET                               0
#define AVR32_PDCA_PRDATA0_DATA_SIZE                                32
#define AVR32_PDCA_PRDATA0_MASK                             0xffffffff
#define AVR32_PDCA_PRDATA0_RESETVALUE                       0x00000000
#define AVR32_PDCA_PRDATA1                                  0x0000081c
#define AVR32_PDCA_PRDATA1_DATA                                      0
#define AVR32_PDCA_PRDATA1_DATA_MASK                        0xffffffff
#define AVR32_PDCA_PRDATA1_DATA_OFFSET                               0
#define AVR32_PDCA_PRDATA1_DATA_SIZE                                32
#define AVR32_PDCA_PRDATA1_MASK                             0xffffffff
#define AVR32_PDCA_PRDATA1_RESETVALUE                       0x00000000
#define AVR32_PDCA_PRLAT0                                   0x0000080c
#define AVR32_PDCA_PRLAT0_LAT                                        0
#define AVR32_PDCA_PRLAT0_LAT_MASK                          0x0000ffff
#define AVR32_PDCA_PRLAT0_LAT_OFFSET                                 0
#define AVR32_PDCA_PRLAT0_LAT_SIZE                                  16
#define AVR32_PDCA_PRLAT0_MASK                              0x0000ffff
#define AVR32_PDCA_PRLAT0_RESETVALUE                        0x00000000
#define AVR32_PDCA_PRLAT1                                   0x00000824
#define AVR32_PDCA_PRLAT1_LAT                                        0
#define AVR32_PDCA_PRLAT1_LAT_MASK                          0x0000ffff
#define AVR32_PDCA_PRLAT1_LAT_OFFSET                                 0
#define AVR32_PDCA_PRLAT1_LAT_SIZE                                  16
#define AVR32_PDCA_PRLAT1_MASK                              0x0000ffff
#define AVR32_PDCA_PRLAT1_RESETVALUE                        0x00000000
#define AVR32_PDCA_PRSTALL0                                 0x00000808
#define AVR32_PDCA_PRSTALL0_MASK                            0xffffffff
#define AVR32_PDCA_PRSTALL0_RESETVALUE                      0x00000000
#define AVR32_PDCA_PRSTALL0_STALL                                    0
#define AVR32_PDCA_PRSTALL0_STALL_MASK                      0xffffffff
#define AVR32_PDCA_PRSTALL0_STALL_OFFSET                             0
#define AVR32_PDCA_PRSTALL0_STALL_SIZE                              32
#define AVR32_PDCA_PRSTALL1                                 0x00000820
#define AVR32_PDCA_PRSTALL1_MASK                            0xffffffff
#define AVR32_PDCA_PRSTALL1_RESETVALUE                      0x00000000
#define AVR32_PDCA_PRSTALL1_STALL                                    0
#define AVR32_PDCA_PRSTALL1_STALL_MASK                      0xffffffff
#define AVR32_PDCA_PRSTALL1_STALL_OFFSET                             0
#define AVR32_PDCA_PRSTALL1_STALL_SIZE                              32
#define AVR32_PDCA_PSR                                      0x00000004
#define AVR32_PDCA_PSR_MASK                                 0x000000ff
#define AVR32_PDCA_PSR_PID                                           0
#define AVR32_PDCA_PSR_PID_MASK                             0x000000ff
#define AVR32_PDCA_PSR_PID_OFFSET                                    0
#define AVR32_PDCA_PSR_PID_SIZE                                      8
#define AVR32_PDCA_PSR_RESETVALUE                           0x00000000
#define AVR32_PDCA_PWDATA0                                  0x00000810
#define AVR32_PDCA_PWDATA0_DATA                                      0
#define AVR32_PDCA_PWDATA0_DATA_MASK                        0xffffffff
#define AVR32_PDCA_PWDATA0_DATA_OFFSET                               0
#define AVR32_PDCA_PWDATA0_DATA_SIZE                                32
#define AVR32_PDCA_PWDATA0_MASK                             0xffffffff
#define AVR32_PDCA_PWDATA0_RESETVALUE                       0x00000000
#define AVR32_PDCA_PWDATA1                                  0x00000828
#define AVR32_PDCA_PWDATA1_DATA                                      0
#define AVR32_PDCA_PWDATA1_DATA_MASK                        0xffffffff
#define AVR32_PDCA_PWDATA1_DATA_OFFSET                               0
#define AVR32_PDCA_PWDATA1_DATA_SIZE                                32
#define AVR32_PDCA_PWDATA1_MASK                             0xffffffff
#define AVR32_PDCA_PWDATA1_RESETVALUE                       0x00000000
#define AVR32_PDCA_PWLAT0                                   0x00000818
#define AVR32_PDCA_PWLAT0_LAT                                        0
#define AVR32_PDCA_PWLAT0_LAT_MASK                          0x0000ffff
#define AVR32_PDCA_PWLAT0_LAT_OFFSET                                 0
#define AVR32_PDCA_PWLAT0_LAT_SIZE                                  16
#define AVR32_PDCA_PWLAT0_MASK                              0x0000ffff
#define AVR32_PDCA_PWLAT0_RESETVALUE                        0x00000000
#define AVR32_PDCA_PWLAT1                                   0x00000830
#define AVR32_PDCA_PWLAT1_LAT                                        0
#define AVR32_PDCA_PWLAT1_LAT_MASK                          0x0000ffff
#define AVR32_PDCA_PWLAT1_LAT_OFFSET                                 0
#define AVR32_PDCA_PWLAT1_LAT_SIZE                                  16
#define AVR32_PDCA_PWLAT1_MASK                              0x0000ffff
#define AVR32_PDCA_PWLAT1_RESETVALUE                        0x00000000
#define AVR32_PDCA_PWSTALL0                                 0x00000814
#define AVR32_PDCA_PWSTALL0_MASK                            0xffffffff
#define AVR32_PDCA_PWSTALL0_RESETVALUE                      0x00000000
#define AVR32_PDCA_PWSTALL0_STALL                                    0
#define AVR32_PDCA_PWSTALL0_STALL_MASK                      0xffffffff
#define AVR32_PDCA_PWSTALL0_STALL_OFFSET                             0
#define AVR32_PDCA_PWSTALL0_STALL_SIZE                              32
#define AVR32_PDCA_PWSTALL1                                 0x0000082c
#define AVR32_PDCA_PWSTALL1_MASK                            0xffffffff
#define AVR32_PDCA_PWSTALL1_RESETVALUE                      0x00000000
#define AVR32_PDCA_PWSTALL1_STALL                                    0
#define AVR32_PDCA_PWSTALL1_STALL_MASK                      0xffffffff
#define AVR32_PDCA_PWSTALL1_STALL_OFFSET                             0
#define AVR32_PDCA_PWSTALL1_STALL_SIZE                              32
#define AVR32_PDCA_RCZ                                               0
#define AVR32_PDCA_RCZ_MASK                                 0x00000001
#define AVR32_PDCA_RCZ_OFFSET                                        0
#define AVR32_PDCA_RCZ_SIZE                                          1
#define AVR32_PDCA_RING                                              3
#define AVR32_PDCA_RING_MASK                                0x00000008
#define AVR32_PDCA_RING_OFFSET                                       3
#define AVR32_PDCA_RING_SIZE                                         1
#define AVR32_PDCA_SIZE                                              0
#define AVR32_PDCA_SIZE_BYTE                                0x00000000
#define AVR32_PDCA_SIZE_HALF_WORD                           0x00000001
#define AVR32_PDCA_SIZE_MASK                                0x00000003
#define AVR32_PDCA_SIZE_OFFSET                                       0
#define AVR32_PDCA_SIZE_SIZE                                         2
#define AVR32_PDCA_SIZE_WORD                                0x00000002
#define AVR32_PDCA_SR                                       0x0000001c
#define AVR32_PDCA_SR_MASK                                  0x00000001
#define AVR32_PDCA_SR_RESETVALUE                            0x00000000
#define AVR32_PDCA_SR_TEN                                            0
#define AVR32_PDCA_SR_TEN_MASK                              0x00000001
#define AVR32_PDCA_SR_TEN_OFFSET                                     0
#define AVR32_PDCA_SR_TEN_SIZE                                       1
#define AVR32_PDCA_STALL                                             0
#define AVR32_PDCA_STALL_MASK                               0xffffffff
#define AVR32_PDCA_STALL_OFFSET                                      0
#define AVR32_PDCA_STALL_SIZE                                       32
#define AVR32_PDCA_TCR                                      0x00000008
#define AVR32_PDCA_TCR_MASK                                 0x0000ffff
#define AVR32_PDCA_TCR_RESETVALUE                           0x00000000
#define AVR32_PDCA_TCR_TCV                                           0
#define AVR32_PDCA_TCR_TCV_MASK                             0x0000ffff
#define AVR32_PDCA_TCR_TCV_OFFSET                                    0
#define AVR32_PDCA_TCR_TCV_SIZE                                     16
#define AVR32_PDCA_TCRR                                     0x00000010
#define AVR32_PDCA_TCRR_MASK                                0x0000ffff
#define AVR32_PDCA_TCRR_RESETVALUE                          0x00000000
#define AVR32_PDCA_TCRR_TCRV                                         0
#define AVR32_PDCA_TCRR_TCRV_MASK                           0x0000ffff
#define AVR32_PDCA_TCRR_TCRV_OFFSET                                  0
#define AVR32_PDCA_TCRR_TCRV_SIZE                                   16
#define AVR32_PDCA_TCRV                                              0
#define AVR32_PDCA_TCRV_MASK                                0x0000ffff
#define AVR32_PDCA_TCRV_OFFSET                                       0
#define AVR32_PDCA_TCRV_SIZE                                        16
#define AVR32_PDCA_TCV                                               0
#define AVR32_PDCA_TCV_MASK                                 0x0000ffff
#define AVR32_PDCA_TCV_OFFSET                                        0
#define AVR32_PDCA_TCV_SIZE                                         16
#define AVR32_PDCA_TDIS                                              1
#define AVR32_PDCA_TDIS_MASK                                0x00000002
#define AVR32_PDCA_TDIS_OFFSET                                       1
#define AVR32_PDCA_TDIS_SIZE                                         1
#define AVR32_PDCA_TEN                                               0
#define AVR32_PDCA_TEN_MASK                                 0x00000001
#define AVR32_PDCA_TEN_OFFSET                                        0
#define AVR32_PDCA_TEN_SIZE                                          1
#define AVR32_PDCA_TERR                                              2
#define AVR32_PDCA_TERR_MASK                                0x00000004
#define AVR32_PDCA_TERR_OFFSET                                       2
#define AVR32_PDCA_TERR_SIZE                                         1
#define AVR32_PDCA_TRC                                               1
#define AVR32_PDCA_TRC_MASK                                 0x00000002
#define AVR32_PDCA_TRC_OFFSET                                        1
#define AVR32_PDCA_TRC_SIZE                                          1
#define AVR32_PDCA_VERSION                                  0x00000834
#define AVR32_PDCA_VERSION_MASK                             0x00000fff
#define AVR32_PDCA_VERSION_RESETVALUE                       0x00000120
#define AVR32_PDCA_VERSION_OFFSET                                    0
#define AVR32_PDCA_VERSION_SIZE                                     12
#define AVR32_PDCA_VERSION_VARIANT                                  16
#define AVR32_PDCA_VERSION_VARIANT_MASK                     0x000f0000
#define AVR32_PDCA_VERSION_VARIANT_OFFSET                           16
#define AVR32_PDCA_VERSION_VARIANT_SIZE                              4
#define AVR32_PDCA_VERSION_VERSION                                   0
#define AVR32_PDCA_VERSION_VERSION_MASK                     0x00000fff
#define AVR32_PDCA_VERSION_VERSION_OFFSET                            0
#define AVR32_PDCA_VERSION_VERSION_SIZE                             12
#define AVR32_PDCA_WORD                                     0x00000002




#ifdef __AVR32_ABI_COMPILER__


typedef struct avr32_pdca_psr_t {
    unsigned int                 :24;
    unsigned int pid             : 8;
} avr32_pdca_psr_t;



typedef struct avr32_pdca_tcr_t {
    unsigned int                 :16;
    unsigned int tcv             :16;
} avr32_pdca_tcr_t;



typedef struct avr32_pdca_tcrr_t {
    unsigned int                 :16;
    unsigned int tcrv            :16;
} avr32_pdca_tcrr_t;



typedef struct avr32_pdca_cr_t {
    unsigned int                 :23;
    unsigned int eclr            : 1;
    unsigned int                 : 6;
    unsigned int tdis            : 1;
    unsigned int ten             : 1;
} avr32_pdca_cr_t;



typedef struct avr32_pdca_mr_t {
    unsigned int                 :28;
    unsigned int ring            : 1;
    unsigned int etrig           : 1;
    unsigned int size            : 2;
} avr32_pdca_mr_t;



typedef struct avr32_pdca_sr_t {
    unsigned int                 :31;
    unsigned int ten             : 1;
} avr32_pdca_sr_t;



typedef struct avr32_pdca_ier_t {
    unsigned int                 :29;
    unsigned int terr            : 1;
    unsigned int trc             : 1;
    unsigned int rcz             : 1;
} avr32_pdca_ier_t;



typedef struct avr32_pdca_idr_t {
    unsigned int                 :29;
    unsigned int terr            : 1;
    unsigned int trc             : 1;
    unsigned int rcz             : 1;
} avr32_pdca_idr_t;



typedef struct avr32_pdca_imr_t {
    unsigned int                 :29;
    unsigned int terr            : 1;
    unsigned int trc             : 1;
    unsigned int rcz             : 1;
} avr32_pdca_imr_t;



typedef struct avr32_pdca_isr_t {
    unsigned int                 :29;
    unsigned int terr            : 1;
    unsigned int trc             : 1;
    unsigned int rcz             : 1;
} avr32_pdca_isr_t;



typedef struct avr32_pdca_pcontrol_t {
    unsigned int                 : 2;
    unsigned int mon1ch          : 6;
    unsigned int                 : 2;
    unsigned int mon0ch          : 6;
    unsigned int                 : 6;
    unsigned int ch1res          : 1;
    unsigned int ch0res          : 1;
    unsigned int                 : 2;
    unsigned int ch1of           : 1;
    unsigned int ch0of           : 1;
    unsigned int                 : 2;
    unsigned int ch1en           : 1;
    unsigned int ch0en           : 1;
} avr32_pdca_pcontrol_t;



typedef struct avr32_pdca_prlat0_t {
    unsigned int                 :16;
    unsigned int lat             :16;
} avr32_pdca_prlat0_t;



typedef struct avr32_pdca_pwlat0_t {
    unsigned int                 :16;
    unsigned int lat             :16;
} avr32_pdca_pwlat0_t;



typedef struct avr32_pdca_prlat1_t {
    unsigned int                 :16;
    unsigned int lat             :16;
} avr32_pdca_prlat1_t;



typedef struct avr32_pdca_pwlat1_t {
    unsigned int                 :16;
    unsigned int lat             :16;
} avr32_pdca_pwlat1_t;



typedef struct avr32_pdca_version_t {
    unsigned int                 :12;
    unsigned int variant         : 4;
    unsigned int                 : 4;
    unsigned int version         :12;
} avr32_pdca_version_t;



typedef struct avr32_pdca_channel_t {
          unsigned long                  mar       ;//0x0000
  union {
          unsigned long                  psr       ;//0x0004
          avr32_pdca_psr_t               PSR       ;
  };
  union {
          unsigned long                  tcr       ;//0x0008
          avr32_pdca_tcr_t               TCR       ;
  };
          unsigned long                  marr      ;//0x000c
  union {
          unsigned long                  tcrr      ;//0x0010
          avr32_pdca_tcrr_t              TCRR      ;
  };
  union {
          unsigned long                  cr        ;//0x0014
          avr32_pdca_cr_t                CR        ;
  };
  union {
          unsigned long                  mr        ;//0x0018
          avr32_pdca_mr_t                MR        ;
  };
  union {
    const unsigned long                  sr        ;//0x001c
    const avr32_pdca_sr_t                SR        ;
  };
  union {
          unsigned long                  ier       ;//0x0020
          avr32_pdca_ier_t               IER       ;
  };
  union {
          unsigned long                  idr       ;//0x0024
          avr32_pdca_idr_t               IDR       ;
  };
  union {
    const unsigned long                  imr       ;//0x0028
    const avr32_pdca_imr_t               IMR       ;
  };
  union {
    const unsigned long                  isr       ;//0x002c
    const avr32_pdca_isr_t               ISR       ;
  };
          unsigned int                   :32       ;//0x0030
          unsigned int                   :32       ;//0x0034
          unsigned int                   :32       ;//0x0038
          unsigned int                   :32       ;//0x003c
} avr32_pdca_channel_t;


typedef struct avr32_pdca_t {
  avr32_pdca_channel_t channel[AVR32_PDCA_CHANNEL_LENGTH];//0x0
  avr32_pdca_channel_t channel_reserved[32 - AVR32_PDCA_CHANNEL_LENGTH];//Padding
  union {
          unsigned long                  pcontrol  ;//0x0800
          avr32_pdca_pcontrol_t          PCONTROL  ;
  };
    const unsigned long                  prdata0   ;//0x0804
    const unsigned long                  prstall0  ;//0x0808
  union {
    const unsigned long                  prlat0    ;//0x080c
    const avr32_pdca_prlat0_t            PRLAT0    ;
  };
    const unsigned long                  pwdata0   ;//0x0810
    const unsigned long                  pwstall0  ;//0x0814
  union {
    const unsigned long                  pwlat0    ;//0x0818
    const avr32_pdca_pwlat0_t            PWLAT0    ;
  };
    const unsigned long                  prdata1   ;//0x081c
    const unsigned long                  prstall1  ;//0x0820
  union {
    const unsigned long                  prlat1    ;//0x0824
    const avr32_pdca_prlat1_t            PRLAT1    ;
  };
    const unsigned long                  pwdata1   ;//0x0828
    const unsigned long                  pwstall1  ;//0x082c
  union {
    const unsigned long                  pwlat1    ;//0x0830
    const avr32_pdca_pwlat1_t            PWLAT1    ;
  };
  union {
    const unsigned long                  version   ;//0x0834
    const avr32_pdca_version_t           VERSION   ;
  };
} avr32_pdca_t;



/*#ifdef __AVR32_ABI_COMPILER__*/
#endif

/*#ifdef AVR32_PDCA_120_H_INCLUDED*/
#endif

