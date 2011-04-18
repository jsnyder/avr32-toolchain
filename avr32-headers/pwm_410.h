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
#ifndef AVR32_PWM_410_H_INCLUDED
#define AVR32_PWM_410_H_INCLUDED

#define AVR32_PWM_H_VERSION 410

#include "avr32/abi.h"


/*
 Note to user:

 The following defines are always generated:
 - Register offset: AVR32_PWM_<register>
 - Bitfield mask:   AVR32_PWM_<register>_<bitfield>
 - Bitfield offset: AVR32_PWM_<register>_<bitfield>_OFFSET
 - Bitfield size:   AVR32_PWM_<register>_<bitfield>_SIZE
 - Bitfield values: AVR32_PWM_<register>_<bitfield>_<value name>

 The following defines are generated if they don't cause ambiguities,
 i.e. the name is unique, or all values with that name are the same.
 - Bitfield mask:   AVR32_PWM_<bitfield>
 - Bitfield offset: AVR32_PWM_<bitfield>_OFFSET
 - Bitfield size:   AVR32_PWM_<bitfield>_SIZE
 - Bitfield values: AVR32_PWM_<bitfield>_<value name>
 - Bitfield values: AVR32_PWM_<value name>

 All defines are sorted alphabetically.
*/


#define AVR32_PWM_CALG                                              8
#define AVR32_PWM_CALG_MASK                                0x00000100
#define AVR32_PWM_CALG_OFFSET                                       8
#define AVR32_PWM_CALG_SIZE                                         1
#define AVR32_PWM_CCK                                      0x00000000
#define AVR32_PWM_CCK_DIV_1024                             0x0000000a
#define AVR32_PWM_CCK_DIV_128                              0x00000007
#define AVR32_PWM_CCK_DIV_16                               0x00000004
#define AVR32_PWM_CCK_DIV_2                                0x00000001
#define AVR32_PWM_CCK_DIV_256                              0x00000008
#define AVR32_PWM_CCK_DIV_32                               0x00000005
#define AVR32_PWM_CCK_DIV_4                                0x00000002
#define AVR32_PWM_CCK_DIV_512                              0x00000009
#define AVR32_PWM_CCK_DIV_64                               0x00000006
#define AVR32_PWM_CCK_DIV_8                                0x00000003
#define AVR32_PWM_CCNT0                                    0x00000214
#define AVR32_PWM_CCNT0_CNT                                         0
#define AVR32_PWM_CCNT0_CNT_MASK                           0x000fffff
#define AVR32_PWM_CCNT0_CNT_OFFSET                                  0
#define AVR32_PWM_CCNT0_CNT_SIZE                                   20
#define AVR32_PWM_CCNT0_MASK                               0x000fffff
#define AVR32_PWM_CCNT0_RESETVALUE                         0x00000000
#define AVR32_PWM_CDTY                                              0
#define AVR32_PWM_CDTY0                                    0x00000204
#define AVR32_PWM_CDTY0_CDTY                                        0
#define AVR32_PWM_CDTY0_CDTY_MASK                          0x000fffff
#define AVR32_PWM_CDTY0_CDTY_OFFSET                                 0
#define AVR32_PWM_CDTY0_CDTY_SIZE                                  20
#define AVR32_PWM_CDTY0_MASK                               0x000fffff
#define AVR32_PWM_CDTY0_RESETVALUE                         0x00000000
#define AVR32_PWM_CDTYUPD                                           0
#define AVR32_PWM_CDTYUPD0                                 0x00000208
#define AVR32_PWM_CDTYUPD0_CDTYUPD                                  0
#define AVR32_PWM_CDTYUPD0_CDTYUPD_MASK                    0x000fffff
#define AVR32_PWM_CDTYUPD0_CDTYUPD_OFFSET                           0
#define AVR32_PWM_CDTYUPD0_CDTYUPD_SIZE                            20
#define AVR32_PWM_CDTYUPD0_MASK                            0x000fffff
#define AVR32_PWM_CDTYUPD0_RESETVALUE                      0x00000000
#define AVR32_PWM_CDTYUPD_MASK                             0x000fffff
#define AVR32_PWM_CDTYUPD_OFFSET                                    0
#define AVR32_PWM_CDTYUPD_SIZE                                     20
#define AVR32_PWM_CDTY_MASK                                0x000fffff
#define AVR32_PWM_CDTY_OFFSET                                       0
#define AVR32_PWM_CDTY_SIZE                                        20
#define AVR32_PWM_CEN                                               0
#define AVR32_PWM_CENUPD                                            0
#define AVR32_PWM_CENUPD_MASK                              0x00000001
#define AVR32_PWM_CENUPD_OFFSET                                     0
#define AVR32_PWM_CENUPD_SIZE                                       1
#define AVR32_PWM_CEN_MASK                                 0x00000001
#define AVR32_PWM_CEN_NO                                   0x00000000
#define AVR32_PWM_CEN_OFFSET                                        0
#define AVR32_PWM_CEN_SIZE                                          1
#define AVR32_PWM_CEN_YES                                  0x00000001
#define AVR32_PWM_CES                                              10
#define AVR32_PWM_CES_MASK                                 0x00000400
#define AVR32_PWM_CES_OFFSET                                       10
#define AVR32_PWM_CES_SIZE                                          1
#define AVR32_PWM_CHID0                                             0
#define AVR32_PWM_CHID0_MASK                               0x00000001
#define AVR32_PWM_CHID0_OFFSET                                      0
#define AVR32_PWM_CHID0_SIZE                                        1
#define AVR32_PWM_CHID1                                             1
#define AVR32_PWM_CHID1_MASK                               0x00000002
#define AVR32_PWM_CHID1_OFFSET                                      1
#define AVR32_PWM_CHID1_SIZE                                        1
#define AVR32_PWM_CHID2                                             2
#define AVR32_PWM_CHID2_MASK                               0x00000004
#define AVR32_PWM_CHID2_OFFSET                                      2
#define AVR32_PWM_CHID2_SIZE                                        1
#define AVR32_PWM_CHID3                                             3
#define AVR32_PWM_CHID3_MASK                               0x00000008
#define AVR32_PWM_CHID3_OFFSET                                      3
#define AVR32_PWM_CHID3_SIZE                                        1
#define AVR32_PWM_CLK                                      0x00000000
#define AVR32_PWM_CLKA                                     0x0000000b
#define AVR32_PWM_CLKB                                     0x0000000c
#define AVR32_PWM_CLKSEL                                           31
#define AVR32_PWM_CLKSEL_MASK                              0x80000000
#define AVR32_PWM_CLKSEL_OFFSET                                    31
#define AVR32_PWM_CLKSEL_SIZE                                       1
#define AVR32_PWM_CLK_CLKSEL                                       31
#define AVR32_PWM_CLK_CLKSEL_MASK                          0x80000000
#define AVR32_PWM_CLK_CLKSEL_OFFSET                                31
#define AVR32_PWM_CLK_CLKSEL_SIZE                                   1
#define AVR32_PWM_CLK_DIVA                                          0
#define AVR32_PWM_CLK_DIVA_CLK_OFF                         0x00000000
#define AVR32_PWM_CLK_DIVA_CLK_SEL_PREA                    0x00000001
#define AVR32_PWM_CLK_DIVA_MASK                            0x000000ff
#define AVR32_PWM_CLK_DIVA_OFFSET                                   0
#define AVR32_PWM_CLK_DIVA_SIZE                                     8
#define AVR32_PWM_CLK_DIVB                                         16
#define AVR32_PWM_CLK_DIVB_CLK_OFF                         0x00000000
#define AVR32_PWM_CLK_DIVB_CLK_SEL_PREB                    0x00000001
#define AVR32_PWM_CLK_DIVB_MASK                            0x00ff0000
#define AVR32_PWM_CLK_DIVB_OFFSET                                  16
#define AVR32_PWM_CLK_DIVB_SIZE                                     8
#define AVR32_PWM_CLK_MASK                                 0x8fff0fff
#define AVR32_PWM_CLK_OFF                                  0x00000000
#define AVR32_PWM_CLK_PREA                                          8
#define AVR32_PWM_CLK_PREA_CCK                             0x00000000
#define AVR32_PWM_CLK_PREA_CCK_DIV_1024                    0x0000000a
#define AVR32_PWM_CLK_PREA_CCK_DIV_128                     0x00000007
#define AVR32_PWM_CLK_PREA_CCK_DIV_16                      0x00000004
#define AVR32_PWM_CLK_PREA_CCK_DIV_2                       0x00000001
#define AVR32_PWM_CLK_PREA_CCK_DIV_256                     0x00000008
#define AVR32_PWM_CLK_PREA_CCK_DIV_32                      0x00000005
#define AVR32_PWM_CLK_PREA_CCK_DIV_4                       0x00000002
#define AVR32_PWM_CLK_PREA_CCK_DIV_512                     0x00000009
#define AVR32_PWM_CLK_PREA_CCK_DIV_64                      0x00000006
#define AVR32_PWM_CLK_PREA_CCK_DIV_8                       0x00000003
#define AVR32_PWM_CLK_PREA_MASK                            0x00000f00
#define AVR32_PWM_CLK_PREA_OFFSET                                   8
#define AVR32_PWM_CLK_PREA_SIZE                                     4
#define AVR32_PWM_CLK_PREB                                         24
#define AVR32_PWM_CLK_PREB_CCK                             0x00000000
#define AVR32_PWM_CLK_PREB_CCK_DIV_1024                    0x0000000a
#define AVR32_PWM_CLK_PREB_CCK_DIV_128                     0x00000007
#define AVR32_PWM_CLK_PREB_CCK_DIV_16                      0x00000004
#define AVR32_PWM_CLK_PREB_CCK_DIV_2                       0x00000001
#define AVR32_PWM_CLK_PREB_CCK_DIV_256                     0x00000008
#define AVR32_PWM_CLK_PREB_CCK_DIV_32                      0x00000005
#define AVR32_PWM_CLK_PREB_CCK_DIV_4                       0x00000002
#define AVR32_PWM_CLK_PREB_CCK_DIV_512                     0x00000009
#define AVR32_PWM_CLK_PREB_CCK_DIV_64                      0x00000006
#define AVR32_PWM_CLK_PREB_CCK_DIV_8                       0x00000003
#define AVR32_PWM_CLK_PREB_MASK                            0x0f000000
#define AVR32_PWM_CLK_PREB_OFFSET                                  24
#define AVR32_PWM_CLK_PREB_SIZE                                     4
#define AVR32_PWM_CLK_RESETVALUE                           0x00000000
#define AVR32_PWM_CLK_SEL_PREA                             0x00000001
#define AVR32_PWM_CLK_SEL_PREB                             0x00000001
#define AVR32_PWM_CLR                                      0x00000001
#define AVR32_PWM_CMP                                      0x00000001
#define AVR32_PWM_CMP0M                                    0x00000138
#define AVR32_PWM_CMP0MUPD                                 0x0000013c
#define AVR32_PWM_CMP0MUPD_CENUPD                                   0
#define AVR32_PWM_CMP0MUPD_CENUPD_MASK                     0x00000001
#define AVR32_PWM_CMP0MUPD_CENUPD_OFFSET                            0
#define AVR32_PWM_CMP0MUPD_CENUPD_SIZE                              1
#define AVR32_PWM_CMP0MUPD_CPRUPD                                   8
#define AVR32_PWM_CMP0MUPD_CPRUPD_MASK                     0x00000f00
#define AVR32_PWM_CMP0MUPD_CPRUPD_OFFSET                            8
#define AVR32_PWM_CMP0MUPD_CPRUPD_SIZE                              4
#define AVR32_PWM_CMP0MUPD_CTRUPD                                   4
#define AVR32_PWM_CMP0MUPD_CTRUPD_MASK                     0x000000f0
#define AVR32_PWM_CMP0MUPD_CTRUPD_OFFSET                            4
#define AVR32_PWM_CMP0MUPD_CTRUPD_SIZE                              4
#define AVR32_PWM_CMP0MUPD_CUPRUPD                                 16
#define AVR32_PWM_CMP0MUPD_CUPRUPD_MASK                    0x000f0000
#define AVR32_PWM_CMP0MUPD_CUPRUPD_OFFSET                          16
#define AVR32_PWM_CMP0MUPD_CUPRUPD_SIZE                             4
#define AVR32_PWM_CMP0MUPD_MASK                            0x000f0ff1
#define AVR32_PWM_CMP0MUPD_RESETVALUE                      0x00000000
#define AVR32_PWM_CMP0M_CEN                                         0
#define AVR32_PWM_CMP0M_CEN_MASK                           0x00000001
#define AVR32_PWM_CMP0M_CEN_NO                             0x00000000
#define AVR32_PWM_CMP0M_CEN_OFFSET                                  0
#define AVR32_PWM_CMP0M_CEN_SIZE                                    1
#define AVR32_PWM_CMP0M_CEN_YES                            0x00000001
#define AVR32_PWM_CMP0M_CPR                                         8
#define AVR32_PWM_CMP0M_CPRCNT                                     12
#define AVR32_PWM_CMP0M_CPRCNT_MASK                        0x0000f000
#define AVR32_PWM_CMP0M_CPRCNT_OFFSET                              12
#define AVR32_PWM_CMP0M_CPRCNT_SIZE                                 4
#define AVR32_PWM_CMP0M_CPR_MASK                           0x00000f00
#define AVR32_PWM_CMP0M_CPR_OFFSET                                  8
#define AVR32_PWM_CMP0M_CPR_SIZE                                    4
#define AVR32_PWM_CMP0M_CTR                                         4
#define AVR32_PWM_CMP0M_CTR_MASK                           0x000000f0
#define AVR32_PWM_CMP0M_CTR_OFFSET                                  4
#define AVR32_PWM_CMP0M_CTR_SIZE                                    4
#define AVR32_PWM_CMP0M_CUPR                                       16
#define AVR32_PWM_CMP0M_CUPRCNT                                    20
#define AVR32_PWM_CMP0M_CUPRCNT_MASK                       0x00f00000
#define AVR32_PWM_CMP0M_CUPRCNT_OFFSET                             20
#define AVR32_PWM_CMP0M_CUPRCNT_SIZE                                4
#define AVR32_PWM_CMP0M_CUPR_MASK                          0x000f0000
#define AVR32_PWM_CMP0M_CUPR_OFFSET                                16
#define AVR32_PWM_CMP0M_CUPR_SIZE                                   4
#define AVR32_PWM_CMP0M_MASK                               0x00fffff1
#define AVR32_PWM_CMP0M_RESETVALUE                         0x00000000
#define AVR32_PWM_CMP0V                                    0x00000130
#define AVR32_PWM_CMP0VUPD                                 0x00000134
#define AVR32_PWM_CMP0VUPD_CVMUPD                                  24
#define AVR32_PWM_CMP0VUPD_CVMUPD_MASK                     0x01000000
#define AVR32_PWM_CMP0VUPD_CVMUPD_OFFSET                           24
#define AVR32_PWM_CMP0VUPD_CVMUPD_SIZE                              1
#define AVR32_PWM_CMP0VUPD_CVUPD                                    0
#define AVR32_PWM_CMP0VUPD_CVUPD_MASK                      0x000fffff
#define AVR32_PWM_CMP0VUPD_CVUPD_OFFSET                             0
#define AVR32_PWM_CMP0VUPD_CVUPD_SIZE                              20
#define AVR32_PWM_CMP0VUPD_MASK                            0x010fffff
#define AVR32_PWM_CMP0VUPD_RESETVALUE                      0x00000000
#define AVR32_PWM_CMP0V_CV                                          0
#define AVR32_PWM_CMP0V_CVM                                        24
#define AVR32_PWM_CMP0V_CVM_DEC                            0x00000001
#define AVR32_PWM_CMP0V_CVM_INC                            0x00000000
#define AVR32_PWM_CMP0V_CVM_MASK                           0x01000000
#define AVR32_PWM_CMP0V_CVM_OFFSET                                 24
#define AVR32_PWM_CMP0V_CVM_SIZE                                    1
#define AVR32_PWM_CMP0V_CV_MASK                            0x000fffff
#define AVR32_PWM_CMP0V_CV_OFFSET                                   0
#define AVR32_PWM_CMP0V_CV_SIZE                                    20
#define AVR32_PWM_CMP0V_MASK                               0x010fffff
#define AVR32_PWM_CMP0V_RESETVALUE                         0x00000000
#define AVR32_PWM_CMPM0                                             8
#define AVR32_PWM_CMPM0_MASK                               0x00000100
#define AVR32_PWM_CMPM0_NO                                 0x00000000
#define AVR32_PWM_CMPM0_OFFSET                                      8
#define AVR32_PWM_CMPM0_SIZE                                        1
#define AVR32_PWM_CMPM0_YES                                0x00000001
#define AVR32_PWM_CMPM1                                             9
#define AVR32_PWM_CMPM1_MASK                               0x00000200
#define AVR32_PWM_CMPM1_NO                                 0x00000000
#define AVR32_PWM_CMPM1_OFFSET                                      9
#define AVR32_PWM_CMPM1_SIZE                                        1
#define AVR32_PWM_CMPM1_YES                                0x00000001
#define AVR32_PWM_CMPM2                                            10
#define AVR32_PWM_CMPM2_MASK                               0x00000400
#define AVR32_PWM_CMPM2_NO                                 0x00000000
#define AVR32_PWM_CMPM2_OFFSET                                     10
#define AVR32_PWM_CMPM2_SIZE                                        1
#define AVR32_PWM_CMPM2_YES                                0x00000001
#define AVR32_PWM_CMPM3                                            11
#define AVR32_PWM_CMPM3_MASK                               0x00000800
#define AVR32_PWM_CMPM3_NO                                 0x00000000
#define AVR32_PWM_CMPM3_OFFSET                                     11
#define AVR32_PWM_CMPM3_SIZE                                        1
#define AVR32_PWM_CMPM3_YES                                0x00000001
#define AVR32_PWM_CMPM4                                            12
#define AVR32_PWM_CMPM4_MASK                               0x00001000
#define AVR32_PWM_CMPM4_NO                                 0x00000000
#define AVR32_PWM_CMPM4_OFFSET                                     12
#define AVR32_PWM_CMPM4_SIZE                                        1
#define AVR32_PWM_CMPM4_YES                                0x00000001
#define AVR32_PWM_CMPM5                                            13
#define AVR32_PWM_CMPM5_MASK                               0x00002000
#define AVR32_PWM_CMPM5_NO                                 0x00000000
#define AVR32_PWM_CMPM5_OFFSET                                     13
#define AVR32_PWM_CMPM5_SIZE                                        1
#define AVR32_PWM_CMPM5_YES                                0x00000001
#define AVR32_PWM_CMPM6                                            14
#define AVR32_PWM_CMPM6_MASK                               0x00004000
#define AVR32_PWM_CMPM6_NO                                 0x00000000
#define AVR32_PWM_CMPM6_OFFSET                                     14
#define AVR32_PWM_CMPM6_SIZE                                        1
#define AVR32_PWM_CMPM6_YES                                0x00000001
#define AVR32_PWM_CMPM7                                            15
#define AVR32_PWM_CMPM7_MASK                               0x00008000
#define AVR32_PWM_CMPM7_NO                                 0x00000000
#define AVR32_PWM_CMPM7_OFFSET                                     15
#define AVR32_PWM_CMPM7_SIZE                                        1
#define AVR32_PWM_CMPM7_YES                                0x00000001
#define AVR32_PWM_CMPU0                                            16
#define AVR32_PWM_CMPU0_MASK                               0x00010000
#define AVR32_PWM_CMPU0_NO                                 0x00000000
#define AVR32_PWM_CMPU0_OFFSET                                     16
#define AVR32_PWM_CMPU0_SIZE                                        1
#define AVR32_PWM_CMPU0_YES                                0x00000001
#define AVR32_PWM_CMPU1                                            17
#define AVR32_PWM_CMPU1_MASK                               0x00020000
#define AVR32_PWM_CMPU1_NO                                 0x00000000
#define AVR32_PWM_CMPU1_OFFSET                                     17
#define AVR32_PWM_CMPU1_SIZE                                        1
#define AVR32_PWM_CMPU1_YES                                0x00000001
#define AVR32_PWM_CMPU2                                            18
#define AVR32_PWM_CMPU2_MASK                               0x00040000
#define AVR32_PWM_CMPU2_NO                                 0x00000000
#define AVR32_PWM_CMPU2_OFFSET                                     18
#define AVR32_PWM_CMPU2_SIZE                                        1
#define AVR32_PWM_CMPU2_YES                                0x00000001
#define AVR32_PWM_CMPU3                                            19
#define AVR32_PWM_CMPU3_MASK                               0x00080000
#define AVR32_PWM_CMPU3_NO                                 0x00000000
#define AVR32_PWM_CMPU3_OFFSET                                     19
#define AVR32_PWM_CMPU3_SIZE                                        1
#define AVR32_PWM_CMPU3_YES                                0x00000001
#define AVR32_PWM_CMPU4                                            20
#define AVR32_PWM_CMPU4_MASK                               0x00100000
#define AVR32_PWM_CMPU4_NO                                 0x00000000
#define AVR32_PWM_CMPU4_OFFSET                                     20
#define AVR32_PWM_CMPU4_SIZE                                        1
#define AVR32_PWM_CMPU4_YES                                0x00000001
#define AVR32_PWM_CMPU5                                            21
#define AVR32_PWM_CMPU5_MASK                               0x00200000
#define AVR32_PWM_CMPU5_NO                                 0x00000000
#define AVR32_PWM_CMPU5_OFFSET                                     21
#define AVR32_PWM_CMPU5_SIZE                                        1
#define AVR32_PWM_CMPU5_YES                                0x00000001
#define AVR32_PWM_CMPU6                                            22
#define AVR32_PWM_CMPU6_MASK                               0x00400000
#define AVR32_PWM_CMPU6_NO                                 0x00000000
#define AVR32_PWM_CMPU6_OFFSET                                     22
#define AVR32_PWM_CMPU6_SIZE                                        1
#define AVR32_PWM_CMPU6_YES                                0x00000001
#define AVR32_PWM_CMPU7                                            23
#define AVR32_PWM_CMPU7_MASK                               0x00800000
#define AVR32_PWM_CMPU7_NO                                 0x00000000
#define AVR32_PWM_CMPU7_OFFSET                                     23
#define AVR32_PWM_CMPU7_SIZE                                        1
#define AVR32_PWM_CMPU7_YES                                0x00000001
#define AVR32_PWM_CMR0                                     0x00000200
#define AVR32_PWM_CMR0_CALG                                         8
#define AVR32_PWM_CMR0_CALG_MASK                           0x00000100
#define AVR32_PWM_CMR0_CALG_OFFSET                                  8
#define AVR32_PWM_CMR0_CALG_SIZE                                    1
#define AVR32_PWM_CMR0_CES                                         10
#define AVR32_PWM_CMR0_CES_MASK                            0x00000400
#define AVR32_PWM_CMR0_CES_OFFSET                                  10
#define AVR32_PWM_CMR0_CES_SIZE                                     1
#define AVR32_PWM_CMR0_CPOL                                         9
#define AVR32_PWM_CMR0_CPOL_MASK                           0x00000200
#define AVR32_PWM_CMR0_CPOL_OFFSET                                  9
#define AVR32_PWM_CMR0_CPOL_SIZE                                    1
#define AVR32_PWM_CMR0_CPRE                                         0
#define AVR32_PWM_CMR0_CPRE_CCK                            0x00000000
#define AVR32_PWM_CMR0_CPRE_CCK_DIV_1024                   0x0000000a
#define AVR32_PWM_CMR0_CPRE_CCK_DIV_128                    0x00000007
#define AVR32_PWM_CMR0_CPRE_CCK_DIV_16                     0x00000004
#define AVR32_PWM_CMR0_CPRE_CCK_DIV_2                      0x00000001
#define AVR32_PWM_CMR0_CPRE_CCK_DIV_256                    0x00000008
#define AVR32_PWM_CMR0_CPRE_CCK_DIV_32                     0x00000005
#define AVR32_PWM_CMR0_CPRE_CCK_DIV_4                      0x00000002
#define AVR32_PWM_CMR0_CPRE_CCK_DIV_512                    0x00000009
#define AVR32_PWM_CMR0_CPRE_CCK_DIV_64                     0x00000006
#define AVR32_PWM_CMR0_CPRE_CCK_DIV_8                      0x00000003
#define AVR32_PWM_CMR0_CPRE_CLKA                           0x0000000b
#define AVR32_PWM_CMR0_CPRE_CLKB                           0x0000000c
#define AVR32_PWM_CMR0_CPRE_MASK                           0x0000000f
#define AVR32_PWM_CMR0_CPRE_OFFSET                                  0
#define AVR32_PWM_CMR0_CPRE_SIZE                                    4
#define AVR32_PWM_CMR0_DTE                                         16
#define AVR32_PWM_CMR0_DTE_MASK                            0x00010000
#define AVR32_PWM_CMR0_DTE_OFFSET                                  16
#define AVR32_PWM_CMR0_DTE_SIZE                                     1
#define AVR32_PWM_CMR0_DTHI                                        17
#define AVR32_PWM_CMR0_DTHI_MASK                           0x00020000
#define AVR32_PWM_CMR0_DTHI_OFFSET                                 17
#define AVR32_PWM_CMR0_DTHI_SIZE                                    1
#define AVR32_PWM_CMR0_DTLI                                        18
#define AVR32_PWM_CMR0_DTLI_MASK                           0x00040000
#define AVR32_PWM_CMR0_DTLI_OFFSET                                 18
#define AVR32_PWM_CMR0_DTLI_SIZE                                    1
#define AVR32_PWM_CMR0_MASK                                0x0007070f
#define AVR32_PWM_CMR0_RESETVALUE                          0x00000000
#define AVR32_PWM_CNT                                               0
#define AVR32_PWM_CNT_MASK                                 0x000fffff
#define AVR32_PWM_CNT_OFFSET                                        0
#define AVR32_PWM_CNT_SIZE                                         20
#define AVR32_PWM_CPOL                                              9
#define AVR32_PWM_CPOL_MASK                                0x00000200
#define AVR32_PWM_CPOL_OFFSET                                       9
#define AVR32_PWM_CPOL_SIZE                                         1
#define AVR32_PWM_CPR                                               8
#define AVR32_PWM_CPRCNT                                           12
#define AVR32_PWM_CPRCNT_MASK                              0x0000f000
#define AVR32_PWM_CPRCNT_OFFSET                                    12
#define AVR32_PWM_CPRCNT_SIZE                                       4
#define AVR32_PWM_CPRD                                              0
#define AVR32_PWM_CPRD0                                    0x0000020c
#define AVR32_PWM_CPRD0_CPRD                                        0
#define AVR32_PWM_CPRD0_CPRD_MASK                          0x000fffff
#define AVR32_PWM_CPRD0_CPRD_OFFSET                                 0
#define AVR32_PWM_CPRD0_CPRD_SIZE                                  20
#define AVR32_PWM_CPRD0_MASK                               0x000fffff
#define AVR32_PWM_CPRD0_RESETVALUE                         0x00000000
#define AVR32_PWM_CPRDUPD                                           0
#define AVR32_PWM_CPRDUPD0                                 0x00000210
#define AVR32_PWM_CPRDUPD0_CPRDUPD                                  0
#define AVR32_PWM_CPRDUPD0_CPRDUPD_MASK                    0x000fffff
#define AVR32_PWM_CPRDUPD0_CPRDUPD_OFFSET                           0
#define AVR32_PWM_CPRDUPD0_CPRDUPD_SIZE                            20
#define AVR32_PWM_CPRDUPD0_MASK                            0x000fffff
#define AVR32_PWM_CPRDUPD0_RESETVALUE                      0x00000000
#define AVR32_PWM_CPRDUPD_MASK                             0x000fffff
#define AVR32_PWM_CPRDUPD_OFFSET                                    0
#define AVR32_PWM_CPRDUPD_SIZE                                     20
#define AVR32_PWM_CPRD_MASK                                0x000fffff
#define AVR32_PWM_CPRD_OFFSET                                       0
#define AVR32_PWM_CPRD_SIZE                                        20
#define AVR32_PWM_CPRE                                              0
#define AVR32_PWM_CPRE_CCK                                 0x00000000
#define AVR32_PWM_CPRE_CCK_DIV_1024                        0x0000000a
#define AVR32_PWM_CPRE_CCK_DIV_128                         0x00000007
#define AVR32_PWM_CPRE_CCK_DIV_16                          0x00000004
#define AVR32_PWM_CPRE_CCK_DIV_2                           0x00000001
#define AVR32_PWM_CPRE_CCK_DIV_256                         0x00000008
#define AVR32_PWM_CPRE_CCK_DIV_32                          0x00000005
#define AVR32_PWM_CPRE_CCK_DIV_4                           0x00000002
#define AVR32_PWM_CPRE_CCK_DIV_512                         0x00000009
#define AVR32_PWM_CPRE_CCK_DIV_64                          0x00000006
#define AVR32_PWM_CPRE_CCK_DIV_8                           0x00000003
#define AVR32_PWM_CPRE_CLKA                                0x0000000b
#define AVR32_PWM_CPRE_CLKB                                0x0000000c
#define AVR32_PWM_CPRE_MASK                                0x0000000f
#define AVR32_PWM_CPRE_OFFSET                                       0
#define AVR32_PWM_CPRE_SIZE                                         4
#define AVR32_PWM_CPRUPD                                            8
#define AVR32_PWM_CPRUPD_MASK                              0x00000f00
#define AVR32_PWM_CPRUPD_OFFSET                                     8
#define AVR32_PWM_CPRUPD_SIZE                                       4
#define AVR32_PWM_CPR_MASK                                 0x00000f00
#define AVR32_PWM_CPR_OFFSET                                        8
#define AVR32_PWM_CPR_SIZE                                          4
#define AVR32_PWM_CSEL0                                             0
#define AVR32_PWM_CSEL0_MASK                               0x00000001
#define AVR32_PWM_CSEL0_NO                                 0x00000000
#define AVR32_PWM_CSEL0_OFFSET                                      0
#define AVR32_PWM_CSEL0_SIZE                                        1
#define AVR32_PWM_CSEL0_YES                                0x00000001
#define AVR32_PWM_CSEL1                                             1
#define AVR32_PWM_CSEL1_MASK                               0x00000002
#define AVR32_PWM_CSEL1_OFFSET                                      1
#define AVR32_PWM_CSEL1_SIZE                                        1
#define AVR32_PWM_CSEL2                                             2
#define AVR32_PWM_CSEL2_MASK                               0x00000004
#define AVR32_PWM_CSEL2_OFFSET                                      2
#define AVR32_PWM_CSEL2_SIZE                                        1
#define AVR32_PWM_CSEL3                                             3
#define AVR32_PWM_CSEL3_MASK                               0x00000008
#define AVR32_PWM_CSEL3_OFFSET                                      3
#define AVR32_PWM_CSEL3_SIZE                                        1
#define AVR32_PWM_CSEL4                                             4
#define AVR32_PWM_CSEL4_MASK                               0x00000010
#define AVR32_PWM_CSEL4_OFFSET                                      4
#define AVR32_PWM_CSEL4_SIZE                                        1
#define AVR32_PWM_CSEL5                                             5
#define AVR32_PWM_CSEL5_MASK                               0x00000020
#define AVR32_PWM_CSEL5_OFFSET                                      5
#define AVR32_PWM_CSEL5_SIZE                                        1
#define AVR32_PWM_CSEL6                                             6
#define AVR32_PWM_CSEL6_MASK                               0x00000040
#define AVR32_PWM_CSEL6_OFFSET                                      6
#define AVR32_PWM_CSEL6_SIZE                                        1
#define AVR32_PWM_CSEL7                                             7
#define AVR32_PWM_CSEL7_MASK                               0x00000080
#define AVR32_PWM_CSEL7_OFFSET                                      7
#define AVR32_PWM_CSEL7_SIZE                                        1
#define AVR32_PWM_CTR                                               4
#define AVR32_PWM_CTRUPD                                            4
#define AVR32_PWM_CTRUPD_MASK                              0x000000f0
#define AVR32_PWM_CTRUPD_OFFSET                                     4
#define AVR32_PWM_CTRUPD_SIZE                                       4
#define AVR32_PWM_CTR_MASK                                 0x000000f0
#define AVR32_PWM_CTR_OFFSET                                        4
#define AVR32_PWM_CTR_SIZE                                          4
#define AVR32_PWM_CUPR                                             16
#define AVR32_PWM_CUPRCNT                                          20
#define AVR32_PWM_CUPRCNT_MASK                             0x00f00000
#define AVR32_PWM_CUPRCNT_OFFSET                                   20
#define AVR32_PWM_CUPRCNT_SIZE                                      4
#define AVR32_PWM_CUPRUPD                                          16
#define AVR32_PWM_CUPRUPD_MASK                             0x000f0000
#define AVR32_PWM_CUPRUPD_OFFSET                                   16
#define AVR32_PWM_CUPRUPD_SIZE                                      4
#define AVR32_PWM_CUPR_MASK                                0x000f0000
#define AVR32_PWM_CUPR_OFFSET                                      16
#define AVR32_PWM_CUPR_SIZE                                         4
#define AVR32_PWM_CV                                                0
#define AVR32_PWM_CVM                                              24
#define AVR32_PWM_CVMUPD                                           24
#define AVR32_PWM_CVMUPD_MASK                              0x01000000
#define AVR32_PWM_CVMUPD_OFFSET                                    24
#define AVR32_PWM_CVMUPD_SIZE                                       1
#define AVR32_PWM_CVM_DEC                                  0x00000001
#define AVR32_PWM_CVM_INC                                  0x00000000
#define AVR32_PWM_CVM_MASK                                 0x01000000
#define AVR32_PWM_CVM_OFFSET                                       24
#define AVR32_PWM_CVM_SIZE                                          1
#define AVR32_PWM_CVUPD                                             0
#define AVR32_PWM_CVUPD_MASK                               0x000fffff
#define AVR32_PWM_CVUPD_OFFSET                                      0
#define AVR32_PWM_CVUPD_SIZE                                       20
#define AVR32_PWM_CV_MASK                                  0x000fffff
#define AVR32_PWM_CV_OFFSET                                         0
#define AVR32_PWM_CV_SIZE                                          20
#define AVR32_PWM_DEC                                      0x00000001
#define AVR32_PWM_DIS                                      0x00000008
#define AVR32_PWM_DIS_CHID0                                         0
#define AVR32_PWM_DIS_CHID0_MASK                           0x00000001
#define AVR32_PWM_DIS_CHID0_OFFSET                                  0
#define AVR32_PWM_DIS_CHID0_SIZE                                    1
#define AVR32_PWM_DIS_CHID1                                         1
#define AVR32_PWM_DIS_CHID1_MASK                           0x00000002
#define AVR32_PWM_DIS_CHID1_OFFSET                                  1
#define AVR32_PWM_DIS_CHID1_SIZE                                    1
#define AVR32_PWM_DIS_CHID2                                         2
#define AVR32_PWM_DIS_CHID2_MASK                           0x00000004
#define AVR32_PWM_DIS_CHID2_OFFSET                                  2
#define AVR32_PWM_DIS_CHID2_SIZE                                    1
#define AVR32_PWM_DIS_CHID3                                         3
#define AVR32_PWM_DIS_CHID3_MASK                           0x00000008
#define AVR32_PWM_DIS_CHID3_OFFSET                                  3
#define AVR32_PWM_DIS_CHID3_SIZE                                    1
#define AVR32_PWM_DIS_MASK                                 0x0000000f
#define AVR32_PWM_DIS_RESETVALUE                           0x00000000
#define AVR32_PWM_DIVA                                              0
#define AVR32_PWM_DIVA_CLK_OFF                             0x00000000
#define AVR32_PWM_DIVA_CLK_SEL_PREA                        0x00000001
#define AVR32_PWM_DIVA_MASK                                0x000000ff
#define AVR32_PWM_DIVA_OFFSET                                       0
#define AVR32_PWM_DIVA_SIZE                                         8
#define AVR32_PWM_DIVB                                             16
#define AVR32_PWM_DIVB_CLK_OFF                             0x00000000
#define AVR32_PWM_DIVB_CLK_SEL_PREB                        0x00000001
#define AVR32_PWM_DIVB_MASK                                0x00ff0000
#define AVR32_PWM_DIVB_OFFSET                                      16
#define AVR32_PWM_DIVB_SIZE                                         8
#define AVR32_PWM_DT0                                      0x00000218
#define AVR32_PWM_DT0_DTH                                           0
#define AVR32_PWM_DT0_DTH_MASK                             0x0000ffff
#define AVR32_PWM_DT0_DTH_OFFSET                                    0
#define AVR32_PWM_DT0_DTH_SIZE                                     16
#define AVR32_PWM_DT0_DTL                                          16
#define AVR32_PWM_DT0_DTL_MASK                             0xffff0000
#define AVR32_PWM_DT0_DTL_OFFSET                                   16
#define AVR32_PWM_DT0_DTL_SIZE                                     16
#define AVR32_PWM_DT0_MASK                                 0xffffffff
#define AVR32_PWM_DT0_RESETVALUE                           0x00000000
#define AVR32_PWM_DTE                                              16
#define AVR32_PWM_DTE_MASK                                 0x00010000
#define AVR32_PWM_DTE_OFFSET                                       16
#define AVR32_PWM_DTE_SIZE                                          1
#define AVR32_PWM_DTH                                               0
#define AVR32_PWM_DTHI                                             17
#define AVR32_PWM_DTHI_MASK                                0x00020000
#define AVR32_PWM_DTHI_OFFSET                                      17
#define AVR32_PWM_DTHI_SIZE                                         1
#define AVR32_PWM_DTHUPD                                            0
#define AVR32_PWM_DTHUPD_MASK                              0x0000ffff
#define AVR32_PWM_DTHUPD_OFFSET                                     0
#define AVR32_PWM_DTHUPD_SIZE                                      16
#define AVR32_PWM_DTH_MASK                                 0x0000ffff
#define AVR32_PWM_DTH_OFFSET                                        0
#define AVR32_PWM_DTH_SIZE                                         16
#define AVR32_PWM_DTL                                              16
#define AVR32_PWM_DTLI                                             18
#define AVR32_PWM_DTLI_MASK                                0x00040000
#define AVR32_PWM_DTLI_OFFSET                                      18
#define AVR32_PWM_DTLI_SIZE                                         1
#define AVR32_PWM_DTLUPD                                           16
#define AVR32_PWM_DTLUPD_MASK                              0xffff0000
#define AVR32_PWM_DTLUPD_OFFSET                                    16
#define AVR32_PWM_DTLUPD_SIZE                                      16
#define AVR32_PWM_DTL_MASK                                 0xffff0000
#define AVR32_PWM_DTL_OFFSET                                       16
#define AVR32_PWM_DTL_SIZE                                         16
#define AVR32_PWM_DTUPD0                                   0x0000021c
#define AVR32_PWM_DTUPD0_DTHUPD                                     0
#define AVR32_PWM_DTUPD0_DTHUPD_MASK                       0x0000ffff
#define AVR32_PWM_DTUPD0_DTHUPD_OFFSET                              0
#define AVR32_PWM_DTUPD0_DTHUPD_SIZE                               16
#define AVR32_PWM_DTUPD0_DTLUPD                                    16
#define AVR32_PWM_DTUPD0_DTLUPD_MASK                       0xffff0000
#define AVR32_PWM_DTUPD0_DTLUPD_OFFSET                             16
#define AVR32_PWM_DTUPD0_DTLUPD_SIZE                               16
#define AVR32_PWM_DTUPD0_MASK                              0xffffffff
#define AVR32_PWM_DTUPD0_RESETVALUE                        0x00000000
#define AVR32_PWM_EL0MR                                    0x0000007c
#define AVR32_PWM_EL0MR_CSEL0                                       0
#define AVR32_PWM_EL0MR_CSEL0_MASK                         0x00000001
#define AVR32_PWM_EL0MR_CSEL0_NO                           0x00000000
#define AVR32_PWM_EL0MR_CSEL0_OFFSET                                0
#define AVR32_PWM_EL0MR_CSEL0_SIZE                                  1
#define AVR32_PWM_EL0MR_CSEL0_YES                          0x00000001
#define AVR32_PWM_EL0MR_CSEL1                                       1
#define AVR32_PWM_EL0MR_CSEL1_MASK                         0x00000002
#define AVR32_PWM_EL0MR_CSEL1_OFFSET                                1
#define AVR32_PWM_EL0MR_CSEL1_SIZE                                  1
#define AVR32_PWM_EL0MR_CSEL2                                       2
#define AVR32_PWM_EL0MR_CSEL2_MASK                         0x00000004
#define AVR32_PWM_EL0MR_CSEL2_OFFSET                                2
#define AVR32_PWM_EL0MR_CSEL2_SIZE                                  1
#define AVR32_PWM_EL0MR_CSEL3                                       3
#define AVR32_PWM_EL0MR_CSEL3_MASK                         0x00000008
#define AVR32_PWM_EL0MR_CSEL3_OFFSET                                3
#define AVR32_PWM_EL0MR_CSEL3_SIZE                                  1
#define AVR32_PWM_EL0MR_CSEL4                                       4
#define AVR32_PWM_EL0MR_CSEL4_MASK                         0x00000010
#define AVR32_PWM_EL0MR_CSEL4_OFFSET                                4
#define AVR32_PWM_EL0MR_CSEL4_SIZE                                  1
#define AVR32_PWM_EL0MR_CSEL5                                       5
#define AVR32_PWM_EL0MR_CSEL5_MASK                         0x00000020
#define AVR32_PWM_EL0MR_CSEL5_OFFSET                                5
#define AVR32_PWM_EL0MR_CSEL5_SIZE                                  1
#define AVR32_PWM_EL0MR_CSEL6                                       6
#define AVR32_PWM_EL0MR_CSEL6_MASK                         0x00000040
#define AVR32_PWM_EL0MR_CSEL6_OFFSET                                6
#define AVR32_PWM_EL0MR_CSEL6_SIZE                                  1
#define AVR32_PWM_EL0MR_CSEL7                                       7
#define AVR32_PWM_EL0MR_CSEL7_MASK                         0x00000080
#define AVR32_PWM_EL0MR_CSEL7_OFFSET                                7
#define AVR32_PWM_EL0MR_CSEL7_SIZE                                  1
#define AVR32_PWM_EL0MR_MASK                               0x000000ff
#define AVR32_PWM_EL0MR_RESETVALUE                         0x00000000
#define AVR32_PWM_ENA                                      0x00000004
#define AVR32_PWM_ENA_CHID0                                         0
#define AVR32_PWM_ENA_CHID0_MASK                           0x00000001
#define AVR32_PWM_ENA_CHID0_OFFSET                                  0
#define AVR32_PWM_ENA_CHID0_SIZE                                    1
#define AVR32_PWM_ENA_CHID1                                         1
#define AVR32_PWM_ENA_CHID1_MASK                           0x00000002
#define AVR32_PWM_ENA_CHID1_OFFSET                                  1
#define AVR32_PWM_ENA_CHID1_SIZE                                    1
#define AVR32_PWM_ENA_CHID2                                         2
#define AVR32_PWM_ENA_CHID2_MASK                           0x00000004
#define AVR32_PWM_ENA_CHID2_OFFSET                                  2
#define AVR32_PWM_ENA_CHID2_SIZE                                    1
#define AVR32_PWM_ENA_CHID3                                         3
#define AVR32_PWM_ENA_CHID3_MASK                           0x00000008
#define AVR32_PWM_ENA_CHID3_OFFSET                                  3
#define AVR32_PWM_ENA_CHID3_SIZE                                    1
#define AVR32_PWM_ENA_MASK                                 0x0000000f
#define AVR32_PWM_ENA_RESETVALUE                           0x00000000
#define AVR32_PWM_ENDTX                                             1
#define AVR32_PWM_ENDTX_MASK                               0x00000002
#define AVR32_PWM_ENDTX_OFFSET                                      1
#define AVR32_PWM_ENDTX_SIZE                                        1
#define AVR32_PWM_FCHID0                                           16
#define AVR32_PWM_FCHID0_MASK                              0x00010000
#define AVR32_PWM_FCHID0_OFFSET                                    16
#define AVR32_PWM_FCHID0_SIZE                                       1
#define AVR32_PWM_FCHID1                                           17
#define AVR32_PWM_FCHID1_MASK                              0x00020000
#define AVR32_PWM_FCHID1_OFFSET                                    17
#define AVR32_PWM_FCHID1_SIZE                                       1
#define AVR32_PWM_FCHID2                                           18
#define AVR32_PWM_FCHID2_MASK                              0x00040000
#define AVR32_PWM_FCHID2_OFFSET                                    18
#define AVR32_PWM_FCHID2_SIZE                                       1
#define AVR32_PWM_FCHID3                                           19
#define AVR32_PWM_FCHID3_MASK                              0x00080000
#define AVR32_PWM_FCHID3_OFFSET                                    19
#define AVR32_PWM_FCHID3_SIZE                                       1
#define AVR32_PWM_FCLR0                                             0
#define AVR32_PWM_FCLR0_MASK                               0x00000001
#define AVR32_PWM_FCLR0_OFFSET                                      0
#define AVR32_PWM_FCLR0_SIZE                                        1
#define AVR32_PWM_FCLR1                                             1
#define AVR32_PWM_FCLR1_MASK                               0x00000002
#define AVR32_PWM_FCLR1_OFFSET                                      1
#define AVR32_PWM_FCLR1_SIZE                                        1
#define AVR32_PWM_FCLR2                                             2
#define AVR32_PWM_FCLR2_MASK                               0x00000004
#define AVR32_PWM_FCLR2_OFFSET                                      2
#define AVR32_PWM_FCLR2_SIZE                                        1
#define AVR32_PWM_FCLR3                                             3
#define AVR32_PWM_FCLR3_MASK                               0x00000008
#define AVR32_PWM_FCLR3_OFFSET                                      3
#define AVR32_PWM_FCLR3_SIZE                                        1
#define AVR32_PWM_FCLR4                                             4
#define AVR32_PWM_FCLR4_MASK                               0x00000010
#define AVR32_PWM_FCLR4_OFFSET                                      4
#define AVR32_PWM_FCLR4_SIZE                                        1
#define AVR32_PWM_FCR                                      0x00000064
#define AVR32_PWM_FCR_FCLR0                                         0
#define AVR32_PWM_FCR_FCLR0_MASK                           0x00000001
#define AVR32_PWM_FCR_FCLR0_OFFSET                                  0
#define AVR32_PWM_FCR_FCLR0_SIZE                                    1
#define AVR32_PWM_FCR_FCLR1                                         1
#define AVR32_PWM_FCR_FCLR1_MASK                           0x00000002
#define AVR32_PWM_FCR_FCLR1_OFFSET                                  1
#define AVR32_PWM_FCR_FCLR1_SIZE                                    1
#define AVR32_PWM_FCR_FCLR2                                         2
#define AVR32_PWM_FCR_FCLR2_MASK                           0x00000004
#define AVR32_PWM_FCR_FCLR2_OFFSET                                  2
#define AVR32_PWM_FCR_FCLR2_SIZE                                    1
#define AVR32_PWM_FCR_FCLR3                                         3
#define AVR32_PWM_FCR_FCLR3_MASK                           0x00000008
#define AVR32_PWM_FCR_FCLR3_OFFSET                                  3
#define AVR32_PWM_FCR_FCLR3_SIZE                                    1
#define AVR32_PWM_FCR_FCLR4                                         4
#define AVR32_PWM_FCR_FCLR4_MASK                           0x00000010
#define AVR32_PWM_FCR_FCLR4_OFFSET                                  4
#define AVR32_PWM_FCR_FCLR4_SIZE                                    1
#define AVR32_PWM_FCR_MASK                                 0x0000001f
#define AVR32_PWM_FCR_RESETVALUE                           0x00000000
#define AVR32_PWM_FFIL0                                            16
#define AVR32_PWM_FFIL0_MASK                               0x00010000
#define AVR32_PWM_FFIL0_NO                                 0x00000000
#define AVR32_PWM_FFIL0_OFFSET                                     16
#define AVR32_PWM_FFIL0_SIZE                                        1
#define AVR32_PWM_FFIL0_YES                                0x00000001
#define AVR32_PWM_FFIL1                                            17
#define AVR32_PWM_FFIL1_MASK                               0x00020000
#define AVR32_PWM_FFIL1_OFFSET                                     17
#define AVR32_PWM_FFIL1_SIZE                                        1
#define AVR32_PWM_FFIL2                                            18
#define AVR32_PWM_FFIL2_MASK                               0x00040000
#define AVR32_PWM_FFIL2_OFFSET                                     18
#define AVR32_PWM_FFIL2_SIZE                                        1
#define AVR32_PWM_FFIL3                                            19
#define AVR32_PWM_FFIL3_MASK                               0x00080000
#define AVR32_PWM_FFIL3_OFFSET                                     19
#define AVR32_PWM_FFIL3_SIZE                                        1
#define AVR32_PWM_FFIL4                                            20
#define AVR32_PWM_FFIL4_MASK                               0x00100000
#define AVR32_PWM_FFIL4_OFFSET                                     20
#define AVR32_PWM_FFIL4_SIZE                                        1
#define AVR32_PWM_FIV0                                              0
#define AVR32_PWM_FIV0_MASK                                0x00000001
#define AVR32_PWM_FIV0_OFFSET                                       0
#define AVR32_PWM_FIV0_SIZE                                         1
#define AVR32_PWM_FIV1                                              1
#define AVR32_PWM_FIV1_MASK                                0x00000002
#define AVR32_PWM_FIV1_OFFSET                                       1
#define AVR32_PWM_FIV1_SIZE                                         1
#define AVR32_PWM_FIV2                                              2
#define AVR32_PWM_FIV2_MASK                                0x00000004
#define AVR32_PWM_FIV2_OFFSET                                       2
#define AVR32_PWM_FIV2_SIZE                                         1
#define AVR32_PWM_FIV3                                              3
#define AVR32_PWM_FIV3_MASK                                0x00000008
#define AVR32_PWM_FIV3_OFFSET                                       3
#define AVR32_PWM_FIV3_SIZE                                         1
#define AVR32_PWM_FIV4                                              4
#define AVR32_PWM_FIV4_MASK                                0x00000010
#define AVR32_PWM_FIV4_OFFSET                                       4
#define AVR32_PWM_FIV4_SIZE                                         1
#define AVR32_PWM_FMOD0                                             8
#define AVR32_PWM_FMOD0_CLR                                0x00000001
#define AVR32_PWM_FMOD0_LEV                                0x00000000
#define AVR32_PWM_FMOD0_MASK                               0x00000100
#define AVR32_PWM_FMOD0_OFFSET                                      8
#define AVR32_PWM_FMOD0_SIZE                                        1
#define AVR32_PWM_FMOD1                                             9
#define AVR32_PWM_FMOD1_MASK                               0x00000200
#define AVR32_PWM_FMOD1_OFFSET                                      9
#define AVR32_PWM_FMOD1_SIZE                                        1
#define AVR32_PWM_FMOD2                                            10
#define AVR32_PWM_FMOD2_MASK                               0x00000400
#define AVR32_PWM_FMOD2_OFFSET                                     10
#define AVR32_PWM_FMOD2_SIZE                                        1
#define AVR32_PWM_FMOD3                                            11
#define AVR32_PWM_FMOD3_MASK                               0x00000800
#define AVR32_PWM_FMOD3_OFFSET                                     11
#define AVR32_PWM_FMOD3_SIZE                                        1
#define AVR32_PWM_FMOD4                                            12
#define AVR32_PWM_FMOD4_MASK                               0x00001000
#define AVR32_PWM_FMOD4_OFFSET                                     12
#define AVR32_PWM_FMOD4_SIZE                                        1
#define AVR32_PWM_FMR                                      0x0000005c
#define AVR32_PWM_FMR_FFIL0                                        16
#define AVR32_PWM_FMR_FFIL0_MASK                           0x00010000
#define AVR32_PWM_FMR_FFIL0_NO                             0x00000000
#define AVR32_PWM_FMR_FFIL0_OFFSET                                 16
#define AVR32_PWM_FMR_FFIL0_SIZE                                    1
#define AVR32_PWM_FMR_FFIL0_YES                            0x00000001
#define AVR32_PWM_FMR_FFIL1                                        17
#define AVR32_PWM_FMR_FFIL1_MASK                           0x00020000
#define AVR32_PWM_FMR_FFIL1_OFFSET                                 17
#define AVR32_PWM_FMR_FFIL1_SIZE                                    1
#define AVR32_PWM_FMR_FFIL2                                        18
#define AVR32_PWM_FMR_FFIL2_MASK                           0x00040000
#define AVR32_PWM_FMR_FFIL2_OFFSET                                 18
#define AVR32_PWM_FMR_FFIL2_SIZE                                    1
#define AVR32_PWM_FMR_FFIL3                                        19
#define AVR32_PWM_FMR_FFIL3_MASK                           0x00080000
#define AVR32_PWM_FMR_FFIL3_OFFSET                                 19
#define AVR32_PWM_FMR_FFIL3_SIZE                                    1
#define AVR32_PWM_FMR_FFIL4                                        20
#define AVR32_PWM_FMR_FFIL4_MASK                           0x00100000
#define AVR32_PWM_FMR_FFIL4_OFFSET                                 20
#define AVR32_PWM_FMR_FFIL4_SIZE                                    1
#define AVR32_PWM_FMR_FMOD0                                         8
#define AVR32_PWM_FMR_FMOD0_CLR                            0x00000001
#define AVR32_PWM_FMR_FMOD0_LEV                            0x00000000
#define AVR32_PWM_FMR_FMOD0_MASK                           0x00000100
#define AVR32_PWM_FMR_FMOD0_OFFSET                                  8
#define AVR32_PWM_FMR_FMOD0_SIZE                                    1
#define AVR32_PWM_FMR_FMOD1                                         9
#define AVR32_PWM_FMR_FMOD1_MASK                           0x00000200
#define AVR32_PWM_FMR_FMOD1_OFFSET                                  9
#define AVR32_PWM_FMR_FMOD1_SIZE                                    1
#define AVR32_PWM_FMR_FMOD2                                        10
#define AVR32_PWM_FMR_FMOD2_MASK                           0x00000400
#define AVR32_PWM_FMR_FMOD2_OFFSET                                 10
#define AVR32_PWM_FMR_FMOD2_SIZE                                    1
#define AVR32_PWM_FMR_FMOD3                                        11
#define AVR32_PWM_FMR_FMOD3_MASK                           0x00000800
#define AVR32_PWM_FMR_FMOD3_OFFSET                                 11
#define AVR32_PWM_FMR_FMOD3_SIZE                                    1
#define AVR32_PWM_FMR_FMOD4                                        12
#define AVR32_PWM_FMR_FMOD4_MASK                           0x00001000
#define AVR32_PWM_FMR_FMOD4_OFFSET                                 12
#define AVR32_PWM_FMR_FMOD4_SIZE                                    1
#define AVR32_PWM_FMR_FPOL0                                         0
#define AVR32_PWM_FMR_FPOL0_HI                             0x00000001
#define AVR32_PWM_FMR_FPOL0_LO                             0x00000000
#define AVR32_PWM_FMR_FPOL0_MASK                           0x00000001
#define AVR32_PWM_FMR_FPOL0_OFFSET                                  0
#define AVR32_PWM_FMR_FPOL0_SIZE                                    1
#define AVR32_PWM_FMR_FPOL1                                         1
#define AVR32_PWM_FMR_FPOL1_MASK                           0x00000002
#define AVR32_PWM_FMR_FPOL1_OFFSET                                  1
#define AVR32_PWM_FMR_FPOL1_SIZE                                    1
#define AVR32_PWM_FMR_FPOL2                                         2
#define AVR32_PWM_FMR_FPOL2_MASK                           0x00000004
#define AVR32_PWM_FMR_FPOL2_OFFSET                                  2
#define AVR32_PWM_FMR_FPOL2_SIZE                                    1
#define AVR32_PWM_FMR_FPOL3                                         3
#define AVR32_PWM_FMR_FPOL3_MASK                           0x00000008
#define AVR32_PWM_FMR_FPOL3_OFFSET                                  3
#define AVR32_PWM_FMR_FPOL3_SIZE                                    1
#define AVR32_PWM_FMR_FPOL4                                         4
#define AVR32_PWM_FMR_FPOL4_MASK                           0x00000010
#define AVR32_PWM_FMR_FPOL4_OFFSET                                  4
#define AVR32_PWM_FMR_FPOL4_SIZE                                    1
#define AVR32_PWM_FMR_MASK                                 0x001f1f1f
#define AVR32_PWM_FMR_RESETVALUE                           0x00000000
#define AVR32_PWM_FPE0                                              0
#define AVR32_PWM_FPE0_MASK                                0x0000001f
#define AVR32_PWM_FPE0_OFFSET                                       0
#define AVR32_PWM_FPE0_SIZE                                         5
#define AVR32_PWM_FPE1                                     0x0000006c
#define AVR32_PWM_FPE1_FPE0                                         0
#define AVR32_PWM_FPE1_FPE0_MASK                           0x0000001f
#define AVR32_PWM_FPE1_FPE0_OFFSET                                  0
#define AVR32_PWM_FPE1_FPE0_SIZE                                    5
#define AVR32_PWM_FPE1_FPE1                                         8
#define AVR32_PWM_FPE1_FPE1_MASK                           0x00001f00
#define AVR32_PWM_FPE1_FPE1_OFFSET                                  8
#define AVR32_PWM_FPE1_FPE1_SIZE                                    5
#define AVR32_PWM_FPE1_FPE2                                        16
#define AVR32_PWM_FPE1_FPE2_MASK                           0x001f0000
#define AVR32_PWM_FPE1_FPE2_OFFSET                                 16
#define AVR32_PWM_FPE1_FPE2_SIZE                                    5
#define AVR32_PWM_FPE1_FPE3                                        24
#define AVR32_PWM_FPE1_FPE3_MASK                           0x1f000000
#define AVR32_PWM_FPE1_FPE3_OFFSET                                 24
#define AVR32_PWM_FPE1_FPE3_SIZE                                    5
#define AVR32_PWM_FPE1_MASK                                0x1f1f1f1f
#define AVR32_PWM_FPE1_OFFSET                                       8
#define AVR32_PWM_FPE1_RESETVALUE                          0x00000000
#define AVR32_PWM_FPE1_SIZE                                         5
#define AVR32_PWM_FPE2                                             16
#define AVR32_PWM_FPE2_MASK                                0x001f0000
#define AVR32_PWM_FPE2_OFFSET                                      16
#define AVR32_PWM_FPE2_SIZE                                         5
#define AVR32_PWM_FPE3                                             24
#define AVR32_PWM_FPE3_MASK                                0x1f000000
#define AVR32_PWM_FPE3_OFFSET                                      24
#define AVR32_PWM_FPE3_SIZE                                         5
#define AVR32_PWM_FPOL0                                             0
#define AVR32_PWM_FPOL0_HI                                 0x00000001
#define AVR32_PWM_FPOL0_LO                                 0x00000000
#define AVR32_PWM_FPOL0_MASK                               0x00000001
#define AVR32_PWM_FPOL0_OFFSET                                      0
#define AVR32_PWM_FPOL0_SIZE                                        1
#define AVR32_PWM_FPOL1                                             1
#define AVR32_PWM_FPOL1_MASK                               0x00000002
#define AVR32_PWM_FPOL1_OFFSET                                      1
#define AVR32_PWM_FPOL1_SIZE                                        1
#define AVR32_PWM_FPOL2                                             2
#define AVR32_PWM_FPOL2_MASK                               0x00000004
#define AVR32_PWM_FPOL2_OFFSET                                      2
#define AVR32_PWM_FPOL2_SIZE                                        1
#define AVR32_PWM_FPOL3                                             3
#define AVR32_PWM_FPOL3_MASK                               0x00000008
#define AVR32_PWM_FPOL3_OFFSET                                      3
#define AVR32_PWM_FPOL3_SIZE                                        1
#define AVR32_PWM_FPOL4                                             4
#define AVR32_PWM_FPOL4_MASK                               0x00000010
#define AVR32_PWM_FPOL4_OFFSET                                      4
#define AVR32_PWM_FPOL4_SIZE                                        1
#define AVR32_PWM_FPV                                      0x00000068
#define AVR32_PWM_FPVH0                                             0
#define AVR32_PWM_FPVH0_MASK                               0x00000001
#define AVR32_PWM_FPVH0_OFFSET                                      0
#define AVR32_PWM_FPVH0_SIZE                                        1
#define AVR32_PWM_FPVH1                                             1
#define AVR32_PWM_FPVH1_MASK                               0x00000002
#define AVR32_PWM_FPVH1_OFFSET                                      1
#define AVR32_PWM_FPVH1_SIZE                                        1
#define AVR32_PWM_FPVH2                                             2
#define AVR32_PWM_FPVH2_MASK                               0x00000004
#define AVR32_PWM_FPVH2_OFFSET                                      2
#define AVR32_PWM_FPVH2_SIZE                                        1
#define AVR32_PWM_FPVH3                                             3
#define AVR32_PWM_FPVH3_MASK                               0x00000008
#define AVR32_PWM_FPVH3_OFFSET                                      3
#define AVR32_PWM_FPVH3_SIZE                                        1
#define AVR32_PWM_FPVL0                                            16
#define AVR32_PWM_FPVL0_MASK                               0x00010000
#define AVR32_PWM_FPVL0_OFFSET                                     16
#define AVR32_PWM_FPVL0_SIZE                                        1
#define AVR32_PWM_FPVL1                                            17
#define AVR32_PWM_FPVL1_MASK                               0x00020000
#define AVR32_PWM_FPVL1_OFFSET                                     17
#define AVR32_PWM_FPVL1_SIZE                                        1
#define AVR32_PWM_FPVL2                                            18
#define AVR32_PWM_FPVL2_MASK                               0x00040000
#define AVR32_PWM_FPVL2_OFFSET                                     18
#define AVR32_PWM_FPVL2_SIZE                                        1
#define AVR32_PWM_FPVL3                                            19
#define AVR32_PWM_FPVL3_MASK                               0x00080000
#define AVR32_PWM_FPVL3_OFFSET                                     19
#define AVR32_PWM_FPVL3_SIZE                                        1
#define AVR32_PWM_FPV_FPVH0                                         0
#define AVR32_PWM_FPV_FPVH0_MASK                           0x00000001
#define AVR32_PWM_FPV_FPVH0_OFFSET                                  0
#define AVR32_PWM_FPV_FPVH0_SIZE                                    1
#define AVR32_PWM_FPV_FPVH1                                         1
#define AVR32_PWM_FPV_FPVH1_MASK                           0x00000002
#define AVR32_PWM_FPV_FPVH1_OFFSET                                  1
#define AVR32_PWM_FPV_FPVH1_SIZE                                    1
#define AVR32_PWM_FPV_FPVH2                                         2
#define AVR32_PWM_FPV_FPVH2_MASK                           0x00000004
#define AVR32_PWM_FPV_FPVH2_OFFSET                                  2
#define AVR32_PWM_FPV_FPVH2_SIZE                                    1
#define AVR32_PWM_FPV_FPVH3                                         3
#define AVR32_PWM_FPV_FPVH3_MASK                           0x00000008
#define AVR32_PWM_FPV_FPVH3_OFFSET                                  3
#define AVR32_PWM_FPV_FPVH3_SIZE                                    1
#define AVR32_PWM_FPV_FPVL0                                        16
#define AVR32_PWM_FPV_FPVL0_MASK                           0x00010000
#define AVR32_PWM_FPV_FPVL0_OFFSET                                 16
#define AVR32_PWM_FPV_FPVL0_SIZE                                    1
#define AVR32_PWM_FPV_FPVL1                                        17
#define AVR32_PWM_FPV_FPVL1_MASK                           0x00020000
#define AVR32_PWM_FPV_FPVL1_OFFSET                                 17
#define AVR32_PWM_FPV_FPVL1_SIZE                                    1
#define AVR32_PWM_FPV_FPVL2                                        18
#define AVR32_PWM_FPV_FPVL2_MASK                           0x00040000
#define AVR32_PWM_FPV_FPVL2_OFFSET                                 18
#define AVR32_PWM_FPV_FPVL2_SIZE                                    1
#define AVR32_PWM_FPV_FPVL3                                        19
#define AVR32_PWM_FPV_FPVL3_MASK                           0x00080000
#define AVR32_PWM_FPV_FPVL3_OFFSET                                 19
#define AVR32_PWM_FPV_FPVL3_SIZE                                    1
#define AVR32_PWM_FPV_MASK                                 0x000f000f
#define AVR32_PWM_FPV_RESETVALUE                           0x00000000
#define AVR32_PWM_FS0                                               8
#define AVR32_PWM_FS0_MASK                                 0x00000100
#define AVR32_PWM_FS0_NO                                   0x00000000
#define AVR32_PWM_FS0_OFFSET                                        8
#define AVR32_PWM_FS0_SIZE                                          1
#define AVR32_PWM_FS0_YES                                  0x00000001
#define AVR32_PWM_FS1                                               9
#define AVR32_PWM_FS1_MASK                                 0x00000200
#define AVR32_PWM_FS1_OFFSET                                        9
#define AVR32_PWM_FS1_SIZE                                          1
#define AVR32_PWM_FS2                                              10
#define AVR32_PWM_FS2_MASK                                 0x00000400
#define AVR32_PWM_FS2_OFFSET                                       10
#define AVR32_PWM_FS2_SIZE                                          1
#define AVR32_PWM_FS3                                              11
#define AVR32_PWM_FS3_MASK                                 0x00000800
#define AVR32_PWM_FS3_OFFSET                                       11
#define AVR32_PWM_FS3_SIZE                                          1
#define AVR32_PWM_FS4                                              12
#define AVR32_PWM_FS4_MASK                                 0x00001000
#define AVR32_PWM_FS4_OFFSET                                       12
#define AVR32_PWM_FS4_SIZE                                          1
#define AVR32_PWM_FSR                                      0x00000060
#define AVR32_PWM_FSR_FIV0                                          0
#define AVR32_PWM_FSR_FIV0_MASK                            0x00000001
#define AVR32_PWM_FSR_FIV0_OFFSET                                   0
#define AVR32_PWM_FSR_FIV0_SIZE                                     1
#define AVR32_PWM_FSR_FIV1                                          1
#define AVR32_PWM_FSR_FIV1_MASK                            0x00000002
#define AVR32_PWM_FSR_FIV1_OFFSET                                   1
#define AVR32_PWM_FSR_FIV1_SIZE                                     1
#define AVR32_PWM_FSR_FIV2                                          2
#define AVR32_PWM_FSR_FIV2_MASK                            0x00000004
#define AVR32_PWM_FSR_FIV2_OFFSET                                   2
#define AVR32_PWM_FSR_FIV2_SIZE                                     1
#define AVR32_PWM_FSR_FIV3                                          3
#define AVR32_PWM_FSR_FIV3_MASK                            0x00000008
#define AVR32_PWM_FSR_FIV3_OFFSET                                   3
#define AVR32_PWM_FSR_FIV3_SIZE                                     1
#define AVR32_PWM_FSR_FIV4                                          4
#define AVR32_PWM_FSR_FIV4_MASK                            0x00000010
#define AVR32_PWM_FSR_FIV4_OFFSET                                   4
#define AVR32_PWM_FSR_FIV4_SIZE                                     1
#define AVR32_PWM_FSR_FS0                                           8
#define AVR32_PWM_FSR_FS0_MASK                             0x00000100
#define AVR32_PWM_FSR_FS0_NO                               0x00000000
#define AVR32_PWM_FSR_FS0_OFFSET                                    8
#define AVR32_PWM_FSR_FS0_SIZE                                      1
#define AVR32_PWM_FSR_FS0_YES                              0x00000001
#define AVR32_PWM_FSR_FS1                                           9
#define AVR32_PWM_FSR_FS1_MASK                             0x00000200
#define AVR32_PWM_FSR_FS1_OFFSET                                    9
#define AVR32_PWM_FSR_FS1_SIZE                                      1
#define AVR32_PWM_FSR_FS2                                          10
#define AVR32_PWM_FSR_FS2_MASK                             0x00000400
#define AVR32_PWM_FSR_FS2_OFFSET                                   10
#define AVR32_PWM_FSR_FS2_SIZE                                      1
#define AVR32_PWM_FSR_FS3                                          11
#define AVR32_PWM_FSR_FS3_MASK                             0x00000800
#define AVR32_PWM_FSR_FS3_OFFSET                                   11
#define AVR32_PWM_FSR_FS3_SIZE                                      1
#define AVR32_PWM_FSR_FS4                                          12
#define AVR32_PWM_FSR_FS4_MASK                             0x00001000
#define AVR32_PWM_FSR_FS4_OFFSET                                   12
#define AVR32_PWM_FSR_FS4_SIZE                                      1
#define AVR32_PWM_FSR_MASK                                 0x00001f1f
#define AVR32_PWM_FSR_RESETVALUE                           0x00000000
#define AVR32_PWM_HI                                       0x00000001
#define AVR32_PWM_HWENA                                    0x00000002
#define AVR32_PWM_IDR1                                     0x00000014
#define AVR32_PWM_IDR1_CHID0                                        0
#define AVR32_PWM_IDR1_CHID0_MASK                          0x00000001
#define AVR32_PWM_IDR1_CHID0_OFFSET                                 0
#define AVR32_PWM_IDR1_CHID0_SIZE                                   1
#define AVR32_PWM_IDR1_CHID1                                        1
#define AVR32_PWM_IDR1_CHID1_MASK                          0x00000002
#define AVR32_PWM_IDR1_CHID1_OFFSET                                 1
#define AVR32_PWM_IDR1_CHID1_SIZE                                   1
#define AVR32_PWM_IDR1_CHID2                                        2
#define AVR32_PWM_IDR1_CHID2_MASK                          0x00000004
#define AVR32_PWM_IDR1_CHID2_OFFSET                                 2
#define AVR32_PWM_IDR1_CHID2_SIZE                                   1
#define AVR32_PWM_IDR1_CHID3                                        3
#define AVR32_PWM_IDR1_CHID3_MASK                          0x00000008
#define AVR32_PWM_IDR1_CHID3_OFFSET                                 3
#define AVR32_PWM_IDR1_CHID3_SIZE                                   1
#define AVR32_PWM_IDR1_FCHID0                                      16
#define AVR32_PWM_IDR1_FCHID0_MASK                         0x00010000
#define AVR32_PWM_IDR1_FCHID0_OFFSET                               16
#define AVR32_PWM_IDR1_FCHID0_SIZE                                  1
#define AVR32_PWM_IDR1_FCHID1                                      17
#define AVR32_PWM_IDR1_FCHID1_MASK                         0x00020000
#define AVR32_PWM_IDR1_FCHID1_OFFSET                               17
#define AVR32_PWM_IDR1_FCHID1_SIZE                                  1
#define AVR32_PWM_IDR1_FCHID2                                      18
#define AVR32_PWM_IDR1_FCHID2_MASK                         0x00040000
#define AVR32_PWM_IDR1_FCHID2_OFFSET                               18
#define AVR32_PWM_IDR1_FCHID2_SIZE                                  1
#define AVR32_PWM_IDR1_FCHID3                                      19
#define AVR32_PWM_IDR1_FCHID3_MASK                         0x00080000
#define AVR32_PWM_IDR1_FCHID3_OFFSET                               19
#define AVR32_PWM_IDR1_FCHID3_SIZE                                  1
#define AVR32_PWM_IDR1_MASK                                0x000f000f
#define AVR32_PWM_IDR1_RESETVALUE                          0x00000000
#define AVR32_PWM_IDR2                                     0x00000038
#define AVR32_PWM_IDR2_CMPM0                                        8
#define AVR32_PWM_IDR2_CMPM0_MASK                          0x00000100
#define AVR32_PWM_IDR2_CMPM0_OFFSET                                 8
#define AVR32_PWM_IDR2_CMPM0_SIZE                                   1
#define AVR32_PWM_IDR2_CMPM1                                        9
#define AVR32_PWM_IDR2_CMPM1_MASK                          0x00000200
#define AVR32_PWM_IDR2_CMPM1_OFFSET                                 9
#define AVR32_PWM_IDR2_CMPM1_SIZE                                   1
#define AVR32_PWM_IDR2_CMPM2                                       10
#define AVR32_PWM_IDR2_CMPM2_MASK                          0x00000400
#define AVR32_PWM_IDR2_CMPM2_OFFSET                                10
#define AVR32_PWM_IDR2_CMPM2_SIZE                                   1
#define AVR32_PWM_IDR2_CMPM3                                       11
#define AVR32_PWM_IDR2_CMPM3_MASK                          0x00000800
#define AVR32_PWM_IDR2_CMPM3_OFFSET                                11
#define AVR32_PWM_IDR2_CMPM3_SIZE                                   1
#define AVR32_PWM_IDR2_CMPM4                                       12
#define AVR32_PWM_IDR2_CMPM4_MASK                          0x00001000
#define AVR32_PWM_IDR2_CMPM4_OFFSET                                12
#define AVR32_PWM_IDR2_CMPM4_SIZE                                   1
#define AVR32_PWM_IDR2_CMPM5                                       13
#define AVR32_PWM_IDR2_CMPM5_MASK                          0x00002000
#define AVR32_PWM_IDR2_CMPM5_OFFSET                                13
#define AVR32_PWM_IDR2_CMPM5_SIZE                                   1
#define AVR32_PWM_IDR2_CMPM6                                       14
#define AVR32_PWM_IDR2_CMPM6_MASK                          0x00004000
#define AVR32_PWM_IDR2_CMPM6_OFFSET                                14
#define AVR32_PWM_IDR2_CMPM6_SIZE                                   1
#define AVR32_PWM_IDR2_CMPM7                                       15
#define AVR32_PWM_IDR2_CMPM7_MASK                          0x00008000
#define AVR32_PWM_IDR2_CMPM7_OFFSET                                15
#define AVR32_PWM_IDR2_CMPM7_SIZE                                   1
#define AVR32_PWM_IDR2_CMPU0                                       16
#define AVR32_PWM_IDR2_CMPU0_MASK                          0x00010000
#define AVR32_PWM_IDR2_CMPU0_OFFSET                                16
#define AVR32_PWM_IDR2_CMPU0_SIZE                                   1
#define AVR32_PWM_IDR2_CMPU1                                       17
#define AVR32_PWM_IDR2_CMPU1_MASK                          0x00020000
#define AVR32_PWM_IDR2_CMPU1_OFFSET                                17
#define AVR32_PWM_IDR2_CMPU1_SIZE                                   1
#define AVR32_PWM_IDR2_CMPU2                                       18
#define AVR32_PWM_IDR2_CMPU2_MASK                          0x00040000
#define AVR32_PWM_IDR2_CMPU2_OFFSET                                18
#define AVR32_PWM_IDR2_CMPU2_SIZE                                   1
#define AVR32_PWM_IDR2_CMPU3                                       19
#define AVR32_PWM_IDR2_CMPU3_MASK                          0x00080000
#define AVR32_PWM_IDR2_CMPU3_OFFSET                                19
#define AVR32_PWM_IDR2_CMPU3_SIZE                                   1
#define AVR32_PWM_IDR2_CMPU4                                       20
#define AVR32_PWM_IDR2_CMPU4_MASK                          0x00100000
#define AVR32_PWM_IDR2_CMPU4_OFFSET                                20
#define AVR32_PWM_IDR2_CMPU4_SIZE                                   1
#define AVR32_PWM_IDR2_CMPU5                                       21
#define AVR32_PWM_IDR2_CMPU5_MASK                          0x00200000
#define AVR32_PWM_IDR2_CMPU5_OFFSET                                21
#define AVR32_PWM_IDR2_CMPU5_SIZE                                   1
#define AVR32_PWM_IDR2_CMPU6                                       22
#define AVR32_PWM_IDR2_CMPU6_MASK                          0x00400000
#define AVR32_PWM_IDR2_CMPU6_OFFSET                                22
#define AVR32_PWM_IDR2_CMPU6_SIZE                                   1
#define AVR32_PWM_IDR2_CMPU7                                       23
#define AVR32_PWM_IDR2_CMPU7_MASK                          0x00800000
#define AVR32_PWM_IDR2_CMPU7_OFFSET                                23
#define AVR32_PWM_IDR2_CMPU7_SIZE                                   1
#define AVR32_PWM_IDR2_ENDTX                                        1
#define AVR32_PWM_IDR2_ENDTX_MASK                          0x00000002
#define AVR32_PWM_IDR2_ENDTX_OFFSET                                 1
#define AVR32_PWM_IDR2_ENDTX_SIZE                                   1
#define AVR32_PWM_IDR2_MASK                                0x00ffff0f
#define AVR32_PWM_IDR2_RESETVALUE                          0x00000000
#define AVR32_PWM_IDR2_TXBUFE                                       2
#define AVR32_PWM_IDR2_TXBUFE_MASK                         0x00000004
#define AVR32_PWM_IDR2_TXBUFE_OFFSET                                2
#define AVR32_PWM_IDR2_TXBUFE_SIZE                                  1
#define AVR32_PWM_IDR2_UNRE                                         3
#define AVR32_PWM_IDR2_UNRE_MASK                           0x00000008
#define AVR32_PWM_IDR2_UNRE_OFFSET                                  3
#define AVR32_PWM_IDR2_UNRE_SIZE                                    1
#define AVR32_PWM_IDR2_WRDY                                         0
#define AVR32_PWM_IDR2_WRDY_MASK                           0x00000001
#define AVR32_PWM_IDR2_WRDY_OFFSET                                  0
#define AVR32_PWM_IDR2_WRDY_SIZE                                    1
#define AVR32_PWM_IER1                                     0x00000010
#define AVR32_PWM_IER1_CHID0                                        0
#define AVR32_PWM_IER1_CHID0_MASK                          0x00000001
#define AVR32_PWM_IER1_CHID0_OFFSET                                 0
#define AVR32_PWM_IER1_CHID0_SIZE                                   1
#define AVR32_PWM_IER1_CHID1                                        1
#define AVR32_PWM_IER1_CHID1_MASK                          0x00000002
#define AVR32_PWM_IER1_CHID1_OFFSET                                 1
#define AVR32_PWM_IER1_CHID1_SIZE                                   1
#define AVR32_PWM_IER1_CHID2                                        2
#define AVR32_PWM_IER1_CHID2_MASK                          0x00000004
#define AVR32_PWM_IER1_CHID2_OFFSET                                 2
#define AVR32_PWM_IER1_CHID2_SIZE                                   1
#define AVR32_PWM_IER1_CHID3                                        3
#define AVR32_PWM_IER1_CHID3_MASK                          0x00000008
#define AVR32_PWM_IER1_CHID3_OFFSET                                 3
#define AVR32_PWM_IER1_CHID3_SIZE                                   1
#define AVR32_PWM_IER1_FCHID0                                      16
#define AVR32_PWM_IER1_FCHID0_MASK                         0x00010000
#define AVR32_PWM_IER1_FCHID0_OFFSET                               16
#define AVR32_PWM_IER1_FCHID0_SIZE                                  1
#define AVR32_PWM_IER1_FCHID1                                      17
#define AVR32_PWM_IER1_FCHID1_MASK                         0x00020000
#define AVR32_PWM_IER1_FCHID1_OFFSET                               17
#define AVR32_PWM_IER1_FCHID1_SIZE                                  1
#define AVR32_PWM_IER1_FCHID2                                      18
#define AVR32_PWM_IER1_FCHID2_MASK                         0x00040000
#define AVR32_PWM_IER1_FCHID2_OFFSET                               18
#define AVR32_PWM_IER1_FCHID2_SIZE                                  1
#define AVR32_PWM_IER1_FCHID3                                      19
#define AVR32_PWM_IER1_FCHID3_MASK                         0x00080000
#define AVR32_PWM_IER1_FCHID3_OFFSET                               19
#define AVR32_PWM_IER1_FCHID3_SIZE                                  1
#define AVR32_PWM_IER1_MASK                                0x000f000f
#define AVR32_PWM_IER1_RESETVALUE                          0x00000000
#define AVR32_PWM_IER2                                     0x00000034
#define AVR32_PWM_IER2_CMPM0                                        8
#define AVR32_PWM_IER2_CMPM0_MASK                          0x00000100
#define AVR32_PWM_IER2_CMPM0_OFFSET                                 8
#define AVR32_PWM_IER2_CMPM0_SIZE                                   1
#define AVR32_PWM_IER2_CMPM1                                        9
#define AVR32_PWM_IER2_CMPM1_MASK                          0x00000200
#define AVR32_PWM_IER2_CMPM1_OFFSET                                 9
#define AVR32_PWM_IER2_CMPM1_SIZE                                   1
#define AVR32_PWM_IER2_CMPM2                                       10
#define AVR32_PWM_IER2_CMPM2_MASK                          0x00000400
#define AVR32_PWM_IER2_CMPM2_OFFSET                                10
#define AVR32_PWM_IER2_CMPM2_SIZE                                   1
#define AVR32_PWM_IER2_CMPM3                                       11
#define AVR32_PWM_IER2_CMPM3_MASK                          0x00000800
#define AVR32_PWM_IER2_CMPM3_OFFSET                                11
#define AVR32_PWM_IER2_CMPM3_SIZE                                   1
#define AVR32_PWM_IER2_CMPM4                                       12
#define AVR32_PWM_IER2_CMPM4_MASK                          0x00001000
#define AVR32_PWM_IER2_CMPM4_OFFSET                                12
#define AVR32_PWM_IER2_CMPM4_SIZE                                   1
#define AVR32_PWM_IER2_CMPM5                                       13
#define AVR32_PWM_IER2_CMPM5_MASK                          0x00002000
#define AVR32_PWM_IER2_CMPM5_OFFSET                                13
#define AVR32_PWM_IER2_CMPM5_SIZE                                   1
#define AVR32_PWM_IER2_CMPM6                                       14
#define AVR32_PWM_IER2_CMPM6_MASK                          0x00004000
#define AVR32_PWM_IER2_CMPM6_OFFSET                                14
#define AVR32_PWM_IER2_CMPM6_SIZE                                   1
#define AVR32_PWM_IER2_CMPM7                                       15
#define AVR32_PWM_IER2_CMPM7_MASK                          0x00008000
#define AVR32_PWM_IER2_CMPM7_OFFSET                                15
#define AVR32_PWM_IER2_CMPM7_SIZE                                   1
#define AVR32_PWM_IER2_CMPU0                                       16
#define AVR32_PWM_IER2_CMPU0_MASK                          0x00010000
#define AVR32_PWM_IER2_CMPU0_OFFSET                                16
#define AVR32_PWM_IER2_CMPU0_SIZE                                   1
#define AVR32_PWM_IER2_CMPU1                                       17
#define AVR32_PWM_IER2_CMPU1_MASK                          0x00020000
#define AVR32_PWM_IER2_CMPU1_OFFSET                                17
#define AVR32_PWM_IER2_CMPU1_SIZE                                   1
#define AVR32_PWM_IER2_CMPU2                                       18
#define AVR32_PWM_IER2_CMPU2_MASK                          0x00040000
#define AVR32_PWM_IER2_CMPU2_OFFSET                                18
#define AVR32_PWM_IER2_CMPU2_SIZE                                   1
#define AVR32_PWM_IER2_CMPU3                                       19
#define AVR32_PWM_IER2_CMPU3_MASK                          0x00080000
#define AVR32_PWM_IER2_CMPU3_OFFSET                                19
#define AVR32_PWM_IER2_CMPU3_SIZE                                   1
#define AVR32_PWM_IER2_CMPU4                                       20
#define AVR32_PWM_IER2_CMPU4_MASK                          0x00100000
#define AVR32_PWM_IER2_CMPU4_OFFSET                                20
#define AVR32_PWM_IER2_CMPU4_SIZE                                   1
#define AVR32_PWM_IER2_CMPU5                                       21
#define AVR32_PWM_IER2_CMPU5_MASK                          0x00200000
#define AVR32_PWM_IER2_CMPU5_OFFSET                                21
#define AVR32_PWM_IER2_CMPU5_SIZE                                   1
#define AVR32_PWM_IER2_CMPU6                                       22
#define AVR32_PWM_IER2_CMPU6_MASK                          0x00400000
#define AVR32_PWM_IER2_CMPU6_OFFSET                                22
#define AVR32_PWM_IER2_CMPU6_SIZE                                   1
#define AVR32_PWM_IER2_CMPU7                                       23
#define AVR32_PWM_IER2_CMPU7_MASK                          0x00800000
#define AVR32_PWM_IER2_CMPU7_OFFSET                                23
#define AVR32_PWM_IER2_CMPU7_SIZE                                   1
#define AVR32_PWM_IER2_ENDTX                                        1
#define AVR32_PWM_IER2_ENDTX_MASK                          0x00000002
#define AVR32_PWM_IER2_ENDTX_OFFSET                                 1
#define AVR32_PWM_IER2_ENDTX_SIZE                                   1
#define AVR32_PWM_IER2_MASK                                0x00ffff0f
#define AVR32_PWM_IER2_RESETVALUE                          0x00000000
#define AVR32_PWM_IER2_TXBUFE                                       2
#define AVR32_PWM_IER2_TXBUFE_MASK                         0x00000004
#define AVR32_PWM_IER2_TXBUFE_OFFSET                                2
#define AVR32_PWM_IER2_TXBUFE_SIZE                                  1
#define AVR32_PWM_IER2_UNRE                                         3
#define AVR32_PWM_IER2_UNRE_MASK                           0x00000008
#define AVR32_PWM_IER2_UNRE_OFFSET                                  3
#define AVR32_PWM_IER2_UNRE_SIZE                                    1
#define AVR32_PWM_IER2_WRDY                                         0
#define AVR32_PWM_IER2_WRDY_MASK                           0x00000001
#define AVR32_PWM_IER2_WRDY_OFFSET                                  0
#define AVR32_PWM_IER2_WRDY_SIZE                                    1
#define AVR32_PWM_IMR1                                     0x00000018
#define AVR32_PWM_IMR1_CHID0                                        0
#define AVR32_PWM_IMR1_CHID0_MASK                          0x00000001
#define AVR32_PWM_IMR1_CHID0_OFFSET                                 0
#define AVR32_PWM_IMR1_CHID0_SIZE                                   1
#define AVR32_PWM_IMR1_CHID1                                        1
#define AVR32_PWM_IMR1_CHID1_MASK                          0x00000002
#define AVR32_PWM_IMR1_CHID1_OFFSET                                 1
#define AVR32_PWM_IMR1_CHID1_SIZE                                   1
#define AVR32_PWM_IMR1_CHID2                                        2
#define AVR32_PWM_IMR1_CHID2_MASK                          0x00000004
#define AVR32_PWM_IMR1_CHID2_OFFSET                                 2
#define AVR32_PWM_IMR1_CHID2_SIZE                                   1
#define AVR32_PWM_IMR1_CHID3                                        3
#define AVR32_PWM_IMR1_CHID3_MASK                          0x00000008
#define AVR32_PWM_IMR1_CHID3_OFFSET                                 3
#define AVR32_PWM_IMR1_CHID3_SIZE                                   1
#define AVR32_PWM_IMR1_FCHID0                                      16
#define AVR32_PWM_IMR1_FCHID0_MASK                         0x00010000
#define AVR32_PWM_IMR1_FCHID0_OFFSET                               16
#define AVR32_PWM_IMR1_FCHID0_SIZE                                  1
#define AVR32_PWM_IMR1_FCHID1                                      17
#define AVR32_PWM_IMR1_FCHID1_MASK                         0x00020000
#define AVR32_PWM_IMR1_FCHID1_OFFSET                               17
#define AVR32_PWM_IMR1_FCHID1_SIZE                                  1
#define AVR32_PWM_IMR1_FCHID2                                      18
#define AVR32_PWM_IMR1_FCHID2_MASK                         0x00040000
#define AVR32_PWM_IMR1_FCHID2_OFFSET                               18
#define AVR32_PWM_IMR1_FCHID2_SIZE                                  1
#define AVR32_PWM_IMR1_FCHID3                                      19
#define AVR32_PWM_IMR1_FCHID3_MASK                         0x00080000
#define AVR32_PWM_IMR1_FCHID3_OFFSET                               19
#define AVR32_PWM_IMR1_FCHID3_SIZE                                  1
#define AVR32_PWM_IMR1_MASK                                0x000f000f
#define AVR32_PWM_IMR1_RESETVALUE                          0x00000000
#define AVR32_PWM_IMR2                                     0x0000003c
#define AVR32_PWM_IMR2_CMPM0                                        8
#define AVR32_PWM_IMR2_CMPM0_MASK                          0x00000100
#define AVR32_PWM_IMR2_CMPM0_OFFSET                                 8
#define AVR32_PWM_IMR2_CMPM0_SIZE                                   1
#define AVR32_PWM_IMR2_CMPM1                                        9
#define AVR32_PWM_IMR2_CMPM1_MASK                          0x00000200
#define AVR32_PWM_IMR2_CMPM1_OFFSET                                 9
#define AVR32_PWM_IMR2_CMPM1_SIZE                                   1
#define AVR32_PWM_IMR2_CMPM2                                       10
#define AVR32_PWM_IMR2_CMPM2_MASK                          0x00000400
#define AVR32_PWM_IMR2_CMPM2_OFFSET                                10
#define AVR32_PWM_IMR2_CMPM2_SIZE                                   1
#define AVR32_PWM_IMR2_CMPM3                                       11
#define AVR32_PWM_IMR2_CMPM3_MASK                          0x00000800
#define AVR32_PWM_IMR2_CMPM3_OFFSET                                11
#define AVR32_PWM_IMR2_CMPM3_SIZE                                   1
#define AVR32_PWM_IMR2_CMPM4                                       12
#define AVR32_PWM_IMR2_CMPM4_MASK                          0x00001000
#define AVR32_PWM_IMR2_CMPM4_OFFSET                                12
#define AVR32_PWM_IMR2_CMPM4_SIZE                                   1
#define AVR32_PWM_IMR2_CMPM5                                       13
#define AVR32_PWM_IMR2_CMPM5_MASK                          0x00002000
#define AVR32_PWM_IMR2_CMPM5_OFFSET                                13
#define AVR32_PWM_IMR2_CMPM5_SIZE                                   1
#define AVR32_PWM_IMR2_CMPM6                                       14
#define AVR32_PWM_IMR2_CMPM6_MASK                          0x00004000
#define AVR32_PWM_IMR2_CMPM6_OFFSET                                14
#define AVR32_PWM_IMR2_CMPM6_SIZE                                   1
#define AVR32_PWM_IMR2_CMPM7                                       15
#define AVR32_PWM_IMR2_CMPM7_MASK                          0x00008000
#define AVR32_PWM_IMR2_CMPM7_OFFSET                                15
#define AVR32_PWM_IMR2_CMPM7_SIZE                                   1
#define AVR32_PWM_IMR2_CMPU0                                       16
#define AVR32_PWM_IMR2_CMPU0_MASK                          0x00010000
#define AVR32_PWM_IMR2_CMPU0_OFFSET                                16
#define AVR32_PWM_IMR2_CMPU0_SIZE                                   1
#define AVR32_PWM_IMR2_CMPU1                                       17
#define AVR32_PWM_IMR2_CMPU1_MASK                          0x00020000
#define AVR32_PWM_IMR2_CMPU1_OFFSET                                17
#define AVR32_PWM_IMR2_CMPU1_SIZE                                   1
#define AVR32_PWM_IMR2_CMPU2                                       18
#define AVR32_PWM_IMR2_CMPU2_MASK                          0x00040000
#define AVR32_PWM_IMR2_CMPU2_OFFSET                                18
#define AVR32_PWM_IMR2_CMPU2_SIZE                                   1
#define AVR32_PWM_IMR2_CMPU3                                       19
#define AVR32_PWM_IMR2_CMPU3_MASK                          0x00080000
#define AVR32_PWM_IMR2_CMPU3_OFFSET                                19
#define AVR32_PWM_IMR2_CMPU3_SIZE                                   1
#define AVR32_PWM_IMR2_CMPU4                                       20
#define AVR32_PWM_IMR2_CMPU4_MASK                          0x00100000
#define AVR32_PWM_IMR2_CMPU4_OFFSET                                20
#define AVR32_PWM_IMR2_CMPU4_SIZE                                   1
#define AVR32_PWM_IMR2_CMPU5                                       21
#define AVR32_PWM_IMR2_CMPU5_MASK                          0x00200000
#define AVR32_PWM_IMR2_CMPU5_OFFSET                                21
#define AVR32_PWM_IMR2_CMPU5_SIZE                                   1
#define AVR32_PWM_IMR2_CMPU6                                       22
#define AVR32_PWM_IMR2_CMPU6_MASK                          0x00400000
#define AVR32_PWM_IMR2_CMPU6_OFFSET                                22
#define AVR32_PWM_IMR2_CMPU6_SIZE                                   1
#define AVR32_PWM_IMR2_CMPU7                                       23
#define AVR32_PWM_IMR2_CMPU7_MASK                          0x00800000
#define AVR32_PWM_IMR2_CMPU7_OFFSET                                23
#define AVR32_PWM_IMR2_CMPU7_SIZE                                   1
#define AVR32_PWM_IMR2_ENDTX                                        1
#define AVR32_PWM_IMR2_ENDTX_MASK                          0x00000002
#define AVR32_PWM_IMR2_ENDTX_OFFSET                                 1
#define AVR32_PWM_IMR2_ENDTX_SIZE                                   1
#define AVR32_PWM_IMR2_MASK                                0x00ffff0f
#define AVR32_PWM_IMR2_RESETVALUE                          0x00000000
#define AVR32_PWM_IMR2_TXBUFE                                       2
#define AVR32_PWM_IMR2_TXBUFE_MASK                         0x00000004
#define AVR32_PWM_IMR2_TXBUFE_OFFSET                                2
#define AVR32_PWM_IMR2_TXBUFE_SIZE                                  1
#define AVR32_PWM_IMR2_UNRE                                         3
#define AVR32_PWM_IMR2_UNRE_MASK                           0x00000008
#define AVR32_PWM_IMR2_UNRE_OFFSET                                  3
#define AVR32_PWM_IMR2_UNRE_SIZE                                    1
#define AVR32_PWM_IMR2_WRDY                                         0
#define AVR32_PWM_IMR2_WRDY_MASK                           0x00000001
#define AVR32_PWM_IMR2_WRDY_OFFSET                                  0
#define AVR32_PWM_IMR2_WRDY_SIZE                                    1
#define AVR32_PWM_INC                                      0x00000000
#define AVR32_PWM_ISR1                                     0x0000001c
#define AVR32_PWM_ISR1_CHID0                                        0
#define AVR32_PWM_ISR1_CHID0_MASK                          0x00000001
#define AVR32_PWM_ISR1_CHID0_OFFSET                                 0
#define AVR32_PWM_ISR1_CHID0_SIZE                                   1
#define AVR32_PWM_ISR1_CHID1                                        1
#define AVR32_PWM_ISR1_CHID1_MASK                          0x00000002
#define AVR32_PWM_ISR1_CHID1_OFFSET                                 1
#define AVR32_PWM_ISR1_CHID1_SIZE                                   1
#define AVR32_PWM_ISR1_CHID2                                        2
#define AVR32_PWM_ISR1_CHID2_MASK                          0x00000004
#define AVR32_PWM_ISR1_CHID2_OFFSET                                 2
#define AVR32_PWM_ISR1_CHID2_SIZE                                   1
#define AVR32_PWM_ISR1_CHID3                                        3
#define AVR32_PWM_ISR1_CHID3_MASK                          0x00000008
#define AVR32_PWM_ISR1_CHID3_OFFSET                                 3
#define AVR32_PWM_ISR1_CHID3_SIZE                                   1
#define AVR32_PWM_ISR1_FCHID0                                      16
#define AVR32_PWM_ISR1_FCHID0_MASK                         0x00010000
#define AVR32_PWM_ISR1_FCHID0_OFFSET                               16
#define AVR32_PWM_ISR1_FCHID0_SIZE                                  1
#define AVR32_PWM_ISR1_FCHID1                                      17
#define AVR32_PWM_ISR1_FCHID1_MASK                         0x00020000
#define AVR32_PWM_ISR1_FCHID1_OFFSET                               17
#define AVR32_PWM_ISR1_FCHID1_SIZE                                  1
#define AVR32_PWM_ISR1_FCHID2                                      18
#define AVR32_PWM_ISR1_FCHID2_MASK                         0x00040000
#define AVR32_PWM_ISR1_FCHID2_OFFSET                               18
#define AVR32_PWM_ISR1_FCHID2_SIZE                                  1
#define AVR32_PWM_ISR1_FCHID3                                      19
#define AVR32_PWM_ISR1_FCHID3_MASK                         0x00080000
#define AVR32_PWM_ISR1_FCHID3_OFFSET                               19
#define AVR32_PWM_ISR1_FCHID3_SIZE                                  1
#define AVR32_PWM_ISR1_MASK                                0x000f000f
#define AVR32_PWM_ISR1_RESETVALUE                          0x00000000
#define AVR32_PWM_ISR2                                     0x00000040
#define AVR32_PWM_ISR2_CMPM0                                        8
#define AVR32_PWM_ISR2_CMPM0_MASK                          0x00000100
#define AVR32_PWM_ISR2_CMPM0_NO                            0x00000000
#define AVR32_PWM_ISR2_CMPM0_OFFSET                                 8
#define AVR32_PWM_ISR2_CMPM0_SIZE                                   1
#define AVR32_PWM_ISR2_CMPM0_YES                           0x00000001
#define AVR32_PWM_ISR2_CMPM1                                        9
#define AVR32_PWM_ISR2_CMPM1_MASK                          0x00000200
#define AVR32_PWM_ISR2_CMPM1_NO                            0x00000000
#define AVR32_PWM_ISR2_CMPM1_OFFSET                                 9
#define AVR32_PWM_ISR2_CMPM1_SIZE                                   1
#define AVR32_PWM_ISR2_CMPM1_YES                           0x00000001
#define AVR32_PWM_ISR2_CMPM2                                       10
#define AVR32_PWM_ISR2_CMPM2_MASK                          0x00000400
#define AVR32_PWM_ISR2_CMPM2_NO                            0x00000000
#define AVR32_PWM_ISR2_CMPM2_OFFSET                                10
#define AVR32_PWM_ISR2_CMPM2_SIZE                                   1
#define AVR32_PWM_ISR2_CMPM2_YES                           0x00000001
#define AVR32_PWM_ISR2_CMPM3                                       11
#define AVR32_PWM_ISR2_CMPM3_MASK                          0x00000800
#define AVR32_PWM_ISR2_CMPM3_NO                            0x00000000
#define AVR32_PWM_ISR2_CMPM3_OFFSET                                11
#define AVR32_PWM_ISR2_CMPM3_SIZE                                   1
#define AVR32_PWM_ISR2_CMPM3_YES                           0x00000001
#define AVR32_PWM_ISR2_CMPM4                                       12
#define AVR32_PWM_ISR2_CMPM4_MASK                          0x00001000
#define AVR32_PWM_ISR2_CMPM4_NO                            0x00000000
#define AVR32_PWM_ISR2_CMPM4_OFFSET                                12
#define AVR32_PWM_ISR2_CMPM4_SIZE                                   1
#define AVR32_PWM_ISR2_CMPM4_YES                           0x00000001
#define AVR32_PWM_ISR2_CMPM5                                       13
#define AVR32_PWM_ISR2_CMPM5_MASK                          0x00002000
#define AVR32_PWM_ISR2_CMPM5_NO                            0x00000000
#define AVR32_PWM_ISR2_CMPM5_OFFSET                                13
#define AVR32_PWM_ISR2_CMPM5_SIZE                                   1
#define AVR32_PWM_ISR2_CMPM5_YES                           0x00000001
#define AVR32_PWM_ISR2_CMPM6                                       14
#define AVR32_PWM_ISR2_CMPM6_MASK                          0x00004000
#define AVR32_PWM_ISR2_CMPM6_NO                            0x00000000
#define AVR32_PWM_ISR2_CMPM6_OFFSET                                14
#define AVR32_PWM_ISR2_CMPM6_SIZE                                   1
#define AVR32_PWM_ISR2_CMPM6_YES                           0x00000001
#define AVR32_PWM_ISR2_CMPM7                                       15
#define AVR32_PWM_ISR2_CMPM7_MASK                          0x00008000
#define AVR32_PWM_ISR2_CMPM7_NO                            0x00000000
#define AVR32_PWM_ISR2_CMPM7_OFFSET                                15
#define AVR32_PWM_ISR2_CMPM7_SIZE                                   1
#define AVR32_PWM_ISR2_CMPM7_YES                           0x00000001
#define AVR32_PWM_ISR2_CMPU0                                       16
#define AVR32_PWM_ISR2_CMPU0_MASK                          0x00010000
#define AVR32_PWM_ISR2_CMPU0_NO                            0x00000000
#define AVR32_PWM_ISR2_CMPU0_OFFSET                                16
#define AVR32_PWM_ISR2_CMPU0_SIZE                                   1
#define AVR32_PWM_ISR2_CMPU0_YES                           0x00000001
#define AVR32_PWM_ISR2_CMPU1                                       17
#define AVR32_PWM_ISR2_CMPU1_MASK                          0x00020000
#define AVR32_PWM_ISR2_CMPU1_NO                            0x00000000
#define AVR32_PWM_ISR2_CMPU1_OFFSET                                17
#define AVR32_PWM_ISR2_CMPU1_SIZE                                   1
#define AVR32_PWM_ISR2_CMPU1_YES                           0x00000001
#define AVR32_PWM_ISR2_CMPU2                                       18
#define AVR32_PWM_ISR2_CMPU2_MASK                          0x00040000
#define AVR32_PWM_ISR2_CMPU2_NO                            0x00000000
#define AVR32_PWM_ISR2_CMPU2_OFFSET                                18
#define AVR32_PWM_ISR2_CMPU2_SIZE                                   1
#define AVR32_PWM_ISR2_CMPU2_YES                           0x00000001
#define AVR32_PWM_ISR2_CMPU3                                       19
#define AVR32_PWM_ISR2_CMPU3_MASK                          0x00080000
#define AVR32_PWM_ISR2_CMPU3_NO                            0x00000000
#define AVR32_PWM_ISR2_CMPU3_OFFSET                                19
#define AVR32_PWM_ISR2_CMPU3_SIZE                                   1
#define AVR32_PWM_ISR2_CMPU3_YES                           0x00000001
#define AVR32_PWM_ISR2_CMPU4                                       20
#define AVR32_PWM_ISR2_CMPU4_MASK                          0x00100000
#define AVR32_PWM_ISR2_CMPU4_NO                            0x00000000
#define AVR32_PWM_ISR2_CMPU4_OFFSET                                20
#define AVR32_PWM_ISR2_CMPU4_SIZE                                   1
#define AVR32_PWM_ISR2_CMPU4_YES                           0x00000001
#define AVR32_PWM_ISR2_CMPU5                                       21
#define AVR32_PWM_ISR2_CMPU5_MASK                          0x00200000
#define AVR32_PWM_ISR2_CMPU5_NO                            0x00000000
#define AVR32_PWM_ISR2_CMPU5_OFFSET                                21
#define AVR32_PWM_ISR2_CMPU5_SIZE                                   1
#define AVR32_PWM_ISR2_CMPU5_YES                           0x00000001
#define AVR32_PWM_ISR2_CMPU6                                       22
#define AVR32_PWM_ISR2_CMPU6_MASK                          0x00400000
#define AVR32_PWM_ISR2_CMPU6_NO                            0x00000000
#define AVR32_PWM_ISR2_CMPU6_OFFSET                                22
#define AVR32_PWM_ISR2_CMPU6_SIZE                                   1
#define AVR32_PWM_ISR2_CMPU6_YES                           0x00000001
#define AVR32_PWM_ISR2_CMPU7                                       23
#define AVR32_PWM_ISR2_CMPU7_MASK                          0x00800000
#define AVR32_PWM_ISR2_CMPU7_NO                            0x00000000
#define AVR32_PWM_ISR2_CMPU7_OFFSET                                23
#define AVR32_PWM_ISR2_CMPU7_SIZE                                   1
#define AVR32_PWM_ISR2_CMPU7_YES                           0x00000001
#define AVR32_PWM_ISR2_ENDTX                                        1
#define AVR32_PWM_ISR2_ENDTX_MASK                          0x00000002
#define AVR32_PWM_ISR2_ENDTX_OFFSET                                 1
#define AVR32_PWM_ISR2_ENDTX_SIZE                                   1
#define AVR32_PWM_ISR2_MASK                                0x00ffff0f
#define AVR32_PWM_ISR2_RESETVALUE                          0x00000000
#define AVR32_PWM_ISR2_TXBUFE                                       2
#define AVR32_PWM_ISR2_TXBUFE_MASK                         0x00000004
#define AVR32_PWM_ISR2_TXBUFE_OFFSET                                2
#define AVR32_PWM_ISR2_TXBUFE_SIZE                                  1
#define AVR32_PWM_ISR2_UNRE                                         3
#define AVR32_PWM_ISR2_UNRE_MASK                           0x00000008
#define AVR32_PWM_ISR2_UNRE_OFFSET                                  3
#define AVR32_PWM_ISR2_UNRE_SIZE                                    1
#define AVR32_PWM_ISR2_WRDY                                         0
#define AVR32_PWM_ISR2_WRDY_MASK                           0x00000001
#define AVR32_PWM_ISR2_WRDY_OFFSET                                  0
#define AVR32_PWM_ISR2_WRDY_SIZE                                    1
#define AVR32_PWM_KEY                                      0x0050574d
#define AVR32_PWM_LEV                                      0x00000000
#define AVR32_PWM_LO                                       0x00000000
#define AVR32_PWM_MFN                                              16
#define AVR32_PWM_MFN_MASK                                 0x00070000
#define AVR32_PWM_MFN_OFFSET                                       16
#define AVR32_PWM_MFN_SIZE                                          3
#define AVR32_PWM_NO                                       0x00000000
#define AVR32_PWM_OOV                                      0x00000044
#define AVR32_PWM_OOVH0                                             0
#define AVR32_PWM_OOVH0_MASK                               0x00000001
#define AVR32_PWM_OOVH0_OFFSET                                      0
#define AVR32_PWM_OOVH0_SIZE                                        1
#define AVR32_PWM_OOVH1                                             1
#define AVR32_PWM_OOVH1_MASK                               0x00000002
#define AVR32_PWM_OOVH1_OFFSET                                      1
#define AVR32_PWM_OOVH1_SIZE                                        1
#define AVR32_PWM_OOVH2                                             2
#define AVR32_PWM_OOVH2_MASK                               0x00000004
#define AVR32_PWM_OOVH2_OFFSET                                      2
#define AVR32_PWM_OOVH2_SIZE                                        1
#define AVR32_PWM_OOVH3                                             3
#define AVR32_PWM_OOVH3_MASK                               0x00000008
#define AVR32_PWM_OOVH3_OFFSET                                      3
#define AVR32_PWM_OOVH3_SIZE                                        1
#define AVR32_PWM_OOVL0                                            16
#define AVR32_PWM_OOVL0_MASK                               0x00010000
#define AVR32_PWM_OOVL0_OFFSET                                     16
#define AVR32_PWM_OOVL0_SIZE                                        1
#define AVR32_PWM_OOVL1                                            17
#define AVR32_PWM_OOVL1_MASK                               0x00020000
#define AVR32_PWM_OOVL1_OFFSET                                     17
#define AVR32_PWM_OOVL1_SIZE                                        1
#define AVR32_PWM_OOVL2                                            18
#define AVR32_PWM_OOVL2_MASK                               0x00040000
#define AVR32_PWM_OOVL2_OFFSET                                     18
#define AVR32_PWM_OOVL2_SIZE                                        1
#define AVR32_PWM_OOVL3                                            19
#define AVR32_PWM_OOVL3_MASK                               0x00080000
#define AVR32_PWM_OOVL3_OFFSET                                     19
#define AVR32_PWM_OOVL3_SIZE                                        1
#define AVR32_PWM_OOV_MASK                                 0x000f000f
#define AVR32_PWM_OOV_OOVH0                                         0
#define AVR32_PWM_OOV_OOVH0_MASK                           0x00000001
#define AVR32_PWM_OOV_OOVH0_OFFSET                                  0
#define AVR32_PWM_OOV_OOVH0_SIZE                                    1
#define AVR32_PWM_OOV_OOVH1                                         1
#define AVR32_PWM_OOV_OOVH1_MASK                           0x00000002
#define AVR32_PWM_OOV_OOVH1_OFFSET                                  1
#define AVR32_PWM_OOV_OOVH1_SIZE                                    1
#define AVR32_PWM_OOV_OOVH2                                         2
#define AVR32_PWM_OOV_OOVH2_MASK                           0x00000004
#define AVR32_PWM_OOV_OOVH2_OFFSET                                  2
#define AVR32_PWM_OOV_OOVH2_SIZE                                    1
#define AVR32_PWM_OOV_OOVH3                                         3
#define AVR32_PWM_OOV_OOVH3_MASK                           0x00000008
#define AVR32_PWM_OOV_OOVH3_OFFSET                                  3
#define AVR32_PWM_OOV_OOVH3_SIZE                                    1
#define AVR32_PWM_OOV_OOVL0                                        16
#define AVR32_PWM_OOV_OOVL0_MASK                           0x00010000
#define AVR32_PWM_OOV_OOVL0_OFFSET                                 16
#define AVR32_PWM_OOV_OOVL0_SIZE                                    1
#define AVR32_PWM_OOV_OOVL1                                        17
#define AVR32_PWM_OOV_OOVL1_MASK                           0x00020000
#define AVR32_PWM_OOV_OOVL1_OFFSET                                 17
#define AVR32_PWM_OOV_OOVL1_SIZE                                    1
#define AVR32_PWM_OOV_OOVL2                                        18
#define AVR32_PWM_OOV_OOVL2_MASK                           0x00040000
#define AVR32_PWM_OOV_OOVL2_OFFSET                                 18
#define AVR32_PWM_OOV_OOVL2_SIZE                                    1
#define AVR32_PWM_OOV_OOVL3                                        19
#define AVR32_PWM_OOV_OOVL3_MASK                           0x00080000
#define AVR32_PWM_OOV_OOVL3_OFFSET                                 19
#define AVR32_PWM_OOV_OOVL3_SIZE                                    1
#define AVR32_PWM_OOV_RESETVALUE                           0x00000000
#define AVR32_PWM_OS                                       0x00000048
#define AVR32_PWM_OSC                                      0x00000050
#define AVR32_PWM_OSCH0                                             0
#define AVR32_PWM_OSCH0_MASK                               0x00000001
#define AVR32_PWM_OSCH0_OFFSET                                      0
#define AVR32_PWM_OSCH0_SIZE                                        1
#define AVR32_PWM_OSCH1                                             1
#define AVR32_PWM_OSCH1_MASK                               0x00000002
#define AVR32_PWM_OSCH1_OFFSET                                      1
#define AVR32_PWM_OSCH1_SIZE                                        1
#define AVR32_PWM_OSCH2                                             2
#define AVR32_PWM_OSCH2_MASK                               0x00000004
#define AVR32_PWM_OSCH2_OFFSET                                      2
#define AVR32_PWM_OSCH2_SIZE                                        1
#define AVR32_PWM_OSCH3                                             3
#define AVR32_PWM_OSCH3_MASK                               0x00000008
#define AVR32_PWM_OSCH3_OFFSET                                      3
#define AVR32_PWM_OSCH3_SIZE                                        1
#define AVR32_PWM_OSCL0                                            16
#define AVR32_PWM_OSCL0_MASK                               0x00010000
#define AVR32_PWM_OSCL0_OFFSET                                     16
#define AVR32_PWM_OSCL0_SIZE                                        1
#define AVR32_PWM_OSCL1                                            17
#define AVR32_PWM_OSCL1_MASK                               0x00020000
#define AVR32_PWM_OSCL1_OFFSET                                     17
#define AVR32_PWM_OSCL1_SIZE                                        1
#define AVR32_PWM_OSCL2                                            18
#define AVR32_PWM_OSCL2_MASK                               0x00040000
#define AVR32_PWM_OSCL2_OFFSET                                     18
#define AVR32_PWM_OSCL2_SIZE                                        1
#define AVR32_PWM_OSCL3                                            19
#define AVR32_PWM_OSCL3_MASK                               0x00080000
#define AVR32_PWM_OSCL3_OFFSET                                     19
#define AVR32_PWM_OSCL3_SIZE                                        1
#define AVR32_PWM_OSCUPD                                   0x00000058
#define AVR32_PWM_OSCUPD_MASK                              0x000f000f
#define AVR32_PWM_OSCUPD_OSCUPH0                                    0
#define AVR32_PWM_OSCUPD_OSCUPH0_MASK                      0x00000001
#define AVR32_PWM_OSCUPD_OSCUPH0_OFFSET                             0
#define AVR32_PWM_OSCUPD_OSCUPH0_SIZE                               1
#define AVR32_PWM_OSCUPD_OSCUPH1                                    1
#define AVR32_PWM_OSCUPD_OSCUPH1_MASK                      0x00000002
#define AVR32_PWM_OSCUPD_OSCUPH1_OFFSET                             1
#define AVR32_PWM_OSCUPD_OSCUPH1_SIZE                               1
#define AVR32_PWM_OSCUPD_OSCUPH2                                    2
#define AVR32_PWM_OSCUPD_OSCUPH2_MASK                      0x00000004
#define AVR32_PWM_OSCUPD_OSCUPH2_OFFSET                             2
#define AVR32_PWM_OSCUPD_OSCUPH2_SIZE                               1
#define AVR32_PWM_OSCUPD_OSCUPH3                                    3
#define AVR32_PWM_OSCUPD_OSCUPH3_MASK                      0x00000008
#define AVR32_PWM_OSCUPD_OSCUPH3_OFFSET                             3
#define AVR32_PWM_OSCUPD_OSCUPH3_SIZE                               1
#define AVR32_PWM_OSCUPD_OSCUPL0                                   16
#define AVR32_PWM_OSCUPD_OSCUPL0_MASK                      0x00010000
#define AVR32_PWM_OSCUPD_OSCUPL0_OFFSET                            16
#define AVR32_PWM_OSCUPD_OSCUPL0_SIZE                               1
#define AVR32_PWM_OSCUPD_OSCUPL1                                   17
#define AVR32_PWM_OSCUPD_OSCUPL1_MASK                      0x00020000
#define AVR32_PWM_OSCUPD_OSCUPL1_OFFSET                            17
#define AVR32_PWM_OSCUPD_OSCUPL1_SIZE                               1
#define AVR32_PWM_OSCUPD_OSCUPL2                                   18
#define AVR32_PWM_OSCUPD_OSCUPL2_MASK                      0x00040000
#define AVR32_PWM_OSCUPD_OSCUPL2_OFFSET                            18
#define AVR32_PWM_OSCUPD_OSCUPL2_SIZE                               1
#define AVR32_PWM_OSCUPD_OSCUPL3                                   19
#define AVR32_PWM_OSCUPD_OSCUPL3_MASK                      0x00080000
#define AVR32_PWM_OSCUPD_OSCUPL3_OFFSET                            19
#define AVR32_PWM_OSCUPD_OSCUPL3_SIZE                               1
#define AVR32_PWM_OSCUPD_RESETVALUE                        0x00000000
#define AVR32_PWM_OSCUPH0                                           0
#define AVR32_PWM_OSCUPH0_MASK                             0x00000001
#define AVR32_PWM_OSCUPH0_OFFSET                                    0
#define AVR32_PWM_OSCUPH0_SIZE                                      1
#define AVR32_PWM_OSCUPH1                                           1
#define AVR32_PWM_OSCUPH1_MASK                             0x00000002
#define AVR32_PWM_OSCUPH1_OFFSET                                    1
#define AVR32_PWM_OSCUPH1_SIZE                                      1
#define AVR32_PWM_OSCUPH2                                           2
#define AVR32_PWM_OSCUPH2_MASK                             0x00000004
#define AVR32_PWM_OSCUPH2_OFFSET                                    2
#define AVR32_PWM_OSCUPH2_SIZE                                      1
#define AVR32_PWM_OSCUPH3                                           3
#define AVR32_PWM_OSCUPH3_MASK                             0x00000008
#define AVR32_PWM_OSCUPH3_OFFSET                                    3
#define AVR32_PWM_OSCUPH3_SIZE                                      1
#define AVR32_PWM_OSCUPL0                                          16
#define AVR32_PWM_OSCUPL0_MASK                             0x00010000
#define AVR32_PWM_OSCUPL0_OFFSET                                   16
#define AVR32_PWM_OSCUPL0_SIZE                                      1
#define AVR32_PWM_OSCUPL1                                          17
#define AVR32_PWM_OSCUPL1_MASK                             0x00020000
#define AVR32_PWM_OSCUPL1_OFFSET                                   17
#define AVR32_PWM_OSCUPL1_SIZE                                      1
#define AVR32_PWM_OSCUPL2                                          18
#define AVR32_PWM_OSCUPL2_MASK                             0x00040000
#define AVR32_PWM_OSCUPL2_OFFSET                                   18
#define AVR32_PWM_OSCUPL2_SIZE                                      1
#define AVR32_PWM_OSCUPL3                                          19
#define AVR32_PWM_OSCUPL3_MASK                             0x00080000
#define AVR32_PWM_OSCUPL3_OFFSET                                   19
#define AVR32_PWM_OSCUPL3_SIZE                                      1
#define AVR32_PWM_OSC_MASK                                 0x000f000f
#define AVR32_PWM_OSC_OSCH0                                         0
#define AVR32_PWM_OSC_OSCH0_MASK                           0x00000001
#define AVR32_PWM_OSC_OSCH0_OFFSET                                  0
#define AVR32_PWM_OSC_OSCH0_SIZE                                    1
#define AVR32_PWM_OSC_OSCH1                                         1
#define AVR32_PWM_OSC_OSCH1_MASK                           0x00000002
#define AVR32_PWM_OSC_OSCH1_OFFSET                                  1
#define AVR32_PWM_OSC_OSCH1_SIZE                                    1
#define AVR32_PWM_OSC_OSCH2                                         2
#define AVR32_PWM_OSC_OSCH2_MASK                           0x00000004
#define AVR32_PWM_OSC_OSCH2_OFFSET                                  2
#define AVR32_PWM_OSC_OSCH2_SIZE                                    1
#define AVR32_PWM_OSC_OSCH3                                         3
#define AVR32_PWM_OSC_OSCH3_MASK                           0x00000008
#define AVR32_PWM_OSC_OSCH3_OFFSET                                  3
#define AVR32_PWM_OSC_OSCH3_SIZE                                    1
#define AVR32_PWM_OSC_OSCL0                                        16
#define AVR32_PWM_OSC_OSCL0_MASK                           0x00010000
#define AVR32_PWM_OSC_OSCL0_OFFSET                                 16
#define AVR32_PWM_OSC_OSCL0_SIZE                                    1
#define AVR32_PWM_OSC_OSCL1                                        17
#define AVR32_PWM_OSC_OSCL1_MASK                           0x00020000
#define AVR32_PWM_OSC_OSCL1_OFFSET                                 17
#define AVR32_PWM_OSC_OSCL1_SIZE                                    1
#define AVR32_PWM_OSC_OSCL2                                        18
#define AVR32_PWM_OSC_OSCL2_MASK                           0x00040000
#define AVR32_PWM_OSC_OSCL2_OFFSET                                 18
#define AVR32_PWM_OSC_OSCL2_SIZE                                    1
#define AVR32_PWM_OSC_OSCL3                                        19
#define AVR32_PWM_OSC_OSCL3_MASK                           0x00080000
#define AVR32_PWM_OSC_OSCL3_OFFSET                                 19
#define AVR32_PWM_OSC_OSCL3_SIZE                                    1
#define AVR32_PWM_OSC_RESETVALUE                           0x00000000
#define AVR32_PWM_OSH0                                              0
#define AVR32_PWM_OSH0_MASK                                0x00000001
#define AVR32_PWM_OSH0_OFFSET                                       0
#define AVR32_PWM_OSH0_SIZE                                         1
#define AVR32_PWM_OSH1                                              1
#define AVR32_PWM_OSH1_MASK                                0x00000002
#define AVR32_PWM_OSH1_OFFSET                                       1
#define AVR32_PWM_OSH1_SIZE                                         1
#define AVR32_PWM_OSH2                                              2
#define AVR32_PWM_OSH2_MASK                                0x00000004
#define AVR32_PWM_OSH2_OFFSET                                       2
#define AVR32_PWM_OSH2_SIZE                                         1
#define AVR32_PWM_OSH3                                              3
#define AVR32_PWM_OSH3_MASK                                0x00000008
#define AVR32_PWM_OSH3_OFFSET                                       3
#define AVR32_PWM_OSH3_SIZE                                         1
#define AVR32_PWM_OSL0                                             16
#define AVR32_PWM_OSL0_MASK                                0x00010000
#define AVR32_PWM_OSL0_OFFSET                                      16
#define AVR32_PWM_OSL0_SIZE                                         1
#define AVR32_PWM_OSL1                                             17
#define AVR32_PWM_OSL1_MASK                                0x00020000
#define AVR32_PWM_OSL1_OFFSET                                      17
#define AVR32_PWM_OSL1_SIZE                                         1
#define AVR32_PWM_OSL2                                             18
#define AVR32_PWM_OSL2_MASK                                0x00040000
#define AVR32_PWM_OSL2_OFFSET                                      18
#define AVR32_PWM_OSL2_SIZE                                         1
#define AVR32_PWM_OSL3                                             19
#define AVR32_PWM_OSL3_MASK                                0x00080000
#define AVR32_PWM_OSL3_OFFSET                                      19
#define AVR32_PWM_OSL3_SIZE                                         1
#define AVR32_PWM_OSS                                      0x0000004c
#define AVR32_PWM_OSSH0                                             0
#define AVR32_PWM_OSSH0_MASK                               0x00000001
#define AVR32_PWM_OSSH0_OFFSET                                      0
#define AVR32_PWM_OSSH0_SIZE                                        1
#define AVR32_PWM_OSSH1                                             1
#define AVR32_PWM_OSSH1_MASK                               0x00000002
#define AVR32_PWM_OSSH1_OFFSET                                      1
#define AVR32_PWM_OSSH1_SIZE                                        1
#define AVR32_PWM_OSSH2                                             2
#define AVR32_PWM_OSSH2_MASK                               0x00000004
#define AVR32_PWM_OSSH2_OFFSET                                      2
#define AVR32_PWM_OSSH2_SIZE                                        1
#define AVR32_PWM_OSSH3                                             3
#define AVR32_PWM_OSSH3_MASK                               0x00000008
#define AVR32_PWM_OSSH3_OFFSET                                      3
#define AVR32_PWM_OSSH3_SIZE                                        1
#define AVR32_PWM_OSSL0                                            16
#define AVR32_PWM_OSSL0_MASK                               0x00010000
#define AVR32_PWM_OSSL0_OFFSET                                     16
#define AVR32_PWM_OSSL0_SIZE                                        1
#define AVR32_PWM_OSSL1                                            17
#define AVR32_PWM_OSSL1_MASK                               0x00020000
#define AVR32_PWM_OSSL1_OFFSET                                     17
#define AVR32_PWM_OSSL1_SIZE                                        1
#define AVR32_PWM_OSSL2                                            18
#define AVR32_PWM_OSSL2_MASK                               0x00040000
#define AVR32_PWM_OSSL2_OFFSET                                     18
#define AVR32_PWM_OSSL2_SIZE                                        1
#define AVR32_PWM_OSSL3                                            19
#define AVR32_PWM_OSSL3_MASK                               0x00080000
#define AVR32_PWM_OSSL3_OFFSET                                     19
#define AVR32_PWM_OSSL3_SIZE                                        1
#define AVR32_PWM_OSSUPD                                   0x00000054
#define AVR32_PWM_OSSUPD_MASK                              0x000f0007
#define AVR32_PWM_OSSUPD_OSSUPH0                                    0
#define AVR32_PWM_OSSUPD_OSSUPH0_MASK                      0x00000001
#define AVR32_PWM_OSSUPD_OSSUPH0_OFFSET                             0
#define AVR32_PWM_OSSUPD_OSSUPH0_SIZE                               1
#define AVR32_PWM_OSSUPD_OSSUPH1                                    1
#define AVR32_PWM_OSSUPD_OSSUPH1_MASK                      0x00000002
#define AVR32_PWM_OSSUPD_OSSUPH1_OFFSET                             1
#define AVR32_PWM_OSSUPD_OSSUPH1_SIZE                               1
#define AVR32_PWM_OSSUPD_OSSUPH2                                    2
#define AVR32_PWM_OSSUPD_OSSUPH2_MASK                      0x00000004
#define AVR32_PWM_OSSUPD_OSSUPH2_OFFSET                             2
#define AVR32_PWM_OSSUPD_OSSUPH2_SIZE                               1
#define AVR32_PWM_OSSUPD_OSSUPL0                                   16
#define AVR32_PWM_OSSUPD_OSSUPL0_MASK                      0x00010000
#define AVR32_PWM_OSSUPD_OSSUPL0_OFFSET                            16
#define AVR32_PWM_OSSUPD_OSSUPL0_SIZE                               1
#define AVR32_PWM_OSSUPD_OSSUPL1                                   17
#define AVR32_PWM_OSSUPD_OSSUPL1_MASK                      0x00020000
#define AVR32_PWM_OSSUPD_OSSUPL1_OFFSET                            17
#define AVR32_PWM_OSSUPD_OSSUPL1_SIZE                               1
#define AVR32_PWM_OSSUPD_OSSUPL2                                   18
#define AVR32_PWM_OSSUPD_OSSUPL2_MASK                      0x00040000
#define AVR32_PWM_OSSUPD_OSSUPL2_OFFSET                            18
#define AVR32_PWM_OSSUPD_OSSUPL2_SIZE                               1
#define AVR32_PWM_OSSUPD_OSSUPL3                                   19
#define AVR32_PWM_OSSUPD_OSSUPL3_MASK                      0x00080000
#define AVR32_PWM_OSSUPD_OSSUPL3_OFFSET                            19
#define AVR32_PWM_OSSUPD_OSSUPL3_SIZE                               1
#define AVR32_PWM_OSSUPD_RESETVALUE                        0x00000000
#define AVR32_PWM_OSSUPH0                                           0
#define AVR32_PWM_OSSUPH0_MASK                             0x00000001
#define AVR32_PWM_OSSUPH0_OFFSET                                    0
#define AVR32_PWM_OSSUPH0_SIZE                                      1
#define AVR32_PWM_OSSUPH1                                           1
#define AVR32_PWM_OSSUPH1_MASK                             0x00000002
#define AVR32_PWM_OSSUPH1_OFFSET                                    1
#define AVR32_PWM_OSSUPH1_SIZE                                      1
#define AVR32_PWM_OSSUPH2                                           2
#define AVR32_PWM_OSSUPH2_MASK                             0x00000004
#define AVR32_PWM_OSSUPH2_OFFSET                                    2
#define AVR32_PWM_OSSUPH2_SIZE                                      1
#define AVR32_PWM_OSSUPL0                                          16
#define AVR32_PWM_OSSUPL0_MASK                             0x00010000
#define AVR32_PWM_OSSUPL0_OFFSET                                   16
#define AVR32_PWM_OSSUPL0_SIZE                                      1
#define AVR32_PWM_OSSUPL1                                          17
#define AVR32_PWM_OSSUPL1_MASK                             0x00020000
#define AVR32_PWM_OSSUPL1_OFFSET                                   17
#define AVR32_PWM_OSSUPL1_SIZE                                      1
#define AVR32_PWM_OSSUPL2                                          18
#define AVR32_PWM_OSSUPL2_MASK                             0x00040000
#define AVR32_PWM_OSSUPL2_OFFSET                                   18
#define AVR32_PWM_OSSUPL2_SIZE                                      1
#define AVR32_PWM_OSSUPL3                                          19
#define AVR32_PWM_OSSUPL3_MASK                             0x00080000
#define AVR32_PWM_OSSUPL3_OFFSET                                   19
#define AVR32_PWM_OSSUPL3_SIZE                                      1
#define AVR32_PWM_OSS_MASK                                 0x000f000f
#define AVR32_PWM_OSS_OSSH0                                         0
#define AVR32_PWM_OSS_OSSH0_MASK                           0x00000001
#define AVR32_PWM_OSS_OSSH0_OFFSET                                  0
#define AVR32_PWM_OSS_OSSH0_SIZE                                    1
#define AVR32_PWM_OSS_OSSH1                                         1
#define AVR32_PWM_OSS_OSSH1_MASK                           0x00000002
#define AVR32_PWM_OSS_OSSH1_OFFSET                                  1
#define AVR32_PWM_OSS_OSSH1_SIZE                                    1
#define AVR32_PWM_OSS_OSSH2                                         2
#define AVR32_PWM_OSS_OSSH2_MASK                           0x00000004
#define AVR32_PWM_OSS_OSSH2_OFFSET                                  2
#define AVR32_PWM_OSS_OSSH2_SIZE                                    1
#define AVR32_PWM_OSS_OSSH3                                         3
#define AVR32_PWM_OSS_OSSH3_MASK                           0x00000008
#define AVR32_PWM_OSS_OSSH3_OFFSET                                  3
#define AVR32_PWM_OSS_OSSH3_SIZE                                    1
#define AVR32_PWM_OSS_OSSL0                                        16
#define AVR32_PWM_OSS_OSSL0_MASK                           0x00010000
#define AVR32_PWM_OSS_OSSL0_OFFSET                                 16
#define AVR32_PWM_OSS_OSSL0_SIZE                                    1
#define AVR32_PWM_OSS_OSSL1                                        17
#define AVR32_PWM_OSS_OSSL1_MASK                           0x00020000
#define AVR32_PWM_OSS_OSSL1_OFFSET                                 17
#define AVR32_PWM_OSS_OSSL1_SIZE                                    1
#define AVR32_PWM_OSS_OSSL2                                        18
#define AVR32_PWM_OSS_OSSL2_MASK                           0x00040000
#define AVR32_PWM_OSS_OSSL2_OFFSET                                 18
#define AVR32_PWM_OSS_OSSL2_SIZE                                    1
#define AVR32_PWM_OSS_OSSL3                                        19
#define AVR32_PWM_OSS_OSSL3_MASK                           0x00080000
#define AVR32_PWM_OSS_OSSL3_OFFSET                                 19
#define AVR32_PWM_OSS_OSSL3_SIZE                                    1
#define AVR32_PWM_OSS_RESETVALUE                           0x00000000
#define AVR32_PWM_OS_MASK                                  0x000f000f
#define AVR32_PWM_OS_OSH0                                           0
#define AVR32_PWM_OS_OSH0_MASK                             0x00000001
#define AVR32_PWM_OS_OSH0_OFFSET                                    0
#define AVR32_PWM_OS_OSH0_SIZE                                      1
#define AVR32_PWM_OS_OSH1                                           1
#define AVR32_PWM_OS_OSH1_MASK                             0x00000002
#define AVR32_PWM_OS_OSH1_OFFSET                                    1
#define AVR32_PWM_OS_OSH1_SIZE                                      1
#define AVR32_PWM_OS_OSH2                                           2
#define AVR32_PWM_OS_OSH2_MASK                             0x00000004
#define AVR32_PWM_OS_OSH2_OFFSET                                    2
#define AVR32_PWM_OS_OSH2_SIZE                                      1
#define AVR32_PWM_OS_OSH3                                           3
#define AVR32_PWM_OS_OSH3_MASK                             0x00000008
#define AVR32_PWM_OS_OSH3_OFFSET                                    3
#define AVR32_PWM_OS_OSH3_SIZE                                      1
#define AVR32_PWM_OS_OSL0                                          16
#define AVR32_PWM_OS_OSL0_MASK                             0x00010000
#define AVR32_PWM_OS_OSL0_OFFSET                                   16
#define AVR32_PWM_OS_OSL0_SIZE                                      1
#define AVR32_PWM_OS_OSL1                                          17
#define AVR32_PWM_OS_OSL1_MASK                             0x00020000
#define AVR32_PWM_OS_OSL1_OFFSET                                   17
#define AVR32_PWM_OS_OSL1_SIZE                                      1
#define AVR32_PWM_OS_OSL2                                          18
#define AVR32_PWM_OS_OSL2_MASK                             0x00040000
#define AVR32_PWM_OS_OSL2_OFFSET                                   18
#define AVR32_PWM_OS_OSL2_SIZE                                      1
#define AVR32_PWM_OS_OSL3                                          19
#define AVR32_PWM_OS_OSL3_MASK                             0x00080000
#define AVR32_PWM_OS_OSL3_OFFSET                                   19
#define AVR32_PWM_OS_OSL3_SIZE                                      1
#define AVR32_PWM_OS_RESETVALUE                            0x00000000
#define AVR32_PWM_PDCDATA                                  0x00000024
#define AVR32_PWM_PDCDATA_MASK                             0x00000000
#define AVR32_PWM_PDCDATA_RESETVALUE                       0x00000000
#define AVR32_PWM_PER                                      0x00000000
#define AVR32_PWM_PREA                                              8
#define AVR32_PWM_PREA_CCK                                 0x00000000
#define AVR32_PWM_PREA_CCK_DIV_1024                        0x0000000a
#define AVR32_PWM_PREA_CCK_DIV_128                         0x00000007
#define AVR32_PWM_PREA_CCK_DIV_16                          0x00000004
#define AVR32_PWM_PREA_CCK_DIV_2                           0x00000001
#define AVR32_PWM_PREA_CCK_DIV_256                         0x00000008
#define AVR32_PWM_PREA_CCK_DIV_32                          0x00000005
#define AVR32_PWM_PREA_CCK_DIV_4                           0x00000002
#define AVR32_PWM_PREA_CCK_DIV_512                         0x00000009
#define AVR32_PWM_PREA_CCK_DIV_64                          0x00000006
#define AVR32_PWM_PREA_CCK_DIV_8                           0x00000003
#define AVR32_PWM_PREA_MASK                                0x00000f00
#define AVR32_PWM_PREA_OFFSET                                       8
#define AVR32_PWM_PREA_SIZE                                         4
#define AVR32_PWM_PREB                                             24
#define AVR32_PWM_PREB_CCK                                 0x00000000
#define AVR32_PWM_PREB_CCK_DIV_1024                        0x0000000a
#define AVR32_PWM_PREB_CCK_DIV_128                         0x00000007
#define AVR32_PWM_PREB_CCK_DIV_16                          0x00000004
#define AVR32_PWM_PREB_CCK_DIV_2                           0x00000001
#define AVR32_PWM_PREB_CCK_DIV_256                         0x00000008
#define AVR32_PWM_PREB_CCK_DIV_32                          0x00000005
#define AVR32_PWM_PREB_CCK_DIV_4                           0x00000002
#define AVR32_PWM_PREB_CCK_DIV_512                         0x00000009
#define AVR32_PWM_PREB_CCK_DIV_64                          0x00000006
#define AVR32_PWM_PREB_CCK_DIV_8                           0x00000003
#define AVR32_PWM_PREB_MASK                                0x0f000000
#define AVR32_PWM_PREB_OFFSET                                      24
#define AVR32_PWM_PREB_SIZE                                         4
#define AVR32_PWM_PTCR                                     0x00000120
#define AVR32_PWM_PTCR_MASK                                0x00000000
#define AVR32_PWM_PTCR_RESETVALUE                          0x00000000
#define AVR32_PWM_PTRCS                                            21
#define AVR32_PWM_PTRCS_MASK                               0x00e00000
#define AVR32_PWM_PTRCS_OFFSET                                     21
#define AVR32_PWM_PTRCS_SIZE                                        3
#define AVR32_PWM_PTRM                                             20
#define AVR32_PWM_PTRM_CMP                                 0x00000001
#define AVR32_PWM_PTRM_MASK                                0x00100000
#define AVR32_PWM_PTRM_OFFSET                                      20
#define AVR32_PWM_PTRM_PER                                 0x00000000
#define AVR32_PWM_PTRM_SIZE                                         1
#define AVR32_PWM_PTSR                                     0x00000124
#define AVR32_PWM_PTSR_MASK                                0x00000000
#define AVR32_PWM_PTSR_RESETVALUE                          0x00000000
#define AVR32_PWM_SCM                                      0x00000020
#define AVR32_PWM_SCM_MASK                                 0x00f3000f
#define AVR32_PWM_SCM_PTRCS                                        21
#define AVR32_PWM_SCM_PTRCS_MASK                           0x00e00000
#define AVR32_PWM_SCM_PTRCS_OFFSET                                 21
#define AVR32_PWM_SCM_PTRCS_SIZE                                    3
#define AVR32_PWM_SCM_PTRM                                         20
#define AVR32_PWM_SCM_PTRM_CMP                             0x00000001
#define AVR32_PWM_SCM_PTRM_MASK                            0x00100000
#define AVR32_PWM_SCM_PTRM_OFFSET                                  20
#define AVR32_PWM_SCM_PTRM_PER                             0x00000000
#define AVR32_PWM_SCM_PTRM_SIZE                                     1
#define AVR32_PWM_SCM_RESETVALUE                           0x00000000
#define AVR32_PWM_SCM_SYNC0                                         0
#define AVR32_PWM_SCM_SYNC0_MASK                           0x00000001
#define AVR32_PWM_SCM_SYNC0_OFFSET                                  0
#define AVR32_PWM_SCM_SYNC0_SIZE                                    1
#define AVR32_PWM_SCM_SYNC1                                         1
#define AVR32_PWM_SCM_SYNC1_MASK                           0x00000002
#define AVR32_PWM_SCM_SYNC1_OFFSET                                  1
#define AVR32_PWM_SCM_SYNC1_SIZE                                    1
#define AVR32_PWM_SCM_SYNC2                                         2
#define AVR32_PWM_SCM_SYNC2_MASK                           0x00000004
#define AVR32_PWM_SCM_SYNC2_OFFSET                                  2
#define AVR32_PWM_SCM_SYNC2_SIZE                                    1
#define AVR32_PWM_SCM_SYNC3                                         3
#define AVR32_PWM_SCM_SYNC3_MASK                           0x00000008
#define AVR32_PWM_SCM_SYNC3_OFFSET                                  3
#define AVR32_PWM_SCM_SYNC3_SIZE                                    1
#define AVR32_PWM_SCM_UPDM                                         16
#define AVR32_PWM_SCM_UPDM_MASK                            0x00030000
#define AVR32_PWM_SCM_UPDM_OFFSET                                  16
#define AVR32_PWM_SCM_UPDM_SIZE                                     2
#define AVR32_PWM_SCUC                                     0x00000028
#define AVR32_PWM_SCUC_MASK                                0x00000001
#define AVR32_PWM_SCUC_RESETVALUE                          0x00000000
#define AVR32_PWM_SCUC_UPDULOCK                                     0
#define AVR32_PWM_SCUC_UPDULOCK_MASK                       0x00000001
#define AVR32_PWM_SCUC_UPDULOCK_OFFSET                              0
#define AVR32_PWM_SCUC_UPDULOCK_SIZE                                1
#define AVR32_PWM_SCUP                                     0x0000002c
#define AVR32_PWM_SCUPUPD                                  0x00000030
#define AVR32_PWM_SCUPUPD_MASK                             0x0000ffff
#define AVR32_PWM_SCUPUPD_RESETVALUE                       0x00000000
#define AVR32_PWM_SCUPUPD_UPRUPD                                    0
#define AVR32_PWM_SCUPUPD_UPRUPD_MASK                      0x0000ffff
#define AVR32_PWM_SCUPUPD_UPRUPD_OFFSET                             0
#define AVR32_PWM_SCUPUPD_UPRUPD_SIZE                              16
#define AVR32_PWM_SCUP_MASK                                0x000000ff
#define AVR32_PWM_SCUP_RESETVALUE                          0x00000000
#define AVR32_PWM_SCUP_UPR                                          0
#define AVR32_PWM_SCUP_UPRCNT                                       4
#define AVR32_PWM_SCUP_UPRCNT_MASK                         0x000000f0
#define AVR32_PWM_SCUP_UPRCNT_OFFSET                                4
#define AVR32_PWM_SCUP_UPRCNT_SIZE                                  4
#define AVR32_PWM_SCUP_UPR_MASK                            0x0000000f
#define AVR32_PWM_SCUP_UPR_OFFSET                                   0
#define AVR32_PWM_SCUP_UPR_SIZE                                     4
#define AVR32_PWM_SR                                       0x0000000c
#define AVR32_PWM_SR_CHID0                                          0
#define AVR32_PWM_SR_CHID0_MASK                            0x00000001
#define AVR32_PWM_SR_CHID0_OFFSET                                   0
#define AVR32_PWM_SR_CHID0_SIZE                                     1
#define AVR32_PWM_SR_CHID1                                          1
#define AVR32_PWM_SR_CHID1_MASK                            0x00000002
#define AVR32_PWM_SR_CHID1_OFFSET                                   1
#define AVR32_PWM_SR_CHID1_SIZE                                     1
#define AVR32_PWM_SR_CHID2                                          2
#define AVR32_PWM_SR_CHID2_MASK                            0x00000004
#define AVR32_PWM_SR_CHID2_OFFSET                                   2
#define AVR32_PWM_SR_CHID2_SIZE                                     1
#define AVR32_PWM_SR_CHID3                                          3
#define AVR32_PWM_SR_CHID3_MASK                            0x00000008
#define AVR32_PWM_SR_CHID3_OFFSET                                   3
#define AVR32_PWM_SR_CHID3_SIZE                                     1
#define AVR32_PWM_SR_MASK                                  0x0000000f
#define AVR32_PWM_SR_RESETVALUE                            0x00000000
#define AVR32_PWM_SWDIS                                    0x00000000
#define AVR32_PWM_SWENA                                    0x00000001
#define AVR32_PWM_SYNC0                                             0
#define AVR32_PWM_SYNC0_MASK                               0x00000001
#define AVR32_PWM_SYNC0_OFFSET                                      0
#define AVR32_PWM_SYNC0_SIZE                                        1
#define AVR32_PWM_SYNC1                                             1
#define AVR32_PWM_SYNC1_MASK                               0x00000002
#define AVR32_PWM_SYNC1_OFFSET                                      1
#define AVR32_PWM_SYNC1_SIZE                                        1
#define AVR32_PWM_SYNC2                                             2
#define AVR32_PWM_SYNC2_MASK                               0x00000004
#define AVR32_PWM_SYNC2_OFFSET                                      2
#define AVR32_PWM_SYNC2_SIZE                                        1
#define AVR32_PWM_SYNC3                                             3
#define AVR32_PWM_SYNC3_MASK                               0x00000008
#define AVR32_PWM_SYNC3_OFFSET                                      3
#define AVR32_PWM_SYNC3_SIZE                                        1
#define AVR32_PWM_TCR                                      0x0000010c
#define AVR32_PWM_TCR_MASK                                 0x00000000
#define AVR32_PWM_TCR_RESETVALUE                           0x00000000
#define AVR32_PWM_TNCR                                     0x0000011c
#define AVR32_PWM_TNCR_MASK                                0x00000000
#define AVR32_PWM_TNCR_RESETVALUE                          0x00000000
#define AVR32_PWM_TNPR                                     0x00000118
#define AVR32_PWM_TNPR_MASK                                0x00000000
#define AVR32_PWM_TNPR_RESETVALUE                          0x00000000
#define AVR32_PWM_TPR                                      0x00000108
#define AVR32_PWM_TPR_MASK                                 0x00000000
#define AVR32_PWM_TPR_RESETVALUE                           0x00000000
#define AVR32_PWM_TXBUFE                                            2
#define AVR32_PWM_TXBUFE_MASK                              0x00000004
#define AVR32_PWM_TXBUFE_OFFSET                                     2
#define AVR32_PWM_TXBUFE_SIZE                                       1
#define AVR32_PWM_UNRE                                              3
#define AVR32_PWM_UNRE_MASK                                0x00000008
#define AVR32_PWM_UNRE_OFFSET                                       3
#define AVR32_PWM_UNRE_SIZE                                         1
#define AVR32_PWM_UPDM                                             16
#define AVR32_PWM_UPDM_MASK                                0x00030000
#define AVR32_PWM_UPDM_OFFSET                                      16
#define AVR32_PWM_UPDM_SIZE                                         2
#define AVR32_PWM_UPDULOCK                                          0
#define AVR32_PWM_UPDULOCK_MASK                            0x00000001
#define AVR32_PWM_UPDULOCK_OFFSET                                   0
#define AVR32_PWM_UPDULOCK_SIZE                                     1
#define AVR32_PWM_UPR                                               0
#define AVR32_PWM_UPRCNT                                            4
#define AVR32_PWM_UPRCNT_MASK                              0x000000f0
#define AVR32_PWM_UPRCNT_OFFSET                                     4
#define AVR32_PWM_UPRCNT_SIZE                                       4
#define AVR32_PWM_UPRUPD                                            0
#define AVR32_PWM_UPRUPD_MASK                              0x0000ffff
#define AVR32_PWM_UPRUPD_OFFSET                                     0
#define AVR32_PWM_UPRUPD_SIZE                                      16
#define AVR32_PWM_UPR_MASK                                 0x0000000f
#define AVR32_PWM_UPR_OFFSET                                        0
#define AVR32_PWM_UPR_SIZE                                          4
#define AVR32_PWM_VERSION                                  0x000000fc
#define AVR32_PWM_VERSION_MASK                             0x00070fff
#define AVR32_PWM_VERSION_MFN                                      16
#define AVR32_PWM_VERSION_MFN_MASK                         0x00070000
#define AVR32_PWM_VERSION_MFN_OFFSET                               16
#define AVR32_PWM_VERSION_MFN_SIZE                                  3
#define AVR32_PWM_VERSION_OFFSET                                    0
#define AVR32_PWM_VERSION_RESETVALUE                       0x00000410
#define AVR32_PWM_VERSION_SIZE                                     12
#define AVR32_PWM_VERSION_VERSION                                   0
#define AVR32_PWM_VERSION_VERSION_MASK                     0x00000fff
#define AVR32_PWM_VERSION_VERSION_OFFSET                            0
#define AVR32_PWM_VERSION_VERSION_SIZE                             12
#define AVR32_PWM_WPCMD                                             0
#define AVR32_PWM_WPCMD_HWENA                              0x00000002
#define AVR32_PWM_WPCMD_MASK                               0x00000003
#define AVR32_PWM_WPCMD_OFFSET                                      0
#define AVR32_PWM_WPCMD_SIZE                                        2
#define AVR32_PWM_WPCMD_SWDIS                              0x00000000
#define AVR32_PWM_WPCMD_SWENA                              0x00000001
#define AVR32_PWM_WPCR                                     0x000000e4
#define AVR32_PWM_WPCR_MASK                                0xffffffff
#define AVR32_PWM_WPCR_RESETVALUE                          0x00000000
#define AVR32_PWM_WPCR_WPCMD                                        0
#define AVR32_PWM_WPCR_WPCMD_HWENA                         0x00000002
#define AVR32_PWM_WPCR_WPCMD_MASK                          0x00000003
#define AVR32_PWM_WPCR_WPCMD_OFFSET                                 0
#define AVR32_PWM_WPCR_WPCMD_SIZE                                   2
#define AVR32_PWM_WPCR_WPCMD_SWDIS                         0x00000000
#define AVR32_PWM_WPCR_WPCMD_SWENA                         0x00000001
#define AVR32_PWM_WPCR_WPKEY                                        8
#define AVR32_PWM_WPCR_WPKEY_KEY                           0x0050574d
#define AVR32_PWM_WPCR_WPKEY_MASK                          0xffffff00
#define AVR32_PWM_WPCR_WPKEY_OFFSET                                 8
#define AVR32_PWM_WPCR_WPKEY_SIZE                                  24
#define AVR32_PWM_WPCR_WPRG0                                        2
#define AVR32_PWM_WPCR_WPRG0_MASK                          0x00000004
#define AVR32_PWM_WPCR_WPRG0_NO                            0x00000000
#define AVR32_PWM_WPCR_WPRG0_OFFSET                                 2
#define AVR32_PWM_WPCR_WPRG0_SIZE                                   1
#define AVR32_PWM_WPCR_WPRG0_YES                           0x00000001
#define AVR32_PWM_WPCR_WPRG1                                        3
#define AVR32_PWM_WPCR_WPRG1_MASK                          0x00000008
#define AVR32_PWM_WPCR_WPRG1_OFFSET                                 3
#define AVR32_PWM_WPCR_WPRG1_SIZE                                   1
#define AVR32_PWM_WPCR_WPRG2                                        4
#define AVR32_PWM_WPCR_WPRG2_MASK                          0x00000010
#define AVR32_PWM_WPCR_WPRG2_OFFSET                                 4
#define AVR32_PWM_WPCR_WPRG2_SIZE                                   1
#define AVR32_PWM_WPCR_WPRG3                                        5
#define AVR32_PWM_WPCR_WPRG3_MASK                          0x00000020
#define AVR32_PWM_WPCR_WPRG3_OFFSET                                 5
#define AVR32_PWM_WPCR_WPRG3_SIZE                                   1
#define AVR32_PWM_WPCR_WPRG4                                        6
#define AVR32_PWM_WPCR_WPRG4_MASK                          0x00000040
#define AVR32_PWM_WPCR_WPRG4_OFFSET                                 6
#define AVR32_PWM_WPCR_WPRG4_SIZE                                   1
#define AVR32_PWM_WPCR_WPRG5                                        7
#define AVR32_PWM_WPCR_WPRG5_MASK                          0x00000080
#define AVR32_PWM_WPCR_WPRG5_OFFSET                                 7
#define AVR32_PWM_WPCR_WPRG5_SIZE                                   1
#define AVR32_PWM_WPHWS0                                            8
#define AVR32_PWM_WPHWS0_MASK                              0x00000100
#define AVR32_PWM_WPHWS0_NO                                0x00000000
#define AVR32_PWM_WPHWS0_OFFSET                                     8
#define AVR32_PWM_WPHWS0_SIZE                                       1
#define AVR32_PWM_WPHWS0_YES                               0x00000001
#define AVR32_PWM_WPHWS1                                            9
#define AVR32_PWM_WPHWS1_MASK                              0x00000200
#define AVR32_PWM_WPHWS1_NO                                0x00000000
#define AVR32_PWM_WPHWS1_OFFSET                                     9
#define AVR32_PWM_WPHWS1_SIZE                                       1
#define AVR32_PWM_WPHWS1_YES                               0x00000001
#define AVR32_PWM_WPHWS2                                           10
#define AVR32_PWM_WPHWS2_MASK                              0x00000400
#define AVR32_PWM_WPHWS2_NO                                0x00000000
#define AVR32_PWM_WPHWS2_OFFSET                                    10
#define AVR32_PWM_WPHWS2_SIZE                                       1
#define AVR32_PWM_WPHWS2_YES                               0x00000001
#define AVR32_PWM_WPHWS3                                           11
#define AVR32_PWM_WPHWS3_MASK                              0x00000800
#define AVR32_PWM_WPHWS3_NO                                0x00000000
#define AVR32_PWM_WPHWS3_OFFSET                                    11
#define AVR32_PWM_WPHWS3_SIZE                                       1
#define AVR32_PWM_WPHWS3_YES                               0x00000001
#define AVR32_PWM_WPHWS4                                           12
#define AVR32_PWM_WPHWS4_MASK                              0x00001000
#define AVR32_PWM_WPHWS4_NO                                0x00000000
#define AVR32_PWM_WPHWS4_OFFSET                                    12
#define AVR32_PWM_WPHWS4_SIZE                                       1
#define AVR32_PWM_WPHWS4_YES                               0x00000001
#define AVR32_PWM_WPHWS5                                           13
#define AVR32_PWM_WPHWS5_MASK                              0x00002000
#define AVR32_PWM_WPHWS5_NO                                0x00000000
#define AVR32_PWM_WPHWS5_OFFSET                                    13
#define AVR32_PWM_WPHWS5_SIZE                                       1
#define AVR32_PWM_WPHWS5_YES                               0x00000001
#define AVR32_PWM_WPKEY                                             8
#define AVR32_PWM_WPKEY_KEY                                0x0050574d
#define AVR32_PWM_WPKEY_MASK                               0xffffff00
#define AVR32_PWM_WPKEY_OFFSET                                      8
#define AVR32_PWM_WPKEY_SIZE                                       24
#define AVR32_PWM_WPRG0                                             2
#define AVR32_PWM_WPRG0_MASK                               0x00000004
#define AVR32_PWM_WPRG0_NO                                 0x00000000
#define AVR32_PWM_WPRG0_OFFSET                                      2
#define AVR32_PWM_WPRG0_SIZE                                        1
#define AVR32_PWM_WPRG0_YES                                0x00000001
#define AVR32_PWM_WPRG1                                             3
#define AVR32_PWM_WPRG1_MASK                               0x00000008
#define AVR32_PWM_WPRG1_OFFSET                                      3
#define AVR32_PWM_WPRG1_SIZE                                        1
#define AVR32_PWM_WPRG2                                             4
#define AVR32_PWM_WPRG2_MASK                               0x00000010
#define AVR32_PWM_WPRG2_OFFSET                                      4
#define AVR32_PWM_WPRG2_SIZE                                        1
#define AVR32_PWM_WPRG3                                             5
#define AVR32_PWM_WPRG3_MASK                               0x00000020
#define AVR32_PWM_WPRG3_OFFSET                                      5
#define AVR32_PWM_WPRG3_SIZE                                        1
#define AVR32_PWM_WPRG4                                             6
#define AVR32_PWM_WPRG4_MASK                               0x00000040
#define AVR32_PWM_WPRG4_OFFSET                                      6
#define AVR32_PWM_WPRG4_SIZE                                        1
#define AVR32_PWM_WPRG5                                             7
#define AVR32_PWM_WPRG5_MASK                               0x00000080
#define AVR32_PWM_WPRG5_OFFSET                                      7
#define AVR32_PWM_WPRG5_SIZE                                        1
#define AVR32_PWM_WPSR                                     0x000000e8
#define AVR32_PWM_WPSR_MASK                                0xffff3fbf
#define AVR32_PWM_WPSR_RESETVALUE                          0x00000000
#define AVR32_PWM_WPSR_WPHWS0                                       8
#define AVR32_PWM_WPSR_WPHWS0_MASK                         0x00000100
#define AVR32_PWM_WPSR_WPHWS0_NO                           0x00000000
#define AVR32_PWM_WPSR_WPHWS0_OFFSET                                8
#define AVR32_PWM_WPSR_WPHWS0_SIZE                                  1
#define AVR32_PWM_WPSR_WPHWS0_YES                          0x00000001
#define AVR32_PWM_WPSR_WPHWS1                                       9
#define AVR32_PWM_WPSR_WPHWS1_MASK                         0x00000200
#define AVR32_PWM_WPSR_WPHWS1_NO                           0x00000000
#define AVR32_PWM_WPSR_WPHWS1_OFFSET                                9
#define AVR32_PWM_WPSR_WPHWS1_SIZE                                  1
#define AVR32_PWM_WPSR_WPHWS1_YES                          0x00000001
#define AVR32_PWM_WPSR_WPHWS2                                      10
#define AVR32_PWM_WPSR_WPHWS2_MASK                         0x00000400
#define AVR32_PWM_WPSR_WPHWS2_NO                           0x00000000
#define AVR32_PWM_WPSR_WPHWS2_OFFSET                               10
#define AVR32_PWM_WPSR_WPHWS2_SIZE                                  1
#define AVR32_PWM_WPSR_WPHWS2_YES                          0x00000001
#define AVR32_PWM_WPSR_WPHWS3                                      11
#define AVR32_PWM_WPSR_WPHWS3_MASK                         0x00000800
#define AVR32_PWM_WPSR_WPHWS3_NO                           0x00000000
#define AVR32_PWM_WPSR_WPHWS3_OFFSET                               11
#define AVR32_PWM_WPSR_WPHWS3_SIZE                                  1
#define AVR32_PWM_WPSR_WPHWS3_YES                          0x00000001
#define AVR32_PWM_WPSR_WPHWS4                                      12
#define AVR32_PWM_WPSR_WPHWS4_MASK                         0x00001000
#define AVR32_PWM_WPSR_WPHWS4_NO                           0x00000000
#define AVR32_PWM_WPSR_WPHWS4_OFFSET                               12
#define AVR32_PWM_WPSR_WPHWS4_SIZE                                  1
#define AVR32_PWM_WPSR_WPHWS4_YES                          0x00000001
#define AVR32_PWM_WPSR_WPHWS5                                      13
#define AVR32_PWM_WPSR_WPHWS5_MASK                         0x00002000
#define AVR32_PWM_WPSR_WPHWS5_NO                           0x00000000
#define AVR32_PWM_WPSR_WPHWS5_OFFSET                               13
#define AVR32_PWM_WPSR_WPHWS5_SIZE                                  1
#define AVR32_PWM_WPSR_WPHWS5_YES                          0x00000001
#define AVR32_PWM_WPSR_WPSWS0                                       0
#define AVR32_PWM_WPSR_WPSWS0_MASK                         0x00000001
#define AVR32_PWM_WPSR_WPSWS0_NO                           0x00000000
#define AVR32_PWM_WPSR_WPSWS0_OFFSET                                0
#define AVR32_PWM_WPSR_WPSWS0_SIZE                                  1
#define AVR32_PWM_WPSR_WPSWS0_YES                          0x00000001
#define AVR32_PWM_WPSR_WPSWS1                                       1
#define AVR32_PWM_WPSR_WPSWS1_MASK                         0x00000002
#define AVR32_PWM_WPSR_WPSWS1_NO                           0x00000000
#define AVR32_PWM_WPSR_WPSWS1_OFFSET                                1
#define AVR32_PWM_WPSR_WPSWS1_SIZE                                  1
#define AVR32_PWM_WPSR_WPSWS1_YES                          0x00000001
#define AVR32_PWM_WPSR_WPSWS2                                       2
#define AVR32_PWM_WPSR_WPSWS2_MASK                         0x00000004
#define AVR32_PWM_WPSR_WPSWS2_NO                           0x00000000
#define AVR32_PWM_WPSR_WPSWS2_OFFSET                                2
#define AVR32_PWM_WPSR_WPSWS2_SIZE                                  1
#define AVR32_PWM_WPSR_WPSWS2_YES                          0x00000001
#define AVR32_PWM_WPSR_WPSWS3                                       3
#define AVR32_PWM_WPSR_WPSWS3_MASK                         0x00000008
#define AVR32_PWM_WPSR_WPSWS3_NO                           0x00000000
#define AVR32_PWM_WPSR_WPSWS3_OFFSET                                3
#define AVR32_PWM_WPSR_WPSWS3_SIZE                                  1
#define AVR32_PWM_WPSR_WPSWS3_YES                          0x00000001
#define AVR32_PWM_WPSR_WPSWS4                                       4
#define AVR32_PWM_WPSR_WPSWS4_MASK                         0x00000010
#define AVR32_PWM_WPSR_WPSWS4_NO                           0x00000000
#define AVR32_PWM_WPSR_WPSWS4_OFFSET                                4
#define AVR32_PWM_WPSR_WPSWS4_SIZE                                  1
#define AVR32_PWM_WPSR_WPSWS4_YES                          0x00000001
#define AVR32_PWM_WPSR_WPSWS5                                       5
#define AVR32_PWM_WPSR_WPSWS5_MASK                         0x00000020
#define AVR32_PWM_WPSR_WPSWS5_NO                           0x00000000
#define AVR32_PWM_WPSR_WPSWS5_OFFSET                                5
#define AVR32_PWM_WPSR_WPSWS5_SIZE                                  1
#define AVR32_PWM_WPSR_WPSWS5_YES                          0x00000001
#define AVR32_PWM_WPSR_WPVS                                         7
#define AVR32_PWM_WPSR_WPVSRC                                      16
#define AVR32_PWM_WPSR_WPVSRC_MASK                         0xffff0000
#define AVR32_PWM_WPSR_WPVSRC_OFFSET                               16
#define AVR32_PWM_WPSR_WPVSRC_SIZE                                 16
#define AVR32_PWM_WPSR_WPVS_MASK                           0x00000080
#define AVR32_PWM_WPSR_WPVS_OFFSET                                  7
#define AVR32_PWM_WPSR_WPVS_SIZE                                    1
#define AVR32_PWM_WPSWS0                                            0
#define AVR32_PWM_WPSWS0_MASK                              0x00000001
#define AVR32_PWM_WPSWS0_NO                                0x00000000
#define AVR32_PWM_WPSWS0_OFFSET                                     0
#define AVR32_PWM_WPSWS0_SIZE                                       1
#define AVR32_PWM_WPSWS0_YES                               0x00000001
#define AVR32_PWM_WPSWS1                                            1
#define AVR32_PWM_WPSWS1_MASK                              0x00000002
#define AVR32_PWM_WPSWS1_NO                                0x00000000
#define AVR32_PWM_WPSWS1_OFFSET                                     1
#define AVR32_PWM_WPSWS1_SIZE                                       1
#define AVR32_PWM_WPSWS1_YES                               0x00000001
#define AVR32_PWM_WPSWS2                                            2
#define AVR32_PWM_WPSWS2_MASK                              0x00000004
#define AVR32_PWM_WPSWS2_NO                                0x00000000
#define AVR32_PWM_WPSWS2_OFFSET                                     2
#define AVR32_PWM_WPSWS2_SIZE                                       1
#define AVR32_PWM_WPSWS2_YES                               0x00000001
#define AVR32_PWM_WPSWS3                                            3
#define AVR32_PWM_WPSWS3_MASK                              0x00000008
#define AVR32_PWM_WPSWS3_NO                                0x00000000
#define AVR32_PWM_WPSWS3_OFFSET                                     3
#define AVR32_PWM_WPSWS3_SIZE                                       1
#define AVR32_PWM_WPSWS3_YES                               0x00000001
#define AVR32_PWM_WPSWS4                                            4
#define AVR32_PWM_WPSWS4_MASK                              0x00000010
#define AVR32_PWM_WPSWS4_NO                                0x00000000
#define AVR32_PWM_WPSWS4_OFFSET                                     4
#define AVR32_PWM_WPSWS4_SIZE                                       1
#define AVR32_PWM_WPSWS4_YES                               0x00000001
#define AVR32_PWM_WPSWS5                                            5
#define AVR32_PWM_WPSWS5_MASK                              0x00000020
#define AVR32_PWM_WPSWS5_NO                                0x00000000
#define AVR32_PWM_WPSWS5_OFFSET                                     5
#define AVR32_PWM_WPSWS5_SIZE                                       1
#define AVR32_PWM_WPSWS5_YES                               0x00000001
#define AVR32_PWM_WPVS                                              7
#define AVR32_PWM_WPVSRC                                           16
#define AVR32_PWM_WPVSRC_MASK                              0xffff0000
#define AVR32_PWM_WPVSRC_OFFSET                                    16
#define AVR32_PWM_WPVSRC_SIZE                                      16
#define AVR32_PWM_WPVS_MASK                                0x00000080
#define AVR32_PWM_WPVS_OFFSET                                       7
#define AVR32_PWM_WPVS_SIZE                                         1
#define AVR32_PWM_WRDY                                              0
#define AVR32_PWM_WRDY_MASK                                0x00000001
#define AVR32_PWM_WRDY_OFFSET                                       0
#define AVR32_PWM_WRDY_SIZE                                         1
#define AVR32_PWM_YES                                      0x00000001




#ifdef __AVR32_ABI_COMPILER__


typedef struct avr32_pwm_clk_t
{
    unsigned int clksel          : 1;
    unsigned int                 : 3;
    unsigned int preb            : 4;
    unsigned int divb            : 8;
    unsigned int                 : 4;
    unsigned int prea            : 4;
    unsigned int diva            : 8;
} avr32_pwm_clk_t;



typedef struct avr32_pwm_ena_t
{
    unsigned int                 :28;
    unsigned int chid3           : 1;
    unsigned int chid2           : 1;
    unsigned int chid1           : 1;
    unsigned int chid0           : 1;
} avr32_pwm_ena_t;



typedef struct avr32_pwm_dis_t
{
    unsigned int                 :28;
    unsigned int chid3           : 1;
    unsigned int chid2           : 1;
    unsigned int chid1           : 1;
    unsigned int chid0           : 1;
} avr32_pwm_dis_t;



typedef struct avr32_pwm_sr_t
{
    unsigned int                 :28;
    unsigned int chid3           : 1;
    unsigned int chid2           : 1;
    unsigned int chid1           : 1;
    unsigned int chid0           : 1;
} avr32_pwm_sr_t;



typedef struct avr32_pwm_ier1_t
{
    unsigned int                 :12;
    unsigned int fchid3          : 1;
    unsigned int fchid2          : 1;
    unsigned int fchid1          : 1;
    unsigned int fchid0          : 1;
    unsigned int                 :12;
    unsigned int chid3           : 1;
    unsigned int chid2           : 1;
    unsigned int chid1           : 1;
    unsigned int chid0           : 1;
} avr32_pwm_ier1_t;



typedef struct avr32_pwm_idr1_t
{
    unsigned int                 :12;
    unsigned int fchid3          : 1;
    unsigned int fchid2          : 1;
    unsigned int fchid1          : 1;
    unsigned int fchid0          : 1;
    unsigned int                 :12;
    unsigned int chid3           : 1;
    unsigned int chid2           : 1;
    unsigned int chid1           : 1;
    unsigned int chid0           : 1;
} avr32_pwm_idr1_t;



typedef struct avr32_pwm_imr1_t
{
    unsigned int                 :12;
    unsigned int fchid3          : 1;
    unsigned int fchid2          : 1;
    unsigned int fchid1          : 1;
    unsigned int fchid0          : 1;
    unsigned int                 :12;
    unsigned int chid3           : 1;
    unsigned int chid2           : 1;
    unsigned int chid1           : 1;
    unsigned int chid0           : 1;
} avr32_pwm_imr1_t;



typedef struct avr32_pwm_isr1_t
{
    unsigned int                 :12;
    unsigned int fchid3          : 1;
    unsigned int fchid2          : 1;
    unsigned int fchid1          : 1;
    unsigned int fchid0          : 1;
    unsigned int                 :12;
    unsigned int chid3           : 1;
    unsigned int chid2           : 1;
    unsigned int chid1           : 1;
    unsigned int chid0           : 1;
} avr32_pwm_isr1_t;



typedef struct avr32_pwm_scm_t
{
    unsigned int                 : 8;
    unsigned int ptrcs           : 3;
    unsigned int ptrm            : 1;
    unsigned int                 : 2;
    unsigned int updm            : 2;
    unsigned int                 :12;
    unsigned int sync3           : 1;
    unsigned int sync2           : 1;
    unsigned int sync1           : 1;
    unsigned int sync0           : 1;
} avr32_pwm_scm_t;



typedef struct avr32_pwm_scuc_t
{
    unsigned int                 :31;
    unsigned int updulock        : 1;
} avr32_pwm_scuc_t;



typedef struct avr32_pwm_scup_t
{
    unsigned int                 :24;
    unsigned int uprcnt          : 4;
    unsigned int upr             : 4;
} avr32_pwm_scup_t;



typedef struct avr32_pwm_scupupd_t
{
    unsigned int                 :16;
    unsigned int uprupd          :16;
} avr32_pwm_scupupd_t;



typedef struct avr32_pwm_ier2_t
{
    unsigned int                 : 8;
    unsigned int cmpu7           : 1;
    unsigned int cmpu6           : 1;
    unsigned int cmpu5           : 1;
    unsigned int cmpu4           : 1;
    unsigned int cmpu3           : 1;
    unsigned int cmpu2           : 1;
    unsigned int cmpu1           : 1;
    unsigned int cmpu0           : 1;
    unsigned int cmpm7           : 1;
    unsigned int cmpm6           : 1;
    unsigned int cmpm5           : 1;
    unsigned int cmpm4           : 1;
    unsigned int cmpm3           : 1;
    unsigned int cmpm2           : 1;
    unsigned int cmpm1           : 1;
    unsigned int cmpm0           : 1;
    unsigned int                 : 4;
    unsigned int unre            : 1;
    unsigned int txbufe          : 1;
    unsigned int endtx           : 1;
    unsigned int wrdy            : 1;
} avr32_pwm_ier2_t;



typedef struct avr32_pwm_idr2_t
{
    unsigned int                 : 8;
    unsigned int cmpu7           : 1;
    unsigned int cmpu6           : 1;
    unsigned int cmpu5           : 1;
    unsigned int cmpu4           : 1;
    unsigned int cmpu3           : 1;
    unsigned int cmpu2           : 1;
    unsigned int cmpu1           : 1;
    unsigned int cmpu0           : 1;
    unsigned int cmpm7           : 1;
    unsigned int cmpm6           : 1;
    unsigned int cmpm5           : 1;
    unsigned int cmpm4           : 1;
    unsigned int cmpm3           : 1;
    unsigned int cmpm2           : 1;
    unsigned int cmpm1           : 1;
    unsigned int cmpm0           : 1;
    unsigned int                 : 4;
    unsigned int unre            : 1;
    unsigned int txbufe          : 1;
    unsigned int endtx           : 1;
    unsigned int wrdy            : 1;
} avr32_pwm_idr2_t;



typedef struct avr32_pwm_imr2_t
{
    unsigned int                 : 8;
    unsigned int cmpu7           : 1;
    unsigned int cmpu6           : 1;
    unsigned int cmpu5           : 1;
    unsigned int cmpu4           : 1;
    unsigned int cmpu3           : 1;
    unsigned int cmpu2           : 1;
    unsigned int cmpu1           : 1;
    unsigned int cmpu0           : 1;
    unsigned int cmpm7           : 1;
    unsigned int cmpm6           : 1;
    unsigned int cmpm5           : 1;
    unsigned int cmpm4           : 1;
    unsigned int cmpm3           : 1;
    unsigned int cmpm2           : 1;
    unsigned int cmpm1           : 1;
    unsigned int cmpm0           : 1;
    unsigned int                 : 4;
    unsigned int unre            : 1;
    unsigned int txbufe          : 1;
    unsigned int endtx           : 1;
    unsigned int wrdy            : 1;
} avr32_pwm_imr2_t;



typedef struct avr32_pwm_isr2_t
{
    unsigned int                 : 8;
    unsigned int cmpu7           : 1;
    unsigned int cmpu6           : 1;
    unsigned int cmpu5           : 1;
    unsigned int cmpu4           : 1;
    unsigned int cmpu3           : 1;
    unsigned int cmpu2           : 1;
    unsigned int cmpu1           : 1;
    unsigned int cmpu0           : 1;
    unsigned int cmpm7           : 1;
    unsigned int cmpm6           : 1;
    unsigned int cmpm5           : 1;
    unsigned int cmpm4           : 1;
    unsigned int cmpm3           : 1;
    unsigned int cmpm2           : 1;
    unsigned int cmpm1           : 1;
    unsigned int cmpm0           : 1;
    unsigned int                 : 4;
    unsigned int unre            : 1;
    unsigned int txbufe          : 1;
    unsigned int endtx           : 1;
    unsigned int wrdy            : 1;
} avr32_pwm_isr2_t;



typedef struct avr32_pwm_oov_t
{
    unsigned int                 :12;
    unsigned int oovl3           : 1;
    unsigned int oovl2           : 1;
    unsigned int oovl1           : 1;
    unsigned int oovl0           : 1;
    unsigned int                 :12;
    unsigned int oovh3           : 1;
    unsigned int oovh2           : 1;
    unsigned int oovh1           : 1;
    unsigned int oovh0           : 1;
} avr32_pwm_oov_t;



typedef struct avr32_pwm_os_t
{
    unsigned int                 :12;
    unsigned int osl3            : 1;
    unsigned int osl2            : 1;
    unsigned int osl1            : 1;
    unsigned int osl0            : 1;
    unsigned int                 :12;
    unsigned int osh3            : 1;
    unsigned int osh2            : 1;
    unsigned int osh1            : 1;
    unsigned int osh0            : 1;
} avr32_pwm_os_t;



typedef struct avr32_pwm_oss_t
{
    unsigned int                 :12;
    unsigned int ossl3           : 1;
    unsigned int ossl2           : 1;
    unsigned int ossl1           : 1;
    unsigned int ossl0           : 1;
    unsigned int                 :12;
    unsigned int ossh3           : 1;
    unsigned int ossh2           : 1;
    unsigned int ossh1           : 1;
    unsigned int ossh0           : 1;
} avr32_pwm_oss_t;



typedef struct avr32_pwm_osc_t
{
    unsigned int                 :12;
    unsigned int oscl3           : 1;
    unsigned int oscl2           : 1;
    unsigned int oscl1           : 1;
    unsigned int oscl0           : 1;
    unsigned int                 :12;
    unsigned int osch3           : 1;
    unsigned int osch2           : 1;
    unsigned int osch1           : 1;
    unsigned int osch0           : 1;
} avr32_pwm_osc_t;



typedef struct avr32_pwm_ossupd_t
{
    unsigned int                 :12;
    unsigned int ossupl3         : 1;
    unsigned int ossupl2         : 1;
    unsigned int ossupl1         : 1;
    unsigned int ossupl0         : 1;
    unsigned int                 :13;
    unsigned int ossuph2         : 1;
    unsigned int ossuph1         : 1;
    unsigned int ossuph0         : 1;
} avr32_pwm_ossupd_t;



typedef struct avr32_pwm_oscupd_t
{
    unsigned int                 :12;
    unsigned int oscupl3         : 1;
    unsigned int oscupl2         : 1;
    unsigned int oscupl1         : 1;
    unsigned int oscupl0         : 1;
    unsigned int                 :12;
    unsigned int oscuph3         : 1;
    unsigned int oscuph2         : 1;
    unsigned int oscuph1         : 1;
    unsigned int oscuph0         : 1;
} avr32_pwm_oscupd_t;



typedef struct avr32_pwm_fmr_t
{
    unsigned int                 :11;
    unsigned int ffil4           : 1;
    unsigned int ffil3           : 1;
    unsigned int ffil2           : 1;
    unsigned int ffil1           : 1;
    unsigned int ffil0           : 1;
    unsigned int                 : 3;
    unsigned int fmod4           : 1;
    unsigned int fmod3           : 1;
    unsigned int fmod2           : 1;
    unsigned int fmod1           : 1;
    unsigned int fmod0           : 1;
    unsigned int                 : 3;
    unsigned int fpol4           : 1;
    unsigned int fpol3           : 1;
    unsigned int fpol2           : 1;
    unsigned int fpol1           : 1;
    unsigned int fpol0           : 1;
} avr32_pwm_fmr_t;



typedef struct avr32_pwm_fsr_t
{
    unsigned int                 :19;
    unsigned int fs4             : 1;
    unsigned int fs3             : 1;
    unsigned int fs2             : 1;
    unsigned int fs1             : 1;
    unsigned int fs0             : 1;
    unsigned int                 : 3;
    unsigned int fiv4            : 1;
    unsigned int fiv3            : 1;
    unsigned int fiv2            : 1;
    unsigned int fiv1            : 1;
    unsigned int fiv0            : 1;
} avr32_pwm_fsr_t;



typedef struct avr32_pwm_fcr_t
{
    unsigned int                 :27;
    unsigned int fclr4           : 1;
    unsigned int fclr3           : 1;
    unsigned int fclr2           : 1;
    unsigned int fclr1           : 1;
    unsigned int fclr0           : 1;
} avr32_pwm_fcr_t;



typedef struct avr32_pwm_fpv_t
{
    unsigned int                 :12;
    unsigned int fpvl3           : 1;
    unsigned int fpvl2           : 1;
    unsigned int fpvl1           : 1;
    unsigned int fpvl0           : 1;
    unsigned int                 :12;
    unsigned int fpvh3           : 1;
    unsigned int fpvh2           : 1;
    unsigned int fpvh1           : 1;
    unsigned int fpvh0           : 1;
} avr32_pwm_fpv_t;



typedef struct avr32_pwm_fpe1_t
{
    unsigned int                 : 3;
    unsigned int fpe3            : 5;
    unsigned int                 : 3;
    unsigned int fpe2            : 5;
    unsigned int                 : 3;
    unsigned int fpe1            : 5;
    unsigned int                 : 3;
    unsigned int fpe0            : 5;
} avr32_pwm_fpe1_t;



typedef struct avr32_pwm_elxmr_t
{
    unsigned int                 :24;
    unsigned int csel7           : 1;
    unsigned int csel6           : 1;
    unsigned int csel5           : 1;
    unsigned int csel4           : 1;
    unsigned int csel3           : 1;
    unsigned int csel2           : 1;
    unsigned int csel1           : 1;
    unsigned int csel0           : 1;
} avr32_pwm_elxmr_t;



typedef struct avr32_pwm_wpcr_t
{
    unsigned int wpkey           :24;
    unsigned int wprg5           : 1;
    unsigned int wprg4           : 1;
    unsigned int wprg3           : 1;
    unsigned int wprg2           : 1;
    unsigned int wprg1           : 1;
    unsigned int wprg0           : 1;
    unsigned int wpcmd           : 2;
} avr32_pwm_wpcr_t;



typedef struct avr32_pwm_wpsr_t
{
    unsigned int wpvsrc          :16;
    unsigned int                 : 2;
    unsigned int wphws5          : 1;
    unsigned int wphws4          : 1;
    unsigned int wphws3          : 1;
    unsigned int wphws2          : 1;
    unsigned int wphws1          : 1;
    unsigned int wphws0          : 1;
    unsigned int wpvs            : 1;
    unsigned int                 : 1;
    unsigned int wpsws5          : 1;
    unsigned int wpsws4          : 1;
    unsigned int wpsws3          : 1;
    unsigned int wpsws2          : 1;
    unsigned int wpsws1          : 1;
    unsigned int wpsws0          : 1;
} avr32_pwm_wpsr_t;



typedef struct avr32_pwm_version_t
{
    unsigned int                 :13;
    unsigned int mfn             : 3;
    unsigned int                 : 4;
    unsigned int version         :12;
} avr32_pwm_version_t;



typedef struct avr32_pwm_cmp0v_t
{
    unsigned int                 : 7;
    unsigned int cvm             : 1;
    unsigned int                 : 4;
    unsigned int cv              :20;
} avr32_pwm_cmp0v_t;



typedef struct avr32_pwm_cmp0vupd_t
{
    unsigned int                 : 7;
    unsigned int cvmupd          : 1;
    unsigned int                 : 4;
    unsigned int cvupd           :20;
} avr32_pwm_cmp0vupd_t;



typedef struct avr32_pwm_cmp0m_t
{
    unsigned int                 : 8;
    unsigned int cuprcnt         : 4;
    unsigned int cupr            : 4;
    unsigned int cprcnt          : 4;
    unsigned int cpr             : 4;
    unsigned int ctr             : 4;
    unsigned int                 : 3;
    unsigned int cen             : 1;
} avr32_pwm_cmp0m_t;



typedef struct avr32_pwm_cmp0mupd_t
{
    unsigned int                 :12;
    unsigned int cuprupd         : 4;
    unsigned int                 : 4;
    unsigned int cprupd          : 4;
    unsigned int ctrupd          : 4;
    unsigned int                 : 3;
    unsigned int cenupd          : 1;
} avr32_pwm_cmp0mupd_t;



typedef struct avr32_pwm_cmr_t
{
    unsigned int                 :13;
    unsigned int dtli            : 1;
    unsigned int dthi            : 1;
    unsigned int dte             : 1;
    unsigned int                 : 5;
    unsigned int ces             : 1;
    unsigned int cpol            : 1;
    unsigned int calg            : 1;
    unsigned int                 : 4;
    unsigned int cpre            : 4;
} avr32_pwm_cmr_t;



typedef struct avr32_pwm_cdty_t
{
    unsigned int                 :12;
    unsigned int cdty            :20;
} avr32_pwm_cdty_t;



typedef struct avr32_pwm_cdtyupd_t
{
    unsigned int                 :12;
    unsigned int cdtyupd         :20;
} avr32_pwm_cdtyupd_t;



typedef struct avr32_pwm_cprd_t
{
    unsigned int                 :12;
    unsigned int cprd            :20;
} avr32_pwm_cprd_t;



typedef struct avr32_pwm_cprdupd_t
{
    unsigned int                 :12;
    unsigned int cprdupd         :20;
} avr32_pwm_cprdupd_t;



typedef struct avr32_pwm_ccnt_t
{
    unsigned int                 :12;
    unsigned int cnt             :20;
} avr32_pwm_ccnt_t;



typedef struct avr32_pwm_dt_t
{
    unsigned int dtl             :16;
    unsigned int dth             :16;
} avr32_pwm_dt_t;



typedef struct avr32_pwm_dtupd_t
{
    unsigned int dtlupd          :16;
    unsigned int dthupd          :16;
} avr32_pwm_dtupd_t;


typedef struct avr32_pwm_channel_t
{
    union
    {
        unsigned long   cmr;    // 0x0000
        avr32_pwm_cmr_t CMR;
    };
    union
    {
        unsigned long    cdty;  // 0x0004
        avr32_pwm_cdty_t CDTY;
    };
    union
    {
        unsigned long       cdtyupd;    // 0x0008
        avr32_pwm_cdtyupd_t CDTYUPD;
    };
    union
    {
        unsigned long    cprd;  // 0x000c
        avr32_pwm_cprd_t CPRD;
    };
    union
    {
        unsigned long       cprdupd;    // 0x0010
        avr32_pwm_cprdupd_t CPRDUPD;
    };
    const unsigned long ccnt;   // 0x0014
    union
    {
        unsigned long  dt;  // 0x0018
        avr32_pwm_dt_t DT;
    };
    union
    {
        unsigned long     dtupd;  // 0x001c
        avr32_pwm_dtupd_t DTUPD;
    };
} avr32_pwm_channel_t;


typedef struct avr32_pwm_comp_t
{
    union
    {
        unsigned long     cmp0v;  // 0x0000
        avr32_pwm_cmp0v_t CMP0V;
    };
    union
    {
        unsigned long        cmp0vupd;  // 0x0004
        avr32_pwm_cmp0vupd_t CMP0VUPD;
    };
    union
    {
        unsigned long     cmp0m;  // 0x0008
        avr32_pwm_cmp0m_t CMP0M;
    };
    union
    {
        unsigned long        cmp0mupd;  // 0x000c
        avr32_pwm_cmp0mupd_t CMP0MUPD;
    };
} avr32_pwm_comp_t;



typedef struct avr32_pwm_t
{
    union
    {
        unsigned long   clk; // 0x0000
        avr32_pwm_clk_t CLK;
    };
    union
    {
        unsigned long   ena; // 0x0004
        avr32_pwm_ena_t ENA;
    };
    union
    {
        unsigned long   dis; // 0x0008
        avr32_pwm_dis_t DIS;
    };
    union
    {
        const unsigned long  sr; // 0x000c
        const avr32_pwm_sr_t SR;
    };
    union
    {
        unsigned long    ier1; // 0x0010
        avr32_pwm_ier1_t IER1;
    };
    union
    {
        unsigned long    idr1;  // 0x0014
        avr32_pwm_idr1_t IDR1;
    };
    union
    {
        const unsigned long    imr1;    // 0x0018
        const avr32_pwm_imr1_t IMR1;
    };
    union
    {
        const unsigned long    isr1;    // 0x001c
        const avr32_pwm_isr1_t ISR1;
    };
    union
    {
        unsigned long   scm;    // 0x0020
        avr32_pwm_scm_t SCM;
    };
    unsigned long pdcdata;  // 0x0024
    union
    {
        unsigned long    scuc;    // 0x0028
        avr32_pwm_scuc_t SCUC;
    };
    union
    {
        unsigned long    scup;    // 0x002c
        avr32_pwm_scup_t SCUP;
    };
    union
    {
        unsigned long       scupupd; // 0x0030
        avr32_pwm_scupupd_t SCUPUPD;
    };
    union
    {
        unsigned long    ier2;    // 0x0034
        avr32_pwm_ier2_t IER2;
    };
    union
    {
        unsigned long    idr2;    // 0x0038
        avr32_pwm_idr2_t IDR2;
    };
    union
    {
        const unsigned long    imr2;  // 0x003c
        const avr32_pwm_imr2_t IMR2;
    };
    union
    {
        const unsigned long    isr2;  // 0x0040
        const avr32_pwm_isr2_t ISR2;
    };
    union
    {
        unsigned long   oov; // 0x0044
        avr32_pwm_oov_t OOV;
    };
    union
    {
        unsigned long  os;  // 0x0048
        avr32_pwm_os_t OS;
    };
    union
    {
        unsigned long   oss; // 0x004c
        avr32_pwm_oss_t OSS;
    };
    union
    {
        unsigned long   osc; // 0x0050
        avr32_pwm_osc_t OSC;
    };
    union
    {
        unsigned long      ossupd;  // 0x0054
        avr32_pwm_ossupd_t OSSUPD;
    };
    union
    {
        unsigned long      oscupd;  // 0x0058
        avr32_pwm_oscupd_t OSCUPD;
    };
    union
    {
        unsigned long   fmr; // 0x005c
        avr32_pwm_fmr_t FMR;
    };
    union
    {
        const unsigned long   fsr;   // 0x0060
        const avr32_pwm_fsr_t FSR;
    };
    union
    {
        unsigned long   fcr; // 0x0064
        avr32_pwm_fcr_t FCR;
    };
    union
    {
        unsigned long   fpv; // 0x0068
        avr32_pwm_fpv_t FPV;
    };
    union
    {
        unsigned long    fpe1;    // 0x006c
        avr32_pwm_fpe1_t FPE1;
    };
    unsigned int :32;   // 0x0070
    unsigned int :32;   // 0x0074
    unsigned int :32;   // 0x0078
    union
    {
        unsigned long     elxmr[AVR32_PWM_EVT_NUM]; // 0x007c
        avr32_pwm_elxmr_t ELXMR[AVR32_PWM_EVT_NUM];
    };
#if AVR32_PWM_EVT_NUM < 2
    unsigned long  elxmr_reserved[2 - AVR32_PWM_EVT_NUM]; // Padding
#endif
    unsigned int :32;   // 0x0084
    unsigned int :32;   // 0x0088
    unsigned int :32;   // 0x008c
    unsigned int :32;   // 0x0090
    unsigned int :32;   // 0x0094
    unsigned int :32;   // 0x0098
    unsigned int :32;   // 0x009c
    unsigned int :32;   // 0x00a0
    unsigned int :32;   // 0x00a4
    unsigned int :32;   // 0x00a8
    unsigned int :32;   // 0x00ac
    unsigned int :32;   // 0x00b0
    unsigned int :32;   // 0x00b4
    unsigned int :32;   // 0x00b8
    unsigned int :32;   // 0x00bc
    unsigned int :32;   // 0x00c0
    unsigned int :32;   // 0x00c4
    unsigned int :32;   // 0x00c8
    unsigned int :32;   // 0x00cc
    unsigned int :32;   // 0x00d0
    unsigned int :32;   // 0x00d4
    unsigned int :32;   // 0x00d8
    unsigned int :32;   // 0x00dc
    unsigned int :32;   // 0x00e0
    union
    {
        unsigned long                  wpcr      ;//0x00e4
        avr32_pwm_wpcr_t               WPCR      ;
    };
    union
    {
        const unsigned long                  wpsr      ;//0x00e8
        const avr32_pwm_wpsr_t               WPSR      ;
    };
    unsigned int                   :32       ;//0x00ec
    unsigned int                   :32       ;//0x00f0
    unsigned int                   :32       ;//0x00f4
    unsigned int                   :32       ;//0x00f8
    union
    {
        const unsigned long                  version   ;//0x00fc
        const avr32_pwm_version_t            VERSION   ;
    };
    unsigned int                   :32       ;//0x0100
    unsigned int                   :32       ;//0x0104
    unsigned long                  tpr       ;//0x0108
    unsigned long                  tcr       ;//0x010c
    unsigned int                   :32       ;//0x0110
    unsigned int                   :32       ;//0x0114
    unsigned long                  tnpr      ;//0x0118
    unsigned long                  tncr      ;//0x011c
    unsigned long                  ptcr      ;//0x0120
    unsigned long                  ptsr      ;//0x0124
    unsigned int                   :32       ;//0x0128
    unsigned int                   :32       ;//0x012c
    avr32_pwm_comp_t comp[AVR32_PWM_CMP_NUM];//0x130
#if AVR32_PWM_CMP_NUM < 8
    avr32_pwm_comp_t comp_reserved[8 - AVR32_PWM_CMP_NUM];//Padding
#endif
    unsigned int                   :32; // 0x01b0
    unsigned int                   :32; // 0x01b4
    unsigned int                   :32; // 0x01b8
    unsigned int                   :32; // 0x01bc
    unsigned int                   :32; // 0x01c0
    unsigned int                   :32; // 0x01c4
    unsigned int                   :32; // 0x01c8
    unsigned int                   :32; // 0x01cc
    unsigned int                   :32; // 0x01d0
    unsigned int                   :32; // 0x01d4
    unsigned int                   :32; // 0x01d8
    unsigned int                   :32; // 0x01dc
    unsigned int                   :32; // 0x01e0
    unsigned int                   :32; // 0x01e4
    unsigned int                   :32; // 0x01e8
    unsigned int                   :32; // 0x01ec
    unsigned int                   :32; // 0x01f0
    unsigned int                   :32; // 0x01f4
    unsigned int                   :32; // 0x01f8
    unsigned int                   :32; // 0x01fc
    avr32_pwm_channel_t channel[AVR32_PWM_CHANNEL_NUM]; // 0x200
#if AVR32_PWM_CHANNEL_NUM < 4
    avr32_pwm_channel_t channel_reserved[4 - AVR32_PWM_CHANNEL_NUM]; // Padding
#endif
} avr32_pwm_t;



#endif /* #ifdef __AVR32_ABI_COMPILER__ */

#endif /* #ifdef AVR32_PWM_410_H_INCLUDED */


