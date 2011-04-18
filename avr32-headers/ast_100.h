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
#ifndef AVR32_AST_100_H_INCLUDED
#define AVR32_AST_100_H_INCLUDED

#define AVR32_AST_H_VERSION 100

#include "avr32/abi.h"


/*
 Note to user:

 The following defines are always generated:
 - Register offset: AVR32_AST_<register>
 - Bitfield mask:   AVR32_AST_<register>_<bitfield>
 - Bitfield offset: AVR32_AST_<register>_<bitfield>_OFFSET
 - Bitfield size:   AVR32_AST_<register>_<bitfield>_SIZE
 - Bitfield values: AVR32_AST_<register>_<bitfield>_<value name>

 The following defines are generated if they don't cause ambiguities,
 i.e. the name is unique, or all values with that name are the same.
 - Bitfield mask:   AVR32_AST_<bitfield>
 - Bitfield offset: AVR32_AST_<bitfield>_OFFSET
 - Bitfield size:   AVR32_AST_<bitfield>_SIZE
 - Bitfield values: AVR32_AST_<bitfield>_<value name>
 - Bitfield values: AVR32_AST_<value name>

 All defines are sorted alphabetically.
*/


#define AVR32_AST_32_KHZ_CLOCK                             0x00000001
#define AVR32_AST_ALARM0                                            8
#define AVR32_AST_ALARM0_MASK                              0x00000100
#define AVR32_AST_ALARM0_OFFSET                                     8
#define AVR32_AST_ALARM0_SIZE                                       1
#define AVR32_AST_ALARM1                                            9
#define AVR32_AST_ALARM1_MASK                              0x00000200
#define AVR32_AST_ALARM1_OFFSET                                     9
#define AVR32_AST_ALARM1_SIZE                                       1
#define AVR32_AST_AR0                                      0x00000020
#define AVR32_AST_AR0_VALUE                                         0
#define AVR32_AST_AR0_VALUE_MASK                           0xffffffff
#define AVR32_AST_AR0_VALUE_OFFSET                                  0
#define AVR32_AST_AR0_VALUE_SIZE                                   32
#define AVR32_AST_AR1                                      0x00000024
#define AVR32_AST_AR1_VALUE                                         0
#define AVR32_AST_AR1_VALUE_MASK                           0xffffffff
#define AVR32_AST_AR1_VALUE_OFFSET                                  0
#define AVR32_AST_AR1_VALUE_SIZE                                   32
#define AVR32_AST_BUSY                                             24
#define AVR32_AST_BUSY_MASK                                0x01000000
#define AVR32_AST_BUSY_OFFSET                                      24
#define AVR32_AST_BUSY_SIZE                                         1
#define AVR32_AST_CA0                                               8
#define AVR32_AST_CA0_MASK                                 0x00000100
#define AVR32_AST_CA0_OFFSET                                        8
#define AVR32_AST_CA0_SIZE                                          1
#define AVR32_AST_CA1                                               9
#define AVR32_AST_CA1_MASK                                 0x00000200
#define AVR32_AST_CA1_OFFSET                                        9
#define AVR32_AST_CA1_SIZE                                          1
#define AVR32_AST_CEN                                               0
#define AVR32_AST_CEN_MASK                                 0x00000001
#define AVR32_AST_CEN_OFFSET                                        0
#define AVR32_AST_CEN_SIZE                                          1
#define AVR32_AST_CLK_BUSY                                         28
#define AVR32_AST_CLK_BUSY_MASK                            0x10000000
#define AVR32_AST_CLK_BUSY_OFFSET                                  28
#define AVR32_AST_CLK_BUSY_SIZE                                     1
#define AVR32_AST_CLK_READY                                        29
#define AVR32_AST_CLK_READY_MASK                           0x20000000
#define AVR32_AST_CLK_READY_OFFSET                                 29
#define AVR32_AST_CLK_READY_SIZE                                    1
#define AVR32_AST_CLOCK                                    0x00000040
#define AVR32_AST_CLOCK_CEN                                         0
#define AVR32_AST_CLOCK_CEN_MASK                           0x00000001
#define AVR32_AST_CLOCK_CEN_OFFSET                                  0
#define AVR32_AST_CLOCK_CEN_SIZE                                    1
#define AVR32_AST_CLOCK_CSSEL                                       8
#define AVR32_AST_CLOCK_CSSEL_32_KHZ_CLOCK                 0x00000001
#define AVR32_AST_CLOCK_CSSEL_GCLK                         0x00000003
#define AVR32_AST_CLOCK_CSSEL_MASK                         0x00000300
#define AVR32_AST_CLOCK_CSSEL_OFFSET                                8
#define AVR32_AST_CLOCK_CSSEL_PB_CLOCK                     0x00000002
#define AVR32_AST_CLOCK_CSSEL_SIZE                                  2
#define AVR32_AST_CLOCK_CSSEL_SLOW_CLOCK                   0x00000000
#define AVR32_AST_CR                                       0x00000000
#define AVR32_AST_CR_CA0                                            8
#define AVR32_AST_CR_CA0_MASK                              0x00000100
#define AVR32_AST_CR_CA0_OFFSET                                     8
#define AVR32_AST_CR_CA0_SIZE                                       1
#define AVR32_AST_CR_CA1                                            9
#define AVR32_AST_CR_CA1_MASK                              0x00000200
#define AVR32_AST_CR_CA1_OFFSET                                     9
#define AVR32_AST_CR_CA1_SIZE                                       1
#define AVR32_AST_CR_EN                                             0
#define AVR32_AST_CR_EN_MASK                               0x00000001
#define AVR32_AST_CR_EN_OFFSET                                      0
#define AVR32_AST_CR_EN_SIZE                                        1
#define AVR32_AST_CR_PCLR                                           1
#define AVR32_AST_CR_PCLR_MASK                             0x00000002
#define AVR32_AST_CR_PCLR_OFFSET                                    1
#define AVR32_AST_CR_PCLR_SIZE                                      1
#define AVR32_AST_CR_PSEL                                          16
#define AVR32_AST_CR_PSEL_MASK                             0x000f0000
#define AVR32_AST_CR_PSEL_OFFSET                                   16
#define AVR32_AST_CR_PSEL_SIZE                                      4
#define AVR32_AST_CSSEL                                             8
#define AVR32_AST_CSSEL_32_KHZ_CLOCK                       0x00000001
#define AVR32_AST_CSSEL_GCLK                               0x00000003
#define AVR32_AST_CSSEL_MASK                               0x00000300
#define AVR32_AST_CSSEL_OFFSET                                      8
#define AVR32_AST_CSSEL_PB_CLOCK                           0x00000002
#define AVR32_AST_CSSEL_SIZE                                        2
#define AVR32_AST_CSSEL_SLOW_CLOCK                         0x00000000
#define AVR32_AST_CV                                       0x00000004
#define AVR32_AST_CV_VALUE                                          0
#define AVR32_AST_CV_VALUE_MASK                            0xffffffff
#define AVR32_AST_CV_VALUE_OFFSET                                   0
#define AVR32_AST_CV_VALUE_SIZE                                    32
#define AVR32_AST_EN                                                0
#define AVR32_AST_EN_MASK                                  0x00000001
#define AVR32_AST_EN_OFFSET                                         0
#define AVR32_AST_EN_SIZE                                           1
#define AVR32_AST_GCLK                                     0x00000003
#define AVR32_AST_IDR                                      0x00000014
#define AVR32_AST_IDR_ALARM0                                        8
#define AVR32_AST_IDR_ALARM0_MASK                          0x00000100
#define AVR32_AST_IDR_ALARM0_OFFSET                                 8
#define AVR32_AST_IDR_ALARM0_SIZE                                   1
#define AVR32_AST_IDR_ALARM1                                        9
#define AVR32_AST_IDR_ALARM1_MASK                          0x00000200
#define AVR32_AST_IDR_ALARM1_OFFSET                                 9
#define AVR32_AST_IDR_ALARM1_SIZE                                   1
#define AVR32_AST_IDR_CLK_READY                                    29
#define AVR32_AST_IDR_CLK_READY_MASK                       0x20000000
#define AVR32_AST_IDR_CLK_READY_OFFSET                             29
#define AVR32_AST_IDR_CLK_READY_SIZE                                1
#define AVR32_AST_IDR_OVF                                           0
#define AVR32_AST_IDR_OVF_MASK                             0x00000001
#define AVR32_AST_IDR_OVF_OFFSET                                    0
#define AVR32_AST_IDR_OVF_SIZE                                      1
#define AVR32_AST_IDR_PER0                                         16
#define AVR32_AST_IDR_PER0_MASK                            0x00010000
#define AVR32_AST_IDR_PER0_OFFSET                                  16
#define AVR32_AST_IDR_PER0_SIZE                                     1
#define AVR32_AST_IDR_PER1                                         17
#define AVR32_AST_IDR_PER1_MASK                            0x00020000
#define AVR32_AST_IDR_PER1_OFFSET                                  17
#define AVR32_AST_IDR_PER1_SIZE                                     1
#define AVR32_AST_IDR_READY                                        25
#define AVR32_AST_IDR_READY_MASK                           0x02000000
#define AVR32_AST_IDR_READY_OFFSET                                 25
#define AVR32_AST_IDR_READY_SIZE                                    1
#define AVR32_AST_IER                                      0x00000010
#define AVR32_AST_IER_ALARM0                                        8
#define AVR32_AST_IER_ALARM0_MASK                          0x00000100
#define AVR32_AST_IER_ALARM0_OFFSET                                 8
#define AVR32_AST_IER_ALARM0_SIZE                                   1
#define AVR32_AST_IER_ALARM1                                        9
#define AVR32_AST_IER_ALARM1_MASK                          0x00000200
#define AVR32_AST_IER_ALARM1_OFFSET                                 9
#define AVR32_AST_IER_ALARM1_SIZE                                   1
#define AVR32_AST_IER_CLK_READY                                    29
#define AVR32_AST_IER_CLK_READY_MASK                       0x20000000
#define AVR32_AST_IER_CLK_READY_OFFSET                             29
#define AVR32_AST_IER_CLK_READY_SIZE                                1
#define AVR32_AST_IER_OVF                                           0
#define AVR32_AST_IER_OVF_MASK                             0x00000001
#define AVR32_AST_IER_OVF_OFFSET                                    0
#define AVR32_AST_IER_OVF_SIZE                                      1
#define AVR32_AST_IER_PER0                                         16
#define AVR32_AST_IER_PER0_MASK                            0x00010000
#define AVR32_AST_IER_PER0_OFFSET                                  16
#define AVR32_AST_IER_PER0_SIZE                                     1
#define AVR32_AST_IER_PER1                                         17
#define AVR32_AST_IER_PER1_MASK                            0x00020000
#define AVR32_AST_IER_PER1_OFFSET                                  17
#define AVR32_AST_IER_PER1_SIZE                                     1
#define AVR32_AST_IER_READY                                        25
#define AVR32_AST_IER_READY_MASK                           0x02000000
#define AVR32_AST_IER_READY_OFFSET                                 25
#define AVR32_AST_IER_READY_SIZE                                    1
#define AVR32_AST_IMR                                      0x00000018
#define AVR32_AST_IMR_ALARM0                                        8
#define AVR32_AST_IMR_ALARM0_MASK                          0x00000100
#define AVR32_AST_IMR_ALARM0_OFFSET                                 8
#define AVR32_AST_IMR_ALARM0_SIZE                                   1
#define AVR32_AST_IMR_ALARM1                                        9
#define AVR32_AST_IMR_ALARM1_MASK                          0x00000200
#define AVR32_AST_IMR_ALARM1_OFFSET                                 9
#define AVR32_AST_IMR_ALARM1_SIZE                                   1
#define AVR32_AST_IMR_CLK_READY                                    29
#define AVR32_AST_IMR_CLK_READY_MASK                       0x20000000
#define AVR32_AST_IMR_CLK_READY_OFFSET                             29
#define AVR32_AST_IMR_CLK_READY_SIZE                                1
#define AVR32_AST_IMR_OVF                                           0
#define AVR32_AST_IMR_OVF_MASK                             0x00000001
#define AVR32_AST_IMR_OVF_OFFSET                                    0
#define AVR32_AST_IMR_OVF_SIZE                                      1
#define AVR32_AST_IMR_PER0                                         16
#define AVR32_AST_IMR_PER0_MASK                            0x00010000
#define AVR32_AST_IMR_PER0_OFFSET                                  16
#define AVR32_AST_IMR_PER0_SIZE                                     1
#define AVR32_AST_IMR_PER1                                         17
#define AVR32_AST_IMR_PER1_MASK                            0x00020000
#define AVR32_AST_IMR_PER1_OFFSET                                  17
#define AVR32_AST_IMR_PER1_SIZE                                     1
#define AVR32_AST_IMR_READY                                        25
#define AVR32_AST_IMR_READY_MASK                           0x02000000
#define AVR32_AST_IMR_READY_OFFSET                                 25
#define AVR32_AST_IMR_READY_SIZE                                    1
#define AVR32_AST_INSEL                                             0
#define AVR32_AST_INSEL_OFFSET                                      0
#define AVR32_AST_OVF                                               0
#define AVR32_AST_OVF_MASK                                 0x00000001
#define AVR32_AST_OVF_OFFSET                                        0
#define AVR32_AST_OVF_SIZE                                          1
#define AVR32_AST_PB_CLOCK                                 0x00000002
#define AVR32_AST_PCLR                                              1
#define AVR32_AST_PCLR_MASK                                0x00000002
#define AVR32_AST_PCLR_OFFSET                                       1
#define AVR32_AST_PCLR_SIZE                                         1
#define AVR32_AST_PER0                                             16
#define AVR32_AST_PER0_MASK                                0x00010000
#define AVR32_AST_PER0_OFFSET                                      16
#define AVR32_AST_PER0_SIZE                                         1
#define AVR32_AST_PER1                                             17
#define AVR32_AST_PER1_MASK                                0x00020000
#define AVR32_AST_PER1_OFFSET                                      17
#define AVR32_AST_PER1_SIZE                                         1
#define AVR32_AST_PIR0                                     0x00000030
#define AVR32_AST_PIR0_INSEL                                        0
#define AVR32_AST_PIR0_INSEL_MASK                          0x0000000f
#define AVR32_AST_PIR0_INSEL_OFFSET                                 0
#define AVR32_AST_PIR0_INSEL_SIZE                                   4
#define AVR32_AST_PIR1                                     0x00000034
#define AVR32_AST_PIR1_INSEL                                        0
#define AVR32_AST_PIR1_INSEL_MASK                          0xffffffff
#define AVR32_AST_PIR1_INSEL_OFFSET                                 0
#define AVR32_AST_PIR1_INSEL_SIZE                                  32
#define AVR32_AST_PSEL                                             16
#define AVR32_AST_PSEL_MASK                                0x000f0000
#define AVR32_AST_PSEL_OFFSET                                      16
#define AVR32_AST_PSEL_SIZE                                         4
#define AVR32_AST_READY                                            25
#define AVR32_AST_READY_MASK                               0x02000000
#define AVR32_AST_READY_OFFSET                                     25
#define AVR32_AST_READY_SIZE                                        1
#define AVR32_AST_SCR                                      0x0000000c
#define AVR32_AST_SCR_ALARM0                                        8
#define AVR32_AST_SCR_ALARM0_MASK                          0x00000100
#define AVR32_AST_SCR_ALARM0_OFFSET                                 8
#define AVR32_AST_SCR_ALARM0_SIZE                                   1
#define AVR32_AST_SCR_ALARM1                                        9
#define AVR32_AST_SCR_ALARM1_MASK                          0x00000200
#define AVR32_AST_SCR_ALARM1_OFFSET                                 9
#define AVR32_AST_SCR_ALARM1_SIZE                                   1
#define AVR32_AST_SCR_CLK_READY                                    29
#define AVR32_AST_SCR_CLK_READY_MASK                       0x20000000
#define AVR32_AST_SCR_CLK_READY_OFFSET                             29
#define AVR32_AST_SCR_CLK_READY_SIZE                                1
#define AVR32_AST_SCR_OVF                                           0
#define AVR32_AST_SCR_OVF_MASK                             0x00000001
#define AVR32_AST_SCR_OVF_OFFSET                                    0
#define AVR32_AST_SCR_OVF_SIZE                                      1
#define AVR32_AST_SCR_PER0                                         16
#define AVR32_AST_SCR_PER0_MASK                            0x00010000
#define AVR32_AST_SCR_PER0_OFFSET                                  16
#define AVR32_AST_SCR_PER0_SIZE                                     1
#define AVR32_AST_SCR_PER1                                         17
#define AVR32_AST_SCR_PER1_MASK                            0x00020000
#define AVR32_AST_SCR_PER1_OFFSET                                  17
#define AVR32_AST_SCR_PER1_SIZE                                     1
#define AVR32_AST_SCR_READY                                        25
#define AVR32_AST_SCR_READY_MASK                           0x02000000
#define AVR32_AST_SCR_READY_OFFSET                                 25
#define AVR32_AST_SCR_READY_SIZE                                    1
#define AVR32_AST_SLOW_CLOCK                               0x00000000
#define AVR32_AST_SR                                       0x00000008
#define AVR32_AST_SR_ALARM0                                         8
#define AVR32_AST_SR_ALARM0_MASK                           0x00000100
#define AVR32_AST_SR_ALARM0_OFFSET                                  8
#define AVR32_AST_SR_ALARM0_SIZE                                    1
#define AVR32_AST_SR_ALARM1                                         9
#define AVR32_AST_SR_ALARM1_MASK                           0x00000200
#define AVR32_AST_SR_ALARM1_OFFSET                                  9
#define AVR32_AST_SR_ALARM1_SIZE                                    1
#define AVR32_AST_SR_BUSY                                          24
#define AVR32_AST_SR_BUSY_MASK                             0x01000000
#define AVR32_AST_SR_BUSY_OFFSET                                   24
#define AVR32_AST_SR_BUSY_SIZE                                      1
#define AVR32_AST_SR_CLK_BUSY                                      28
#define AVR32_AST_SR_CLK_BUSY_MASK                         0x10000000
#define AVR32_AST_SR_CLK_BUSY_OFFSET                               28
#define AVR32_AST_SR_CLK_BUSY_SIZE                                  1
#define AVR32_AST_SR_CLK_READY                                     29
#define AVR32_AST_SR_CLK_READY_MASK                        0x20000000
#define AVR32_AST_SR_CLK_READY_OFFSET                              29
#define AVR32_AST_SR_CLK_READY_SIZE                                 1
#define AVR32_AST_SR_OVF                                            0
#define AVR32_AST_SR_OVF_MASK                              0x00000001
#define AVR32_AST_SR_OVF_OFFSET                                     0
#define AVR32_AST_SR_OVF_SIZE                                       1
#define AVR32_AST_SR_PER0                                          16
#define AVR32_AST_SR_PER0_MASK                             0x00010000
#define AVR32_AST_SR_PER0_OFFSET                                   16
#define AVR32_AST_SR_PER0_SIZE                                      1
#define AVR32_AST_SR_PER1                                          17
#define AVR32_AST_SR_PER1_MASK                             0x00020000
#define AVR32_AST_SR_PER1_OFFSET                                   17
#define AVR32_AST_SR_PER1_SIZE                                      1
#define AVR32_AST_SR_READY                                         25
#define AVR32_AST_SR_READY_MASK                            0x02000000
#define AVR32_AST_SR_READY_OFFSET                                  25
#define AVR32_AST_SR_READY_SIZE                                     1
#define AVR32_AST_VALUE                                             0
#define AVR32_AST_VALUE_MASK                               0xffffffff
#define AVR32_AST_VALUE_OFFSET                                      0
#define AVR32_AST_VALUE_SIZE                                       32
#define AVR32_AST_VERSION                                  0x000000fc
#define AVR32_AST_VERSION_MASK                             0x00000fff
#define AVR32_AST_VERSION_OFFSET                                    0
#define AVR32_AST_VERSION_SIZE                                     12
#define AVR32_AST_VERSION_VERSION                                   0
#define AVR32_AST_VERSION_VERSION_MASK                     0x00000fff
#define AVR32_AST_VERSION_VERSION_OFFSET                            0
#define AVR32_AST_VERSION_VERSION_SIZE                             12
#define AVR32_AST_WER                                      0x0000001c
#define AVR32_AST_WER_ALARM0                                        8
#define AVR32_AST_WER_ALARM0_MASK                          0x00000100
#define AVR32_AST_WER_ALARM0_OFFSET                                 8
#define AVR32_AST_WER_ALARM0_SIZE                                   1
#define AVR32_AST_WER_ALARM1                                        9
#define AVR32_AST_WER_ALARM1_MASK                          0x00000200
#define AVR32_AST_WER_ALARM1_OFFSET                                 9
#define AVR32_AST_WER_ALARM1_SIZE                                   1
#define AVR32_AST_WER_OVF                                           0
#define AVR32_AST_WER_OVF_MASK                             0x00000001
#define AVR32_AST_WER_OVF_OFFSET                                    0
#define AVR32_AST_WER_OVF_SIZE                                      1
#define AVR32_AST_WER_PER0                                         16
#define AVR32_AST_WER_PER0_MASK                            0x00010000
#define AVR32_AST_WER_PER0_OFFSET                                  16
#define AVR32_AST_WER_PER0_SIZE                                     1
#define AVR32_AST_WER_PER1                                         17
#define AVR32_AST_WER_PER1_MASK                            0x00020000
#define AVR32_AST_WER_PER1_OFFSET                                  17
#define AVR32_AST_WER_PER1_SIZE                                     1




#ifdef __AVR32_ABI_COMPILER__


typedef struct avr32_ast_cr_t {
    unsigned int                 :12;
    unsigned int psel            : 4;
    unsigned int                 : 6;
    unsigned int ca1             : 1;
    unsigned int ca0             : 1;
    unsigned int                 : 6;
    unsigned int pclr            : 1;
    unsigned int en              : 1;
} avr32_ast_cr_t;



typedef struct avr32_ast_sr_t {
    unsigned int                 : 2;
    unsigned int clk_ready       : 1;
    unsigned int clk_busy        : 1;
    unsigned int                 : 2;
    unsigned int ready           : 1;
    unsigned int busy            : 1;
    unsigned int                 : 6;
    unsigned int per1            : 1;
    unsigned int per0            : 1;
    unsigned int                 : 6;
    unsigned int alarm1          : 1;
    unsigned int alarm0          : 1;
    unsigned int                 : 7;
    unsigned int ovf             : 1;
} avr32_ast_sr_t;



typedef struct avr32_ast_scr_t {
    unsigned int                 : 2;
    unsigned int clk_ready       : 1;
    unsigned int                 : 3;
    unsigned int ready           : 1;
    unsigned int                 : 7;
    unsigned int per1            : 1;
    unsigned int per0            : 1;
    unsigned int                 : 6;
    unsigned int alarm1          : 1;
    unsigned int alarm0          : 1;
    unsigned int                 : 7;
    unsigned int ovf             : 1;
} avr32_ast_scr_t;



typedef struct avr32_ast_ier_t {
    unsigned int                 : 2;
    unsigned int clk_ready       : 1;
    unsigned int                 : 3;
    unsigned int ready           : 1;
    unsigned int                 : 7;
    unsigned int per1            : 1;
    unsigned int per0            : 1;
    unsigned int                 : 6;
    unsigned int alarm1          : 1;
    unsigned int alarm0          : 1;
    unsigned int                 : 7;
    unsigned int ovf             : 1;
} avr32_ast_ier_t;



typedef struct avr32_ast_idr_t {
    unsigned int                 : 2;
    unsigned int clk_ready       : 1;
    unsigned int                 : 3;
    unsigned int ready           : 1;
    unsigned int                 : 7;
    unsigned int per1            : 1;
    unsigned int per0            : 1;
    unsigned int                 : 6;
    unsigned int alarm1          : 1;
    unsigned int alarm0          : 1;
    unsigned int                 : 7;
    unsigned int ovf             : 1;
} avr32_ast_idr_t;



typedef struct avr32_ast_imr_t {
    unsigned int                 : 2;
    unsigned int clk_ready       : 1;
    unsigned int                 : 3;
    unsigned int ready           : 1;
    unsigned int                 : 7;
    unsigned int per1            : 1;
    unsigned int per0            : 1;
    unsigned int                 : 6;
    unsigned int alarm1          : 1;
    unsigned int alarm0          : 1;
    unsigned int                 : 7;
    unsigned int ovf             : 1;
} avr32_ast_imr_t;



typedef struct avr32_ast_wer_t {
    unsigned int                 :14;
    unsigned int per1            : 1;
    unsigned int per0            : 1;
    unsigned int                 : 6;
    unsigned int alarm1          : 1;
    unsigned int alarm0          : 1;
    unsigned int                 : 7;
    unsigned int ovf             : 1;
} avr32_ast_wer_t;



typedef struct avr32_ast_pir0_t {
    unsigned int                 :28;
    unsigned int insel           : 4;
} avr32_ast_pir0_t;



typedef struct avr32_ast_pir1_t {
    unsigned int                 :28;
    unsigned int insel           : 4;
} avr32_ast_pir1_t;



typedef struct avr32_ast_clock_t {
    unsigned int                 :22;
    unsigned int cssel           : 2;
    unsigned int                 : 7;
    unsigned int cen             : 1;
} avr32_ast_clock_t;



typedef struct avr32_ast_version_t {
    unsigned int                 :20;
    unsigned int version         :12;
} avr32_ast_version_t;



typedef struct avr32_ast_t {
  union {
          unsigned long                  cr        ;//0x0000
          avr32_ast_cr_t                 CR        ;
  };
          unsigned long                  cv        ;//0x0004
  union {
    const unsigned long                  sr        ;//0x0008
    const avr32_ast_sr_t                 SR        ;
  };
  union {
          unsigned long                  scr       ;//0x000c
          avr32_ast_scr_t                SCR       ;
  };
  union {
          unsigned long                  ier       ;//0x0010
          avr32_ast_ier_t                IER       ;
  };
  union {
          unsigned long                  idr       ;//0x0014
          avr32_ast_idr_t                IDR       ;
  };
  union {
    const unsigned long                  imr       ;//0x0018
    const avr32_ast_imr_t                IMR       ;
  };
  union {
          unsigned long                  wer       ;//0x001c
          avr32_ast_wer_t                WER       ;
  };
          unsigned long                  ar0       ;//0x0020
          unsigned long                  ar1       ;//0x0024
          unsigned int                   :32       ;//0x0028
          unsigned int                   :32       ;//0x002c
  union {
          unsigned long                  pir0      ;//0x0030
          avr32_ast_pir0_t               PIR0      ;
  };
  union {
          unsigned long                  pir1      ;//0x0034
          avr32_ast_pir1_t               PIR1      ;
  };
          unsigned int                   :32       ;//0x0038
          unsigned int                   :32       ;//0x003c
  union {
          unsigned long                  clock     ;//0x0040
          avr32_ast_clock_t              CLOCK     ;
  };
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
  union {
    const unsigned long                  version   ;//0x00fc
    const avr32_ast_version_t            VERSION   ;
  };
} avr32_ast_t;



/*#ifdef __AVR32_ABI_COMPILER__*/
#endif

/*#ifdef AVR32_AST_100_H_INCLUDED*/
#endif

