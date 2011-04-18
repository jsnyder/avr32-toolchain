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
#ifndef AVR32_ACIFB_201_H_INCLUDED
#define AVR32_ACIFB_201_H_INCLUDED

#define AVR32_ACIFB_H_VERSION 201

#include "avr32/abi.h"


/*
 Note to user:

 The following defines are always generated:
 - Register offset: AVR32_ACIFB_<register>
 - Bitfield mask:   AVR32_ACIFB_<register>_<bitfield>
 - Bitfield offset: AVR32_ACIFB_<register>_<bitfield>_OFFSET
 - Bitfield size:   AVR32_ACIFB_<register>_<bitfield>_SIZE
 - Bitfield values: AVR32_ACIFB_<register>_<bitfield>_<value name>

 The following defines are generated if they don't cause ambiguities,
 i.e. the name is unique, or all values with that name are the same.
 - Bitfield mask:   AVR32_ACIFB_<bitfield>
 - Bitfield offset: AVR32_ACIFB_<bitfield>_OFFSET
 - Bitfield size:   AVR32_ACIFB_<bitfield>_SIZE
 - Bitfield values: AVR32_ACIFB_<bitfield>_<value name>
 - Bitfield values: AVR32_ACIFB_<value name>

 All defines are sorted alphabetically.
*/


#define AVR32_ACIFB_ACCS0                                             0
#define AVR32_ACIFB_ACCS0_MASK                               0x00000001
#define AVR32_ACIFB_ACCS0_OFFSET                                      0
#define AVR32_ACIFB_ACCS0_SIZE                                        1
#define AVR32_ACIFB_ACCS1                                             2
#define AVR32_ACIFB_ACCS1_MASK                               0x00000004
#define AVR32_ACIFB_ACCS1_OFFSET                                      2
#define AVR32_ACIFB_ACCS1_SIZE                                        1
#define AVR32_ACIFB_ACCS2                                             4
#define AVR32_ACIFB_ACCS2_MASK                               0x00000010
#define AVR32_ACIFB_ACCS2_OFFSET                                      4
#define AVR32_ACIFB_ACCS2_SIZE                                        1
#define AVR32_ACIFB_ACCS3                                             6
#define AVR32_ACIFB_ACCS3_MASK                               0x00000040
#define AVR32_ACIFB_ACCS3_OFFSET                                      6
#define AVR32_ACIFB_ACCS3_SIZE                                        1
#define AVR32_ACIFB_ACCS4                                             8
#define AVR32_ACIFB_ACCS4_MASK                               0x00000100
#define AVR32_ACIFB_ACCS4_OFFSET                                      8
#define AVR32_ACIFB_ACCS4_SIZE                                        1
#define AVR32_ACIFB_ACCS5                                            10
#define AVR32_ACIFB_ACCS5_MASK                               0x00000400
#define AVR32_ACIFB_ACCS5_OFFSET                                     10
#define AVR32_ACIFB_ACCS5_SIZE                                        1
#define AVR32_ACIFB_ACCS6                                            12
#define AVR32_ACIFB_ACCS6_MASK                               0x00001000
#define AVR32_ACIFB_ACCS6_OFFSET                                     12
#define AVR32_ACIFB_ACCS6_SIZE                                        1
#define AVR32_ACIFB_ACCS7                                            14
#define AVR32_ACIFB_ACCS7_MASK                               0x00004000
#define AVR32_ACIFB_ACCS7_OFFSET                                     14
#define AVR32_ACIFB_ACCS7_SIZE                                        1
#define AVR32_ACIFB_ACIMLP5                                           5
#define AVR32_ACIFB_ACIMLP5_MASK                             0x00000020
#define AVR32_ACIFB_ACIMLP5_OFFSET                                    5
#define AVR32_ACIFB_ACIMLP5_SIZE                                      1
#define AVR32_ACIFB_ACIMLP6                                           6
#define AVR32_ACIFB_ACIMLP6_MASK                             0x00000040
#define AVR32_ACIFB_ACIMLP6_OFFSET                                    6
#define AVR32_ACIFB_ACIMLP6_SIZE                                      1
#define AVR32_ACIFB_ACIMPL0                                           0
#define AVR32_ACIFB_ACIMPL0_MASK                             0x00000001
#define AVR32_ACIFB_ACIMPL0_OFFSET                                    0
#define AVR32_ACIFB_ACIMPL0_SIZE                                      1
#define AVR32_ACIFB_ACIMPL1                                           1
#define AVR32_ACIFB_ACIMPL1_MASK                             0x00000002
#define AVR32_ACIFB_ACIMPL1_OFFSET                                    1
#define AVR32_ACIFB_ACIMPL1_SIZE                                      1
#define AVR32_ACIFB_ACIMPL2                                           2
#define AVR32_ACIFB_ACIMPL2_MASK                             0x00000004
#define AVR32_ACIFB_ACIMPL2_OFFSET                                    2
#define AVR32_ACIFB_ACIMPL2_SIZE                                      1
#define AVR32_ACIFB_ACIMPL3                                           3
#define AVR32_ACIFB_ACIMPL3_MASK                             0x00000008
#define AVR32_ACIFB_ACIMPL3_OFFSET                                    3
#define AVR32_ACIFB_ACIMPL3_SIZE                                      1
#define AVR32_ACIFB_ACIMPL4                                           4
#define AVR32_ACIFB_ACIMPL4_MASK                             0x00000010
#define AVR32_ACIFB_ACIMPL4_OFFSET                                    4
#define AVR32_ACIFB_ACIMPL4_SIZE                                      1
#define AVR32_ACIFB_ACIMPL7                                           7
#define AVR32_ACIFB_ACIMPL7_MASK                             0x00000080
#define AVR32_ACIFB_ACIMPL7_OFFSET                                    7
#define AVR32_ACIFB_ACIMPL7_SIZE                                      1
#define AVR32_ACIFB_ACINT0                                            0
#define AVR32_ACIFB_ACINT0_MASK                              0x00000001
#define AVR32_ACIFB_ACINT0_OFFSET                                     0
#define AVR32_ACIFB_ACINT0_SIZE                                       1
#define AVR32_ACIFB_ACINT1                                            2
#define AVR32_ACIFB_ACINT1_MASK                              0x00000004
#define AVR32_ACIFB_ACINT1_OFFSET                                     2
#define AVR32_ACIFB_ACINT1_SIZE                                       1
#define AVR32_ACIFB_ACINT2                                            4
#define AVR32_ACIFB_ACINT2_MASK                              0x00000010
#define AVR32_ACIFB_ACINT2_OFFSET                                     4
#define AVR32_ACIFB_ACINT2_SIZE                                       1
#define AVR32_ACIFB_ACINT3                                            6
#define AVR32_ACIFB_ACINT3_MASK                              0x00000040
#define AVR32_ACIFB_ACINT3_OFFSET                                     6
#define AVR32_ACIFB_ACINT3_SIZE                                       1
#define AVR32_ACIFB_ACINT4                                            8
#define AVR32_ACIFB_ACINT4_MASK                              0x00000100
#define AVR32_ACIFB_ACINT4_OFFSET                                     8
#define AVR32_ACIFB_ACINT4_SIZE                                       1
#define AVR32_ACIFB_ACINT5                                           10
#define AVR32_ACIFB_ACINT5_MASK                              0x00000400
#define AVR32_ACIFB_ACINT5_OFFSET                                    10
#define AVR32_ACIFB_ACINT5_SIZE                                       1
#define AVR32_ACIFB_ACINT6                                           12
#define AVR32_ACIFB_ACINT6_MASK                              0x00001000
#define AVR32_ACIFB_ACINT6_OFFSET                                    12
#define AVR32_ACIFB_ACINT6_SIZE                                       1
#define AVR32_ACIFB_ACINT7                                           14
#define AVR32_ACIFB_ACINT7_MASK                              0x00004000
#define AVR32_ACIFB_ACINT7_OFFSET                                    14
#define AVR32_ACIFB_ACINT7_SIZE                                       1
#define AVR32_ACIFB_ACRDY0                                            1
#define AVR32_ACIFB_ACRDY0_MASK                              0x00000002
#define AVR32_ACIFB_ACRDY0_OFFSET                                     1
#define AVR32_ACIFB_ACRDY0_SIZE                                       1
#define AVR32_ACIFB_ACRDY1                                            3
#define AVR32_ACIFB_ACRDY1_MASK                              0x00000008
#define AVR32_ACIFB_ACRDY1_OFFSET                                     3
#define AVR32_ACIFB_ACRDY1_SIZE                                       1
#define AVR32_ACIFB_ACRDY2                                            5
#define AVR32_ACIFB_ACRDY2_MASK                              0x00000020
#define AVR32_ACIFB_ACRDY2_OFFSET                                     5
#define AVR32_ACIFB_ACRDY2_SIZE                                       1
#define AVR32_ACIFB_ACRDY3                                            7
#define AVR32_ACIFB_ACRDY3_MASK                              0x00000080
#define AVR32_ACIFB_ACRDY3_OFFSET                                     7
#define AVR32_ACIFB_ACRDY3_SIZE                                       1
#define AVR32_ACIFB_ACRDY4                                            9
#define AVR32_ACIFB_ACRDY4_MASK                              0x00000200
#define AVR32_ACIFB_ACRDY4_OFFSET                                     9
#define AVR32_ACIFB_ACRDY4_SIZE                                       1
#define AVR32_ACIFB_ACRDY5                                           11
#define AVR32_ACIFB_ACRDY5_MASK                              0x00000800
#define AVR32_ACIFB_ACRDY5_OFFSET                                    11
#define AVR32_ACIFB_ACRDY5_SIZE                                       1
#define AVR32_ACIFB_ACRDY6                                           13
#define AVR32_ACIFB_ACRDY6_MASK                              0x00002000
#define AVR32_ACIFB_ACRDY6_OFFSET                                    13
#define AVR32_ACIFB_ACRDY6_SIZE                                       1
#define AVR32_ACIFB_ACRDY7                                           15
#define AVR32_ACIFB_ACRDY7_MASK                              0x00008000
#define AVR32_ACIFB_ACRDY7_OFFSET                                    15
#define AVR32_ACIFB_ACRDY7_SIZE                                       1
#define AVR32_ACIFB_ACTEST                                            7
#define AVR32_ACIFB_ACTEST0                                           0
#define AVR32_ACIFB_ACTEST0_MASK                             0x00000001
#define AVR32_ACIFB_ACTEST0_OFFSET                                    0
#define AVR32_ACIFB_ACTEST0_SIZE                                      1
#define AVR32_ACIFB_ACTEST1                                           1
#define AVR32_ACIFB_ACTEST1_MASK                             0x00000002
#define AVR32_ACIFB_ACTEST1_OFFSET                                    1
#define AVR32_ACIFB_ACTEST1_SIZE                                      1
#define AVR32_ACIFB_ACTEST2                                           2
#define AVR32_ACIFB_ACTEST2_MASK                             0x00000004
#define AVR32_ACIFB_ACTEST2_OFFSET                                    2
#define AVR32_ACIFB_ACTEST2_SIZE                                      1
#define AVR32_ACIFB_ACTEST3                                           3
#define AVR32_ACIFB_ACTEST3_MASK                             0x00000008
#define AVR32_ACIFB_ACTEST3_OFFSET                                    3
#define AVR32_ACIFB_ACTEST3_SIZE                                      1
#define AVR32_ACIFB_ACTEST4                                           4
#define AVR32_ACIFB_ACTEST4_MASK                             0x00000010
#define AVR32_ACIFB_ACTEST4_OFFSET                                    4
#define AVR32_ACIFB_ACTEST4_SIZE                                      1
#define AVR32_ACIFB_ACTEST5                                           5
#define AVR32_ACIFB_ACTEST5_MASK                             0x00000020
#define AVR32_ACIFB_ACTEST5_OFFSET                                    5
#define AVR32_ACIFB_ACTEST5_SIZE                                      1
#define AVR32_ACIFB_ACTEST6                                           6
#define AVR32_ACIFB_ACTEST6_MASK                             0x00000040
#define AVR32_ACIFB_ACTEST6_OFFSET                                    6
#define AVR32_ACIFB_ACTEST6_SIZE                                      1
#define AVR32_ACIFB_ACTEST7                                           7
#define AVR32_ACIFB_ACTEST7_MASK                             0x00000080
#define AVR32_ACIFB_ACTEST7_OFFSET                                    7
#define AVR32_ACIFB_ACTEST7_SIZE                                      1
#define AVR32_ACIFB_ACTEST_MASK                              0x00000080
#define AVR32_ACIFB_ACTEST_OFFSET                                     7
#define AVR32_ACIFB_ACTEST_SIZE                                       1
#define AVR32_ACIFB_CONF0                                    0x000000d0
#define AVR32_ACIFB_CONF0_EVENN                                      17
#define AVR32_ACIFB_CONF0_EVENN_MASK                         0x00020000
#define AVR32_ACIFB_CONF0_EVENN_OFFSET                               17
#define AVR32_ACIFB_CONF0_EVENN_SIZE                                  1
#define AVR32_ACIFB_CONF0_EVENP                                      16
#define AVR32_ACIFB_CONF0_EVENP_MASK                         0x00010000
#define AVR32_ACIFB_CONF0_EVENP_OFFSET                               16
#define AVR32_ACIFB_CONF0_EVENP_SIZE                                  1
#define AVR32_ACIFB_CONF0_FLEN                                       28
#define AVR32_ACIFB_CONF0_FLEN_MASK                          0x70000000
#define AVR32_ACIFB_CONF0_FLEN_OFFSET                                28
#define AVR32_ACIFB_CONF0_FLEN_SIZE                                   3
#define AVR32_ACIFB_CONF0_HYS                                        24
#define AVR32_ACIFB_CONF0_HYS_MASK                           0x0f000000
#define AVR32_ACIFB_CONF0_HYS_OFFSET                                 24
#define AVR32_ACIFB_CONF0_HYS_SIZE                                    4
#define AVR32_ACIFB_CONF0_INSELN                                      8
#define AVR32_ACIFB_CONF0_INSELN_MASK                        0x00000300
#define AVR32_ACIFB_CONF0_INSELN_OFFSET                               8
#define AVR32_ACIFB_CONF0_INSELN_SIZE                                 2
#define AVR32_ACIFB_CONF0_INSELP                                     10
#define AVR32_ACIFB_CONF0_INSELP_MASK                        0x00000c00
#define AVR32_ACIFB_CONF0_INSELP_OFFSET                              10
#define AVR32_ACIFB_CONF0_INSELP_SIZE                                 2
#define AVR32_ACIFB_CONF0_IS                                          0
#define AVR32_ACIFB_CONF0_IS_MASK                            0x00000003
#define AVR32_ACIFB_CONF0_IS_OFFSET                                   0
#define AVR32_ACIFB_CONF0_IS_SIZE                                     2
#define AVR32_ACIFB_CONF0_MASK                               0x7f030f33
#define AVR32_ACIFB_CONF0_MODE                                        4
#define AVR32_ACIFB_CONF0_MODE_MASK                          0x00000030
#define AVR32_ACIFB_CONF0_MODE_OFFSET                                 4
#define AVR32_ACIFB_CONF0_MODE_SIZE                                   2
#define AVR32_ACIFB_CONF0_RESETVALUE                         0x00000000
#define AVR32_ACIFB_CONF1                                    0x000000d4
#define AVR32_ACIFB_CONF1_EVENN                                      17
#define AVR32_ACIFB_CONF1_EVENN_MASK                         0x00020000
#define AVR32_ACIFB_CONF1_EVENN_OFFSET                               17
#define AVR32_ACIFB_CONF1_EVENN_SIZE                                  1
#define AVR32_ACIFB_CONF1_EVENP                                      16
#define AVR32_ACIFB_CONF1_EVENP_MASK                         0x00010000
#define AVR32_ACIFB_CONF1_EVENP_OFFSET                               16
#define AVR32_ACIFB_CONF1_EVENP_SIZE                                  1
#define AVR32_ACIFB_CONF1_FLEN                                       28
#define AVR32_ACIFB_CONF1_FLEN_MASK                          0x70000000
#define AVR32_ACIFB_CONF1_FLEN_OFFSET                                28
#define AVR32_ACIFB_CONF1_FLEN_SIZE                                   3
#define AVR32_ACIFB_CONF1_HYS                                        24
#define AVR32_ACIFB_CONF1_HYS_MASK                           0x0f000000
#define AVR32_ACIFB_CONF1_HYS_OFFSET                                 24
#define AVR32_ACIFB_CONF1_HYS_SIZE                                    4
#define AVR32_ACIFB_CONF1_INSELN                                      8
#define AVR32_ACIFB_CONF1_INSELN_MASK                        0x00000300
#define AVR32_ACIFB_CONF1_INSELN_OFFSET                               8
#define AVR32_ACIFB_CONF1_INSELN_SIZE                                 2
#define AVR32_ACIFB_CONF1_INSELP                                     10
#define AVR32_ACIFB_CONF1_INSELP_MASK                        0x00000c00
#define AVR32_ACIFB_CONF1_INSELP_OFFSET                              10
#define AVR32_ACIFB_CONF1_INSELP_SIZE                                 2
#define AVR32_ACIFB_CONF1_IS                                          0
#define AVR32_ACIFB_CONF1_IS_MASK                            0x00000003
#define AVR32_ACIFB_CONF1_IS_OFFSET                                   0
#define AVR32_ACIFB_CONF1_IS_SIZE                                     2
#define AVR32_ACIFB_CONF1_MASK                               0x7f030f33
#define AVR32_ACIFB_CONF1_MODE                                        4
#define AVR32_ACIFB_CONF1_MODE_MASK                          0x00000030
#define AVR32_ACIFB_CONF1_MODE_OFFSET                                 4
#define AVR32_ACIFB_CONF1_MODE_SIZE                                   2
#define AVR32_ACIFB_CONF1_RESETVALUE                         0x00000000
#define AVR32_ACIFB_CONF2                                    0x000000d8
#define AVR32_ACIFB_CONF2_EVENN                                      17
#define AVR32_ACIFB_CONF2_EVENN_MASK                         0x00020000
#define AVR32_ACIFB_CONF2_EVENN_OFFSET                               17
#define AVR32_ACIFB_CONF2_EVENN_SIZE                                  1
#define AVR32_ACIFB_CONF2_EVENP                                      16
#define AVR32_ACIFB_CONF2_EVENP_MASK                         0x00010000
#define AVR32_ACIFB_CONF2_EVENP_OFFSET                               16
#define AVR32_ACIFB_CONF2_EVENP_SIZE                                  1
#define AVR32_ACIFB_CONF2_FLEN                                       28
#define AVR32_ACIFB_CONF2_FLEN_MASK                          0x70000000
#define AVR32_ACIFB_CONF2_FLEN_OFFSET                                28
#define AVR32_ACIFB_CONF2_FLEN_SIZE                                   3
#define AVR32_ACIFB_CONF2_HYS                                        24
#define AVR32_ACIFB_CONF2_HYS_MASK                           0x0f000000
#define AVR32_ACIFB_CONF2_HYS_OFFSET                                 24
#define AVR32_ACIFB_CONF2_HYS_SIZE                                    4
#define AVR32_ACIFB_CONF2_INSELN                                      8
#define AVR32_ACIFB_CONF2_INSELN_MASK                        0x00000300
#define AVR32_ACIFB_CONF2_INSELN_OFFSET                               8
#define AVR32_ACIFB_CONF2_INSELN_SIZE                                 2
#define AVR32_ACIFB_CONF2_INSELP                                     10
#define AVR32_ACIFB_CONF2_INSELP_MASK                        0x00000c00
#define AVR32_ACIFB_CONF2_INSELP_OFFSET                              10
#define AVR32_ACIFB_CONF2_INSELP_SIZE                                 2
#define AVR32_ACIFB_CONF2_IS                                          0
#define AVR32_ACIFB_CONF2_IS_MASK                            0x00000003
#define AVR32_ACIFB_CONF2_IS_OFFSET                                   0
#define AVR32_ACIFB_CONF2_IS_SIZE                                     2
#define AVR32_ACIFB_CONF2_MASK                               0x7f030f33
#define AVR32_ACIFB_CONF2_MODE                                        4
#define AVR32_ACIFB_CONF2_MODE_MASK                          0x00000030
#define AVR32_ACIFB_CONF2_MODE_OFFSET                                 4
#define AVR32_ACIFB_CONF2_MODE_SIZE                                   2
#define AVR32_ACIFB_CONF2_RESETVALUE                         0x00000000
#define AVR32_ACIFB_CONF3                                    0x000000dc
#define AVR32_ACIFB_CONF3_EVENN                                      17
#define AVR32_ACIFB_CONF3_EVENN_MASK                         0x00020000
#define AVR32_ACIFB_CONF3_EVENN_OFFSET                               17
#define AVR32_ACIFB_CONF3_EVENN_SIZE                                  1
#define AVR32_ACIFB_CONF3_EVENP                                      16
#define AVR32_ACIFB_CONF3_EVENP_MASK                         0x00010000
#define AVR32_ACIFB_CONF3_EVENP_OFFSET                               16
#define AVR32_ACIFB_CONF3_EVENP_SIZE                                  1
#define AVR32_ACIFB_CONF3_FLEN                                       28
#define AVR32_ACIFB_CONF3_FLEN_MASK                          0x70000000
#define AVR32_ACIFB_CONF3_FLEN_OFFSET                                28
#define AVR32_ACIFB_CONF3_FLEN_SIZE                                   3
#define AVR32_ACIFB_CONF3_HYS                                        24
#define AVR32_ACIFB_CONF3_HYS_MASK                           0x0f000000
#define AVR32_ACIFB_CONF3_HYS_OFFSET                                 24
#define AVR32_ACIFB_CONF3_HYS_SIZE                                    4
#define AVR32_ACIFB_CONF3_INSELN                                      8
#define AVR32_ACIFB_CONF3_INSELN_MASK                        0x00000300
#define AVR32_ACIFB_CONF3_INSELN_OFFSET                               8
#define AVR32_ACIFB_CONF3_INSELN_SIZE                                 2
#define AVR32_ACIFB_CONF3_INSELP                                     10
#define AVR32_ACIFB_CONF3_INSELP_MASK                        0x00000c00
#define AVR32_ACIFB_CONF3_INSELP_OFFSET                              10
#define AVR32_ACIFB_CONF3_INSELP_SIZE                                 2
#define AVR32_ACIFB_CONF3_IS                                          0
#define AVR32_ACIFB_CONF3_IS_MASK                            0x00000003
#define AVR32_ACIFB_CONF3_IS_OFFSET                                   0
#define AVR32_ACIFB_CONF3_IS_SIZE                                     2
#define AVR32_ACIFB_CONF3_MASK                               0x7f030f33
#define AVR32_ACIFB_CONF3_MODE                                        4
#define AVR32_ACIFB_CONF3_MODE_MASK                          0x00000030
#define AVR32_ACIFB_CONF3_MODE_OFFSET                                 4
#define AVR32_ACIFB_CONF3_MODE_SIZE                                   2
#define AVR32_ACIFB_CONF3_RESETVALUE                         0x00000000
#define AVR32_ACIFB_CONF4                                    0x000000e0
#define AVR32_ACIFB_CONF4_EVENN                                      17
#define AVR32_ACIFB_CONF4_EVENN_MASK                         0x00020000
#define AVR32_ACIFB_CONF4_EVENN_OFFSET                               17
#define AVR32_ACIFB_CONF4_EVENN_SIZE                                  1
#define AVR32_ACIFB_CONF4_EVENP                                      16
#define AVR32_ACIFB_CONF4_EVENP_MASK                         0x00010000
#define AVR32_ACIFB_CONF4_EVENP_OFFSET                               16
#define AVR32_ACIFB_CONF4_EVENP_SIZE                                  1
#define AVR32_ACIFB_CONF4_FLEN                                       28
#define AVR32_ACIFB_CONF4_FLEN_MASK                          0x70000000
#define AVR32_ACIFB_CONF4_FLEN_OFFSET                                28
#define AVR32_ACIFB_CONF4_FLEN_SIZE                                   3
#define AVR32_ACIFB_CONF4_HYS                                        24
#define AVR32_ACIFB_CONF4_HYS_MASK                           0x0f000000
#define AVR32_ACIFB_CONF4_HYS_OFFSET                                 24
#define AVR32_ACIFB_CONF4_HYS_SIZE                                    4
#define AVR32_ACIFB_CONF4_INSELN                                      8
#define AVR32_ACIFB_CONF4_INSELN_MASK                        0x00000300
#define AVR32_ACIFB_CONF4_INSELN_OFFSET                               8
#define AVR32_ACIFB_CONF4_INSELN_SIZE                                 2
#define AVR32_ACIFB_CONF4_INSELP                                     10
#define AVR32_ACIFB_CONF4_INSELP_MASK                        0x00000c00
#define AVR32_ACIFB_CONF4_INSELP_OFFSET                              10
#define AVR32_ACIFB_CONF4_INSELP_SIZE                                 2
#define AVR32_ACIFB_CONF4_IS                                          0
#define AVR32_ACIFB_CONF4_IS_MASK                            0x00000003
#define AVR32_ACIFB_CONF4_IS_OFFSET                                   0
#define AVR32_ACIFB_CONF4_IS_SIZE                                     2
#define AVR32_ACIFB_CONF4_MASK                               0x7f030f33
#define AVR32_ACIFB_CONF4_MODE                                        4
#define AVR32_ACIFB_CONF4_MODE_MASK                          0x00000030
#define AVR32_ACIFB_CONF4_MODE_OFFSET                                 4
#define AVR32_ACIFB_CONF4_MODE_SIZE                                   2
#define AVR32_ACIFB_CONF4_RESETVALUE                         0x00000000
#define AVR32_ACIFB_CONF5                                    0x000000e4
#define AVR32_ACIFB_CONF5_EVENN                                      17
#define AVR32_ACIFB_CONF5_EVENN_MASK                         0x00020000
#define AVR32_ACIFB_CONF5_EVENN_OFFSET                               17
#define AVR32_ACIFB_CONF5_EVENN_SIZE                                  1
#define AVR32_ACIFB_CONF5_EVENP                                      16
#define AVR32_ACIFB_CONF5_EVENP_MASK                         0x00010000
#define AVR32_ACIFB_CONF5_EVENP_OFFSET                               16
#define AVR32_ACIFB_CONF5_EVENP_SIZE                                  1
#define AVR32_ACIFB_CONF5_FLEN                                       28
#define AVR32_ACIFB_CONF5_FLEN_MASK                          0x70000000
#define AVR32_ACIFB_CONF5_FLEN_OFFSET                                28
#define AVR32_ACIFB_CONF5_FLEN_SIZE                                   3
#define AVR32_ACIFB_CONF5_HYS                                        24
#define AVR32_ACIFB_CONF5_HYS_MASK                           0x0f000000
#define AVR32_ACIFB_CONF5_HYS_OFFSET                                 24
#define AVR32_ACIFB_CONF5_HYS_SIZE                                    4
#define AVR32_ACIFB_CONF5_INSELN                                      8
#define AVR32_ACIFB_CONF5_INSELN_MASK                        0x00000300
#define AVR32_ACIFB_CONF5_INSELN_OFFSET                               8
#define AVR32_ACIFB_CONF5_INSELN_SIZE                                 2
#define AVR32_ACIFB_CONF5_INSELP                                     10
#define AVR32_ACIFB_CONF5_INSELP_MASK                        0x00000c00
#define AVR32_ACIFB_CONF5_INSELP_OFFSET                              10
#define AVR32_ACIFB_CONF5_INSELP_SIZE                                 2
#define AVR32_ACIFB_CONF5_IS                                          0
#define AVR32_ACIFB_CONF5_IS_MASK                            0x00000003
#define AVR32_ACIFB_CONF5_IS_OFFSET                                   0
#define AVR32_ACIFB_CONF5_IS_SIZE                                     2
#define AVR32_ACIFB_CONF5_MASK                               0x7f030f13
#define AVR32_ACIFB_CONF5_MODE                                        4
#define AVR32_ACIFB_CONF5_MODE_MASK                          0x00000010
#define AVR32_ACIFB_CONF5_MODE_OFFSET                                 4
#define AVR32_ACIFB_CONF5_MODE_SIZE                                   1
#define AVR32_ACIFB_CONF5_RESETVALUE                         0x00000000
#define AVR32_ACIFB_CONF6                                    0x000000e8
#define AVR32_ACIFB_CONF6_EVENN                                      17
#define AVR32_ACIFB_CONF6_EVENN_MASK                         0x00020000
#define AVR32_ACIFB_CONF6_EVENN_OFFSET                               17
#define AVR32_ACIFB_CONF6_EVENN_SIZE                                  1
#define AVR32_ACIFB_CONF6_EVENP                                      16
#define AVR32_ACIFB_CONF6_EVENP_MASK                         0x00010000
#define AVR32_ACIFB_CONF6_EVENP_OFFSET                               16
#define AVR32_ACIFB_CONF6_EVENP_SIZE                                  1
#define AVR32_ACIFB_CONF6_FLEN                                       28
#define AVR32_ACIFB_CONF6_FLEN_MASK                          0x70000000
#define AVR32_ACIFB_CONF6_FLEN_OFFSET                                28
#define AVR32_ACIFB_CONF6_FLEN_SIZE                                   3
#define AVR32_ACIFB_CONF6_HYS                                        24
#define AVR32_ACIFB_CONF6_HYS_MASK                           0x0f000000
#define AVR32_ACIFB_CONF6_HYS_OFFSET                                 24
#define AVR32_ACIFB_CONF6_HYS_SIZE                                    4
#define AVR32_ACIFB_CONF6_INSELN                                      8
#define AVR32_ACIFB_CONF6_INSELN_MASK                        0x00000300
#define AVR32_ACIFB_CONF6_INSELN_OFFSET                               8
#define AVR32_ACIFB_CONF6_INSELN_SIZE                                 2
#define AVR32_ACIFB_CONF6_INSELP                                     10
#define AVR32_ACIFB_CONF6_INSELP_MASK                        0x00000c00
#define AVR32_ACIFB_CONF6_INSELP_OFFSET                              10
#define AVR32_ACIFB_CONF6_INSELP_SIZE                                 2
#define AVR32_ACIFB_CONF6_IS                                          0
#define AVR32_ACIFB_CONF6_IS_MASK                            0x00000003
#define AVR32_ACIFB_CONF6_IS_OFFSET                                   0
#define AVR32_ACIFB_CONF6_IS_SIZE                                     2
#define AVR32_ACIFB_CONF6_MASK                               0x7f030f33
#define AVR32_ACIFB_CONF6_MODE                                        4
#define AVR32_ACIFB_CONF6_MODE_MASK                          0x00000030
#define AVR32_ACIFB_CONF6_MODE_OFFSET                                 4
#define AVR32_ACIFB_CONF6_MODE_SIZE                                   2
#define AVR32_ACIFB_CONF6_RESETVALUE                         0x00000000
#define AVR32_ACIFB_CONF7                                    0x000000ec
#define AVR32_ACIFB_CONF7_EVENN                                      17
#define AVR32_ACIFB_CONF7_EVENN_MASK                         0x00020000
#define AVR32_ACIFB_CONF7_EVENN_OFFSET                               17
#define AVR32_ACIFB_CONF7_EVENN_SIZE                                  1
#define AVR32_ACIFB_CONF7_EVENP                                      16
#define AVR32_ACIFB_CONF7_EVENP_MASK                         0x00010000
#define AVR32_ACIFB_CONF7_EVENP_OFFSET                               16
#define AVR32_ACIFB_CONF7_EVENP_SIZE                                  1
#define AVR32_ACIFB_CONF7_FLEN                                       28
#define AVR32_ACIFB_CONF7_FLEN_MASK                          0x70000000
#define AVR32_ACIFB_CONF7_FLEN_OFFSET                                28
#define AVR32_ACIFB_CONF7_FLEN_SIZE                                   3
#define AVR32_ACIFB_CONF7_HYS                                        24
#define AVR32_ACIFB_CONF7_HYS_MASK                           0x0f000000
#define AVR32_ACIFB_CONF7_HYS_OFFSET                                 24
#define AVR32_ACIFB_CONF7_HYS_SIZE                                    4
#define AVR32_ACIFB_CONF7_INSELN                                      8
#define AVR32_ACIFB_CONF7_INSELN_MASK                        0x00000300
#define AVR32_ACIFB_CONF7_INSELN_OFFSET                               8
#define AVR32_ACIFB_CONF7_INSELN_SIZE                                 2
#define AVR32_ACIFB_CONF7_INSELP                                     10
#define AVR32_ACIFB_CONF7_INSELP_MASK                        0x00000c00
#define AVR32_ACIFB_CONF7_INSELP_OFFSET                              10
#define AVR32_ACIFB_CONF7_INSELP_SIZE                                 2
#define AVR32_ACIFB_CONF7_IS                                          0
#define AVR32_ACIFB_CONF7_IS_MASK                            0x00000003
#define AVR32_ACIFB_CONF7_IS_OFFSET                                   0
#define AVR32_ACIFB_CONF7_IS_SIZE                                     2
#define AVR32_ACIFB_CONF7_MASK                               0x7f030f33
#define AVR32_ACIFB_CONF7_MODE                                        4
#define AVR32_ACIFB_CONF7_MODE_MASK                          0x00000030
#define AVR32_ACIFB_CONF7_MODE_OFFSET                                 4
#define AVR32_ACIFB_CONF7_MODE_SIZE                                   2
#define AVR32_ACIFB_CONF7_RESETVALUE                         0x00000000
#define AVR32_ACIFB_CONFW0                                   0x00000080
#define AVR32_ACIFB_CONFW0_MASK                              0x00010703
#define AVR32_ACIFB_CONFW0_RESETVALUE                        0x00000000
#define AVR32_ACIFB_CONFW0_WEVEN                                     10
#define AVR32_ACIFB_CONFW0_WEVEN_MASK                        0x00000400
#define AVR32_ACIFB_CONFW0_WEVEN_OFFSET                              10
#define AVR32_ACIFB_CONFW0_WEVEN_SIZE                                 1
#define AVR32_ACIFB_CONFW0_WEVSRC                                     8
#define AVR32_ACIFB_CONFW0_WEVSRC_MASK                       0x00000300
#define AVR32_ACIFB_CONFW0_WEVSRC_OFFSET                              8
#define AVR32_ACIFB_CONFW0_WEVSRC_SIZE                                2
#define AVR32_ACIFB_CONFW0_WFEN                                      16
#define AVR32_ACIFB_CONFW0_WFEN_MASK                         0x00010000
#define AVR32_ACIFB_CONFW0_WFEN_OFFSET                               16
#define AVR32_ACIFB_CONFW0_WFEN_SIZE                                  1
#define AVR32_ACIFB_CONFW0_WIS                                        0
#define AVR32_ACIFB_CONFW0_WIS_MASK                          0x00000003
#define AVR32_ACIFB_CONFW0_WIS_OFFSET                                 0
#define AVR32_ACIFB_CONFW0_WIS_SIZE                                   2
#define AVR32_ACIFB_CONFW1                                   0x00000084
#define AVR32_ACIFB_CONFW1_MASK                              0x00010703
#define AVR32_ACIFB_CONFW1_RESETVALUE                        0x00000000
#define AVR32_ACIFB_CONFW1_WEVEN                                     10
#define AVR32_ACIFB_CONFW1_WEVEN_MASK                        0x00000400
#define AVR32_ACIFB_CONFW1_WEVEN_OFFSET                              10
#define AVR32_ACIFB_CONFW1_WEVEN_SIZE                                 1
#define AVR32_ACIFB_CONFW1_WEVSRC                                     8
#define AVR32_ACIFB_CONFW1_WEVSRC_MASK                       0x00000300
#define AVR32_ACIFB_CONFW1_WEVSRC_OFFSET                              8
#define AVR32_ACIFB_CONFW1_WEVSRC_SIZE                                2
#define AVR32_ACIFB_CONFW1_WFEN                                      16
#define AVR32_ACIFB_CONFW1_WFEN_MASK                         0x00010000
#define AVR32_ACIFB_CONFW1_WFEN_OFFSET                               16
#define AVR32_ACIFB_CONFW1_WFEN_SIZE                                  1
#define AVR32_ACIFB_CONFW1_WIS                                        0
#define AVR32_ACIFB_CONFW1_WIS_MASK                          0x00000003
#define AVR32_ACIFB_CONFW1_WIS_OFFSET                                 0
#define AVR32_ACIFB_CONFW1_WIS_SIZE                                   2
#define AVR32_ACIFB_CONFW2                                   0x00000088
#define AVR32_ACIFB_CONFW2_MASK                              0x00010703
#define AVR32_ACIFB_CONFW2_RESETVALUE                        0x00000000
#define AVR32_ACIFB_CONFW2_WEVEN                                     10
#define AVR32_ACIFB_CONFW2_WEVEN_MASK                        0x00000400
#define AVR32_ACIFB_CONFW2_WEVEN_OFFSET                              10
#define AVR32_ACIFB_CONFW2_WEVEN_SIZE                                 1
#define AVR32_ACIFB_CONFW2_WEVSRC                                     8
#define AVR32_ACIFB_CONFW2_WEVSRC_MASK                       0x00000300
#define AVR32_ACIFB_CONFW2_WEVSRC_OFFSET                              8
#define AVR32_ACIFB_CONFW2_WEVSRC_SIZE                                2
#define AVR32_ACIFB_CONFW2_WFEN                                      16
#define AVR32_ACIFB_CONFW2_WFEN_MASK                         0x00010000
#define AVR32_ACIFB_CONFW2_WFEN_OFFSET                               16
#define AVR32_ACIFB_CONFW2_WFEN_SIZE                                  1
#define AVR32_ACIFB_CONFW2_WIS                                        0
#define AVR32_ACIFB_CONFW2_WIS_MASK                          0x00000003
#define AVR32_ACIFB_CONFW2_WIS_OFFSET                                 0
#define AVR32_ACIFB_CONFW2_WIS_SIZE                                   2
#define AVR32_ACIFB_CONFW3                                   0x0000008c
#define AVR32_ACIFB_CONFW3_MASK                              0x00010703
#define AVR32_ACIFB_CONFW3_RESETVALUE                        0x00000000
#define AVR32_ACIFB_CONFW3_WEVEN                                     10
#define AVR32_ACIFB_CONFW3_WEVEN_MASK                        0x00000400
#define AVR32_ACIFB_CONFW3_WEVEN_OFFSET                              10
#define AVR32_ACIFB_CONFW3_WEVEN_SIZE                                 1
#define AVR32_ACIFB_CONFW3_WEVSRC                                     8
#define AVR32_ACIFB_CONFW3_WEVSRC_MASK                       0x00000300
#define AVR32_ACIFB_CONFW3_WEVSRC_OFFSET                              8
#define AVR32_ACIFB_CONFW3_WEVSRC_SIZE                                2
#define AVR32_ACIFB_CONFW3_WFEN                                      16
#define AVR32_ACIFB_CONFW3_WFEN_MASK                         0x00010000
#define AVR32_ACIFB_CONFW3_WFEN_OFFSET                               16
#define AVR32_ACIFB_CONFW3_WFEN_SIZE                                  1
#define AVR32_ACIFB_CONFW3_WIS                                        0
#define AVR32_ACIFB_CONFW3_WIS_MASK                          0x00000003
#define AVR32_ACIFB_CONFW3_WIS_OFFSET                                 0
#define AVR32_ACIFB_CONFW3_WIS_SIZE                                   2
#define AVR32_ACIFB_CTRL                                     0x00000000
#define AVR32_ACIFB_CTRL_ACTEST                                       7
#define AVR32_ACIFB_CTRL_ACTEST_MASK                         0x00000080
#define AVR32_ACIFB_CTRL_ACTEST_OFFSET                                7
#define AVR32_ACIFB_CTRL_ACTEST_SIZE                                  1
#define AVR32_ACIFB_CTRL_EN                                           0
#define AVR32_ACIFB_CTRL_EN_MASK                             0x00000001
#define AVR32_ACIFB_CTRL_EN_OFFSET                                    0
#define AVR32_ACIFB_CTRL_EN_SIZE                                      1
#define AVR32_ACIFB_CTRL_ESTART                                       5
#define AVR32_ACIFB_CTRL_ESTART_MASK                         0x00000020
#define AVR32_ACIFB_CTRL_ESTART_OFFSET                                5
#define AVR32_ACIFB_CTRL_ESTART_SIZE                                  1
#define AVR32_ACIFB_CTRL_EVENTEN                                      1
#define AVR32_ACIFB_CTRL_EVENTEN_MASK                        0x00000002
#define AVR32_ACIFB_CTRL_EVENTEN_OFFSET                               1
#define AVR32_ACIFB_CTRL_EVENTEN_SIZE                                 1
#define AVR32_ACIFB_CTRL_MASK                                0x0003ffb3
#define AVR32_ACIFB_CTRL_RESETVALUE                          0x00000000
#define AVR32_ACIFB_CTRL_SUT                                          8
#define AVR32_ACIFB_CTRL_SUT_MASK                            0x0003ff00
#define AVR32_ACIFB_CTRL_SUT_OFFSET                                   8
#define AVR32_ACIFB_CTRL_SUT_SIZE                                    10
#define AVR32_ACIFB_CTRL_USTART                                       4
#define AVR32_ACIFB_CTRL_USTART_MASK                         0x00000010
#define AVR32_ACIFB_CTRL_USTART_OFFSET                                4
#define AVR32_ACIFB_CTRL_USTART_SIZE                                  1
#define AVR32_ACIFB_EN                                                0
#define AVR32_ACIFB_EN_MASK                                  0x00000001
#define AVR32_ACIFB_EN_OFFSET                                         0
#define AVR32_ACIFB_EN_SIZE                                           1
#define AVR32_ACIFB_ESTART                                            5
#define AVR32_ACIFB_ESTART_MASK                              0x00000020
#define AVR32_ACIFB_ESTART_OFFSET                                     5
#define AVR32_ACIFB_ESTART_SIZE                                       1
#define AVR32_ACIFB_EVENN                                            17
#define AVR32_ACIFB_EVENN_MASK                               0x00020000
#define AVR32_ACIFB_EVENN_OFFSET                                     17
#define AVR32_ACIFB_EVENN_SIZE                                        1
#define AVR32_ACIFB_EVENP                                            16
#define AVR32_ACIFB_EVENP_MASK                               0x00010000
#define AVR32_ACIFB_EVENP_OFFSET                                     16
#define AVR32_ACIFB_EVENP_SIZE                                        1
#define AVR32_ACIFB_EVENTEN                                           1
#define AVR32_ACIFB_EVENTEN_MASK                             0x00000002
#define AVR32_ACIFB_EVENTEN_OFFSET                                    1
#define AVR32_ACIFB_EVENTEN_SIZE                                      1
#define AVR32_ACIFB_FLEN                                             28
#define AVR32_ACIFB_FLEN_MASK                                0x70000000
#define AVR32_ACIFB_FLEN_OFFSET                                      28
#define AVR32_ACIFB_FLEN_SIZE                                         3
#define AVR32_ACIFB_HYS                                              24
#define AVR32_ACIFB_HYS_MASK                                 0x0f000000
#define AVR32_ACIFB_HYS_OFFSET                                       24
#define AVR32_ACIFB_HYS_SIZE                                          4
#define AVR32_ACIFB_ICR                                      0x00000020
#define AVR32_ACIFB_ICR_ACINT0                                        0
#define AVR32_ACIFB_ICR_ACINT0_MASK                          0x00000001
#define AVR32_ACIFB_ICR_ACINT0_OFFSET                                 0
#define AVR32_ACIFB_ICR_ACINT0_SIZE                                   1
#define AVR32_ACIFB_ICR_ACINT1                                        2
#define AVR32_ACIFB_ICR_ACINT1_MASK                          0x00000004
#define AVR32_ACIFB_ICR_ACINT1_OFFSET                                 2
#define AVR32_ACIFB_ICR_ACINT1_SIZE                                   1
#define AVR32_ACIFB_ICR_ACINT2                                        4
#define AVR32_ACIFB_ICR_ACINT2_MASK                          0x00000010
#define AVR32_ACIFB_ICR_ACINT2_OFFSET                                 4
#define AVR32_ACIFB_ICR_ACINT2_SIZE                                   1
#define AVR32_ACIFB_ICR_ACINT3                                        6
#define AVR32_ACIFB_ICR_ACINT3_MASK                          0x00000040
#define AVR32_ACIFB_ICR_ACINT3_OFFSET                                 6
#define AVR32_ACIFB_ICR_ACINT3_SIZE                                   1
#define AVR32_ACIFB_ICR_ACINT4                                        8
#define AVR32_ACIFB_ICR_ACINT4_MASK                          0x00000100
#define AVR32_ACIFB_ICR_ACINT4_OFFSET                                 8
#define AVR32_ACIFB_ICR_ACINT4_SIZE                                   1
#define AVR32_ACIFB_ICR_ACINT5                                       10
#define AVR32_ACIFB_ICR_ACINT5_MASK                          0x00000400
#define AVR32_ACIFB_ICR_ACINT5_OFFSET                                10
#define AVR32_ACIFB_ICR_ACINT5_SIZE                                   1
#define AVR32_ACIFB_ICR_ACINT6                                       12
#define AVR32_ACIFB_ICR_ACINT6_MASK                          0x00001000
#define AVR32_ACIFB_ICR_ACINT6_OFFSET                                12
#define AVR32_ACIFB_ICR_ACINT6_SIZE                                   1
#define AVR32_ACIFB_ICR_ACINT7                                       14
#define AVR32_ACIFB_ICR_ACINT7_MASK                          0x00004000
#define AVR32_ACIFB_ICR_ACINT7_OFFSET                                14
#define AVR32_ACIFB_ICR_ACINT7_SIZE                                   1
#define AVR32_ACIFB_ICR_MASK                                 0x0f00ffff
#define AVR32_ACIFB_ICR_RESETVALUE                           0x00000000
#define AVR32_ACIFB_ICR_SUTINT0                                       1
#define AVR32_ACIFB_ICR_SUTINT0_MASK                         0x00000002
#define AVR32_ACIFB_ICR_SUTINT0_OFFSET                                1
#define AVR32_ACIFB_ICR_SUTINT0_SIZE                                  1
#define AVR32_ACIFB_ICR_SUTINT1                                       3
#define AVR32_ACIFB_ICR_SUTINT1_MASK                         0x00000008
#define AVR32_ACIFB_ICR_SUTINT1_OFFSET                                3
#define AVR32_ACIFB_ICR_SUTINT1_SIZE                                  1
#define AVR32_ACIFB_ICR_SUTINT2                                       5
#define AVR32_ACIFB_ICR_SUTINT2_MASK                         0x00000020
#define AVR32_ACIFB_ICR_SUTINT2_OFFSET                                5
#define AVR32_ACIFB_ICR_SUTINT2_SIZE                                  1
#define AVR32_ACIFB_ICR_SUTINT3                                       7
#define AVR32_ACIFB_ICR_SUTINT3_MASK                         0x00000080
#define AVR32_ACIFB_ICR_SUTINT3_OFFSET                                7
#define AVR32_ACIFB_ICR_SUTINT3_SIZE                                  1
#define AVR32_ACIFB_ICR_SUTINT4                                       9
#define AVR32_ACIFB_ICR_SUTINT4_MASK                         0x00000200
#define AVR32_ACIFB_ICR_SUTINT4_OFFSET                                9
#define AVR32_ACIFB_ICR_SUTINT4_SIZE                                  1
#define AVR32_ACIFB_ICR_SUTINT5                                      11
#define AVR32_ACIFB_ICR_SUTINT5_MASK                         0x00000800
#define AVR32_ACIFB_ICR_SUTINT5_OFFSET                               11
#define AVR32_ACIFB_ICR_SUTINT5_SIZE                                  1
#define AVR32_ACIFB_ICR_SUTINT6                                      13
#define AVR32_ACIFB_ICR_SUTINT6_MASK                         0x00002000
#define AVR32_ACIFB_ICR_SUTINT6_OFFSET                               13
#define AVR32_ACIFB_ICR_SUTINT6_SIZE                                  1
#define AVR32_ACIFB_ICR_SUTINT7                                      15
#define AVR32_ACIFB_ICR_SUTINT7_MASK                         0x00008000
#define AVR32_ACIFB_ICR_SUTINT7_OFFSET                               15
#define AVR32_ACIFB_ICR_SUTINT7_SIZE                                  1
#define AVR32_ACIFB_ICR_WFINT0                                       24
#define AVR32_ACIFB_ICR_WFINT0_MASK                          0x01000000
#define AVR32_ACIFB_ICR_WFINT0_OFFSET                                24
#define AVR32_ACIFB_ICR_WFINT0_SIZE                                   1
#define AVR32_ACIFB_ICR_WFINT1                                       25
#define AVR32_ACIFB_ICR_WFINT1_MASK                          0x02000000
#define AVR32_ACIFB_ICR_WFINT1_OFFSET                                25
#define AVR32_ACIFB_ICR_WFINT1_SIZE                                   1
#define AVR32_ACIFB_ICR_WFINT2                                       26
#define AVR32_ACIFB_ICR_WFINT2_MASK                          0x04000000
#define AVR32_ACIFB_ICR_WFINT2_OFFSET                                26
#define AVR32_ACIFB_ICR_WFINT2_SIZE                                   1
#define AVR32_ACIFB_ICR_WFINT3                                       27
#define AVR32_ACIFB_ICR_WFINT3_MASK                          0x08000000
#define AVR32_ACIFB_ICR_WFINT3_OFFSET                                27
#define AVR32_ACIFB_ICR_WFINT3_SIZE                                   1
#define AVR32_ACIFB_IDR                                      0x00000014
#define AVR32_ACIFB_IDR_ACINT0                                        0
#define AVR32_ACIFB_IDR_ACINT0_MASK                          0x00000001
#define AVR32_ACIFB_IDR_ACINT0_OFFSET                                 0
#define AVR32_ACIFB_IDR_ACINT0_SIZE                                   1
#define AVR32_ACIFB_IDR_ACINT1                                        2
#define AVR32_ACIFB_IDR_ACINT1_MASK                          0x00000004
#define AVR32_ACIFB_IDR_ACINT1_OFFSET                                 2
#define AVR32_ACIFB_IDR_ACINT1_SIZE                                   1
#define AVR32_ACIFB_IDR_ACINT2                                        4
#define AVR32_ACIFB_IDR_ACINT2_MASK                          0x00000010
#define AVR32_ACIFB_IDR_ACINT2_OFFSET                                 4
#define AVR32_ACIFB_IDR_ACINT2_SIZE                                   1
#define AVR32_ACIFB_IDR_ACINT3                                        6
#define AVR32_ACIFB_IDR_ACINT3_MASK                          0x00000040
#define AVR32_ACIFB_IDR_ACINT3_OFFSET                                 6
#define AVR32_ACIFB_IDR_ACINT3_SIZE                                   1
#define AVR32_ACIFB_IDR_ACINT4                                        8
#define AVR32_ACIFB_IDR_ACINT4_MASK                          0x00000100
#define AVR32_ACIFB_IDR_ACINT4_OFFSET                                 8
#define AVR32_ACIFB_IDR_ACINT4_SIZE                                   1
#define AVR32_ACIFB_IDR_ACINT5                                       10
#define AVR32_ACIFB_IDR_ACINT5_MASK                          0x00000400
#define AVR32_ACIFB_IDR_ACINT5_OFFSET                                10
#define AVR32_ACIFB_IDR_ACINT5_SIZE                                   1
#define AVR32_ACIFB_IDR_ACINT6                                       12
#define AVR32_ACIFB_IDR_ACINT6_MASK                          0x00001000
#define AVR32_ACIFB_IDR_ACINT6_OFFSET                                12
#define AVR32_ACIFB_IDR_ACINT6_SIZE                                   1
#define AVR32_ACIFB_IDR_ACINT7                                       14
#define AVR32_ACIFB_IDR_ACINT7_MASK                          0x00004000
#define AVR32_ACIFB_IDR_ACINT7_OFFSET                                14
#define AVR32_ACIFB_IDR_ACINT7_SIZE                                   1
#define AVR32_ACIFB_IDR_MASK                                 0x0f00ffff
#define AVR32_ACIFB_IDR_RESETVALUE                           0x00000000
#define AVR32_ACIFB_IDR_SUTINT0                                       1
#define AVR32_ACIFB_IDR_SUTINT0_MASK                         0x00000002
#define AVR32_ACIFB_IDR_SUTINT0_OFFSET                                1
#define AVR32_ACIFB_IDR_SUTINT0_SIZE                                  1
#define AVR32_ACIFB_IDR_SUTINT1                                       3
#define AVR32_ACIFB_IDR_SUTINT1_MASK                         0x00000008
#define AVR32_ACIFB_IDR_SUTINT1_OFFSET                                3
#define AVR32_ACIFB_IDR_SUTINT1_SIZE                                  1
#define AVR32_ACIFB_IDR_SUTINT2                                       5
#define AVR32_ACIFB_IDR_SUTINT2_MASK                         0x00000020
#define AVR32_ACIFB_IDR_SUTINT2_OFFSET                                5
#define AVR32_ACIFB_IDR_SUTINT2_SIZE                                  1
#define AVR32_ACIFB_IDR_SUTINT3                                       7
#define AVR32_ACIFB_IDR_SUTINT3_MASK                         0x00000080
#define AVR32_ACIFB_IDR_SUTINT3_OFFSET                                7
#define AVR32_ACIFB_IDR_SUTINT3_SIZE                                  1
#define AVR32_ACIFB_IDR_SUTINT4                                       9
#define AVR32_ACIFB_IDR_SUTINT4_MASK                         0x00000200
#define AVR32_ACIFB_IDR_SUTINT4_OFFSET                                9
#define AVR32_ACIFB_IDR_SUTINT4_SIZE                                  1
#define AVR32_ACIFB_IDR_SUTINT5                                      11
#define AVR32_ACIFB_IDR_SUTINT5_MASK                         0x00000800
#define AVR32_ACIFB_IDR_SUTINT5_OFFSET                               11
#define AVR32_ACIFB_IDR_SUTINT5_SIZE                                  1
#define AVR32_ACIFB_IDR_SUTINT6                                      13
#define AVR32_ACIFB_IDR_SUTINT6_MASK                         0x00002000
#define AVR32_ACIFB_IDR_SUTINT6_OFFSET                               13
#define AVR32_ACIFB_IDR_SUTINT6_SIZE                                  1
#define AVR32_ACIFB_IDR_SUTINT7                                      15
#define AVR32_ACIFB_IDR_SUTINT7_MASK                         0x00008000
#define AVR32_ACIFB_IDR_SUTINT7_OFFSET                               15
#define AVR32_ACIFB_IDR_SUTINT7_SIZE                                  1
#define AVR32_ACIFB_IDR_WFINT0                                       24
#define AVR32_ACIFB_IDR_WFINT0_MASK                          0x01000000
#define AVR32_ACIFB_IDR_WFINT0_OFFSET                                24
#define AVR32_ACIFB_IDR_WFINT0_SIZE                                   1
#define AVR32_ACIFB_IDR_WFINT1                                       25
#define AVR32_ACIFB_IDR_WFINT1_MASK                          0x02000000
#define AVR32_ACIFB_IDR_WFINT1_OFFSET                                25
#define AVR32_ACIFB_IDR_WFINT1_SIZE                                   1
#define AVR32_ACIFB_IDR_WFINT2                                       26
#define AVR32_ACIFB_IDR_WFINT2_MASK                          0x04000000
#define AVR32_ACIFB_IDR_WFINT2_OFFSET                                26
#define AVR32_ACIFB_IDR_WFINT2_SIZE                                   1
#define AVR32_ACIFB_IDR_WFINT3                                       27
#define AVR32_ACIFB_IDR_WFINT3_MASK                          0x08000000
#define AVR32_ACIFB_IDR_WFINT3_OFFSET                                27
#define AVR32_ACIFB_IDR_WFINT3_SIZE                                   1
#define AVR32_ACIFB_IER                                      0x00000010
#define AVR32_ACIFB_IER_ACINT0                                        0
#define AVR32_ACIFB_IER_ACINT0_MASK                          0x00000001
#define AVR32_ACIFB_IER_ACINT0_OFFSET                                 0
#define AVR32_ACIFB_IER_ACINT0_SIZE                                   1
#define AVR32_ACIFB_IER_ACINT1                                        2
#define AVR32_ACIFB_IER_ACINT1_MASK                          0x00000004
#define AVR32_ACIFB_IER_ACINT1_OFFSET                                 2
#define AVR32_ACIFB_IER_ACINT1_SIZE                                   1
#define AVR32_ACIFB_IER_ACINT2                                        4
#define AVR32_ACIFB_IER_ACINT2_MASK                          0x00000010
#define AVR32_ACIFB_IER_ACINT2_OFFSET                                 4
#define AVR32_ACIFB_IER_ACINT2_SIZE                                   1
#define AVR32_ACIFB_IER_ACINT3                                        6
#define AVR32_ACIFB_IER_ACINT3_MASK                          0x00000040
#define AVR32_ACIFB_IER_ACINT3_OFFSET                                 6
#define AVR32_ACIFB_IER_ACINT3_SIZE                                   1
#define AVR32_ACIFB_IER_ACINT4                                        8
#define AVR32_ACIFB_IER_ACINT4_MASK                          0x00000100
#define AVR32_ACIFB_IER_ACINT4_OFFSET                                 8
#define AVR32_ACIFB_IER_ACINT4_SIZE                                   1
#define AVR32_ACIFB_IER_ACINT5                                       10
#define AVR32_ACIFB_IER_ACINT5_MASK                          0x00000400
#define AVR32_ACIFB_IER_ACINT5_OFFSET                                10
#define AVR32_ACIFB_IER_ACINT5_SIZE                                   1
#define AVR32_ACIFB_IER_ACINT6                                       12
#define AVR32_ACIFB_IER_ACINT6_MASK                          0x00001000
#define AVR32_ACIFB_IER_ACINT6_OFFSET                                12
#define AVR32_ACIFB_IER_ACINT6_SIZE                                   1
#define AVR32_ACIFB_IER_ACINT7                                       14
#define AVR32_ACIFB_IER_ACINT7_MASK                          0x00004000
#define AVR32_ACIFB_IER_ACINT7_OFFSET                                14
#define AVR32_ACIFB_IER_ACINT7_SIZE                                   1
#define AVR32_ACIFB_IER_MASK                                 0x0f00ffff
#define AVR32_ACIFB_IER_RESETVALUE                           0x00000000
#define AVR32_ACIFB_IER_SUTINT0                                       1
#define AVR32_ACIFB_IER_SUTINT0_MASK                         0x00000002
#define AVR32_ACIFB_IER_SUTINT0_OFFSET                                1
#define AVR32_ACIFB_IER_SUTINT0_SIZE                                  1
#define AVR32_ACIFB_IER_SUTINT1                                       3
#define AVR32_ACIFB_IER_SUTINT1_MASK                         0x00000008
#define AVR32_ACIFB_IER_SUTINT1_OFFSET                                3
#define AVR32_ACIFB_IER_SUTINT1_SIZE                                  1
#define AVR32_ACIFB_IER_SUTINT2                                       5
#define AVR32_ACIFB_IER_SUTINT2_MASK                         0x00000020
#define AVR32_ACIFB_IER_SUTINT2_OFFSET                                5
#define AVR32_ACIFB_IER_SUTINT2_SIZE                                  1
#define AVR32_ACIFB_IER_SUTINT3                                       7
#define AVR32_ACIFB_IER_SUTINT3_MASK                         0x00000080
#define AVR32_ACIFB_IER_SUTINT3_OFFSET                                7
#define AVR32_ACIFB_IER_SUTINT3_SIZE                                  1
#define AVR32_ACIFB_IER_SUTINT4                                       9
#define AVR32_ACIFB_IER_SUTINT4_MASK                         0x00000200
#define AVR32_ACIFB_IER_SUTINT4_OFFSET                                9
#define AVR32_ACIFB_IER_SUTINT4_SIZE                                  1
#define AVR32_ACIFB_IER_SUTINT5                                      11
#define AVR32_ACIFB_IER_SUTINT5_MASK                         0x00000800
#define AVR32_ACIFB_IER_SUTINT5_OFFSET                               11
#define AVR32_ACIFB_IER_SUTINT5_SIZE                                  1
#define AVR32_ACIFB_IER_SUTINT6                                      13
#define AVR32_ACIFB_IER_SUTINT6_MASK                         0x00002000
#define AVR32_ACIFB_IER_SUTINT6_OFFSET                               13
#define AVR32_ACIFB_IER_SUTINT6_SIZE                                  1
#define AVR32_ACIFB_IER_SUTINT7                                      15
#define AVR32_ACIFB_IER_SUTINT7_MASK                         0x00008000
#define AVR32_ACIFB_IER_SUTINT7_OFFSET                               15
#define AVR32_ACIFB_IER_SUTINT7_SIZE                                  1
#define AVR32_ACIFB_IER_WFINT0                                       24
#define AVR32_ACIFB_IER_WFINT0_MASK                          0x01000000
#define AVR32_ACIFB_IER_WFINT0_OFFSET                                24
#define AVR32_ACIFB_IER_WFINT0_SIZE                                   1
#define AVR32_ACIFB_IER_WFINT1                                       25
#define AVR32_ACIFB_IER_WFINT1_MASK                          0x02000000
#define AVR32_ACIFB_IER_WFINT1_OFFSET                                25
#define AVR32_ACIFB_IER_WFINT1_SIZE                                   1
#define AVR32_ACIFB_IER_WFINT2                                       26
#define AVR32_ACIFB_IER_WFINT2_MASK                          0x04000000
#define AVR32_ACIFB_IER_WFINT2_OFFSET                                26
#define AVR32_ACIFB_IER_WFINT2_SIZE                                   1
#define AVR32_ACIFB_IER_WFINT3                                       27
#define AVR32_ACIFB_IER_WFINT3_MASK                          0x08000000
#define AVR32_ACIFB_IER_WFINT3_OFFSET                                27
#define AVR32_ACIFB_IER_WFINT3_SIZE                                   1
#define AVR32_ACIFB_IMR                                      0x00000018
#define AVR32_ACIFB_IMR_ACINT0                                        0
#define AVR32_ACIFB_IMR_ACINT0_MASK                          0x00000001
#define AVR32_ACIFB_IMR_ACINT0_OFFSET                                 0
#define AVR32_ACIFB_IMR_ACINT0_SIZE                                   1
#define AVR32_ACIFB_IMR_ACINT1                                        2
#define AVR32_ACIFB_IMR_ACINT1_MASK                          0x00000004
#define AVR32_ACIFB_IMR_ACINT1_OFFSET                                 2
#define AVR32_ACIFB_IMR_ACINT1_SIZE                                   1
#define AVR32_ACIFB_IMR_ACINT2                                        4
#define AVR32_ACIFB_IMR_ACINT2_MASK                          0x00000010
#define AVR32_ACIFB_IMR_ACINT2_OFFSET                                 4
#define AVR32_ACIFB_IMR_ACINT2_SIZE                                   1
#define AVR32_ACIFB_IMR_ACINT3                                        6
#define AVR32_ACIFB_IMR_ACINT3_MASK                          0x00000040
#define AVR32_ACIFB_IMR_ACINT3_OFFSET                                 6
#define AVR32_ACIFB_IMR_ACINT3_SIZE                                   1
#define AVR32_ACIFB_IMR_ACINT4                                        8
#define AVR32_ACIFB_IMR_ACINT4_MASK                          0x00000100
#define AVR32_ACIFB_IMR_ACINT4_OFFSET                                 8
#define AVR32_ACIFB_IMR_ACINT4_SIZE                                   1
#define AVR32_ACIFB_IMR_ACINT5                                       10
#define AVR32_ACIFB_IMR_ACINT5_MASK                          0x00000400
#define AVR32_ACIFB_IMR_ACINT5_OFFSET                                10
#define AVR32_ACIFB_IMR_ACINT5_SIZE                                   1
#define AVR32_ACIFB_IMR_ACINT6                                       12
#define AVR32_ACIFB_IMR_ACINT6_MASK                          0x00001000
#define AVR32_ACIFB_IMR_ACINT6_OFFSET                                12
#define AVR32_ACIFB_IMR_ACINT6_SIZE                                   1
#define AVR32_ACIFB_IMR_ACINT7                                       14
#define AVR32_ACIFB_IMR_ACINT7_MASK                          0x00004000
#define AVR32_ACIFB_IMR_ACINT7_OFFSET                                14
#define AVR32_ACIFB_IMR_ACINT7_SIZE                                   1
#define AVR32_ACIFB_IMR_MASK                                 0x0f00ffff
#define AVR32_ACIFB_IMR_RESETVALUE                           0x00000000
#define AVR32_ACIFB_IMR_SUTINT0                                       1
#define AVR32_ACIFB_IMR_SUTINT0_MASK                         0x00000002
#define AVR32_ACIFB_IMR_SUTINT0_OFFSET                                1
#define AVR32_ACIFB_IMR_SUTINT0_SIZE                                  1
#define AVR32_ACIFB_IMR_SUTINT1                                       3
#define AVR32_ACIFB_IMR_SUTINT1_MASK                         0x00000008
#define AVR32_ACIFB_IMR_SUTINT1_OFFSET                                3
#define AVR32_ACIFB_IMR_SUTINT1_SIZE                                  1
#define AVR32_ACIFB_IMR_SUTINT2                                       5
#define AVR32_ACIFB_IMR_SUTINT2_MASK                         0x00000020
#define AVR32_ACIFB_IMR_SUTINT2_OFFSET                                5
#define AVR32_ACIFB_IMR_SUTINT2_SIZE                                  1
#define AVR32_ACIFB_IMR_SUTINT3                                       7
#define AVR32_ACIFB_IMR_SUTINT3_MASK                         0x00000080
#define AVR32_ACIFB_IMR_SUTINT3_OFFSET                                7
#define AVR32_ACIFB_IMR_SUTINT3_SIZE                                  1
#define AVR32_ACIFB_IMR_SUTINT4                                       9
#define AVR32_ACIFB_IMR_SUTINT4_MASK                         0x00000200
#define AVR32_ACIFB_IMR_SUTINT4_OFFSET                                9
#define AVR32_ACIFB_IMR_SUTINT4_SIZE                                  1
#define AVR32_ACIFB_IMR_SUTINT5                                      11
#define AVR32_ACIFB_IMR_SUTINT5_MASK                         0x00000800
#define AVR32_ACIFB_IMR_SUTINT5_OFFSET                               11
#define AVR32_ACIFB_IMR_SUTINT5_SIZE                                  1
#define AVR32_ACIFB_IMR_SUTINT6                                      13
#define AVR32_ACIFB_IMR_SUTINT6_MASK                         0x00002000
#define AVR32_ACIFB_IMR_SUTINT6_OFFSET                               13
#define AVR32_ACIFB_IMR_SUTINT6_SIZE                                  1
#define AVR32_ACIFB_IMR_SUTINT7                                      15
#define AVR32_ACIFB_IMR_SUTINT7_MASK                         0x00008000
#define AVR32_ACIFB_IMR_SUTINT7_OFFSET                               15
#define AVR32_ACIFB_IMR_SUTINT7_SIZE                                  1
#define AVR32_ACIFB_IMR_WFINT0                                       24
#define AVR32_ACIFB_IMR_WFINT0_MASK                          0x01000000
#define AVR32_ACIFB_IMR_WFINT0_OFFSET                                24
#define AVR32_ACIFB_IMR_WFINT0_SIZE                                   1
#define AVR32_ACIFB_IMR_WFINT1                                       25
#define AVR32_ACIFB_IMR_WFINT1_MASK                          0x02000000
#define AVR32_ACIFB_IMR_WFINT1_OFFSET                                25
#define AVR32_ACIFB_IMR_WFINT1_SIZE                                   1
#define AVR32_ACIFB_IMR_WFINT2                                       26
#define AVR32_ACIFB_IMR_WFINT2_MASK                          0x04000000
#define AVR32_ACIFB_IMR_WFINT2_OFFSET                                26
#define AVR32_ACIFB_IMR_WFINT2_SIZE                                   1
#define AVR32_ACIFB_IMR_WFINT3                                       27
#define AVR32_ACIFB_IMR_WFINT3_MASK                          0x08000000
#define AVR32_ACIFB_IMR_WFINT3_OFFSET                                27
#define AVR32_ACIFB_IMR_WFINT3_SIZE                                   1
#define AVR32_ACIFB_INSELN                                            8
#define AVR32_ACIFB_INSELN_MASK                              0x00000300
#define AVR32_ACIFB_INSELN_OFFSET                                     8
#define AVR32_ACIFB_INSELN_SIZE                                       2
#define AVR32_ACIFB_INSELP                                           10
#define AVR32_ACIFB_INSELP_MASK                              0x00000c00
#define AVR32_ACIFB_INSELP_OFFSET                                    10
#define AVR32_ACIFB_INSELP_SIZE                                       2
#define AVR32_ACIFB_IS                                                0
#define AVR32_ACIFB_ISR                                      0x0000001c
#define AVR32_ACIFB_ISR_ACINT0                                        0
#define AVR32_ACIFB_ISR_ACINT0_MASK                          0x00000001
#define AVR32_ACIFB_ISR_ACINT0_OFFSET                                 0
#define AVR32_ACIFB_ISR_ACINT0_SIZE                                   1
#define AVR32_ACIFB_ISR_ACINT1                                        2
#define AVR32_ACIFB_ISR_ACINT1_MASK                          0x00000004
#define AVR32_ACIFB_ISR_ACINT1_OFFSET                                 2
#define AVR32_ACIFB_ISR_ACINT1_SIZE                                   1
#define AVR32_ACIFB_ISR_ACINT2                                        4
#define AVR32_ACIFB_ISR_ACINT2_MASK                          0x00000010
#define AVR32_ACIFB_ISR_ACINT2_OFFSET                                 4
#define AVR32_ACIFB_ISR_ACINT2_SIZE                                   1
#define AVR32_ACIFB_ISR_ACINT3                                        6
#define AVR32_ACIFB_ISR_ACINT3_MASK                          0x00000040
#define AVR32_ACIFB_ISR_ACINT3_OFFSET                                 6
#define AVR32_ACIFB_ISR_ACINT3_SIZE                                   1
#define AVR32_ACIFB_ISR_ACINT4                                        8
#define AVR32_ACIFB_ISR_ACINT4_MASK                          0x00000100
#define AVR32_ACIFB_ISR_ACINT4_OFFSET                                 8
#define AVR32_ACIFB_ISR_ACINT4_SIZE                                   1
#define AVR32_ACIFB_ISR_ACINT5                                       10
#define AVR32_ACIFB_ISR_ACINT5_MASK                          0x00000400
#define AVR32_ACIFB_ISR_ACINT5_OFFSET                                10
#define AVR32_ACIFB_ISR_ACINT5_SIZE                                   1
#define AVR32_ACIFB_ISR_ACINT6                                       12
#define AVR32_ACIFB_ISR_ACINT6_MASK                          0x00001000
#define AVR32_ACIFB_ISR_ACINT6_OFFSET                                12
#define AVR32_ACIFB_ISR_ACINT6_SIZE                                   1
#define AVR32_ACIFB_ISR_ACINT7                                       14
#define AVR32_ACIFB_ISR_ACINT7_MASK                          0x00004000
#define AVR32_ACIFB_ISR_ACINT7_OFFSET                                14
#define AVR32_ACIFB_ISR_ACINT7_SIZE                                   1
#define AVR32_ACIFB_ISR_MASK                                 0x0f00ffff
#define AVR32_ACIFB_ISR_RESETVALUE                           0x00000000
#define AVR32_ACIFB_ISR_SUTINT0                                       1
#define AVR32_ACIFB_ISR_SUTINT0_MASK                         0x00000002
#define AVR32_ACIFB_ISR_SUTINT0_OFFSET                                1
#define AVR32_ACIFB_ISR_SUTINT0_SIZE                                  1
#define AVR32_ACIFB_ISR_SUTINT1                                       3
#define AVR32_ACIFB_ISR_SUTINT1_MASK                         0x00000008
#define AVR32_ACIFB_ISR_SUTINT1_OFFSET                                3
#define AVR32_ACIFB_ISR_SUTINT1_SIZE                                  1
#define AVR32_ACIFB_ISR_SUTINT2                                       5
#define AVR32_ACIFB_ISR_SUTINT2_MASK                         0x00000020
#define AVR32_ACIFB_ISR_SUTINT2_OFFSET                                5
#define AVR32_ACIFB_ISR_SUTINT2_SIZE                                  1
#define AVR32_ACIFB_ISR_SUTINT3                                       7
#define AVR32_ACIFB_ISR_SUTINT3_MASK                         0x00000080
#define AVR32_ACIFB_ISR_SUTINT3_OFFSET                                7
#define AVR32_ACIFB_ISR_SUTINT3_SIZE                                  1
#define AVR32_ACIFB_ISR_SUTINT4                                       9
#define AVR32_ACIFB_ISR_SUTINT4_MASK                         0x00000200
#define AVR32_ACIFB_ISR_SUTINT4_OFFSET                                9
#define AVR32_ACIFB_ISR_SUTINT4_SIZE                                  1
#define AVR32_ACIFB_ISR_SUTINT5                                      11
#define AVR32_ACIFB_ISR_SUTINT5_MASK                         0x00000800
#define AVR32_ACIFB_ISR_SUTINT5_OFFSET                               11
#define AVR32_ACIFB_ISR_SUTINT5_SIZE                                  1
#define AVR32_ACIFB_ISR_SUTINT6                                      13
#define AVR32_ACIFB_ISR_SUTINT6_MASK                         0x00002000
#define AVR32_ACIFB_ISR_SUTINT6_OFFSET                               13
#define AVR32_ACIFB_ISR_SUTINT6_SIZE                                  1
#define AVR32_ACIFB_ISR_SUTINT7                                      15
#define AVR32_ACIFB_ISR_SUTINT7_MASK                         0x00008000
#define AVR32_ACIFB_ISR_SUTINT7_OFFSET                               15
#define AVR32_ACIFB_ISR_SUTINT7_SIZE                                  1
#define AVR32_ACIFB_ISR_WFINT0                                       24
#define AVR32_ACIFB_ISR_WFINT0_MASK                          0x01000000
#define AVR32_ACIFB_ISR_WFINT0_OFFSET                                24
#define AVR32_ACIFB_ISR_WFINT0_SIZE                                   1
#define AVR32_ACIFB_ISR_WFINT1                                       25
#define AVR32_ACIFB_ISR_WFINT1_MASK                          0x02000000
#define AVR32_ACIFB_ISR_WFINT1_OFFSET                                25
#define AVR32_ACIFB_ISR_WFINT1_SIZE                                   1
#define AVR32_ACIFB_ISR_WFINT2                                       26
#define AVR32_ACIFB_ISR_WFINT2_MASK                          0x04000000
#define AVR32_ACIFB_ISR_WFINT2_OFFSET                                26
#define AVR32_ACIFB_ISR_WFINT2_SIZE                                   1
#define AVR32_ACIFB_ISR_WFINT3                                       27
#define AVR32_ACIFB_ISR_WFINT3_MASK                          0x08000000
#define AVR32_ACIFB_ISR_WFINT3_OFFSET                                27
#define AVR32_ACIFB_ISR_WFINT3_SIZE                                   1
#define AVR32_ACIFB_IS_MASK                                  0x00000003
#define AVR32_ACIFB_IS_OFFSET                                         0
#define AVR32_ACIFB_IS_SIZE                                           2
#define AVR32_ACIFB_MODE                                              4
#define AVR32_ACIFB_MODE_OFFSET                                       4
#define AVR32_ACIFB_PARAMETER                                0x00000030
#define AVR32_ACIFB_PARAMETER_ACIMLP5                                 5
#define AVR32_ACIFB_PARAMETER_ACIMLP5_MASK                   0x00000020
#define AVR32_ACIFB_PARAMETER_ACIMLP5_OFFSET                          5
#define AVR32_ACIFB_PARAMETER_ACIMLP5_SIZE                            1
#define AVR32_ACIFB_PARAMETER_ACIMLP6                                 6
#define AVR32_ACIFB_PARAMETER_ACIMLP6_MASK                   0x00000040
#define AVR32_ACIFB_PARAMETER_ACIMLP6_OFFSET                          6
#define AVR32_ACIFB_PARAMETER_ACIMLP6_SIZE                            1
#define AVR32_ACIFB_PARAMETER_ACIMPL0                                 0
#define AVR32_ACIFB_PARAMETER_ACIMPL0_MASK                   0x00000001
#define AVR32_ACIFB_PARAMETER_ACIMPL0_OFFSET                          0
#define AVR32_ACIFB_PARAMETER_ACIMPL0_SIZE                            1
#define AVR32_ACIFB_PARAMETER_ACIMPL1                                 1
#define AVR32_ACIFB_PARAMETER_ACIMPL1_MASK                   0x00000002
#define AVR32_ACIFB_PARAMETER_ACIMPL1_OFFSET                          1
#define AVR32_ACIFB_PARAMETER_ACIMPL1_SIZE                            1
#define AVR32_ACIFB_PARAMETER_ACIMPL2                                 2
#define AVR32_ACIFB_PARAMETER_ACIMPL2_MASK                   0x00000004
#define AVR32_ACIFB_PARAMETER_ACIMPL2_OFFSET                          2
#define AVR32_ACIFB_PARAMETER_ACIMPL2_SIZE                            1
#define AVR32_ACIFB_PARAMETER_ACIMPL3                                 3
#define AVR32_ACIFB_PARAMETER_ACIMPL3_MASK                   0x00000008
#define AVR32_ACIFB_PARAMETER_ACIMPL3_OFFSET                          3
#define AVR32_ACIFB_PARAMETER_ACIMPL3_SIZE                            1
#define AVR32_ACIFB_PARAMETER_ACIMPL4                                 4
#define AVR32_ACIFB_PARAMETER_ACIMPL4_MASK                   0x00000010
#define AVR32_ACIFB_PARAMETER_ACIMPL4_OFFSET                          4
#define AVR32_ACIFB_PARAMETER_ACIMPL4_SIZE                            1
#define AVR32_ACIFB_PARAMETER_ACIMPL7                                 7
#define AVR32_ACIFB_PARAMETER_ACIMPL7_MASK                   0x00000080
#define AVR32_ACIFB_PARAMETER_ACIMPL7_OFFSET                          7
#define AVR32_ACIFB_PARAMETER_ACIMPL7_SIZE                            1
#define AVR32_ACIFB_PARAMETER_MASK                           0x000f00ff
#define AVR32_ACIFB_PARAMETER_RESETVALUE                     0x00000000
#define AVR32_ACIFB_PARAMETER_WIMPL0                                 16
#define AVR32_ACIFB_PARAMETER_WIMPL0_MASK                    0x00010000
#define AVR32_ACIFB_PARAMETER_WIMPL0_OFFSET                          16
#define AVR32_ACIFB_PARAMETER_WIMPL0_SIZE                             1
#define AVR32_ACIFB_PARAMETER_WIMPL1                                 17
#define AVR32_ACIFB_PARAMETER_WIMPL1_MASK                    0x00020000
#define AVR32_ACIFB_PARAMETER_WIMPL1_OFFSET                          17
#define AVR32_ACIFB_PARAMETER_WIMPL1_SIZE                             1
#define AVR32_ACIFB_PARAMETER_WIMPL2                                 18
#define AVR32_ACIFB_PARAMETER_WIMPL2_MASK                    0x00040000
#define AVR32_ACIFB_PARAMETER_WIMPL2_OFFSET                          18
#define AVR32_ACIFB_PARAMETER_WIMPL2_SIZE                             1
#define AVR32_ACIFB_PARAMETER_WIMPL3                                 19
#define AVR32_ACIFB_PARAMETER_WIMPL3_MASK                    0x00080000
#define AVR32_ACIFB_PARAMETER_WIMPL3_OFFSET                          19
#define AVR32_ACIFB_PARAMETER_WIMPL3_SIZE                             1
#define AVR32_ACIFB_SR                                       0x00000004
#define AVR32_ACIFB_SR_ACCS0                                          0
#define AVR32_ACIFB_SR_ACCS0_MASK                            0x00000001
#define AVR32_ACIFB_SR_ACCS0_OFFSET                                   0
#define AVR32_ACIFB_SR_ACCS0_SIZE                                     1
#define AVR32_ACIFB_SR_ACCS1                                          2
#define AVR32_ACIFB_SR_ACCS1_MASK                            0x00000004
#define AVR32_ACIFB_SR_ACCS1_OFFSET                                   2
#define AVR32_ACIFB_SR_ACCS1_SIZE                                     1
#define AVR32_ACIFB_SR_ACCS2                                          4
#define AVR32_ACIFB_SR_ACCS2_MASK                            0x00000010
#define AVR32_ACIFB_SR_ACCS2_OFFSET                                   4
#define AVR32_ACIFB_SR_ACCS2_SIZE                                     1
#define AVR32_ACIFB_SR_ACCS3                                          6
#define AVR32_ACIFB_SR_ACCS3_MASK                            0x00000040
#define AVR32_ACIFB_SR_ACCS3_OFFSET                                   6
#define AVR32_ACIFB_SR_ACCS3_SIZE                                     1
#define AVR32_ACIFB_SR_ACCS4                                          8
#define AVR32_ACIFB_SR_ACCS4_MASK                            0x00000100
#define AVR32_ACIFB_SR_ACCS4_OFFSET                                   8
#define AVR32_ACIFB_SR_ACCS4_SIZE                                     1
#define AVR32_ACIFB_SR_ACCS5                                         10
#define AVR32_ACIFB_SR_ACCS5_MASK                            0x00000400
#define AVR32_ACIFB_SR_ACCS5_OFFSET                                  10
#define AVR32_ACIFB_SR_ACCS5_SIZE                                     1
#define AVR32_ACIFB_SR_ACCS6                                         12
#define AVR32_ACIFB_SR_ACCS6_MASK                            0x00001000
#define AVR32_ACIFB_SR_ACCS6_OFFSET                                  12
#define AVR32_ACIFB_SR_ACCS6_SIZE                                     1
#define AVR32_ACIFB_SR_ACCS7                                         14
#define AVR32_ACIFB_SR_ACCS7_MASK                            0x00004000
#define AVR32_ACIFB_SR_ACCS7_OFFSET                                  14
#define AVR32_ACIFB_SR_ACCS7_SIZE                                     1
#define AVR32_ACIFB_SR_ACRDY0                                         1
#define AVR32_ACIFB_SR_ACRDY0_MASK                           0x00000002
#define AVR32_ACIFB_SR_ACRDY0_OFFSET                                  1
#define AVR32_ACIFB_SR_ACRDY0_SIZE                                    1
#define AVR32_ACIFB_SR_ACRDY1                                         3
#define AVR32_ACIFB_SR_ACRDY1_MASK                           0x00000008
#define AVR32_ACIFB_SR_ACRDY1_OFFSET                                  3
#define AVR32_ACIFB_SR_ACRDY1_SIZE                                    1
#define AVR32_ACIFB_SR_ACRDY2                                         5
#define AVR32_ACIFB_SR_ACRDY2_MASK                           0x00000020
#define AVR32_ACIFB_SR_ACRDY2_OFFSET                                  5
#define AVR32_ACIFB_SR_ACRDY2_SIZE                                    1
#define AVR32_ACIFB_SR_ACRDY3                                         7
#define AVR32_ACIFB_SR_ACRDY3_MASK                           0x00000080
#define AVR32_ACIFB_SR_ACRDY3_OFFSET                                  7
#define AVR32_ACIFB_SR_ACRDY3_SIZE                                    1
#define AVR32_ACIFB_SR_ACRDY4                                         9
#define AVR32_ACIFB_SR_ACRDY4_MASK                           0x00000200
#define AVR32_ACIFB_SR_ACRDY4_OFFSET                                  9
#define AVR32_ACIFB_SR_ACRDY4_SIZE                                    1
#define AVR32_ACIFB_SR_ACRDY5                                        11
#define AVR32_ACIFB_SR_ACRDY5_MASK                           0x00000800
#define AVR32_ACIFB_SR_ACRDY5_OFFSET                                 11
#define AVR32_ACIFB_SR_ACRDY5_SIZE                                    1
#define AVR32_ACIFB_SR_ACRDY6                                        13
#define AVR32_ACIFB_SR_ACRDY6_MASK                           0x00002000
#define AVR32_ACIFB_SR_ACRDY6_OFFSET                                 13
#define AVR32_ACIFB_SR_ACRDY6_SIZE                                    1
#define AVR32_ACIFB_SR_ACRDY7                                        15
#define AVR32_ACIFB_SR_ACRDY7_MASK                           0x00008000
#define AVR32_ACIFB_SR_ACRDY7_OFFSET                                 15
#define AVR32_ACIFB_SR_ACRDY7_SIZE                                    1
#define AVR32_ACIFB_SR_MASK                                  0x0f00ffff
#define AVR32_ACIFB_SR_RESETVALUE                            0x00000000
#define AVR32_ACIFB_SR_WFCS0                                         24
#define AVR32_ACIFB_SR_WFCS0_MASK                            0x01000000
#define AVR32_ACIFB_SR_WFCS0_OFFSET                                  24
#define AVR32_ACIFB_SR_WFCS0_SIZE                                     1
#define AVR32_ACIFB_SR_WFCS1                                         25
#define AVR32_ACIFB_SR_WFCS1_MASK                            0x02000000
#define AVR32_ACIFB_SR_WFCS1_OFFSET                                  25
#define AVR32_ACIFB_SR_WFCS1_SIZE                                     1
#define AVR32_ACIFB_SR_WFCS2                                         26
#define AVR32_ACIFB_SR_WFCS2_MASK                            0x04000000
#define AVR32_ACIFB_SR_WFCS2_OFFSET                                  26
#define AVR32_ACIFB_SR_WFCS2_SIZE                                     1
#define AVR32_ACIFB_SR_WFCS3                                         27
#define AVR32_ACIFB_SR_WFCS3_MASK                            0x08000000
#define AVR32_ACIFB_SR_WFCS3_OFFSET                                  27
#define AVR32_ACIFB_SR_WFCS3_SIZE                                     1
#define AVR32_ACIFB_SUT                                               8
#define AVR32_ACIFB_SUTINT0                                           1
#define AVR32_ACIFB_SUTINT0_MASK                             0x00000002
#define AVR32_ACIFB_SUTINT0_OFFSET                                    1
#define AVR32_ACIFB_SUTINT0_SIZE                                      1
#define AVR32_ACIFB_SUTINT1                                           3
#define AVR32_ACIFB_SUTINT1_MASK                             0x00000008
#define AVR32_ACIFB_SUTINT1_OFFSET                                    3
#define AVR32_ACIFB_SUTINT1_SIZE                                      1
#define AVR32_ACIFB_SUTINT2                                           5
#define AVR32_ACIFB_SUTINT2_MASK                             0x00000020
#define AVR32_ACIFB_SUTINT2_OFFSET                                    5
#define AVR32_ACIFB_SUTINT2_SIZE                                      1
#define AVR32_ACIFB_SUTINT3                                           7
#define AVR32_ACIFB_SUTINT3_MASK                             0x00000080
#define AVR32_ACIFB_SUTINT3_OFFSET                                    7
#define AVR32_ACIFB_SUTINT3_SIZE                                      1
#define AVR32_ACIFB_SUTINT4                                           9
#define AVR32_ACIFB_SUTINT4_MASK                             0x00000200
#define AVR32_ACIFB_SUTINT4_OFFSET                                    9
#define AVR32_ACIFB_SUTINT4_SIZE                                      1
#define AVR32_ACIFB_SUTINT5                                          11
#define AVR32_ACIFB_SUTINT5_MASK                             0x00000800
#define AVR32_ACIFB_SUTINT5_OFFSET                                   11
#define AVR32_ACIFB_SUTINT5_SIZE                                      1
#define AVR32_ACIFB_SUTINT6                                          13
#define AVR32_ACIFB_SUTINT6_MASK                             0x00002000
#define AVR32_ACIFB_SUTINT6_OFFSET                                   13
#define AVR32_ACIFB_SUTINT6_SIZE                                      1
#define AVR32_ACIFB_SUTINT7                                          15
#define AVR32_ACIFB_SUTINT7_MASK                             0x00008000
#define AVR32_ACIFB_SUTINT7_OFFSET                                   15
#define AVR32_ACIFB_SUTINT7_SIZE                                      1
#define AVR32_ACIFB_SUT_MASK                                 0x0003ff00
#define AVR32_ACIFB_SUT_OFFSET                                        8
#define AVR32_ACIFB_SUT_SIZE                                         10
#define AVR32_ACIFB_TR                                       0x00000024
#define AVR32_ACIFB_TR_ACTEST0                                        0
#define AVR32_ACIFB_TR_ACTEST0_MASK                          0x00000001
#define AVR32_ACIFB_TR_ACTEST0_OFFSET                                 0
#define AVR32_ACIFB_TR_ACTEST0_SIZE                                   1
#define AVR32_ACIFB_TR_ACTEST1                                        1
#define AVR32_ACIFB_TR_ACTEST1_MASK                          0x00000002
#define AVR32_ACIFB_TR_ACTEST1_OFFSET                                 1
#define AVR32_ACIFB_TR_ACTEST1_SIZE                                   1
#define AVR32_ACIFB_TR_ACTEST2                                        2
#define AVR32_ACIFB_TR_ACTEST2_MASK                          0x00000004
#define AVR32_ACIFB_TR_ACTEST2_OFFSET                                 2
#define AVR32_ACIFB_TR_ACTEST2_SIZE                                   1
#define AVR32_ACIFB_TR_ACTEST3                                        3
#define AVR32_ACIFB_TR_ACTEST3_MASK                          0x00000008
#define AVR32_ACIFB_TR_ACTEST3_OFFSET                                 3
#define AVR32_ACIFB_TR_ACTEST3_SIZE                                   1
#define AVR32_ACIFB_TR_ACTEST4                                        4
#define AVR32_ACIFB_TR_ACTEST4_MASK                          0x00000010
#define AVR32_ACIFB_TR_ACTEST4_OFFSET                                 4
#define AVR32_ACIFB_TR_ACTEST4_SIZE                                   1
#define AVR32_ACIFB_TR_ACTEST5                                        5
#define AVR32_ACIFB_TR_ACTEST5_MASK                          0x00000020
#define AVR32_ACIFB_TR_ACTEST5_OFFSET                                 5
#define AVR32_ACIFB_TR_ACTEST5_SIZE                                   1
#define AVR32_ACIFB_TR_ACTEST6                                        6
#define AVR32_ACIFB_TR_ACTEST6_MASK                          0x00000040
#define AVR32_ACIFB_TR_ACTEST6_OFFSET                                 6
#define AVR32_ACIFB_TR_ACTEST6_SIZE                                   1
#define AVR32_ACIFB_TR_ACTEST7                                        7
#define AVR32_ACIFB_TR_ACTEST7_MASK                          0x00000080
#define AVR32_ACIFB_TR_ACTEST7_OFFSET                                 7
#define AVR32_ACIFB_TR_ACTEST7_SIZE                                   1
#define AVR32_ACIFB_TR_MASK                                  0x000000ff
#define AVR32_ACIFB_TR_RESETVALUE                            0x00000000
#define AVR32_ACIFB_USTART                                            4
#define AVR32_ACIFB_USTART_MASK                              0x00000010
#define AVR32_ACIFB_USTART_OFFSET                                     4
#define AVR32_ACIFB_USTART_SIZE                                       1
#define AVR32_ACIFB_VARIANT                                          16
#define AVR32_ACIFB_VARIANT_MASK                             0x000f0000
#define AVR32_ACIFB_VARIANT_OFFSET                                   16
#define AVR32_ACIFB_VARIANT_SIZE                                      4
#define AVR32_ACIFB_VERSION                                  0x00000034
#define AVR32_ACIFB_VERSION_MASK                             0x000f0fff
#define AVR32_ACIFB_VERSION_OFFSET                                    0
#define AVR32_ACIFB_VERSION_RESETVALUE                       0x00000000
#define AVR32_ACIFB_VERSION_SIZE                                     12
#define AVR32_ACIFB_VERSION_VARIANT                                  16
#define AVR32_ACIFB_VERSION_VARIANT_MASK                     0x000f0000
#define AVR32_ACIFB_VERSION_VARIANT_OFFSET                           16
#define AVR32_ACIFB_VERSION_VARIANT_SIZE                              4
#define AVR32_ACIFB_VERSION_VERSION                                   0
#define AVR32_ACIFB_VERSION_VERSION_MASK                     0x00000fff
#define AVR32_ACIFB_VERSION_VERSION_OFFSET                            0
#define AVR32_ACIFB_VERSION_VERSION_SIZE                             12
#define AVR32_ACIFB_WEVEN                                            10
#define AVR32_ACIFB_WEVEN_MASK                               0x00000400
#define AVR32_ACIFB_WEVEN_OFFSET                                     10
#define AVR32_ACIFB_WEVEN_SIZE                                        1
#define AVR32_ACIFB_WEVSRC                                            8
#define AVR32_ACIFB_WEVSRC_MASK                              0x00000300
#define AVR32_ACIFB_WEVSRC_OFFSET                                     8
#define AVR32_ACIFB_WEVSRC_SIZE                                       2
#define AVR32_ACIFB_WFCS0                                            24
#define AVR32_ACIFB_WFCS0_MASK                               0x01000000
#define AVR32_ACIFB_WFCS0_OFFSET                                     24
#define AVR32_ACIFB_WFCS0_SIZE                                        1
#define AVR32_ACIFB_WFCS1                                            25
#define AVR32_ACIFB_WFCS1_MASK                               0x02000000
#define AVR32_ACIFB_WFCS1_OFFSET                                     25
#define AVR32_ACIFB_WFCS1_SIZE                                        1
#define AVR32_ACIFB_WFCS2                                            26
#define AVR32_ACIFB_WFCS2_MASK                               0x04000000
#define AVR32_ACIFB_WFCS2_OFFSET                                     26
#define AVR32_ACIFB_WFCS2_SIZE                                        1
#define AVR32_ACIFB_WFCS3                                            27
#define AVR32_ACIFB_WFCS3_MASK                               0x08000000
#define AVR32_ACIFB_WFCS3_OFFSET                                     27
#define AVR32_ACIFB_WFCS3_SIZE                                        1
#define AVR32_ACIFB_WFEN                                             16
#define AVR32_ACIFB_WFEN_MASK                                0x00010000
#define AVR32_ACIFB_WFEN_OFFSET                                      16
#define AVR32_ACIFB_WFEN_SIZE                                         1
#define AVR32_ACIFB_WFINT0                                           24
#define AVR32_ACIFB_WFINT0_MASK                              0x01000000
#define AVR32_ACIFB_WFINT0_OFFSET                                    24
#define AVR32_ACIFB_WFINT0_SIZE                                       1
#define AVR32_ACIFB_WFINT1                                           25
#define AVR32_ACIFB_WFINT1_MASK                              0x02000000
#define AVR32_ACIFB_WFINT1_OFFSET                                    25
#define AVR32_ACIFB_WFINT1_SIZE                                       1
#define AVR32_ACIFB_WFINT2                                           26
#define AVR32_ACIFB_WFINT2_MASK                              0x04000000
#define AVR32_ACIFB_WFINT2_OFFSET                                    26
#define AVR32_ACIFB_WFINT2_SIZE                                       1
#define AVR32_ACIFB_WFINT3                                           27
#define AVR32_ACIFB_WFINT3_MASK                              0x08000000
#define AVR32_ACIFB_WFINT3_OFFSET                                    27
#define AVR32_ACIFB_WFINT3_SIZE                                       1
#define AVR32_ACIFB_WIMPL0                                           16
#define AVR32_ACIFB_WIMPL0_MASK                              0x00010000
#define AVR32_ACIFB_WIMPL0_OFFSET                                    16
#define AVR32_ACIFB_WIMPL0_SIZE                                       1
#define AVR32_ACIFB_WIMPL1                                           17
#define AVR32_ACIFB_WIMPL1_MASK                              0x00020000
#define AVR32_ACIFB_WIMPL1_OFFSET                                    17
#define AVR32_ACIFB_WIMPL1_SIZE                                       1
#define AVR32_ACIFB_WIMPL2                                           18
#define AVR32_ACIFB_WIMPL2_MASK                              0x00040000
#define AVR32_ACIFB_WIMPL2_OFFSET                                    18
#define AVR32_ACIFB_WIMPL2_SIZE                                       1
#define AVR32_ACIFB_WIMPL3                                           19
#define AVR32_ACIFB_WIMPL3_MASK                              0x00080000
#define AVR32_ACIFB_WIMPL3_OFFSET                                    19
#define AVR32_ACIFB_WIMPL3_SIZE                                       1
#define AVR32_ACIFB_WIS                                               0
#define AVR32_ACIFB_WIS_MASK                                 0x00000003
#define AVR32_ACIFB_WIS_OFFSET                                        0
#define AVR32_ACIFB_WIS_SIZE                                          2




#ifdef __AVR32_ABI_COMPILER__


typedef struct avr32_acifb_ctrl_t {
    unsigned int                 :14;
    unsigned int sut             :10;
    unsigned int actest          : 1;
    unsigned int                 : 1;
    unsigned int estart          : 1;
    unsigned int ustart          : 1;
    unsigned int                 : 2;
    unsigned int eventen         : 1;
    unsigned int en              : 1;
} avr32_acifb_ctrl_t;



typedef struct avr32_acifb_sr_t {
    unsigned int                 : 4;
    unsigned int wfcs3           : 1;
    unsigned int wfcs2           : 1;
    unsigned int wfcs1           : 1;
    unsigned int wfcs0           : 1;
    unsigned int                 : 8;
    unsigned int acrdy7          : 1;
    unsigned int accs7           : 1;
    unsigned int acrdy6          : 1;
    unsigned int accs6           : 1;
    unsigned int acrdy5          : 1;
    unsigned int accs5           : 1;
    unsigned int acrdy4          : 1;
    unsigned int accs4           : 1;
    unsigned int acrdy3          : 1;
    unsigned int accs3           : 1;
    unsigned int acrdy2          : 1;
    unsigned int accs2           : 1;
    unsigned int acrdy1          : 1;
    unsigned int accs1           : 1;
    unsigned int acrdy0          : 1;
    unsigned int accs0           : 1;
} avr32_acifb_sr_t;



typedef struct avr32_acifb_ier_t {
    unsigned int                 : 4;
    unsigned int wfint3          : 1;
    unsigned int wfint2          : 1;
    unsigned int wfint1          : 1;
    unsigned int wfint0          : 1;
    unsigned int                 : 8;
    unsigned int sutint7         : 1;
    unsigned int acint7          : 1;
    unsigned int sutint6         : 1;
    unsigned int acint6          : 1;
    unsigned int sutint5         : 1;
    unsigned int acint5          : 1;
    unsigned int sutint4         : 1;
    unsigned int acint4          : 1;
    unsigned int sutint3         : 1;
    unsigned int acint3          : 1;
    unsigned int sutint2         : 1;
    unsigned int acint2          : 1;
    unsigned int sutint1         : 1;
    unsigned int acint1          : 1;
    unsigned int sutint0         : 1;
    unsigned int acint0          : 1;
} avr32_acifb_ier_t;



typedef struct avr32_acifb_idr_t {
    unsigned int                 : 4;
    unsigned int wfint3          : 1;
    unsigned int wfint2          : 1;
    unsigned int wfint1          : 1;
    unsigned int wfint0          : 1;
    unsigned int                 : 8;
    unsigned int sutint7         : 1;
    unsigned int acint7          : 1;
    unsigned int sutint6         : 1;
    unsigned int acint6          : 1;
    unsigned int sutint5         : 1;
    unsigned int acint5          : 1;
    unsigned int sutint4         : 1;
    unsigned int acint4          : 1;
    unsigned int sutint3         : 1;
    unsigned int acint3          : 1;
    unsigned int sutint2         : 1;
    unsigned int acint2          : 1;
    unsigned int sutint1         : 1;
    unsigned int acint1          : 1;
    unsigned int sutint0         : 1;
    unsigned int acint0          : 1;
} avr32_acifb_idr_t;



typedef struct avr32_acifb_imr_t {
    unsigned int                 : 4;
    unsigned int wfint3          : 1;
    unsigned int wfint2          : 1;
    unsigned int wfint1          : 1;
    unsigned int wfint0          : 1;
    unsigned int                 : 8;
    unsigned int sutint7         : 1;
    unsigned int acint7          : 1;
    unsigned int sutint6         : 1;
    unsigned int acint6          : 1;
    unsigned int sutint5         : 1;
    unsigned int acint5          : 1;
    unsigned int sutint4         : 1;
    unsigned int acint4          : 1;
    unsigned int sutint3         : 1;
    unsigned int acint3          : 1;
    unsigned int sutint2         : 1;
    unsigned int acint2          : 1;
    unsigned int sutint1         : 1;
    unsigned int acint1          : 1;
    unsigned int sutint0         : 1;
    unsigned int acint0          : 1;
} avr32_acifb_imr_t;



typedef struct avr32_acifb_isr_t {
    unsigned int                 : 4;
    unsigned int wfint3          : 1;
    unsigned int wfint2          : 1;
    unsigned int wfint1          : 1;
    unsigned int wfint0          : 1;
    unsigned int                 : 8;
    unsigned int sutint7         : 1;
    unsigned int acint7          : 1;
    unsigned int sutint6         : 1;
    unsigned int acint6          : 1;
    unsigned int sutint5         : 1;
    unsigned int acint5          : 1;
    unsigned int sutint4         : 1;
    unsigned int acint4          : 1;
    unsigned int sutint3         : 1;
    unsigned int acint3          : 1;
    unsigned int sutint2         : 1;
    unsigned int acint2          : 1;
    unsigned int sutint1         : 1;
    unsigned int acint1          : 1;
    unsigned int sutint0         : 1;
    unsigned int acint0          : 1;
} avr32_acifb_isr_t;



typedef struct avr32_acifb_icr_t {
    unsigned int                 : 4;
    unsigned int wfint3          : 1;
    unsigned int wfint2          : 1;
    unsigned int wfint1          : 1;
    unsigned int wfint0          : 1;
    unsigned int                 : 8;
    unsigned int sutint7         : 1;
    unsigned int acint7          : 1;
    unsigned int sutint6         : 1;
    unsigned int acint6          : 1;
    unsigned int sutint5         : 1;
    unsigned int acint5          : 1;
    unsigned int sutint4         : 1;
    unsigned int acint4          : 1;
    unsigned int sutint3         : 1;
    unsigned int acint3          : 1;
    unsigned int sutint2         : 1;
    unsigned int acint2          : 1;
    unsigned int sutint1         : 1;
    unsigned int acint1          : 1;
    unsigned int sutint0         : 1;
    unsigned int acint0          : 1;
} avr32_acifb_icr_t;



typedef struct avr32_acifb_tr_t {
    unsigned int                 :24;
    unsigned int actest7         : 1;
    unsigned int actest6         : 1;
    unsigned int actest5         : 1;
    unsigned int actest4         : 1;
    unsigned int actest3         : 1;
    unsigned int actest2         : 1;
    unsigned int actest1         : 1;
    unsigned int actest0         : 1;
} avr32_acifb_tr_t;



typedef struct avr32_acifb_parameter_t {
    unsigned int                 :12;
    unsigned int wimpl3          : 1;
    unsigned int wimpl2          : 1;
    unsigned int wimpl1          : 1;
    unsigned int wimpl0          : 1;
    unsigned int                 : 8;
    unsigned int acimpl7         : 1;
    unsigned int acimlp6         : 1;
    unsigned int acimlp5         : 1;
    unsigned int acimpl4         : 1;
    unsigned int acimpl3         : 1;
    unsigned int acimpl2         : 1;
    unsigned int acimpl1         : 1;
    unsigned int acimpl0         : 1;
} avr32_acifb_parameter_t;



typedef struct avr32_acifb_version_t {
    unsigned int                 :12;
    unsigned int variant         : 4;
    unsigned int                 : 4;
    unsigned int version         :12;
} avr32_acifb_version_t;



typedef struct avr32_acifb_confw0_t {
    unsigned int                 :15;
    unsigned int wfen            : 1;
    unsigned int                 : 5;
    unsigned int weven           : 1;
    unsigned int wevsrc          : 2;
    unsigned int                 : 6;
    unsigned int wis             : 2;
} avr32_acifb_confw0_t;



typedef struct avr32_acifb_confw1_t {
    unsigned int                 :15;
    unsigned int wfen            : 1;
    unsigned int                 : 5;
    unsigned int weven           : 1;
    unsigned int wevsrc          : 2;
    unsigned int                 : 6;
    unsigned int wis             : 2;
} avr32_acifb_confw1_t;



typedef struct avr32_acifb_confw2_t {
    unsigned int                 :15;
    unsigned int wfen            : 1;
    unsigned int                 : 5;
    unsigned int weven           : 1;
    unsigned int wevsrc          : 2;
    unsigned int                 : 6;
    unsigned int wis             : 2;
} avr32_acifb_confw2_t;



typedef struct avr32_acifb_confw3_t {
    unsigned int                 :15;
    unsigned int wfen            : 1;
    unsigned int                 : 5;
    unsigned int weven           : 1;
    unsigned int wevsrc          : 2;
    unsigned int                 : 6;
    unsigned int wis             : 2;
} avr32_acifb_confw3_t;



typedef struct avr32_acifb_conf0_t {
    unsigned int                 : 1;
    unsigned int flen            : 3;
    unsigned int hys             : 4;
    unsigned int                 : 6;
    unsigned int evenn           : 1;
    unsigned int evenp           : 1;
    unsigned int                 : 4;
    unsigned int inselp          : 2;
    unsigned int inseln          : 2;
    unsigned int                 : 2;
    unsigned int mode            : 2;
    unsigned int                 : 2;
    unsigned int is              : 2;
} avr32_acifb_conf0_t;



typedef struct avr32_acifb_conf1_t {
    unsigned int                 : 1;
    unsigned int flen            : 3;
    unsigned int hys             : 4;
    unsigned int                 : 6;
    unsigned int evenn           : 1;
    unsigned int evenp           : 1;
    unsigned int                 : 4;
    unsigned int inselp          : 2;
    unsigned int inseln          : 2;
    unsigned int                 : 2;
    unsigned int mode            : 2;
    unsigned int                 : 2;
    unsigned int is              : 2;
} avr32_acifb_conf1_t;



typedef struct avr32_acifb_conf2_t {
    unsigned int                 : 1;
    unsigned int flen            : 3;
    unsigned int hys             : 4;
    unsigned int                 : 6;
    unsigned int evenn           : 1;
    unsigned int evenp           : 1;
    unsigned int                 : 4;
    unsigned int inselp          : 2;
    unsigned int inseln          : 2;
    unsigned int                 : 2;
    unsigned int mode            : 2;
    unsigned int                 : 2;
    unsigned int is              : 2;
} avr32_acifb_conf2_t;



typedef struct avr32_acifb_conf3_t {
    unsigned int                 : 1;
    unsigned int flen            : 3;
    unsigned int hys             : 4;
    unsigned int                 : 6;
    unsigned int evenn           : 1;
    unsigned int evenp           : 1;
    unsigned int                 : 4;
    unsigned int inselp          : 2;
    unsigned int inseln          : 2;
    unsigned int                 : 2;
    unsigned int mode            : 2;
    unsigned int                 : 2;
    unsigned int is              : 2;
} avr32_acifb_conf3_t;



typedef struct avr32_acifb_conf4_t {
    unsigned int                 : 1;
    unsigned int flen            : 3;
    unsigned int hys             : 4;
    unsigned int                 : 6;
    unsigned int evenn           : 1;
    unsigned int evenp           : 1;
    unsigned int                 : 4;
    unsigned int inselp          : 2;
    unsigned int inseln          : 2;
    unsigned int                 : 2;
    unsigned int mode            : 2;
    unsigned int                 : 2;
    unsigned int is              : 2;
} avr32_acifb_conf4_t;



typedef struct avr32_acifb_conf5_t {
    unsigned int                 : 1;
    unsigned int flen            : 3;
    unsigned int hys             : 4;
    unsigned int                 : 6;
    unsigned int evenn           : 1;
    unsigned int evenp           : 1;
    unsigned int                 : 4;
    unsigned int inselp          : 2;
    unsigned int inseln          : 2;
    unsigned int                 : 3;
    unsigned int mode            : 1;
    unsigned int                 : 2;
    unsigned int is              : 2;
} avr32_acifb_conf5_t;



typedef struct avr32_acifb_conf6_t {
    unsigned int                 : 1;
    unsigned int flen            : 3;
    unsigned int hys             : 4;
    unsigned int                 : 6;
    unsigned int evenn           : 1;
    unsigned int evenp           : 1;
    unsigned int                 : 4;
    unsigned int inselp          : 2;
    unsigned int inseln          : 2;
    unsigned int                 : 2;
    unsigned int mode            : 2;
    unsigned int                 : 2;
    unsigned int is              : 2;
} avr32_acifb_conf6_t;



typedef struct avr32_acifb_conf7_t {
    unsigned int                 : 1;
    unsigned int flen            : 3;
    unsigned int hys             : 4;
    unsigned int                 : 6;
    unsigned int evenn           : 1;
    unsigned int evenp           : 1;
    unsigned int                 : 4;
    unsigned int inselp          : 2;
    unsigned int inseln          : 2;
    unsigned int                 : 2;
    unsigned int mode            : 2;
    unsigned int                 : 2;
    unsigned int is              : 2;
} avr32_acifb_conf7_t;



typedef struct avr32_acifb_t {
  union {
          unsigned long                  ctrl      ;//0x0000
          avr32_acifb_ctrl_t             CTRL      ;
  };
  union {
    const unsigned long                  sr        ;//0x0004
    const avr32_acifb_sr_t               SR        ;
  };
          unsigned int                   :32       ;//0x0008
          unsigned int                   :32       ;//0x000c
  union {
          unsigned long                  ier       ;//0x0010
          avr32_acifb_ier_t              IER       ;
  };
  union {
          unsigned long                  idr       ;//0x0014
          avr32_acifb_idr_t              IDR       ;
  };
  union {
    const unsigned long                  imr       ;//0x0018
    const avr32_acifb_imr_t              IMR       ;
  };
  union {
    const unsigned long                  isr       ;//0x001c
    const avr32_acifb_isr_t              ISR       ;
  };
  union {
          unsigned long                  icr       ;//0x0020
          avr32_acifb_icr_t              ICR       ;
  };
  union {
          unsigned long                  tr        ;//0x0024
          avr32_acifb_tr_t               TR        ;
  };
          unsigned int                   :32       ;//0x0028
          unsigned int                   :32       ;//0x002c
  union {
    const unsigned long                  parameter ;//0x0030
    const avr32_acifb_parameter_t        PARAMETER ;
  };
  union {
    const unsigned long                  version   ;//0x0034
    const avr32_acifb_version_t          VERSION   ;
  };
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
  union {
          unsigned long                  confw0    ;//0x0080
          avr32_acifb_confw0_t           CONFW0    ;
  };
  union {
          unsigned long                  confw1    ;//0x0084
          avr32_acifb_confw1_t           CONFW1    ;
  };
  union {
          unsigned long                  confw2    ;//0x0088
          avr32_acifb_confw2_t           CONFW2    ;
  };
  union {
          unsigned long                  confw3    ;//0x008c
          avr32_acifb_confw3_t           CONFW3    ;
  };
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
  union {
          unsigned long                  conf0     ;//0x00d0
          avr32_acifb_conf0_t            CONF0     ;
  };
  union {
          unsigned long                  conf1     ;//0x00d4
          avr32_acifb_conf1_t            CONF1     ;
  };
  union {
          unsigned long                  conf2     ;//0x00d8
          avr32_acifb_conf2_t            CONF2     ;
  };
  union {
          unsigned long                  conf3     ;//0x00dc
          avr32_acifb_conf3_t            CONF3     ;
  };
  union {
          unsigned long                  conf4     ;//0x00e0
          avr32_acifb_conf4_t            CONF4     ;
  };
  union {
          unsigned long                  conf5     ;//0x00e4
          avr32_acifb_conf5_t            CONF5     ;
  };
  union {
          unsigned long                  conf6     ;//0x00e8
          avr32_acifb_conf6_t            CONF6     ;
  };
  union {
          unsigned long                  conf7     ;//0x00ec
          avr32_acifb_conf7_t            CONF7     ;
  };
} avr32_acifb_t;



/*#ifdef __AVR32_ABI_COMPILER__*/
#endif

/*#ifdef AVR32_ACIFB_201_H_INCLUDED*/
#endif

