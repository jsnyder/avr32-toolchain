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
#ifndef AVR32_PEVC_100_H_INCLUDED
#define AVR32_PEVC_100_H_INCLUDED

#define AVR32_PEVC_H_VERSION 100

#include "avr32/abi.h"


/*
 Note to user:

 The following defines are always generated:
 - Register offset: AVR32_PEVC_<register>
 - Bitfield mask:   AVR32_PEVC_<register>_<bitfield>
 - Bitfield offset: AVR32_PEVC_<register>_<bitfield>_OFFSET
 - Bitfield size:   AVR32_PEVC_<register>_<bitfield>_SIZE
 - Bitfield values: AVR32_PEVC_<register>_<bitfield>_<value name>

 The following defines are generated if they don't cause ambiguities,
 i.e. the name is unique, or all values with that name are the same.
 - Bitfield mask:   AVR32_PEVC_<bitfield>
 - Bitfield offset: AVR32_PEVC_<bitfield>_OFFSET
 - Bitfield size:   AVR32_PEVC_<bitfield>_SIZE
 - Bitfield values: AVR32_PEVC_<bitfield>_<value name>
 - Bitfield values: AVR32_PEVC_<value name>

 All defines are sorted alphabetically.
*/


#define AVR32_PEVC_BUSY                                              0
#define AVR32_PEVC_BUSY0                                    0x00000050
#define AVR32_PEVC_BUSY0_BUSY                                        0
#define AVR32_PEVC_BUSY0_BUSY_MASK                          0xffffffff
#define AVR32_PEVC_BUSY0_BUSY_OFFSET                                 0
#define AVR32_PEVC_BUSY0_BUSY_SIZE                                  32
#define AVR32_PEVC_BUSY0_MASK                               0xffffffff
#define AVR32_PEVC_BUSY0_RESETVALUE                         0x00000000
#define AVR32_PEVC_BUSY1                                    0x00000054
#define AVR32_PEVC_BUSY1_BUSY                                        0
#define AVR32_PEVC_BUSY1_BUSY_MASK                          0xffffffff
#define AVR32_PEVC_BUSY1_BUSY_OFFSET                                 0
#define AVR32_PEVC_BUSY1_BUSY_SIZE                                  32
#define AVR32_PEVC_BUSY1_MASK                               0xffffffff
#define AVR32_PEVC_BUSY1_RESETVALUE                         0x00000000
#define AVR32_PEVC_BUSY_MASK                                0xffffffff
#define AVR32_PEVC_BUSY_OFFSET                                       0
#define AVR32_PEVC_BUSY_SIZE                                        32
#define AVR32_PEVC_CHDR                                              0
#define AVR32_PEVC_CHDR0                                    0x00000030
#define AVR32_PEVC_CHDR0_CHDR                                        0
#define AVR32_PEVC_CHDR0_CHDR_MASK                          0xffffffff
#define AVR32_PEVC_CHDR0_CHDR_OFFSET                                 0
#define AVR32_PEVC_CHDR0_CHDR_SIZE                                  32
#define AVR32_PEVC_CHDR0_MASK                               0xffffffff
#define AVR32_PEVC_CHDR0_RESETVALUE                         0x00000000
#define AVR32_PEVC_CHDR1                                    0x00000034
#define AVR32_PEVC_CHDR1_CHDR                                        0
#define AVR32_PEVC_CHDR1_CHDR_MASK                          0xffffffff
#define AVR32_PEVC_CHDR1_CHDR_OFFSET                                 0
#define AVR32_PEVC_CHDR1_CHDR_SIZE                                  32
#define AVR32_PEVC_CHDR1_MASK                               0xffffffff
#define AVR32_PEVC_CHDR1_RESETVALUE                         0x00000000
#define AVR32_PEVC_CHDR_MASK                                0xffffffff
#define AVR32_PEVC_CHDR_OFFSET                                       0
#define AVR32_PEVC_CHDR_SIZE                                        32
#define AVR32_PEVC_CHER                                              0
#define AVR32_PEVC_CHER0                                    0x00000020
#define AVR32_PEVC_CHER0_CHER                                        0
#define AVR32_PEVC_CHER0_CHER_MASK                          0xffffffff
#define AVR32_PEVC_CHER0_CHER_OFFSET                                 0
#define AVR32_PEVC_CHER0_CHER_SIZE                                  32
#define AVR32_PEVC_CHER0_MASK                               0xffffffff
#define AVR32_PEVC_CHER0_RESETVALUE                         0x00000000
#define AVR32_PEVC_CHER1                                    0x00000024
#define AVR32_PEVC_CHER1_CHER                                        0
#define AVR32_PEVC_CHER1_CHER_MASK                          0xffffffff
#define AVR32_PEVC_CHER1_CHER_OFFSET                                 0
#define AVR32_PEVC_CHER1_CHER_SIZE                                  32
#define AVR32_PEVC_CHER1_MASK                               0xffffffff
#define AVR32_PEVC_CHER1_RESETVALUE                         0x00000000
#define AVR32_PEVC_CHER_MASK                                0xffffffff
#define AVR32_PEVC_CHER_OFFSET                                       0
#define AVR32_PEVC_CHER_SIZE                                        32
#define AVR32_PEVC_CHMX0                                    0x00000100
#define AVR32_PEVC_CHMX0_EVMX                                        0
#define AVR32_PEVC_CHMX0_EVMX_MASK                          0x0000003f
#define AVR32_PEVC_CHMX0_EVMX_OFFSET                                 0
#define AVR32_PEVC_CHMX0_EVMX_SIZE                                   6
#define AVR32_PEVC_CHMX0_MASK                               0x0000013f
#define AVR32_PEVC_CHMX0_RESETVALUE                         0x00000000
#define AVR32_PEVC_CHMX0_SMX                                         8
#define AVR32_PEVC_CHMX0_SMX_MASK                           0x00000100
#define AVR32_PEVC_CHMX0_SMX_OFFSET                                  8
#define AVR32_PEVC_CHMX0_SMX_SIZE                                    1
#define AVR32_PEVC_CHSR                                              0
#define AVR32_PEVC_CHSR0                                    0x00000010
#define AVR32_PEVC_CHSR0_CHSR                                        0
#define AVR32_PEVC_CHSR0_CHSR_MASK                          0xffffffff
#define AVR32_PEVC_CHSR0_CHSR_OFFSET                                 0
#define AVR32_PEVC_CHSR0_CHSR_SIZE                                  32
#define AVR32_PEVC_CHSR0_MASK                               0xffffffff
#define AVR32_PEVC_CHSR0_RESETVALUE                         0x00000000
#define AVR32_PEVC_CHSR1                                    0x00000014
#define AVR32_PEVC_CHSR1_CHSR                                        0
#define AVR32_PEVC_CHSR1_CHSR_MASK                          0xffffffff
#define AVR32_PEVC_CHSR1_CHSR_OFFSET                                 0
#define AVR32_PEVC_CHSR1_CHSR_SIZE                                  32
#define AVR32_PEVC_CHSR1_MASK                               0xffffffff
#define AVR32_PEVC_CHSR1_RESETVALUE                         0x00000000
#define AVR32_PEVC_CHSR_MASK                                0xffffffff
#define AVR32_PEVC_CHSR_OFFSET                                       0
#define AVR32_PEVC_CHSR_SIZE                                        32
#define AVR32_PEVC_EVF                                               1
#define AVR32_PEVC_EVF_MASK                                 0x00000002
#define AVR32_PEVC_EVF_OFFSET                                        1
#define AVR32_PEVC_EVF_SIZE                                          1
#define AVR32_PEVC_EVIN                                              0
#define AVR32_PEVC_EVIN_MASK                                0x000000ff
#define AVR32_PEVC_EVIN_OFFSET                                       0
#define AVR32_PEVC_EVIN_SIZE                                         8
#define AVR32_PEVC_EVR                                               0
#define AVR32_PEVC_EVR_MASK                                 0x00000001
#define AVR32_PEVC_EVR_OFFSET                                        0
#define AVR32_PEVC_EVR_SIZE                                          1
#define AVR32_PEVC_EVS                                               8
#define AVR32_PEVC_EVS0                                     0x00000200
#define AVR32_PEVC_EVS0_EVF                                          1
#define AVR32_PEVC_EVS0_EVF_MASK                            0x00000002
#define AVR32_PEVC_EVS0_EVF_OFFSET                                   1
#define AVR32_PEVC_EVS0_EVF_SIZE                                     1
#define AVR32_PEVC_EVS0_EVR                                          0
#define AVR32_PEVC_EVS0_EVR_MASK                            0x00000001
#define AVR32_PEVC_EVS0_EVR_OFFSET                                   0
#define AVR32_PEVC_EVS0_EVR_SIZE                                     1
#define AVR32_PEVC_EVS0_IGF                                          2
#define AVR32_PEVC_EVS0_IGF_MASK                            0x00000004
#define AVR32_PEVC_EVS0_IGF_OFFSET                                   2
#define AVR32_PEVC_EVS0_IGF_SIZE                                     1
#define AVR32_PEVC_EVS0_MASK                                0x00000007
#define AVR32_PEVC_EVS0_RESETVALUE                          0x00000000
#define AVR32_PEVC_EVS_MASK                                 0x0000ff00
#define AVR32_PEVC_EVS_OFFSET                                        8
#define AVR32_PEVC_EVS_SIZE                                          8
#define AVR32_PEVC_IGF                                               2
#define AVR32_PEVC_IGFDR                                    0x00000008
#define AVR32_PEVC_IGFDR_IGFDR                                       0
#define AVR32_PEVC_IGFDR_IGFDR_MASK                         0x0000000f
#define AVR32_PEVC_IGFDR_IGFDR_OFFSET                                0
#define AVR32_PEVC_IGFDR_IGFDR_SIZE                                  4
#define AVR32_PEVC_IGFDR_MASK                               0x0000000f
#define AVR32_PEVC_IGFDR_OFFSET                                      0
#define AVR32_PEVC_IGFDR_RESETVALUE                         0x00000000
#define AVR32_PEVC_IGFDR_SIZE                                        4
#define AVR32_PEVC_IGF_MASK                                 0x00000004
#define AVR32_PEVC_IGF_OFFSET                                        2
#define AVR32_PEVC_IGF_SIZE                                          1
#define AVR32_PEVC_OVIDR                                             0
#define AVR32_PEVC_OVIDR0                                   0x000000f0
#define AVR32_PEVC_OVIDR0_MASK                              0xffffffff
#define AVR32_PEVC_OVIDR0_OVIDR                                      0
#define AVR32_PEVC_OVIDR0_OVIDR_MASK                        0xffffffff
#define AVR32_PEVC_OVIDR0_OVIDR_OFFSET                               0
#define AVR32_PEVC_OVIDR0_OVIDR_SIZE                                32
#define AVR32_PEVC_OVIDR0_RESETVALUE                        0x00000000
#define AVR32_PEVC_OVIDR1                                   0x000000f4
#define AVR32_PEVC_OVIDR1_MASK                              0xffffffff
#define AVR32_PEVC_OVIDR1_OVIDR                                      0
#define AVR32_PEVC_OVIDR1_OVIDR_MASK                        0xffffffff
#define AVR32_PEVC_OVIDR1_OVIDR_OFFSET                               0
#define AVR32_PEVC_OVIDR1_OVIDR_SIZE                                32
#define AVR32_PEVC_OVIDR1_RESETVALUE                        0x00000000
#define AVR32_PEVC_OVIDR_MASK                               0xffffffff
#define AVR32_PEVC_OVIDR_OFFSET                                      0
#define AVR32_PEVC_OVIDR_SIZE                                       32
#define AVR32_PEVC_OVIER                                             0
#define AVR32_PEVC_OVIER0                                   0x000000e0
#define AVR32_PEVC_OVIER0_MASK                              0xffffffff
#define AVR32_PEVC_OVIER0_OVIER                                      0
#define AVR32_PEVC_OVIER0_OVIER_MASK                        0xffffffff
#define AVR32_PEVC_OVIER0_OVIER_OFFSET                               0
#define AVR32_PEVC_OVIER0_OVIER_SIZE                                32
#define AVR32_PEVC_OVIER0_RESETVALUE                        0x00000000
#define AVR32_PEVC_OVIER1                                   0x000000e4
#define AVR32_PEVC_OVIER1_MASK                              0xffffffff
#define AVR32_PEVC_OVIER1_OVIER                                      0
#define AVR32_PEVC_OVIER1_OVIER_MASK                        0xffffffff
#define AVR32_PEVC_OVIER1_OVIER_OFFSET                               0
#define AVR32_PEVC_OVIER1_OVIER_SIZE                                32
#define AVR32_PEVC_OVIER1_RESETVALUE                        0x00000000
#define AVR32_PEVC_OVIER_MASK                               0xffffffff
#define AVR32_PEVC_OVIER_OFFSET                                      0
#define AVR32_PEVC_OVIER_SIZE                                       32
#define AVR32_PEVC_OVIMR                                             0
#define AVR32_PEVC_OVIMR0                                   0x000000d0
#define AVR32_PEVC_OVIMR0_MASK                              0xffffffff
#define AVR32_PEVC_OVIMR0_OVIMR                                      0
#define AVR32_PEVC_OVIMR0_OVIMR_MASK                        0xffffffff
#define AVR32_PEVC_OVIMR0_OVIMR_OFFSET                               0
#define AVR32_PEVC_OVIMR0_OVIMR_SIZE                                32
#define AVR32_PEVC_OVIMR0_RESETVALUE                        0x00000000
#define AVR32_PEVC_OVIMR1                                   0x000000d4
#define AVR32_PEVC_OVIMR1_MASK                              0xffffffff
#define AVR32_PEVC_OVIMR1_OVIMR                                      0
#define AVR32_PEVC_OVIMR1_OVIMR_MASK                        0xffffffff
#define AVR32_PEVC_OVIMR1_OVIMR_OFFSET                               0
#define AVR32_PEVC_OVIMR1_OVIMR_SIZE                                32
#define AVR32_PEVC_OVIMR1_RESETVALUE                        0x00000000
#define AVR32_PEVC_OVIMR_MASK                               0xffffffff
#define AVR32_PEVC_OVIMR_OFFSET                                      0
#define AVR32_PEVC_OVIMR_SIZE                                       32
#define AVR32_PEVC_OVSCR                                             0
#define AVR32_PEVC_OVSCR0                                   0x000000c0
#define AVR32_PEVC_OVSCR0_MASK                              0xffffffff
#define AVR32_PEVC_OVSCR0_OVSCR                                      0
#define AVR32_PEVC_OVSCR0_OVSCR_MASK                        0xffffffff
#define AVR32_PEVC_OVSCR0_OVSCR_OFFSET                               0
#define AVR32_PEVC_OVSCR0_OVSCR_SIZE                                32
#define AVR32_PEVC_OVSCR0_RESETVALUE                        0x00000000
#define AVR32_PEVC_OVSCR1                                   0x000000c4
#define AVR32_PEVC_OVSCR1_MASK                              0xffffffff
#define AVR32_PEVC_OVSCR1_OVSCR                                      0
#define AVR32_PEVC_OVSCR1_OVSCR_MASK                        0xffffffff
#define AVR32_PEVC_OVSCR1_OVSCR_OFFSET                               0
#define AVR32_PEVC_OVSCR1_OVSCR_SIZE                                32
#define AVR32_PEVC_OVSCR1_RESETVALUE                        0x00000000
#define AVR32_PEVC_OVSCR_MASK                               0xffffffff
#define AVR32_PEVC_OVSCR_OFFSET                                      0
#define AVR32_PEVC_OVSCR_SIZE                                       32
#define AVR32_PEVC_OVSR                                              0
#define AVR32_PEVC_OVSR0                                    0x000000b0
#define AVR32_PEVC_OVSR0_MASK                               0xffffffff
#define AVR32_PEVC_OVSR0_OVSR                                        0
#define AVR32_PEVC_OVSR0_OVSR_MASK                          0xffffffff
#define AVR32_PEVC_OVSR0_OVSR_OFFSET                                 0
#define AVR32_PEVC_OVSR0_OVSR_SIZE                                  32
#define AVR32_PEVC_OVSR0_RESETVALUE                         0x00000000
#define AVR32_PEVC_OVSR1                                    0x000000b4
#define AVR32_PEVC_OVSR1_MASK                               0xffffffff
#define AVR32_PEVC_OVSR1_OVSR                                        0
#define AVR32_PEVC_OVSR1_OVSR_MASK                          0xffffffff
#define AVR32_PEVC_OVSR1_OVSR_OFFSET                                 0
#define AVR32_PEVC_OVSR1_OVSR_SIZE                                  32
#define AVR32_PEVC_OVSR1_RESETVALUE                         0x00000000
#define AVR32_PEVC_OVSR_MASK                                0xffffffff
#define AVR32_PEVC_OVSR_OFFSET                                       0
#define AVR32_PEVC_OVSR_SIZE                                        32
#define AVR32_PEVC_PARAMETER                                0x00000004
#define AVR32_PEVC_PARAMETER_EVIN                                    0
#define AVR32_PEVC_PARAMETER_EVIN_MASK                      0x000000ff
#define AVR32_PEVC_PARAMETER_EVIN_OFFSET                             0
#define AVR32_PEVC_PARAMETER_EVIN_SIZE                               8
#define AVR32_PEVC_PARAMETER_EVMX                                   16
#define AVR32_PEVC_PARAMETER_EVMX_MASK                      0x00ff0000
#define AVR32_PEVC_PARAMETER_EVMX_OFFSET                            16
#define AVR32_PEVC_PARAMETER_EVMX_SIZE                               8
#define AVR32_PEVC_PARAMETER_EVS                                     8
#define AVR32_PEVC_PARAMETER_EVS_MASK                       0x0000ff00
#define AVR32_PEVC_PARAMETER_EVS_OFFSET                              8
#define AVR32_PEVC_PARAMETER_EVS_SIZE                                8
#define AVR32_PEVC_PARAMETER_MASK                           0xffffffff
#define AVR32_PEVC_PARAMETER_RESETVALUE                     0x14061824
#define AVR32_PEVC_PARAMETER_TRIGOUT                                24
#define AVR32_PEVC_PARAMETER_TRIGOUT_MASK                   0xff000000
#define AVR32_PEVC_PARAMETER_TRIGOUT_OFFSET                         24
#define AVR32_PEVC_PARAMETER_TRIGOUT_SIZE                            8
#define AVR32_PEVC_SEV                                               0
#define AVR32_PEVC_SEV0                                     0x00000040
#define AVR32_PEVC_SEV0_MASK                                0xffffffff
#define AVR32_PEVC_SEV0_RESETVALUE                          0x00000000
#define AVR32_PEVC_SEV0_SEV                                          0
#define AVR32_PEVC_SEV0_SEV_MASK                            0xffffffff
#define AVR32_PEVC_SEV0_SEV_OFFSET                                   0
#define AVR32_PEVC_SEV0_SEV_SIZE                                    32
#define AVR32_PEVC_SEV1                                     0x00000044
#define AVR32_PEVC_SEV1_MASK                                0xffffffff
#define AVR32_PEVC_SEV1_RESETVALUE                          0x00000000
#define AVR32_PEVC_SEV1_SEV                                          0
#define AVR32_PEVC_SEV1_SEV_MASK                            0xffffffff
#define AVR32_PEVC_SEV1_SEV_OFFSET                                   0
#define AVR32_PEVC_SEV1_SEV_SIZE                                    32
#define AVR32_PEVC_SEV_MASK                                 0xffffffff
#define AVR32_PEVC_SEV_OFFSET                                        0
#define AVR32_PEVC_SEV_SIZE                                         32
#define AVR32_PEVC_SMX                                               8
#define AVR32_PEVC_SMX_MASK                                 0x00000100
#define AVR32_PEVC_SMX_OFFSET                                        8
#define AVR32_PEVC_SMX_SIZE                                          1
#define AVR32_PEVC_TRIDR                                             0
#define AVR32_PEVC_TRIDR0                                   0x000000a0
#define AVR32_PEVC_TRIDR0_MASK                              0xffffffff
#define AVR32_PEVC_TRIDR0_RESETVALUE                        0x00000000
#define AVR32_PEVC_TRIDR0_TRIDR                                      0
#define AVR32_PEVC_TRIDR0_TRIDR_MASK                        0xffffffff
#define AVR32_PEVC_TRIDR0_TRIDR_OFFSET                               0
#define AVR32_PEVC_TRIDR0_TRIDR_SIZE                                32
#define AVR32_PEVC_TRIDR1                                   0x000000a4
#define AVR32_PEVC_TRIDR1_MASK                              0xffffffff
#define AVR32_PEVC_TRIDR1_RESETVALUE                        0x00000000
#define AVR32_PEVC_TRIDR1_TRIDR                                      0
#define AVR32_PEVC_TRIDR1_TRIDR_MASK                        0xffffffff
#define AVR32_PEVC_TRIDR1_TRIDR_OFFSET                               0
#define AVR32_PEVC_TRIDR1_TRIDR_SIZE                                32
#define AVR32_PEVC_TRIDR_MASK                               0xffffffff
#define AVR32_PEVC_TRIDR_OFFSET                                      0
#define AVR32_PEVC_TRIDR_SIZE                                       32
#define AVR32_PEVC_TRIER                                             0
#define AVR32_PEVC_TRIER0                                   0x00000090
#define AVR32_PEVC_TRIER0_MASK                              0xffffffff
#define AVR32_PEVC_TRIER0_RESETVALUE                        0x00000000
#define AVR32_PEVC_TRIER0_TRIER                                      0
#define AVR32_PEVC_TRIER0_TRIER_MASK                        0xffffffff
#define AVR32_PEVC_TRIER0_TRIER_OFFSET                               0
#define AVR32_PEVC_TRIER0_TRIER_SIZE                                32
#define AVR32_PEVC_TRIER1                                   0x00000094
#define AVR32_PEVC_TRIER1_MASK                              0xffffffff
#define AVR32_PEVC_TRIER1_RESETVALUE                        0x00000000
#define AVR32_PEVC_TRIER1_TRIER                                      0
#define AVR32_PEVC_TRIER1_TRIER_MASK                        0xffffffff
#define AVR32_PEVC_TRIER1_TRIER_OFFSET                               0
#define AVR32_PEVC_TRIER1_TRIER_SIZE                                32
#define AVR32_PEVC_TRIER_MASK                               0xffffffff
#define AVR32_PEVC_TRIER_OFFSET                                      0
#define AVR32_PEVC_TRIER_SIZE                                       32
#define AVR32_PEVC_TRIGOUT                                          24
#define AVR32_PEVC_TRIGOUT_MASK                             0xff000000
#define AVR32_PEVC_TRIGOUT_OFFSET                                   24
#define AVR32_PEVC_TRIGOUT_SIZE                                      8
#define AVR32_PEVC_TRIMR                                             0
#define AVR32_PEVC_TRIMR0                                   0x00000080
#define AVR32_PEVC_TRIMR0_MASK                              0xffffffff
#define AVR32_PEVC_TRIMR0_RESETVALUE                        0x00000000
#define AVR32_PEVC_TRIMR0_TRIMR                                      0
#define AVR32_PEVC_TRIMR0_TRIMR_MASK                        0xffffffff
#define AVR32_PEVC_TRIMR0_TRIMR_OFFSET                               0
#define AVR32_PEVC_TRIMR0_TRIMR_SIZE                                32
#define AVR32_PEVC_TRIMR1                                   0x00000084
#define AVR32_PEVC_TRIMR1_MASK                              0xffffffff
#define AVR32_PEVC_TRIMR1_RESETVALUE                        0x00000000
#define AVR32_PEVC_TRIMR1_TRIMR                                      0
#define AVR32_PEVC_TRIMR1_TRIMR_MASK                        0xffffffff
#define AVR32_PEVC_TRIMR1_TRIMR_OFFSET                               0
#define AVR32_PEVC_TRIMR1_TRIMR_SIZE                                32
#define AVR32_PEVC_TRIMR_MASK                               0xffffffff
#define AVR32_PEVC_TRIMR_OFFSET                                      0
#define AVR32_PEVC_TRIMR_SIZE                                       32
#define AVR32_PEVC_TRSCR                                             0
#define AVR32_PEVC_TRSCR0                                   0x00000070
#define AVR32_PEVC_TRSCR0_MASK                              0xffffffff
#define AVR32_PEVC_TRSCR0_RESETVALUE                        0x00000000
#define AVR32_PEVC_TRSCR0_TRSCR                                      0
#define AVR32_PEVC_TRSCR0_TRSCR_MASK                        0xffffffff
#define AVR32_PEVC_TRSCR0_TRSCR_OFFSET                               0
#define AVR32_PEVC_TRSCR0_TRSCR_SIZE                                32
#define AVR32_PEVC_TRSCR1                                   0x00000074
#define AVR32_PEVC_TRSCR1_MASK                              0xffffffff
#define AVR32_PEVC_TRSCR1_RESETVALUE                        0x00000000
#define AVR32_PEVC_TRSCR1_TRSCR                                      0
#define AVR32_PEVC_TRSCR1_TRSCR_MASK                        0xffffffff
#define AVR32_PEVC_TRSCR1_TRSCR_OFFSET                               0
#define AVR32_PEVC_TRSCR1_TRSCR_SIZE                                32
#define AVR32_PEVC_TRSCR_MASK                               0xffffffff
#define AVR32_PEVC_TRSCR_OFFSET                                      0
#define AVR32_PEVC_TRSCR_SIZE                                       32
#define AVR32_PEVC_TRSR                                              0
#define AVR32_PEVC_TRSR0                                    0x00000060
#define AVR32_PEVC_TRSR0_MASK                               0xffffffff
#define AVR32_PEVC_TRSR0_RESETVALUE                         0x00000000
#define AVR32_PEVC_TRSR0_TRSR                                        0
#define AVR32_PEVC_TRSR0_TRSR_MASK                          0xffffffff
#define AVR32_PEVC_TRSR0_TRSR_OFFSET                                 0
#define AVR32_PEVC_TRSR0_TRSR_SIZE                                  32
#define AVR32_PEVC_TRSR1                                    0x00000064
#define AVR32_PEVC_TRSR1_MASK                               0xffffffff
#define AVR32_PEVC_TRSR1_RESETVALUE                         0x00000000
#define AVR32_PEVC_TRSR1_TRSR                                        0
#define AVR32_PEVC_TRSR1_TRSR_MASK                          0xffffffff
#define AVR32_PEVC_TRSR1_TRSR_OFFSET                                 0
#define AVR32_PEVC_TRSR1_TRSR_SIZE                                  32
#define AVR32_PEVC_TRSR_MASK                                0xffffffff
#define AVR32_PEVC_TRSR_OFFSET                                       0
#define AVR32_PEVC_TRSR_SIZE                                        32
#define AVR32_PEVC_VARIANT                                          16
#define AVR32_PEVC_VARIANT_MASK                             0x000f0000
#define AVR32_PEVC_VARIANT_OFFSET                                   16
#define AVR32_PEVC_VARIANT_SIZE                                      4
#define AVR32_PEVC_VERSION                                  0x00000000
#define AVR32_PEVC_VERSION_MASK                             0x000f0fff
#define AVR32_PEVC_VERSION_OFFSET                                    0
#define AVR32_PEVC_VERSION_RESETVALUE                       0x00000100
#define AVR32_PEVC_VERSION_SIZE                                     12
#define AVR32_PEVC_VERSION_VARIANT                                  16
#define AVR32_PEVC_VERSION_VARIANT_MASK                     0x000f0000
#define AVR32_PEVC_VERSION_VARIANT_OFFSET                           16
#define AVR32_PEVC_VERSION_VARIANT_SIZE                              4
#define AVR32_PEVC_VERSION_VERSION                                   0
#define AVR32_PEVC_VERSION_VERSION_MASK                     0x00000fff
#define AVR32_PEVC_VERSION_VERSION_OFFSET                            0
#define AVR32_PEVC_VERSION_VERSION_SIZE                             12




#ifdef __AVR32_ABI_COMPILER__


typedef struct avr32_pevc_version_t {
    unsigned int                 :12;
    unsigned int variant         : 4;
    unsigned int                 : 4;
    unsigned int version         :12;
} avr32_pevc_version_t;



typedef struct avr32_pevc_parameter_t {
    unsigned int trigout         : 8;
    unsigned int evmx            : 8;
    unsigned int evs             : 8;
    unsigned int evin            : 8;
} avr32_pevc_parameter_t;



typedef struct avr32_pevc_igfdr_t {
    unsigned int                 :28;
    unsigned int igfdr           : 4;
} avr32_pevc_igfdr_t;



typedef struct avr32_pevc_chmx_t {
    unsigned int                 :23;
    unsigned int smx             : 1;
    unsigned int                 : 2;
    unsigned int evmx            : 6;
} avr32_pevc_chmx_t;



typedef struct avr32_pevc_evs_t {
    unsigned int                 :29;
    unsigned int igf             : 1;
    unsigned int evf             : 1;
    unsigned int evr             : 1;
} avr32_pevc_evs_t;



typedef struct avr32_pevc_t {
  union {
    const unsigned long                  version   ;//0x0000
    const avr32_pevc_version_t           VERSION   ;
  };
  union {
    const unsigned long                  parameter ;//0x0004
    const avr32_pevc_parameter_t         PARAMETER ;
  };
  union {
          unsigned long                  igfdr     ;//0x0008
          avr32_pevc_igfdr_t             IGFDR     ;
  };
          unsigned int                   :32       ;//0x000c
    const unsigned long                  chsr0     ;//0x0010
    const unsigned long                  chsr1     ;//0x0014
          unsigned int                   :32       ;//0x0018
          unsigned int                   :32       ;//0x001c
          unsigned long                  cher0     ;//0x0020
          unsigned long                  cher1     ;//0x0024
          unsigned int                   :32       ;//0x0028
          unsigned int                   :32       ;//0x002c
          unsigned long                  chdr0     ;//0x0030
          unsigned long                  chdr1     ;//0x0034
          unsigned int                   :32       ;//0x0038
          unsigned int                   :32       ;//0x003c
          unsigned long                  sev0      ;//0x0040
          unsigned long                  sev1      ;//0x0044
          unsigned int                   :32       ;//0x0048
          unsigned int                   :32       ;//0x004c
    const unsigned long                  busy0     ;//0x0050
    const unsigned long                  busy1     ;//0x0054
          unsigned int                   :32       ;//0x0058
          unsigned int                   :32       ;//0x005c
    const unsigned long                  trsr0     ;//0x0060
    const unsigned long                  trsr1     ;//0x0064
          unsigned int                   :32       ;//0x0068
          unsigned int                   :32       ;//0x006c
          unsigned long                  trscr0    ;//0x0070
          unsigned long                  trscr1    ;//0x0074
          unsigned int                   :32       ;//0x0078
          unsigned int                   :32       ;//0x007c
    const unsigned long                  trimr0    ;//0x0080
    const unsigned long                  trimr1    ;//0x0084
          unsigned int                   :32       ;//0x0088
          unsigned int                   :32       ;//0x008c
          unsigned long                  trier0    ;//0x0090
          unsigned long                  trier1    ;//0x0094
          unsigned int                   :32       ;//0x0098
          unsigned int                   :32       ;//0x009c
          unsigned long                  tridr0    ;//0x00a0
          unsigned long                  tridr1    ;//0x00a4
          unsigned int                   :32       ;//0x00a8
          unsigned int                   :32       ;//0x00ac
    const unsigned long                  ovsr0     ;//0x00b0
    const unsigned long                  ovsr1     ;//0x00b4
          unsigned int                   :32       ;//0x00b8
          unsigned int                   :32       ;//0x00bc
          unsigned long                  ovscr0    ;//0x00c0
          unsigned long                  ovscr1    ;//0x00c4
          unsigned int                   :32       ;//0x00c8
          unsigned int                   :32       ;//0x00cc
    const unsigned long                  ovimr0    ;//0x00d0
    const unsigned long                  ovimr1    ;//0x00d4
          unsigned int                   :32       ;//0x00d8
          unsigned int                   :32       ;//0x00dc
          unsigned long                  ovier0    ;//0x00e0
          unsigned long                  ovier1    ;//0x00e4
          unsigned int                   :32       ;//0x00e8
          unsigned int                   :32       ;//0x00ec
          unsigned long                  ovidr0    ;//0x00f0
          unsigned long                  ovidr1    ;//0x00f4
          unsigned int                   :32       ;//0x00f8
          unsigned int                   :32       ;//0x00fc
  union {
          unsigned long                  chmx      [AVR32_PEVC_TRIGOUT_BITS];//0x0100
          avr32_pevc_chmx_t              CHMX      [AVR32_PEVC_TRIGOUT_BITS];
  };
    unsigned long                        chmx_reserved[64-AVR32_PEVC_TRIGOUT_BITS]; //Padding
  union {
          unsigned long                  evs       [AVR32_PEVC_EVS_BITS];//0x0200
          avr32_pevc_evs_t               EVS       [AVR32_PEVC_EVS_BITS];
  };
    unsigned long                        evs_reserved[64-AVR32_PEVC_EVS_BITS]; //Padding
} avr32_pevc_t;



/*#ifdef __AVR32_ABI_COMPILER__*/
#endif

/*#ifdef AVR32_PEVC_100_H_INCLUDED*/
#endif

