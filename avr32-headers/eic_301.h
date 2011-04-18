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
 * Revision     : $Revision: 83412 $
 * Checkin Date : $Date: 2010-10-13 19:20:07 +0200 (Wed, 13 Oct 2010) $ 
 *
 ****************************************************************************/
#ifndef AVR32_EIC_301_H_INCLUDED
#define AVR32_EIC_301_H_INCLUDED

#define AVR32_EIC_H_VERSION 301

#include "avr32/abi.h"


/*
 Note to user:

 The following defines are always generated:
 - Register offset: AVR32_EIC_<register>
 - Bitfield mask:   AVR32_EIC_<register>_<bitfield>
 - Bitfield offset: AVR32_EIC_<register>_<bitfield>_OFFSET
 - Bitfield size:   AVR32_EIC_<register>_<bitfield>_SIZE
 - Bitfield values: AVR32_EIC_<register>_<bitfield>_<value name>

 The following defines are generated if they don't cause ambiguities,
 i.e. the name is unique, or all values with that name are the same.
 - Bitfield mask:   AVR32_EIC_<bitfield>
 - Bitfield offset: AVR32_EIC_<bitfield>_OFFSET
 - Bitfield size:   AVR32_EIC_<bitfield>_SIZE
 - Bitfield values: AVR32_EIC_<bitfield>_<value name>
 - Bitfield values: AVR32_EIC_<value name>

 All defines are sorted alphabetically.
*/


#define AVR32_EIC_ASYNC                                    0x00000028
#define AVR32_EIC_ASYNC_INT1                                        1
#define AVR32_EIC_ASYNC_INT10                                      10
#define AVR32_EIC_ASYNC_INT10_MASK                         0x00000400
#define AVR32_EIC_ASYNC_INT10_OFFSET                               10
#define AVR32_EIC_ASYNC_INT10_SIZE                                  1
#define AVR32_EIC_ASYNC_INT11                                      11
#define AVR32_EIC_ASYNC_INT11_MASK                         0x00000800
#define AVR32_EIC_ASYNC_INT11_OFFSET                               11
#define AVR32_EIC_ASYNC_INT11_SIZE                                  1
#define AVR32_EIC_ASYNC_INT12                                      12
#define AVR32_EIC_ASYNC_INT12_MASK                         0x00001000
#define AVR32_EIC_ASYNC_INT12_OFFSET                               12
#define AVR32_EIC_ASYNC_INT12_SIZE                                  1
#define AVR32_EIC_ASYNC_INT13                                      13
#define AVR32_EIC_ASYNC_INT13_MASK                         0x00002000
#define AVR32_EIC_ASYNC_INT13_OFFSET                               13
#define AVR32_EIC_ASYNC_INT13_SIZE                                  1
#define AVR32_EIC_ASYNC_INT14                                      14
#define AVR32_EIC_ASYNC_INT14_MASK                         0x00004000
#define AVR32_EIC_ASYNC_INT14_OFFSET                               14
#define AVR32_EIC_ASYNC_INT14_SIZE                                  1
#define AVR32_EIC_ASYNC_INT15                                      15
#define AVR32_EIC_ASYNC_INT15_MASK                         0x00008000
#define AVR32_EIC_ASYNC_INT15_OFFSET                               15
#define AVR32_EIC_ASYNC_INT15_SIZE                                  1
#define AVR32_EIC_ASYNC_INT1_MASK                          0x00000002
#define AVR32_EIC_ASYNC_INT1_OFFSET                                 1
#define AVR32_EIC_ASYNC_INT1_SIZE                                   1
#define AVR32_EIC_ASYNC_INT2                                        2
#define AVR32_EIC_ASYNC_INT2_MASK                          0x00000004
#define AVR32_EIC_ASYNC_INT2_OFFSET                                 2
#define AVR32_EIC_ASYNC_INT2_SIZE                                   1
#define AVR32_EIC_ASYNC_INT3                                        3
#define AVR32_EIC_ASYNC_INT3_MASK                          0x00000008
#define AVR32_EIC_ASYNC_INT3_OFFSET                                 3
#define AVR32_EIC_ASYNC_INT3_SIZE                                   1
#define AVR32_EIC_ASYNC_INT4                                        4
#define AVR32_EIC_ASYNC_INT4_MASK                          0x00000010
#define AVR32_EIC_ASYNC_INT4_OFFSET                                 4
#define AVR32_EIC_ASYNC_INT4_SIZE                                   1
#define AVR32_EIC_ASYNC_INT5                                        5
#define AVR32_EIC_ASYNC_INT5_MASK                          0x00000020
#define AVR32_EIC_ASYNC_INT5_OFFSET                                 5
#define AVR32_EIC_ASYNC_INT5_SIZE                                   1
#define AVR32_EIC_ASYNC_INT6                                        6
#define AVR32_EIC_ASYNC_INT6_MASK                          0x00000040
#define AVR32_EIC_ASYNC_INT6_OFFSET                                 6
#define AVR32_EIC_ASYNC_INT6_SIZE                                   1
#define AVR32_EIC_ASYNC_INT7                                        7
#define AVR32_EIC_ASYNC_INT7_MASK                          0x00000080
#define AVR32_EIC_ASYNC_INT7_OFFSET                                 7
#define AVR32_EIC_ASYNC_INT7_SIZE                                   1
#define AVR32_EIC_ASYNC_INT8                                        8
#define AVR32_EIC_ASYNC_INT8_MASK                          0x00000100
#define AVR32_EIC_ASYNC_INT8_OFFSET                                 8
#define AVR32_EIC_ASYNC_INT8_SIZE                                   1
#define AVR32_EIC_ASYNC_INT9                                        9
#define AVR32_EIC_ASYNC_INT9_MASK                          0x00000200
#define AVR32_EIC_ASYNC_INT9_OFFSET                                 9
#define AVR32_EIC_ASYNC_INT9_SIZE                                   1
#define AVR32_EIC_ASYNC_MASK                               0x0000ffff
#define AVR32_EIC_ASYNC_NMI                                         0
#define AVR32_EIC_ASYNC_NMI_MASK                           0x00000001
#define AVR32_EIC_ASYNC_NMI_OFFSET                                  0
#define AVR32_EIC_ASYNC_NMI_SIZE                                    1
#define AVR32_EIC_ASYNC_RESETVALUE                         0x00000000
#define AVR32_EIC_CTRL                                     0x00000038
#define AVR32_EIC_CTRL_INT1                                         1
#define AVR32_EIC_CTRL_INT10                                       10
#define AVR32_EIC_CTRL_INT10_MASK                          0x00000400
#define AVR32_EIC_CTRL_INT10_OFFSET                                10
#define AVR32_EIC_CTRL_INT10_SIZE                                   1
#define AVR32_EIC_CTRL_INT11                                       11
#define AVR32_EIC_CTRL_INT11_MASK                          0x00000800
#define AVR32_EIC_CTRL_INT11_OFFSET                                11
#define AVR32_EIC_CTRL_INT11_SIZE                                   1
#define AVR32_EIC_CTRL_INT12                                       12
#define AVR32_EIC_CTRL_INT12_MASK                          0x00001000
#define AVR32_EIC_CTRL_INT12_OFFSET                                12
#define AVR32_EIC_CTRL_INT12_SIZE                                   1
#define AVR32_EIC_CTRL_INT13                                       13
#define AVR32_EIC_CTRL_INT13_MASK                          0x00002000
#define AVR32_EIC_CTRL_INT13_OFFSET                                13
#define AVR32_EIC_CTRL_INT13_SIZE                                   1
#define AVR32_EIC_CTRL_INT14                                       14
#define AVR32_EIC_CTRL_INT14_MASK                          0x00004000
#define AVR32_EIC_CTRL_INT14_OFFSET                                14
#define AVR32_EIC_CTRL_INT14_SIZE                                   1
#define AVR32_EIC_CTRL_INT15                                       15
#define AVR32_EIC_CTRL_INT15_MASK                          0x00008000
#define AVR32_EIC_CTRL_INT15_OFFSET                                15
#define AVR32_EIC_CTRL_INT15_SIZE                                   1
#define AVR32_EIC_CTRL_INT1_MASK                           0x00000002
#define AVR32_EIC_CTRL_INT1_OFFSET                                  1
#define AVR32_EIC_CTRL_INT1_SIZE                                    1
#define AVR32_EIC_CTRL_INT2                                         2
#define AVR32_EIC_CTRL_INT2_MASK                           0x00000004
#define AVR32_EIC_CTRL_INT2_OFFSET                                  2
#define AVR32_EIC_CTRL_INT2_SIZE                                    1
#define AVR32_EIC_CTRL_INT3                                         3
#define AVR32_EIC_CTRL_INT3_MASK                           0x00000008
#define AVR32_EIC_CTRL_INT3_OFFSET                                  3
#define AVR32_EIC_CTRL_INT3_SIZE                                    1
#define AVR32_EIC_CTRL_INT4                                         4
#define AVR32_EIC_CTRL_INT4_MASK                           0x00000010
#define AVR32_EIC_CTRL_INT4_OFFSET                                  4
#define AVR32_EIC_CTRL_INT4_SIZE                                    1
#define AVR32_EIC_CTRL_INT5                                         5
#define AVR32_EIC_CTRL_INT5_MASK                           0x00000020
#define AVR32_EIC_CTRL_INT5_OFFSET                                  5
#define AVR32_EIC_CTRL_INT5_SIZE                                    1
#define AVR32_EIC_CTRL_INT6                                         6
#define AVR32_EIC_CTRL_INT6_MASK                           0x00000040
#define AVR32_EIC_CTRL_INT6_OFFSET                                  6
#define AVR32_EIC_CTRL_INT6_SIZE                                    1
#define AVR32_EIC_CTRL_INT7                                         7
#define AVR32_EIC_CTRL_INT7_MASK                           0x00000080
#define AVR32_EIC_CTRL_INT7_OFFSET                                  7
#define AVR32_EIC_CTRL_INT7_SIZE                                    1
#define AVR32_EIC_CTRL_INT8                                         8
#define AVR32_EIC_CTRL_INT8_MASK                           0x00000100
#define AVR32_EIC_CTRL_INT8_OFFSET                                  8
#define AVR32_EIC_CTRL_INT8_SIZE                                    1
#define AVR32_EIC_CTRL_INT9                                         9
#define AVR32_EIC_CTRL_INT9_MASK                           0x00000200
#define AVR32_EIC_CTRL_INT9_OFFSET                                  9
#define AVR32_EIC_CTRL_INT9_SIZE                                    1
#define AVR32_EIC_CTRL_MASK                                0x0000ffff
#define AVR32_EIC_CTRL_NMI                                          0
#define AVR32_EIC_CTRL_NMI_MASK                            0x00000001
#define AVR32_EIC_CTRL_NMI_OFFSET                                   0
#define AVR32_EIC_CTRL_NMI_SIZE                                     1
#define AVR32_EIC_CTRL_RESETVALUE                          0x00000000
#define AVR32_EIC_DIS                                      0x00000034
#define AVR32_EIC_DIS_INT1                                          1
#define AVR32_EIC_DIS_INT10                                        10
#define AVR32_EIC_DIS_INT10_MASK                           0x00000400
#define AVR32_EIC_DIS_INT10_OFFSET                                 10
#define AVR32_EIC_DIS_INT10_SIZE                                    1
#define AVR32_EIC_DIS_INT11                                        11
#define AVR32_EIC_DIS_INT11_MASK                           0x00000800
#define AVR32_EIC_DIS_INT11_OFFSET                                 11
#define AVR32_EIC_DIS_INT11_SIZE                                    1
#define AVR32_EIC_DIS_INT12                                        12
#define AVR32_EIC_DIS_INT12_MASK                           0x00001000
#define AVR32_EIC_DIS_INT12_OFFSET                                 12
#define AVR32_EIC_DIS_INT12_SIZE                                    1
#define AVR32_EIC_DIS_INT13                                        13
#define AVR32_EIC_DIS_INT13_MASK                           0x00002000
#define AVR32_EIC_DIS_INT13_OFFSET                                 13
#define AVR32_EIC_DIS_INT13_SIZE                                    1
#define AVR32_EIC_DIS_INT14                                        14
#define AVR32_EIC_DIS_INT14_MASK                           0x00004000
#define AVR32_EIC_DIS_INT14_OFFSET                                 14
#define AVR32_EIC_DIS_INT14_SIZE                                    1
#define AVR32_EIC_DIS_INT15                                        15
#define AVR32_EIC_DIS_INT15_MASK                           0x00008000
#define AVR32_EIC_DIS_INT15_OFFSET                                 15
#define AVR32_EIC_DIS_INT15_SIZE                                    1
#define AVR32_EIC_DIS_INT1_MASK                            0x00000002
#define AVR32_EIC_DIS_INT1_OFFSET                                   1
#define AVR32_EIC_DIS_INT1_SIZE                                     1
#define AVR32_EIC_DIS_INT2                                          2
#define AVR32_EIC_DIS_INT2_MASK                            0x00000004
#define AVR32_EIC_DIS_INT2_OFFSET                                   2
#define AVR32_EIC_DIS_INT2_SIZE                                     1
#define AVR32_EIC_DIS_INT3                                          3
#define AVR32_EIC_DIS_INT3_MASK                            0x00000008
#define AVR32_EIC_DIS_INT3_OFFSET                                   3
#define AVR32_EIC_DIS_INT3_SIZE                                     1
#define AVR32_EIC_DIS_INT4                                          4
#define AVR32_EIC_DIS_INT4_MASK                            0x00000010
#define AVR32_EIC_DIS_INT4_OFFSET                                   4
#define AVR32_EIC_DIS_INT4_SIZE                                     1
#define AVR32_EIC_DIS_INT5                                          5
#define AVR32_EIC_DIS_INT5_MASK                            0x00000020
#define AVR32_EIC_DIS_INT5_OFFSET                                   5
#define AVR32_EIC_DIS_INT5_SIZE                                     1
#define AVR32_EIC_DIS_INT6                                          6
#define AVR32_EIC_DIS_INT6_MASK                            0x00000040
#define AVR32_EIC_DIS_INT6_OFFSET                                   6
#define AVR32_EIC_DIS_INT6_SIZE                                     1
#define AVR32_EIC_DIS_INT7                                          7
#define AVR32_EIC_DIS_INT7_MASK                            0x00000080
#define AVR32_EIC_DIS_INT7_OFFSET                                   7
#define AVR32_EIC_DIS_INT7_SIZE                                     1
#define AVR32_EIC_DIS_INT8                                          8
#define AVR32_EIC_DIS_INT8_MASK                            0x00000100
#define AVR32_EIC_DIS_INT8_OFFSET                                   8
#define AVR32_EIC_DIS_INT8_SIZE                                     1
#define AVR32_EIC_DIS_INT9                                          9
#define AVR32_EIC_DIS_INT9_MASK                            0x00000200
#define AVR32_EIC_DIS_INT9_OFFSET                                   9
#define AVR32_EIC_DIS_INT9_SIZE                                     1
#define AVR32_EIC_DIS_MASK                                 0x0000ffff
#define AVR32_EIC_DIS_NMI                                           0
#define AVR32_EIC_DIS_NMI_MASK                             0x00000001
#define AVR32_EIC_DIS_NMI_OFFSET                                    0
#define AVR32_EIC_DIS_NMI_SIZE                                      1
#define AVR32_EIC_DIS_RESETVALUE                           0x00000000
#define AVR32_EIC_EDGE                                     0x00000018
#define AVR32_EIC_EDGE_INT1                                         1
#define AVR32_EIC_EDGE_INT10                                       10
#define AVR32_EIC_EDGE_INT10_MASK                          0x00000400
#define AVR32_EIC_EDGE_INT10_OFFSET                                10
#define AVR32_EIC_EDGE_INT10_SIZE                                   1
#define AVR32_EIC_EDGE_INT11                                       11
#define AVR32_EIC_EDGE_INT11_MASK                          0x00000800
#define AVR32_EIC_EDGE_INT11_OFFSET                                11
#define AVR32_EIC_EDGE_INT11_SIZE                                   1
#define AVR32_EIC_EDGE_INT12                                       12
#define AVR32_EIC_EDGE_INT12_MASK                          0x00001000
#define AVR32_EIC_EDGE_INT12_OFFSET                                12
#define AVR32_EIC_EDGE_INT12_SIZE                                   1
#define AVR32_EIC_EDGE_INT13                                       13
#define AVR32_EIC_EDGE_INT13_MASK                          0x00002000
#define AVR32_EIC_EDGE_INT13_OFFSET                                13
#define AVR32_EIC_EDGE_INT13_SIZE                                   1
#define AVR32_EIC_EDGE_INT14                                       14
#define AVR32_EIC_EDGE_INT14_MASK                          0x00004000
#define AVR32_EIC_EDGE_INT14_OFFSET                                14
#define AVR32_EIC_EDGE_INT14_SIZE                                   1
#define AVR32_EIC_EDGE_INT15                                       15
#define AVR32_EIC_EDGE_INT15_MASK                          0x00008000
#define AVR32_EIC_EDGE_INT15_OFFSET                                15
#define AVR32_EIC_EDGE_INT15_SIZE                                   1
#define AVR32_EIC_EDGE_INT1_MASK                           0x00000002
#define AVR32_EIC_EDGE_INT1_OFFSET                                  1
#define AVR32_EIC_EDGE_INT1_SIZE                                    1
#define AVR32_EIC_EDGE_INT2                                         2
#define AVR32_EIC_EDGE_INT2_MASK                           0x00000004
#define AVR32_EIC_EDGE_INT2_OFFSET                                  2
#define AVR32_EIC_EDGE_INT2_SIZE                                    1
#define AVR32_EIC_EDGE_INT3                                         3
#define AVR32_EIC_EDGE_INT3_MASK                           0x00000008
#define AVR32_EIC_EDGE_INT3_OFFSET                                  3
#define AVR32_EIC_EDGE_INT3_SIZE                                    1
#define AVR32_EIC_EDGE_INT4                                         4
#define AVR32_EIC_EDGE_INT4_MASK                           0x00000010
#define AVR32_EIC_EDGE_INT4_OFFSET                                  4
#define AVR32_EIC_EDGE_INT4_SIZE                                    1
#define AVR32_EIC_EDGE_INT5                                         5
#define AVR32_EIC_EDGE_INT5_MASK                           0x00000020
#define AVR32_EIC_EDGE_INT5_OFFSET                                  5
#define AVR32_EIC_EDGE_INT5_SIZE                                    1
#define AVR32_EIC_EDGE_INT6                                         6
#define AVR32_EIC_EDGE_INT6_MASK                           0x00000040
#define AVR32_EIC_EDGE_INT6_OFFSET                                  6
#define AVR32_EIC_EDGE_INT6_SIZE                                    1
#define AVR32_EIC_EDGE_INT7                                         7
#define AVR32_EIC_EDGE_INT7_MASK                           0x00000080
#define AVR32_EIC_EDGE_INT7_OFFSET                                  7
#define AVR32_EIC_EDGE_INT7_SIZE                                    1
#define AVR32_EIC_EDGE_INT8                                         8
#define AVR32_EIC_EDGE_INT8_MASK                           0x00000100
#define AVR32_EIC_EDGE_INT8_OFFSET                                  8
#define AVR32_EIC_EDGE_INT8_SIZE                                    1
#define AVR32_EIC_EDGE_INT9                                         9
#define AVR32_EIC_EDGE_INT9_MASK                           0x00000200
#define AVR32_EIC_EDGE_INT9_OFFSET                                  9
#define AVR32_EIC_EDGE_INT9_SIZE                                    1
#define AVR32_EIC_EDGE_MASK                                0x0000ffff
#define AVR32_EIC_EDGE_NMI                                          0
#define AVR32_EIC_EDGE_NMI_MASK                            0x00000001
#define AVR32_EIC_EDGE_NMI_OFFSET                                   0
#define AVR32_EIC_EDGE_NMI_SIZE                                     1
#define AVR32_EIC_EDGE_RESETVALUE                          0x00000000
#define AVR32_EIC_EN                                       0x00000030
#define AVR32_EIC_EN_INT1                                           1
#define AVR32_EIC_EN_INT10                                         10
#define AVR32_EIC_EN_INT10_MASK                            0x00000400
#define AVR32_EIC_EN_INT10_OFFSET                                  10
#define AVR32_EIC_EN_INT10_SIZE                                     1
#define AVR32_EIC_EN_INT11                                         11
#define AVR32_EIC_EN_INT11_MASK                            0x00000800
#define AVR32_EIC_EN_INT11_OFFSET                                  11
#define AVR32_EIC_EN_INT11_SIZE                                     1
#define AVR32_EIC_EN_INT12                                         12
#define AVR32_EIC_EN_INT12_MASK                            0x00001000
#define AVR32_EIC_EN_INT12_OFFSET                                  12
#define AVR32_EIC_EN_INT12_SIZE                                     1
#define AVR32_EIC_EN_INT13                                         13
#define AVR32_EIC_EN_INT13_MASK                            0x00002000
#define AVR32_EIC_EN_INT13_OFFSET                                  13
#define AVR32_EIC_EN_INT13_SIZE                                     1
#define AVR32_EIC_EN_INT14                                         14
#define AVR32_EIC_EN_INT14_MASK                            0x00004000
#define AVR32_EIC_EN_INT14_OFFSET                                  14
#define AVR32_EIC_EN_INT14_SIZE                                     1
#define AVR32_EIC_EN_INT15                                         15
#define AVR32_EIC_EN_INT15_MASK                            0x00008000
#define AVR32_EIC_EN_INT15_OFFSET                                  15
#define AVR32_EIC_EN_INT15_SIZE                                     1
#define AVR32_EIC_EN_INT1_MASK                             0x00000002
#define AVR32_EIC_EN_INT1_OFFSET                                    1
#define AVR32_EIC_EN_INT1_SIZE                                      1
#define AVR32_EIC_EN_INT2                                           2
#define AVR32_EIC_EN_INT2_MASK                             0x00000004
#define AVR32_EIC_EN_INT2_OFFSET                                    2
#define AVR32_EIC_EN_INT2_SIZE                                      1
#define AVR32_EIC_EN_INT3                                           3
#define AVR32_EIC_EN_INT3_MASK                             0x00000008
#define AVR32_EIC_EN_INT3_OFFSET                                    3
#define AVR32_EIC_EN_INT3_SIZE                                      1
#define AVR32_EIC_EN_INT4                                           4
#define AVR32_EIC_EN_INT4_MASK                             0x00000010
#define AVR32_EIC_EN_INT4_OFFSET                                    4
#define AVR32_EIC_EN_INT4_SIZE                                      1
#define AVR32_EIC_EN_INT5                                           5
#define AVR32_EIC_EN_INT5_MASK                             0x00000020
#define AVR32_EIC_EN_INT5_OFFSET                                    5
#define AVR32_EIC_EN_INT5_SIZE                                      1
#define AVR32_EIC_EN_INT6                                           6
#define AVR32_EIC_EN_INT6_MASK                             0x00000040
#define AVR32_EIC_EN_INT6_OFFSET                                    6
#define AVR32_EIC_EN_INT6_SIZE                                      1
#define AVR32_EIC_EN_INT7                                           7
#define AVR32_EIC_EN_INT7_MASK                             0x00000080
#define AVR32_EIC_EN_INT7_OFFSET                                    7
#define AVR32_EIC_EN_INT7_SIZE                                      1
#define AVR32_EIC_EN_INT8                                           8
#define AVR32_EIC_EN_INT8_MASK                             0x00000100
#define AVR32_EIC_EN_INT8_OFFSET                                    8
#define AVR32_EIC_EN_INT8_SIZE                                      1
#define AVR32_EIC_EN_INT9                                           9
#define AVR32_EIC_EN_INT9_MASK                             0x00000200
#define AVR32_EIC_EN_INT9_OFFSET                                    9
#define AVR32_EIC_EN_INT9_SIZE                                      1
#define AVR32_EIC_EN_MASK                                  0x0000ffff
#define AVR32_EIC_EN_NMI                                            0
#define AVR32_EIC_EN_NMI_MASK                              0x00000001
#define AVR32_EIC_EN_NMI_OFFSET                                     0
#define AVR32_EIC_EN_NMI_SIZE                                       1
#define AVR32_EIC_EN_RESETVALUE                            0x00000000
#define AVR32_EIC_FILTER                                   0x00000020
#define AVR32_EIC_FILTER_INT1                                       1
#define AVR32_EIC_FILTER_INT10                                     10
#define AVR32_EIC_FILTER_INT10_MASK                        0x00000400
#define AVR32_EIC_FILTER_INT10_OFFSET                              10
#define AVR32_EIC_FILTER_INT10_SIZE                                 1
#define AVR32_EIC_FILTER_INT11                                     11
#define AVR32_EIC_FILTER_INT11_MASK                        0x00000800
#define AVR32_EIC_FILTER_INT11_OFFSET                              11
#define AVR32_EIC_FILTER_INT11_SIZE                                 1
#define AVR32_EIC_FILTER_INT12                                     12
#define AVR32_EIC_FILTER_INT12_MASK                        0x00001000
#define AVR32_EIC_FILTER_INT12_OFFSET                              12
#define AVR32_EIC_FILTER_INT12_SIZE                                 1
#define AVR32_EIC_FILTER_INT13                                     13
#define AVR32_EIC_FILTER_INT13_MASK                        0x00002000
#define AVR32_EIC_FILTER_INT13_OFFSET                              13
#define AVR32_EIC_FILTER_INT13_SIZE                                 1
#define AVR32_EIC_FILTER_INT14                                     14
#define AVR32_EIC_FILTER_INT14_MASK                        0x00004000
#define AVR32_EIC_FILTER_INT14_OFFSET                              14
#define AVR32_EIC_FILTER_INT14_SIZE                                 1
#define AVR32_EIC_FILTER_INT15                                     15
#define AVR32_EIC_FILTER_INT15_MASK                        0x00008000
#define AVR32_EIC_FILTER_INT15_OFFSET                              15
#define AVR32_EIC_FILTER_INT15_SIZE                                 1
#define AVR32_EIC_FILTER_INT1_MASK                         0x00000002
#define AVR32_EIC_FILTER_INT1_OFFSET                                1
#define AVR32_EIC_FILTER_INT1_SIZE                                  1
#define AVR32_EIC_FILTER_INT2                                       2
#define AVR32_EIC_FILTER_INT2_MASK                         0x00000004
#define AVR32_EIC_FILTER_INT2_OFFSET                                2
#define AVR32_EIC_FILTER_INT2_SIZE                                  1
#define AVR32_EIC_FILTER_INT3                                       3
#define AVR32_EIC_FILTER_INT3_MASK                         0x00000008
#define AVR32_EIC_FILTER_INT3_OFFSET                                3
#define AVR32_EIC_FILTER_INT3_SIZE                                  1
#define AVR32_EIC_FILTER_INT4                                       4
#define AVR32_EIC_FILTER_INT4_MASK                         0x00000010
#define AVR32_EIC_FILTER_INT4_OFFSET                                4
#define AVR32_EIC_FILTER_INT4_SIZE                                  1
#define AVR32_EIC_FILTER_INT5                                       5
#define AVR32_EIC_FILTER_INT5_MASK                         0x00000020
#define AVR32_EIC_FILTER_INT5_OFFSET                                5
#define AVR32_EIC_FILTER_INT5_SIZE                                  1
#define AVR32_EIC_FILTER_INT6                                       6
#define AVR32_EIC_FILTER_INT6_MASK                         0x00000040
#define AVR32_EIC_FILTER_INT6_OFFSET                                6
#define AVR32_EIC_FILTER_INT6_SIZE                                  1
#define AVR32_EIC_FILTER_INT7                                       7
#define AVR32_EIC_FILTER_INT7_MASK                         0x00000080
#define AVR32_EIC_FILTER_INT7_OFFSET                                7
#define AVR32_EIC_FILTER_INT7_SIZE                                  1
#define AVR32_EIC_FILTER_INT8                                       8
#define AVR32_EIC_FILTER_INT8_MASK                         0x00000100
#define AVR32_EIC_FILTER_INT8_OFFSET                                8
#define AVR32_EIC_FILTER_INT8_SIZE                                  1
#define AVR32_EIC_FILTER_INT9                                       9
#define AVR32_EIC_FILTER_INT9_MASK                         0x00000200
#define AVR32_EIC_FILTER_INT9_OFFSET                                9
#define AVR32_EIC_FILTER_INT9_SIZE                                  1
#define AVR32_EIC_FILTER_MASK                              0x0000ffff
#define AVR32_EIC_FILTER_NMI                                        0
#define AVR32_EIC_FILTER_NMI_MASK                          0x00000001
#define AVR32_EIC_FILTER_NMI_OFFSET                                 0
#define AVR32_EIC_FILTER_NMI_SIZE                                   1
#define AVR32_EIC_FILTER_RESETVALUE                        0x00000000
#define AVR32_EIC_ICR                                      0x00000010
#define AVR32_EIC_ICR_INT1                                          1
#define AVR32_EIC_ICR_INT10                                        10
#define AVR32_EIC_ICR_INT10_MASK                           0x00000400
#define AVR32_EIC_ICR_INT10_OFFSET                                 10
#define AVR32_EIC_ICR_INT10_SIZE                                    1
#define AVR32_EIC_ICR_INT11                                        11
#define AVR32_EIC_ICR_INT11_MASK                           0x00000800
#define AVR32_EIC_ICR_INT11_OFFSET                                 11
#define AVR32_EIC_ICR_INT11_SIZE                                    1
#define AVR32_EIC_ICR_INT12                                        12
#define AVR32_EIC_ICR_INT12_MASK                           0x00001000
#define AVR32_EIC_ICR_INT12_OFFSET                                 12
#define AVR32_EIC_ICR_INT12_SIZE                                    1
#define AVR32_EIC_ICR_INT13                                        13
#define AVR32_EIC_ICR_INT13_MASK                           0x00002000
#define AVR32_EIC_ICR_INT13_OFFSET                                 13
#define AVR32_EIC_ICR_INT13_SIZE                                    1
#define AVR32_EIC_ICR_INT14                                        14
#define AVR32_EIC_ICR_INT14_MASK                           0x00004000
#define AVR32_EIC_ICR_INT14_OFFSET                                 14
#define AVR32_EIC_ICR_INT14_SIZE                                    1
#define AVR32_EIC_ICR_INT15                                        15
#define AVR32_EIC_ICR_INT15_MASK                           0x00008000
#define AVR32_EIC_ICR_INT15_OFFSET                                 15
#define AVR32_EIC_ICR_INT15_SIZE                                    1
#define AVR32_EIC_ICR_INT1_MASK                            0x00000002
#define AVR32_EIC_ICR_INT1_OFFSET                                   1
#define AVR32_EIC_ICR_INT1_SIZE                                     1
#define AVR32_EIC_ICR_INT2                                          2
#define AVR32_EIC_ICR_INT2_MASK                            0x00000004
#define AVR32_EIC_ICR_INT2_OFFSET                                   2
#define AVR32_EIC_ICR_INT2_SIZE                                     1
#define AVR32_EIC_ICR_INT3                                          3
#define AVR32_EIC_ICR_INT3_MASK                            0x00000008
#define AVR32_EIC_ICR_INT3_OFFSET                                   3
#define AVR32_EIC_ICR_INT3_SIZE                                     1
#define AVR32_EIC_ICR_INT4                                          4
#define AVR32_EIC_ICR_INT4_MASK                            0x00000010
#define AVR32_EIC_ICR_INT4_OFFSET                                   4
#define AVR32_EIC_ICR_INT4_SIZE                                     1
#define AVR32_EIC_ICR_INT5                                          5
#define AVR32_EIC_ICR_INT5_MASK                            0x00000020
#define AVR32_EIC_ICR_INT5_OFFSET                                   5
#define AVR32_EIC_ICR_INT5_SIZE                                     1
#define AVR32_EIC_ICR_INT6                                          6
#define AVR32_EIC_ICR_INT6_MASK                            0x00000040
#define AVR32_EIC_ICR_INT6_OFFSET                                   6
#define AVR32_EIC_ICR_INT6_SIZE                                     1
#define AVR32_EIC_ICR_INT7                                          7
#define AVR32_EIC_ICR_INT7_MASK                            0x00000080
#define AVR32_EIC_ICR_INT7_OFFSET                                   7
#define AVR32_EIC_ICR_INT7_SIZE                                     1
#define AVR32_EIC_ICR_INT8                                          8
#define AVR32_EIC_ICR_INT8_MASK                            0x00000100
#define AVR32_EIC_ICR_INT8_OFFSET                                   8
#define AVR32_EIC_ICR_INT8_SIZE                                     1
#define AVR32_EIC_ICR_INT9                                          9
#define AVR32_EIC_ICR_INT9_MASK                            0x00000200
#define AVR32_EIC_ICR_INT9_OFFSET                                   9
#define AVR32_EIC_ICR_INT9_SIZE                                     1
#define AVR32_EIC_ICR_MASK                                 0x0000ffff
#define AVR32_EIC_ICR_NMI                                           0
#define AVR32_EIC_ICR_NMI_MASK                             0x00000001
#define AVR32_EIC_ICR_NMI_OFFSET                                    0
#define AVR32_EIC_ICR_NMI_SIZE                                      1
#define AVR32_EIC_ICR_RESETVALUE                           0x00000000
#define AVR32_EIC_IDR                                      0x00000004
#define AVR32_EIC_IDR_INT1                                          1
#define AVR32_EIC_IDR_INT10                                        10
#define AVR32_EIC_IDR_INT10_MASK                           0x00000400
#define AVR32_EIC_IDR_INT10_OFFSET                                 10
#define AVR32_EIC_IDR_INT10_SIZE                                    1
#define AVR32_EIC_IDR_INT11                                        11
#define AVR32_EIC_IDR_INT11_MASK                           0x00000800
#define AVR32_EIC_IDR_INT11_OFFSET                                 11
#define AVR32_EIC_IDR_INT11_SIZE                                    1
#define AVR32_EIC_IDR_INT12                                        12
#define AVR32_EIC_IDR_INT12_MASK                           0x00001000
#define AVR32_EIC_IDR_INT12_OFFSET                                 12
#define AVR32_EIC_IDR_INT12_SIZE                                    1
#define AVR32_EIC_IDR_INT13                                        13
#define AVR32_EIC_IDR_INT13_MASK                           0x00002000
#define AVR32_EIC_IDR_INT13_OFFSET                                 13
#define AVR32_EIC_IDR_INT13_SIZE                                    1
#define AVR32_EIC_IDR_INT14                                        14
#define AVR32_EIC_IDR_INT14_MASK                           0x00004000
#define AVR32_EIC_IDR_INT14_OFFSET                                 14
#define AVR32_EIC_IDR_INT14_SIZE                                    1
#define AVR32_EIC_IDR_INT15                                        15
#define AVR32_EIC_IDR_INT15_MASK                           0x00008000
#define AVR32_EIC_IDR_INT15_OFFSET                                 15
#define AVR32_EIC_IDR_INT15_SIZE                                    1
#define AVR32_EIC_IDR_INT1_MASK                            0x00000002
#define AVR32_EIC_IDR_INT1_OFFSET                                   1
#define AVR32_EIC_IDR_INT1_SIZE                                     1
#define AVR32_EIC_IDR_INT2                                          2
#define AVR32_EIC_IDR_INT2_MASK                            0x00000004
#define AVR32_EIC_IDR_INT2_OFFSET                                   2
#define AVR32_EIC_IDR_INT2_SIZE                                     1
#define AVR32_EIC_IDR_INT3                                          3
#define AVR32_EIC_IDR_INT3_MASK                            0x00000008
#define AVR32_EIC_IDR_INT3_OFFSET                                   3
#define AVR32_EIC_IDR_INT3_SIZE                                     1
#define AVR32_EIC_IDR_INT4                                          4
#define AVR32_EIC_IDR_INT4_MASK                            0x00000010
#define AVR32_EIC_IDR_INT4_OFFSET                                   4
#define AVR32_EIC_IDR_INT4_SIZE                                     1
#define AVR32_EIC_IDR_INT5                                          5
#define AVR32_EIC_IDR_INT5_MASK                            0x00000020
#define AVR32_EIC_IDR_INT5_OFFSET                                   5
#define AVR32_EIC_IDR_INT5_SIZE                                     1
#define AVR32_EIC_IDR_INT6                                          6
#define AVR32_EIC_IDR_INT6_MASK                            0x00000040
#define AVR32_EIC_IDR_INT6_OFFSET                                   6
#define AVR32_EIC_IDR_INT6_SIZE                                     1
#define AVR32_EIC_IDR_INT7                                          7
#define AVR32_EIC_IDR_INT7_MASK                            0x00000080
#define AVR32_EIC_IDR_INT7_OFFSET                                   7
#define AVR32_EIC_IDR_INT7_SIZE                                     1
#define AVR32_EIC_IDR_INT8                                          8
#define AVR32_EIC_IDR_INT8_MASK                            0x00000100
#define AVR32_EIC_IDR_INT8_OFFSET                                   8
#define AVR32_EIC_IDR_INT8_SIZE                                     1
#define AVR32_EIC_IDR_INT9                                          9
#define AVR32_EIC_IDR_INT9_MASK                            0x00000200
#define AVR32_EIC_IDR_INT9_OFFSET                                   9
#define AVR32_EIC_IDR_INT9_SIZE                                     1
#define AVR32_EIC_IDR_MASK                                 0x0000ffff
#define AVR32_EIC_IDR_NMI                                           0
#define AVR32_EIC_IDR_NMI_MASK                             0x00000001
#define AVR32_EIC_IDR_NMI_OFFSET                                    0
#define AVR32_EIC_IDR_NMI_SIZE                                      1
#define AVR32_EIC_IDR_RESETVALUE                           0x00000000
#define AVR32_EIC_IER                                      0x00000000
#define AVR32_EIC_IER_INT1                                          1
#define AVR32_EIC_IER_INT10                                        10
#define AVR32_EIC_IER_INT10_MASK                           0x00000400
#define AVR32_EIC_IER_INT10_OFFSET                                 10
#define AVR32_EIC_IER_INT10_SIZE                                    1
#define AVR32_EIC_IER_INT11                                        11
#define AVR32_EIC_IER_INT11_MASK                           0x00000800
#define AVR32_EIC_IER_INT11_OFFSET                                 11
#define AVR32_EIC_IER_INT11_SIZE                                    1
#define AVR32_EIC_IER_INT12                                        12
#define AVR32_EIC_IER_INT12_MASK                           0x00001000
#define AVR32_EIC_IER_INT12_OFFSET                                 12
#define AVR32_EIC_IER_INT12_SIZE                                    1
#define AVR32_EIC_IER_INT13                                        13
#define AVR32_EIC_IER_INT13_MASK                           0x00002000
#define AVR32_EIC_IER_INT13_OFFSET                                 13
#define AVR32_EIC_IER_INT13_SIZE                                    1
#define AVR32_EIC_IER_INT14                                        14
#define AVR32_EIC_IER_INT14_MASK                           0x00004000
#define AVR32_EIC_IER_INT14_OFFSET                                 14
#define AVR32_EIC_IER_INT14_SIZE                                    1
#define AVR32_EIC_IER_INT15                                        15
#define AVR32_EIC_IER_INT15_MASK                           0x00008000
#define AVR32_EIC_IER_INT15_OFFSET                                 15
#define AVR32_EIC_IER_INT15_SIZE                                    1
#define AVR32_EIC_IER_INT1_MASK                            0x00000002
#define AVR32_EIC_IER_INT1_OFFSET                                   1
#define AVR32_EIC_IER_INT1_SIZE                                     1
#define AVR32_EIC_IER_INT2                                          2
#define AVR32_EIC_IER_INT2_MASK                            0x00000004
#define AVR32_EIC_IER_INT2_OFFSET                                   2
#define AVR32_EIC_IER_INT2_SIZE                                     1
#define AVR32_EIC_IER_INT3                                          3
#define AVR32_EIC_IER_INT3_MASK                            0x00000008
#define AVR32_EIC_IER_INT3_OFFSET                                   3
#define AVR32_EIC_IER_INT3_SIZE                                     1
#define AVR32_EIC_IER_INT4                                          4
#define AVR32_EIC_IER_INT4_MASK                            0x00000010
#define AVR32_EIC_IER_INT4_OFFSET                                   4
#define AVR32_EIC_IER_INT4_SIZE                                     1
#define AVR32_EIC_IER_INT5                                          5
#define AVR32_EIC_IER_INT5_MASK                            0x00000020
#define AVR32_EIC_IER_INT5_OFFSET                                   5
#define AVR32_EIC_IER_INT5_SIZE                                     1
#define AVR32_EIC_IER_INT6                                          6
#define AVR32_EIC_IER_INT6_MASK                            0x00000040
#define AVR32_EIC_IER_INT6_OFFSET                                   6
#define AVR32_EIC_IER_INT6_SIZE                                     1
#define AVR32_EIC_IER_INT7                                          7
#define AVR32_EIC_IER_INT7_MASK                            0x00000080
#define AVR32_EIC_IER_INT7_OFFSET                                   7
#define AVR32_EIC_IER_INT7_SIZE                                     1
#define AVR32_EIC_IER_INT8                                          8
#define AVR32_EIC_IER_INT8_MASK                            0x00000100
#define AVR32_EIC_IER_INT8_OFFSET                                   8
#define AVR32_EIC_IER_INT8_SIZE                                     1
#define AVR32_EIC_IER_INT9                                          9
#define AVR32_EIC_IER_INT9_MASK                            0x00000200
#define AVR32_EIC_IER_INT9_OFFSET                                   9
#define AVR32_EIC_IER_INT9_SIZE                                     1
#define AVR32_EIC_IER_MASK                                 0x0000ffff
#define AVR32_EIC_IER_NMI                                           0
#define AVR32_EIC_IER_NMI_MASK                             0x00000001
#define AVR32_EIC_IER_NMI_OFFSET                                    0
#define AVR32_EIC_IER_NMI_SIZE                                      1
#define AVR32_EIC_IER_RESETVALUE                           0x00000000
#define AVR32_EIC_IMR                                      0x00000008
#define AVR32_EIC_IMR_INT1                                          1
#define AVR32_EIC_IMR_INT10                                        10
#define AVR32_EIC_IMR_INT10_MASK                           0x00000400
#define AVR32_EIC_IMR_INT10_OFFSET                                 10
#define AVR32_EIC_IMR_INT10_SIZE                                    1
#define AVR32_EIC_IMR_INT11                                        11
#define AVR32_EIC_IMR_INT11_MASK                           0x00000800
#define AVR32_EIC_IMR_INT11_OFFSET                                 11
#define AVR32_EIC_IMR_INT11_SIZE                                    1
#define AVR32_EIC_IMR_INT12                                        12
#define AVR32_EIC_IMR_INT12_MASK                           0x00001000
#define AVR32_EIC_IMR_INT12_OFFSET                                 12
#define AVR32_EIC_IMR_INT12_SIZE                                    1
#define AVR32_EIC_IMR_INT13                                        13
#define AVR32_EIC_IMR_INT13_MASK                           0x00002000
#define AVR32_EIC_IMR_INT13_OFFSET                                 13
#define AVR32_EIC_IMR_INT13_SIZE                                    1
#define AVR32_EIC_IMR_INT14                                        14
#define AVR32_EIC_IMR_INT14_MASK                           0x00004000
#define AVR32_EIC_IMR_INT14_OFFSET                                 14
#define AVR32_EIC_IMR_INT14_SIZE                                    1
#define AVR32_EIC_IMR_INT15                                        15
#define AVR32_EIC_IMR_INT15_MASK                           0x00008000
#define AVR32_EIC_IMR_INT15_OFFSET                                 15
#define AVR32_EIC_IMR_INT15_SIZE                                    1
#define AVR32_EIC_IMR_INT1_MASK                            0x00000002
#define AVR32_EIC_IMR_INT1_OFFSET                                   1
#define AVR32_EIC_IMR_INT1_SIZE                                     1
#define AVR32_EIC_IMR_INT2                                          2
#define AVR32_EIC_IMR_INT2_MASK                            0x00000004
#define AVR32_EIC_IMR_INT2_OFFSET                                   2
#define AVR32_EIC_IMR_INT2_SIZE                                     1
#define AVR32_EIC_IMR_INT3                                          3
#define AVR32_EIC_IMR_INT3_MASK                            0x00000008
#define AVR32_EIC_IMR_INT3_OFFSET                                   3
#define AVR32_EIC_IMR_INT3_SIZE                                     1
#define AVR32_EIC_IMR_INT4                                          4
#define AVR32_EIC_IMR_INT4_MASK                            0x00000010
#define AVR32_EIC_IMR_INT4_OFFSET                                   4
#define AVR32_EIC_IMR_INT4_SIZE                                     1
#define AVR32_EIC_IMR_INT5                                          5
#define AVR32_EIC_IMR_INT5_MASK                            0x00000020
#define AVR32_EIC_IMR_INT5_OFFSET                                   5
#define AVR32_EIC_IMR_INT5_SIZE                                     1
#define AVR32_EIC_IMR_INT6                                          6
#define AVR32_EIC_IMR_INT6_MASK                            0x00000040
#define AVR32_EIC_IMR_INT6_OFFSET                                   6
#define AVR32_EIC_IMR_INT6_SIZE                                     1
#define AVR32_EIC_IMR_INT7                                          7
#define AVR32_EIC_IMR_INT7_MASK                            0x00000080
#define AVR32_EIC_IMR_INT7_OFFSET                                   7
#define AVR32_EIC_IMR_INT7_SIZE                                     1
#define AVR32_EIC_IMR_INT8                                          8
#define AVR32_EIC_IMR_INT8_MASK                            0x00000100
#define AVR32_EIC_IMR_INT8_OFFSET                                   8
#define AVR32_EIC_IMR_INT8_SIZE                                     1
#define AVR32_EIC_IMR_INT9                                          9
#define AVR32_EIC_IMR_INT9_MASK                            0x00000200
#define AVR32_EIC_IMR_INT9_OFFSET                                   9
#define AVR32_EIC_IMR_INT9_SIZE                                     1
#define AVR32_EIC_IMR_MASK                                 0x0000ffff
#define AVR32_EIC_IMR_NMI                                           0
#define AVR32_EIC_IMR_NMI_MASK                             0x00000001
#define AVR32_EIC_IMR_NMI_OFFSET                                    0
#define AVR32_EIC_IMR_NMI_SIZE                                      1
#define AVR32_EIC_IMR_RESETVALUE                           0x00000000
#define AVR32_EIC_INT1                                              1
#define AVR32_EIC_INT10                                            10
#define AVR32_EIC_INT10_MASK                               0x00000400
#define AVR32_EIC_INT10_OFFSET                                     10
#define AVR32_EIC_INT10_SIZE                                        1
#define AVR32_EIC_INT11                                            11
#define AVR32_EIC_INT11_MASK                               0x00000800
#define AVR32_EIC_INT11_OFFSET                                     11
#define AVR32_EIC_INT11_SIZE                                        1
#define AVR32_EIC_INT12                                            12
#define AVR32_EIC_INT12_MASK                               0x00001000
#define AVR32_EIC_INT12_OFFSET                                     12
#define AVR32_EIC_INT12_SIZE                                        1
#define AVR32_EIC_INT13                                            13
#define AVR32_EIC_INT13_MASK                               0x00002000
#define AVR32_EIC_INT13_OFFSET                                     13
#define AVR32_EIC_INT13_SIZE                                        1
#define AVR32_EIC_INT14                                            14
#define AVR32_EIC_INT14_MASK                               0x00004000
#define AVR32_EIC_INT14_OFFSET                                     14
#define AVR32_EIC_INT14_SIZE                                        1
#define AVR32_EIC_INT15                                            15
#define AVR32_EIC_INT15_MASK                               0x00008000
#define AVR32_EIC_INT15_OFFSET                                     15
#define AVR32_EIC_INT15_SIZE                                        1
#define AVR32_EIC_INT1_MASK                                0x00000002
#define AVR32_EIC_INT1_OFFSET                                       1
#define AVR32_EIC_INT1_SIZE                                         1
#define AVR32_EIC_INT2                                              2
#define AVR32_EIC_INT2_MASK                                0x00000004
#define AVR32_EIC_INT2_OFFSET                                       2
#define AVR32_EIC_INT2_SIZE                                         1
#define AVR32_EIC_INT3                                              3
#define AVR32_EIC_INT3_MASK                                0x00000008
#define AVR32_EIC_INT3_OFFSET                                       3
#define AVR32_EIC_INT3_SIZE                                         1
#define AVR32_EIC_INT4                                              4
#define AVR32_EIC_INT4_MASK                                0x00000010
#define AVR32_EIC_INT4_OFFSET                                       4
#define AVR32_EIC_INT4_SIZE                                         1
#define AVR32_EIC_INT5                                              5
#define AVR32_EIC_INT5_MASK                                0x00000020
#define AVR32_EIC_INT5_OFFSET                                       5
#define AVR32_EIC_INT5_SIZE                                         1
#define AVR32_EIC_INT6                                              6
#define AVR32_EIC_INT6_MASK                                0x00000040
#define AVR32_EIC_INT6_OFFSET                                       6
#define AVR32_EIC_INT6_SIZE                                         1
#define AVR32_EIC_INT7                                              7
#define AVR32_EIC_INT7_MASK                                0x00000080
#define AVR32_EIC_INT7_OFFSET                                       7
#define AVR32_EIC_INT7_SIZE                                         1
#define AVR32_EIC_INT8                                              8
#define AVR32_EIC_INT8_MASK                                0x00000100
#define AVR32_EIC_INT8_OFFSET                                       8
#define AVR32_EIC_INT8_SIZE                                         1
#define AVR32_EIC_INT9                                              9
#define AVR32_EIC_INT9_MASK                                0x00000200
#define AVR32_EIC_INT9_OFFSET                                       9
#define AVR32_EIC_INT9_SIZE                                         1
#define AVR32_EIC_ISR                                      0x0000000c
#define AVR32_EIC_ISR_INT1                                          1
#define AVR32_EIC_ISR_INT10                                        10
#define AVR32_EIC_ISR_INT10_MASK                           0x00000400
#define AVR32_EIC_ISR_INT10_OFFSET                                 10
#define AVR32_EIC_ISR_INT10_SIZE                                    1
#define AVR32_EIC_ISR_INT11                                        11
#define AVR32_EIC_ISR_INT11_MASK                           0x00000800
#define AVR32_EIC_ISR_INT11_OFFSET                                 11
#define AVR32_EIC_ISR_INT11_SIZE                                    1
#define AVR32_EIC_ISR_INT12                                        12
#define AVR32_EIC_ISR_INT12_MASK                           0x00001000
#define AVR32_EIC_ISR_INT12_OFFSET                                 12
#define AVR32_EIC_ISR_INT12_SIZE                                    1
#define AVR32_EIC_ISR_INT13                                        13
#define AVR32_EIC_ISR_INT13_MASK                           0x00002000
#define AVR32_EIC_ISR_INT13_OFFSET                                 13
#define AVR32_EIC_ISR_INT13_SIZE                                    1
#define AVR32_EIC_ISR_INT14                                        14
#define AVR32_EIC_ISR_INT14_MASK                           0x00004000
#define AVR32_EIC_ISR_INT14_OFFSET                                 14
#define AVR32_EIC_ISR_INT14_SIZE                                    1
#define AVR32_EIC_ISR_INT15                                        15
#define AVR32_EIC_ISR_INT15_MASK                           0x00008000
#define AVR32_EIC_ISR_INT15_OFFSET                                 15
#define AVR32_EIC_ISR_INT15_SIZE                                    1
#define AVR32_EIC_ISR_INT1_MASK                            0x00000002
#define AVR32_EIC_ISR_INT1_OFFSET                                   1
#define AVR32_EIC_ISR_INT1_SIZE                                     1
#define AVR32_EIC_ISR_INT2                                          2
#define AVR32_EIC_ISR_INT2_MASK                            0x00000004
#define AVR32_EIC_ISR_INT2_OFFSET                                   2
#define AVR32_EIC_ISR_INT2_SIZE                                     1
#define AVR32_EIC_ISR_INT3                                          3
#define AVR32_EIC_ISR_INT3_MASK                            0x00000008
#define AVR32_EIC_ISR_INT3_OFFSET                                   3
#define AVR32_EIC_ISR_INT3_SIZE                                     1
#define AVR32_EIC_ISR_INT4                                          4
#define AVR32_EIC_ISR_INT4_MASK                            0x00000010
#define AVR32_EIC_ISR_INT4_OFFSET                                   4
#define AVR32_EIC_ISR_INT4_SIZE                                     1
#define AVR32_EIC_ISR_INT5                                          5
#define AVR32_EIC_ISR_INT5_MASK                            0x00000020
#define AVR32_EIC_ISR_INT5_OFFSET                                   5
#define AVR32_EIC_ISR_INT5_SIZE                                     1
#define AVR32_EIC_ISR_INT6                                          6
#define AVR32_EIC_ISR_INT6_MASK                            0x00000040
#define AVR32_EIC_ISR_INT6_OFFSET                                   6
#define AVR32_EIC_ISR_INT6_SIZE                                     1
#define AVR32_EIC_ISR_INT7                                          7
#define AVR32_EIC_ISR_INT7_MASK                            0x00000080
#define AVR32_EIC_ISR_INT7_OFFSET                                   7
#define AVR32_EIC_ISR_INT7_SIZE                                     1
#define AVR32_EIC_ISR_INT8                                          8
#define AVR32_EIC_ISR_INT8_MASK                            0x00000100
#define AVR32_EIC_ISR_INT8_OFFSET                                   8
#define AVR32_EIC_ISR_INT8_SIZE                                     1
#define AVR32_EIC_ISR_INT9                                          9
#define AVR32_EIC_ISR_INT9_MASK                            0x00000200
#define AVR32_EIC_ISR_INT9_OFFSET                                   9
#define AVR32_EIC_ISR_INT9_SIZE                                     1
#define AVR32_EIC_ISR_MASK                                 0x0000ffff
#define AVR32_EIC_ISR_NMI                                           0
#define AVR32_EIC_ISR_NMI_MASK                             0x00000001
#define AVR32_EIC_ISR_NMI_OFFSET                                    0
#define AVR32_EIC_ISR_NMI_SIZE                                      1
#define AVR32_EIC_ISR_RESETVALUE                           0x00000000
#define AVR32_EIC_LEVEL                                    0x0000001c
#define AVR32_EIC_LEVEL_INT1                                        1
#define AVR32_EIC_LEVEL_INT10                                      10
#define AVR32_EIC_LEVEL_INT10_MASK                         0x00000400
#define AVR32_EIC_LEVEL_INT10_OFFSET                               10
#define AVR32_EIC_LEVEL_INT10_SIZE                                  1
#define AVR32_EIC_LEVEL_INT11                                      11
#define AVR32_EIC_LEVEL_INT11_MASK                         0x00000800
#define AVR32_EIC_LEVEL_INT11_OFFSET                               11
#define AVR32_EIC_LEVEL_INT11_SIZE                                  1
#define AVR32_EIC_LEVEL_INT12                                      12
#define AVR32_EIC_LEVEL_INT12_MASK                         0x00001000
#define AVR32_EIC_LEVEL_INT12_OFFSET                               12
#define AVR32_EIC_LEVEL_INT12_SIZE                                  1
#define AVR32_EIC_LEVEL_INT13                                      13
#define AVR32_EIC_LEVEL_INT13_MASK                         0x00002000
#define AVR32_EIC_LEVEL_INT13_OFFSET                               13
#define AVR32_EIC_LEVEL_INT13_SIZE                                  1
#define AVR32_EIC_LEVEL_INT14                                      14
#define AVR32_EIC_LEVEL_INT14_MASK                         0x00004000
#define AVR32_EIC_LEVEL_INT14_OFFSET                               14
#define AVR32_EIC_LEVEL_INT14_SIZE                                  1
#define AVR32_EIC_LEVEL_INT15                                      15
#define AVR32_EIC_LEVEL_INT15_MASK                         0x00008000
#define AVR32_EIC_LEVEL_INT15_OFFSET                               15
#define AVR32_EIC_LEVEL_INT15_SIZE                                  1
#define AVR32_EIC_LEVEL_INT1_MASK                          0x00000002
#define AVR32_EIC_LEVEL_INT1_OFFSET                                 1
#define AVR32_EIC_LEVEL_INT1_SIZE                                   1
#define AVR32_EIC_LEVEL_INT2                                        2
#define AVR32_EIC_LEVEL_INT2_MASK                          0x00000004
#define AVR32_EIC_LEVEL_INT2_OFFSET                                 2
#define AVR32_EIC_LEVEL_INT2_SIZE                                   1
#define AVR32_EIC_LEVEL_INT3                                        3
#define AVR32_EIC_LEVEL_INT3_MASK                          0x00000008
#define AVR32_EIC_LEVEL_INT3_OFFSET                                 3
#define AVR32_EIC_LEVEL_INT3_SIZE                                   1
#define AVR32_EIC_LEVEL_INT4                                        4
#define AVR32_EIC_LEVEL_INT4_MASK                          0x00000010
#define AVR32_EIC_LEVEL_INT4_OFFSET                                 4
#define AVR32_EIC_LEVEL_INT4_SIZE                                   1
#define AVR32_EIC_LEVEL_INT5                                        5
#define AVR32_EIC_LEVEL_INT5_MASK                          0x00000020
#define AVR32_EIC_LEVEL_INT5_OFFSET                                 5
#define AVR32_EIC_LEVEL_INT5_SIZE                                   1
#define AVR32_EIC_LEVEL_INT6                                        6
#define AVR32_EIC_LEVEL_INT6_MASK                          0x00000040
#define AVR32_EIC_LEVEL_INT6_OFFSET                                 6
#define AVR32_EIC_LEVEL_INT6_SIZE                                   1
#define AVR32_EIC_LEVEL_INT7                                        7
#define AVR32_EIC_LEVEL_INT7_MASK                          0x00000080
#define AVR32_EIC_LEVEL_INT7_OFFSET                                 7
#define AVR32_EIC_LEVEL_INT7_SIZE                                   1
#define AVR32_EIC_LEVEL_INT8                                        8
#define AVR32_EIC_LEVEL_INT8_MASK                          0x00000100
#define AVR32_EIC_LEVEL_INT8_OFFSET                                 8
#define AVR32_EIC_LEVEL_INT8_SIZE                                   1
#define AVR32_EIC_LEVEL_INT9                                        9
#define AVR32_EIC_LEVEL_INT9_MASK                          0x00000200
#define AVR32_EIC_LEVEL_INT9_OFFSET                                 9
#define AVR32_EIC_LEVEL_INT9_SIZE                                   1
#define AVR32_EIC_LEVEL_MASK                               0x0000ffff
#define AVR32_EIC_LEVEL_NMI                                         0
#define AVR32_EIC_LEVEL_NMI_MASK                           0x00000001
#define AVR32_EIC_LEVEL_NMI_OFFSET                                  0
#define AVR32_EIC_LEVEL_NMI_SIZE                                    1
#define AVR32_EIC_LEVEL_RESETVALUE                         0x00000000
#define AVR32_EIC_MODE                                     0x00000014
#define AVR32_EIC_MODE_INT1                                         1
#define AVR32_EIC_MODE_INT10                                       10
#define AVR32_EIC_MODE_INT10_MASK                          0x00000400
#define AVR32_EIC_MODE_INT10_OFFSET                                10
#define AVR32_EIC_MODE_INT10_SIZE                                   1
#define AVR32_EIC_MODE_INT11                                       11
#define AVR32_EIC_MODE_INT11_MASK                          0x00000800
#define AVR32_EIC_MODE_INT11_OFFSET                                11
#define AVR32_EIC_MODE_INT11_SIZE                                   1
#define AVR32_EIC_MODE_INT12                                       12
#define AVR32_EIC_MODE_INT12_MASK                          0x00001000
#define AVR32_EIC_MODE_INT12_OFFSET                                12
#define AVR32_EIC_MODE_INT12_SIZE                                   1
#define AVR32_EIC_MODE_INT13                                       13
#define AVR32_EIC_MODE_INT13_MASK                          0x00002000
#define AVR32_EIC_MODE_INT13_OFFSET                                13
#define AVR32_EIC_MODE_INT13_SIZE                                   1
#define AVR32_EIC_MODE_INT14                                       14
#define AVR32_EIC_MODE_INT14_MASK                          0x00004000
#define AVR32_EIC_MODE_INT14_OFFSET                                14
#define AVR32_EIC_MODE_INT14_SIZE                                   1
#define AVR32_EIC_MODE_INT15                                       15
#define AVR32_EIC_MODE_INT15_MASK                          0x00008000
#define AVR32_EIC_MODE_INT15_OFFSET                                15
#define AVR32_EIC_MODE_INT15_SIZE                                   1
#define AVR32_EIC_MODE_INT1_MASK                           0x00000002
#define AVR32_EIC_MODE_INT1_OFFSET                                  1
#define AVR32_EIC_MODE_INT1_SIZE                                    1
#define AVR32_EIC_MODE_INT2                                         2
#define AVR32_EIC_MODE_INT2_MASK                           0x00000004
#define AVR32_EIC_MODE_INT2_OFFSET                                  2
#define AVR32_EIC_MODE_INT2_SIZE                                    1
#define AVR32_EIC_MODE_INT3                                         3
#define AVR32_EIC_MODE_INT3_MASK                           0x00000008
#define AVR32_EIC_MODE_INT3_OFFSET                                  3
#define AVR32_EIC_MODE_INT3_SIZE                                    1
#define AVR32_EIC_MODE_INT4                                         4
#define AVR32_EIC_MODE_INT4_MASK                           0x00000010
#define AVR32_EIC_MODE_INT4_OFFSET                                  4
#define AVR32_EIC_MODE_INT4_SIZE                                    1
#define AVR32_EIC_MODE_INT5                                         5
#define AVR32_EIC_MODE_INT5_MASK                           0x00000020
#define AVR32_EIC_MODE_INT5_OFFSET                                  5
#define AVR32_EIC_MODE_INT5_SIZE                                    1
#define AVR32_EIC_MODE_INT6                                         6
#define AVR32_EIC_MODE_INT6_MASK                           0x00000040
#define AVR32_EIC_MODE_INT6_OFFSET                                  6
#define AVR32_EIC_MODE_INT6_SIZE                                    1
#define AVR32_EIC_MODE_INT7                                         7
#define AVR32_EIC_MODE_INT7_MASK                           0x00000080
#define AVR32_EIC_MODE_INT7_OFFSET                                  7
#define AVR32_EIC_MODE_INT7_SIZE                                    1
#define AVR32_EIC_MODE_INT8                                         8
#define AVR32_EIC_MODE_INT8_MASK                           0x00000100
#define AVR32_EIC_MODE_INT8_OFFSET                                  8
#define AVR32_EIC_MODE_INT8_SIZE                                    1
#define AVR32_EIC_MODE_INT9                                         9
#define AVR32_EIC_MODE_INT9_MASK                           0x00000200
#define AVR32_EIC_MODE_INT9_OFFSET                                  9
#define AVR32_EIC_MODE_INT9_SIZE                                    1
#define AVR32_EIC_MODE_MASK                                0x0000ffff
#define AVR32_EIC_MODE_NMI                                          0
#define AVR32_EIC_MODE_NMI_MASK                            0x00000001
#define AVR32_EIC_MODE_NMI_OFFSET                                   0
#define AVR32_EIC_MODE_NMI_SIZE                                     1
#define AVR32_EIC_MODE_RESETVALUE                          0x00000000
#define AVR32_EIC_NMI                                               0
#define AVR32_EIC_NMI_MASK                                 0x00000001
#define AVR32_EIC_NMI_OFFSET                                        0
#define AVR32_EIC_NMI_SIZE                                          1
#define AVR32_EIC_TEST                                     0x00000024
#define AVR32_EIC_TESTEN                                           31
#define AVR32_EIC_TESTEN_MASK                              0x80000000
#define AVR32_EIC_TESTEN_OFFSET                                    31
#define AVR32_EIC_TESTEN_SIZE                                       1
#define AVR32_EIC_TEST_INT1                                         1
#define AVR32_EIC_TEST_INT10                                       10
#define AVR32_EIC_TEST_INT10_MASK                          0x00000400
#define AVR32_EIC_TEST_INT10_OFFSET                                10
#define AVR32_EIC_TEST_INT10_SIZE                                   1
#define AVR32_EIC_TEST_INT11                                       11
#define AVR32_EIC_TEST_INT11_MASK                          0x00000800
#define AVR32_EIC_TEST_INT11_OFFSET                                11
#define AVR32_EIC_TEST_INT11_SIZE                                   1
#define AVR32_EIC_TEST_INT12                                       12
#define AVR32_EIC_TEST_INT12_MASK                          0x00001000
#define AVR32_EIC_TEST_INT12_OFFSET                                12
#define AVR32_EIC_TEST_INT12_SIZE                                   1
#define AVR32_EIC_TEST_INT13                                       13
#define AVR32_EIC_TEST_INT13_MASK                          0x00002000
#define AVR32_EIC_TEST_INT13_OFFSET                                13
#define AVR32_EIC_TEST_INT13_SIZE                                   1
#define AVR32_EIC_TEST_INT14                                       14
#define AVR32_EIC_TEST_INT14_MASK                          0x00004000
#define AVR32_EIC_TEST_INT14_OFFSET                                14
#define AVR32_EIC_TEST_INT14_SIZE                                   1
#define AVR32_EIC_TEST_INT15                                       15
#define AVR32_EIC_TEST_INT15_MASK                          0x00008000
#define AVR32_EIC_TEST_INT15_OFFSET                                15
#define AVR32_EIC_TEST_INT15_SIZE                                   1
#define AVR32_EIC_TEST_INT1_MASK                           0x00000002
#define AVR32_EIC_TEST_INT1_OFFSET                                  1
#define AVR32_EIC_TEST_INT1_SIZE                                    1
#define AVR32_EIC_TEST_INT2                                         2
#define AVR32_EIC_TEST_INT2_MASK                           0x00000004
#define AVR32_EIC_TEST_INT2_OFFSET                                  2
#define AVR32_EIC_TEST_INT2_SIZE                                    1
#define AVR32_EIC_TEST_INT3                                         3
#define AVR32_EIC_TEST_INT3_MASK                           0x00000008
#define AVR32_EIC_TEST_INT3_OFFSET                                  3
#define AVR32_EIC_TEST_INT3_SIZE                                    1
#define AVR32_EIC_TEST_INT4                                         4
#define AVR32_EIC_TEST_INT4_MASK                           0x00000010
#define AVR32_EIC_TEST_INT4_OFFSET                                  4
#define AVR32_EIC_TEST_INT4_SIZE                                    1
#define AVR32_EIC_TEST_INT5                                         5
#define AVR32_EIC_TEST_INT5_MASK                           0x00000020
#define AVR32_EIC_TEST_INT5_OFFSET                                  5
#define AVR32_EIC_TEST_INT5_SIZE                                    1
#define AVR32_EIC_TEST_INT6                                         6
#define AVR32_EIC_TEST_INT6_MASK                           0x00000040
#define AVR32_EIC_TEST_INT6_OFFSET                                  6
#define AVR32_EIC_TEST_INT6_SIZE                                    1
#define AVR32_EIC_TEST_INT7                                         7
#define AVR32_EIC_TEST_INT7_MASK                           0x00000080
#define AVR32_EIC_TEST_INT7_OFFSET                                  7
#define AVR32_EIC_TEST_INT7_SIZE                                    1
#define AVR32_EIC_TEST_INT8                                         8
#define AVR32_EIC_TEST_INT8_MASK                           0x00000100
#define AVR32_EIC_TEST_INT8_OFFSET                                  8
#define AVR32_EIC_TEST_INT8_SIZE                                    1
#define AVR32_EIC_TEST_INT9                                         9
#define AVR32_EIC_TEST_INT9_MASK                           0x00000200
#define AVR32_EIC_TEST_INT9_OFFSET                                  9
#define AVR32_EIC_TEST_INT9_SIZE                                    1
#define AVR32_EIC_TEST_MASK                                0x8000ffff
#define AVR32_EIC_TEST_NMI                                          0
#define AVR32_EIC_TEST_NMI_MASK                            0x00000001
#define AVR32_EIC_TEST_NMI_OFFSET                                   0
#define AVR32_EIC_TEST_NMI_SIZE                                     1
#define AVR32_EIC_TEST_RESETVALUE                          0x00000000
#define AVR32_EIC_TEST_TESTEN                                      31
#define AVR32_EIC_TEST_TESTEN_MASK                         0x80000000
#define AVR32_EIC_TEST_TESTEN_OFFSET                               31
#define AVR32_EIC_TEST_TESTEN_SIZE                                  1
#define AVR32_EIC_VERSION                                  0x000003fc
#define AVR32_EIC_VERSION_MASK                             0x00000fff
#define AVR32_EIC_VERSION_OFFSET                                    0
#define AVR32_EIC_VERSION_RESETVALUE                       0x00000301
#define AVR32_EIC_VERSION_SIZE                                     12
#define AVR32_EIC_VERSION_VERSION                                   0
#define AVR32_EIC_VERSION_VERSION_MASK                     0x00000fff
#define AVR32_EIC_VERSION_VERSION_OFFSET                            0
#define AVR32_EIC_VERSION_VERSION_SIZE                             12

#define AVR32_EIC_EDGE_IRQ                             0x00000000
#define AVR32_EIC_FALLING_EDGE                         0x00000000
#define AVR32_EIC_FILTER_OFF                           0x00000000
#define AVR32_EIC_FILTER_ON                            0x00000001
#define AVR32_EIC_HIGH_LEVEL                           0x00000001
#define AVR32_EIC_LEVEL_IRQ                            0x00000001
#define AVR32_EIC_LOW_LEVEL                            0x00000000
#define AVR32_EIC_RISING_EDGE                          0x00000001
#define AVR32_EIC_SYNC                                 0x00000000
#define AVR32_EIC_USE_ASYNC                            0x00000001



#ifdef __AVR32_ABI_COMPILER__


typedef struct avr32_eic_ier_t {
    unsigned int                 :16;
    unsigned int int15           : 1;
    unsigned int int14           : 1;
    unsigned int int13           : 1;
    unsigned int int12           : 1;
    unsigned int int11           : 1;
    unsigned int int10           : 1;
    unsigned int int9            : 1;
    unsigned int int8            : 1;
    unsigned int int7            : 1;
    unsigned int int6            : 1;
    unsigned int int5            : 1;
    unsigned int int4            : 1;
    unsigned int int3            : 1;
    unsigned int int2            : 1;
    unsigned int int1            : 1;
    unsigned int nmi             : 1;
} avr32_eic_ier_t;



typedef struct avr32_eic_idr_t {
    unsigned int                 :16;
    unsigned int int15           : 1;
    unsigned int int14           : 1;
    unsigned int int13           : 1;
    unsigned int int12           : 1;
    unsigned int int11           : 1;
    unsigned int int10           : 1;
    unsigned int int9            : 1;
    unsigned int int8            : 1;
    unsigned int int7            : 1;
    unsigned int int6            : 1;
    unsigned int int5            : 1;
    unsigned int int4            : 1;
    unsigned int int3            : 1;
    unsigned int int2            : 1;
    unsigned int int1            : 1;
    unsigned int nmi             : 1;
} avr32_eic_idr_t;



typedef struct avr32_eic_imr_t {
    unsigned int                 :16;
    unsigned int int15           : 1;
    unsigned int int14           : 1;
    unsigned int int13           : 1;
    unsigned int int12           : 1;
    unsigned int int11           : 1;
    unsigned int int10           : 1;
    unsigned int int9            : 1;
    unsigned int int8            : 1;
    unsigned int int7            : 1;
    unsigned int int6            : 1;
    unsigned int int5            : 1;
    unsigned int int4            : 1;
    unsigned int int3            : 1;
    unsigned int int2            : 1;
    unsigned int int1            : 1;
    unsigned int nmi             : 1;
} avr32_eic_imr_t;



typedef struct avr32_eic_isr_t {
    unsigned int                 :16;
    unsigned int int15           : 1;
    unsigned int int14           : 1;
    unsigned int int13           : 1;
    unsigned int int12           : 1;
    unsigned int int11           : 1;
    unsigned int int10           : 1;
    unsigned int int9            : 1;
    unsigned int int8            : 1;
    unsigned int int7            : 1;
    unsigned int int6            : 1;
    unsigned int int5            : 1;
    unsigned int int4            : 1;
    unsigned int int3            : 1;
    unsigned int int2            : 1;
    unsigned int int1            : 1;
    unsigned int nmi             : 1;
} avr32_eic_isr_t;



typedef struct avr32_eic_icr_t {
    unsigned int                 :16;
    unsigned int int15           : 1;
    unsigned int int14           : 1;
    unsigned int int13           : 1;
    unsigned int int12           : 1;
    unsigned int int11           : 1;
    unsigned int int10           : 1;
    unsigned int int9            : 1;
    unsigned int int8            : 1;
    unsigned int int7            : 1;
    unsigned int int6            : 1;
    unsigned int int5            : 1;
    unsigned int int4            : 1;
    unsigned int int3            : 1;
    unsigned int int2            : 1;
    unsigned int int1            : 1;
    unsigned int nmi             : 1;
} avr32_eic_icr_t;



typedef struct avr32_eic_mode_t {
    unsigned int                 :16;
    unsigned int int15           : 1;
    unsigned int int14           : 1;
    unsigned int int13           : 1;
    unsigned int int12           : 1;
    unsigned int int11           : 1;
    unsigned int int10           : 1;
    unsigned int int9            : 1;
    unsigned int int8            : 1;
    unsigned int int7            : 1;
    unsigned int int6            : 1;
    unsigned int int5            : 1;
    unsigned int int4            : 1;
    unsigned int int3            : 1;
    unsigned int int2            : 1;
    unsigned int int1            : 1;
    unsigned int nmi             : 1;
} avr32_eic_mode_t;



typedef struct avr32_eic_edge_t {
    unsigned int                 :16;
    unsigned int int15           : 1;
    unsigned int int14           : 1;
    unsigned int int13           : 1;
    unsigned int int12           : 1;
    unsigned int int11           : 1;
    unsigned int int10           : 1;
    unsigned int int9            : 1;
    unsigned int int8            : 1;
    unsigned int int7            : 1;
    unsigned int int6            : 1;
    unsigned int int5            : 1;
    unsigned int int4            : 1;
    unsigned int int3            : 1;
    unsigned int int2            : 1;
    unsigned int int1            : 1;
    unsigned int nmi             : 1;
} avr32_eic_edge_t;



typedef struct avr32_eic_level_t {
    unsigned int                 :16;
    unsigned int int15           : 1;
    unsigned int int14           : 1;
    unsigned int int13           : 1;
    unsigned int int12           : 1;
    unsigned int int11           : 1;
    unsigned int int10           : 1;
    unsigned int int9            : 1;
    unsigned int int8            : 1;
    unsigned int int7            : 1;
    unsigned int int6            : 1;
    unsigned int int5            : 1;
    unsigned int int4            : 1;
    unsigned int int3            : 1;
    unsigned int int2            : 1;
    unsigned int int1            : 1;
    unsigned int nmi             : 1;
} avr32_eic_level_t;



typedef struct avr32_eic_filter_t {
    unsigned int                 :16;
    unsigned int int15           : 1;
    unsigned int int14           : 1;
    unsigned int int13           : 1;
    unsigned int int12           : 1;
    unsigned int int11           : 1;
    unsigned int int10           : 1;
    unsigned int int9            : 1;
    unsigned int int8            : 1;
    unsigned int int7            : 1;
    unsigned int int6            : 1;
    unsigned int int5            : 1;
    unsigned int int4            : 1;
    unsigned int int3            : 1;
    unsigned int int2            : 1;
    unsigned int int1            : 1;
    unsigned int nmi             : 1;
} avr32_eic_filter_t;



typedef struct avr32_eic_test_t {
    unsigned int testen          : 1;
    unsigned int                 :15;
    unsigned int int15           : 1;
    unsigned int int14           : 1;
    unsigned int int13           : 1;
    unsigned int int12           : 1;
    unsigned int int11           : 1;
    unsigned int int10           : 1;
    unsigned int int9            : 1;
    unsigned int int8            : 1;
    unsigned int int7            : 1;
    unsigned int int6            : 1;
    unsigned int int5            : 1;
    unsigned int int4            : 1;
    unsigned int int3            : 1;
    unsigned int int2            : 1;
    unsigned int int1            : 1;
    unsigned int nmi             : 1;
} avr32_eic_test_t;



typedef struct avr32_eic_async_t {
    unsigned int                 :16;
    unsigned int int15           : 1;
    unsigned int int14           : 1;
    unsigned int int13           : 1;
    unsigned int int12           : 1;
    unsigned int int11           : 1;
    unsigned int int10           : 1;
    unsigned int int9            : 1;
    unsigned int int8            : 1;
    unsigned int int7            : 1;
    unsigned int int6            : 1;
    unsigned int int5            : 1;
    unsigned int int4            : 1;
    unsigned int int3            : 1;
    unsigned int int2            : 1;
    unsigned int int1            : 1;
    unsigned int nmi             : 1;
} avr32_eic_async_t;



typedef struct avr32_eic_en_t {
    unsigned int                 :16;
    unsigned int int15           : 1;
    unsigned int int14           : 1;
    unsigned int int13           : 1;
    unsigned int int12           : 1;
    unsigned int int11           : 1;
    unsigned int int10           : 1;
    unsigned int int9            : 1;
    unsigned int int8            : 1;
    unsigned int int7            : 1;
    unsigned int int6            : 1;
    unsigned int int5            : 1;
    unsigned int int4            : 1;
    unsigned int int3            : 1;
    unsigned int int2            : 1;
    unsigned int int1            : 1;
    unsigned int nmi             : 1;
} avr32_eic_en_t;



typedef struct avr32_eic_dis_t {
    unsigned int                 :16;
    unsigned int int15           : 1;
    unsigned int int14           : 1;
    unsigned int int13           : 1;
    unsigned int int12           : 1;
    unsigned int int11           : 1;
    unsigned int int10           : 1;
    unsigned int int9            : 1;
    unsigned int int8            : 1;
    unsigned int int7            : 1;
    unsigned int int6            : 1;
    unsigned int int5            : 1;
    unsigned int int4            : 1;
    unsigned int int3            : 1;
    unsigned int int2            : 1;
    unsigned int int1            : 1;
    unsigned int nmi             : 1;
} avr32_eic_dis_t;



typedef struct avr32_eic_ctrl_t {
    unsigned int                 :16;
    unsigned int int15           : 1;
    unsigned int int14           : 1;
    unsigned int int13           : 1;
    unsigned int int12           : 1;
    unsigned int int11           : 1;
    unsigned int int10           : 1;
    unsigned int int9            : 1;
    unsigned int int8            : 1;
    unsigned int int7            : 1;
    unsigned int int6            : 1;
    unsigned int int5            : 1;
    unsigned int int4            : 1;
    unsigned int int3            : 1;
    unsigned int int2            : 1;
    unsigned int int1            : 1;
    unsigned int nmi             : 1;
} avr32_eic_ctrl_t;



typedef struct avr32_eic_version_t {
    unsigned int                 :20;
    unsigned int version         :12;
} avr32_eic_version_t;



typedef struct avr32_eic_t {
  union {
          unsigned long                  ier       ;//0x0000
          avr32_eic_ier_t                IER       ;
  };
  union {
          unsigned long                  idr       ;//0x0004
          avr32_eic_idr_t                IDR       ;
  };
  union {
    const unsigned long                  imr       ;//0x0008
    const avr32_eic_imr_t                IMR       ;
  };
  union {
    const unsigned long                  isr       ;//0x000c
    const avr32_eic_isr_t                ISR       ;
  };
  union {
          unsigned long                  icr       ;//0x0010
          avr32_eic_icr_t                ICR       ;
  };
  union {
          unsigned long                  mode      ;//0x0014
          avr32_eic_mode_t               MODE      ;
  };
  union {
          unsigned long                  edge      ;//0x0018
          avr32_eic_edge_t               EDGE      ;
  };
  union {
          unsigned long                  level     ;//0x001c
          avr32_eic_level_t              LEVEL     ;
  };
  union {
          unsigned long                  filter    ;//0x0020
          avr32_eic_filter_t             FILTER    ;
  };
  union {
          unsigned long                  test      ;//0x0024
          avr32_eic_test_t               TEST      ;
  };
  union {
          unsigned long                  async     ;//0x0028
          avr32_eic_async_t              ASYNC     ;
  };
          unsigned int                   :32       ;//0x002c
  union {
          unsigned long                  en        ;//0x0030
          avr32_eic_en_t                 EN        ;
  };
  union {
          unsigned long                  dis       ;//0x0034
          avr32_eic_dis_t                DIS       ;
  };
  union {
    const unsigned long                  ctrl      ;//0x0038
    const avr32_eic_ctrl_t               CTRL      ;
  };
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
  union {
    const unsigned long                  version   ;//0x03fc
    const avr32_eic_version_t            VERSION   ;
  };
} avr32_eic_t;



/*#ifdef __AVR32_ABI_COMPILER__*/
#endif

/*#ifdef AVR32_EIC_301_H_INCLUDED*/
#endif

