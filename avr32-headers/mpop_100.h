/*****************************************************************************
 *
 * Copyright (C) 2008-2010 Atmel Corporation
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
 * Revision     : $Revision: 74772 $
 * Checkin Date : $Date: 2010-05-14 06:51:12 +0200 (Fri, 14 May 2010) $ 
 *
 ****************************************************************************/
#ifndef AVR32_MPOP_100_H_INCLUDED
#define AVR32_MPOP_100_H_INCLUDED

#define AVR32_MPOP_H_VERSION 100

#include "avr32/abi.h"


/*
 Note to user:

 The following defines are always generated:
 - Register offset: AVR32_MPOP_<register>
 - Bitfield mask:   AVR32_MPOP_<register>_<bitfield>
 - Bitfield offset: AVR32_MPOP_<register>_<bitfield>_OFFSET
 - Bitfield size:   AVR32_MPOP_<register>_<bitfield>_SIZE
 - Bitfield values: AVR32_MPOP_<register>_<bitfield>_<value name>

 The following defines are generated if they don't cause ambiguities,
 i.e. the name is unique, or all values with that name are the same.
 - Bitfield mask:   AVR32_MPOP_<bitfield>
 - Bitfield offset: AVR32_MPOP_<bitfield>_OFFSET
 - Bitfield size:   AVR32_MPOP_<bitfield>_SIZE
 - Bitfield values: AVR32_MPOP_<bitfield>_<value name>
 - Bitfield values: AVR32_MPOP_<value name>

 All defines are sorted alphabetically.
*/


#define AVR32_MPOP_ALPHA                                            24
#define AVR32_MPOP_ALPHA_MASK                               0xff000000
#define AVR32_MPOP_ALPHA_OFFSET                                     24
#define AVR32_MPOP_ALPHA_SIZE                                        8
#define AVR32_MPOP_B                                                 0
#define AVR32_MPOP_B1                                                0
#define AVR32_MPOP_B1_MASK                                  0x00000fff
#define AVR32_MPOP_B1_OFFSET                                         0
#define AVR32_MPOP_B1_SIZE                                          12
#define AVR32_MPOP_B2                                               12
#define AVR32_MPOP_B2B1                                     0x00000024
#define AVR32_MPOP_B2B1_B1                                           0
#define AVR32_MPOP_B2B1_B1_MASK                             0x00000fff
#define AVR32_MPOP_B2B1_B1_OFFSET                                    0
#define AVR32_MPOP_B2B1_B1_SIZE                                     12
#define AVR32_MPOP_B2B1_B2                                          12
#define AVR32_MPOP_B2B1_B2_MASK                             0x00fff000
#define AVR32_MPOP_B2B1_B2_OFFSET                                   12
#define AVR32_MPOP_B2B1_B2_SIZE                                     12
#define AVR32_MPOP_B2_MASK                                  0x00fff000
#define AVR32_MPOP_B2_OFFSET                                        12
#define AVR32_MPOP_B2_SIZE                                          12
#define AVR32_MPOP_B3                                                0
#define AVR32_MPOP_B3_MASK                                  0x00000fff
#define AVR32_MPOP_B3_OFFSET                                         0
#define AVR32_MPOP_B3_SIZE                                          12
#define AVR32_MPOP_B4                                               12
#define AVR32_MPOP_B4B3                                     0x00000028
#define AVR32_MPOP_B4B3_B3                                           0
#define AVR32_MPOP_B4B3_B3_MASK                             0x00000fff
#define AVR32_MPOP_B4B3_B3_OFFSET                                    0
#define AVR32_MPOP_B4B3_B3_SIZE                                     12
#define AVR32_MPOP_B4B3_B4                                          12
#define AVR32_MPOP_B4B3_B4_MASK                             0xfffff000
#define AVR32_MPOP_B4B3_B4_OFFSET                                   12
#define AVR32_MPOP_B4B3_B4_SIZE                                     20
#define AVR32_MPOP_B4_MASK                                  0xfffff000
#define AVR32_MPOP_B4_OFFSET                                        12
#define AVR32_MPOP_B4_SIZE                                          20
#define AVR32_MPOP_BEAR                                              0
#define AVR32_MPOP_BEAR_MASK                                0xffffffff
#define AVR32_MPOP_BEAR_OFFSET                                       0
#define AVR32_MPOP_BEAR_SIZE                                        32
#define AVR32_MPOP_BGCOLOR                                  0x00000090
#define AVR32_MPOP_BGCOLOR_B                                         0
#define AVR32_MPOP_BGCOLOR_B_MASK                           0x000000ff
#define AVR32_MPOP_BGCOLOR_B_OFFSET                                  0
#define AVR32_MPOP_BGCOLOR_B_SIZE                                    8
#define AVR32_MPOP_BGCOLOR_G                                         8
#define AVR32_MPOP_BGCOLOR_G_MASK                           0x0000ff00
#define AVR32_MPOP_BGCOLOR_G_OFFSET                                  8
#define AVR32_MPOP_BGCOLOR_G_SIZE                                    8
#define AVR32_MPOP_BGCOLOR_R                                        16
#define AVR32_MPOP_BGCOLOR_R_MASK                           0x00ff0000
#define AVR32_MPOP_BGCOLOR_R_OFFSET                                 16
#define AVR32_MPOP_BGCOLOR_R_SIZE                                    8
#define AVR32_MPOP_BGR                                               6
#define AVR32_MPOP_BGR_MASK                                 0x00000040
#define AVR32_MPOP_BGR_OFFSET                                        6
#define AVR32_MPOP_BGR_SIZE                                          1
#define AVR32_MPOP_BLUE                                              0
#define AVR32_MPOP_BLUE_MASK                                0x000000ff
#define AVR32_MPOP_BLUE_OFFSET                                       0
#define AVR32_MPOP_BLUE_SIZE                                         8
#define AVR32_MPOP_B_MASK                                   0x000000ff
#define AVR32_MPOP_B_OFFSET                                          0
#define AVR32_MPOP_B_SIZE                                            8
#define AVR32_MPOP_CACHEDIS                                          8
#define AVR32_MPOP_CACHEDIS_MASK                            0x00000100
#define AVR32_MPOP_CACHEDIS_OFFSET                                   8
#define AVR32_MPOP_CACHEDIS_SIZE                                     1
#define AVR32_MPOP_CR                                       0x00000000
#define AVR32_MPOP_CR_CACHEDIS                                       8
#define AVR32_MPOP_CR_CACHEDIS_MASK                         0x00000100
#define AVR32_MPOP_CR_CACHEDIS_OFFSET                                8
#define AVR32_MPOP_CR_CACHEDIS_SIZE                                  1
#define AVR32_MPOP_CR_EN                                             0
#define AVR32_MPOP_CR_EN_MASK                               0x00000001
#define AVR32_MPOP_CR_EN_OFFSET                                      0
#define AVR32_MPOP_CR_EN_SIZE                                        1
#define AVR32_MPOP_CR_OUT_BGR                                        3
#define AVR32_MPOP_CR_OUT_BGR_MASK                          0x00000008
#define AVR32_MPOP_CR_OUT_BGR_OFFSET                                 3
#define AVR32_MPOP_CR_OUT_BGR_SIZE                                   1
#define AVR32_MPOP_CR_OUT_CTRL                                       2
#define AVR32_MPOP_CR_OUT_CTRL_MASK                         0x00000004
#define AVR32_MPOP_CR_OUT_CTRL_MASTER                       0x00000001
#define AVR32_MPOP_CR_OUT_CTRL_OFFSET                                2
#define AVR32_MPOP_CR_OUT_CTRL_SIZE                                  1
#define AVR32_MPOP_CR_OUT_CTRL_SLAVE                        0x00000000
#define AVR32_MPOP_CR_START                                          1
#define AVR32_MPOP_CR_START_MASK                            0x00000002
#define AVR32_MPOP_CR_START_OFFSET                                   1
#define AVR32_MPOP_CR_START_SIZE                                     1
#define AVR32_MPOP_CURSOREN                                          0
#define AVR32_MPOP_CURSOREN_MASK                            0x00000001
#define AVR32_MPOP_CURSOREN_OFFSET                                   0
#define AVR32_MPOP_CURSOREN_SIZE                                     1
#define AVR32_MPOP_CURSOR_P0                                0x00000080
#define AVR32_MPOP_CURSOR_P0_B                                       0
#define AVR32_MPOP_CURSOR_P0_B_MASK                         0x000000ff
#define AVR32_MPOP_CURSOR_P0_B_OFFSET                                0
#define AVR32_MPOP_CURSOR_P0_B_SIZE                                  8
#define AVR32_MPOP_CURSOR_P0_G                                       8
#define AVR32_MPOP_CURSOR_P0_G_MASK                         0x0000ff00
#define AVR32_MPOP_CURSOR_P0_G_OFFSET                                8
#define AVR32_MPOP_CURSOR_P0_G_SIZE                                  8
#define AVR32_MPOP_CURSOR_P0_INVERT                                 25
#define AVR32_MPOP_CURSOR_P0_INVERT_MASK                    0x02000000
#define AVR32_MPOP_CURSOR_P0_INVERT_OFFSET                          25
#define AVR32_MPOP_CURSOR_P0_INVERT_SIZE                             1
#define AVR32_MPOP_CURSOR_P0_R                                      16
#define AVR32_MPOP_CURSOR_P0_R_MASK                         0x00ff0000
#define AVR32_MPOP_CURSOR_P0_R_OFFSET                               16
#define AVR32_MPOP_CURSOR_P0_R_SIZE                                  8
#define AVR32_MPOP_CURSOR_P0_VISIBLE                                24
#define AVR32_MPOP_CURSOR_P0_VISIBLE_MASK                   0x01000000
#define AVR32_MPOP_CURSOR_P0_VISIBLE_OFFSET                         24
#define AVR32_MPOP_CURSOR_P0_VISIBLE_SIZE                            1
#define AVR32_MPOP_CURSOR_P1                                0x00000084
#define AVR32_MPOP_CURSOR_P1_B                                       0
#define AVR32_MPOP_CURSOR_P1_B_MASK                         0x000000ff
#define AVR32_MPOP_CURSOR_P1_B_OFFSET                                0
#define AVR32_MPOP_CURSOR_P1_B_SIZE                                  8
#define AVR32_MPOP_CURSOR_P1_G                                       8
#define AVR32_MPOP_CURSOR_P1_G_MASK                         0x0000ff00
#define AVR32_MPOP_CURSOR_P1_G_OFFSET                                8
#define AVR32_MPOP_CURSOR_P1_G_SIZE                                  8
#define AVR32_MPOP_CURSOR_P1_INVERT                                 25
#define AVR32_MPOP_CURSOR_P1_INVERT_MASK                    0x02000000
#define AVR32_MPOP_CURSOR_P1_INVERT_OFFSET                          25
#define AVR32_MPOP_CURSOR_P1_INVERT_SIZE                             1
#define AVR32_MPOP_CURSOR_P1_R                                      16
#define AVR32_MPOP_CURSOR_P1_R_MASK                         0x00ff0000
#define AVR32_MPOP_CURSOR_P1_R_OFFSET                               16
#define AVR32_MPOP_CURSOR_P1_R_SIZE                                  8
#define AVR32_MPOP_CURSOR_P1_VISIBLE                                24
#define AVR32_MPOP_CURSOR_P1_VISIBLE_MASK                   0x01000000
#define AVR32_MPOP_CURSOR_P1_VISIBLE_OFFSET                         24
#define AVR32_MPOP_CURSOR_P1_VISIBLE_SIZE                            1
#define AVR32_MPOP_CURSOR_P2                                0x00000088
#define AVR32_MPOP_CURSOR_P2_B                                       0
#define AVR32_MPOP_CURSOR_P2_B_MASK                         0x000000ff
#define AVR32_MPOP_CURSOR_P2_B_OFFSET                                0
#define AVR32_MPOP_CURSOR_P2_B_SIZE                                  8
#define AVR32_MPOP_CURSOR_P2_G                                       8
#define AVR32_MPOP_CURSOR_P2_G_MASK                         0x0000ff00
#define AVR32_MPOP_CURSOR_P2_G_OFFSET                                8
#define AVR32_MPOP_CURSOR_P2_G_SIZE                                  8
#define AVR32_MPOP_CURSOR_P2_INVERT                                 25
#define AVR32_MPOP_CURSOR_P2_INVERT_MASK                    0x02000000
#define AVR32_MPOP_CURSOR_P2_INVERT_OFFSET                          25
#define AVR32_MPOP_CURSOR_P2_INVERT_SIZE                             1
#define AVR32_MPOP_CURSOR_P2_R                                      16
#define AVR32_MPOP_CURSOR_P2_R_MASK                         0x00ff0000
#define AVR32_MPOP_CURSOR_P2_R_OFFSET                               16
#define AVR32_MPOP_CURSOR_P2_R_SIZE                                  8
#define AVR32_MPOP_CURSOR_P2_VISIBLE                                24
#define AVR32_MPOP_CURSOR_P2_VISIBLE_MASK                   0x01000000
#define AVR32_MPOP_CURSOR_P2_VISIBLE_OFFSET                         24
#define AVR32_MPOP_CURSOR_P2_VISIBLE_SIZE                            1
#define AVR32_MPOP_CURSOR_P3                                0x0000008c
#define AVR32_MPOP_CURSOR_P3_B                                       0
#define AVR32_MPOP_CURSOR_P3_B_MASK                         0x000000ff
#define AVR32_MPOP_CURSOR_P3_B_OFFSET                                0
#define AVR32_MPOP_CURSOR_P3_B_SIZE                                  8
#define AVR32_MPOP_CURSOR_P3_G                                       8
#define AVR32_MPOP_CURSOR_P3_G_MASK                         0x0000ff00
#define AVR32_MPOP_CURSOR_P3_G_OFFSET                                8
#define AVR32_MPOP_CURSOR_P3_G_SIZE                                  8
#define AVR32_MPOP_CURSOR_P3_INVERT                                 25
#define AVR32_MPOP_CURSOR_P3_INVERT_MASK                    0x02000000
#define AVR32_MPOP_CURSOR_P3_INVERT_OFFSET                          25
#define AVR32_MPOP_CURSOR_P3_INVERT_SIZE                             1
#define AVR32_MPOP_CURSOR_P3_R                                      16
#define AVR32_MPOP_CURSOR_P3_R_MASK                         0x00ff0000
#define AVR32_MPOP_CURSOR_P3_R_OFFSET                               16
#define AVR32_MPOP_CURSOR_P3_R_SIZE                                  8
#define AVR32_MPOP_CURSOR_P3_VISIBLE                                24
#define AVR32_MPOP_CURSOR_P3_VISIBLE_MASK                   0x01000000
#define AVR32_MPOP_CURSOR_P3_VISIBLE_OFFSET                         24
#define AVR32_MPOP_CURSOR_P3_VISIBLE_SIZE                            1
#define AVR32_MPOP_CURSOR_POS                               0x00000058
#define AVR32_MPOP_CURSOR_POS_CURSOR_POS_X                          11
#define AVR32_MPOP_CURSOR_POS_CURSOR_POS_X_MASK             0x003ff800
#define AVR32_MPOP_CURSOR_POS_CURSOR_POS_X_OFFSET                   11
#define AVR32_MPOP_CURSOR_POS_CURSOR_POS_X_SIZE                     11
#define AVR32_MPOP_CURSOR_POS_CURSOR_POS_Y                           0
#define AVR32_MPOP_CURSOR_POS_CURSOR_POS_Y_MASK             0x000007ff
#define AVR32_MPOP_CURSOR_POS_CURSOR_POS_Y_OFFSET                    0
#define AVR32_MPOP_CURSOR_POS_CURSOR_POS_Y_SIZE                     11
#define AVR32_MPOP_CURSOR_POS_X                                     11
#define AVR32_MPOP_CURSOR_POS_X_MASK                        0x003ff800
#define AVR32_MPOP_CURSOR_POS_X_OFFSET                              11
#define AVR32_MPOP_CURSOR_POS_X_SIZE                                11
#define AVR32_MPOP_CURSOR_POS_Y                                      0
#define AVR32_MPOP_CURSOR_POS_Y_MASK                        0x000007ff
#define AVR32_MPOP_CURSOR_POS_Y_OFFSET                               0
#define AVR32_MPOP_CURSOR_POS_Y_SIZE                                11
#define AVR32_MPOP_CURSOR_SAR                               0x00000048
#define AVR32_MPOP_CURSOR_SAR_CURSOR_SAR                             0
#define AVR32_MPOP_CURSOR_SAR_CURSOR_SAR_MASK               0xffffffff
#define AVR32_MPOP_CURSOR_SAR_CURSOR_SAR_OFFSET                      0
#define AVR32_MPOP_CURSOR_SAR_CURSOR_SAR_SIZE                       32
#define AVR32_MPOP_CURSOR_SAR_MASK                          0xffffffff
#define AVR32_MPOP_CURSOR_SAR_OFFSET                                 0
#define AVR32_MPOP_CURSOR_SAR_SIZE                                  32
#define AVR32_MPOP_CURSOR_SIZE                              0x0000006c
#define AVR32_MPOP_CURSOR_SIZE_CURSOR_SIZE_X                        11
#define AVR32_MPOP_CURSOR_SIZE_CURSOR_SIZE_X_MASK           0x003ff800
#define AVR32_MPOP_CURSOR_SIZE_CURSOR_SIZE_X_OFFSET                 11
#define AVR32_MPOP_CURSOR_SIZE_CURSOR_SIZE_X_SIZE                   11
#define AVR32_MPOP_CURSOR_SIZE_CURSOR_SIZE_Y                         0
#define AVR32_MPOP_CURSOR_SIZE_CURSOR_SIZE_Y_MASK           0x000007ff
#define AVR32_MPOP_CURSOR_SIZE_CURSOR_SIZE_Y_OFFSET                  0
#define AVR32_MPOP_CURSOR_SIZE_CURSOR_SIZE_Y_SIZE                   11
#define AVR32_MPOP_CURSOR_SIZE_X                                    11
#define AVR32_MPOP_CURSOR_SIZE_X_MASK                       0x003ff800
#define AVR32_MPOP_CURSOR_SIZE_X_OFFSET                             11
#define AVR32_MPOP_CURSOR_SIZE_X_SIZE                               11
#define AVR32_MPOP_CURSOR_SIZE_Y                                     0
#define AVR32_MPOP_CURSOR_SIZE_Y_MASK                       0x000007ff
#define AVR32_MPOP_CURSOR_SIZE_Y_OFFSET                              0
#define AVR32_MPOP_CURSOR_SIZE_Y_SIZE                               11
#define AVR32_MPOP_CURSOR_WTC                               0x0000007c
#define AVR32_MPOP_CURSOR_WTC_CURSOR_WTC                             0
#define AVR32_MPOP_CURSOR_WTC_CURSOR_WTC_MASK               0xffffffff
#define AVR32_MPOP_CURSOR_WTC_CURSOR_WTC_OFFSET                      0
#define AVR32_MPOP_CURSOR_WTC_CURSOR_WTC_SIZE                       32
#define AVR32_MPOP_CURSOR_WTC_MASK                          0xffffffff
#define AVR32_MPOP_CURSOR_WTC_OFFSET                                 0
#define AVR32_MPOP_CURSOR_WTC_SIZE                                  32
#define AVR32_MPOP_DISP_MAX_COORD                           0x00000010
#define AVR32_MPOP_DISP_MAX_COORD_DISP_MAX_COORD_X                  11
#define AVR32_MPOP_DISP_MAX_COORD_DISP_MAX_COORD_X_MASK     0x003ff800
#define AVR32_MPOP_DISP_MAX_COORD_DISP_MAX_COORD_X_OFFSET           11
#define AVR32_MPOP_DISP_MAX_COORD_DISP_MAX_COORD_X_SIZE             11
#define AVR32_MPOP_DISP_MAX_COORD_DISP_MAX_COORD_Y                   0
#define AVR32_MPOP_DISP_MAX_COORD_DISP_MAX_COORD_Y_MASK     0x000007ff
#define AVR32_MPOP_DISP_MAX_COORD_DISP_MAX_COORD_Y_OFFSET            0
#define AVR32_MPOP_DISP_MAX_COORD_DISP_MAX_COORD_Y_SIZE             11
#define AVR32_MPOP_DISP_MAX_COORD_X                                 11
#define AVR32_MPOP_DISP_MAX_COORD_X_MASK                    0x003ff800
#define AVR32_MPOP_DISP_MAX_COORD_X_OFFSET                          11
#define AVR32_MPOP_DISP_MAX_COORD_X_SIZE                            11
#define AVR32_MPOP_DISP_MAX_COORD_Y                                  0
#define AVR32_MPOP_DISP_MAX_COORD_Y_MASK                    0x000007ff
#define AVR32_MPOP_DISP_MAX_COORD_Y_OFFSET                           0
#define AVR32_MPOP_DISP_MAX_COORD_Y_SIZE                            11
#define AVR32_MPOP_EN                                                0
#define AVR32_MPOP_EN_MASK                                  0x00000001
#define AVR32_MPOP_EN_OFFSET                                         0
#define AVR32_MPOP_EN_SIZE                                           1
#define AVR32_MPOP_EOP                                               3
#define AVR32_MPOP_EOP_MASK                                 0x00000008
#define AVR32_MPOP_EOP_OFFSET                                        3
#define AVR32_MPOP_EOP_SIZE                                          1
#define AVR32_MPOP_G                                                 8
#define AVR32_MPOP_G1                                                0
#define AVR32_MPOP_G1_MASK                                  0x00000fff
#define AVR32_MPOP_G1_OFFSET                                         0
#define AVR32_MPOP_G1_SIZE                                          12
#define AVR32_MPOP_G2                                               12
#define AVR32_MPOP_G2G1                                     0x0000001c
#define AVR32_MPOP_G2G1_G1                                           0
#define AVR32_MPOP_G2G1_G1_MASK                             0x00000fff
#define AVR32_MPOP_G2G1_G1_OFFSET                                    0
#define AVR32_MPOP_G2G1_G1_SIZE                                     12
#define AVR32_MPOP_G2G1_G2                                          12
#define AVR32_MPOP_G2G1_G2_MASK                             0x00fff000
#define AVR32_MPOP_G2G1_G2_OFFSET                                   12
#define AVR32_MPOP_G2G1_G2_SIZE                                     12
#define AVR32_MPOP_G2_MASK                                  0x00fff000
#define AVR32_MPOP_G2_OFFSET                                        12
#define AVR32_MPOP_G2_SIZE                                          12
#define AVR32_MPOP_G3                                                0
#define AVR32_MPOP_G3_MASK                                  0x00000fff
#define AVR32_MPOP_G3_OFFSET                                         0
#define AVR32_MPOP_G3_SIZE                                          12
#define AVR32_MPOP_G4                                               12
#define AVR32_MPOP_G4G3                                     0x00000020
#define AVR32_MPOP_G4G3_G3                                           0
#define AVR32_MPOP_G4G3_G3_MASK                             0x00000fff
#define AVR32_MPOP_G4G3_G3_OFFSET                                    0
#define AVR32_MPOP_G4G3_G3_SIZE                                     12
#define AVR32_MPOP_G4G3_G4                                          12
#define AVR32_MPOP_G4G3_G4_MASK                             0xfffff000
#define AVR32_MPOP_G4G3_G4_OFFSET                                   12
#define AVR32_MPOP_G4G3_G4_SIZE                                     20
#define AVR32_MPOP_G4_MASK                                  0xfffff000
#define AVR32_MPOP_G4_OFFSET                                        12
#define AVR32_MPOP_G4_SIZE                                          20
#define AVR32_MPOP_GREEN                                             8
#define AVR32_MPOP_GREEN_MASK                               0x0000ff00
#define AVR32_MPOP_GREEN_OFFSET                                      8
#define AVR32_MPOP_GREEN_SIZE                                        8
#define AVR32_MPOP_G_MASK                                   0x0000ff00
#define AVR32_MPOP_G_OFFSET                                          8
#define AVR32_MPOP_G_SIZE                                            8
#define AVR32_MPOP_INTCLEAR                                 0x000000b0
#define AVR32_MPOP_INTCLEAR_EOP                                      3
#define AVR32_MPOP_INTCLEAR_EOP_MASK                        0x00000008
#define AVR32_MPOP_INTCLEAR_EOP_OFFSET                               3
#define AVR32_MPOP_INTCLEAR_EOP_SIZE                                 1
#define AVR32_MPOP_INTCLEAR_OUT                                      2
#define AVR32_MPOP_INTCLEAR_OUT_MASK                        0x00000004
#define AVR32_MPOP_INTCLEAR_OUT_OFFSET                               2
#define AVR32_MPOP_INTCLEAR_OUT_SIZE                                 1
#define AVR32_MPOP_INTCLEAR_OVERLAY                                  1
#define AVR32_MPOP_INTCLEAR_OVERLAY_MASK                    0x00000002
#define AVR32_MPOP_INTCLEAR_OVERLAY_OFFSET                           1
#define AVR32_MPOP_INTCLEAR_OVERLAY_SIZE                             1
#define AVR32_MPOP_INTCLEAR_SOP                                      4
#define AVR32_MPOP_INTCLEAR_SOP_MASK                        0x00000010
#define AVR32_MPOP_INTCLEAR_SOP_OFFSET                               4
#define AVR32_MPOP_INTCLEAR_SOP_SIZE                                 1
#define AVR32_MPOP_INTCLEAR_YUV                                      0
#define AVR32_MPOP_INTCLEAR_YUV_MASK                        0x00000001
#define AVR32_MPOP_INTCLEAR_YUV_OFFSET                               0
#define AVR32_MPOP_INTCLEAR_YUV_SIZE                                 1
#define AVR32_MPOP_INTDIS                                   0x000000a4
#define AVR32_MPOP_INTDIS_EOP                                        3
#define AVR32_MPOP_INTDIS_EOP_MASK                          0x00000008
#define AVR32_MPOP_INTDIS_EOP_OFFSET                                 3
#define AVR32_MPOP_INTDIS_EOP_SIZE                                   1
#define AVR32_MPOP_INTDIS_OUT                                        2
#define AVR32_MPOP_INTDIS_OUT_MASK                          0x00000004
#define AVR32_MPOP_INTDIS_OUT_OFFSET                                 2
#define AVR32_MPOP_INTDIS_OUT_SIZE                                   1
#define AVR32_MPOP_INTDIS_OVERLAY                                    1
#define AVR32_MPOP_INTDIS_OVERLAY_MASK                      0x00000002
#define AVR32_MPOP_INTDIS_OVERLAY_OFFSET                             1
#define AVR32_MPOP_INTDIS_OVERLAY_SIZE                               1
#define AVR32_MPOP_INTDIS_SOP                                        4
#define AVR32_MPOP_INTDIS_SOP_MASK                          0x00000010
#define AVR32_MPOP_INTDIS_SOP_OFFSET                                 4
#define AVR32_MPOP_INTDIS_SOP_SIZE                                   1
#define AVR32_MPOP_INTDIS_YUV                                        0
#define AVR32_MPOP_INTDIS_YUV_MASK                          0x00000001
#define AVR32_MPOP_INTDIS_YUV_OFFSET                                 0
#define AVR32_MPOP_INTDIS_YUV_SIZE                                   1
#define AVR32_MPOP_INTEN                                    0x000000a0
#define AVR32_MPOP_INTEN_EOP                                         3
#define AVR32_MPOP_INTEN_EOP_MASK                           0x00000008
#define AVR32_MPOP_INTEN_EOP_OFFSET                                  3
#define AVR32_MPOP_INTEN_EOP_SIZE                                    1
#define AVR32_MPOP_INTEN_OUT                                         2
#define AVR32_MPOP_INTEN_OUT_MASK                           0x00000004
#define AVR32_MPOP_INTEN_OUT_OFFSET                                  2
#define AVR32_MPOP_INTEN_OUT_SIZE                                    1
#define AVR32_MPOP_INTEN_OVERLAY                                     1
#define AVR32_MPOP_INTEN_OVERLAY_MASK                       0x00000002
#define AVR32_MPOP_INTEN_OVERLAY_OFFSET                              1
#define AVR32_MPOP_INTEN_OVERLAY_SIZE                                1
#define AVR32_MPOP_INTEN_SOP                                         4
#define AVR32_MPOP_INTEN_SOP_MASK                           0x00000010
#define AVR32_MPOP_INTEN_SOP_OFFSET                                  4
#define AVR32_MPOP_INTEN_SOP_SIZE                                    1
#define AVR32_MPOP_INTEN_YUV                                         0
#define AVR32_MPOP_INTEN_YUV_MASK                           0x00000001
#define AVR32_MPOP_INTEN_YUV_OFFSET                                  0
#define AVR32_MPOP_INTEN_YUV_SIZE                                    1
#define AVR32_MPOP_INTMASK                                  0x000000a8
#define AVR32_MPOP_INTMASK_EOP                                       3
#define AVR32_MPOP_INTMASK_EOP_MASK                         0x00000008
#define AVR32_MPOP_INTMASK_EOP_OFFSET                                3
#define AVR32_MPOP_INTMASK_EOP_SIZE                                  1
#define AVR32_MPOP_INTMASK_OUT                                       2
#define AVR32_MPOP_INTMASK_OUT_MASK                         0x00000004
#define AVR32_MPOP_INTMASK_OUT_OFFSET                                2
#define AVR32_MPOP_INTMASK_OUT_SIZE                                  1
#define AVR32_MPOP_INTMASK_OVERLAY                                   1
#define AVR32_MPOP_INTMASK_OVERLAY_MASK                     0x00000002
#define AVR32_MPOP_INTMASK_OVERLAY_OFFSET                            1
#define AVR32_MPOP_INTMASK_OVERLAY_SIZE                              1
#define AVR32_MPOP_INTMASK_SOP                                       4
#define AVR32_MPOP_INTMASK_SOP_MASK                         0x00000010
#define AVR32_MPOP_INTMASK_SOP_OFFSET                                4
#define AVR32_MPOP_INTMASK_SOP_SIZE                                  1
#define AVR32_MPOP_INTMASK_YUV                                       0
#define AVR32_MPOP_INTMASK_YUV_MASK                         0x00000001
#define AVR32_MPOP_INTMASK_YUV_OFFSET                                0
#define AVR32_MPOP_INTMASK_YUV_SIZE                                  1
#define AVR32_MPOP_INTSTATUS                                0x000000ac
#define AVR32_MPOP_INTSTATUS_EOP                                     3
#define AVR32_MPOP_INTSTATUS_EOP_MASK                       0x00000008
#define AVR32_MPOP_INTSTATUS_EOP_OFFSET                              3
#define AVR32_MPOP_INTSTATUS_EOP_SIZE                                1
#define AVR32_MPOP_INTSTATUS_OUT                                     2
#define AVR32_MPOP_INTSTATUS_OUT_MASK                       0x00000004
#define AVR32_MPOP_INTSTATUS_OUT_OFFSET                              2
#define AVR32_MPOP_INTSTATUS_OUT_SIZE                                1
#define AVR32_MPOP_INTSTATUS_OVERLAY                                 1
#define AVR32_MPOP_INTSTATUS_OVERLAY_MASK                   0x00000002
#define AVR32_MPOP_INTSTATUS_OVERLAY_OFFSET                          1
#define AVR32_MPOP_INTSTATUS_OVERLAY_SIZE                            1
#define AVR32_MPOP_INTSTATUS_SOP                                     4
#define AVR32_MPOP_INTSTATUS_SOP_MASK                       0x00000010
#define AVR32_MPOP_INTSTATUS_SOP_OFFSET                              4
#define AVR32_MPOP_INTSTATUS_SOP_SIZE                                1
#define AVR32_MPOP_INTSTATUS_YUV                                     0
#define AVR32_MPOP_INTSTATUS_YUV_MASK                       0x00000001
#define AVR32_MPOP_INTSTATUS_YUV_OFFSET                              0
#define AVR32_MPOP_INTSTATUS_YUV_SIZE                                1
#define AVR32_MPOP_INVERT                                           25
#define AVR32_MPOP_INVERT_MASK                              0x02000000
#define AVR32_MPOP_INVERT_OFFSET                                    25
#define AVR32_MPOP_INVERT_SIZE                                       1
#define AVR32_MPOP_MASTER                                   0x00000001
#define AVR32_MPOP_MSTR_PTR                                 0x0000000c
#define AVR32_MPOP_MSTR_PTR_MASK                            0xffffffff
#define AVR32_MPOP_MSTR_PTR_MSTR_PTR                                 0
#define AVR32_MPOP_MSTR_PTR_MSTR_PTR_MASK                   0xffffffff
#define AVR32_MPOP_MSTR_PTR_MSTR_PTR_OFFSET                          0
#define AVR32_MPOP_MSTR_PTR_MSTR_PTR_SIZE                           32
#define AVR32_MPOP_MSTR_PTR_OFFSET                                   0
#define AVR32_MPOP_MSTR_PTR_SIZE                                    32
#define AVR32_MPOP_O1EN                                              1
#define AVR32_MPOP_O1EN_MASK                                0x00000002
#define AVR32_MPOP_O1EN_OFFSET                                       1
#define AVR32_MPOP_O1EN_SIZE                                         1
#define AVR32_MPOP_O1_POS                                   0x00000050
#define AVR32_MPOP_O1_POS_O1_POS_X                                  11
#define AVR32_MPOP_O1_POS_O1_POS_X_MASK                     0x003ff800
#define AVR32_MPOP_O1_POS_O1_POS_X_OFFSET                           11
#define AVR32_MPOP_O1_POS_O1_POS_X_SIZE                             11
#define AVR32_MPOP_O1_POS_O1_POS_Y                                   0
#define AVR32_MPOP_O1_POS_O1_POS_Y_MASK                     0x000007ff
#define AVR32_MPOP_O1_POS_O1_POS_Y_OFFSET                            0
#define AVR32_MPOP_O1_POS_O1_POS_Y_SIZE                             11
#define AVR32_MPOP_O1_POS_X                                         11
#define AVR32_MPOP_O1_POS_X_MASK                            0x003ff800
#define AVR32_MPOP_O1_POS_X_OFFSET                                  11
#define AVR32_MPOP_O1_POS_X_SIZE                                    11
#define AVR32_MPOP_O1_POS_Y                                          0
#define AVR32_MPOP_O1_POS_Y_MASK                            0x000007ff
#define AVR32_MPOP_O1_POS_Y_OFFSET                                   0
#define AVR32_MPOP_O1_POS_Y_SIZE                                    11
#define AVR32_MPOP_O1_SAR                                   0x00000040
#define AVR32_MPOP_O1_SAR_MASK                              0xffffffff
#define AVR32_MPOP_O1_SAR_O1_SAR                                     0
#define AVR32_MPOP_O1_SAR_O1_SAR_MASK                       0xffffffff
#define AVR32_MPOP_O1_SAR_O1_SAR_OFFSET                              0
#define AVR32_MPOP_O1_SAR_O1_SAR_SIZE                               32
#define AVR32_MPOP_O1_SAR_OFFSET                                     0
#define AVR32_MPOP_O1_SAR_SIZE                                      32
#define AVR32_MPOP_O1_SIZE                                  0x00000064
#define AVR32_MPOP_O1_SIZE_O1_SIZE_X                                11
#define AVR32_MPOP_O1_SIZE_O1_SIZE_X_MASK                   0x003ff800
#define AVR32_MPOP_O1_SIZE_O1_SIZE_X_OFFSET                         11
#define AVR32_MPOP_O1_SIZE_O1_SIZE_X_SIZE                           11
#define AVR32_MPOP_O1_SIZE_O1_SIZE_Y                                 0
#define AVR32_MPOP_O1_SIZE_O1_SIZE_Y_MASK                   0x000007ff
#define AVR32_MPOP_O1_SIZE_O1_SIZE_Y_OFFSET                          0
#define AVR32_MPOP_O1_SIZE_O1_SIZE_Y_SIZE                           11
#define AVR32_MPOP_O1_SIZE_X                                        11
#define AVR32_MPOP_O1_SIZE_X_MASK                           0x003ff800
#define AVR32_MPOP_O1_SIZE_X_OFFSET                                 11
#define AVR32_MPOP_O1_SIZE_X_SIZE                                   11
#define AVR32_MPOP_O1_SIZE_Y                                         0
#define AVR32_MPOP_O1_SIZE_Y_MASK                           0x000007ff
#define AVR32_MPOP_O1_SIZE_Y_OFFSET                                  0
#define AVR32_MPOP_O1_SIZE_Y_SIZE                                   11
#define AVR32_MPOP_O1_WTC                                   0x00000074
#define AVR32_MPOP_O1_WTC_MASK                              0xffffffff
#define AVR32_MPOP_O1_WTC_O1_WTC                                     0
#define AVR32_MPOP_O1_WTC_O1_WTC_MASK                       0xffffffff
#define AVR32_MPOP_O1_WTC_O1_WTC_OFFSET                              0
#define AVR32_MPOP_O1_WTC_O1_WTC_SIZE                               32
#define AVR32_MPOP_O1_WTC_OFFSET                                     0
#define AVR32_MPOP_O1_WTC_SIZE                                      32
#define AVR32_MPOP_O2EN                                              2
#define AVR32_MPOP_O2EN_MASK                                0x00000004
#define AVR32_MPOP_O2EN_OFFSET                                       2
#define AVR32_MPOP_O2EN_SIZE                                         1
#define AVR32_MPOP_O2_POS                                   0x00000054
#define AVR32_MPOP_O2_POS_O2_POS_X                                  11
#define AVR32_MPOP_O2_POS_O2_POS_X_MASK                     0x003ff800
#define AVR32_MPOP_O2_POS_O2_POS_X_OFFSET                           11
#define AVR32_MPOP_O2_POS_O2_POS_X_SIZE                             11
#define AVR32_MPOP_O2_POS_O2_POS_Y                                   0
#define AVR32_MPOP_O2_POS_O2_POS_Y_MASK                     0x000007ff
#define AVR32_MPOP_O2_POS_O2_POS_Y_OFFSET                            0
#define AVR32_MPOP_O2_POS_O2_POS_Y_SIZE                             11
#define AVR32_MPOP_O2_POS_X                                         11
#define AVR32_MPOP_O2_POS_X_MASK                            0x003ff800
#define AVR32_MPOP_O2_POS_X_OFFSET                                  11
#define AVR32_MPOP_O2_POS_X_SIZE                                    11
#define AVR32_MPOP_O2_POS_Y                                          0
#define AVR32_MPOP_O2_POS_Y_MASK                            0x000007ff
#define AVR32_MPOP_O2_POS_Y_OFFSET                                   0
#define AVR32_MPOP_O2_POS_Y_SIZE                                    11
#define AVR32_MPOP_O2_SAR                                   0x00000044
#define AVR32_MPOP_O2_SAR_MASK                              0xffffffff
#define AVR32_MPOP_O2_SAR_O2_SAR                                     0
#define AVR32_MPOP_O2_SAR_O2_SAR_MASK                       0xffffffff
#define AVR32_MPOP_O2_SAR_O2_SAR_OFFSET                              0
#define AVR32_MPOP_O2_SAR_O2_SAR_SIZE                               32
#define AVR32_MPOP_O2_SAR_OFFSET                                     0
#define AVR32_MPOP_O2_SAR_SIZE                                      32
#define AVR32_MPOP_O2_SIZE                                  0x00000068
#define AVR32_MPOP_O2_SIZE_O2_SIZE_X                                11
#define AVR32_MPOP_O2_SIZE_O2_SIZE_X_MASK                   0x003ff800
#define AVR32_MPOP_O2_SIZE_O2_SIZE_X_OFFSET                         11
#define AVR32_MPOP_O2_SIZE_O2_SIZE_X_SIZE                           11
#define AVR32_MPOP_O2_SIZE_O2_SIZE_Y                                 0
#define AVR32_MPOP_O2_SIZE_O2_SIZE_Y_MASK                   0x000007ff
#define AVR32_MPOP_O2_SIZE_O2_SIZE_Y_OFFSET                          0
#define AVR32_MPOP_O2_SIZE_O2_SIZE_Y_SIZE                           11
#define AVR32_MPOP_O2_SIZE_X                                        11
#define AVR32_MPOP_O2_SIZE_X_MASK                           0x003ff800
#define AVR32_MPOP_O2_SIZE_X_OFFSET                                 11
#define AVR32_MPOP_O2_SIZE_X_SIZE                                   11
#define AVR32_MPOP_O2_SIZE_Y                                         0
#define AVR32_MPOP_O2_SIZE_Y_MASK                           0x000007ff
#define AVR32_MPOP_O2_SIZE_Y_OFFSET                                  0
#define AVR32_MPOP_O2_SIZE_Y_SIZE                                   11
#define AVR32_MPOP_O2_WTC                                   0x00000078
#define AVR32_MPOP_O2_WTC_MASK                              0xffffffff
#define AVR32_MPOP_O2_WTC_O2_WTC                                     0
#define AVR32_MPOP_O2_WTC_O2_WTC_MASK                       0xffffffff
#define AVR32_MPOP_O2_WTC_O2_WTC_OFFSET                              0
#define AVR32_MPOP_O2_WTC_O2_WTC_SIZE                               32
#define AVR32_MPOP_O2_WTC_OFFSET                                     0
#define AVR32_MPOP_O2_WTC_SIZE                                      32
#define AVR32_MPOP_OCR                                      0x00000008
#define AVR32_MPOP_OCR_BGR                                           6
#define AVR32_MPOP_OCR_BGR_MASK                             0x00000040
#define AVR32_MPOP_OCR_BGR_OFFSET                                    6
#define AVR32_MPOP_OCR_BGR_SIZE                                      1
#define AVR32_MPOP_OCR_CURSOREN                                      0
#define AVR32_MPOP_OCR_CURSOREN_MASK                        0x00000001
#define AVR32_MPOP_OCR_CURSOREN_OFFSET                               0
#define AVR32_MPOP_OCR_CURSOREN_SIZE                                 1
#define AVR32_MPOP_OCR_O1EN                                          1
#define AVR32_MPOP_OCR_O1EN_MASK                            0x00000002
#define AVR32_MPOP_OCR_O1EN_OFFSET                                   1
#define AVR32_MPOP_OCR_O1EN_SIZE                                     1
#define AVR32_MPOP_OCR_O2EN                                          2
#define AVR32_MPOP_OCR_O2EN_MASK                            0x00000004
#define AVR32_MPOP_OCR_O2EN_OFFSET                                   2
#define AVR32_MPOP_OCR_O2EN_SIZE                                     1
#define AVR32_MPOP_OCR_RGBEN                                         3
#define AVR32_MPOP_OCR_RGBEN_MASK                           0x00000008
#define AVR32_MPOP_OCR_RGBEN_OFFSET                                  3
#define AVR32_MPOP_OCR_RGBEN_SIZE                                    1
#define AVR32_MPOP_OCR_RGBFORM                                       5
#define AVR32_MPOP_OCR_RGBFORM_MASK                         0x00000020
#define AVR32_MPOP_OCR_RGBFORM_OFFSET                                5
#define AVR32_MPOP_OCR_RGBFORM_RGB565                       0x00000000
#define AVR32_MPOP_OCR_RGBFORM_RGB888                       0x00000001
#define AVR32_MPOP_OCR_RGBFORM_SIZE                                  1
#define AVR32_MPOP_OCR_RGBSRC                                        4
#define AVR32_MPOP_OCR_RGBSRC_MASK                          0x00000010
#define AVR32_MPOP_OCR_RGBSRC_OFFSET                                 4
#define AVR32_MPOP_OCR_RGBSRC_RGB_DMA                       0x00000001
#define AVR32_MPOP_OCR_RGBSRC_SIZE                                   1
#define AVR32_MPOP_OCR_RGBSRC_YUV                           0x00000000
#define AVR32_MPOP_OUT                                               2
#define AVR32_MPOP_OUT_BEAR                                 0x0000009c
#define AVR32_MPOP_OUT_BEAR_BEAR                                     0
#define AVR32_MPOP_OUT_BEAR_BEAR_MASK                       0xffffffff
#define AVR32_MPOP_OUT_BEAR_BEAR_OFFSET                              0
#define AVR32_MPOP_OUT_BEAR_BEAR_SIZE                               32
#define AVR32_MPOP_OUT_BGR                                           3
#define AVR32_MPOP_OUT_BGR_MASK                             0x00000008
#define AVR32_MPOP_OUT_BGR_OFFSET                                    3
#define AVR32_MPOP_OUT_BGR_SIZE                                      1
#define AVR32_MPOP_OUT_CTRL                                          2
#define AVR32_MPOP_OUT_CTRL_MASK                            0x00000004
#define AVR32_MPOP_OUT_CTRL_MASTER                          0x00000001
#define AVR32_MPOP_OUT_CTRL_OFFSET                                   2
#define AVR32_MPOP_OUT_CTRL_SIZE                                     1
#define AVR32_MPOP_OUT_CTRL_SLAVE                           0x00000000
#define AVR32_MPOP_OUT_MASK                                 0x00000004
#define AVR32_MPOP_OUT_OFFSET                                        2
#define AVR32_MPOP_OUT_SIZE                                          1
#define AVR32_MPOP_OVERLAY                                           1
#define AVR32_MPOP_OVERLAY_BEAR                             0x00000098
#define AVR32_MPOP_OVERLAY_BEAR_BEAR                                 0
#define AVR32_MPOP_OVERLAY_BEAR_BEAR_MASK                   0xffffffff
#define AVR32_MPOP_OVERLAY_BEAR_BEAR_OFFSET                          0
#define AVR32_MPOP_OVERLAY_BEAR_BEAR_SIZE                           32
#define AVR32_MPOP_OVERLAY_MASK                             0x00000002
#define AVR32_MPOP_OVERLAY_OFFSET                                    1
#define AVR32_MPOP_OVERLAY_PALETTE                          0x00000400
#define AVR32_MPOP_OVERLAY_PALETTE_ALPHA                            24
#define AVR32_MPOP_OVERLAY_PALETTE_ALPHA_MASK               0xff000000
#define AVR32_MPOP_OVERLAY_PALETTE_ALPHA_OFFSET                     24
#define AVR32_MPOP_OVERLAY_PALETTE_ALPHA_SIZE                        8
#define AVR32_MPOP_OVERLAY_PALETTE_BLUE                              0
#define AVR32_MPOP_OVERLAY_PALETTE_BLUE_MASK                0x000000ff
#define AVR32_MPOP_OVERLAY_PALETTE_BLUE_OFFSET                       0
#define AVR32_MPOP_OVERLAY_PALETTE_BLUE_SIZE                         8
#define AVR32_MPOP_OVERLAY_PALETTE_GREEN                             8
#define AVR32_MPOP_OVERLAY_PALETTE_GREEN_MASK               0x0000ff00
#define AVR32_MPOP_OVERLAY_PALETTE_GREEN_OFFSET                      8
#define AVR32_MPOP_OVERLAY_PALETTE_GREEN_SIZE                        8
#define AVR32_MPOP_OVERLAY_PALETTE_RED                              16
#define AVR32_MPOP_OVERLAY_PALETTE_RED_MASK                 0x00ff0000
#define AVR32_MPOP_OVERLAY_PALETTE_RED_OFFSET                       16
#define AVR32_MPOP_OVERLAY_PALETTE_RED_SIZE                          8
#define AVR32_MPOP_OVERLAY_SIZE                                      1
#define AVR32_MPOP_PARAMETER                                0x000000b4
#define AVR32_MPOP_R                                                16
#define AVR32_MPOP_R1                                                0
#define AVR32_MPOP_R1_MASK                                  0x00000fff
#define AVR32_MPOP_R1_OFFSET                                         0
#define AVR32_MPOP_R1_SIZE                                          12
#define AVR32_MPOP_R2                                               12
#define AVR32_MPOP_R2R1                                     0x00000014
#define AVR32_MPOP_R2R1_R1                                           0
#define AVR32_MPOP_R2R1_R1_MASK                             0x00000fff
#define AVR32_MPOP_R2R1_R1_OFFSET                                    0
#define AVR32_MPOP_R2R1_R1_SIZE                                     12
#define AVR32_MPOP_R2R1_R2                                          12
#define AVR32_MPOP_R2R1_R2_MASK                             0x00fff000
#define AVR32_MPOP_R2R1_R2_OFFSET                                   12
#define AVR32_MPOP_R2R1_R2_SIZE                                     12
#define AVR32_MPOP_R2_MASK                                  0x00fff000
#define AVR32_MPOP_R2_OFFSET                                        12
#define AVR32_MPOP_R2_SIZE                                          12
#define AVR32_MPOP_R3                                                0
#define AVR32_MPOP_R3_MASK                                  0x00000fff
#define AVR32_MPOP_R3_OFFSET                                         0
#define AVR32_MPOP_R3_SIZE                                          12
#define AVR32_MPOP_R4                                               12
#define AVR32_MPOP_R4R3                                     0x00000018
#define AVR32_MPOP_R4R3_R3                                           0
#define AVR32_MPOP_R4R3_R3_MASK                             0x00000fff
#define AVR32_MPOP_R4R3_R3_OFFSET                                    0
#define AVR32_MPOP_R4R3_R3_SIZE                                     12
#define AVR32_MPOP_R4R3_R4                                          12
#define AVR32_MPOP_R4R3_R4_MASK                             0xfffff000
#define AVR32_MPOP_R4R3_R4_OFFSET                                   12
#define AVR32_MPOP_R4R3_R4_SIZE                                     20
#define AVR32_MPOP_R4_MASK                                  0xfffff000
#define AVR32_MPOP_R4_OFFSET                                        12
#define AVR32_MPOP_R4_SIZE                                          20
#define AVR32_MPOP_RED                                              16
#define AVR32_MPOP_RED_MASK                                 0x00ff0000
#define AVR32_MPOP_RED_OFFSET                                       16
#define AVR32_MPOP_RED_SIZE                                          8
#define AVR32_MPOP_RGB565                                   0x00000000
#define AVR32_MPOP_RGB888                                   0x00000001
#define AVR32_MPOP_RGBEN                                             3
#define AVR32_MPOP_RGBEN_MASK                               0x00000008
#define AVR32_MPOP_RGBEN_OFFSET                                      3
#define AVR32_MPOP_RGBEN_SIZE                                        1
#define AVR32_MPOP_RGBFORM                                           5
#define AVR32_MPOP_RGBFORM_MASK                             0x00000020
#define AVR32_MPOP_RGBFORM_OFFSET                                    5
#define AVR32_MPOP_RGBFORM_RGB565                           0x00000000
#define AVR32_MPOP_RGBFORM_RGB888                           0x00000001
#define AVR32_MPOP_RGBFORM_SIZE                                      1
#define AVR32_MPOP_RGBSRC                                            4
#define AVR32_MPOP_RGBSRC_MASK                              0x00000010
#define AVR32_MPOP_RGBSRC_OFFSET                                     4
#define AVR32_MPOP_RGBSRC_RGB_DMA                           0x00000001
#define AVR32_MPOP_RGBSRC_SIZE                                       1
#define AVR32_MPOP_RGBSRC_YUV                               0x00000000
#define AVR32_MPOP_RGB_DMA                                  0x00000001
#define AVR32_MPOP_RGB_POS                                  0x0000004c
#define AVR32_MPOP_RGB_POS_RGB_POS_X                                11
#define AVR32_MPOP_RGB_POS_RGB_POS_X_MASK                   0x003ff800
#define AVR32_MPOP_RGB_POS_RGB_POS_X_OFFSET                         11
#define AVR32_MPOP_RGB_POS_RGB_POS_X_SIZE                           11
#define AVR32_MPOP_RGB_POS_RGB_POS_Y                                 0
#define AVR32_MPOP_RGB_POS_RGB_POS_Y_MASK                   0x000007ff
#define AVR32_MPOP_RGB_POS_RGB_POS_Y_OFFSET                          0
#define AVR32_MPOP_RGB_POS_RGB_POS_Y_SIZE                           11
#define AVR32_MPOP_RGB_POS_X                                        11
#define AVR32_MPOP_RGB_POS_X_MASK                           0x003ff800
#define AVR32_MPOP_RGB_POS_X_OFFSET                                 11
#define AVR32_MPOP_RGB_POS_X_SIZE                                   11
#define AVR32_MPOP_RGB_POS_Y                                         0
#define AVR32_MPOP_RGB_POS_Y_MASK                           0x000007ff
#define AVR32_MPOP_RGB_POS_Y_OFFSET                                  0
#define AVR32_MPOP_RGB_POS_Y_SIZE                                   11
#define AVR32_MPOP_RGB_SAR                                  0x0000003c
#define AVR32_MPOP_RGB_SAR_MASK                             0xffffffff
#define AVR32_MPOP_RGB_SAR_OFFSET                                    0
#define AVR32_MPOP_RGB_SAR_RGB_SAR                                   0
#define AVR32_MPOP_RGB_SAR_RGB_SAR_MASK                     0xffffffff
#define AVR32_MPOP_RGB_SAR_RGB_SAR_OFFSET                            0
#define AVR32_MPOP_RGB_SAR_RGB_SAR_SIZE                             32
#define AVR32_MPOP_RGB_SAR_SIZE                                     32
#define AVR32_MPOP_RGB_SIZE                                 0x00000060
#define AVR32_MPOP_RGB_SIZE_RGB_SIZE_X                              11
#define AVR32_MPOP_RGB_SIZE_RGB_SIZE_X_MASK                 0x003ff800
#define AVR32_MPOP_RGB_SIZE_RGB_SIZE_X_OFFSET                       11
#define AVR32_MPOP_RGB_SIZE_RGB_SIZE_X_SIZE                         11
#define AVR32_MPOP_RGB_SIZE_RGB_SIZE_Y                               0
#define AVR32_MPOP_RGB_SIZE_RGB_SIZE_Y_MASK                 0x000007ff
#define AVR32_MPOP_RGB_SIZE_RGB_SIZE_Y_OFFSET                        0
#define AVR32_MPOP_RGB_SIZE_RGB_SIZE_Y_SIZE                         11
#define AVR32_MPOP_RGB_SIZE_X                                       11
#define AVR32_MPOP_RGB_SIZE_X_MASK                          0x003ff800
#define AVR32_MPOP_RGB_SIZE_X_OFFSET                                11
#define AVR32_MPOP_RGB_SIZE_X_SIZE                                  11
#define AVR32_MPOP_RGB_SIZE_Y                                        0
#define AVR32_MPOP_RGB_SIZE_Y_MASK                          0x000007ff
#define AVR32_MPOP_RGB_SIZE_Y_OFFSET                                 0
#define AVR32_MPOP_RGB_SIZE_Y_SIZE                                  11
#define AVR32_MPOP_RGB_WTC                                  0x00000070
#define AVR32_MPOP_RGB_WTC_MASK                             0xffffffff
#define AVR32_MPOP_RGB_WTC_OFFSET                                    0
#define AVR32_MPOP_RGB_WTC_RGB_WTC                                   0
#define AVR32_MPOP_RGB_WTC_RGB_WTC_MASK                     0xffffffff
#define AVR32_MPOP_RGB_WTC_RGB_WTC_OFFSET                            0
#define AVR32_MPOP_RGB_WTC_RGB_WTC_SIZE                             32
#define AVR32_MPOP_RGB_WTC_SIZE                                     32
#define AVR32_MPOP_R_MASK                                   0x00ff0000
#define AVR32_MPOP_R_OFFSET                                         16
#define AVR32_MPOP_R_SIZE                                            8
#define AVR32_MPOP_SLAVE                                    0x00000000
#define AVR32_MPOP_SOP                                               4
#define AVR32_MPOP_SOP_MASK                                 0x00000010
#define AVR32_MPOP_SOP_OFFSET                                        4
#define AVR32_MPOP_SOP_SIZE                                          1
#define AVR32_MPOP_START                                             1
#define AVR32_MPOP_START_MASK                               0x00000002
#define AVR32_MPOP_START_OFFSET                                      1
#define AVR32_MPOP_START_SIZE                                        1
#define AVR32_MPOP_STRIDE                                   0x0000002c
#define AVR32_MPOP_STRIDE_MASK                              0xffffffff
#define AVR32_MPOP_STRIDE_OFFSET                                     0
#define AVR32_MPOP_STRIDE_SIZE                                      32
#define AVR32_MPOP_STRIDE_STRIDE                                     0
#define AVR32_MPOP_STRIDE_STRIDE_MASK                       0xffffffff
#define AVR32_MPOP_STRIDE_STRIDE_OFFSET                              0
#define AVR32_MPOP_STRIDE_STRIDE_SIZE                               32
#define AVR32_MPOP_U_SAR                                    0x00000034
#define AVR32_MPOP_U_SAR_MASK                               0xffffffff
#define AVR32_MPOP_U_SAR_OFFSET                                      0
#define AVR32_MPOP_U_SAR_SIZE                                       32
#define AVR32_MPOP_U_SAR_U_SAR                                       0
#define AVR32_MPOP_U_SAR_U_SAR_MASK                         0xffffffff
#define AVR32_MPOP_U_SAR_U_SAR_OFFSET                                0
#define AVR32_MPOP_U_SAR_U_SAR_SIZE                                 32
#define AVR32_MPOP_VERSION                                  0x000000b8
#define AVR32_MPOP_VERSION_MASK                             0x00000fff
#define AVR32_MPOP_VERSION_OFFSET                                    0
#define AVR32_MPOP_VERSION_SIZE                                     12
#define AVR32_MPOP_VERSION_VERSION                                   0
#define AVR32_MPOP_VERSION_VERSION_MASK                     0x00000fff
#define AVR32_MPOP_VERSION_VERSION_OFFSET                            0
#define AVR32_MPOP_VERSION_VERSION_SIZE                             12
#define AVR32_MPOP_VISIBLE                                          24
#define AVR32_MPOP_VISIBLE_MASK                             0x01000000
#define AVR32_MPOP_VISIBLE_OFFSET                                   24
#define AVR32_MPOP_VISIBLE_SIZE                                      1
#define AVR32_MPOP_V_SAR                                    0x00000038
#define AVR32_MPOP_V_SAR_MASK                               0xffffffff
#define AVR32_MPOP_V_SAR_OFFSET                                      0
#define AVR32_MPOP_V_SAR_SIZE                                       32
#define AVR32_MPOP_V_SAR_V_SAR                                       0
#define AVR32_MPOP_V_SAR_V_SAR_MASK                         0xffffffff
#define AVR32_MPOP_V_SAR_V_SAR_OFFSET                                0
#define AVR32_MPOP_V_SAR_V_SAR_SIZE                                 32
#define AVR32_MPOP_XRESIZE                                          16
#define AVR32_MPOP_XRESIZE_MASK                             0x00ff0000
#define AVR32_MPOP_XRESIZE_OFFSET                                   16
#define AVR32_MPOP_XRESIZE_SIZE                                      8
#define AVR32_MPOP_YCR                                      0x00000004
#define AVR32_MPOP_YCR_XRESIZE                                      16
#define AVR32_MPOP_YCR_XRESIZE_MASK                         0x00ff0000
#define AVR32_MPOP_YCR_XRESIZE_OFFSET                               16
#define AVR32_MPOP_YCR_XRESIZE_SIZE                                  8
#define AVR32_MPOP_YCR_YRESIZE                                       8
#define AVR32_MPOP_YCR_YRESIZE_MASK                         0x0000ff00
#define AVR32_MPOP_YCR_YRESIZE_OFFSET                                8
#define AVR32_MPOP_YCR_YRESIZE_SIZE                                  8
#define AVR32_MPOP_YCR_YUVFORMAT                                     0
#define AVR32_MPOP_YCR_YUVFORMAT_MASK                       0x00000003
#define AVR32_MPOP_YCR_YUVFORMAT_OFFSET                              0
#define AVR32_MPOP_YCR_YUVFORMAT_SIZE                                2
#define AVR32_MPOP_YCR_YUVFORMAT_YUV420                     0x00000002
#define AVR32_MPOP_YCR_YUVFORMAT_YUV422                     0x00000001
#define AVR32_MPOP_YCR_YUVFORMAT_YUV444                     0x00000000
#define AVR32_MPOP_YRESIZE                                           8
#define AVR32_MPOP_YRESIZE_MASK                             0x0000ff00
#define AVR32_MPOP_YRESIZE_OFFSET                                    8
#define AVR32_MPOP_YRESIZE_SIZE                                      8
#define AVR32_MPOP_YUV                                               0
#define AVR32_MPOP_YUV420                                   0x00000002
#define AVR32_MPOP_YUV422                                   0x00000001
#define AVR32_MPOP_YUV444                                   0x00000000
#define AVR32_MPOP_YUVFORMAT                                         0
#define AVR32_MPOP_YUVFORMAT_MASK                           0x00000003
#define AVR32_MPOP_YUVFORMAT_OFFSET                                  0
#define AVR32_MPOP_YUVFORMAT_SIZE                                    2
#define AVR32_MPOP_YUVFORMAT_YUV420                         0x00000002
#define AVR32_MPOP_YUVFORMAT_YUV422                         0x00000001
#define AVR32_MPOP_YUVFORMAT_YUV444                         0x00000000
#define AVR32_MPOP_YUV_BEAR                                 0x00000094
#define AVR32_MPOP_YUV_BEAR_BEAR                                     0
#define AVR32_MPOP_YUV_BEAR_BEAR_MASK                       0xffffffff
#define AVR32_MPOP_YUV_BEAR_BEAR_OFFSET                              0
#define AVR32_MPOP_YUV_BEAR_BEAR_SIZE                               32
#define AVR32_MPOP_YUV_MASK                                 0x00000001
#define AVR32_MPOP_YUV_MAX_COORD                            0x0000005c
#define AVR32_MPOP_YUV_MAX_COORD_X                                  11
#define AVR32_MPOP_YUV_MAX_COORD_X_MASK                     0x003ff800
#define AVR32_MPOP_YUV_MAX_COORD_X_OFFSET                           11
#define AVR32_MPOP_YUV_MAX_COORD_X_SIZE                             11
#define AVR32_MPOP_YUV_MAX_COORD_Y                                   0
#define AVR32_MPOP_YUV_MAX_COORD_YUV_MAX_COORD_X                    11
#define AVR32_MPOP_YUV_MAX_COORD_YUV_MAX_COORD_X_MASK       0x003ff800
#define AVR32_MPOP_YUV_MAX_COORD_YUV_MAX_COORD_X_OFFSET             11
#define AVR32_MPOP_YUV_MAX_COORD_YUV_MAX_COORD_X_SIZE               11
#define AVR32_MPOP_YUV_MAX_COORD_YUV_MAX_COORD_Y                     0
#define AVR32_MPOP_YUV_MAX_COORD_YUV_MAX_COORD_Y_MASK       0x000007ff
#define AVR32_MPOP_YUV_MAX_COORD_YUV_MAX_COORD_Y_OFFSET              0
#define AVR32_MPOP_YUV_MAX_COORD_YUV_MAX_COORD_Y_SIZE               11
#define AVR32_MPOP_YUV_MAX_COORD_Y_MASK                     0x000007ff
#define AVR32_MPOP_YUV_MAX_COORD_Y_OFFSET                            0
#define AVR32_MPOP_YUV_MAX_COORD_Y_SIZE                             11
#define AVR32_MPOP_YUV_OFFSET                                        0
#define AVR32_MPOP_YUV_SIZE                                          1
#define AVR32_MPOP_Y_SAR                                    0x00000030
#define AVR32_MPOP_Y_SAR_MASK                               0xffffffff
#define AVR32_MPOP_Y_SAR_OFFSET                                      0
#define AVR32_MPOP_Y_SAR_SIZE                                       32
#define AVR32_MPOP_Y_SAR_Y_SAR                                       0
#define AVR32_MPOP_Y_SAR_Y_SAR_MASK                         0xffffffff
#define AVR32_MPOP_Y_SAR_Y_SAR_OFFSET                                0
#define AVR32_MPOP_Y_SAR_Y_SAR_SIZE                                 32




#ifdef __AVR32_ABI_COMPILER__


typedef struct avr32_mpop_cr_t {
    unsigned int                 :23;
    unsigned int cachedis        : 1;
    unsigned int                 : 4;
    unsigned int out_bgr         : 1;
    unsigned int out_ctrl        : 1;
    unsigned int start           : 1;
    unsigned int en              : 1;
} avr32_mpop_cr_t;



typedef struct avr32_mpop_ycr_t {
    unsigned int                 : 8;
    unsigned int xresize         : 8;
    unsigned int yresize         : 8;
    unsigned int                 : 6;
    unsigned int yuvformat       : 2;
} avr32_mpop_ycr_t;



typedef struct avr32_mpop_ocr_t {
    unsigned int                 :25;
    unsigned int bgr             : 1;
    unsigned int rgbform         : 1;
    unsigned int rgbsrc          : 1;
    unsigned int rgben           : 1;
    unsigned int o2en            : 1;
    unsigned int o1en            : 1;
    unsigned int cursoren        : 1;
} avr32_mpop_ocr_t;



typedef struct avr32_mpop_disp_max_coord_t {
    unsigned int                 :10;
    unsigned int disp_max_coord_x :11;
    unsigned int disp_max_coord_y :11;
} avr32_mpop_disp_max_coord_t;



typedef struct avr32_mpop_r2r1_t {
    unsigned int                 : 8;
    unsigned int r2              :12;
    unsigned int r1              :12;
} avr32_mpop_r2r1_t;



typedef struct avr32_mpop_r4r3_t {
    unsigned int r4              :20;
    unsigned int r3              :12;
} avr32_mpop_r4r3_t;



typedef struct avr32_mpop_g2g1_t {
    unsigned int                 : 8;
    unsigned int g2              :12;
    unsigned int g1              :12;
} avr32_mpop_g2g1_t;



typedef struct avr32_mpop_g4g3_t {
    unsigned int g4              :20;
    unsigned int g3              :12;
} avr32_mpop_g4g3_t;



typedef struct avr32_mpop_b2b1_t {
    unsigned int                 : 8;
    unsigned int b2              :12;
    unsigned int b1              :12;
} avr32_mpop_b2b1_t;



typedef struct avr32_mpop_b4b3_t {
    unsigned int b4              :20;
    unsigned int b3              :12;
} avr32_mpop_b4b3_t;



typedef struct avr32_mpop_rgb_pos_t {
    unsigned int                 :10;
    unsigned int rgb_pos_x       :11;
    unsigned int rgb_pos_y       :11;
} avr32_mpop_rgb_pos_t;



typedef struct avr32_mpop_o1_pos_t {
    unsigned int                 :10;
    unsigned int o1_pos_x        :11;
    unsigned int o1_pos_y        :11;
} avr32_mpop_o1_pos_t;



typedef struct avr32_mpop_o2_pos_t {
    unsigned int                 :10;
    unsigned int o2_pos_x        :11;
    unsigned int o2_pos_y        :11;
} avr32_mpop_o2_pos_t;



typedef struct avr32_mpop_cursor_pos_t {
    unsigned int                 :10;
    unsigned int cursor_pos_x    :11;
    unsigned int cursor_pos_y    :11;
} avr32_mpop_cursor_pos_t;



typedef struct avr32_mpop_yuv_max_coord_t {
    unsigned int                 :10;
    unsigned int yuv_max_coord_x :11;
    unsigned int yuv_max_coord_y :11;
} avr32_mpop_yuv_max_coord_t;



typedef struct avr32_mpop_rgb_size_t {
    unsigned int                 :10;
    unsigned int rgb_size_x      :11;
    unsigned int rgb_size_y      :11;
} avr32_mpop_rgb_size_t;



typedef struct avr32_mpop_o1_size_t {
    unsigned int                 :10;
    unsigned int o1_size_x       :11;
    unsigned int o1_size_y       :11;
} avr32_mpop_o1_size_t;



typedef struct avr32_mpop_o2_size_t {
    unsigned int                 :10;
    unsigned int o2_size_x       :11;
    unsigned int o2_size_y       :11;
} avr32_mpop_o2_size_t;



typedef struct avr32_mpop_cursor_size_t {
    unsigned int                 :10;
    unsigned int cursor_size_x   :11;
    unsigned int cursor_size_y   :11;
} avr32_mpop_cursor_size_t;



typedef struct avr32_mpop_cursor_p0_t {
    unsigned int                 : 6;
    unsigned int invert          : 1;
    unsigned int visible         : 1;
    unsigned int r               : 8;
    unsigned int g               : 8;
    unsigned int b               : 8;
} avr32_mpop_cursor_p0_t;



typedef struct avr32_mpop_cursor_p1_t {
    unsigned int                 : 6;
    unsigned int invert          : 1;
    unsigned int visible         : 1;
    unsigned int r               : 8;
    unsigned int g               : 8;
    unsigned int b               : 8;
} avr32_mpop_cursor_p1_t;



typedef struct avr32_mpop_cursor_p2_t {
    unsigned int                 : 6;
    unsigned int invert          : 1;
    unsigned int visible         : 1;
    unsigned int r               : 8;
    unsigned int g               : 8;
    unsigned int b               : 8;
} avr32_mpop_cursor_p2_t;



typedef struct avr32_mpop_cursor_p3_t {
    unsigned int                 : 6;
    unsigned int invert          : 1;
    unsigned int visible         : 1;
    unsigned int r               : 8;
    unsigned int g               : 8;
    unsigned int b               : 8;
} avr32_mpop_cursor_p3_t;



typedef struct avr32_mpop_bgcolor_t {
    unsigned int                 : 8;
    unsigned int r               : 8;
    unsigned int g               : 8;
    unsigned int b               : 8;
} avr32_mpop_bgcolor_t;



typedef struct avr32_mpop_inten_t {
    unsigned int                 :27;
    unsigned int sop             : 1;
    unsigned int eop             : 1;
    unsigned int out             : 1;
    unsigned int overlay         : 1;
    unsigned int yuv             : 1;
} avr32_mpop_inten_t;



typedef struct avr32_mpop_intdis_t {
    unsigned int                 :27;
    unsigned int sop             : 1;
    unsigned int eop             : 1;
    unsigned int out             : 1;
    unsigned int overlay         : 1;
    unsigned int yuv             : 1;
} avr32_mpop_intdis_t;



typedef struct avr32_mpop_intmask_t {
    unsigned int                 :27;
    unsigned int sop             : 1;
    unsigned int eop             : 1;
    unsigned int out             : 1;
    unsigned int overlay         : 1;
    unsigned int yuv             : 1;
} avr32_mpop_intmask_t;



typedef struct avr32_mpop_intstatus_t {
    unsigned int                 :27;
    unsigned int sop             : 1;
    unsigned int eop             : 1;
    unsigned int out             : 1;
    unsigned int overlay         : 1;
    unsigned int yuv             : 1;
} avr32_mpop_intstatus_t;



typedef struct avr32_mpop_intclear_t {
    unsigned int                 :27;
    unsigned int sop             : 1;
    unsigned int eop             : 1;
    unsigned int out             : 1;
    unsigned int overlay         : 1;
    unsigned int yuv             : 1;
} avr32_mpop_intclear_t;



typedef struct avr32_mpop_version_t {
    unsigned int                 :20;
    unsigned int version         :12;
} avr32_mpop_version_t;



typedef struct avr32_mpop_overlay_palette_t {
    unsigned int alpha           : 8;
    unsigned int red             : 8;
    unsigned int green           : 8;
    unsigned int blue            : 8;
} avr32_mpop_overlay_palette_t;



typedef struct avr32_mpop_t {
  union {
          unsigned long                  cr        ;//0x0000
          avr32_mpop_cr_t                CR        ;
  };
  union {
          unsigned long                  ycr       ;//0x0004
          avr32_mpop_ycr_t               YCR       ;
  };
  union {
          unsigned long                  ocr       ;//0x0008
          avr32_mpop_ocr_t               OCR       ;
  };
          unsigned long                  mstr_ptr  ;//0x000c
  union {
          unsigned long                  disp_max_coord;//0x0010
          avr32_mpop_disp_max_coord_t    DISP_MAX_COORD;
  };
  union {
          unsigned long                  r2r1      ;//0x0014
          avr32_mpop_r2r1_t              R2R1      ;
  };
  union {
          unsigned long                  r4r3      ;//0x0018
          avr32_mpop_r4r3_t              R4R3      ;
  };
  union {
          unsigned long                  g2g1      ;//0x001c
          avr32_mpop_g2g1_t              G2G1      ;
  };
  union {
          unsigned long                  g4g3      ;//0x0020
          avr32_mpop_g4g3_t              G4G3      ;
  };
  union {
          unsigned long                  b2b1      ;//0x0024
          avr32_mpop_b2b1_t              B2B1      ;
  };
  union {
          unsigned long                  b4b3      ;//0x0028
          avr32_mpop_b4b3_t              B4B3      ;
  };
          unsigned long                  stride    ;//0x002c
          unsigned long                  y_sar     ;//0x0030
          unsigned long                  u_sar     ;//0x0034
          unsigned long                  v_sar     ;//0x0038
          unsigned long                  rgb_sar   ;//0x003c
          unsigned long                  o1_sar    ;//0x0040
          unsigned long                  o2_sar    ;//0x0044
          unsigned long                  cursor_sar;//0x0048
  union {
          unsigned long                  rgb_pos   ;//0x004c
          avr32_mpop_rgb_pos_t           RGB_POS   ;
  };
  union {
          unsigned long                  o1_pos    ;//0x0050
          avr32_mpop_o1_pos_t            O1_POS    ;
  };
  union {
          unsigned long                  o2_pos    ;//0x0054
          avr32_mpop_o2_pos_t            O2_POS    ;
  };
  union {
          unsigned long                  cursor_pos;//0x0058
          avr32_mpop_cursor_pos_t        CURSOR_POS;
  };
  union {
          unsigned long                  yuv_max_coord;//0x005c
          avr32_mpop_yuv_max_coord_t     YUV_MAX_COORD;
  };
  union {
          unsigned long                  rgb_size  ;//0x0060
          avr32_mpop_rgb_size_t          RGB_SIZE  ;
  };
  union {
          unsigned long                  o1_size   ;//0x0064
          avr32_mpop_o1_size_t           O1_SIZE   ;
  };
  union {
          unsigned long                  o2_size   ;//0x0068
          avr32_mpop_o2_size_t           O2_SIZE   ;
  };
  union {
          unsigned long                  cursor_size;//0x006c
          avr32_mpop_cursor_size_t       CURSOR_SIZE;
  };
          unsigned long                  rgb_wtc   ;//0x0070
          unsigned long                  o1_wtc    ;//0x0074
          unsigned long                  o2_wtc    ;//0x0078
          unsigned long                  cursor_wtc;//0x007c
  union {
          unsigned long                  cursor_p0 ;//0x0080
          avr32_mpop_cursor_p0_t         CURSOR_P0 ;
  };
  union {
          unsigned long                  cursor_p1 ;//0x0084
          avr32_mpop_cursor_p1_t         CURSOR_P1 ;
  };
  union {
          unsigned long                  cursor_p2 ;//0x0088
          avr32_mpop_cursor_p2_t         CURSOR_P2 ;
  };
  union {
          unsigned long                  cursor_p3 ;//0x008c
          avr32_mpop_cursor_p3_t         CURSOR_P3 ;
  };
  union {
          unsigned long                  bgcolor   ;//0x0090
          avr32_mpop_bgcolor_t           BGCOLOR   ;
  };
    const unsigned long                  yuv_bear  ;//0x0094
    const unsigned long                  overlay_bear;//0x0098
    const unsigned long                  out_bear  ;//0x009c
  union {
          unsigned long                  inten     ;//0x00a0
          avr32_mpop_inten_t             INTEN     ;
  };
  union {
          unsigned long                  intdis    ;//0x00a4
          avr32_mpop_intdis_t            INTDIS    ;
  };
  union {
    const unsigned long                  intmask   ;//0x00a8
    const avr32_mpop_intmask_t           INTMASK   ;
  };
  union {
    const unsigned long                  intstatus ;//0x00ac
    const avr32_mpop_intstatus_t         INTSTATUS ;
  };
  union {
          unsigned long                  intclear  ;//0x00b0
          avr32_mpop_intclear_t          INTCLEAR  ;
  };
    const unsigned long                  parameter ;//0x00b4
  union {
    const unsigned long                  version   ;//0x00b8
    const avr32_mpop_version_t           VERSION   ;
  };
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
          unsigned long                  overlay_palette[256];//0x0400
          avr32_mpop_overlay_palette_t   OVERLAY_PALETTE[256];
  };
} avr32_mpop_t;



/*#ifdef __AVR32_ABI_COMPILER__*/
#endif

/*#ifdef AVR32_MPOP_100_H_INCLUDED*/
#endif

