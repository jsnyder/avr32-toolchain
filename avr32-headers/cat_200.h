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
 * 
 * Model        : UC3L064
 * Revision     : $Revision: 74772 $
 * Checkin Date : $Date: 2010-05-14 06:51:12 +0200 (Fri, 14 May 2010) $ 
 *
 ****************************************************************************/
#ifndef AVR32_CAT_200_H_INCLUDED
#define AVR32_CAT_200_H_INCLUDED

#define AVR32_CAT_H_VERSION 200

#include "avr32/abi.h"


/*
 Note to user:

 The following defines are always generated:
 - Register offset: AVR32_CAT_<register>
 - Bitfield mask:   AVR32_CAT_<register>_<bitfield>
 - Bitfield offset: AVR32_CAT_<register>_<bitfield>_OFFSET
 - Bitfield size:   AVR32_CAT_<register>_<bitfield>_SIZE
 - Bitfield values: AVR32_CAT_<register>_<bitfield>_<value name>

 The following defines are generated if they don't cause ambiguities,
 i.e. the name is unique, or all values with that name are the same.
 - Bitfield mask:   AVR32_CAT_<bitfield>
 - Bitfield offset: AVR32_CAT_<bitfield>_OFFSET
 - Bitfield size:   AVR32_CAT_<bitfield>_SIZE
 - Bitfield values: AVR32_CAT_<bitfield>_<value name>
 - Bitfield values: AVR32_CAT_<value name>

 All defines are sorted alphabetically.
*/


#define AVR32_CAT_ACCTRL                                           31
#define AVR32_CAT_ACCTRL_MASK                              0x80000000
#define AVR32_CAT_ACCTRL_OFFSET                                    31
#define AVR32_CAT_ACCTRL_SIZE                                       1
#define AVR32_CAT_ACOUNT                                   0x00000054
#define AVR32_CAT_ACOUNT_COUNT                                      0
#define AVR32_CAT_ACOUNT_COUNT_MASK                        0x0000ffff
#define AVR32_CAT_ACOUNT_COUNT_OFFSET                               0
#define AVR32_CAT_ACOUNT_COUNT_SIZE                                16
#define AVR32_CAT_ACOUNT_MASK                              0xffffffff
#define AVR32_CAT_ACOUNT_RESETVALUE                        0x00000000
#define AVR32_CAT_ACOUNT_SPORX                                     16
#define AVR32_CAT_ACOUNT_SPORX_MASK                        0x00ff0000
#define AVR32_CAT_ACOUNT_SPORX_OFFSET                              16
#define AVR32_CAT_ACOUNT_SPORX_SIZE                                 8
#define AVR32_CAT_ACOUNT_Y                                         24
#define AVR32_CAT_ACOUNT_Y_MASK                            0xff000000
#define AVR32_CAT_ACOUNT_Y_OFFSET                                  24
#define AVR32_CAT_ACOUNT_Y_SIZE                                     8
#define AVR32_CAT_ACQDONE                                           9
#define AVR32_CAT_ACQDONE_MASK                             0x00000200
#define AVR32_CAT_ACQDONE_OFFSET                                    9
#define AVR32_CAT_ACQDONE_SIZE                                      1
#define AVR32_CAT_ACQSEL                                            0
#define AVR32_CAT_ACQSEL_MASK                              0x00000003
#define AVR32_CAT_ACQSEL_OFFSET                                     0
#define AVR32_CAT_ACQSEL_SIZE                                       2
#define AVR32_CAT_ACREADY                                           8
#define AVR32_CAT_ACREADY_MASK                             0x00000100
#define AVR32_CAT_ACREADY_OFFSET                                    8
#define AVR32_CAT_ACREADY_SIZE                                      1
#define AVR32_CAT_ACSHI0                                   0x00000080
#define AVR32_CAT_ACSHI0_MASK                              0x00000fff
#define AVR32_CAT_ACSHI0_RESETVALUE                        0x00000000
#define AVR32_CAT_ACSHI0_SHIVAL                                     0
#define AVR32_CAT_ACSHI0_SHIVAL_MASK                       0x00000fff
#define AVR32_CAT_ACSHI0_SHIVAL_OFFSET                              0
#define AVR32_CAT_ACSHI0_SHIVAL_SIZE                               12
#define AVR32_CAT_ACSHI1                                   0x00000084
#define AVR32_CAT_ACSHI1_MASK                              0x00000fff
#define AVR32_CAT_ACSHI1_RESETVALUE                        0x00000000
#define AVR32_CAT_ACSHI1_SHIVAL                                     0
#define AVR32_CAT_ACSHI1_SHIVAL_MASK                       0x00000fff
#define AVR32_CAT_ACSHI1_SHIVAL_OFFSET                              0
#define AVR32_CAT_ACSHI1_SHIVAL_SIZE                               12
#define AVR32_CAT_ACSHI2                                   0x00000088
#define AVR32_CAT_ACSHI2_MASK                              0x00000fff
#define AVR32_CAT_ACSHI2_RESETVALUE                        0x00000000
#define AVR32_CAT_ACSHI2_SHIVAL                                     0
#define AVR32_CAT_ACSHI2_SHIVAL_MASK                       0x00000fff
#define AVR32_CAT_ACSHI2_SHIVAL_OFFSET                              0
#define AVR32_CAT_ACSHI2_SHIVAL_SIZE                               12
#define AVR32_CAT_ACSHI3                                   0x0000008c
#define AVR32_CAT_ACSHI3_MASK                              0x00000fff
#define AVR32_CAT_ACSHI3_RESETVALUE                        0x00000000
#define AVR32_CAT_ACSHI3_SHIVAL                                     0
#define AVR32_CAT_ACSHI3_SHIVAL_MASK                       0x00000fff
#define AVR32_CAT_ACSHI3_SHIVAL_OFFSET                              0
#define AVR32_CAT_ACSHI3_SHIVAL_SIZE                               12
#define AVR32_CAT_ACSHI4                                   0x00000090
#define AVR32_CAT_ACSHI4_MASK                              0x00000fff
#define AVR32_CAT_ACSHI4_RESETVALUE                        0x00000000
#define AVR32_CAT_ACSHI4_SHIVAL                                     0
#define AVR32_CAT_ACSHI4_SHIVAL_MASK                       0x00000fff
#define AVR32_CAT_ACSHI4_SHIVAL_OFFSET                              0
#define AVR32_CAT_ACSHI4_SHIVAL_SIZE                               12
#define AVR32_CAT_ACSHI5                                   0x00000094
#define AVR32_CAT_ACSHI5_MASK                              0x00000fff
#define AVR32_CAT_ACSHI5_RESETVALUE                        0x00000000
#define AVR32_CAT_ACSHI5_SHIVAL                                     0
#define AVR32_CAT_ACSHI5_SHIVAL_MASK                       0x00000fff
#define AVR32_CAT_ACSHI5_SHIVAL_OFFSET                              0
#define AVR32_CAT_ACSHI5_SHIVAL_SIZE                               12
#define AVR32_CAT_ACSHI6                                   0x00000098
#define AVR32_CAT_ACSHI6_MASK                              0x00000fff
#define AVR32_CAT_ACSHI6_RESETVALUE                        0x00000000
#define AVR32_CAT_ACSHI6_SHIVAL                                     0
#define AVR32_CAT_ACSHI6_SHIVAL_MASK                       0x00000fff
#define AVR32_CAT_ACSHI6_SHIVAL_OFFSET                              0
#define AVR32_CAT_ACSHI6_SHIVAL_SIZE                               12
#define AVR32_CAT_ACSHI7                                   0x0000009c
#define AVR32_CAT_ACSHI7_MASK                              0x00000fff
#define AVR32_CAT_ACSHI7_RESETVALUE                        0x00000000
#define AVR32_CAT_ACSHI7_SHIVAL                                     0
#define AVR32_CAT_ACSHI7_SHIVAL_MASK                       0x00000fff
#define AVR32_CAT_ACSHI7_SHIVAL_OFFSET                              0
#define AVR32_CAT_ACSHI7_SHIVAL_SIZE                               12
#define AVR32_CAT_AISR                                     0x00000050
#define AVR32_CAT_AISR_ACQSEL                                       0
#define AVR32_CAT_AISR_ACQSEL_MASK                         0x00000003
#define AVR32_CAT_AISR_ACQSEL_OFFSET                                0
#define AVR32_CAT_AISR_ACQSEL_SIZE                                  2
#define AVR32_CAT_AISR_MASK                                0x00000003
#define AVR32_CAT_AISR_RESETVALUE                          0x00000000
#define AVR32_CAT_ATBASE                                   0x0000006c
#define AVR32_CAT_ATBASE_COUNT                                      0
#define AVR32_CAT_ATBASE_COUNT_MASK                        0x0000ffff
#define AVR32_CAT_ATBASE_COUNT_OFFSET                               0
#define AVR32_CAT_ATBASE_COUNT_SIZE                                16
#define AVR32_CAT_ATBASE_MASK                              0x0000ffff
#define AVR32_CAT_ATBASE_RESETVALUE                        0x00000000
#define AVR32_CAT_ATCAL                                             1
#define AVR32_CAT_ATCAL_MASK                               0x00000002
#define AVR32_CAT_ATCAL_OFFSET                                      1
#define AVR32_CAT_ATCAL_SIZE                                        1
#define AVR32_CAT_ATCFG0                                   0x00000010
#define AVR32_CAT_ATCFG0_CHLEN                                      8
#define AVR32_CAT_ATCFG0_CHLEN_MASK                        0x0000ff00
#define AVR32_CAT_ATCFG0_CHLEN_OFFSET                               8
#define AVR32_CAT_ATCFG0_CHLEN_SIZE                                 8
#define AVR32_CAT_ATCFG0_DIV                                       16
#define AVR32_CAT_ATCFG0_DIV_MASK                          0xffff0000
#define AVR32_CAT_ATCFG0_DIV_OFFSET                                16
#define AVR32_CAT_ATCFG0_DIV_SIZE                                  16
#define AVR32_CAT_ATCFG0_MASK                              0xffffffff
#define AVR32_CAT_ATCFG0_RESETVALUE                        0x00000000
#define AVR32_CAT_ATCFG0_SELEN                                      0
#define AVR32_CAT_ATCFG0_SELEN_MASK                        0x000000ff
#define AVR32_CAT_ATCFG0_SELEN_OFFSET                               0
#define AVR32_CAT_ATCFG0_SELEN_SIZE                                 8
#define AVR32_CAT_ATCFG1                                   0x00000014
#define AVR32_CAT_ATCFG1_DILEN                                     16
#define AVR32_CAT_ATCFG1_DILEN_MASK                        0x00ff0000
#define AVR32_CAT_ATCFG1_DILEN_OFFSET                              16
#define AVR32_CAT_ATCFG1_DILEN_SIZE                                 8
#define AVR32_CAT_ATCFG1_DISHIFT                                   28
#define AVR32_CAT_ATCFG1_DISHIFT_MASK                      0x30000000
#define AVR32_CAT_ATCFG1_DISHIFT_OFFSET                            28
#define AVR32_CAT_ATCFG1_DISHIFT_SIZE                               2
#define AVR32_CAT_ATCFG1_MASK                              0x33ffffff
#define AVR32_CAT_ATCFG1_MAX                                        0
#define AVR32_CAT_ATCFG1_MAX_MASK                          0x0000ffff
#define AVR32_CAT_ATCFG1_MAX_OFFSET                                 0
#define AVR32_CAT_ATCFG1_MAX_SIZE                                  16
#define AVR32_CAT_ATCFG1_RESETVALUE                        0x00000000
#define AVR32_CAT_ATCFG1_SPREAD                                    24
#define AVR32_CAT_ATCFG1_SPREAD_MASK                       0x01000000
#define AVR32_CAT_ATCFG1_SPREAD_OFFSET                             24
#define AVR32_CAT_ATCFG1_SPREAD_SIZE                                1
#define AVR32_CAT_ATCFG1_SYNC                                      25
#define AVR32_CAT_ATCFG1_SYNC_MASK                         0x02000000
#define AVR32_CAT_ATCFG1_SYNC_OFFSET                               25
#define AVR32_CAT_ATCFG1_SYNC_SIZE                                  1
#define AVR32_CAT_ATCFG2                                   0x00000018
#define AVR32_CAT_ATCFG2_FILTER                                    16
#define AVR32_CAT_ATCFG2_FILTER_MASK                       0x000f0000
#define AVR32_CAT_ATCFG2_FILTER_OFFSET                             16
#define AVR32_CAT_ATCFG2_FILTER_SIZE                                4
#define AVR32_CAT_ATCFG2_MASK                              0x000fffff
#define AVR32_CAT_ATCFG2_OUTSENS                                    8
#define AVR32_CAT_ATCFG2_OUTSENS_MASK                      0x0000ff00
#define AVR32_CAT_ATCFG2_OUTSENS_OFFSET                             8
#define AVR32_CAT_ATCFG2_OUTSENS_SIZE                               8
#define AVR32_CAT_ATCFG2_RESETVALUE                        0x00000000
#define AVR32_CAT_ATCFG2_SENSE                                      0
#define AVR32_CAT_ATCFG2_SENSE_MASK                        0x000000ff
#define AVR32_CAT_ATCFG2_SENSE_OFFSET                               0
#define AVR32_CAT_ATCFG2_SENSE_SIZE                                 8
#define AVR32_CAT_ATCFG3                                   0x0000001c
#define AVR32_CAT_ATCFG3_MASK                              0x00ffffff
#define AVR32_CAT_ATCFG3_NDRIFT                                     0
#define AVR32_CAT_ATCFG3_NDRIFT_MASK                       0x000000ff
#define AVR32_CAT_ATCFG3_NDRIFT_OFFSET                              0
#define AVR32_CAT_ATCFG3_NDRIFT_SIZE                                8
#define AVR32_CAT_ATCFG3_PDRIFT                                     8
#define AVR32_CAT_ATCFG3_PDRIFT_MASK                       0x0000ff00
#define AVR32_CAT_ATCFG3_PDRIFT_OFFSET                              8
#define AVR32_CAT_ATCFG3_PDRIFT_SIZE                                8
#define AVR32_CAT_ATCFG3_PTHR                                      16
#define AVR32_CAT_ATCFG3_PTHR_MASK                         0x00ff0000
#define AVR32_CAT_ATCFG3_PTHR_OFFSET                               16
#define AVR32_CAT_ATCFG3_PTHR_SIZE                                  8
#define AVR32_CAT_ATCFG3_RESETVALUE                        0x00000000
#define AVR32_CAT_ATCURR                                   0x00000070
#define AVR32_CAT_ATCURR_COUNT                                      0
#define AVR32_CAT_ATCURR_COUNT_MASK                        0x0000ffff
#define AVR32_CAT_ATCURR_COUNT_OFFSET                               0
#define AVR32_CAT_ATCURR_COUNT_SIZE                                16
#define AVR32_CAT_ATCURR_MASK                              0x0000ffff
#define AVR32_CAT_ATCURR_RESETVALUE                        0x00000000
#define AVR32_CAT_ATEN                                              8
#define AVR32_CAT_ATEN_MASK                                0x00000100
#define AVR32_CAT_ATEN_OFFSET                                       8
#define AVR32_CAT_ATEN_SIZE                                         1
#define AVR32_CAT_ATPINS                                   0x00000004
#define AVR32_CAT_ATPINS_ATEN                                       8
#define AVR32_CAT_ATPINS_ATEN_MASK                         0x00000100
#define AVR32_CAT_ATPINS_ATEN_OFFSET                                8
#define AVR32_CAT_ATPINS_ATEN_SIZE                                  1
#define AVR32_CAT_ATPINS_ATSP                                       0
#define AVR32_CAT_ATPINS_ATSP_MASK                         0x0000001f
#define AVR32_CAT_ATPINS_ATSP_OFFSET                                0
#define AVR32_CAT_ATPINS_ATSP_SIZE                                  5
#define AVR32_CAT_ATPINS_MASK                              0x0000011f
#define AVR32_CAT_ATPINS_RESETVALUE                        0x00000000
#define AVR32_CAT_ATSC                                              2
#define AVR32_CAT_ATSC_MASK                                0x00000004
#define AVR32_CAT_ATSC_OFFSET                                       2
#define AVR32_CAT_ATSC_SIZE                                         1
#define AVR32_CAT_ATSP                                              0
#define AVR32_CAT_ATSP_MASK                                0x0000001f
#define AVR32_CAT_ATSP_OFFSET                                       0
#define AVR32_CAT_ATSP_SIZE                                         5
#define AVR32_CAT_ATSTATE                                           3
#define AVR32_CAT_ATSTATE_MASK                             0x00000008
#define AVR32_CAT_ATSTATE_OFFSET                                    3
#define AVR32_CAT_ATSTATE_SIZE                                      1
#define AVR32_CAT_BURST0                                           24
#define AVR32_CAT_BURST0_MASK                              0xff000000
#define AVR32_CAT_BURST0_OFFSET                                    24
#define AVR32_CAT_BURST0_SIZE                                       8
#define AVR32_CAT_BURST1                                           16
#define AVR32_CAT_BURST1_MASK                              0x00ff0000
#define AVR32_CAT_BURST1_OFFSET                                    16
#define AVR32_CAT_BURST1_SIZE                                       8
#define AVR32_CAT_BURST2                                            8
#define AVR32_CAT_BURST2_MASK                              0x0000ff00
#define AVR32_CAT_BURST2_OFFSET                                     8
#define AVR32_CAT_BURST2_SIZE                                       8
#define AVR32_CAT_BURST3                                            0
#define AVR32_CAT_BURST3_MASK                              0x000000ff
#define AVR32_CAT_BURST3_OFFSET                                     0
#define AVR32_CAT_BURST3_SIZE                                       8
#define AVR32_CAT_CHLEN                                             8
#define AVR32_CAT_CHLEN_MASK                               0x0000ff00
#define AVR32_CAT_CHLEN_OFFSET                                      8
#define AVR32_CAT_CHLEN_SIZE                                        8
#define AVR32_CAT_CONSEN                                           28
#define AVR32_CAT_CONSEN_MASK                              0x70000000
#define AVR32_CAT_CONSEN_OFFSET                                    28
#define AVR32_CAT_CONSEN_SIZE                                       3
#define AVR32_CAT_COUNT                                             0
#define AVR32_CAT_COUNT_MASK                               0x0000ffff
#define AVR32_CAT_COUNT_OFFSET                                      0
#define AVR32_CAT_COUNT_SIZE                                       16
#define AVR32_CAT_CSARES                                   0x00000064
#define AVR32_CAT_CSARES_MASK                              0x0001ffff
#define AVR32_CAT_CSARES_RES                                        0
#define AVR32_CAT_CSARES_RESETVALUE                        0x00000000
#define AVR32_CAT_CSARES_RES_MASK                          0x0001ffff
#define AVR32_CAT_CSARES_RES_OFFSET                                 0
#define AVR32_CAT_CSARES_RES_SIZE                                  17
#define AVR32_CAT_CSBRES                                   0x00000068
#define AVR32_CAT_CSBRES_MASK                              0x0001ffff
#define AVR32_CAT_CSBRES_RES                                        0
#define AVR32_CAT_CSBRES_RESETVALUE                        0x00000000
#define AVR32_CAT_CSBRES_RES_MASK                          0x0001ffff
#define AVR32_CAT_CSBRES_RES_OFFSET                                 0
#define AVR32_CAT_CSBRES_RES_SIZE                                  17
#define AVR32_CAT_CTRL                                     0x00000000
#define AVR32_CAT_CTRL_EN                                           0
#define AVR32_CAT_CTRL_EN_MASK                             0x00000001
#define AVR32_CAT_CTRL_EN_OFFSET                                    0
#define AVR32_CAT_CTRL_EN_SIZE                                      1
#define AVR32_CAT_CTRL_MASK                                0x00000081
#define AVR32_CAT_CTRL_RESETVALUE                          0x00000000
#define AVR32_CAT_CTRL_SWRST                                        7
#define AVR32_CAT_CTRL_SWRST_MASK                          0x00000080
#define AVR32_CAT_CTRL_SWRST_OFFSET                                 7
#define AVR32_CAT_CTRL_SWRST_SIZE                                   1
#define AVR32_CAT_CXDILEN                                          16
#define AVR32_CAT_CXDILEN_MASK                             0x00ff0000
#define AVR32_CAT_CXDILEN_OFFSET                                   16
#define AVR32_CAT_CXDILEN_SIZE                                      8
#define AVR32_CAT_DICS                                     0x0000005c
#define AVR32_CAT_DICS_FSOURCES                                    24
#define AVR32_CAT_DICS_FSOURCES_MASK                       0xff000000
#define AVR32_CAT_DICS_FSOURCES_OFFSET                             24
#define AVR32_CAT_DICS_FSOURCES_SIZE                                8
#define AVR32_CAT_DICS_GLEN                                        23
#define AVR32_CAT_DICS_GLEN_MASK                           0x00800000
#define AVR32_CAT_DICS_GLEN_OFFSET                                 23
#define AVR32_CAT_DICS_GLEN_SIZE                                    1
#define AVR32_CAT_DICS_INTREFSEL                                   16
#define AVR32_CAT_DICS_INTREFSEL_MASK                      0x00010000
#define AVR32_CAT_DICS_INTREFSEL_OFFSET                            16
#define AVR32_CAT_DICS_INTREFSEL_SIZE                               1
#define AVR32_CAT_DICS_INTVREFSEL                                  17
#define AVR32_CAT_DICS_INTVREFSEL_MASK                     0x00020000
#define AVR32_CAT_DICS_INTVREFSEL_OFFSET                           17
#define AVR32_CAT_DICS_INTVREFSEL_SIZE                              1
#define AVR32_CAT_DICS_MASK                                0xff831fff
#define AVR32_CAT_DICS_RESETVALUE                          0x00000000
#define AVR32_CAT_DICS_SOURCES                                      0
#define AVR32_CAT_DICS_SOURCES_MASK                        0x000000ff
#define AVR32_CAT_DICS_SOURCES_OFFSET                               0
#define AVR32_CAT_DICS_SOURCES_SIZE                                 8
#define AVR32_CAT_DICS_TRIM                                         8
#define AVR32_CAT_DICS_TRIM_MASK                           0x00001f00
#define AVR32_CAT_DICS_TRIM_OFFSET                                  8
#define AVR32_CAT_DICS_TRIM_SIZE                                    5
#define AVR32_CAT_DILEN                                            16
#define AVR32_CAT_DILEN_MASK                               0x00ff0000
#define AVR32_CAT_DILEN_OFFSET                                     16
#define AVR32_CAT_DILEN_SIZE                                        8
#define AVR32_CAT_DISHIFT                                          28
#define AVR32_CAT_DISHIFT_MASK                             0x30000000
#define AVR32_CAT_DISHIFT_OFFSET                                   28
#define AVR32_CAT_DISHIFT_SIZE                                      2
#define AVR32_CAT_DIV                                              16
#define AVR32_CAT_DIV_MASK                                 0xffff0000
#define AVR32_CAT_DIV_OFFSET                                       16
#define AVR32_CAT_DIV_SIZE                                         16
#define AVR32_CAT_EN                                                0
#define AVR32_CAT_ENABLED                                           0
#define AVR32_CAT_ENABLED_MASK                             0x00000001
#define AVR32_CAT_ENABLED_OFFSET                                    0
#define AVR32_CAT_ENABLED_SIZE                                      1
#define AVR32_CAT_EN_MASK                                  0x00000001
#define AVR32_CAT_EN_OFFSET                                         0
#define AVR32_CAT_EN_SIZE                                           1
#define AVR32_CAT_FILTER                                           16
#define AVR32_CAT_FILTER_MASK                              0x000f0000
#define AVR32_CAT_FILTER_OFFSET                                    16
#define AVR32_CAT_FILTER_SIZE                                       4
#define AVR32_CAT_FSOURCES                                         24
#define AVR32_CAT_FSOURCES_MASK                            0xff000000
#define AVR32_CAT_FSOURCES_OFFSET                                  24
#define AVR32_CAT_FSOURCES_SIZE                                     8
#define AVR32_CAT_GLEN                                             23
#define AVR32_CAT_GLEN_MASK                                0x00800000
#define AVR32_CAT_GLEN_OFFSET                                      23
#define AVR32_CAT_GLEN_SIZE                                         1
#define AVR32_CAT_IDR                                      0x00000048
#define AVR32_CAT_IDR_ACQDONE                                       9
#define AVR32_CAT_IDR_ACQDONE_MASK                         0x00000200
#define AVR32_CAT_IDR_ACQDONE_OFFSET                                9
#define AVR32_CAT_IDR_ACQDONE_SIZE                                  1
#define AVR32_CAT_IDR_ACREADY                                       8
#define AVR32_CAT_IDR_ACREADY_MASK                         0x00000100
#define AVR32_CAT_IDR_ACREADY_OFFSET                                8
#define AVR32_CAT_IDR_ACREADY_SIZE                                  1
#define AVR32_CAT_IDR_ATCAL                                         1
#define AVR32_CAT_IDR_ATCAL_MASK                           0x00000002
#define AVR32_CAT_IDR_ATCAL_OFFSET                                  1
#define AVR32_CAT_IDR_ATCAL_SIZE                                    1
#define AVR32_CAT_IDR_ATSC                                          2
#define AVR32_CAT_IDR_ATSC_MASK                            0x00000004
#define AVR32_CAT_IDR_ATSC_OFFSET                                   2
#define AVR32_CAT_IDR_ATSC_SIZE                                     1
#define AVR32_CAT_IDR_MASK                                 0x00000306
#define AVR32_CAT_IDR_RESETVALUE                           0x00000000
#define AVR32_CAT_IER                                      0x00000044
#define AVR32_CAT_IER_ACQDONE                                       9
#define AVR32_CAT_IER_ACQDONE_MASK                         0x00000200
#define AVR32_CAT_IER_ACQDONE_OFFSET                                9
#define AVR32_CAT_IER_ACQDONE_SIZE                                  1
#define AVR32_CAT_IER_ACREADY                                       8
#define AVR32_CAT_IER_ACREADY_MASK                         0x00000100
#define AVR32_CAT_IER_ACREADY_OFFSET                                8
#define AVR32_CAT_IER_ACREADY_SIZE                                  1
#define AVR32_CAT_IER_ATCAL                                         1
#define AVR32_CAT_IER_ATCAL_MASK                           0x00000002
#define AVR32_CAT_IER_ATCAL_OFFSET                                  1
#define AVR32_CAT_IER_ATCAL_SIZE                                    1
#define AVR32_CAT_IER_ATSC                                          2
#define AVR32_CAT_IER_ATSC_MASK                            0x00000004
#define AVR32_CAT_IER_ATSC_OFFSET                                   2
#define AVR32_CAT_IER_ATSC_SIZE                                     1
#define AVR32_CAT_IER_MASK                                 0x00000306
#define AVR32_CAT_IER_RESETVALUE                           0x00000000
#define AVR32_CAT_IMR                                      0x0000004c
#define AVR32_CAT_IMR_ACQDONE                                       9
#define AVR32_CAT_IMR_ACQDONE_MASK                         0x00000200
#define AVR32_CAT_IMR_ACQDONE_OFFSET                                9
#define AVR32_CAT_IMR_ACQDONE_SIZE                                  1
#define AVR32_CAT_IMR_ACREADY                                       8
#define AVR32_CAT_IMR_ACREADY_MASK                         0x00000100
#define AVR32_CAT_IMR_ACREADY_OFFSET                                8
#define AVR32_CAT_IMR_ACREADY_SIZE                                  1
#define AVR32_CAT_IMR_ATCAL                                         1
#define AVR32_CAT_IMR_ATCAL_MASK                           0x00000002
#define AVR32_CAT_IMR_ATCAL_OFFSET                                  1
#define AVR32_CAT_IMR_ATCAL_SIZE                                    1
#define AVR32_CAT_IMR_ATSC                                          2
#define AVR32_CAT_IMR_ATSC_MASK                            0x00000004
#define AVR32_CAT_IMR_ATSC_OFFSET                                   2
#define AVR32_CAT_IMR_ATSC_SIZE                                     1
#define AVR32_CAT_IMR_MASK                                 0x00000306
#define AVR32_CAT_IMR_RESETVALUE                           0x00000000
#define AVR32_CAT_INTREFSEL                                        16
#define AVR32_CAT_INTREFSEL_MASK                           0x00010000
#define AVR32_CAT_INTREFSEL_OFFSET                                 16
#define AVR32_CAT_INTREFSEL_SIZE                                    1
#define AVR32_CAT_INTVREFSEL                                       17
#define AVR32_CAT_INTVREFSEL_MASK                          0x00020000
#define AVR32_CAT_INTVREFSEL_OFFSET                                17
#define AVR32_CAT_INTVREFSEL_SIZE                                   1
#define AVR32_CAT_MAX                                               0
#define AVR32_CAT_MAXDEV                                            0
#define AVR32_CAT_MAXDEV_MASK                              0x000000ff
#define AVR32_CAT_MAXDEV_OFFSET                                     0
#define AVR32_CAT_MAXDEV_SIZE                                       8
#define AVR32_CAT_MAX_MASK                                 0x0000ffff
#define AVR32_CAT_MAX_OFFSET                                        0
#define AVR32_CAT_MAX_SIZE                                         16
#define AVR32_CAT_MBLEN                                    0x00000058
#define AVR32_CAT_MBLEN_BURST0                                     24
#define AVR32_CAT_MBLEN_BURST0_MASK                        0xff000000
#define AVR32_CAT_MBLEN_BURST0_OFFSET                              24
#define AVR32_CAT_MBLEN_BURST0_SIZE                                 8
#define AVR32_CAT_MBLEN_BURST1                                     16
#define AVR32_CAT_MBLEN_BURST1_MASK                        0x00ff0000
#define AVR32_CAT_MBLEN_BURST1_OFFSET                              16
#define AVR32_CAT_MBLEN_BURST1_SIZE                                 8
#define AVR32_CAT_MBLEN_BURST2                                      8
#define AVR32_CAT_MBLEN_BURST2_MASK                        0x0000ff00
#define AVR32_CAT_MBLEN_BURST2_OFFSET                               8
#define AVR32_CAT_MBLEN_BURST2_SIZE                                 8
#define AVR32_CAT_MBLEN_BURST3                                      0
#define AVR32_CAT_MBLEN_BURST3_MASK                        0x000000ff
#define AVR32_CAT_MBLEN_BURST3_OFFSET                               0
#define AVR32_CAT_MBLEN_BURST3_SIZE                                 8
#define AVR32_CAT_MBLEN_MASK                               0xffffffff
#define AVR32_CAT_MBLEN_RESETVALUE                         0x00000000
#define AVR32_CAT_MBLREQ                                            4
#define AVR32_CAT_MBLREQ_MASK                              0x00000010
#define AVR32_CAT_MBLREQ_OFFSET                                     4
#define AVR32_CAT_MBLREQ_SIZE                                       1
#define AVR32_CAT_MGCFG0                                   0x00000030
#define AVR32_CAT_MGCFG0_CHLEN                                      8
#define AVR32_CAT_MGCFG0_CHLEN_MASK                        0x0000ff00
#define AVR32_CAT_MGCFG0_CHLEN_OFFSET                               8
#define AVR32_CAT_MGCFG0_CHLEN_SIZE                                 8
#define AVR32_CAT_MGCFG0_DIV                                       16
#define AVR32_CAT_MGCFG0_DIV_MASK                          0xffff0000
#define AVR32_CAT_MGCFG0_DIV_OFFSET                                16
#define AVR32_CAT_MGCFG0_DIV_SIZE                                  16
#define AVR32_CAT_MGCFG0_MASK                              0xffffffff
#define AVR32_CAT_MGCFG0_RESETVALUE                        0x00000000
#define AVR32_CAT_MGCFG0_SELEN                                      0
#define AVR32_CAT_MGCFG0_SELEN_MASK                        0x000000ff
#define AVR32_CAT_MGCFG0_SELEN_OFFSET                               0
#define AVR32_CAT_MGCFG0_SELEN_SIZE                                 8
#define AVR32_CAT_MGCFG1                                   0x00000034
#define AVR32_CAT_MGCFG1_DILEN                                     16
#define AVR32_CAT_MGCFG1_DILEN_MASK                        0x00ff0000
#define AVR32_CAT_MGCFG1_DILEN_OFFSET                              16
#define AVR32_CAT_MGCFG1_DILEN_SIZE                                 8
#define AVR32_CAT_MGCFG1_DISHIFT                                   28
#define AVR32_CAT_MGCFG1_DISHIFT_MASK                      0x30000000
#define AVR32_CAT_MGCFG1_DISHIFT_OFFSET                            28
#define AVR32_CAT_MGCFG1_DISHIFT_SIZE                               2
#define AVR32_CAT_MGCFG1_MASK                              0x33ffffff
#define AVR32_CAT_MGCFG1_MAX                                        0
#define AVR32_CAT_MGCFG1_MAX_MASK                          0x0000ffff
#define AVR32_CAT_MGCFG1_MAX_OFFSET                                 0
#define AVR32_CAT_MGCFG1_MAX_SIZE                                  16
#define AVR32_CAT_MGCFG1_RESETVALUE                        0x00000000
#define AVR32_CAT_MGCFG1_SPREAD                                    24
#define AVR32_CAT_MGCFG1_SPREAD_MASK                       0x01000000
#define AVR32_CAT_MGCFG1_SPREAD_OFFSET                             24
#define AVR32_CAT_MGCFG1_SPREAD_SIZE                                1
#define AVR32_CAT_MGCFG1_SYNC                                      25
#define AVR32_CAT_MGCFG1_SYNC_MASK                         0x02000000
#define AVR32_CAT_MGCFG1_SYNC_OFFSET                               25
#define AVR32_CAT_MGCFG1_SYNC_SIZE                                  1
#define AVR32_CAT_MGCFG2                                   0x00000038
#define AVR32_CAT_MGCFG2_ACCTRL                                    31
#define AVR32_CAT_MGCFG2_ACCTRL_MASK                       0x80000000
#define AVR32_CAT_MGCFG2_ACCTRL_OFFSET                             31
#define AVR32_CAT_MGCFG2_ACCTRL_SIZE                                1
#define AVR32_CAT_MGCFG2_CONSEN                                    28
#define AVR32_CAT_MGCFG2_CONSEN_MASK                       0x70000000
#define AVR32_CAT_MGCFG2_CONSEN_OFFSET                             28
#define AVR32_CAT_MGCFG2_CONSEN_SIZE                                3
#define AVR32_CAT_MGCFG2_CXDILEN                                   16
#define AVR32_CAT_MGCFG2_CXDILEN_MASK                      0x00ff0000
#define AVR32_CAT_MGCFG2_CXDILEN_OFFSET                            16
#define AVR32_CAT_MGCFG2_CXDILEN_SIZE                               8
#define AVR32_CAT_MGCFG2_MASK                              0xf0ff0fff
#define AVR32_CAT_MGCFG2_RESETVALUE                        0x00000000
#define AVR32_CAT_MGCFG2_SYNCTIM                                    0
#define AVR32_CAT_MGCFG2_SYNCTIM_MASK                      0x00000fff
#define AVR32_CAT_MGCFG2_SYNCTIM_OFFSET                             0
#define AVR32_CAT_MGCFG2_SYNCTIM_SIZE                              12
#define AVR32_CAT_NDRIFT                                            0
#define AVR32_CAT_NDRIFT_MASK                              0x000000ff
#define AVR32_CAT_NDRIFT_OFFSET                                     0
#define AVR32_CAT_NDRIFT_SIZE                                       8
#define AVR32_CAT_OUTSENS                                           8
#define AVR32_CAT_OUTSENS_MASK                             0x0000ff00
#define AVR32_CAT_OUTSENS_OFFSET                                    8
#define AVR32_CAT_OUTSENS_SIZE                                      8
#define AVR32_CAT_PARAMETER                                0x000000f8
#define AVR32_CAT_PARAMETER_MASK                           0x00ffffff
#define AVR32_CAT_PARAMETER_RESETVALUE                     0x00000000
#define AVR32_CAT_PARAMETER_SP                                      0
#define AVR32_CAT_PARAMETER_SP_MASK                        0x00ffffff
#define AVR32_CAT_PARAMETER_SP_OFFSET                               0
#define AVR32_CAT_PARAMETER_SP_SIZE                                24
#define AVR32_CAT_PDRIFT                                            8
#define AVR32_CAT_PDRIFT_MASK                              0x0000ff00
#define AVR32_CAT_PDRIFT_OFFSET                                     8
#define AVR32_CAT_PDRIFT_SIZE                                       8
#define AVR32_CAT_PINMODE0                                 0x00000008
#define AVR32_CAT_PINMODE0_MASK                            0x0001ffff
#define AVR32_CAT_PINMODE0_RESETVALUE                      0x00000000
#define AVR32_CAT_PINMODE0_SP                                       0
#define AVR32_CAT_PINMODE0_SP_MASK                         0x0001ffff
#define AVR32_CAT_PINMODE0_SP_OFFSET                                0
#define AVR32_CAT_PINMODE0_SP_SIZE                                 17
#define AVR32_CAT_PINMODE1                                 0x0000000c
#define AVR32_CAT_PINMODE1_MASK                            0x0001ffff
#define AVR32_CAT_PINMODE1_RESETVALUE                      0x00000000
#define AVR32_CAT_PINMODE1_SP                                       0
#define AVR32_CAT_PINMODE1_SP_MASK                         0x0001ffff
#define AVR32_CAT_PINMODE1_SP_OFFSET                                0
#define AVR32_CAT_PINMODE1_SP_SIZE                                 17
#define AVR32_CAT_PTHR                                             16
#define AVR32_CAT_PTHR_MASK                                0x00ff0000
#define AVR32_CAT_PTHR_OFFSET                                      16
#define AVR32_CAT_PTHR_SIZE                                         8
#define AVR32_CAT_RES                                               0
#define AVR32_CAT_RES_MASK                                 0x0001ffff
#define AVR32_CAT_RES_OFFSET                                        0
#define AVR32_CAT_RES_SIZE                                         17
#define AVR32_CAT_SCR                                      0x00000040
#define AVR32_CAT_SCR_ACQDONE                                       9
#define AVR32_CAT_SCR_ACQDONE_MASK                         0x00000200
#define AVR32_CAT_SCR_ACQDONE_OFFSET                                9
#define AVR32_CAT_SCR_ACQDONE_SIZE                                  1
#define AVR32_CAT_SCR_ACREADY                                       8
#define AVR32_CAT_SCR_ACREADY_MASK                         0x00000100
#define AVR32_CAT_SCR_ACREADY_OFFSET                                8
#define AVR32_CAT_SCR_ACREADY_SIZE                                  1
#define AVR32_CAT_SCR_ATCAL                                         1
#define AVR32_CAT_SCR_ATCAL_MASK                           0x00000002
#define AVR32_CAT_SCR_ATCAL_OFFSET                                  1
#define AVR32_CAT_SCR_ATCAL_SIZE                                    1
#define AVR32_CAT_SCR_ATSC                                          2
#define AVR32_CAT_SCR_ATSC_MASK                            0x00000004
#define AVR32_CAT_SCR_ATSC_OFFSET                                   2
#define AVR32_CAT_SCR_ATSC_SIZE                                     1
#define AVR32_CAT_SCR_MASK                                 0x00000306
#define AVR32_CAT_SCR_RESETVALUE                           0x00000000
#define AVR32_CAT_SELEN                                             0
#define AVR32_CAT_SELEN_MASK                               0x000000ff
#define AVR32_CAT_SELEN_OFFSET                                      0
#define AVR32_CAT_SELEN_SIZE                                        8
#define AVR32_CAT_SENSE                                             0
#define AVR32_CAT_SENSE_MASK                               0x000000ff
#define AVR32_CAT_SENSE_OFFSET                                      0
#define AVR32_CAT_SENSE_SIZE                                        8
#define AVR32_CAT_SHIVAL                                            0
#define AVR32_CAT_SHIVAL_MASK                              0x00000fff
#define AVR32_CAT_SHIVAL_OFFSET                                     0
#define AVR32_CAT_SHIVAL_SIZE                                      12
#define AVR32_CAT_SOURCES                                           0
#define AVR32_CAT_SOURCES_MASK                             0x000000ff
#define AVR32_CAT_SOURCES_OFFSET                                    0
#define AVR32_CAT_SOURCES_SIZE                                      8
#define AVR32_CAT_SP                                                0
#define AVR32_CAT_SPORX                                            16
#define AVR32_CAT_SPORX_MASK                               0x00ff0000
#define AVR32_CAT_SPORX_OFFSET                                     16
#define AVR32_CAT_SPORX_SIZE                                        8
#define AVR32_CAT_SPREAD                                           24
#define AVR32_CAT_SPREAD_MASK                              0x01000000
#define AVR32_CAT_SPREAD_OFFSET                                    24
#define AVR32_CAT_SPREAD_SIZE                                       1
#define AVR32_CAT_SP_OFFSET                                         0
#define AVR32_CAT_SR                                       0x0000003c
#define AVR32_CAT_SR_ACQDONE                                        9
#define AVR32_CAT_SR_ACQDONE_MASK                          0x00000200
#define AVR32_CAT_SR_ACQDONE_OFFSET                                 9
#define AVR32_CAT_SR_ACQDONE_SIZE                                   1
#define AVR32_CAT_SR_ACREADY                                        8
#define AVR32_CAT_SR_ACREADY_MASK                          0x00000100
#define AVR32_CAT_SR_ACREADY_OFFSET                                 8
#define AVR32_CAT_SR_ACREADY_SIZE                                   1
#define AVR32_CAT_SR_ATCAL                                          1
#define AVR32_CAT_SR_ATCAL_MASK                            0x00000002
#define AVR32_CAT_SR_ATCAL_OFFSET                                   1
#define AVR32_CAT_SR_ATCAL_SIZE                                     1
#define AVR32_CAT_SR_ATSC                                           2
#define AVR32_CAT_SR_ATSC_MASK                             0x00000004
#define AVR32_CAT_SR_ATSC_OFFSET                                    2
#define AVR32_CAT_SR_ATSC_SIZE                                      1
#define AVR32_CAT_SR_ATSTATE                                        3
#define AVR32_CAT_SR_ATSTATE_MASK                          0x00000008
#define AVR32_CAT_SR_ATSTATE_OFFSET                                 3
#define AVR32_CAT_SR_ATSTATE_SIZE                                   1
#define AVR32_CAT_SR_ENABLED                                        0
#define AVR32_CAT_SR_ENABLED_MASK                          0x00000001
#define AVR32_CAT_SR_ENABLED_OFFSET                                 0
#define AVR32_CAT_SR_ENABLED_SIZE                                   1
#define AVR32_CAT_SR_MASK                                  0x0000031f
#define AVR32_CAT_SR_MBLREQ                                         4
#define AVR32_CAT_SR_MBLREQ_MASK                           0x00000010
#define AVR32_CAT_SR_MBLREQ_OFFSET                                  4
#define AVR32_CAT_SR_MBLREQ_SIZE                                    1
#define AVR32_CAT_SR_RESETVALUE                            0x00000000
#define AVR32_CAT_SSCFG                                    0x00000060
#define AVR32_CAT_SSCFG_MASK                               0x000000ff
#define AVR32_CAT_SSCFG_MAXDEV                                      0
#define AVR32_CAT_SSCFG_MAXDEV_MASK                        0x000000ff
#define AVR32_CAT_SSCFG_MAXDEV_OFFSET                               0
#define AVR32_CAT_SSCFG_MAXDEV_SIZE                                 8
#define AVR32_CAT_SSCFG_RESETVALUE                         0x00000000
#define AVR32_CAT_SWRST                                             7
#define AVR32_CAT_SWRST_MASK                               0x00000080
#define AVR32_CAT_SWRST_OFFSET                                      7
#define AVR32_CAT_SWRST_SIZE                                        1
#define AVR32_CAT_SYNC                                             25
#define AVR32_CAT_SYNCTIM                                           0
#define AVR32_CAT_SYNCTIM_MASK                             0x00000fff
#define AVR32_CAT_SYNCTIM_OFFSET                                    0
#define AVR32_CAT_SYNCTIM_SIZE                                     12
#define AVR32_CAT_SYNC_MASK                                0x02000000
#define AVR32_CAT_SYNC_OFFSET                                      25
#define AVR32_CAT_SYNC_SIZE                                         1
#define AVR32_CAT_TGACFG0                                  0x00000020
#define AVR32_CAT_TGACFG0_CHLEN                                     8
#define AVR32_CAT_TGACFG0_CHLEN_MASK                       0x0000ff00
#define AVR32_CAT_TGACFG0_CHLEN_OFFSET                              8
#define AVR32_CAT_TGACFG0_CHLEN_SIZE                                8
#define AVR32_CAT_TGACFG0_DIV                                      16
#define AVR32_CAT_TGACFG0_DIV_MASK                         0xffff0000
#define AVR32_CAT_TGACFG0_DIV_OFFSET                               16
#define AVR32_CAT_TGACFG0_DIV_SIZE                                 16
#define AVR32_CAT_TGACFG0_MASK                             0xffffffff
#define AVR32_CAT_TGACFG0_RESETVALUE                       0x00000000
#define AVR32_CAT_TGACFG0_SELEN                                     0
#define AVR32_CAT_TGACFG0_SELEN_MASK                       0x000000ff
#define AVR32_CAT_TGACFG0_SELEN_OFFSET                              0
#define AVR32_CAT_TGACFG0_SELEN_SIZE                                8
#define AVR32_CAT_TGACFG1                                  0x00000024
#define AVR32_CAT_TGACFG1_DILEN                                    16
#define AVR32_CAT_TGACFG1_DILEN_MASK                       0x00ff0000
#define AVR32_CAT_TGACFG1_DILEN_OFFSET                             16
#define AVR32_CAT_TGACFG1_DILEN_SIZE                                8
#define AVR32_CAT_TGACFG1_DISHIFT                                  28
#define AVR32_CAT_TGACFG1_DISHIFT_MASK                     0x30000000
#define AVR32_CAT_TGACFG1_DISHIFT_OFFSET                           28
#define AVR32_CAT_TGACFG1_DISHIFT_SIZE                              2
#define AVR32_CAT_TGACFG1_MASK                             0x33ffffff
#define AVR32_CAT_TGACFG1_MAX                                       0
#define AVR32_CAT_TGACFG1_MAX_MASK                         0x0000ffff
#define AVR32_CAT_TGACFG1_MAX_OFFSET                                0
#define AVR32_CAT_TGACFG1_MAX_SIZE                                 16
#define AVR32_CAT_TGACFG1_RESETVALUE                       0x00000000
#define AVR32_CAT_TGACFG1_SPREAD                                   24
#define AVR32_CAT_TGACFG1_SPREAD_MASK                      0x01000000
#define AVR32_CAT_TGACFG1_SPREAD_OFFSET                            24
#define AVR32_CAT_TGACFG1_SPREAD_SIZE                               1
#define AVR32_CAT_TGACFG1_SYNC                                     25
#define AVR32_CAT_TGACFG1_SYNC_MASK                        0x02000000
#define AVR32_CAT_TGACFG1_SYNC_OFFSET                              25
#define AVR32_CAT_TGACFG1_SYNC_SIZE                                 1
#define AVR32_CAT_TGBCFG0                                  0x00000028
#define AVR32_CAT_TGBCFG0_CHLEN                                     8
#define AVR32_CAT_TGBCFG0_CHLEN_MASK                       0x0000ff00
#define AVR32_CAT_TGBCFG0_CHLEN_OFFSET                              8
#define AVR32_CAT_TGBCFG0_CHLEN_SIZE                                8
#define AVR32_CAT_TGBCFG0_DIV                                      16
#define AVR32_CAT_TGBCFG0_DIV_MASK                         0xffff0000
#define AVR32_CAT_TGBCFG0_DIV_OFFSET                               16
#define AVR32_CAT_TGBCFG0_DIV_SIZE                                 16
#define AVR32_CAT_TGBCFG0_MASK                             0xffffffff
#define AVR32_CAT_TGBCFG0_RESETVALUE                       0x00000000
#define AVR32_CAT_TGBCFG0_SELEN                                     0
#define AVR32_CAT_TGBCFG0_SELEN_MASK                       0x000000ff
#define AVR32_CAT_TGBCFG0_SELEN_OFFSET                              0
#define AVR32_CAT_TGBCFG0_SELEN_SIZE                                8
#define AVR32_CAT_TGBCFG1                                  0x0000002c
#define AVR32_CAT_TGBCFG1_DILEN                                    16
#define AVR32_CAT_TGBCFG1_DILEN_MASK                       0x00ff0000
#define AVR32_CAT_TGBCFG1_DILEN_OFFSET                             16
#define AVR32_CAT_TGBCFG1_DILEN_SIZE                                8
#define AVR32_CAT_TGBCFG1_DISHIFT                                  28
#define AVR32_CAT_TGBCFG1_DISHIFT_MASK                     0x30000000
#define AVR32_CAT_TGBCFG1_DISHIFT_OFFSET                           28
#define AVR32_CAT_TGBCFG1_DISHIFT_SIZE                              2
#define AVR32_CAT_TGBCFG1_MASK                             0x33ffffff
#define AVR32_CAT_TGBCFG1_MAX                                       0
#define AVR32_CAT_TGBCFG1_MAX_MASK                         0x0000ffff
#define AVR32_CAT_TGBCFG1_MAX_OFFSET                                0
#define AVR32_CAT_TGBCFG1_MAX_SIZE                                 16
#define AVR32_CAT_TGBCFG1_RESETVALUE                       0x00000000
#define AVR32_CAT_TGBCFG1_SPREAD                                   24
#define AVR32_CAT_TGBCFG1_SPREAD_MASK                      0x01000000
#define AVR32_CAT_TGBCFG1_SPREAD_OFFSET                            24
#define AVR32_CAT_TGBCFG1_SPREAD_SIZE                               1
#define AVR32_CAT_TGBCFG1_SYNC                                     25
#define AVR32_CAT_TGBCFG1_SYNC_MASK                        0x02000000
#define AVR32_CAT_TGBCFG1_SYNC_OFFSET                              25
#define AVR32_CAT_TGBCFG1_SYNC_SIZE                                 1
#define AVR32_CAT_TRIM                                              8
#define AVR32_CAT_TRIM_MASK                                0x00001f00
#define AVR32_CAT_TRIM_OFFSET                                       8
#define AVR32_CAT_TRIM_SIZE                                         5
#define AVR32_CAT_VARIANT                                          16
#define AVR32_CAT_VARIANT_MASK                             0x000f0000
#define AVR32_CAT_VARIANT_OFFSET                                   16
#define AVR32_CAT_VARIANT_SIZE                                      4
#define AVR32_CAT_VERSION                                  0x000000fc
#define AVR32_CAT_VERSION_MASK                             0x000f0fff
#define AVR32_CAT_VERSION_OFFSET                                    0
#define AVR32_CAT_VERSION_RESETVALUE                       0x00000000
#define AVR32_CAT_VERSION_SIZE                                     12
#define AVR32_CAT_VERSION_VARIANT                                  16
#define AVR32_CAT_VERSION_VARIANT_MASK                     0x000f0000
#define AVR32_CAT_VERSION_VARIANT_OFFSET                           16
#define AVR32_CAT_VERSION_VARIANT_SIZE                              4
#define AVR32_CAT_VERSION_VERSION                                   0
#define AVR32_CAT_VERSION_VERSION_MASK                     0x00000fff
#define AVR32_CAT_VERSION_VERSION_OFFSET                            0
#define AVR32_CAT_VERSION_VERSION_SIZE                             12
#define AVR32_CAT_Y                                                24
#define AVR32_CAT_Y_MASK                                   0xff000000
#define AVR32_CAT_Y_OFFSET                                         24
#define AVR32_CAT_Y_SIZE                                            8




#ifdef __AVR32_ABI_COMPILER__


typedef struct avr32_cat_ctrl_t {
    unsigned int                 :24;
    unsigned int swrst           : 1;
    unsigned int                 : 6;
    unsigned int en              : 1;
} avr32_cat_ctrl_t;



typedef struct avr32_cat_atpins_t {
    unsigned int                 :23;
    unsigned int aten            : 1;
    unsigned int                 : 3;
    unsigned int atsp            : 5;
} avr32_cat_atpins_t;



typedef struct avr32_cat_pinmode0_t {
    unsigned int                 :15;
    unsigned int sp              :17;
} avr32_cat_pinmode0_t;



typedef struct avr32_cat_pinmode1_t {
    unsigned int                 :15;
    unsigned int sp              :17;
} avr32_cat_pinmode1_t;



typedef struct avr32_cat_atcfg0_t {
    unsigned int div             :16;
    unsigned int chlen           : 8;
    unsigned int selen           : 8;
} avr32_cat_atcfg0_t;



typedef struct avr32_cat_atcfg1_t {
    unsigned int                 : 2;
    unsigned int dishift         : 2;
    unsigned int                 : 2;
    unsigned int sync            : 1;
    unsigned int spread          : 1;
    unsigned int dilen           : 8;
    unsigned int max             :16;
} avr32_cat_atcfg1_t;



typedef struct avr32_cat_atcfg2_t {
    unsigned int                 :12;
    unsigned int filter          : 4;
    unsigned int outsens         : 8;
    unsigned int sense           : 8;
} avr32_cat_atcfg2_t;



typedef struct avr32_cat_atcfg3_t {
    unsigned int                 : 8;
    unsigned int pthr            : 8;
    unsigned int pdrift          : 8;
    unsigned int ndrift          : 8;
} avr32_cat_atcfg3_t;



typedef struct avr32_cat_tgacfg0_t {
    unsigned int div             :16;
    unsigned int chlen           : 8;
    unsigned int selen           : 8;
} avr32_cat_tgacfg0_t;



typedef struct avr32_cat_tgacfg1_t {
    unsigned int                 : 2;
    unsigned int dishift         : 2;
    unsigned int                 : 2;
    unsigned int sync            : 1;
    unsigned int spread          : 1;
    unsigned int dilen           : 8;
    unsigned int max             :16;
} avr32_cat_tgacfg1_t;



typedef struct avr32_cat_tgbcfg0_t {
    unsigned int div             :16;
    unsigned int chlen           : 8;
    unsigned int selen           : 8;
} avr32_cat_tgbcfg0_t;



typedef struct avr32_cat_tgbcfg1_t {
    unsigned int                 : 2;
    unsigned int dishift         : 2;
    unsigned int                 : 2;
    unsigned int sync            : 1;
    unsigned int spread          : 1;
    unsigned int dilen           : 8;
    unsigned int max             :16;
} avr32_cat_tgbcfg1_t;



typedef struct avr32_cat_mgcfg0_t {
    unsigned int div             :16;
    unsigned int chlen           : 8;
    unsigned int selen           : 8;
} avr32_cat_mgcfg0_t;



typedef struct avr32_cat_mgcfg1_t {
    unsigned int                 : 2;
    unsigned int dishift         : 2;
    unsigned int                 : 2;
    unsigned int sync            : 1;
    unsigned int spread          : 1;
    unsigned int dilen           : 8;
    unsigned int max             :16;
} avr32_cat_mgcfg1_t;



typedef struct avr32_cat_mgcfg2_t {
    unsigned int acctrl          : 1;
    unsigned int consen          : 3;
    unsigned int                 : 4;
    unsigned int cxdilen         : 8;
    unsigned int                 : 4;
    unsigned int synctim         :12;
} avr32_cat_mgcfg2_t;



typedef struct avr32_cat_sr_t {
    unsigned int                 :22;
    unsigned int acqdone         : 1;
    unsigned int acready         : 1;
    unsigned int                 : 3;
    unsigned int mblreq          : 1;
    unsigned int atstate         : 1;
    unsigned int atsc            : 1;
    unsigned int atcal           : 1;
    unsigned int enabled         : 1;
} avr32_cat_sr_t;



typedef struct avr32_cat_scr_t {
    unsigned int                 :22;
    unsigned int acqdone         : 1;
    unsigned int acready         : 1;
    unsigned int                 : 5;
    unsigned int atsc            : 1;
    unsigned int atcal           : 1;
    unsigned int                 : 1;
} avr32_cat_scr_t;



typedef struct avr32_cat_ier_t {
    unsigned int                 :22;
    unsigned int acqdone         : 1;
    unsigned int acready         : 1;
    unsigned int                 : 5;
    unsigned int atsc            : 1;
    unsigned int atcal           : 1;
    unsigned int                 : 1;
} avr32_cat_ier_t;



typedef struct avr32_cat_idr_t {
    unsigned int                 :22;
    unsigned int acqdone         : 1;
    unsigned int acready         : 1;
    unsigned int                 : 5;
    unsigned int atsc            : 1;
    unsigned int atcal           : 1;
    unsigned int                 : 1;
} avr32_cat_idr_t;



typedef struct avr32_cat_imr_t {
    unsigned int                 :22;
    unsigned int acqdone         : 1;
    unsigned int acready         : 1;
    unsigned int                 : 5;
    unsigned int atsc            : 1;
    unsigned int atcal           : 1;
    unsigned int                 : 1;
} avr32_cat_imr_t;



typedef struct avr32_cat_aisr_t {
    unsigned int                 :30;
    unsigned int acqsel          : 2;
} avr32_cat_aisr_t;



typedef struct avr32_cat_acount_t {
    unsigned int y               : 8;
    unsigned int sporx           : 8;
    unsigned int count           :16;
} avr32_cat_acount_t;



typedef struct avr32_cat_mblen_t {
    unsigned int burst0          : 8;
    unsigned int burst1          : 8;
    unsigned int burst2          : 8;
    unsigned int burst3          : 8;
} avr32_cat_mblen_t;



typedef struct avr32_cat_dics_t {
    unsigned int fsources        : 8;
    unsigned int glen            : 1;
    unsigned int                 : 5;
    unsigned int intvrefsel      : 1;
    unsigned int intrefsel       : 1;
    unsigned int                 : 3;
    unsigned int trim            : 5;
    unsigned int sources         : 8;
} avr32_cat_dics_t;



typedef struct avr32_cat_sscfg_t {
    unsigned int                 :24;
    unsigned int maxdev          : 8;
} avr32_cat_sscfg_t;



typedef struct avr32_cat_csares_t {
    unsigned int                 :15;
    unsigned int res             :17;
} avr32_cat_csares_t;



typedef struct avr32_cat_csbres_t {
    unsigned int                 :15;
    unsigned int res             :17;
} avr32_cat_csbres_t;



typedef struct avr32_cat_atbase_t {
    unsigned int                 :16;
    unsigned int count           :16;
} avr32_cat_atbase_t;



typedef struct avr32_cat_atcurr_t {
    unsigned int                 :16;
    unsigned int count           :16;
} avr32_cat_atcurr_t;



typedef struct avr32_cat_acshi0_t {
    unsigned int                 :20;
    unsigned int shival          :12;
} avr32_cat_acshi0_t;



typedef struct avr32_cat_acshi1_t {
    unsigned int                 :20;
    unsigned int shival          :12;
} avr32_cat_acshi1_t;



typedef struct avr32_cat_acshi2_t {
    unsigned int                 :20;
    unsigned int shival          :12;
} avr32_cat_acshi2_t;



typedef struct avr32_cat_acshi3_t {
    unsigned int                 :20;
    unsigned int shival          :12;
} avr32_cat_acshi3_t;



typedef struct avr32_cat_acshi4_t {
    unsigned int                 :20;
    unsigned int shival          :12;
} avr32_cat_acshi4_t;



typedef struct avr32_cat_acshi5_t {
    unsigned int                 :20;
    unsigned int shival          :12;
} avr32_cat_acshi5_t;



typedef struct avr32_cat_acshi6_t {
    unsigned int                 :20;
    unsigned int shival          :12;
} avr32_cat_acshi6_t;



typedef struct avr32_cat_acshi7_t {
    unsigned int                 :20;
    unsigned int shival          :12;
} avr32_cat_acshi7_t;



typedef struct avr32_cat_parameter_t {
    unsigned int                 : 8;
    unsigned int sp              :24;
} avr32_cat_parameter_t;



typedef struct avr32_cat_version_t {
    unsigned int                 :12;
    unsigned int variant         : 4;
    unsigned int                 : 4;
    unsigned int version         :12;
} avr32_cat_version_t;



typedef struct avr32_cat_t {
  union {
          unsigned long                  ctrl      ;//0x0000
          avr32_cat_ctrl_t               CTRL      ;
  };
  union {
          unsigned long                  atpins    ;//0x0004
          avr32_cat_atpins_t             ATPINS    ;
  };
  union {
          unsigned long                  pinmode0  ;//0x0008
          avr32_cat_pinmode0_t           PINMODE0  ;
  };
  union {
          unsigned long                  pinmode1  ;//0x000c
          avr32_cat_pinmode1_t           PINMODE1  ;
  };
  union {
          unsigned long                  atcfg0    ;//0x0010
          avr32_cat_atcfg0_t             ATCFG0    ;
  };
  union {
          unsigned long                  atcfg1    ;//0x0014
          avr32_cat_atcfg1_t             ATCFG1    ;
  };
  union {
          unsigned long                  atcfg2    ;//0x0018
          avr32_cat_atcfg2_t             ATCFG2    ;
  };
  union {
          unsigned long                  atcfg3    ;//0x001c
          avr32_cat_atcfg3_t             ATCFG3    ;
  };
  union {
          unsigned long                  tgacfg0   ;//0x0020
          avr32_cat_tgacfg0_t            TGACFG0   ;
  };
  union {
          unsigned long                  tgacfg1   ;//0x0024
          avr32_cat_tgacfg1_t            TGACFG1   ;
  };
  union {
          unsigned long                  tgbcfg0   ;//0x0028
          avr32_cat_tgbcfg0_t            TGBCFG0   ;
  };
  union {
          unsigned long                  tgbcfg1   ;//0x002c
          avr32_cat_tgbcfg1_t            TGBCFG1   ;
  };
  union {
          unsigned long                  mgcfg0    ;//0x0030
          avr32_cat_mgcfg0_t             MGCFG0    ;
  };
  union {
          unsigned long                  mgcfg1    ;//0x0034
          avr32_cat_mgcfg1_t             MGCFG1    ;
  };
  union {
          unsigned long                  mgcfg2    ;//0x0038
          avr32_cat_mgcfg2_t             MGCFG2    ;
  };
  union {
    const unsigned long                  sr        ;//0x003c
    const avr32_cat_sr_t                 SR        ;
  };
  union {
          unsigned long                  scr       ;//0x0040
          avr32_cat_scr_t                SCR       ;
  };
  union {
          unsigned long                  ier       ;//0x0044
          avr32_cat_ier_t                IER       ;
  };
  union {
          unsigned long                  idr       ;//0x0048
          avr32_cat_idr_t                IDR       ;
  };
  union {
    const unsigned long                  imr       ;//0x004c
    const avr32_cat_imr_t                IMR       ;
  };
  union {
          unsigned long                  aisr      ;//0x0050
          avr32_cat_aisr_t               AISR      ;
  };
  union {
    const unsigned long                  acount    ;//0x0054
    const avr32_cat_acount_t             ACOUNT    ;
  };
  union {
          unsigned long                  mblen     ;//0x0058
          avr32_cat_mblen_t              MBLEN     ;
  };
  union {
          unsigned long                  dics      ;//0x005c
          avr32_cat_dics_t               DICS      ;
  };
  union {
          unsigned long                  sscfg     ;//0x0060
          avr32_cat_sscfg_t              SSCFG     ;
  };
  union {
          unsigned long                  csares    ;//0x0064
          avr32_cat_csares_t             CSARES    ;
  };
  union {
          unsigned long                  csbres    ;//0x0068
          avr32_cat_csbres_t             CSBRES    ;
  };
  union {
    const unsigned long                  atbase    ;//0x006c
    const avr32_cat_atbase_t             ATBASE    ;
  };
  union {
    const unsigned long                  atcurr    ;//0x0070
    const avr32_cat_atcurr_t             ATCURR    ;
  };
          unsigned int                   :32       ;//0x0074
          unsigned int                   :32       ;//0x0078
          unsigned int                   :32       ;//0x007c
  union {
          unsigned long                  acshi0    ;//0x0080
          avr32_cat_acshi0_t             ACSHI0    ;
  };
  union {
          unsigned long                  acshi1    ;//0x0084
          avr32_cat_acshi1_t             ACSHI1    ;
  };
  union {
          unsigned long                  acshi2    ;//0x0088
          avr32_cat_acshi2_t             ACSHI2    ;
  };
  union {
          unsigned long                  acshi3    ;//0x008c
          avr32_cat_acshi3_t             ACSHI3    ;
  };
  union {
          unsigned long                  acshi4    ;//0x0090
          avr32_cat_acshi4_t             ACSHI4    ;
  };
  union {
          unsigned long                  acshi5    ;//0x0094
          avr32_cat_acshi5_t             ACSHI5    ;
  };
  union {
          unsigned long                  acshi6    ;//0x0098
          avr32_cat_acshi6_t             ACSHI6    ;
  };
  union {
          unsigned long                  acshi7    ;//0x009c
          avr32_cat_acshi7_t             ACSHI7    ;
  };
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
  union {
    const unsigned long                  parameter ;//0x00f8
    const avr32_cat_parameter_t          PARAMETER ;
  };
  union {
    const unsigned long                  version   ;//0x00fc
    const avr32_cat_version_t            VERSION   ;
  };
} avr32_cat_t;



/*#ifdef __AVR32_ABI_COMPILER__*/
#endif

/*#ifdef AVR32_CAT_200_H_INCLUDED*/
#endif

