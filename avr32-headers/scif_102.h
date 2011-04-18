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
 * Model        : UC3L064
 * Revision     : $Revision: 74772 $
 * Checkin Date : $Date: 2010-05-14 06:51:12 +0200 (Fri, 14 May 2010) $ 
 *
 ****************************************************************************/
#ifndef AVR32_SCIF_102_H_INCLUDED
#define AVR32_SCIF_102_H_INCLUDED

#define AVR32_SCIF_H_VERSION 102

#include "avr32/abi.h"


/*
 Note to user:

 The following defines are always generated:
 - Register offset: AVR32_SCIF_<register>
 - Bitfield mask:   AVR32_SCIF_<register>_<bitfield>
 - Bitfield offset: AVR32_SCIF_<register>_<bitfield>_OFFSET
 - Bitfield size:   AVR32_SCIF_<register>_<bitfield>_SIZE
 - Bitfield values: AVR32_SCIF_<register>_<bitfield>_<value name>

 The following defines are generated if they don't cause ambiguities,
 i.e. the name is unique, or all values with that name are the same.
 - Bitfield mask:   AVR32_SCIF_<bitfield>
 - Bitfield offset: AVR32_SCIF_<bitfield>_OFFSET
 - Bitfield size:   AVR32_SCIF_<bitfield>_SIZE
 - Bitfield values: AVR32_SCIF_<bitfield>_<value name>
 - Bitfield values: AVR32_SCIF_<value name>

 All defines are sorted alphabetically.
*/


#define AVR32_SCIF_ADDR                                              0
#define AVR32_SCIF_ADDR_MASK                                0x000003ff
#define AVR32_SCIF_ADDR_OFFSET                                       0
#define AVR32_SCIF_ADDR_SIZE                                        10
#define AVR32_SCIF_AE                                               31
#define AVR32_SCIF_AE_MASK                                  0x80000000
#define AVR32_SCIF_AE_OFFSET                                        31
#define AVR32_SCIF_AE_SIZE                                           1
#define AVR32_SCIF_AGC                                               3
#define AVR32_SCIF_AGC_MASK                                 0x00000008
#define AVR32_SCIF_AGC_OFFSET                                        3
#define AVR32_SCIF_AGC_SIZE                                          1
#define AVR32_SCIF_AMPLITUDE                                         8
#define AVR32_SCIF_AMPLITUDE_MASK                           0x00001f00
#define AVR32_SCIF_AMPLITUDE_OFFSET                                  8
#define AVR32_SCIF_AMPLITUDE_SIZE                                    5
#define AVR32_SCIF_BGCR                                     0x00000040
#define AVR32_SCIF_BGCR_CALIB                                        0
#define AVR32_SCIF_BGCR_CALIB_MASK                          0x00000007
#define AVR32_SCIF_BGCR_CALIB_OFFSET                                 0
#define AVR32_SCIF_BGCR_CALIB_SIZE                                   3
#define AVR32_SCIF_BGCR_FCD                                         16
#define AVR32_SCIF_BGCR_FCD_MASK                            0x00010000
#define AVR32_SCIF_BGCR_FCD_OFFSET                                  16
#define AVR32_SCIF_BGCR_FCD_SIZE                                     1
#define AVR32_SCIF_BGCR_MASK                                0x80010007
#define AVR32_SCIF_BGCR_RESETVALUE                          0x00000000
#define AVR32_SCIF_BGCR_SFV                                         31
#define AVR32_SCIF_BGCR_SFV_MASK                            0x80000000
#define AVR32_SCIF_BGCR_SFV_OFFSET                                  31
#define AVR32_SCIF_BGCR_SFV_SIZE                                     1
#define AVR32_SCIF_BOD                                      0x0000003c
#define AVR32_SCIF_BODDET                                            7
#define AVR32_SCIF_BODDET_MASK                              0x00000080
#define AVR32_SCIF_BODDET_OFFSET                                     7
#define AVR32_SCIF_BODDET_SIZE                                       1
#define AVR32_SCIF_BODIFAVERSION                            0x000003d4
#define AVR32_SCIF_BODIFAVERSION_MASK                       0x000f0fff
#define AVR32_SCIF_BODIFAVERSION_RESETVALUE                 0x00000000
#define AVR32_SCIF_BODIFAVERSION_VARIANT                            16
#define AVR32_SCIF_BODIFAVERSION_VARIANT_MASK               0x000f0000
#define AVR32_SCIF_BODIFAVERSION_VARIANT_OFFSET                     16
#define AVR32_SCIF_BODIFAVERSION_VARIANT_SIZE                        4
#define AVR32_SCIF_BODIFAVERSION_VERSION                             0
#define AVR32_SCIF_BODIFAVERSION_VERSION_MASK               0x00000fff
#define AVR32_SCIF_BODIFAVERSION_VERSION_OFFSET                      0
#define AVR32_SCIF_BODIFAVERSION_VERSION_SIZE                       12
#define AVR32_SCIF_BOD_CTRL                                          8
#define AVR32_SCIF_BOD_CTRL_MASK                            0x00000300
#define AVR32_SCIF_BOD_CTRL_OFFSET                                   8
#define AVR32_SCIF_BOD_CTRL_SIZE                                     2
#define AVR32_SCIF_BOD_FCD                                          16
#define AVR32_SCIF_BOD_FCD_MASK                             0x00010000
#define AVR32_SCIF_BOD_FCD_OFFSET                                   16
#define AVR32_SCIF_BOD_FCD_SIZE                                      1
#define AVR32_SCIF_BOD_HYST                                          6
#define AVR32_SCIF_BOD_HYST_MASK                            0x00000040
#define AVR32_SCIF_BOD_HYST_OFFSET                                   6
#define AVR32_SCIF_BOD_HYST_SIZE                                     1
#define AVR32_SCIF_BOD_LEVEL                                         0
#define AVR32_SCIF_BOD_LEVEL_MASK                           0x0000003f
#define AVR32_SCIF_BOD_LEVEL_OFFSET                                  0
#define AVR32_SCIF_BOD_LEVEL_SIZE                                    6
#define AVR32_SCIF_BOD_MASK                                 0x8001037f
#define AVR32_SCIF_BOD_RESETVALUE                           0x00000000
#define AVR32_SCIF_BOD_SFV                                          31
#define AVR32_SCIF_BOD_SFV_MASK                             0x80000000
#define AVR32_SCIF_BOD_SFV_OFFSET                                   31
#define AVR32_SCIF_BOD_SFV_SIZE                                      1
#define AVR32_SCIF_BR0                                      0x0000005c
#define AVR32_SCIF_BR0_MASK                                 0x00000000
#define AVR32_SCIF_BR0_RESETVALUE                           0x00000000
#define AVR32_SCIF_BR1                                      0x00000060
#define AVR32_SCIF_BR1_MASK                                 0x00000000
#define AVR32_SCIF_BR1_RESETVALUE                           0x00000000
#define AVR32_SCIF_BR2                                      0x00000064
#define AVR32_SCIF_BR2_MASK                                 0x00000000
#define AVR32_SCIF_BR2_RESETVALUE                           0x00000000
#define AVR32_SCIF_BR3                                      0x00000068
#define AVR32_SCIF_BR3_MASK                                 0x00000000
#define AVR32_SCIF_BR3_RESETVALUE                           0x00000000
#define AVR32_SCIF_BRIFARDY                                         16
#define AVR32_SCIF_BRIFARDY_MASK                            0x00010000
#define AVR32_SCIF_BRIFARDY_OFFSET                                  16
#define AVR32_SCIF_BRIFARDY_SIZE                                     1
#define AVR32_SCIF_BRIFAVALID                                       30
#define AVR32_SCIF_BRIFAVALID_MASK                          0x40000000
#define AVR32_SCIF_BRIFAVALID_OFFSET                                30
#define AVR32_SCIF_BRIFAVALID_SIZE                                   1
#define AVR32_SCIF_BRIFAVERSION                             0x000003f0
#define AVR32_SCIF_BRIFAVERSION_MASK                        0x000f0fff
#define AVR32_SCIF_BRIFAVERSION_RESETVALUE                  0x00000000
#define AVR32_SCIF_BRIFAVERSION_VARIANT                             16
#define AVR32_SCIF_BRIFAVERSION_VARIANT_MASK                0x000f0000
#define AVR32_SCIF_BRIFAVERSION_VARIANT_OFFSET                      16
#define AVR32_SCIF_BRIFAVERSION_VARIANT_SIZE                         4
#define AVR32_SCIF_BRIFAVERSION_VERSION                              0
#define AVR32_SCIF_BRIFAVERSION_VERSION_MASK                0x00000fff
#define AVR32_SCIF_BRIFAVERSION_VERSION_OFFSET                       0
#define AVR32_SCIF_BRIFAVERSION_VERSION_SIZE                        12
#define AVR32_SCIF_CEN                                               0
#define AVR32_SCIF_CEN_MASK                                 0x00000001
#define AVR32_SCIF_CEN_OFFSET                                        0
#define AVR32_SCIF_CEN_SIZE                                          1
#define AVR32_SCIF_COARSE                                           24
#define AVR32_SCIF_COARSE_MASK                              0xff000000
#define AVR32_SCIF_COARSE_OFFSET                                    24
#define AVR32_SCIF_COARSE_SIZE                                       8
#define AVR32_SCIF_CSTEP                                             0
#define AVR32_SCIF_CSTEP_MASK                               0x000000ff
#define AVR32_SCIF_CSTEP_OFFSET                                      0
#define AVR32_SCIF_CSTEP_SIZE                                        8
#define AVR32_SCIF_DEEPDIS                                          17
#define AVR32_SCIF_DEEPDIS_MASK                             0x00020000
#define AVR32_SCIF_DEEPDIS_OFFSET                                   17
#define AVR32_SCIF_DEEPDIS_SIZE                                      1
#define AVR32_SCIF_DFLL0CONF                                0x00000024
#define AVR32_SCIF_DFLL0CONF_COARSE                                 24
#define AVR32_SCIF_DFLL0CONF_COARSE_MASK                    0xff000000
#define AVR32_SCIF_DFLL0CONF_COARSE_OFFSET                          24
#define AVR32_SCIF_DFLL0CONF_COARSE_SIZE                             8
#define AVR32_SCIF_DFLL0CONF_DITHER                                  2
#define AVR32_SCIF_DFLL0CONF_DITHER_MASK                    0x00000004
#define AVR32_SCIF_DFLL0CONF_DITHER_OFFSET                           2
#define AVR32_SCIF_DFLL0CONF_DITHER_SIZE                             1
#define AVR32_SCIF_DFLL0CONF_EN                                      0
#define AVR32_SCIF_DFLL0CONF_EN_MASK                        0x00000001
#define AVR32_SCIF_DFLL0CONF_EN_OFFSET                               0
#define AVR32_SCIF_DFLL0CONF_EN_SIZE                                 1
#define AVR32_SCIF_DFLL0CONF_FINE                                    8
#define AVR32_SCIF_DFLL0CONF_FINE_MASK                      0x0001ff00
#define AVR32_SCIF_DFLL0CONF_FINE_OFFSET                             8
#define AVR32_SCIF_DFLL0CONF_FINE_SIZE                               9
#define AVR32_SCIF_DFLL0CONF_MASK                           0xff01ff07
#define AVR32_SCIF_DFLL0CONF_MODE                                    1
#define AVR32_SCIF_DFLL0CONF_MODE_MASK                      0x00000002
#define AVR32_SCIF_DFLL0CONF_MODE_OFFSET                             1
#define AVR32_SCIF_DFLL0CONF_MODE_SIZE                               1
#define AVR32_SCIF_DFLL0CONF_RESETVALUE                     0x00000000
#define AVR32_SCIF_DFLL0FMUL                                0x00000028
#define AVR32_SCIF_DFLL0FMUL_FMUL                                    0
#define AVR32_SCIF_DFLL0FMUL_FMUL_MASK                      0xffffffff
#define AVR32_SCIF_DFLL0FMUL_FMUL_OFFSET                             0
#define AVR32_SCIF_DFLL0FMUL_FMUL_SIZE                              32
#define AVR32_SCIF_DFLL0FMUL_MASK                           0xffffffff
#define AVR32_SCIF_DFLL0FMUL_RESETVALUE                     0x00000000
#define AVR32_SCIF_DFLL0LOCKA                                       10
#define AVR32_SCIF_DFLL0LOCKA_MASK                          0x00000400
#define AVR32_SCIF_DFLL0LOCKA_OFFSET                                10
#define AVR32_SCIF_DFLL0LOCKA_SIZE                                   1
#define AVR32_SCIF_DFLL0LOCKC                                        8
#define AVR32_SCIF_DFLL0LOCKC_MASK                          0x00000100
#define AVR32_SCIF_DFLL0LOCKC_OFFSET                                 8
#define AVR32_SCIF_DFLL0LOCKC_SIZE                                   1
#define AVR32_SCIF_DFLL0LOCKF                                        9
#define AVR32_SCIF_DFLL0LOCKF_MASK                          0x00000200
#define AVR32_SCIF_DFLL0LOCKF_OFFSET                                 9
#define AVR32_SCIF_DFLL0LOCKF_SIZE                                   1
#define AVR32_SCIF_DFLL0LOCKLOSTA                                   13
#define AVR32_SCIF_DFLL0LOCKLOSTA_MASK                      0x00002000
#define AVR32_SCIF_DFLL0LOCKLOSTA_OFFSET                            13
#define AVR32_SCIF_DFLL0LOCKLOSTA_SIZE                               1
#define AVR32_SCIF_DFLL0LOCKLOSTC                                   11
#define AVR32_SCIF_DFLL0LOCKLOSTC_MASK                      0x00000800
#define AVR32_SCIF_DFLL0LOCKLOSTC_OFFSET                            11
#define AVR32_SCIF_DFLL0LOCKLOSTC_SIZE                               1
#define AVR32_SCIF_DFLL0LOCKLOSTF                                   12
#define AVR32_SCIF_DFLL0LOCKLOSTF_MASK                      0x00001000
#define AVR32_SCIF_DFLL0LOCKLOSTF_OFFSET                            12
#define AVR32_SCIF_DFLL0LOCKLOSTF_SIZE                               1
#define AVR32_SCIF_DFLL0RATIO                               0x00000034
#define AVR32_SCIF_DFLL0RATIO_MASK                          0xffff001f
#define AVR32_SCIF_DFLL0RATIO_NUMREF                                 0
#define AVR32_SCIF_DFLL0RATIO_NUMREF_MASK                   0x0000001f
#define AVR32_SCIF_DFLL0RATIO_NUMREF_OFFSET                          0
#define AVR32_SCIF_DFLL0RATIO_NUMREF_SIZE                            5
#define AVR32_SCIF_DFLL0RATIO_RATIODIFF                             16
#define AVR32_SCIF_DFLL0RATIO_RATIODIFF_MASK                0xffff0000
#define AVR32_SCIF_DFLL0RATIO_RATIODIFF_OFFSET                      16
#define AVR32_SCIF_DFLL0RATIO_RATIODIFF_SIZE                        16
#define AVR32_SCIF_DFLL0RATIO_RESETVALUE                    0x00000000
#define AVR32_SCIF_DFLL0RCS                                         15
#define AVR32_SCIF_DFLL0RCS_MASK                            0x00008000
#define AVR32_SCIF_DFLL0RCS_OFFSET                                  15
#define AVR32_SCIF_DFLL0RCS_SIZE                                     1
#define AVR32_SCIF_DFLL0RDY                                         14
#define AVR32_SCIF_DFLL0RDY_MASK                            0x00004000
#define AVR32_SCIF_DFLL0RDY_OFFSET                                  14
#define AVR32_SCIF_DFLL0RDY_SIZE                                     1
#define AVR32_SCIF_DFLL0SSG                                 0x00000030
#define AVR32_SCIF_DFLL0SSG_AMPLITUDE                                8
#define AVR32_SCIF_DFLL0SSG_AMPLITUDE_MASK                  0x00001f00
#define AVR32_SCIF_DFLL0SSG_AMPLITUDE_OFFSET                         8
#define AVR32_SCIF_DFLL0SSG_AMPLITUDE_SIZE                           5
#define AVR32_SCIF_DFLL0SSG_EN                                       0
#define AVR32_SCIF_DFLL0SSG_EN_MASK                         0x00000001
#define AVR32_SCIF_DFLL0SSG_EN_OFFSET                                0
#define AVR32_SCIF_DFLL0SSG_EN_SIZE                                  1
#define AVR32_SCIF_DFLL0SSG_MASK                            0x001f1f03
#define AVR32_SCIF_DFLL0SSG_PRBS                                     1
#define AVR32_SCIF_DFLL0SSG_PRBS_MASK                       0x00000002
#define AVR32_SCIF_DFLL0SSG_PRBS_OFFSET                              1
#define AVR32_SCIF_DFLL0SSG_PRBS_SIZE                                1
#define AVR32_SCIF_DFLL0SSG_RESETVALUE                      0x00000000
#define AVR32_SCIF_DFLL0SSG_STEPSIZE                                16
#define AVR32_SCIF_DFLL0SSG_STEPSIZE_MASK                   0x001f0000
#define AVR32_SCIF_DFLL0SSG_STEPSIZE_OFFSET                         16
#define AVR32_SCIF_DFLL0SSG_STEPSIZE_SIZE                            5
#define AVR32_SCIF_DFLL0STEP                                0x0000002c
#define AVR32_SCIF_DFLL0STEP_CSTEP                                   0
#define AVR32_SCIF_DFLL0STEP_CSTEP_MASK                     0x000000ff
#define AVR32_SCIF_DFLL0STEP_CSTEP_OFFSET                            0
#define AVR32_SCIF_DFLL0STEP_CSTEP_SIZE                              8
#define AVR32_SCIF_DFLL0STEP_FSTEP                                  16
#define AVR32_SCIF_DFLL0STEP_FSTEP_MASK                     0x01ff0000
#define AVR32_SCIF_DFLL0STEP_FSTEP_OFFSET                           16
#define AVR32_SCIF_DFLL0STEP_FSTEP_SIZE                              9
#define AVR32_SCIF_DFLL0STEP_MASK                           0x01ff00ff
#define AVR32_SCIF_DFLL0STEP_RESETVALUE                     0x00000000
#define AVR32_SCIF_DFLL0SYNC                                0x00000038
#define AVR32_SCIF_DFLL0SYNC_MASK                           0x00000001
#define AVR32_SCIF_DFLL0SYNC_RESETVALUE                     0x00000000
#define AVR32_SCIF_DFLL0SYNC_SYNC                                    0
#define AVR32_SCIF_DFLL0SYNC_SYNC_MASK                      0x00000001
#define AVR32_SCIF_DFLL0SYNC_SYNC_OFFSET                             0
#define AVR32_SCIF_DFLL0SYNC_SYNC_SIZE                               1
#define AVR32_SCIF_DFLLIFVERSION                            0x000003d0
#define AVR32_SCIF_DFLLIFVERSION_MASK                       0x000f0fff
#define AVR32_SCIF_DFLLIFVERSION_RESETVALUE                 0x00000000
#define AVR32_SCIF_DFLLIFVERSION_VARIANT                            16
#define AVR32_SCIF_DFLLIFVERSION_VARIANT_MASK               0x000f0000
#define AVR32_SCIF_DFLLIFVERSION_VARIANT_OFFSET                     16
#define AVR32_SCIF_DFLLIFVERSION_VARIANT_SIZE                        4
#define AVR32_SCIF_DFLLIFVERSION_VERSION                             0
#define AVR32_SCIF_DFLLIFVERSION_VERSION_MASK               0x00000fff
#define AVR32_SCIF_DFLLIFVERSION_VERSION_OFFSET                      0
#define AVR32_SCIF_DFLLIFVERSION_VERSION_SIZE                       12
#define AVR32_SCIF_DITHER                                            2
#define AVR32_SCIF_DITHER_MASK                              0x00000004
#define AVR32_SCIF_DITHER_OFFSET                                     2
#define AVR32_SCIF_DITHER_SIZE                                       1
#define AVR32_SCIF_DIV                                              16
#define AVR32_SCIF_DIVEN                                             1
#define AVR32_SCIF_DIVEN_MASK                               0x00000002
#define AVR32_SCIF_DIVEN_OFFSET                                      1
#define AVR32_SCIF_DIVEN_SIZE                                        1
#define AVR32_SCIF_DIV_MASK                                 0x00ff0000
#define AVR32_SCIF_DIV_OFFSET                                       16
#define AVR32_SCIF_DIV_SIZE                                          8
#define AVR32_SCIF_EN1K                                              3
#define AVR32_SCIF_EN1K_MASK                                0x00000008
#define AVR32_SCIF_EN1K_OFFSET                                       3
#define AVR32_SCIF_EN1K_SIZE                                         1
#define AVR32_SCIF_EN32K                                             2
#define AVR32_SCIF_EN32K_MASK                               0x00000004
#define AVR32_SCIF_EN32K_OFFSET                                      2
#define AVR32_SCIF_EN32K_SIZE                                        1
#define AVR32_SCIF_EN_SIZE                                           1
#define AVR32_SCIF_FCD                                              16
#define AVR32_SCIF_FCD_MASK                                 0x00010000
#define AVR32_SCIF_FCD_OFFSET                                       16
#define AVR32_SCIF_FCD_SIZE                                          1
#define AVR32_SCIF_FINE                                              8
#define AVR32_SCIF_FINE_MASK                                0x0001ff00
#define AVR32_SCIF_FINE_OFFSET                                       8
#define AVR32_SCIF_FINE_SIZE                                         9
#define AVR32_SCIF_FMUL                                              0
#define AVR32_SCIF_FMUL_MASK                                0xffffffff
#define AVR32_SCIF_FMUL_OFFSET                                       0
#define AVR32_SCIF_FMUL_SIZE                                        32
#define AVR32_SCIF_FS                                                7
#define AVR32_SCIF_FSTEP                                            16
#define AVR32_SCIF_FSTEP_MASK                               0x01ff0000
#define AVR32_SCIF_FSTEP_OFFSET                                     16
#define AVR32_SCIF_FSTEP_SIZE                                        9
#define AVR32_SCIF_FS_MASK                                  0x00000080
#define AVR32_SCIF_FS_OFFSET                                         7
#define AVR32_SCIF_FS_SIZE                                           1
#define AVR32_SCIF_GAIN                                              1
#define AVR32_SCIF_GAIN_MASK                                0x00000006
#define AVR32_SCIF_GAIN_OFFSET                                       1
#define AVR32_SCIF_GAIN_SIZE                                         2
#define AVR32_SCIF_GCCTRL                                   0x00000070
#define AVR32_SCIF_GCCTRL_CEN                                        0
#define AVR32_SCIF_GCCTRL_CEN_MASK                          0x00000001
#define AVR32_SCIF_GCCTRL_CEN_OFFSET                                 0
#define AVR32_SCIF_GCCTRL_CEN_SIZE                                   1
#define AVR32_SCIF_GCCTRL_DIV                                       16
#define AVR32_SCIF_GCCTRL_DIVEN                                      1
#define AVR32_SCIF_GCCTRL_DIVEN_MASK                        0x00000002
#define AVR32_SCIF_GCCTRL_DIVEN_OFFSET                               1
#define AVR32_SCIF_GCCTRL_DIVEN_SIZE                                 1
#define AVR32_SCIF_GCCTRL_DIV_MASK                          0x00ff0000
#define AVR32_SCIF_GCCTRL_DIV_OFFSET                                16
#define AVR32_SCIF_GCCTRL_DIV_SIZE                                   8
#define AVR32_SCIF_GCCTRL_MASK                              0x00ff0f03
#define AVR32_SCIF_GCCTRL_OSCSEL                                     8
#define AVR32_SCIF_GCCTRL_OSCSEL_MASK                       0x00000f00
#define AVR32_SCIF_GCCTRL_OSCSEL_OFFSET                              8
#define AVR32_SCIF_GCCTRL_OSCSEL_SIZE                                4
#define AVR32_SCIF_GCCTRL_RESETVALUE                        0x00000000
#define AVR32_SCIF_GCLKVERSION                              0x000003f8
#define AVR32_SCIF_GCLKVERSION_MASK                         0x000f0fff
#define AVR32_SCIF_GCLKVERSION_RESETVALUE                   0x00000000
#define AVR32_SCIF_GCLKVERSION_VARIANT                              16
#define AVR32_SCIF_GCLKVERSION_VARIANT_MASK                 0x000f0000
#define AVR32_SCIF_GCLKVERSION_VARIANT_OFFSET                       16
#define AVR32_SCIF_GCLKVERSION_VARIANT_SIZE                          4
#define AVR32_SCIF_GCLKVERSION_VERSION                               0
#define AVR32_SCIF_GCLKVERSION_VERSION_MASK                 0x00000fff
#define AVR32_SCIF_GCLKVERSION_VERSION_OFFSET                        0
#define AVR32_SCIF_GCLKVERSION_VERSION_SIZE                         12
#define AVR32_SCIF_HYST                                              6
#define AVR32_SCIF_HYST_MASK                                0x00000040
#define AVR32_SCIF_HYST_OFFSET                                       6
#define AVR32_SCIF_HYST_SIZE                                         1
#define AVR32_SCIF_ICR                                      0x00000010
#define AVR32_SCIF_ICR_AE                                           31
#define AVR32_SCIF_ICR_AE_MASK                              0x80000000
#define AVR32_SCIF_ICR_AE_OFFSET                                    31
#define AVR32_SCIF_ICR_AE_SIZE                                       1
#define AVR32_SCIF_ICR_BODDET                                        7
#define AVR32_SCIF_ICR_BODDET_MASK                          0x00000080
#define AVR32_SCIF_ICR_BODDET_OFFSET                                 7
#define AVR32_SCIF_ICR_BODDET_SIZE                                   1
#define AVR32_SCIF_ICR_BRIFARDY                                     16
#define AVR32_SCIF_ICR_BRIFARDY_MASK                        0x00010000
#define AVR32_SCIF_ICR_BRIFARDY_OFFSET                              16
#define AVR32_SCIF_ICR_BRIFARDY_SIZE                                 1
#define AVR32_SCIF_ICR_DFLL0LOCKA                                   10
#define AVR32_SCIF_ICR_DFLL0LOCKA_MASK                      0x00000400
#define AVR32_SCIF_ICR_DFLL0LOCKA_OFFSET                            10
#define AVR32_SCIF_ICR_DFLL0LOCKA_SIZE                               1
#define AVR32_SCIF_ICR_DFLL0LOCKC                                    8
#define AVR32_SCIF_ICR_DFLL0LOCKC_MASK                      0x00000100
#define AVR32_SCIF_ICR_DFLL0LOCKC_OFFSET                             8
#define AVR32_SCIF_ICR_DFLL0LOCKC_SIZE                               1
#define AVR32_SCIF_ICR_DFLL0LOCKF                                    9
#define AVR32_SCIF_ICR_DFLL0LOCKF_MASK                      0x00000200
#define AVR32_SCIF_ICR_DFLL0LOCKF_OFFSET                             9
#define AVR32_SCIF_ICR_DFLL0LOCKF_SIZE                               1
#define AVR32_SCIF_ICR_DFLL0LOCKLOSTA                               13
#define AVR32_SCIF_ICR_DFLL0LOCKLOSTA_MASK                  0x00002000
#define AVR32_SCIF_ICR_DFLL0LOCKLOSTA_OFFSET                        13
#define AVR32_SCIF_ICR_DFLL0LOCKLOSTA_SIZE                           1
#define AVR32_SCIF_ICR_DFLL0LOCKLOSTC                               11
#define AVR32_SCIF_ICR_DFLL0LOCKLOSTC_MASK                  0x00000800
#define AVR32_SCIF_ICR_DFLL0LOCKLOSTC_OFFSET                        11
#define AVR32_SCIF_ICR_DFLL0LOCKLOSTC_SIZE                           1
#define AVR32_SCIF_ICR_DFLL0LOCKLOSTF                               12
#define AVR32_SCIF_ICR_DFLL0LOCKLOSTF_MASK                  0x00001000
#define AVR32_SCIF_ICR_DFLL0LOCKLOSTF_OFFSET                        12
#define AVR32_SCIF_ICR_DFLL0LOCKLOSTF_SIZE                           1
#define AVR32_SCIF_ICR_DFLL0RCS                                     15
#define AVR32_SCIF_ICR_DFLL0RCS_MASK                        0x00008000
#define AVR32_SCIF_ICR_DFLL0RCS_OFFSET                              15
#define AVR32_SCIF_ICR_DFLL0RCS_SIZE                                 1
#define AVR32_SCIF_ICR_DFLL0RDY                                     14
#define AVR32_SCIF_ICR_DFLL0RDY_MASK                        0x00004000
#define AVR32_SCIF_ICR_DFLL0RDY_OFFSET                              14
#define AVR32_SCIF_ICR_DFLL0RDY_SIZE                                 1
#define AVR32_SCIF_ICR_MASK                                 0x8001ffe3
#define AVR32_SCIF_ICR_OSC0RDY                                       1
#define AVR32_SCIF_ICR_OSC0RDY_MASK                         0x00000002
#define AVR32_SCIF_ICR_OSC0RDY_OFFSET                                1
#define AVR32_SCIF_ICR_OSC0RDY_SIZE                                  1
#define AVR32_SCIF_ICR_OSC32RDY                                      0
#define AVR32_SCIF_ICR_OSC32RDY_MASK                        0x00000001
#define AVR32_SCIF_ICR_OSC32RDY_OFFSET                               0
#define AVR32_SCIF_ICR_OSC32RDY_SIZE                                 1
#define AVR32_SCIF_ICR_RESETVALUE                           0x00000000
#define AVR32_SCIF_ICR_SM33DET                                       6
#define AVR32_SCIF_ICR_SM33DET_MASK                         0x00000040
#define AVR32_SCIF_ICR_SM33DET_OFFSET                                6
#define AVR32_SCIF_ICR_SM33DET_SIZE                                  1
#define AVR32_SCIF_ICR_VREGOK                                        5
#define AVR32_SCIF_ICR_VREGOK_MASK                          0x00000020
#define AVR32_SCIF_ICR_VREGOK_OFFSET                                 5
#define AVR32_SCIF_ICR_VREGOK_SIZE                                   1
#define AVR32_SCIF_IDR                                      0x00000004
#define AVR32_SCIF_IDR_AE                                           31
#define AVR32_SCIF_IDR_AE_MASK                              0x80000000
#define AVR32_SCIF_IDR_AE_OFFSET                                    31
#define AVR32_SCIF_IDR_AE_SIZE                                       1
#define AVR32_SCIF_IDR_BODDET                                        7
#define AVR32_SCIF_IDR_BODDET_MASK                          0x00000080
#define AVR32_SCIF_IDR_BODDET_OFFSET                                 7
#define AVR32_SCIF_IDR_BODDET_SIZE                                   1
#define AVR32_SCIF_IDR_BRIFARDY                                     16
#define AVR32_SCIF_IDR_BRIFARDY_MASK                        0x00010000
#define AVR32_SCIF_IDR_BRIFARDY_OFFSET                              16
#define AVR32_SCIF_IDR_BRIFARDY_SIZE                                 1
#define AVR32_SCIF_IDR_DFLL0LOCKA                                   10
#define AVR32_SCIF_IDR_DFLL0LOCKA_MASK                      0x00000400
#define AVR32_SCIF_IDR_DFLL0LOCKA_OFFSET                            10
#define AVR32_SCIF_IDR_DFLL0LOCKA_SIZE                               1
#define AVR32_SCIF_IDR_DFLL0LOCKC                                    8
#define AVR32_SCIF_IDR_DFLL0LOCKC_MASK                      0x00000100
#define AVR32_SCIF_IDR_DFLL0LOCKC_OFFSET                             8
#define AVR32_SCIF_IDR_DFLL0LOCKC_SIZE                               1
#define AVR32_SCIF_IDR_DFLL0LOCKF                                    9
#define AVR32_SCIF_IDR_DFLL0LOCKF_MASK                      0x00000200
#define AVR32_SCIF_IDR_DFLL0LOCKF_OFFSET                             9
#define AVR32_SCIF_IDR_DFLL0LOCKF_SIZE                               1
#define AVR32_SCIF_IDR_DFLL0LOCKLOSTA                               13
#define AVR32_SCIF_IDR_DFLL0LOCKLOSTA_MASK                  0x00002000
#define AVR32_SCIF_IDR_DFLL0LOCKLOSTA_OFFSET                        13
#define AVR32_SCIF_IDR_DFLL0LOCKLOSTA_SIZE                           1
#define AVR32_SCIF_IDR_DFLL0LOCKLOSTC                               11
#define AVR32_SCIF_IDR_DFLL0LOCKLOSTC_MASK                  0x00000800
#define AVR32_SCIF_IDR_DFLL0LOCKLOSTC_OFFSET                        11
#define AVR32_SCIF_IDR_DFLL0LOCKLOSTC_SIZE                           1
#define AVR32_SCIF_IDR_DFLL0LOCKLOSTF                               12
#define AVR32_SCIF_IDR_DFLL0LOCKLOSTF_MASK                  0x00001000
#define AVR32_SCIF_IDR_DFLL0LOCKLOSTF_OFFSET                        12
#define AVR32_SCIF_IDR_DFLL0LOCKLOSTF_SIZE                           1
#define AVR32_SCIF_IDR_DFLL0RCS                                     15
#define AVR32_SCIF_IDR_DFLL0RCS_MASK                        0x00008000
#define AVR32_SCIF_IDR_DFLL0RCS_OFFSET                              15
#define AVR32_SCIF_IDR_DFLL0RCS_SIZE                                 1
#define AVR32_SCIF_IDR_DFLL0RDY                                     14
#define AVR32_SCIF_IDR_DFLL0RDY_MASK                        0x00004000
#define AVR32_SCIF_IDR_DFLL0RDY_OFFSET                              14
#define AVR32_SCIF_IDR_DFLL0RDY_SIZE                                 1
#define AVR32_SCIF_IDR_MASK                                 0x8001ffe3
#define AVR32_SCIF_IDR_OSC0RDY                                       1
#define AVR32_SCIF_IDR_OSC0RDY_MASK                         0x00000002
#define AVR32_SCIF_IDR_OSC0RDY_OFFSET                                1
#define AVR32_SCIF_IDR_OSC0RDY_SIZE                                  1
#define AVR32_SCIF_IDR_OSC32RDY                                      0
#define AVR32_SCIF_IDR_OSC32RDY_MASK                        0x00000001
#define AVR32_SCIF_IDR_OSC32RDY_OFFSET                               0
#define AVR32_SCIF_IDR_OSC32RDY_SIZE                                 1
#define AVR32_SCIF_IDR_RESETVALUE                           0x00000000
#define AVR32_SCIF_IDR_SM33DET                                       6
#define AVR32_SCIF_IDR_SM33DET_MASK                         0x00000040
#define AVR32_SCIF_IDR_SM33DET_OFFSET                                6
#define AVR32_SCIF_IDR_SM33DET_SIZE                                  1
#define AVR32_SCIF_IDR_VREGOK                                        5
#define AVR32_SCIF_IDR_VREGOK_MASK                          0x00000020
#define AVR32_SCIF_IDR_VREGOK_OFFSET                                 5
#define AVR32_SCIF_IDR_VREGOK_SIZE                                   1
#define AVR32_SCIF_IER                                      0x00000000
#define AVR32_SCIF_IER_AE                                           31
#define AVR32_SCIF_IER_AE_MASK                              0x80000000
#define AVR32_SCIF_IER_AE_OFFSET                                    31
#define AVR32_SCIF_IER_AE_SIZE                                       1
#define AVR32_SCIF_IER_BODDET                                        7
#define AVR32_SCIF_IER_BODDET_MASK                          0x00000080
#define AVR32_SCIF_IER_BODDET_OFFSET                                 7
#define AVR32_SCIF_IER_BODDET_SIZE                                   1
#define AVR32_SCIF_IER_BRIFARDY                                     16
#define AVR32_SCIF_IER_BRIFARDY_MASK                        0x00010000
#define AVR32_SCIF_IER_BRIFARDY_OFFSET                              16
#define AVR32_SCIF_IER_BRIFARDY_SIZE                                 1
#define AVR32_SCIF_IER_DFLL0LOCKA                                   10
#define AVR32_SCIF_IER_DFLL0LOCKA_MASK                      0x00000400
#define AVR32_SCIF_IER_DFLL0LOCKA_OFFSET                            10
#define AVR32_SCIF_IER_DFLL0LOCKA_SIZE                               1
#define AVR32_SCIF_IER_DFLL0LOCKC                                    8
#define AVR32_SCIF_IER_DFLL0LOCKC_MASK                      0x00000100
#define AVR32_SCIF_IER_DFLL0LOCKC_OFFSET                             8
#define AVR32_SCIF_IER_DFLL0LOCKC_SIZE                               1
#define AVR32_SCIF_IER_DFLL0LOCKF                                    9
#define AVR32_SCIF_IER_DFLL0LOCKF_MASK                      0x00000200
#define AVR32_SCIF_IER_DFLL0LOCKF_OFFSET                             9
#define AVR32_SCIF_IER_DFLL0LOCKF_SIZE                               1
#define AVR32_SCIF_IER_DFLL0LOCKLOSTA                               13
#define AVR32_SCIF_IER_DFLL0LOCKLOSTA_MASK                  0x00002000
#define AVR32_SCIF_IER_DFLL0LOCKLOSTA_OFFSET                        13
#define AVR32_SCIF_IER_DFLL0LOCKLOSTA_SIZE                           1
#define AVR32_SCIF_IER_DFLL0LOCKLOSTC                               11
#define AVR32_SCIF_IER_DFLL0LOCKLOSTC_MASK                  0x00000800
#define AVR32_SCIF_IER_DFLL0LOCKLOSTC_OFFSET                        11
#define AVR32_SCIF_IER_DFLL0LOCKLOSTC_SIZE                           1
#define AVR32_SCIF_IER_DFLL0LOCKLOSTF                               12
#define AVR32_SCIF_IER_DFLL0LOCKLOSTF_MASK                  0x00001000
#define AVR32_SCIF_IER_DFLL0LOCKLOSTF_OFFSET                        12
#define AVR32_SCIF_IER_DFLL0LOCKLOSTF_SIZE                           1
#define AVR32_SCIF_IER_DFLL0RCS                                     15
#define AVR32_SCIF_IER_DFLL0RCS_MASK                        0x00008000
#define AVR32_SCIF_IER_DFLL0RCS_OFFSET                              15
#define AVR32_SCIF_IER_DFLL0RCS_SIZE                                 1
#define AVR32_SCIF_IER_DFLL0RDY                                     14
#define AVR32_SCIF_IER_DFLL0RDY_MASK                        0x00004000
#define AVR32_SCIF_IER_DFLL0RDY_OFFSET                              14
#define AVR32_SCIF_IER_DFLL0RDY_SIZE                                 1
#define AVR32_SCIF_IER_MASK                                 0x8001ffe3
#define AVR32_SCIF_IER_OSC0RDY                                       1
#define AVR32_SCIF_IER_OSC0RDY_MASK                         0x00000002
#define AVR32_SCIF_IER_OSC0RDY_OFFSET                                1
#define AVR32_SCIF_IER_OSC0RDY_SIZE                                  1
#define AVR32_SCIF_IER_OSC32RDY                                      0
#define AVR32_SCIF_IER_OSC32RDY_MASK                        0x00000001
#define AVR32_SCIF_IER_OSC32RDY_OFFSET                               0
#define AVR32_SCIF_IER_OSC32RDY_SIZE                                 1
#define AVR32_SCIF_IER_RESETVALUE                           0x00000000
#define AVR32_SCIF_IER_SM33DET                                       6
#define AVR32_SCIF_IER_SM33DET_MASK                         0x00000040
#define AVR32_SCIF_IER_SM33DET_OFFSET                                6
#define AVR32_SCIF_IER_SM33DET_SIZE                                  1
#define AVR32_SCIF_IER_VREGOK                                        5
#define AVR32_SCIF_IER_VREGOK_MASK                          0x00000020
#define AVR32_SCIF_IER_VREGOK_OFFSET                                 5
#define AVR32_SCIF_IER_VREGOK_SIZE                                   1
#define AVR32_SCIF_IMR                                      0x00000008
#define AVR32_SCIF_IMR_AE                                           31
#define AVR32_SCIF_IMR_AE_MASK                              0x80000000
#define AVR32_SCIF_IMR_AE_OFFSET                                    31
#define AVR32_SCIF_IMR_AE_SIZE                                       1
#define AVR32_SCIF_IMR_BODDET                                        7
#define AVR32_SCIF_IMR_BODDET_MASK                          0x00000080
#define AVR32_SCIF_IMR_BODDET_OFFSET                                 7
#define AVR32_SCIF_IMR_BODDET_SIZE                                   1
#define AVR32_SCIF_IMR_BRIFARDY                                     16
#define AVR32_SCIF_IMR_BRIFARDY_MASK                        0x00010000
#define AVR32_SCIF_IMR_BRIFARDY_OFFSET                              16
#define AVR32_SCIF_IMR_BRIFARDY_SIZE                                 1
#define AVR32_SCIF_IMR_DFLL0LOCKA                                   10
#define AVR32_SCIF_IMR_DFLL0LOCKA_MASK                      0x00000400
#define AVR32_SCIF_IMR_DFLL0LOCKA_OFFSET                            10
#define AVR32_SCIF_IMR_DFLL0LOCKA_SIZE                               1
#define AVR32_SCIF_IMR_DFLL0LOCKC                                    8
#define AVR32_SCIF_IMR_DFLL0LOCKC_MASK                      0x00000100
#define AVR32_SCIF_IMR_DFLL0LOCKC_OFFSET                             8
#define AVR32_SCIF_IMR_DFLL0LOCKC_SIZE                               1
#define AVR32_SCIF_IMR_DFLL0LOCKF                                    9
#define AVR32_SCIF_IMR_DFLL0LOCKF_MASK                      0x00000200
#define AVR32_SCIF_IMR_DFLL0LOCKF_OFFSET                             9
#define AVR32_SCIF_IMR_DFLL0LOCKF_SIZE                               1
#define AVR32_SCIF_IMR_DFLL0LOCKLOSTA                               13
#define AVR32_SCIF_IMR_DFLL0LOCKLOSTA_MASK                  0x00002000
#define AVR32_SCIF_IMR_DFLL0LOCKLOSTA_OFFSET                        13
#define AVR32_SCIF_IMR_DFLL0LOCKLOSTA_SIZE                           1
#define AVR32_SCIF_IMR_DFLL0LOCKLOSTC                               11
#define AVR32_SCIF_IMR_DFLL0LOCKLOSTC_MASK                  0x00000800
#define AVR32_SCIF_IMR_DFLL0LOCKLOSTC_OFFSET                        11
#define AVR32_SCIF_IMR_DFLL0LOCKLOSTC_SIZE                           1
#define AVR32_SCIF_IMR_DFLL0LOCKLOSTF                               12
#define AVR32_SCIF_IMR_DFLL0LOCKLOSTF_MASK                  0x00001000
#define AVR32_SCIF_IMR_DFLL0LOCKLOSTF_OFFSET                        12
#define AVR32_SCIF_IMR_DFLL0LOCKLOSTF_SIZE                           1
#define AVR32_SCIF_IMR_DFLL0RCS                                     15
#define AVR32_SCIF_IMR_DFLL0RCS_MASK                        0x00008000
#define AVR32_SCIF_IMR_DFLL0RCS_OFFSET                              15
#define AVR32_SCIF_IMR_DFLL0RCS_SIZE                                 1
#define AVR32_SCIF_IMR_DFLL0RDY                                     14
#define AVR32_SCIF_IMR_DFLL0RDY_MASK                        0x00004000
#define AVR32_SCIF_IMR_DFLL0RDY_OFFSET                              14
#define AVR32_SCIF_IMR_DFLL0RDY_SIZE                                 1
#define AVR32_SCIF_IMR_MASK                                 0x8001ffe3
#define AVR32_SCIF_IMR_OSC0RDY                                       1
#define AVR32_SCIF_IMR_OSC0RDY_MASK                         0x00000002
#define AVR32_SCIF_IMR_OSC0RDY_OFFSET                                1
#define AVR32_SCIF_IMR_OSC0RDY_SIZE                                  1
#define AVR32_SCIF_IMR_OSC32RDY                                      0
#define AVR32_SCIF_IMR_OSC32RDY_MASK                        0x00000001
#define AVR32_SCIF_IMR_OSC32RDY_OFFSET                               0
#define AVR32_SCIF_IMR_OSC32RDY_SIZE                                 1
#define AVR32_SCIF_IMR_RESETVALUE                           0x00000000
#define AVR32_SCIF_IMR_SM33DET                                       6
#define AVR32_SCIF_IMR_SM33DET_MASK                         0x00000040
#define AVR32_SCIF_IMR_SM33DET_OFFSET                                6
#define AVR32_SCIF_IMR_SM33DET_SIZE                                  1
#define AVR32_SCIF_IMR_VREGOK                                        5
#define AVR32_SCIF_IMR_VREGOK_MASK                          0x00000020
#define AVR32_SCIF_IMR_VREGOK_OFFSET                                 5
#define AVR32_SCIF_IMR_VREGOK_SIZE                                   1
#define AVR32_SCIF_INTPD                                            30
#define AVR32_SCIF_INTPD_MASK                               0x40000000
#define AVR32_SCIF_INTPD_OFFSET                                     30
#define AVR32_SCIF_INTPD_SIZE                                        1
#define AVR32_SCIF_ISR                                      0x0000000c
#define AVR32_SCIF_ISR_AE                                           31
#define AVR32_SCIF_ISR_AE_MASK                              0x80000000
#define AVR32_SCIF_ISR_AE_OFFSET                                    31
#define AVR32_SCIF_ISR_AE_SIZE                                       1
#define AVR32_SCIF_ISR_BODDET                                        7
#define AVR32_SCIF_ISR_BODDET_MASK                          0x00000080
#define AVR32_SCIF_ISR_BODDET_OFFSET                                 7
#define AVR32_SCIF_ISR_BODDET_SIZE                                   1
#define AVR32_SCIF_ISR_BRIFARDY                                     16
#define AVR32_SCIF_ISR_BRIFARDY_MASK                        0x00010000
#define AVR32_SCIF_ISR_BRIFARDY_OFFSET                              16
#define AVR32_SCIF_ISR_BRIFARDY_SIZE                                 1
#define AVR32_SCIF_ISR_DFLL0LOCKA                                   10
#define AVR32_SCIF_ISR_DFLL0LOCKA_MASK                      0x00000400
#define AVR32_SCIF_ISR_DFLL0LOCKA_OFFSET                            10
#define AVR32_SCIF_ISR_DFLL0LOCKA_SIZE                               1
#define AVR32_SCIF_ISR_DFLL0LOCKC                                    8
#define AVR32_SCIF_ISR_DFLL0LOCKC_MASK                      0x00000100
#define AVR32_SCIF_ISR_DFLL0LOCKC_OFFSET                             8
#define AVR32_SCIF_ISR_DFLL0LOCKC_SIZE                               1
#define AVR32_SCIF_ISR_DFLL0LOCKF                                    9
#define AVR32_SCIF_ISR_DFLL0LOCKF_MASK                      0x00000200
#define AVR32_SCIF_ISR_DFLL0LOCKF_OFFSET                             9
#define AVR32_SCIF_ISR_DFLL0LOCKF_SIZE                               1
#define AVR32_SCIF_ISR_DFLL0LOCKLOSTA                               13
#define AVR32_SCIF_ISR_DFLL0LOCKLOSTA_MASK                  0x00002000
#define AVR32_SCIF_ISR_DFLL0LOCKLOSTA_OFFSET                        13
#define AVR32_SCIF_ISR_DFLL0LOCKLOSTA_SIZE                           1
#define AVR32_SCIF_ISR_DFLL0LOCKLOSTC                               11
#define AVR32_SCIF_ISR_DFLL0LOCKLOSTC_MASK                  0x00000800
#define AVR32_SCIF_ISR_DFLL0LOCKLOSTC_OFFSET                        11
#define AVR32_SCIF_ISR_DFLL0LOCKLOSTC_SIZE                           1
#define AVR32_SCIF_ISR_DFLL0LOCKLOSTF                               12
#define AVR32_SCIF_ISR_DFLL0LOCKLOSTF_MASK                  0x00001000
#define AVR32_SCIF_ISR_DFLL0LOCKLOSTF_OFFSET                        12
#define AVR32_SCIF_ISR_DFLL0LOCKLOSTF_SIZE                           1
#define AVR32_SCIF_ISR_DFLL0RCS                                     15
#define AVR32_SCIF_ISR_DFLL0RCS_MASK                        0x00008000
#define AVR32_SCIF_ISR_DFLL0RCS_OFFSET                              15
#define AVR32_SCIF_ISR_DFLL0RCS_SIZE                                 1
#define AVR32_SCIF_ISR_DFLL0RDY                                     14
#define AVR32_SCIF_ISR_DFLL0RDY_MASK                        0x00004000
#define AVR32_SCIF_ISR_DFLL0RDY_OFFSET                              14
#define AVR32_SCIF_ISR_DFLL0RDY_SIZE                                 1
#define AVR32_SCIF_ISR_MASK                                 0x8001ffe3
#define AVR32_SCIF_ISR_OSC0RDY                                       1
#define AVR32_SCIF_ISR_OSC0RDY_MASK                         0x00000002
#define AVR32_SCIF_ISR_OSC0RDY_OFFSET                                1
#define AVR32_SCIF_ISR_OSC0RDY_SIZE                                  1
#define AVR32_SCIF_ISR_OSC32RDY                                      0
#define AVR32_SCIF_ISR_OSC32RDY_MASK                        0x00000001
#define AVR32_SCIF_ISR_OSC32RDY_OFFSET                               0
#define AVR32_SCIF_ISR_OSC32RDY_SIZE                                 1
#define AVR32_SCIF_ISR_RESETVALUE                           0x00000000
#define AVR32_SCIF_ISR_SM33DET                                       6
#define AVR32_SCIF_ISR_SM33DET_MASK                         0x00000040
#define AVR32_SCIF_ISR_SM33DET_OFFSET                                6
#define AVR32_SCIF_ISR_SM33DET_SIZE                                  1
#define AVR32_SCIF_ISR_VREGOK                                        5
#define AVR32_SCIF_ISR_VREGOK_MASK                          0x00000020
#define AVR32_SCIF_ISR_VREGOK_OFFSET                                 5
#define AVR32_SCIF_ISR_VREGOK_SIZE                                   1
#define AVR32_SCIF_KEY                                              24
#define AVR32_SCIF_KEY_MASK                                 0xff000000
#define AVR32_SCIF_KEY_OFFSET                                       24
#define AVR32_SCIF_KEY_SIZE                                          8
#define AVR32_SCIF_LEVEL                                             0
#define AVR32_SCIF_LEVEL_MASK                               0x0000003f
#define AVR32_SCIF_LEVEL_OFFSET                                      0
#define AVR32_SCIF_LEVEL_SIZE                                        6
#define AVR32_SCIF_LOCK                                              3
#define AVR32_SCIF_LOCK_MASK                                0x00000008
#define AVR32_SCIF_LOCK_OFFSET                                       3
#define AVR32_SCIF_LOCK_SIZE                                         1
#define AVR32_SCIF_NOLOCK                                            4
#define AVR32_SCIF_NOLOCK_MASK                              0x00000010
#define AVR32_SCIF_NOLOCK_OFFSET                                     4
#define AVR32_SCIF_NOLOCK_SIZE                                       1
#define AVR32_SCIF_NUMREF                                            0
#define AVR32_SCIF_NUMREF_MASK                              0x0000001f
#define AVR32_SCIF_NUMREF_OFFSET                                     0
#define AVR32_SCIF_NUMREF_SIZE                                       5
#define AVR32_SCIF_ON                                                7
#define AVR32_SCIF_ONSM                                             18
#define AVR32_SCIF_ONSM_MASK                                0x00040000
#define AVR32_SCIF_ONSM_OFFSET                                      18
#define AVR32_SCIF_ONSM_SIZE                                         1
#define AVR32_SCIF_ON_MASK                                  0x00000080
#define AVR32_SCIF_ON_OFFSET                                         7
#define AVR32_SCIF_ON_SIZE                                           1
#define AVR32_SCIF_OSC0RDY                                           1
#define AVR32_SCIF_OSC0RDY_MASK                             0x00000002
#define AVR32_SCIF_OSC0RDY_OFFSET                                    1
#define AVR32_SCIF_OSC0RDY_SIZE                                      1
#define AVR32_SCIF_OSC0VERSION                              0x000003c8
#define AVR32_SCIF_OSC0VERSION_MASK                         0x000f0fff
#define AVR32_SCIF_OSC0VERSION_RESETVALUE                   0x00000000
#define AVR32_SCIF_OSC0VERSION_VARIANT                              16
#define AVR32_SCIF_OSC0VERSION_VARIANT_MASK                 0x000f0000
#define AVR32_SCIF_OSC0VERSION_VARIANT_OFFSET                       16
#define AVR32_SCIF_OSC0VERSION_VARIANT_SIZE                          4
#define AVR32_SCIF_OSC0VERSION_VERSION                               0
#define AVR32_SCIF_OSC0VERSION_VERSION_MASK                 0x00000fff
#define AVR32_SCIF_OSC0VERSION_VERSION_OFFSET                        0
#define AVR32_SCIF_OSC0VERSION_VERSION_SIZE                         12
#define AVR32_SCIF_OSC32EN                                           0
#define AVR32_SCIF_OSC32EN_MASK                             0x00000001
#define AVR32_SCIF_OSC32EN_OFFSET                                    0
#define AVR32_SCIF_OSC32EN_SIZE                                      1
#define AVR32_SCIF_OSC32RDY                                          0
#define AVR32_SCIF_OSC32RDY_MASK                            0x00000001
#define AVR32_SCIF_OSC32RDY_OFFSET                                   0
#define AVR32_SCIF_OSC32RDY_SIZE                                     1
#define AVR32_SCIF_OSC32VERSION                             0x000003cc
#define AVR32_SCIF_OSC32VERSION_MASK                        0x000f0fff
#define AVR32_SCIF_OSC32VERSION_RESETVALUE                  0x00000000
#define AVR32_SCIF_OSC32VERSION_VARIANT                             16
#define AVR32_SCIF_OSC32VERSION_VARIANT_MASK                0x000f0000
#define AVR32_SCIF_OSC32VERSION_VARIANT_OFFSET                      16
#define AVR32_SCIF_OSC32VERSION_VARIANT_SIZE                         4
#define AVR32_SCIF_OSC32VERSION_VERSION                              0
#define AVR32_SCIF_OSC32VERSION_VERSION_MASK                0x00000fff
#define AVR32_SCIF_OSC32VERSION_VERSION_OFFSET                       0
#define AVR32_SCIF_OSC32VERSION_VERSION_SIZE                        12
#define AVR32_SCIF_OSCCTRL0                                 0x0000001c
#define AVR32_SCIF_OSCCTRL0_AGC                                      3
#define AVR32_SCIF_OSCCTRL0_AGC_MASK                        0x00000008
#define AVR32_SCIF_OSCCTRL0_AGC_OFFSET                               3
#define AVR32_SCIF_OSCCTRL0_AGC_SIZE                                 1
#define AVR32_SCIF_OSCCTRL0_GAIN                                     1
#define AVR32_SCIF_OSCCTRL0_GAIN_G0                         0x00000000
#define AVR32_SCIF_OSCCTRL0_GAIN_G1                         0x00000001
#define AVR32_SCIF_OSCCTRL0_GAIN_G2                         0x00000002
#define AVR32_SCIF_OSCCTRL0_GAIN_G3                         0x00000003
#define AVR32_SCIF_OSCCTRL0_GAIN_MASK                       0x00000006
#define AVR32_SCIF_OSCCTRL0_GAIN_OFFSET                              1
#define AVR32_SCIF_OSCCTRL0_GAIN_SIZE                                2
#define AVR32_SCIF_OSCCTRL0_MASK                            0x0001070f
#define AVR32_SCIF_OSCCTRL0_MODE                                     0
#define AVR32_SCIF_OSCCTRL0_MODE_CRYSTAL                    0x00000001
#define AVR32_SCIF_OSCCTRL0_MODE_EXTCLK                     0x00000000
#define AVR32_SCIF_OSCCTRL0_MODE_MASK                       0x00000001
#define AVR32_SCIF_OSCCTRL0_MODE_OFFSET                              0
#define AVR32_SCIF_OSCCTRL0_MODE_SIZE                                1
#define AVR32_SCIF_OSCCTRL0_OSCEN                                   16
#define AVR32_SCIF_OSCCTRL0_OSCEN_MASK                      0x00010000
#define AVR32_SCIF_OSCCTRL0_OSCEN_OFFSET                            16
#define AVR32_SCIF_OSCCTRL0_OSCEN_SIZE                               1
#define AVR32_SCIF_OSCCTRL0_RESETVALUE                      0x00000000
#define AVR32_SCIF_OSCCTRL0_STARTUP                                  8
#define AVR32_SCIF_OSCCTRL0_STARTUP_0_RCOSC                 0x00000000
#define AVR32_SCIF_OSCCTRL0_STARTUP_128_RCOSC               0x00000002
#define AVR32_SCIF_OSCCTRL0_STARTUP_16384_RCOSC             0x00000006
#define AVR32_SCIF_OSCCTRL0_STARTUP_2048_RCOSC              0x00000003
#define AVR32_SCIF_OSCCTRL0_STARTUP_4096_RCOSC              0x00000004
#define AVR32_SCIF_OSCCTRL0_STARTUP_64_RCOSC                0x00000001
#define AVR32_SCIF_OSCCTRL0_STARTUP_8192_RCOSC              0x00000005
#define AVR32_SCIF_OSCCTRL0_STARTUP_MASK                    0x00000700
#define AVR32_SCIF_OSCCTRL0_STARTUP_OFFSET                           8
#define AVR32_SCIF_OSCCTRL0_STARTUP_SIZE                             3
#define AVR32_SCIF_OSCCTRL32                                0x00000020
#define AVR32_SCIF_OSCCTRL32_EN1K                                    3
#define AVR32_SCIF_OSCCTRL32_EN1K_MASK                      0x00000008
#define AVR32_SCIF_OSCCTRL32_EN1K_OFFSET                             3
#define AVR32_SCIF_OSCCTRL32_EN1K_SIZE                               1
#define AVR32_SCIF_OSCCTRL32_EN32K                                   2
#define AVR32_SCIF_OSCCTRL32_EN32K_MASK                     0x00000004
#define AVR32_SCIF_OSCCTRL32_EN32K_OFFSET                            2
#define AVR32_SCIF_OSCCTRL32_EN32K_SIZE                              1
#define AVR32_SCIF_OSCCTRL32_MASK                           0x8007070f
#define AVR32_SCIF_OSCCTRL32_MODE                                    8
#define AVR32_SCIF_OSCCTRL32_MODE_MASK                      0x00000700
#define AVR32_SCIF_OSCCTRL32_MODE_OFFSET                             8
#define AVR32_SCIF_OSCCTRL32_MODE_SIZE                               3
#define AVR32_SCIF_OSCCTRL32_OSC32EN                                 0
#define AVR32_SCIF_OSCCTRL32_OSC32EN_MASK                   0x00000001
#define AVR32_SCIF_OSCCTRL32_OSC32EN_OFFSET                          0
#define AVR32_SCIF_OSCCTRL32_OSC32EN_SIZE                            1
#define AVR32_SCIF_OSCCTRL32_PINSEL                                  1
#define AVR32_SCIF_OSCCTRL32_PINSEL_MASK                    0x00000002
#define AVR32_SCIF_OSCCTRL32_PINSEL_OFFSET                           1
#define AVR32_SCIF_OSCCTRL32_PINSEL_SIZE                             1
#define AVR32_SCIF_OSCCTRL32_RESETVALUE                     0x00000004
#define AVR32_SCIF_OSCCTRL32_STARTUP                                16
#define AVR32_SCIF_OSCCTRL32_STARTUP_0_RCOSC                0x00000000
#define AVR32_SCIF_OSCCTRL32_STARTUP_128_RCOSC              0x00000001
#define AVR32_SCIF_OSCCTRL32_STARTUP_131072_RCOSC           0x00000005
#define AVR32_SCIF_OSCCTRL32_STARTUP_16384_RCOSC            0x00000003
#define AVR32_SCIF_OSCCTRL32_STARTUP_262144_RCOSC           0x00000006
#define AVR32_SCIF_OSCCTRL32_STARTUP_524288_RCOSC           0x00000007
#define AVR32_SCIF_OSCCTRL32_STARTUP_65536_RCOSC            0x00000004
#define AVR32_SCIF_OSCCTRL32_STARTUP_8192_RCOSC             0x00000002
#define AVR32_SCIF_OSCCTRL32_STARTUP_MASK                   0x00070000
#define AVR32_SCIF_OSCCTRL32_STARTUP_OFFSET                         16
#define AVR32_SCIF_OSCCTRL32_STARTUP_SIZE                            3
#define AVR32_SCIF_OSCCTRL32_TESTMODE                               31
#define AVR32_SCIF_OSCCTRL32_TESTMODE_MASK                  0x80000000
#define AVR32_SCIF_OSCCTRL32_TESTMODE_OFFSET                        31
#define AVR32_SCIF_OSCCTRL32_TESTMODE_SIZE                           1
#define AVR32_SCIF_OSCEN                                            16
#define AVR32_SCIF_OSCEN_MASK                               0x00010000
#define AVR32_SCIF_OSCEN_OFFSET                                     16
#define AVR32_SCIF_OSCEN_SIZE                                        1
#define AVR32_SCIF_OSCSEL                                            8
#define AVR32_SCIF_OSCSEL_MASK                              0x00000f00
#define AVR32_SCIF_OSCSEL_OFFSET                                     8
#define AVR32_SCIF_OSCSEL_SIZE                                       4
#define AVR32_SCIF_PCLKSR                                   0x00000014
#define AVR32_SCIF_PCLKSR_BODDET                                     7
#define AVR32_SCIF_PCLKSR_BODDET_MASK                       0x00000080
#define AVR32_SCIF_PCLKSR_BODDET_OFFSET                              7
#define AVR32_SCIF_PCLKSR_BODDET_SIZE                                1
#define AVR32_SCIF_PCLKSR_BRIFARDY                                  16
#define AVR32_SCIF_PCLKSR_BRIFARDY_MASK                     0x00010000
#define AVR32_SCIF_PCLKSR_BRIFARDY_OFFSET                           16
#define AVR32_SCIF_PCLKSR_BRIFARDY_SIZE                              1
#define AVR32_SCIF_PCLKSR_BRIFAVALID                                30
#define AVR32_SCIF_PCLKSR_BRIFAVALID_MASK                   0x40000000
#define AVR32_SCIF_PCLKSR_BRIFAVALID_OFFSET                         30
#define AVR32_SCIF_PCLKSR_BRIFAVALID_SIZE                            1
#define AVR32_SCIF_PCLKSR_DFLL0LOCKA                                10
#define AVR32_SCIF_PCLKSR_DFLL0LOCKA_MASK                   0x00000400
#define AVR32_SCIF_PCLKSR_DFLL0LOCKA_OFFSET                         10
#define AVR32_SCIF_PCLKSR_DFLL0LOCKA_SIZE                            1
#define AVR32_SCIF_PCLKSR_DFLL0LOCKC                                 8
#define AVR32_SCIF_PCLKSR_DFLL0LOCKC_MASK                   0x00000100
#define AVR32_SCIF_PCLKSR_DFLL0LOCKC_OFFSET                          8
#define AVR32_SCIF_PCLKSR_DFLL0LOCKC_SIZE                            1
#define AVR32_SCIF_PCLKSR_DFLL0LOCKF                                 9
#define AVR32_SCIF_PCLKSR_DFLL0LOCKF_MASK                   0x00000200
#define AVR32_SCIF_PCLKSR_DFLL0LOCKF_OFFSET                          9
#define AVR32_SCIF_PCLKSR_DFLL0LOCKF_SIZE                            1
#define AVR32_SCIF_PCLKSR_DFLL0LOCKLOSTA                            13
#define AVR32_SCIF_PCLKSR_DFLL0LOCKLOSTA_MASK               0x00002000
#define AVR32_SCIF_PCLKSR_DFLL0LOCKLOSTA_OFFSET                     13
#define AVR32_SCIF_PCLKSR_DFLL0LOCKLOSTA_SIZE                        1
#define AVR32_SCIF_PCLKSR_DFLL0LOCKLOSTC                            11
#define AVR32_SCIF_PCLKSR_DFLL0LOCKLOSTC_MASK               0x00000800
#define AVR32_SCIF_PCLKSR_DFLL0LOCKLOSTC_OFFSET                     11
#define AVR32_SCIF_PCLKSR_DFLL0LOCKLOSTC_SIZE                        1
#define AVR32_SCIF_PCLKSR_DFLL0LOCKLOSTF                            12
#define AVR32_SCIF_PCLKSR_DFLL0LOCKLOSTF_MASK               0x00001000
#define AVR32_SCIF_PCLKSR_DFLL0LOCKLOSTF_OFFSET                     12
#define AVR32_SCIF_PCLKSR_DFLL0LOCKLOSTF_SIZE                        1
#define AVR32_SCIF_PCLKSR_DFLL0RCS                                  15
#define AVR32_SCIF_PCLKSR_DFLL0RCS_MASK                     0x00008000
#define AVR32_SCIF_PCLKSR_DFLL0RCS_OFFSET                           15
#define AVR32_SCIF_PCLKSR_DFLL0RCS_SIZE                              1
#define AVR32_SCIF_PCLKSR_DFLL0RDY                                  14
#define AVR32_SCIF_PCLKSR_DFLL0RDY_MASK                     0x00004000
#define AVR32_SCIF_PCLKSR_DFLL0RDY_OFFSET                           14
#define AVR32_SCIF_PCLKSR_DFLL0RDY_SIZE                              1
#define AVR32_SCIF_PCLKSR_MASK                              0x4001ffe3
#define AVR32_SCIF_PCLKSR_OSC0RDY                                    1
#define AVR32_SCIF_PCLKSR_OSC0RDY_MASK                      0x00000002
#define AVR32_SCIF_PCLKSR_OSC0RDY_OFFSET                             1
#define AVR32_SCIF_PCLKSR_OSC0RDY_SIZE                               1
#define AVR32_SCIF_PCLKSR_OSC32RDY                                   0
#define AVR32_SCIF_PCLKSR_OSC32RDY_MASK                     0x00000001
#define AVR32_SCIF_PCLKSR_OSC32RDY_OFFSET                            0
#define AVR32_SCIF_PCLKSR_OSC32RDY_SIZE                              1
#define AVR32_SCIF_PCLKSR_RESETVALUE                        0x00000000
#define AVR32_SCIF_PCLKSR_SM33DET                                    6
#define AVR32_SCIF_PCLKSR_SM33DET_MASK                      0x00000040
#define AVR32_SCIF_PCLKSR_SM33DET_OFFSET                             6
#define AVR32_SCIF_PCLKSR_SM33DET_SIZE                               1
#define AVR32_SCIF_PCLKSR_VREGOK                                     5
#define AVR32_SCIF_PCLKSR_VREGOK_MASK                       0x00000020
#define AVR32_SCIF_PCLKSR_VREGOK_OFFSET                              5
#define AVR32_SCIF_PCLKSR_VREGOK_SIZE                                1
#define AVR32_SCIF_PINSEL                                            1
#define AVR32_SCIF_PINSEL_MASK                              0x00000002
#define AVR32_SCIF_PINSEL_OFFSET                                     1
#define AVR32_SCIF_PINSEL_SIZE                                       1
#define AVR32_SCIF_POR33EN                                          18
#define AVR32_SCIF_POR33EN_MASK                             0x00040000
#define AVR32_SCIF_POR33EN_OFFSET                                   18
#define AVR32_SCIF_POR33EN_SIZE                                      1
#define AVR32_SCIF_POR33MASK                                        20
#define AVR32_SCIF_POR33MASK_MASK                           0x00100000
#define AVR32_SCIF_POR33MASK_OFFSET                                 20
#define AVR32_SCIF_POR33MASK_SIZE                                    1
#define AVR32_SCIF_POR33STATUS                                      19
#define AVR32_SCIF_POR33STATUS_MASK                         0x00080000
#define AVR32_SCIF_POR33STATUS_OFFSET                               19
#define AVR32_SCIF_POR33STATUS_SIZE                                  1
#define AVR32_SCIF_PRBS                                              1
#define AVR32_SCIF_PRBS_MASK                                0x00000002
#define AVR32_SCIF_PRBS_OFFSET                                       1
#define AVR32_SCIF_PRBS_SIZE                                         1
#define AVR32_SCIF_RATIO                                            20
#define AVR32_SCIF_RATIODIFF                                        16
#define AVR32_SCIF_RATIODIFF_MASK                           0xffff0000
#define AVR32_SCIF_RATIODIFF_OFFSET                                 16
#define AVR32_SCIF_RATIODIFF_SIZE                                   16
#define AVR32_SCIF_RATIO_MASK                               0x3ff00000
#define AVR32_SCIF_RATIO_OFFSET                                     20
#define AVR32_SCIF_RATIO_SIZE                                       10
#define AVR32_SCIF_RC120MCR                                 0x00000058
#define AVR32_SCIF_RC120MCR_EN                                       0
#define AVR32_SCIF_RC120MCR_EN_MASK                         0x00000001
#define AVR32_SCIF_RC120MCR_EN_OFFSET                                0
#define AVR32_SCIF_RC120MCR_EN_SIZE                                  1
#define AVR32_SCIF_RC120MCR_MASK                            0x00000001
#define AVR32_SCIF_RC120MCR_RESETVALUE                      0x00000000
#define AVR32_SCIF_RC120MIFAVERSION                         0x000003ec
#define AVR32_SCIF_RC120MIFAVERSION_MASK                    0x3fff0fff
#define AVR32_SCIF_RC120MIFAVERSION_RESETVALUE              0x00000000
#define AVR32_SCIF_RC120MIFAVERSION_VARIANT                         16
#define AVR32_SCIF_RC120MIFAVERSION_VARIANT_MASK            0x3fff0000
#define AVR32_SCIF_RC120MIFAVERSION_VARIANT_OFFSET                  16
#define AVR32_SCIF_RC120MIFAVERSION_VARIANT_SIZE                    14
#define AVR32_SCIF_RC120MIFAVERSION_VERSION                          0
#define AVR32_SCIF_RC120MIFAVERSION_VERSION_MASK            0x00000fff
#define AVR32_SCIF_RC120MIFAVERSION_VERSION_OFFSET                   0
#define AVR32_SCIF_RC120MIFAVERSION_VERSION_SIZE                    12
#define AVR32_SCIF_RC32KCR                                  0x0000006c
#define AVR32_SCIF_RC32KCR_EN                                        0
#define AVR32_SCIF_RC32KCR_EN_MASK                          0x00000001
#define AVR32_SCIF_RC32KCR_EN_OFFSET                                 0
#define AVR32_SCIF_RC32KCR_EN_SIZE                                   1
#define AVR32_SCIF_RC32KCR_MASK                             0x00000001
#define AVR32_SCIF_RC32KCR_RESETVALUE                       0x00000000
#define AVR32_SCIF_RC32KIFAVERSION                          0x000003f4
#define AVR32_SCIF_RC32KIFAVERSION_MASK                     0x000f0fff
#define AVR32_SCIF_RC32KIFAVERSION_RESETVALUE               0x00000000
#define AVR32_SCIF_RC32KIFAVERSION_VARIANT                          16
#define AVR32_SCIF_RC32KIFAVERSION_VARIANT_MASK             0x000f0000
#define AVR32_SCIF_RC32KIFAVERSION_VARIANT_OFFSET                   16
#define AVR32_SCIF_RC32KIFAVERSION_VARIANT_SIZE                      4
#define AVR32_SCIF_RC32KIFAVERSION_VVERSION                          0
#define AVR32_SCIF_RC32KIFAVERSION_VVERSION_MASK            0x00000fff
#define AVR32_SCIF_RC32KIFAVERSION_VVERSION_OFFSET                   0
#define AVR32_SCIF_RC32KIFAVERSION_VVERSION_SIZE                    12
#define AVR32_SCIF_RCCR                                     0x00000048
#define AVR32_SCIF_RCCR_CALIB                                        0
#define AVR32_SCIF_RCCR_CALIB_MASK                          0x000003ff
#define AVR32_SCIF_RCCR_CALIB_OFFSET                                 0
#define AVR32_SCIF_RCCR_CALIB_SIZE                                  10
#define AVR32_SCIF_RCCR_FCD                                         16
#define AVR32_SCIF_RCCR_FCD_MASK                            0x00010000
#define AVR32_SCIF_RCCR_FCD_OFFSET                                  16
#define AVR32_SCIF_RCCR_FCD_SIZE                                     1
#define AVR32_SCIF_RCCR_MASK                                0x000103ff
#define AVR32_SCIF_RCCR_RESETVALUE                          0x00000000
#define AVR32_SCIF_RCOSCIFAVERSION                          0x000003dc
#define AVR32_SCIF_RCOSCIFAVERSION_MASK                     0x000f0fff
#define AVR32_SCIF_RCOSCIFAVERSION_RESETVALUE               0x00000000
#define AVR32_SCIF_RCOSCIFAVERSION_VARIANT                          16
#define AVR32_SCIF_RCOSCIFAVERSION_VARIANT_MASK             0x000f0000
#define AVR32_SCIF_RCOSCIFAVERSION_VARIANT_OFFSET                   16
#define AVR32_SCIF_RCOSCIFAVERSION_VARIANT_SIZE                      4
#define AVR32_SCIF_RCOSCIFAVERSION_VERSION                           0
#define AVR32_SCIF_RCOSCIFAVERSION_VERSION_MASK             0x00000fff
#define AVR32_SCIF_RCOSCIFAVERSION_VERSION_OFFSET                    0
#define AVR32_SCIF_RCOSCIFAVERSION_VERSION_SIZE                     12
#define AVR32_SCIF_SAMPFREQ                                         24
#define AVR32_SCIF_SAMPFREQ_MASK                            0x0f000000
#define AVR32_SCIF_SAMPFREQ_OFFSET                                  24
#define AVR32_SCIF_SAMPFREQ_SIZE                                     4
#define AVR32_SCIF_SEL                                               8
#define AVR32_SCIF_SELVDD                                            0
#define AVR32_SCIF_SELVDD_MASK                              0x00000007
#define AVR32_SCIF_SELVDD_OFFSET                                     0
#define AVR32_SCIF_SELVDD_SIZE                                       3
#define AVR32_SCIF_SELVDD_VDD1V35                           0x00000000
#define AVR32_SCIF_SELVDD_VDD1V45                           0x00000001
#define AVR32_SCIF_SELVDD_VDD1V55                           0x00000002
#define AVR32_SCIF_SELVDD_VDD1V65                           0x00000003
#define AVR32_SCIF_SELVDD_VDD1V75                           0x00000004
#define AVR32_SCIF_SELVDD_VDD1V80                           0x00000005
#define AVR32_SCIF_SEL_MASK                                 0x0000ff00
#define AVR32_SCIF_SEL_OFFSET                                        8
#define AVR32_SCIF_SEL_SIZE                                          8
#define AVR32_SCIF_SFV_SIZE                                          1
#define AVR32_SCIF_SM33                                     0x0000004c
#define AVR32_SCIF_SM33DET                                           6
#define AVR32_SCIF_SM33DET_MASK                             0x00000040
#define AVR32_SCIF_SM33DET_OFFSET                                    6
#define AVR32_SCIF_SM33DET_SIZE                                      1
#define AVR32_SCIF_SM33IFAVERSION                           0x000003e0
#define AVR32_SCIF_SM33IFAVERSION_MASK                      0x0fff000f
#define AVR32_SCIF_SM33IFAVERSION_RESETVALUE                0x00000000
#define AVR32_SCIF_SM33IFAVERSION_VARIANT                           16
#define AVR32_SCIF_SM33IFAVERSION_VARIANT_MASK              0x0fff0000
#define AVR32_SCIF_SM33IFAVERSION_VARIANT_OFFSET                    16
#define AVR32_SCIF_SM33IFAVERSION_VARIANT_SIZE                      12
#define AVR32_SCIF_SM33IFAVERSION_VERSION                            0
#define AVR32_SCIF_SM33IFAVERSION_VERSION_MASK              0x0000000f
#define AVR32_SCIF_SM33IFAVERSION_VERSION_OFFSET                     0
#define AVR32_SCIF_SM33IFAVERSION_VERSION_SIZE                       4
#define AVR32_SCIF_SM33_CALIB                                        8
#define AVR32_SCIF_SM33_CALIB_MASK                          0x00000f00
#define AVR32_SCIF_SM33_CALIB_OFFSET                                 8
#define AVR32_SCIF_SM33_CALIB_SIZE                                   4
#define AVR32_SCIF_SM33_CTRL                                         0
#define AVR32_SCIF_SM33_CTRL_MASK                           0x0000000f
#define AVR32_SCIF_SM33_CTRL_OFFSET                                  0
#define AVR32_SCIF_SM33_CTRL_SIZE                                    4
#define AVR32_SCIF_SM33_FCD                                         16
#define AVR32_SCIF_SM33_FCD_MASK                            0x00010000
#define AVR32_SCIF_SM33_FCD_OFFSET                                  16
#define AVR32_SCIF_SM33_FCD_SIZE                                     1
#define AVR32_SCIF_SM33_FS                                           7
#define AVR32_SCIF_SM33_FS_MASK                             0x00000080
#define AVR32_SCIF_SM33_FS_OFFSET                                    7
#define AVR32_SCIF_SM33_FS_SIZE                                      1
#define AVR32_SCIF_SM33_MASK                                0x0f070f8f
#define AVR32_SCIF_SM33_ONSM                                        18
#define AVR32_SCIF_SM33_ONSM_MASK                           0x00040000
#define AVR32_SCIF_SM33_ONSM_OFFSET                                 18
#define AVR32_SCIF_SM33_ONSM_SIZE                                    1
#define AVR32_SCIF_SM33_RESETVALUE                          0x00000000
#define AVR32_SCIF_SM33_SAMPFREQ                                    24
#define AVR32_SCIF_SM33_SAMPFREQ_MASK                       0x0f000000
#define AVR32_SCIF_SM33_SAMPFREQ_OFFSET                             24
#define AVR32_SCIF_SM33_SAMPFREQ_SIZE                                4
#define AVR32_SCIF_SM33_SFV                                         17
#define AVR32_SCIF_SM33_SFV_MASK                            0x00020000
#define AVR32_SCIF_SM33_SFV_OFFSET                                  17
#define AVR32_SCIF_SM33_SFV_SIZE                                     1
#define AVR32_SCIF_STARTUP_SIZE                                      3
#define AVR32_SCIF_STEPSIZE                                         16
#define AVR32_SCIF_STEPSIZE_MASK                            0x001f0000
#define AVR32_SCIF_STEPSIZE_OFFSET                                  16
#define AVR32_SCIF_STEPSIZE_SIZE                                     5
#define AVR32_SCIF_STILO                                    0x00000054
#define AVR32_SCIF_STILOVERSION                             0x000003e8
#define AVR32_SCIF_STILOVERSION_MASK                        0x000f0fff
#define AVR32_SCIF_STILOVERSION_RESETVALUE                  0x00000000
#define AVR32_SCIF_STILOVERSION_VARIANT                             16
#define AVR32_SCIF_STILOVERSION_VARIANT_MASK                0x000f0000
#define AVR32_SCIF_STILOVERSION_VARIANT_OFFSET                      16
#define AVR32_SCIF_STILOVERSION_VARIANT_SIZE                         4
#define AVR32_SCIF_STILOVERSION_VERSION                              0
#define AVR32_SCIF_STILOVERSION_VERSION_MASK                0x00000fff
#define AVR32_SCIF_STILOVERSION_VERSION_OFFSET                       0
#define AVR32_SCIF_STILOVERSION_VERSION_SIZE                        12
#define AVR32_SCIF_STILO_EN                                          0
#define AVR32_SCIF_STILO_EN_MASK                            0x00000001
#define AVR32_SCIF_STILO_EN_OFFSET                                   0
#define AVR32_SCIF_STILO_EN_SIZE                                     1
#define AVR32_SCIF_STILO_FCD                                        16
#define AVR32_SCIF_STILO_FCD_MASK                           0x00010000
#define AVR32_SCIF_STILO_FCD_OFFSET                                 16
#define AVR32_SCIF_STILO_FCD_SIZE                                    1
#define AVR32_SCIF_STILO_LOCK                                        3
#define AVR32_SCIF_STILO_LOCK_MASK                          0x00000008
#define AVR32_SCIF_STILO_LOCK_OFFSET                                 3
#define AVR32_SCIF_STILO_LOCK_SIZE                                   1
#define AVR32_SCIF_STILO_MASK                               0xbff1ff1d
#define AVR32_SCIF_STILO_NOLOCK                                      4
#define AVR32_SCIF_STILO_NOLOCK_MASK                        0x00000010
#define AVR32_SCIF_STILO_NOLOCK_OFFSET                               4
#define AVR32_SCIF_STILO_NOLOCK_SIZE                                 1
#define AVR32_SCIF_STILO_RATIO                                      20
#define AVR32_SCIF_STILO_RATIO_MASK                         0x3ff00000
#define AVR32_SCIF_STILO_RATIO_OFFSET                               20
#define AVR32_SCIF_STILO_RATIO_SIZE                                 10
#define AVR32_SCIF_STILO_RESETVALUE                         0x00008000
#define AVR32_SCIF_STILO_SEL                                         8
#define AVR32_SCIF_STILO_SEL_MASK                           0x0000ff00
#define AVR32_SCIF_STILO_SEL_OFFSET                                  8
#define AVR32_SCIF_STILO_SEL_SIZE                                    8
#define AVR32_SCIF_STILO_SFV                                        31
#define AVR32_SCIF_STILO_SFV_MASK                           0x80000000
#define AVR32_SCIF_STILO_SFV_OFFSET                                 31
#define AVR32_SCIF_STILO_SFV_SIZE                                    1
#define AVR32_SCIF_STILO_TUNE_EN                                     2
#define AVR32_SCIF_STILO_TUNE_EN_MASK                       0x00000004
#define AVR32_SCIF_STILO_TUNE_EN_OFFSET                              2
#define AVR32_SCIF_STILO_TUNE_EN_SIZE                                1
#define AVR32_SCIF_SYNC                                              0
#define AVR32_SCIF_SYNC_MASK                                0x00000001
#define AVR32_SCIF_SYNC_OFFSET                                       0
#define AVR32_SCIF_SYNC_SIZE                                         1
#define AVR32_SCIF_TESTMODE                                         31
#define AVR32_SCIF_TESTMODE_MASK                            0x80000000
#define AVR32_SCIF_TESTMODE_OFFSET                                  31
#define AVR32_SCIF_TESTMODE_SIZE                                     1
#define AVR32_SCIF_TSENS                                    0x00000050
#define AVR32_SCIF_TSENSIFAVERSION                          0x000003e4
#define AVR32_SCIF_TSENSIFAVERSION_MASK                     0x000f0fff
#define AVR32_SCIF_TSENSIFAVERSION_RESETVALUE               0x00000000
#define AVR32_SCIF_TSENSIFAVERSION_VARIANT                          16
#define AVR32_SCIF_TSENSIFAVERSION_VARIANT_MASK             0x000f0000
#define AVR32_SCIF_TSENSIFAVERSION_VARIANT_OFFSET                   16
#define AVR32_SCIF_TSENSIFAVERSION_VARIANT_SIZE                      4
#define AVR32_SCIF_TSENSIFAVERSION_VERSION                           0
#define AVR32_SCIF_TSENSIFAVERSION_VERSION_MASK             0x00000fff
#define AVR32_SCIF_TSENSIFAVERSION_VERSION_OFFSET                    0
#define AVR32_SCIF_TSENSIFAVERSION_VERSION_SIZE                     12
#define AVR32_SCIF_TSENS_EN                                          0
#define AVR32_SCIF_TSENS_EN_MASK                            0x00000001
#define AVR32_SCIF_TSENS_EN_OFFSET                                   0
#define AVR32_SCIF_TSENS_EN_SIZE                                     1
#define AVR32_SCIF_TSENS_MASK                               0x00000001
#define AVR32_SCIF_TSENS_RESETVALUE                         0x00000000
#define AVR32_SCIF_TUNE_EN                                           2
#define AVR32_SCIF_TUNE_EN_MASK                             0x00000004
#define AVR32_SCIF_TUNE_EN_OFFSET                                    2
#define AVR32_SCIF_TUNE_EN_SIZE                                      1
#define AVR32_SCIF_UNLOCK                                   0x00000018
#define AVR32_SCIF_UNLOCK_ADDR                                       0
#define AVR32_SCIF_UNLOCK_ADDR_MASK                         0x000003ff
#define AVR32_SCIF_UNLOCK_ADDR_OFFSET                                0
#define AVR32_SCIF_UNLOCK_ADDR_SIZE                                 10
#define AVR32_SCIF_UNLOCK_KEY                                       24
#define AVR32_SCIF_UNLOCK_KEY_VALUE                         0x000000AA
#define AVR32_SCIF_UNLOCK_KEY_MASK                          0xff000000
#define AVR32_SCIF_UNLOCK_KEY_OFFSET                                24
#define AVR32_SCIF_UNLOCK_KEY_SIZE                                   8
#define AVR32_SCIF_UNLOCK_MASK                              0xff0003ff
#define AVR32_SCIF_UNLOCK_RESETVALUE                        0x00000000
#define AVR32_SCIF_VARIANT                                          16
#define AVR32_SCIF_VARIANT_OFFSET                                   16
#define AVR32_SCIF_VDD1V35                                  0x00000000
#define AVR32_SCIF_VDD1V45                                  0x00000001
#define AVR32_SCIF_VDD1V55                                  0x00000002
#define AVR32_SCIF_VDD1V65                                  0x00000003
#define AVR32_SCIF_VDD1V75                                  0x00000004
#define AVR32_SCIF_VDD1V80                                  0x00000005
#define AVR32_SCIF_VERSION                                  0x000003fc
#define AVR32_SCIF_VERSION_MASK                             0x000f0fff
#define AVR32_SCIF_VERSION_OFFSET                                    0
#define AVR32_SCIF_VERSION_RESETVALUE                       0x00000000
#define AVR32_SCIF_VERSION_VARIANT                                  16
#define AVR32_SCIF_VERSION_VARIANT_MASK                     0x000f0000
#define AVR32_SCIF_VERSION_VARIANT_OFFSET                           16
#define AVR32_SCIF_VERSION_VARIANT_SIZE                              4
#define AVR32_SCIF_VERSION_VERSION                                   0
#define AVR32_SCIF_VERSION_VERSION_MASK                     0x00000fff
#define AVR32_SCIF_VERSION_VERSION_OFFSET                            0
#define AVR32_SCIF_VERSION_VERSION_SIZE                             12
#define AVR32_SCIF_VREGCR                                   0x00000044
#define AVR32_SCIF_VREGCR_CALIB                                      8
#define AVR32_SCIF_VREGCR_CALIB_MASK                        0x00000f00
#define AVR32_SCIF_VREGCR_CALIB_OFFSET                               8
#define AVR32_SCIF_VREGCR_CALIB_SIZE                                 4
#define AVR32_SCIF_VREGCR_DEEPDIS                                   17
#define AVR32_SCIF_VREGCR_DEEPDIS_MASK                      0x00020000
#define AVR32_SCIF_VREGCR_DEEPDIS_OFFSET                            17
#define AVR32_SCIF_VREGCR_DEEPDIS_SIZE                               1
#define AVR32_SCIF_VREGCR_EN                                         5
#define AVR32_SCIF_VREGCR_EN_MASK                           0x00000020
#define AVR32_SCIF_VREGCR_EN_OFFSET                                  5
#define AVR32_SCIF_VREGCR_EN_SIZE                                    1
#define AVR32_SCIF_VREGCR_FCD                                       16
#define AVR32_SCIF_VREGCR_FCD_MASK                          0x00010000
#define AVR32_SCIF_VREGCR_FCD_OFFSET                                16
#define AVR32_SCIF_VREGCR_FCD_SIZE                                   1
#define AVR32_SCIF_VREGCR_INTPD                                     30
#define AVR32_SCIF_VREGCR_INTPD_MASK                        0x40000000
#define AVR32_SCIF_VREGCR_INTPD_OFFSET                              30
#define AVR32_SCIF_VREGCR_INTPD_SIZE                                 1
#define AVR32_SCIF_VREGCR_MASK                              0xc01f0fe7
#define AVR32_SCIF_VREGCR_ON                                         7
#define AVR32_SCIF_VREGCR_ON_MASK                           0x00000080
#define AVR32_SCIF_VREGCR_ON_OFFSET                                  7
#define AVR32_SCIF_VREGCR_ON_SIZE                                    1
#define AVR32_SCIF_VREGCR_POR33EN                                   18
#define AVR32_SCIF_VREGCR_POR33EN_MASK                      0x00040000
#define AVR32_SCIF_VREGCR_POR33EN_OFFSET                            18
#define AVR32_SCIF_VREGCR_POR33EN_SIZE                               1
#define AVR32_SCIF_VREGCR_POR33MASK                                 20
#define AVR32_SCIF_VREGCR_POR33MASK_MASK                    0x00100000
#define AVR32_SCIF_VREGCR_POR33MASK_OFFSET                          20
#define AVR32_SCIF_VREGCR_POR33MASK_SIZE                             1
#define AVR32_SCIF_VREGCR_POR33STATUS                               19
#define AVR32_SCIF_VREGCR_POR33STATUS_MASK                  0x00080000
#define AVR32_SCIF_VREGCR_POR33STATUS_OFFSET                        19
#define AVR32_SCIF_VREGCR_POR33STATUS_SIZE                           1
#define AVR32_SCIF_VREGCR_RESETVALUE                        0x00000000
#define AVR32_SCIF_VREGCR_SELVDD                                     0
#define AVR32_SCIF_VREGCR_SELVDD_MASK                       0x00000007
#define AVR32_SCIF_VREGCR_SELVDD_OFFSET                              0
#define AVR32_SCIF_VREGCR_SELVDD_SIZE                                3
#define AVR32_SCIF_VREGCR_SELVDD_VDD1V35                    0x00000000
#define AVR32_SCIF_VREGCR_SELVDD_VDD1V45                    0x00000001
#define AVR32_SCIF_VREGCR_SELVDD_VDD1V55                    0x00000002
#define AVR32_SCIF_VREGCR_SELVDD_VDD1V65                    0x00000003
#define AVR32_SCIF_VREGCR_SELVDD_VDD1V75                    0x00000004
#define AVR32_SCIF_VREGCR_SELVDD_VDD1V80                    0x00000005
#define AVR32_SCIF_VREGCR_SFV                                       31
#define AVR32_SCIF_VREGCR_SFV_MASK                          0x80000000
#define AVR32_SCIF_VREGCR_SFV_OFFSET                                31
#define AVR32_SCIF_VREGCR_SFV_SIZE                                   1
#define AVR32_SCIF_VREGCR_VREGOK                                     6
#define AVR32_SCIF_VREGCR_VREGOK_MASK                       0x00000040
#define AVR32_SCIF_VREGCR_VREGOK_OFFSET                              6
#define AVR32_SCIF_VREGCR_VREGOK_SIZE                                1
#define AVR32_SCIF_VREGIFBVERSION                           0x000003d8
#define AVR32_SCIF_VREGIFBVERSION_MASK                      0x000f0fff
#define AVR32_SCIF_VREGIFBVERSION_RESETVALUE                0x00000000
#define AVR32_SCIF_VREGIFBVERSION_VARIANT                           16
#define AVR32_SCIF_VREGIFBVERSION_VARIANT_MASK              0x000f0000
#define AVR32_SCIF_VREGIFBVERSION_VARIANT_OFFSET                    16
#define AVR32_SCIF_VREGIFBVERSION_VARIANT_SIZE                       4
#define AVR32_SCIF_VREGIFBVERSION_VERSION                            0
#define AVR32_SCIF_VREGIFBVERSION_VERSION_MASK              0x00000fff
#define AVR32_SCIF_VREGIFBVERSION_VERSION_OFFSET                     0
#define AVR32_SCIF_VREGIFBVERSION_VERSION_SIZE                      12
#define AVR32_SCIF_VREGOK_SIZE                                       1
#define AVR32_SCIF_VVERSION                                          0
#define AVR32_SCIF_VVERSION_MASK                            0x00000fff
#define AVR32_SCIF_VVERSION_OFFSET                                   0
#define AVR32_SCIF_VVERSION_SIZE                                    12

#define AVR32_BOD_OFF                                  0x00000000
#define AVR32_BOD_ON                                   0x00000001
#define AVR32_BOD_ON_NORESET                           0x00000002
#define AVR32_GC_DIV_CLOCK                             0x00000001
#define AVR32_GC_NO_DIV_CLOCK                          0x00000000



#ifdef __AVR32_ABI_COMPILER__


typedef struct avr32_scif_ier_t {
    unsigned int ae              : 1;
    unsigned int                 :14;
    unsigned int brifardy        : 1;
    unsigned int dfll0rcs        : 1;
    unsigned int dfll0rdy        : 1;
    unsigned int dfll0locklosta  : 1;
    unsigned int dfll0locklostf  : 1;
    unsigned int dfll0locklostc  : 1;
    unsigned int dfll0locka      : 1;
    unsigned int dfll0lockf      : 1;
    unsigned int dfll0lockc      : 1;
    unsigned int boddet          : 1;
    unsigned int sm33det         : 1;
    unsigned int vregok          : 1;
    unsigned int                 : 3;
    unsigned int osc0rdy         : 1;
    unsigned int osc32rdy        : 1;
} avr32_scif_ier_t;



typedef struct avr32_scif_idr_t {
    unsigned int ae              : 1;
    unsigned int                 :14;
    unsigned int brifardy        : 1;
    unsigned int dfll0rcs        : 1;
    unsigned int dfll0rdy        : 1;
    unsigned int dfll0locklosta  : 1;
    unsigned int dfll0locklostf  : 1;
    unsigned int dfll0locklostc  : 1;
    unsigned int dfll0locka      : 1;
    unsigned int dfll0lockf      : 1;
    unsigned int dfll0lockc      : 1;
    unsigned int boddet          : 1;
    unsigned int sm33det         : 1;
    unsigned int vregok          : 1;
    unsigned int                 : 3;
    unsigned int osc0rdy         : 1;
    unsigned int osc32rdy        : 1;
} avr32_scif_idr_t;



typedef struct avr32_scif_imr_t {
    unsigned int ae              : 1;
    unsigned int                 :14;
    unsigned int brifardy        : 1;
    unsigned int dfll0rcs        : 1;
    unsigned int dfll0rdy        : 1;
    unsigned int dfll0locklosta  : 1;
    unsigned int dfll0locklostf  : 1;
    unsigned int dfll0locklostc  : 1;
    unsigned int dfll0locka      : 1;
    unsigned int dfll0lockf      : 1;
    unsigned int dfll0lockc      : 1;
    unsigned int boddet          : 1;
    unsigned int sm33det         : 1;
    unsigned int vregok          : 1;
    unsigned int                 : 3;
    unsigned int osc0rdy         : 1;
    unsigned int osc32rdy        : 1;
} avr32_scif_imr_t;



typedef struct avr32_scif_isr_t {
    unsigned int ae              : 1;
    unsigned int                 :14;
    unsigned int brifardy        : 1;
    unsigned int dfll0rcs        : 1;
    unsigned int dfll0rdy        : 1;
    unsigned int dfll0locklosta  : 1;
    unsigned int dfll0locklostf  : 1;
    unsigned int dfll0locklostc  : 1;
    unsigned int dfll0locka      : 1;
    unsigned int dfll0lockf      : 1;
    unsigned int dfll0lockc      : 1;
    unsigned int boddet          : 1;
    unsigned int sm33det         : 1;
    unsigned int vregok          : 1;
    unsigned int                 : 3;
    unsigned int osc0rdy         : 1;
    unsigned int osc32rdy        : 1;
} avr32_scif_isr_t;



typedef struct avr32_scif_icr_t {
    unsigned int ae              : 1;
    unsigned int                 :14;
    unsigned int brifardy        : 1;
    unsigned int dfll0rcs        : 1;
    unsigned int dfll0rdy        : 1;
    unsigned int dfll0locklosta  : 1;
    unsigned int dfll0locklostf  : 1;
    unsigned int dfll0locklostc  : 1;
    unsigned int dfll0locka      : 1;
    unsigned int dfll0lockf      : 1;
    unsigned int dfll0lockc      : 1;
    unsigned int boddet          : 1;
    unsigned int sm33det         : 1;
    unsigned int vregok          : 1;
    unsigned int                 : 3;
    unsigned int osc0rdy         : 1;
    unsigned int osc32rdy        : 1;
} avr32_scif_icr_t;



typedef struct avr32_scif_pclksr_t {
    unsigned int                 : 1;
    unsigned int brifavalid      : 1;
    unsigned int                 :13;
    unsigned int brifardy        : 1;
    unsigned int dfll0rcs        : 1;
    unsigned int dfll0rdy        : 1;
    unsigned int dfll0locklosta  : 1;
    unsigned int dfll0locklostf  : 1;
    unsigned int dfll0locklostc  : 1;
    unsigned int dfll0locka      : 1;
    unsigned int dfll0lockf      : 1;
    unsigned int dfll0lockc      : 1;
    unsigned int boddet          : 1;
    unsigned int sm33det         : 1;
    unsigned int vregok          : 1;
    unsigned int                 : 3;
    unsigned int osc0rdy         : 1;
    unsigned int osc32rdy        : 1;
} avr32_scif_pclksr_t;



typedef struct avr32_scif_unlock_t {
    unsigned int key             : 8;
    unsigned int                 :14;
    unsigned int addr            :10;
} avr32_scif_unlock_t;



typedef struct avr32_scif_oscctrl0_t {
    unsigned int                 :15;
    unsigned int oscen           : 1;
    unsigned int                 : 5;
    unsigned int startup         : 3;
    unsigned int                 : 4;
    unsigned int agc             : 1;
    unsigned int gain            : 2;
    unsigned int mode            : 1;
} avr32_scif_oscctrl0_t;



typedef struct avr32_scif_oscctrl32_t {
    unsigned int testmode        : 1;
    unsigned int                 :12;
    unsigned int startup         : 3;
    unsigned int                 : 5;
    unsigned int mode            : 3;
    unsigned int                 : 4;
    unsigned int en1k            : 1;
    unsigned int en32k           : 1;
    unsigned int pinsel          : 1;
    unsigned int osc32en         : 1;
} avr32_scif_oscctrl32_t;



typedef struct avr32_scif_dfll0conf_t {
    unsigned int coarse          : 8;
    unsigned int                 : 7;
    unsigned int fine            : 9;
    unsigned int                 : 5;
    unsigned int dither          : 1;
    unsigned int mode            : 1;
    unsigned int en              : 1;
} avr32_scif_dfll0conf_t;



typedef struct avr32_scif_dfll0step_t {
    unsigned int                 : 7;
    unsigned int fstep           : 9;
    unsigned int                 : 8;
    unsigned int cstep           : 8;
} avr32_scif_dfll0step_t;



typedef struct avr32_scif_dfll0ssg_t {
    unsigned int                 :11;
    unsigned int stepsize        : 5;
    unsigned int                 : 3;
    unsigned int amplitude       : 5;
    unsigned int                 : 6;
    unsigned int prbs            : 1;
    unsigned int en              : 1;
} avr32_scif_dfll0ssg_t;



typedef struct avr32_scif_dfll0ratio_t {
    unsigned int ratiodiff       :16;
    unsigned int                 :11;
    unsigned int numref          : 5;
} avr32_scif_dfll0ratio_t;



typedef struct avr32_scif_dfll0sync_t {
    unsigned int                 :31;
    unsigned int sync            : 1;
} avr32_scif_dfll0sync_t;



typedef struct avr32_scif_bod_t {
    unsigned int sfv             : 1;
    unsigned int                 :14;
    unsigned int fcd             : 1;
    unsigned int                 : 6;
    unsigned int ctrl            : 2;
    unsigned int                 : 1;
    unsigned int hyst            : 1;
    unsigned int level           : 6;
} avr32_scif_bod_t;



typedef struct avr32_scif_bgcr_t {
    unsigned int sfv             : 1;
    unsigned int                 :14;
    unsigned int fcd             : 1;
    unsigned int                 :13;
    unsigned int calib           : 3;
} avr32_scif_bgcr_t;



typedef struct avr32_scif_vregcr_t {
    unsigned int sfv             : 1;
    unsigned int intpd           : 1;
    unsigned int                 : 9;
    unsigned int por33mask       : 1;
    unsigned int por33status     : 1;
    unsigned int por33en         : 1;
    unsigned int deepdis         : 1;
    unsigned int fcd             : 1;
    unsigned int                 : 4;
    unsigned int calib           : 4;
    unsigned int on              : 1;
    unsigned int vregok          : 1;
    unsigned int en              : 1;
    unsigned int                 : 2;
    unsigned int selvdd          : 3;
} avr32_scif_vregcr_t;



typedef struct avr32_scif_rccr_t {
    unsigned int                 :15;
    unsigned int fcd             : 1;
    unsigned int                 : 6;
    unsigned int calib           :10;
} avr32_scif_rccr_t;



typedef struct avr32_scif_sm33_t {
    unsigned int                 : 4;
    unsigned int sampfreq        : 4;
    unsigned int                 : 5;
    unsigned int onsm            : 1;
    unsigned int sfv             : 1;
    unsigned int fcd             : 1;
    unsigned int                 : 4;
    unsigned int calib           : 4;
    unsigned int fs              : 1;
    unsigned int                 : 3;
    unsigned int ctrl            : 4;
} avr32_scif_sm33_t;



typedef struct avr32_scif_tsens_t {
    unsigned int                 :31;
    unsigned int en              : 1;
} avr32_scif_tsens_t;



typedef struct avr32_scif_stilo_t {
    unsigned int sfv             : 1;
    unsigned int                 : 1;
    unsigned int ratio           :10;
    unsigned int                 : 3;
    unsigned int fcd             : 1;
    unsigned int sel             : 8;
    unsigned int                 : 3;
    unsigned int nolock          : 1;
    unsigned int lock            : 1;
    unsigned int tune_en         : 1;
    unsigned int                 : 1;
    unsigned int en              : 1;
} avr32_scif_stilo_t;



typedef struct avr32_scif_rc120mcr_t {
    unsigned int                 :31;
    unsigned int en              : 1;
} avr32_scif_rc120mcr_t;



typedef struct avr32_scif_rc32kcr_t {
    unsigned int                 :31;
    unsigned int en              : 1;
} avr32_scif_rc32kcr_t;



typedef struct avr32_scif_gcctrl_t {
    unsigned int                 : 8;
    unsigned int div             : 8;
    unsigned int                 : 4;
    unsigned int oscsel          : 4;
    unsigned int                 : 6;
    unsigned int diven           : 1;
    unsigned int cen             : 1;
} avr32_scif_gcctrl_t;



typedef struct avr32_scif_osc0version_t {
    unsigned int                 :12;
    unsigned int variant         : 4;
    unsigned int                 : 4;
    unsigned int version         :12;
} avr32_scif_osc0version_t;



typedef struct avr32_scif_osc32version_t {
    unsigned int                 :12;
    unsigned int variant         : 4;
    unsigned int                 : 4;
    unsigned int version         :12;
} avr32_scif_osc32version_t;



typedef struct avr32_scif_dfllifversion_t {
    unsigned int                 :12;
    unsigned int variant         : 4;
    unsigned int                 : 4;
    unsigned int version         :12;
} avr32_scif_dfllifversion_t;



typedef struct avr32_scif_bodifaversion_t {
    unsigned int                 :12;
    unsigned int variant         : 4;
    unsigned int                 : 4;
    unsigned int version         :12;
} avr32_scif_bodifaversion_t;



typedef struct avr32_scif_vregifbversion_t {
    unsigned int                 :12;
    unsigned int variant         : 4;
    unsigned int                 : 4;
    unsigned int version         :12;
} avr32_scif_vregifbversion_t;



typedef struct avr32_scif_rcoscifaversion_t {
    unsigned int                 :12;
    unsigned int variant         : 4;
    unsigned int                 : 4;
    unsigned int version         :12;
} avr32_scif_rcoscifaversion_t;



typedef struct avr32_scif_sm33ifaversion_t {
    unsigned int                 : 4;
    unsigned int variant         :12;
    unsigned int                 :12;
    unsigned int version         : 4;
} avr32_scif_sm33ifaversion_t;



typedef struct avr32_scif_tsensifaversion_t {
    unsigned int                 :12;
    unsigned int variant         : 4;
    unsigned int                 : 4;
    unsigned int version         :12;
} avr32_scif_tsensifaversion_t;



typedef struct avr32_scif_stiloversion_t {
    unsigned int                 :12;
    unsigned int variant         : 4;
    unsigned int                 : 4;
    unsigned int version         :12;
} avr32_scif_stiloversion_t;



typedef struct avr32_scif_rc120mifaversion_t {
    unsigned int                 : 2;
    unsigned int variant         :14;
    unsigned int                 : 4;
    unsigned int version         :12;
} avr32_scif_rc120mifaversion_t;



typedef struct avr32_scif_brifaversion_t {
    unsigned int                 :12;
    unsigned int variant         : 4;
    unsigned int                 : 4;
    unsigned int version         :12;
} avr32_scif_brifaversion_t;



typedef struct avr32_scif_rc32kifaversion_t {
    unsigned int                 :12;
    unsigned int variant         : 4;
    unsigned int                 : 4;
    unsigned int vversion        :12;
} avr32_scif_rc32kifaversion_t;



typedef struct avr32_scif_gclkversion_t {
    unsigned int                 :12;
    unsigned int variant         : 4;
    unsigned int                 : 4;
    unsigned int version         :12;
} avr32_scif_gclkversion_t;



typedef struct avr32_scif_version_t {
    unsigned int                 :12;
    unsigned int variant         : 4;
    unsigned int                 : 4;
    unsigned int version         :12;
} avr32_scif_version_t;



typedef struct avr32_scif_t {
  union {
          unsigned long                  ier       ;//0x0000
          avr32_scif_ier_t               IER       ;
  };
  union {
          unsigned long                  idr       ;//0x0004
          avr32_scif_idr_t               IDR       ;
  };
  union {
    const unsigned long                  imr       ;//0x0008
    const avr32_scif_imr_t               IMR       ;
  };
  union {
    const unsigned long                  isr       ;//0x000c
    const avr32_scif_isr_t               ISR       ;
  };
  union {
          unsigned long                  icr       ;//0x0010
          avr32_scif_icr_t               ICR       ;
  };
  union {
    const unsigned long                  pclksr    ;//0x0014
    const avr32_scif_pclksr_t            PCLKSR    ;
  };
  union {
          unsigned long                  unlock    ;//0x0018
          avr32_scif_unlock_t            UNLOCK    ;
  };
  union {
          unsigned long                  oscctrl0  ;//0x001c
          avr32_scif_oscctrl0_t          OSCCTRL0  ;
  };
  union {
          unsigned long                  oscctrl32 ;//0x0020
          avr32_scif_oscctrl32_t         OSCCTRL32 ;
  };
  union {
          unsigned long                  dfll0conf ;//0x0024
          avr32_scif_dfll0conf_t         DFLL0CONF ;
  };
          unsigned long                  dfll0fmul ;//0x0028
  union {
          unsigned long                  dfll0step ;//0x002c
          avr32_scif_dfll0step_t         DFLL0STEP ;
  };
  union {
          unsigned long                  dfll0ssg  ;//0x0030
          avr32_scif_dfll0ssg_t          DFLL0SSG  ;
  };
  union {
    const unsigned long                  dfll0ratio;//0x0034
    const avr32_scif_dfll0ratio_t        DFLL0RATIO;
  };
  union {
          unsigned long                  dfll0sync ;//0x0038
          avr32_scif_dfll0sync_t         DFLL0SYNC ;
  };
  union {
          unsigned long                  bod       ;//0x003c
          avr32_scif_bod_t               BOD       ;
  };
  union {
          unsigned long                  bgcr      ;//0x0040
          avr32_scif_bgcr_t              BGCR      ;
  };
  union {
          unsigned long                  vregcr    ;//0x0044
          avr32_scif_vregcr_t            VREGCR    ;
  };
  union {
          unsigned long                  rccr      ;//0x0048
          avr32_scif_rccr_t              RCCR      ;
  };
  union {
          unsigned long                  sm33      ;//0x004c
          avr32_scif_sm33_t              SM33      ;
  };
  union {
          unsigned long                  tsens     ;//0x0050
          avr32_scif_tsens_t             TSENS     ;
  };
  union {
          unsigned long                  stilo     ;//0x0054
          avr32_scif_stilo_t             STILO     ;
  };
  union {
          unsigned long                  rc120mcr  ;//0x0058
          avr32_scif_rc120mcr_t          RC120MCR  ;
  };
          unsigned long                  br        [4];//0x005c
  union {
          unsigned long                  rc32kcr   ;//0x006c
          avr32_scif_rc32kcr_t           RC32KCR   ;
  };
  union {
          unsigned long                  gcctrl    [5];//0x0070
          avr32_scif_gcctrl_t            GCCTRL    [5];
  };
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
          unsigned int                   :32       ;//0x0100
          unsigned int                   :32       ;//0x0104
          unsigned int                   :32       ;//0x0108
          unsigned int                   :32       ;//0x010c
          unsigned int                   :32       ;//0x0110
          unsigned int                   :32       ;//0x0114
          unsigned int                   :32       ;//0x0118
          unsigned int                   :32       ;//0x011c
          unsigned int                   :32       ;//0x0120
          unsigned int                   :32       ;//0x0124
          unsigned int                   :32       ;//0x0128
          unsigned int                   :32       ;//0x012c
          unsigned int                   :32       ;//0x0130
          unsigned int                   :32       ;//0x0134
          unsigned int                   :32       ;//0x0138
          unsigned int                   :32       ;//0x013c
          unsigned int                   :32       ;//0x0140
          unsigned int                   :32       ;//0x0144
          unsigned int                   :32       ;//0x0148
          unsigned int                   :32       ;//0x014c
          unsigned int                   :32       ;//0x0150
          unsigned int                   :32       ;//0x0154
          unsigned int                   :32       ;//0x0158
          unsigned int                   :32       ;//0x015c
          unsigned int                   :32       ;//0x0160
          unsigned int                   :32       ;//0x0164
          unsigned int                   :32       ;//0x0168
          unsigned int                   :32       ;//0x016c
          unsigned int                   :32       ;//0x0170
          unsigned int                   :32       ;//0x0174
          unsigned int                   :32       ;//0x0178
          unsigned int                   :32       ;//0x017c
          unsigned int                   :32       ;//0x0180
          unsigned int                   :32       ;//0x0184
          unsigned int                   :32       ;//0x0188
          unsigned int                   :32       ;//0x018c
          unsigned int                   :32       ;//0x0190
          unsigned int                   :32       ;//0x0194
          unsigned int                   :32       ;//0x0198
          unsigned int                   :32       ;//0x019c
          unsigned int                   :32       ;//0x01a0
          unsigned int                   :32       ;//0x01a4
          unsigned int                   :32       ;//0x01a8
          unsigned int                   :32       ;//0x01ac
          unsigned int                   :32       ;//0x01b0
          unsigned int                   :32       ;//0x01b4
          unsigned int                   :32       ;//0x01b8
          unsigned int                   :32       ;//0x01bc
          unsigned int                   :32       ;//0x01c0
          unsigned int                   :32       ;//0x01c4
          unsigned int                   :32       ;//0x01c8
          unsigned int                   :32       ;//0x01cc
          unsigned int                   :32       ;//0x01d0
          unsigned int                   :32       ;//0x01d4
          unsigned int                   :32       ;//0x01d8
          unsigned int                   :32       ;//0x01dc
          unsigned int                   :32       ;//0x01e0
          unsigned int                   :32       ;//0x01e4
          unsigned int                   :32       ;//0x01e8
          unsigned int                   :32       ;//0x01ec
          unsigned int                   :32       ;//0x01f0
          unsigned int                   :32       ;//0x01f4
          unsigned int                   :32       ;//0x01f8
          unsigned int                   :32       ;//0x01fc
          unsigned int                   :32       ;//0x0200
          unsigned int                   :32       ;//0x0204
          unsigned int                   :32       ;//0x0208
          unsigned int                   :32       ;//0x020c
          unsigned int                   :32       ;//0x0210
          unsigned int                   :32       ;//0x0214
          unsigned int                   :32       ;//0x0218
          unsigned int                   :32       ;//0x021c
          unsigned int                   :32       ;//0x0220
          unsigned int                   :32       ;//0x0224
          unsigned int                   :32       ;//0x0228
          unsigned int                   :32       ;//0x022c
          unsigned int                   :32       ;//0x0230
          unsigned int                   :32       ;//0x0234
          unsigned int                   :32       ;//0x0238
          unsigned int                   :32       ;//0x023c
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
  union {
    const unsigned long                  osc0version;//0x03c8
    const avr32_scif_osc0version_t       OSC0VERSION;
  };
  union {
    const unsigned long                  osc32version;//0x03cc
    const avr32_scif_osc32version_t      OSC32VERSION;
  };
  union {
    const unsigned long                  dfllifversion;//0x03d0
    const avr32_scif_dfllifversion_t     DFLLIFVERSION;
  };
  union {
    const unsigned long                  bodifaversion;//0x03d4
    const avr32_scif_bodifaversion_t     BODIFAVERSION;
  };
  union {
    const unsigned long                  vregifbversion;//0x03d8
    const avr32_scif_vregifbversion_t    VREGIFBVERSION;
  };
  union {
    const unsigned long                  rcoscifaversion;//0x03dc
    const avr32_scif_rcoscifaversion_t   RCOSCIFAVERSION;
  };
  union {
    const unsigned long                  sm33ifaversion;//0x03e0
    const avr32_scif_sm33ifaversion_t    SM33IFAVERSION;
  };
  union {
    const unsigned long                  tsensifaversion;//0x03e4
    const avr32_scif_tsensifaversion_t   TSENSIFAVERSION;
  };
  union {
    const unsigned long                  stiloversion;//0x03e8
    const avr32_scif_stiloversion_t      STILOVERSION;
  };
  union {
    const unsigned long                  rc120mifaversion;//0x03ec
    const avr32_scif_rc120mifaversion_t  RC120MIFAVERSION;
  };
  union {
    const unsigned long                  brifaversion;//0x03f0
    const avr32_scif_brifaversion_t      BRIFAVERSION;
  };
  union {
    const unsigned long                  rc32kifaversion;//0x03f4
    const avr32_scif_rc32kifaversion_t   RC32KIFAVERSION;
  };
  union {
    const unsigned long                  gclkversion;//0x03f8
    const avr32_scif_gclkversion_t       GCLKVERSION;
  };
  union {
    const unsigned long                  version   ;//0x03fc
    const avr32_scif_version_t           VERSION   ;
  };
} avr32_scif_t;



/*#ifdef __AVR32_ABI_COMPILER__*/
#endif

/*#ifdef AVR32_SCIF_102_H_INCLUDED*/
#endif

