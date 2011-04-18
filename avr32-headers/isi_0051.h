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
#ifndef AVR32_ISI_0051_H_INCLUDED
#define AVR32_ISI_0051_H_INCLUDED

#define AVR32_ISI_H_VERSION 0051

#include "avr32/abi.h"


/*
 Note to user:

 The following defines are always generated:
 - Register offset: AVR32_ISI_<register>
 - Bitfield mask:   AVR32_ISI_<register>_<bitfield>
 - Bitfield offset: AVR32_ISI_<register>_<bitfield>_OFFSET
 - Bitfield size:   AVR32_ISI_<register>_<bitfield>_SIZE
 - Bitfield values: AVR32_ISI_<register>_<bitfield>_<value name>

 The following defines are generated if they don't cause ambiguities,
 i.e. the name is unique, or all values with that name are the same.
 - Bitfield mask:   AVR32_ISI_<bitfield>
 - Bitfield offset: AVR32_ISI_<bitfield>_OFFSET
 - Bitfield size:   AVR32_ISI_<bitfield>_SIZE
 - Bitfield values: AVR32_ISI_<bitfield>_<value name>
 - Bitfield values: AVR32_ISI_<value name>

 All defines are sorted alphabetically.
*/


#define AVR32_ISI_BOFF                                             24
#define AVR32_ISI_BOFF_MASK                                0x01000000
#define AVR32_ISI_BOFF_OFFSET                                      24
#define AVR32_ISI_BOFF_SIZE                                         1
#define AVR32_ISI_C0                                                0
#define AVR32_ISI_C0_OFFSET                                         0
#define AVR32_ISI_C1                                                8
#define AVR32_ISI_C1_OFFSET                                         8
#define AVR32_ISI_C2                                               16
#define AVR32_ISI_C2_OFFSET                                        16
#define AVR32_ISI_C5                                               16
#define AVR32_ISI_C5_MASK                                  0x007f0000
#define AVR32_ISI_C5_OFFSET                                        16
#define AVR32_ISI_C5_SIZE                                           7
#define AVR32_ISI_C6                                                0
#define AVR32_ISI_C6_MASK                                  0x0000007f
#define AVR32_ISI_C6_OFFSET                                         0
#define AVR32_ISI_C6_SIZE                                           7
#define AVR32_ISI_C7                                                8
#define AVR32_ISI_C7_MASK                                  0x00007f00
#define AVR32_ISI_C7_OFFSET                                         8
#define AVR32_ISI_C7_SIZE                                           7
#define AVR32_ISI_C8                                               16
#define AVR32_ISI_C8_MASK                                  0x007f0000
#define AVR32_ISI_C8_OFFSET                                        16
#define AVR32_ISI_C8_SIZE                                           7
#define AVR32_ISI_CAPTURE_ALL                              0x00000000
#define AVR32_ISI_CBOFF                                            14
#define AVR32_ISI_CBOFF_MASK                               0x00004000
#define AVR32_ISI_CBOFF_OFFSET                                     14
#define AVR32_ISI_CBOFF_SIZE                                        1
#define AVR32_ISI_CDBA                                     0x0000002c
#define AVR32_ISI_CDBA_CODEC_DMA_ADDR                               0
#define AVR32_ISI_CDBA_CODEC_DMA_ADDR_MASK                 0xffffffff
#define AVR32_ISI_CDBA_CODEC_DMA_ADDR_OFFSET                        0
#define AVR32_ISI_CDBA_CODEC_DMA_ADDR_SIZE                         32
#define AVR32_ISI_CDC_STAT                                          3
#define AVR32_ISI_CDC_STAT_MASK                            0x00000008
#define AVR32_ISI_CDC_STAT_OFFSET                                   3
#define AVR32_ISI_CDC_STAT_SIZE                                     1
#define AVR32_ISI_CODEC_DMA_ADDR                                    0
#define AVR32_ISI_CODEC_DMA_ADDR_MASK                      0xffffffff
#define AVR32_ISI_CODEC_DMA_ADDR_OFFSET                             0
#define AVR32_ISI_CODEC_DMA_ADDR_SIZE                              32
#define AVR32_ISI_CODEC_EN                                         15
#define AVR32_ISI_CODEC_EN_MASK                            0x00008000
#define AVR32_ISI_CODEC_EN_OFFSET                                  15
#define AVR32_ISI_CODEC_EN_SIZE                                     1
#define AVR32_ISI_COL_SPACE                                        15
#define AVR32_ISI_COL_SPACE_MASK                           0x00008000
#define AVR32_ISI_COL_SPACE_OFFSET                                 15
#define AVR32_ISI_COL_SPACE_SIZE                                    1
#define AVR32_ISI_CR1                                      0x00000000
#define AVR32_ISI_CR1_CODEC_EN                                     15
#define AVR32_ISI_CR1_CODEC_EN_MASK                        0x00008000
#define AVR32_ISI_CR1_CODEC_EN_OFFSET                              15
#define AVR32_ISI_CR1_CODEC_EN_SIZE                                 1
#define AVR32_ISI_CR1_CRC_SYNC                                      7
#define AVR32_ISI_CR1_CRC_SYNC_MASK                        0x00000080
#define AVR32_ISI_CR1_CRC_SYNC_OFFSET                               7
#define AVR32_ISI_CR1_CRC_SYNC_SIZE                                 1
#define AVR32_ISI_CR1_DIS                                           1
#define AVR32_ISI_CR1_DIS_MASK                             0x00000002
#define AVR32_ISI_CR1_DIS_OFFSET                                    1
#define AVR32_ISI_CR1_DIS_SIZE                                      1
#define AVR32_ISI_CR1_EMB_SYNC                                      6
#define AVR32_ISI_CR1_EMB_SYNC_MASK                        0x00000040
#define AVR32_ISI_CR1_EMB_SYNC_OFFSET                               6
#define AVR32_ISI_CR1_EMB_SYNC_SIZE                                 1
#define AVR32_ISI_CR1_FRATE                                         8
#define AVR32_ISI_CR1_FRATE_CAPTURE_ALL                    0x00000000
#define AVR32_ISI_CR1_FRATE_MASK                           0x00000700
#define AVR32_ISI_CR1_FRATE_OFFSET                                  8
#define AVR32_ISI_CR1_FRATE_SIZE                                    3
#define AVR32_ISI_CR1_FULL                                         12
#define AVR32_ISI_CR1_FULL_MASK                            0x00001000
#define AVR32_ISI_CR1_FULL_OFFSET                                  12
#define AVR32_ISI_CR1_FULL_SIZE                                     1
#define AVR32_ISI_CR1_HSYNC_POL                                     2
#define AVR32_ISI_CR1_HSYNC_POL_MASK                       0x00000004
#define AVR32_ISI_CR1_HSYNC_POL_OFFSET                              2
#define AVR32_ISI_CR1_HSYNC_POL_SIZE                                1
#define AVR32_ISI_CR1_PIXCLK_POL                                    4
#define AVR32_ISI_CR1_PIXCLK_POL_MASK                      0x00000010
#define AVR32_ISI_CR1_PIXCLK_POL_OFFSET                             4
#define AVR32_ISI_CR1_PIXCLK_POL_SIZE                               1
#define AVR32_ISI_CR1_RST                                           0
#define AVR32_ISI_CR1_RST_MASK                             0x00000001
#define AVR32_ISI_CR1_RST_OFFSET                                    0
#define AVR32_ISI_CR1_RST_SIZE                                      1
#define AVR32_ISI_CR1_SFD                                          24
#define AVR32_ISI_CR1_SFD_MASK                             0xff000000
#define AVR32_ISI_CR1_SFD_OFFSET                                   24
#define AVR32_ISI_CR1_SFD_SIZE                                      8
#define AVR32_ISI_CR1_SLD                                          16
#define AVR32_ISI_CR1_SLD_MASK                             0x00ff0000
#define AVR32_ISI_CR1_SLD_OFFSET                                   16
#define AVR32_ISI_CR1_SLD_SIZE                                      8
#define AVR32_ISI_CR1_THMASK                                       13
#define AVR32_ISI_CR1_THMASK_MASK                          0x00006000
#define AVR32_ISI_CR1_THMASK_OFFSET                                13
#define AVR32_ISI_CR1_THMASK_SIZE                                   2
#define AVR32_ISI_CR1_VSYNC_POL                                     3
#define AVR32_ISI_CR1_VSYNC_POL_MASK                       0x00000008
#define AVR32_ISI_CR1_VSYNC_POL_OFFSET                              3
#define AVR32_ISI_CR1_VSYNC_POL_SIZE                                1
#define AVR32_ISI_CR2                                      0x00000004
#define AVR32_ISI_CR2_COL_SPACE                                    15
#define AVR32_ISI_CR2_COL_SPACE_MASK                       0x00008000
#define AVR32_ISI_CR2_COL_SPACE_OFFSET                             15
#define AVR32_ISI_CR2_COL_SPACE_SIZE                                1
#define AVR32_ISI_CR2_GRAYSCALE                                    13
#define AVR32_ISI_CR2_GRAYSCALE_MASK                       0x00002000
#define AVR32_ISI_CR2_GRAYSCALE_OFFSET                             13
#define AVR32_ISI_CR2_GRAYSCALE_SIZE                                1
#define AVR32_ISI_CR2_GS_MODE                                      11
#define AVR32_ISI_CR2_GS_MODE_MASK                         0x00000800
#define AVR32_ISI_CR2_GS_MODE_OFFSET                               11
#define AVR32_ISI_CR2_GS_MODE_SIZE                                  1
#define AVR32_ISI_CR2_IM_HSIZE                                     16
#define AVR32_ISI_CR2_IM_HSIZE_MASK                        0x07ff0000
#define AVR32_ISI_CR2_IM_HSIZE_OFFSET                              16
#define AVR32_ISI_CR2_IM_HSIZE_SIZE                                11
#define AVR32_ISI_CR2_IM_VSIZE                                      0
#define AVR32_ISI_CR2_IM_VSIZE_MASK                        0x000007ff
#define AVR32_ISI_CR2_IM_VSIZE_OFFSET                               0
#define AVR32_ISI_CR2_IM_VSIZE_SIZE                                11
#define AVR32_ISI_CR2_RGB_CFG                                      30
#define AVR32_ISI_CR2_RGB_CFG_DEFAULT                      0x00000000
#define AVR32_ISI_CR2_RGB_CFG_MASK                         0xc0000000
#define AVR32_ISI_CR2_RGB_CFG_MODE_1                       0x00000001
#define AVR32_ISI_CR2_RGB_CFG_MODE_2                       0x00000002
#define AVR32_ISI_CR2_RGB_CFG_MODE_3                       0x00000003
#define AVR32_ISI_CR2_RGB_CFG_OFFSET                               30
#define AVR32_ISI_CR2_RGB_CFG_SIZE                                  2
#define AVR32_ISI_CR2_RGB_MODE                                     12
#define AVR32_ISI_CR2_RGB_MODE_MASK                        0x00001000
#define AVR32_ISI_CR2_RGB_MODE_OFFSET                              12
#define AVR32_ISI_CR2_RGB_MODE_SIZE                                 1
#define AVR32_ISI_CR2_RGB_SWAP                                     14
#define AVR32_ISI_CR2_RGB_SWAP_MASK                        0x00004000
#define AVR32_ISI_CR2_RGB_SWAP_OFFSET                              14
#define AVR32_ISI_CR2_RGB_SWAP_SIZE                                 1
#define AVR32_ISI_CR2_YCC_SWAP                                     28
#define AVR32_ISI_CR2_YCC_SWAP_DEFAULT                     0x00000000
#define AVR32_ISI_CR2_YCC_SWAP_MASK                        0x30000000
#define AVR32_ISI_CR2_YCC_SWAP_MODE_1                      0x00000001
#define AVR32_ISI_CR2_YCC_SWAP_MODE_2                      0x00000002
#define AVR32_ISI_CR2_YCC_SWAP_MODE_3                      0x00000003
#define AVR32_ISI_CR2_YCC_SWAP_OFFSET                              28
#define AVR32_ISI_CR2_YCC_SWAP_SIZE                                 2
#define AVR32_ISI_CRC_ERR                                           4
#define AVR32_ISI_CRC_ERR_MASK                             0x00000010
#define AVR32_ISI_CRC_ERR_OFFSET                                    4
#define AVR32_ISI_CRC_ERR_SIZE                                      1
#define AVR32_ISI_CRC_SYNC                                          7
#define AVR32_ISI_CRC_SYNC_MASK                            0x00000080
#define AVR32_ISI_CRC_SYNC_OFFSET                                   7
#define AVR32_ISI_CRC_SYNC_SIZE                                     1
#define AVR32_ISI_CROFF                                            13
#define AVR32_ISI_CROFF_MASK                               0x00002000
#define AVR32_ISI_CROFF_OFFSET                                     13
#define AVR32_ISI_CROFF_SIZE                                        1
#define AVR32_ISI_DEC_FACTOR                                        0
#define AVR32_ISI_DEC_FACTOR_MASK                          0x000000ff
#define AVR32_ISI_DEC_FACTOR_OFFSET                                 0
#define AVR32_ISI_DEC_FACTOR_SIZE                                   8
#define AVR32_ISI_DEFAULT                                  0x00000000
#define AVR32_ISI_DIS                                               1
#define AVR32_ISI_DIS_MASK                                 0x00000002
#define AVR32_ISI_DIS_OFFSET                                        1
#define AVR32_ISI_DIS_SIZE                                          1
#define AVR32_ISI_EMB_SYNC                                          6
#define AVR32_ISI_EMB_SYNC_MASK                            0x00000040
#define AVR32_ISI_EMB_SYNC_OFFSET                                   6
#define AVR32_ISI_EMB_SYNC_SIZE                                     1
#define AVR32_ISI_FO_C_EMP                                          8
#define AVR32_ISI_FO_C_EMP_MASK                            0x00000100
#define AVR32_ISI_FO_C_EMP_OFFSET                                   8
#define AVR32_ISI_FO_C_EMP_SIZE                                     1
#define AVR32_ISI_FO_C_OVF                                          5
#define AVR32_ISI_FO_C_OVF_MASK                            0x00000020
#define AVR32_ISI_FO_C_OVF_OFFSET                                   5
#define AVR32_ISI_FO_C_OVF_SIZE                                     1
#define AVR32_ISI_FO_P_EMP                                          7
#define AVR32_ISI_FO_P_EMP_MASK                            0x00000080
#define AVR32_ISI_FO_P_EMP_OFFSET                                   7
#define AVR32_ISI_FO_P_EMP_SIZE                                     1
#define AVR32_ISI_FO_P_OVF                                          6
#define AVR32_ISI_FO_P_OVF_MASK                            0x00000040
#define AVR32_ISI_FO_P_OVF_OFFSET                                   6
#define AVR32_ISI_FO_P_OVF_SIZE                                     1
#define AVR32_ISI_FRATE                                             8
#define AVR32_ISI_FRATE_CAPTURE_ALL                        0x00000000
#define AVR32_ISI_FRATE_MASK                               0x00000700
#define AVR32_ISI_FRATE_OFFSET                                      8
#define AVR32_ISI_FRATE_SIZE                                        3
#define AVR32_ISI_FR_OVR                                            9
#define AVR32_ISI_FR_OVR_MASK                              0x00000200
#define AVR32_ISI_FR_OVR_OFFSET                                     9
#define AVR32_ISI_FR_OVR_SIZE                                       1
#define AVR32_ISI_FULL                                             12
#define AVR32_ISI_FULL_MASK                                0x00001000
#define AVR32_ISI_FULL_OFFSET                                      12
#define AVR32_ISI_FULL_SIZE                                         1
#define AVR32_ISI_GOFF                                             24
#define AVR32_ISI_GOFF_MASK                                0x01000000
#define AVR32_ISI_GOFF_OFFSET                                      24
#define AVR32_ISI_GOFF_SIZE                                         1
#define AVR32_ISI_GRAYSCALE                                        13
#define AVR32_ISI_GRAYSCALE_MASK                           0x00002000
#define AVR32_ISI_GRAYSCALE_OFFSET                                 13
#define AVR32_ISI_GRAYSCALE_SIZE                                    1
#define AVR32_ISI_GS_MODE                                          11
#define AVR32_ISI_GS_MODE_MASK                             0x00000800
#define AVR32_ISI_GS_MODE_OFFSET                                   11
#define AVR32_ISI_GS_MODE_SIZE                                      1
#define AVR32_ISI_HSYNC_POL                                         2
#define AVR32_ISI_HSYNC_POL_MASK                           0x00000004
#define AVR32_ISI_HSYNC_POL_OFFSET                                  2
#define AVR32_ISI_HSYNC_POL_SIZE                                    1
#define AVR32_ISI_IDR                                      0x00000010
#define AVR32_ISI_IDR_CRC_ERR                                       4
#define AVR32_ISI_IDR_CRC_ERR_MASK                         0x00000010
#define AVR32_ISI_IDR_CRC_ERR_OFFSET                                4
#define AVR32_ISI_IDR_CRC_ERR_SIZE                                  1
#define AVR32_ISI_IDR_DIS                                           1
#define AVR32_ISI_IDR_DIS_MASK                             0x00000002
#define AVR32_ISI_IDR_DIS_OFFSET                                    1
#define AVR32_ISI_IDR_DIS_SIZE                                      1
#define AVR32_ISI_IDR_FO_C_EMP                                      8
#define AVR32_ISI_IDR_FO_C_EMP_MASK                        0x00000100
#define AVR32_ISI_IDR_FO_C_EMP_OFFSET                               8
#define AVR32_ISI_IDR_FO_C_EMP_SIZE                                 1
#define AVR32_ISI_IDR_FO_C_OVF                                      5
#define AVR32_ISI_IDR_FO_C_OVF_MASK                        0x00000020
#define AVR32_ISI_IDR_FO_C_OVF_OFFSET                               5
#define AVR32_ISI_IDR_FO_C_OVF_SIZE                                 1
#define AVR32_ISI_IDR_FO_P_EMP                                      7
#define AVR32_ISI_IDR_FO_P_EMP_MASK                        0x00000080
#define AVR32_ISI_IDR_FO_P_EMP_OFFSET                               7
#define AVR32_ISI_IDR_FO_P_EMP_SIZE                                 1
#define AVR32_ISI_IDR_FO_P_OVF                                      6
#define AVR32_ISI_IDR_FO_P_OVF_MASK                        0x00000040
#define AVR32_ISI_IDR_FO_P_OVF_OFFSET                               6
#define AVR32_ISI_IDR_FO_P_OVF_SIZE                                 1
#define AVR32_ISI_IDR_FR_OVR                                        9
#define AVR32_ISI_IDR_FR_OVR_MASK                          0x00000200
#define AVR32_ISI_IDR_FR_OVR_OFFSET                                 9
#define AVR32_ISI_IDR_FR_OVR_SIZE                                   1
#define AVR32_ISI_IDR_SOF                                           0
#define AVR32_ISI_IDR_SOFTRST                                       2
#define AVR32_ISI_IDR_SOFTRST_MASK                         0x00000004
#define AVR32_ISI_IDR_SOFTRST_OFFSET                                2
#define AVR32_ISI_IDR_SOFTRST_SIZE                                  1
#define AVR32_ISI_IDR_SOF_MASK                             0x00000001
#define AVR32_ISI_IDR_SOF_OFFSET                                    0
#define AVR32_ISI_IDR_SOF_SIZE                                      1
#define AVR32_ISI_IER                                      0x0000000c
#define AVR32_ISI_IER_CRC_ERR                                       4
#define AVR32_ISI_IER_CRC_ERR_MASK                         0x00000010
#define AVR32_ISI_IER_CRC_ERR_OFFSET                                4
#define AVR32_ISI_IER_CRC_ERR_SIZE                                  1
#define AVR32_ISI_IER_DIS                                           1
#define AVR32_ISI_IER_DIS_MASK                             0x00000002
#define AVR32_ISI_IER_DIS_OFFSET                                    1
#define AVR32_ISI_IER_DIS_SIZE                                      1
#define AVR32_ISI_IER_FO_C_EMP                                      8
#define AVR32_ISI_IER_FO_C_EMP_MASK                        0x00000100
#define AVR32_ISI_IER_FO_C_EMP_OFFSET                               8
#define AVR32_ISI_IER_FO_C_EMP_SIZE                                 1
#define AVR32_ISI_IER_FO_C_OVF                                      5
#define AVR32_ISI_IER_FO_C_OVF_MASK                        0x00000020
#define AVR32_ISI_IER_FO_C_OVF_OFFSET                               5
#define AVR32_ISI_IER_FO_C_OVF_SIZE                                 1
#define AVR32_ISI_IER_FO_P_EMP                                      7
#define AVR32_ISI_IER_FO_P_EMP_MASK                        0x00000080
#define AVR32_ISI_IER_FO_P_EMP_OFFSET                               7
#define AVR32_ISI_IER_FO_P_EMP_SIZE                                 1
#define AVR32_ISI_IER_FO_P_OVF                                      6
#define AVR32_ISI_IER_FO_P_OVF_MASK                        0x00000040
#define AVR32_ISI_IER_FO_P_OVF_OFFSET                               6
#define AVR32_ISI_IER_FO_P_OVF_SIZE                                 1
#define AVR32_ISI_IER_FR_OVR                                        9
#define AVR32_ISI_IER_FR_OVR_MASK                          0x00000200
#define AVR32_ISI_IER_FR_OVR_OFFSET                                 9
#define AVR32_ISI_IER_FR_OVR_SIZE                                   1
#define AVR32_ISI_IER_SOF                                           0
#define AVR32_ISI_IER_SOFTRST                                       2
#define AVR32_ISI_IER_SOFTRST_MASK                         0x00000004
#define AVR32_ISI_IER_SOFTRST_OFFSET                                2
#define AVR32_ISI_IER_SOFTRST_SIZE                                  1
#define AVR32_ISI_IER_SOF_MASK                             0x00000001
#define AVR32_ISI_IER_SOF_OFFSET                                    0
#define AVR32_ISI_IER_SOF_SIZE                                      1
#define AVR32_ISI_IMR                                      0x00000014
#define AVR32_ISI_IMR_CRC_ERR                                       4
#define AVR32_ISI_IMR_CRC_ERR_MASK                         0x00000010
#define AVR32_ISI_IMR_CRC_ERR_OFFSET                                4
#define AVR32_ISI_IMR_CRC_ERR_SIZE                                  1
#define AVR32_ISI_IMR_DIS                                           1
#define AVR32_ISI_IMR_DIS_MASK                             0x00000002
#define AVR32_ISI_IMR_DIS_OFFSET                                    1
#define AVR32_ISI_IMR_DIS_SIZE                                      1
#define AVR32_ISI_IMR_FO_C_EMP                                      8
#define AVR32_ISI_IMR_FO_C_EMP_MASK                        0x00000100
#define AVR32_ISI_IMR_FO_C_EMP_OFFSET                               8
#define AVR32_ISI_IMR_FO_C_EMP_SIZE                                 1
#define AVR32_ISI_IMR_FO_C_OVF                                      5
#define AVR32_ISI_IMR_FO_C_OVF_MASK                        0x00000020
#define AVR32_ISI_IMR_FO_C_OVF_OFFSET                               5
#define AVR32_ISI_IMR_FO_C_OVF_SIZE                                 1
#define AVR32_ISI_IMR_FO_P_EMP                                      7
#define AVR32_ISI_IMR_FO_P_EMP_MASK                        0x00000080
#define AVR32_ISI_IMR_FO_P_EMP_OFFSET                               7
#define AVR32_ISI_IMR_FO_P_EMP_SIZE                                 1
#define AVR32_ISI_IMR_FO_P_OVF                                      6
#define AVR32_ISI_IMR_FO_P_OVF_MASK                        0x00000040
#define AVR32_ISI_IMR_FO_P_OVF_OFFSET                               6
#define AVR32_ISI_IMR_FO_P_OVF_SIZE                                 1
#define AVR32_ISI_IMR_FR_OVR                                        9
#define AVR32_ISI_IMR_FR_OVR_MASK                          0x00000200
#define AVR32_ISI_IMR_FR_OVR_OFFSET                                 9
#define AVR32_ISI_IMR_FR_OVR_SIZE                                   1
#define AVR32_ISI_IMR_SOF                                           0
#define AVR32_ISI_IMR_SOFTRST                                       2
#define AVR32_ISI_IMR_SOFTRST_MASK                         0x00000004
#define AVR32_ISI_IMR_SOFTRST_OFFSET                                2
#define AVR32_ISI_IMR_SOFTRST_SIZE                                  1
#define AVR32_ISI_IMR_SOF_MASK                             0x00000001
#define AVR32_ISI_IMR_SOF_OFFSET                                    0
#define AVR32_ISI_IMR_SOF_SIZE                                      1
#define AVR32_ISI_IM_HSIZE                                         16
#define AVR32_ISI_IM_HSIZE_MASK                            0x07ff0000
#define AVR32_ISI_IM_HSIZE_OFFSET                                  16
#define AVR32_ISI_IM_HSIZE_SIZE                                    11
#define AVR32_ISI_IM_VSIZE                                          0
#define AVR32_ISI_IM_VSIZE_MASK                            0x000007ff
#define AVR32_ISI_IM_VSIZE_OFFSET                                   0
#define AVR32_ISI_IM_VSIZE_SIZE                                    11
#define AVR32_ISI_MODE_1                                   0x00000001
#define AVR32_ISI_MODE_2                                   0x00000002
#define AVR32_ISI_MODE_3                                   0x00000003
#define AVR32_ISI_PDECF                                    0x00000024
#define AVR32_ISI_PDECF_DEC_FACTOR                                  0
#define AVR32_ISI_PDECF_DEC_FACTOR_MASK                    0x000000ff
#define AVR32_ISI_PDECF_DEC_FACTOR_OFFSET                           0
#define AVR32_ISI_PDECF_DEC_FACTOR_SIZE                             8
#define AVR32_ISI_PIXCLK_POL                                        4
#define AVR32_ISI_PIXCLK_POL_MASK                          0x00000010
#define AVR32_ISI_PIXCLK_POL_OFFSET                                 4
#define AVR32_ISI_PIXCLK_POL_SIZE                                   1
#define AVR32_ISI_PPFBD                                    0x00000028
#define AVR32_ISI_PPFBD_PREV_FBD_ADDR                               0
#define AVR32_ISI_PPFBD_PREV_FBD_ADDR_MASK                 0xffffffff
#define AVR32_ISI_PPFBD_PREV_FBD_ADDR_OFFSET                        0
#define AVR32_ISI_PPFBD_PREV_FBD_ADDR_SIZE                         32
#define AVR32_ISI_PREV_FBD_ADDR                                     0
#define AVR32_ISI_PREV_FBD_ADDR_MASK                       0xffffffff
#define AVR32_ISI_PREV_FBD_ADDR_OFFSET                              0
#define AVR32_ISI_PREV_FBD_ADDR_SIZE                               32
#define AVR32_ISI_PREV_HSIZE                                       16
#define AVR32_ISI_PREV_HSIZE_MASK                          0x03ff0000
#define AVR32_ISI_PREV_HSIZE_OFFSET                                16
#define AVR32_ISI_PREV_HSIZE_SIZE                                  10
#define AVR32_ISI_PREV_VSIZE                                        0
#define AVR32_ISI_PREV_VSIZE_MASK                          0x000003ff
#define AVR32_ISI_PREV_VSIZE_OFFSET                                 0
#define AVR32_ISI_PREV_VSIZE_SIZE                                  10
#define AVR32_ISI_PSIZE                                    0x00000020
#define AVR32_ISI_PSIZE_PREV_HSIZE                                 16
#define AVR32_ISI_PSIZE_PREV_HSIZE_MASK                    0x03ff0000
#define AVR32_ISI_PSIZE_PREV_HSIZE_OFFSET                          16
#define AVR32_ISI_PSIZE_PREV_HSIZE_SIZE                            10
#define AVR32_ISI_PSIZE_PREV_VSIZE                                  0
#define AVR32_ISI_PSIZE_PREV_VSIZE_MASK                    0x000003ff
#define AVR32_ISI_PSIZE_PREV_VSIZE_OFFSET                           0
#define AVR32_ISI_PSIZE_PREV_VSIZE_SIZE                            10
#define AVR32_ISI_R2Y_SET0                                 0x00000038
#define AVR32_ISI_R2Y_SET0_C0                                       0
#define AVR32_ISI_R2Y_SET0_C0_MASK                         0x0000007f
#define AVR32_ISI_R2Y_SET0_C0_OFFSET                                0
#define AVR32_ISI_R2Y_SET0_C0_SIZE                                  7
#define AVR32_ISI_R2Y_SET0_C1                                       8
#define AVR32_ISI_R2Y_SET0_C1_MASK                         0x00007f00
#define AVR32_ISI_R2Y_SET0_C1_OFFSET                                8
#define AVR32_ISI_R2Y_SET0_C1_SIZE                                  7
#define AVR32_ISI_R2Y_SET0_C2                                      16
#define AVR32_ISI_R2Y_SET0_C2_MASK                         0x007f0000
#define AVR32_ISI_R2Y_SET0_C2_OFFSET                               16
#define AVR32_ISI_R2Y_SET0_C2_SIZE                                  7
#define AVR32_ISI_R2Y_SET0_ROFF                                    24
#define AVR32_ISI_R2Y_SET0_ROFF_MASK                       0x01000000
#define AVR32_ISI_R2Y_SET0_ROFF_OFFSET                             24
#define AVR32_ISI_R2Y_SET0_ROFF_SIZE                                1
#define AVR32_ISI_R2Y_SET1                                 0x0000003c
#define AVR32_ISI_R2Y_SET1_C3                                       0
#define AVR32_ISI_R2Y_SET1_C3_MASK                         0x0000007f
#define AVR32_ISI_R2Y_SET1_C3_OFFSET                                0
#define AVR32_ISI_R2Y_SET1_C3_SIZE                                  7
#define AVR32_ISI_R2Y_SET1_C4                                       8
#define AVR32_ISI_R2Y_SET1_C4_MASK                         0x00007f00
#define AVR32_ISI_R2Y_SET1_C4_OFFSET                                8
#define AVR32_ISI_R2Y_SET1_C4_SIZE                                  7
#define AVR32_ISI_R2Y_SET1_C5                                      16
#define AVR32_ISI_R2Y_SET1_C5_MASK                         0x007f0000
#define AVR32_ISI_R2Y_SET1_C5_OFFSET                               16
#define AVR32_ISI_R2Y_SET1_C5_SIZE                                  7
#define AVR32_ISI_R2Y_SET1_GOFF                                    24
#define AVR32_ISI_R2Y_SET1_GOFF_MASK                       0x01000000
#define AVR32_ISI_R2Y_SET1_GOFF_OFFSET                             24
#define AVR32_ISI_R2Y_SET1_GOFF_SIZE                                1
#define AVR32_ISI_R2Y_SET2                                 0x00000040
#define AVR32_ISI_R2Y_SET2_BOFF                                    24
#define AVR32_ISI_R2Y_SET2_BOFF_MASK                       0x01000000
#define AVR32_ISI_R2Y_SET2_BOFF_OFFSET                             24
#define AVR32_ISI_R2Y_SET2_BOFF_SIZE                                1
#define AVR32_ISI_R2Y_SET2_C6                                       0
#define AVR32_ISI_R2Y_SET2_C6_MASK                         0x0000007f
#define AVR32_ISI_R2Y_SET2_C6_OFFSET                                0
#define AVR32_ISI_R2Y_SET2_C6_SIZE                                  7
#define AVR32_ISI_R2Y_SET2_C7                                       8
#define AVR32_ISI_R2Y_SET2_C7_MASK                         0x00007f00
#define AVR32_ISI_R2Y_SET2_C7_OFFSET                                8
#define AVR32_ISI_R2Y_SET2_C7_SIZE                                  7
#define AVR32_ISI_R2Y_SET2_C8                                      16
#define AVR32_ISI_R2Y_SET2_C8_MASK                         0x007f0000
#define AVR32_ISI_R2Y_SET2_C8_OFFSET                               16
#define AVR32_ISI_R2Y_SET2_C8_SIZE                                  7
#define AVR32_ISI_RGB_CFG                                          30
#define AVR32_ISI_RGB_CFG_DEFAULT                          0x00000000
#define AVR32_ISI_RGB_CFG_MASK                             0xc0000000
#define AVR32_ISI_RGB_CFG_MODE_1                           0x00000001
#define AVR32_ISI_RGB_CFG_MODE_2                           0x00000002
#define AVR32_ISI_RGB_CFG_MODE_3                           0x00000003
#define AVR32_ISI_RGB_CFG_OFFSET                                   30
#define AVR32_ISI_RGB_CFG_SIZE                                      2
#define AVR32_ISI_RGB_MODE                                         12
#define AVR32_ISI_RGB_MODE_MASK                            0x00001000
#define AVR32_ISI_RGB_MODE_OFFSET                                  12
#define AVR32_ISI_RGB_MODE_SIZE                                     1
#define AVR32_ISI_RGB_SWAP                                         14
#define AVR32_ISI_RGB_SWAP_MASK                            0x00004000
#define AVR32_ISI_RGB_SWAP_OFFSET                                  14
#define AVR32_ISI_RGB_SWAP_SIZE                                     1
#define AVR32_ISI_ROFF                                             24
#define AVR32_ISI_ROFF_MASK                                0x01000000
#define AVR32_ISI_ROFF_OFFSET                                      24
#define AVR32_ISI_ROFF_SIZE                                         1
#define AVR32_ISI_RST                                               0
#define AVR32_ISI_RST_MASK                                 0x00000001
#define AVR32_ISI_RST_OFFSET                                        0
#define AVR32_ISI_RST_SIZE                                          1
#define AVR32_ISI_SFD                                              24
#define AVR32_ISI_SFD_MASK                                 0xff000000
#define AVR32_ISI_SFD_OFFSET                                       24
#define AVR32_ISI_SFD_SIZE                                          8
#define AVR32_ISI_SLD                                              16
#define AVR32_ISI_SLD_MASK                                 0x00ff0000
#define AVR32_ISI_SLD_OFFSET                                       16
#define AVR32_ISI_SLD_SIZE                                          8
#define AVR32_ISI_SOF                                               0
#define AVR32_ISI_SOFTRST                                           2
#define AVR32_ISI_SOFTRST_MASK                             0x00000004
#define AVR32_ISI_SOFTRST_OFFSET                                    2
#define AVR32_ISI_SOFTRST_SIZE                                      1
#define AVR32_ISI_SOF_MASK                                 0x00000001
#define AVR32_ISI_SOF_OFFSET                                        0
#define AVR32_ISI_SOF_SIZE                                          1
#define AVR32_ISI_SR                                       0x00000008
#define AVR32_ISI_SR_CDC_STAT                                       3
#define AVR32_ISI_SR_CDC_STAT_MASK                         0x00000008
#define AVR32_ISI_SR_CDC_STAT_OFFSET                                3
#define AVR32_ISI_SR_CDC_STAT_SIZE                                  1
#define AVR32_ISI_SR_CRC_ERR                                        4
#define AVR32_ISI_SR_CRC_ERR_MASK                          0x00000010
#define AVR32_ISI_SR_CRC_ERR_OFFSET                                 4
#define AVR32_ISI_SR_CRC_ERR_SIZE                                   1
#define AVR32_ISI_SR_DIS                                            1
#define AVR32_ISI_SR_DIS_MASK                              0x00000002
#define AVR32_ISI_SR_DIS_OFFSET                                     1
#define AVR32_ISI_SR_DIS_SIZE                                       1
#define AVR32_ISI_SR_FO_C_EMP                                       8
#define AVR32_ISI_SR_FO_C_EMP_MASK                         0x00000100
#define AVR32_ISI_SR_FO_C_EMP_OFFSET                                8
#define AVR32_ISI_SR_FO_C_EMP_SIZE                                  1
#define AVR32_ISI_SR_FO_C_OVF                                       5
#define AVR32_ISI_SR_FO_C_OVF_MASK                         0x00000020
#define AVR32_ISI_SR_FO_C_OVF_OFFSET                                5
#define AVR32_ISI_SR_FO_C_OVF_SIZE                                  1
#define AVR32_ISI_SR_FO_P_EMP                                       7
#define AVR32_ISI_SR_FO_P_EMP_MASK                         0x00000080
#define AVR32_ISI_SR_FO_P_EMP_OFFSET                                7
#define AVR32_ISI_SR_FO_P_EMP_SIZE                                  1
#define AVR32_ISI_SR_FO_P_OVF                                       6
#define AVR32_ISI_SR_FO_P_OVF_MASK                         0x00000040
#define AVR32_ISI_SR_FO_P_OVF_OFFSET                                6
#define AVR32_ISI_SR_FO_P_OVF_SIZE                                  1
#define AVR32_ISI_SR_FR_OVR                                         9
#define AVR32_ISI_SR_FR_OVR_MASK                           0x00000200
#define AVR32_ISI_SR_FR_OVR_OFFSET                                  9
#define AVR32_ISI_SR_FR_OVR_SIZE                                    1
#define AVR32_ISI_SR_SOF                                            0
#define AVR32_ISI_SR_SOFTRST                                        2
#define AVR32_ISI_SR_SOFTRST_MASK                          0x00000004
#define AVR32_ISI_SR_SOFTRST_OFFSET                                 2
#define AVR32_ISI_SR_SOFTRST_SIZE                                   1
#define AVR32_ISI_SR_SOF_MASK                              0x00000001
#define AVR32_ISI_SR_SOF_OFFSET                                     0
#define AVR32_ISI_SR_SOF_SIZE                                       1
#define AVR32_ISI_THMASK                                           13
#define AVR32_ISI_THMASK_MASK                              0x00006000
#define AVR32_ISI_THMASK_OFFSET                                    13
#define AVR32_ISI_THMASK_SIZE                                       2
#define AVR32_ISI_VSYNC_POL                                         3
#define AVR32_ISI_VSYNC_POL_MASK                           0x00000008
#define AVR32_ISI_VSYNC_POL_OFFSET                                  3
#define AVR32_ISI_VSYNC_POL_SIZE                                    1
#define AVR32_ISI_Y2R_SET0                                 0x00000030
#define AVR32_ISI_Y2R_SET0_C0                                       0
#define AVR32_ISI_Y2R_SET0_C0_MASK                         0x000000ff
#define AVR32_ISI_Y2R_SET0_C0_OFFSET                                0
#define AVR32_ISI_Y2R_SET0_C0_SIZE                                  8
#define AVR32_ISI_Y2R_SET0_C1                                       8
#define AVR32_ISI_Y2R_SET0_C1_MASK                         0x0000ff00
#define AVR32_ISI_Y2R_SET0_C1_OFFSET                                8
#define AVR32_ISI_Y2R_SET0_C1_SIZE                                  8
#define AVR32_ISI_Y2R_SET0_C2                                      16
#define AVR32_ISI_Y2R_SET0_C2_MASK                         0x00ff0000
#define AVR32_ISI_Y2R_SET0_C2_OFFSET                               16
#define AVR32_ISI_Y2R_SET0_C2_SIZE                                  8
#define AVR32_ISI_Y2R_SET0_C3                                      24
#define AVR32_ISI_Y2R_SET0_C3_MASK                         0xff000000
#define AVR32_ISI_Y2R_SET0_C3_OFFSET                               24
#define AVR32_ISI_Y2R_SET0_C3_SIZE                                  8
#define AVR32_ISI_Y2R_SET1                                 0x00000034
#define AVR32_ISI_Y2R_SET1_C4                                       0
#define AVR32_ISI_Y2R_SET1_C4_MASK                         0x000001ff
#define AVR32_ISI_Y2R_SET1_C4_OFFSET                                0
#define AVR32_ISI_Y2R_SET1_C4_SIZE                                  9
#define AVR32_ISI_Y2R_SET1_CBOFF                                   14
#define AVR32_ISI_Y2R_SET1_CBOFF_MASK                      0x00004000
#define AVR32_ISI_Y2R_SET1_CBOFF_OFFSET                            14
#define AVR32_ISI_Y2R_SET1_CBOFF_SIZE                               1
#define AVR32_ISI_Y2R_SET1_CROFF                                   13
#define AVR32_ISI_Y2R_SET1_CROFF_MASK                      0x00002000
#define AVR32_ISI_Y2R_SET1_CROFF_OFFSET                            13
#define AVR32_ISI_Y2R_SET1_CROFF_SIZE                               1
#define AVR32_ISI_Y2R_SET1_YOFF                                    12
#define AVR32_ISI_Y2R_SET1_YOFF_MASK                       0x00001000
#define AVR32_ISI_Y2R_SET1_YOFF_OFFSET                             12
#define AVR32_ISI_Y2R_SET1_YOFF_SIZE                                1
#define AVR32_ISI_YCC_SWAP                                         28
#define AVR32_ISI_YCC_SWAP_DEFAULT                         0x00000000
#define AVR32_ISI_YCC_SWAP_MASK                            0x30000000
#define AVR32_ISI_YCC_SWAP_MODE_1                          0x00000001
#define AVR32_ISI_YCC_SWAP_MODE_2                          0x00000002
#define AVR32_ISI_YCC_SWAP_MODE_3                          0x00000003
#define AVR32_ISI_YCC_SWAP_OFFSET                                  28
#define AVR32_ISI_YCC_SWAP_SIZE                                     2
#define AVR32_ISI_YOFF                                             12
#define AVR32_ISI_YOFF_MASK                                0x00001000
#define AVR32_ISI_YOFF_OFFSET                                      12
#define AVR32_ISI_YOFF_SIZE                                         1




#ifdef __AVR32_ABI_COMPILER__


typedef struct avr32_isi_cr1_t {
    unsigned int sfd             : 8;
    unsigned int sld             : 8;
    unsigned int codec_en        : 1;
    unsigned int thmask          : 2;
    unsigned int full            : 1;
    unsigned int                 : 1;
    unsigned int frate           : 3;
    unsigned int crc_sync        : 1;
    unsigned int emb_sync        : 1;
    unsigned int                 : 1;
    unsigned int pixclk_pol      : 1;
    unsigned int vsync_pol       : 1;
    unsigned int hsync_pol       : 1;
    unsigned int dis             : 1;
    unsigned int rst             : 1;
} avr32_isi_cr1_t;



typedef struct avr32_isi_cr2_t {
    unsigned int rgb_cfg         : 2;
    unsigned int ycc_swap        : 2;
    unsigned int                 : 1;
    unsigned int im_hsize        :11;
    unsigned int col_space       : 1;
    unsigned int rgb_swap        : 1;
    unsigned int grayscale       : 1;
    unsigned int rgb_mode        : 1;
    unsigned int gs_mode         : 1;
    unsigned int im_vsize        :11;
} avr32_isi_cr2_t;



typedef struct avr32_isi_sr_t {
    unsigned int                 :22;
    unsigned int fr_ovr          : 1;
    unsigned int fo_c_emp        : 1;
    unsigned int fo_p_emp        : 1;
    unsigned int fo_p_ovf        : 1;
    unsigned int fo_c_ovf        : 1;
    unsigned int crc_err         : 1;
    unsigned int cdc_stat        : 1;
    unsigned int softrst         : 1;
    unsigned int dis             : 1;
    unsigned int sof             : 1;
} avr32_isi_sr_t;



typedef struct avr32_isi_ier_t {
    unsigned int                 :22;
    unsigned int fr_ovr          : 1;
    unsigned int fo_c_emp        : 1;
    unsigned int fo_p_emp        : 1;
    unsigned int fo_p_ovf        : 1;
    unsigned int fo_c_ovf        : 1;
    unsigned int crc_err         : 1;
    unsigned int                 : 1;
    unsigned int softrst         : 1;
    unsigned int dis             : 1;
    unsigned int sof             : 1;
} avr32_isi_ier_t;



typedef struct avr32_isi_idr_t {
    unsigned int                 :22;
    unsigned int fr_ovr          : 1;
    unsigned int fo_c_emp        : 1;
    unsigned int fo_p_emp        : 1;
    unsigned int fo_p_ovf        : 1;
    unsigned int fo_c_ovf        : 1;
    unsigned int crc_err         : 1;
    unsigned int                 : 1;
    unsigned int softrst         : 1;
    unsigned int dis             : 1;
    unsigned int sof             : 1;
} avr32_isi_idr_t;



typedef struct avr32_isi_imr_t {
    unsigned int                 :22;
    unsigned int fr_ovr          : 1;
    unsigned int fo_c_emp        : 1;
    unsigned int fo_p_emp        : 1;
    unsigned int fo_p_ovf        : 1;
    unsigned int fo_c_ovf        : 1;
    unsigned int crc_err         : 1;
    unsigned int                 : 1;
    unsigned int softrst         : 1;
    unsigned int dis             : 1;
    unsigned int sof             : 1;
} avr32_isi_imr_t;



typedef struct avr32_isi_psize_t {
    unsigned int                 : 6;
    unsigned int prev_hsize      :10;
    unsigned int                 : 6;
    unsigned int prev_vsize      :10;
} avr32_isi_psize_t;



typedef struct avr32_isi_pdecf_t {
    unsigned int                 :24;
    unsigned int dec_factor      : 8;
} avr32_isi_pdecf_t;



typedef struct avr32_isi_y2r_set0_t {
    unsigned int c3              : 8;
    unsigned int c2              : 8;
    unsigned int c1              : 8;
    unsigned int c0              : 8;
} avr32_isi_y2r_set0_t;



typedef struct avr32_isi_y2r_set1_t {
    unsigned int                 :17;
    unsigned int cboff           : 1;
    unsigned int croff           : 1;
    unsigned int yoff            : 1;
    unsigned int                 : 3;
    unsigned int c4              : 9;
} avr32_isi_y2r_set1_t;



typedef struct avr32_isi_r2y_set0_t {
    unsigned int                 : 7;
    unsigned int roff            : 1;
    unsigned int                 : 1;
    unsigned int c2              : 7;
    unsigned int                 : 1;
    unsigned int c1              : 7;
    unsigned int                 : 1;
    unsigned int c0              : 7;
} avr32_isi_r2y_set0_t;



typedef struct avr32_isi_r2y_set1_t {
    unsigned int                 : 7;
    unsigned int goff            : 1;
    unsigned int                 : 1;
    unsigned int c5              : 7;
    unsigned int                 : 1;
    unsigned int c4              : 7;
    unsigned int                 : 1;
    unsigned int c3              : 7;
} avr32_isi_r2y_set1_t;



typedef struct avr32_isi_r2y_set2_t {
    unsigned int                 : 7;
    unsigned int boff            : 1;
    unsigned int                 : 1;
    unsigned int c8              : 7;
    unsigned int                 : 1;
    unsigned int c7              : 7;
    unsigned int                 : 1;
    unsigned int c6              : 7;
} avr32_isi_r2y_set2_t;



typedef struct avr32_isi_t {
  union {
          unsigned long                  cr1       ;//0x0000
          avr32_isi_cr1_t                CR1       ;
  };
  union {
          unsigned long                  cr2       ;//0x0004
          avr32_isi_cr2_t                CR2       ;
  };
  union {
    const unsigned long                  sr        ;//0x0008
    const avr32_isi_sr_t                 SR        ;
  };
  union {
          unsigned long                  ier       ;//0x000c
          avr32_isi_ier_t                IER       ;
  };
  union {
          unsigned long                  idr       ;//0x0010
          avr32_isi_idr_t                IDR       ;
  };
  union {
          unsigned long                  imr       ;//0x0014
          avr32_isi_imr_t                IMR       ;
  };
          unsigned int                   :32       ;//0x0018
          unsigned int                   :32       ;//0x001c
  union {
          unsigned long                  psize     ;//0x0020
          avr32_isi_psize_t              PSIZE     ;
  };
  union {
          unsigned long                  pdecf     ;//0x0024
          avr32_isi_pdecf_t              PDECF     ;
  };
          unsigned long                  ppfbd     ;//0x0028
          unsigned long                  cdba      ;//0x002c
  union {
          unsigned long                  y2r_set0  ;//0x0030
          avr32_isi_y2r_set0_t           Y2R_SET0  ;
  };
  union {
          unsigned long                  y2r_set1  ;//0x0034
          avr32_isi_y2r_set1_t           Y2R_SET1  ;
  };
  union {
          unsigned long                  r2y_set0  ;//0x0038
          avr32_isi_r2y_set0_t           R2Y_SET0  ;
  };
  union {
          unsigned long                  r2y_set1  ;//0x003c
          avr32_isi_r2y_set1_t           R2Y_SET1  ;
  };
  union {
          unsigned long                  r2y_set2  ;//0x0040
          avr32_isi_r2y_set2_t           R2Y_SET2  ;
  };
} avr32_isi_t;



/*#ifdef __AVR32_ABI_COMPILER__*/
#endif

/*#ifdef AVR32_ISI_0051_H_INCLUDED*/
#endif

