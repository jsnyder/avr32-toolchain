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
#ifndef AVR32_PWMA_100_H_INCLUDED
#define AVR32_PWMA_100_H_INCLUDED

#define AVR32_PWMA_H_VERSION 100

#include "avr32/abi.h"


/*
 Note to user:

 The following defines are always generated:
 - Register offset: AVR32_PWMA_<register>
 - Bitfield mask:   AVR32_PWMA_<register>_<bitfield>
 - Bitfield offset: AVR32_PWMA_<register>_<bitfield>_OFFSET
 - Bitfield size:   AVR32_PWMA_<register>_<bitfield>_SIZE
 - Bitfield values: AVR32_PWMA_<register>_<bitfield>_<value name>

 The following defines are generated if they don't cause ambiguities,
 i.e. the name is unique, or all values with that name are the same.
 - Bitfield mask:   AVR32_PWMA_<bitfield>
 - Bitfield offset: AVR32_PWMA_<bitfield>_OFFSET
 - Bitfield size:   AVR32_PWMA_<bitfield>_SIZE
 - Bitfield values: AVR32_PWMA_<bitfield>_<value name>
 - Bitfield values: AVR32_PWMA_<value name>

 All defines are sorted alphabetically.
*/


#define AVR32_PWMA_BUSY                                              3
#define AVR32_PWMA_BUSY_MASK                                0x00000008
#define AVR32_PWMA_BUSY_OFFSET                                       3
#define AVR32_PWMA_BUSY_SIZE                                         1
#define AVR32_PWMA_CHANNELS                                          0
#define AVR32_PWMA_CHANNELS_MASK                            0x000000ff
#define AVR32_PWMA_CHANNELS_OFFSET                                   0
#define AVR32_PWMA_CHANNELS_SIZE                                     8
#define AVR32_PWMA_CHEE                                              0
#define AVR32_PWMA_CHEER0                                   0x00000038
#define AVR32_PWMA_CHEER0_CHEE                                       0
#define AVR32_PWMA_CHEER0_CHEE_MASK                         0xffffffff
#define AVR32_PWMA_CHEER0_CHEE_OFFSET                                0
#define AVR32_PWMA_CHEER0_CHEE_SIZE                                 32
#define AVR32_PWMA_CHEER0_MASK                              0xffffffff
#define AVR32_PWMA_CHEER0_RESETVALUE                        0x00000000
#define AVR32_PWMA_CHEER1                                   0x00000048
#define AVR32_PWMA_CHEER1_CHEE                                       0
#define AVR32_PWMA_CHEER1_CHEE_MASK                         0xffffffff
#define AVR32_PWMA_CHEER1_CHEE_OFFSET                                0
#define AVR32_PWMA_CHEER1_CHEE_SIZE                                 32
#define AVR32_PWMA_CHEER1_MASK                              0xffffffff
#define AVR32_PWMA_CHEER1_RESETVALUE                        0x00000000
#define AVR32_PWMA_CHEE_MASK                                0xffffffff
#define AVR32_PWMA_CHEE_OFFSET                                       0
#define AVR32_PWMA_CHEE_SIZE                                        32
#define AVR32_PWMA_CR                                       0x00000000
#define AVR32_PWMA_CR_EN                                             0
#define AVR32_PWMA_CR_EN_MASK                               0x00000001
#define AVR32_PWMA_CR_EN_OFFSET                                      0
#define AVR32_PWMA_CR_EN_SIZE                                        1
#define AVR32_PWMA_CR_MASK                                  0x001fff03
#define AVR32_PWMA_CR_RESETVALUE                            0x00000000
#define AVR32_PWMA_CR_SPREAD                                        16
#define AVR32_PWMA_CR_SPREAD_MASK                           0x001f0000
#define AVR32_PWMA_CR_SPREAD_OFFSET                                 16
#define AVR32_PWMA_CR_SPREAD_SIZE                                    5
#define AVR32_PWMA_CR_TCLR                                           1
#define AVR32_PWMA_CR_TCLR_MASK                             0x00000002
#define AVR32_PWMA_CR_TCLR_OFFSET                                    1
#define AVR32_PWMA_CR_TCLR_SIZE                                      1
#define AVR32_PWMA_CR_TOP                                            8
#define AVR32_PWMA_CR_TOP_MASK                              0x0000ff00
#define AVR32_PWMA_CR_TOP_OFFSET                                     8
#define AVR32_PWMA_CR_TOP_SIZE                                       8
#define AVR32_PWMA_DUTY                                              0
#define AVR32_PWMA_DUTY0                                             0
#define AVR32_PWMA_DUTY0_MASK                               0x000000ff
#define AVR32_PWMA_DUTY0_OFFSET                                      0
#define AVR32_PWMA_DUTY0_SIZE                                        8
#define AVR32_PWMA_DUTY1                                             8
#define AVR32_PWMA_DUTY1_MASK                               0x0000ff00
#define AVR32_PWMA_DUTY1_OFFSET                                      8
#define AVR32_PWMA_DUTY1_SIZE                                        8
#define AVR32_PWMA_DUTY2                                            16
#define AVR32_PWMA_DUTY2_MASK                               0x00ff0000
#define AVR32_PWMA_DUTY2_OFFSET                                     16
#define AVR32_PWMA_DUTY2_SIZE                                        8
#define AVR32_PWMA_DUTY3                                            24
#define AVR32_PWMA_DUTY3_MASK                               0xff000000
#define AVR32_PWMA_DUTY3_OFFSET                                     24
#define AVR32_PWMA_DUTY3_SIZE                                        8
#define AVR32_PWMA_DUTY_MASK                                0x000000ff
#define AVR32_PWMA_DUTY_OFFSET                                       0
#define AVR32_PWMA_DUTY_SIZE                                         8
#define AVR32_PWMA_EN                                                0
#define AVR32_PWMA_EN_MASK                                  0x00000001
#define AVR32_PWMA_EN_OFFSET                                         0
#define AVR32_PWMA_EN_SIZE                                           1
#define AVR32_PWMA_IDR                                      0x00000014
#define AVR32_PWMA_IDR_MASK                                 0x00000005
#define AVR32_PWMA_IDR_READY                                         2
#define AVR32_PWMA_IDR_READY_MASK                           0x00000004
#define AVR32_PWMA_IDR_READY_OFFSET                                  2
#define AVR32_PWMA_IDR_READY_SIZE                                    1
#define AVR32_PWMA_IDR_RESETVALUE                           0x00000000
#define AVR32_PWMA_IDR_TOFL                                          0
#define AVR32_PWMA_IDR_TOFL_MASK                            0x00000001
#define AVR32_PWMA_IDR_TOFL_OFFSET                                   0
#define AVR32_PWMA_IDR_TOFL_SIZE                                     1
#define AVR32_PWMA_IER                                      0x00000010
#define AVR32_PWMA_IER_MASK                                 0x00000005
#define AVR32_PWMA_IER_READY                                         2
#define AVR32_PWMA_IER_READY_MASK                           0x00000004
#define AVR32_PWMA_IER_READY_OFFSET                                  2
#define AVR32_PWMA_IER_READY_SIZE                                    1
#define AVR32_PWMA_IER_RESETVALUE                           0x00000000
#define AVR32_PWMA_IER_TOFL                                          0
#define AVR32_PWMA_IER_TOFL_MASK                            0x00000001
#define AVR32_PWMA_IER_TOFL_OFFSET                                   0
#define AVR32_PWMA_IER_TOFL_SIZE                                     1
#define AVR32_PWMA_IMCHSEL                                  0x0000000c
#define AVR32_PWMA_IMCHSEL_MASK                             0xffffffff
#define AVR32_PWMA_IMCHSEL_RESETVALUE                       0x00000000
#define AVR32_PWMA_IMCHSEL_SEL0                                      0
#define AVR32_PWMA_IMCHSEL_SEL0_MASK                        0x000000ff
#define AVR32_PWMA_IMCHSEL_SEL0_OFFSET                               0
#define AVR32_PWMA_IMCHSEL_SEL0_SIZE                                 8
#define AVR32_PWMA_IMCHSEL_SEL1                                      8
#define AVR32_PWMA_IMCHSEL_SEL1_MASK                        0x0000ff00
#define AVR32_PWMA_IMCHSEL_SEL1_OFFSET                               8
#define AVR32_PWMA_IMCHSEL_SEL1_SIZE                                 8
#define AVR32_PWMA_IMCHSEL_SEL2                                     16
#define AVR32_PWMA_IMCHSEL_SEL2_MASK                        0x00ff0000
#define AVR32_PWMA_IMCHSEL_SEL2_OFFSET                              16
#define AVR32_PWMA_IMCHSEL_SEL2_SIZE                                 8
#define AVR32_PWMA_IMCHSEL_SEL3                                     24
#define AVR32_PWMA_IMCHSEL_SEL3_MASK                        0xff000000
#define AVR32_PWMA_IMCHSEL_SEL3_OFFSET                              24
#define AVR32_PWMA_IMCHSEL_SEL3_SIZE                                 8
#define AVR32_PWMA_IMDUTY                                   0x00000008
#define AVR32_PWMA_IMDUTY_DUTY0                                      0
#define AVR32_PWMA_IMDUTY_DUTY0_MASK                        0x000000ff
#define AVR32_PWMA_IMDUTY_DUTY0_OFFSET                               0
#define AVR32_PWMA_IMDUTY_DUTY0_SIZE                                 8
#define AVR32_PWMA_IMDUTY_DUTY1                                      8
#define AVR32_PWMA_IMDUTY_DUTY1_MASK                        0x0000ff00
#define AVR32_PWMA_IMDUTY_DUTY1_OFFSET                               8
#define AVR32_PWMA_IMDUTY_DUTY1_SIZE                                 8
#define AVR32_PWMA_IMDUTY_DUTY2                                     16
#define AVR32_PWMA_IMDUTY_DUTY2_MASK                        0x00ff0000
#define AVR32_PWMA_IMDUTY_DUTY2_OFFSET                              16
#define AVR32_PWMA_IMDUTY_DUTY2_SIZE                                 8
#define AVR32_PWMA_IMDUTY_DUTY3                                     24
#define AVR32_PWMA_IMDUTY_DUTY3_MASK                        0xff000000
#define AVR32_PWMA_IMDUTY_DUTY3_OFFSET                              24
#define AVR32_PWMA_IMDUTY_DUTY3_SIZE                                 8
#define AVR32_PWMA_IMDUTY_MASK                              0xffffffff
#define AVR32_PWMA_IMDUTY_RESETVALUE                        0x00000000
#define AVR32_PWMA_IMR                                      0x00000018
#define AVR32_PWMA_IMR_MASK                                 0x00000005
#define AVR32_PWMA_IMR_READY                                         2
#define AVR32_PWMA_IMR_READY_MASK                           0x00000004
#define AVR32_PWMA_IMR_READY_OFFSET                                  2
#define AVR32_PWMA_IMR_READY_SIZE                                    1
#define AVR32_PWMA_IMR_RESETVALUE                           0x00000000
#define AVR32_PWMA_IMR_TOFL                                          0
#define AVR32_PWMA_IMR_TOFL_MASK                            0x00000001
#define AVR32_PWMA_IMR_TOFL_OFFSET                                   0
#define AVR32_PWMA_IMR_TOFL_SIZE                                     1
#define AVR32_PWMA_ISCHSET0                                 0x00000030
#define AVR32_PWMA_ISCHSET0_MASK                            0xffffffff
#define AVR32_PWMA_ISCHSET0_RESETVALUE                      0x00000000
#define AVR32_PWMA_ISCHSET0_SET                                      0
#define AVR32_PWMA_ISCHSET0_SET_MASK                        0xffffffff
#define AVR32_PWMA_ISCHSET0_SET_OFFSET                               0
#define AVR32_PWMA_ISCHSET0_SET_SIZE                                32
#define AVR32_PWMA_ISCHSET1                                 0x00000040
#define AVR32_PWMA_ISCHSET1_MASK                            0xffffffff
#define AVR32_PWMA_ISCHSET1_RESETVALUE                      0x00000000
#define AVR32_PWMA_ISCHSET1_SET                                      0
#define AVR32_PWMA_ISCHSET1_SET_MASK                        0xffffffff
#define AVR32_PWMA_ISCHSET1_SET_OFFSET                               0
#define AVR32_PWMA_ISCHSET1_SET_SIZE                                32
#define AVR32_PWMA_ISDUTY                                   0x00000004
#define AVR32_PWMA_ISDUTY_DUTY                                       0
#define AVR32_PWMA_ISDUTY_DUTY_MASK                         0x000000ff
#define AVR32_PWMA_ISDUTY_DUTY_OFFSET                                0
#define AVR32_PWMA_ISDUTY_DUTY_SIZE                                  8
#define AVR32_PWMA_ISDUTY_MASK                              0x000000ff
#define AVR32_PWMA_ISDUTY_RESETVALUE                        0x00000000
#define AVR32_PWMA_PARAMETER                                0x00000024
#define AVR32_PWMA_PARAMETER_CHANNELS                                0
#define AVR32_PWMA_PARAMETER_CHANNELS_MASK                  0x000000ff
#define AVR32_PWMA_PARAMETER_CHANNELS_OFFSET                         0
#define AVR32_PWMA_PARAMETER_CHANNELS_SIZE                           8
#define AVR32_PWMA_PARAMETER_MASK                           0x000000ff
#define AVR32_PWMA_PARAMETER_RESETVALUE                     0x00000000
#define AVR32_PWMA_READY                                             2
#define AVR32_PWMA_READY_MASK                               0x00000004
#define AVR32_PWMA_READY_OFFSET                                      2
#define AVR32_PWMA_READY_SIZE                                        1
#define AVR32_PWMA_SCR                                      0x00000020
#define AVR32_PWMA_SCR_MASK                                 0x00000005
#define AVR32_PWMA_SCR_READY                                         2
#define AVR32_PWMA_SCR_READY_MASK                           0x00000004
#define AVR32_PWMA_SCR_READY_OFFSET                                  2
#define AVR32_PWMA_SCR_READY_SIZE                                    1
#define AVR32_PWMA_SCR_RESETVALUE                           0x00000000
#define AVR32_PWMA_SCR_TOFL                                          0
#define AVR32_PWMA_SCR_TOFL_MASK                            0x00000001
#define AVR32_PWMA_SCR_TOFL_OFFSET                                   0
#define AVR32_PWMA_SCR_TOFL_SIZE                                     1
#define AVR32_PWMA_SEL0                                              0
#define AVR32_PWMA_SEL0_MASK                                0x000000ff
#define AVR32_PWMA_SEL0_OFFSET                                       0
#define AVR32_PWMA_SEL0_SIZE                                         8
#define AVR32_PWMA_SEL1                                              8
#define AVR32_PWMA_SEL1_MASK                                0x0000ff00
#define AVR32_PWMA_SEL1_OFFSET                                       8
#define AVR32_PWMA_SEL1_SIZE                                         8
#define AVR32_PWMA_SEL2                                             16
#define AVR32_PWMA_SEL2_MASK                                0x00ff0000
#define AVR32_PWMA_SEL2_OFFSET                                      16
#define AVR32_PWMA_SEL2_SIZE                                         8
#define AVR32_PWMA_SEL3                                             24
#define AVR32_PWMA_SEL3_MASK                                0xff000000
#define AVR32_PWMA_SEL3_OFFSET                                      24
#define AVR32_PWMA_SEL3_SIZE                                         8
#define AVR32_PWMA_SET                                               0
#define AVR32_PWMA_SET_MASK                                 0xffffffff
#define AVR32_PWMA_SET_OFFSET                                        0
#define AVR32_PWMA_SET_SIZE                                         32
#define AVR32_PWMA_SPREAD                                           16
#define AVR32_PWMA_SPREAD_MASK                              0x001f0000
#define AVR32_PWMA_SPREAD_OFFSET                                    16
#define AVR32_PWMA_SPREAD_SIZE                                       5
#define AVR32_PWMA_SR                                       0x0000001c
#define AVR32_PWMA_SR_BUSY                                           3
#define AVR32_PWMA_SR_BUSY_MASK                             0x00000008
#define AVR32_PWMA_SR_BUSY_OFFSET                                    3
#define AVR32_PWMA_SR_BUSY_SIZE                                      1
#define AVR32_PWMA_SR_MASK                                  0x0000000d
#define AVR32_PWMA_SR_READY                                          2
#define AVR32_PWMA_SR_READY_MASK                            0x00000004
#define AVR32_PWMA_SR_READY_OFFSET                                   2
#define AVR32_PWMA_SR_READY_SIZE                                     1
#define AVR32_PWMA_SR_RESETVALUE                            0x00000000
#define AVR32_PWMA_SR_TOFL                                           0
#define AVR32_PWMA_SR_TOFL_MASK                             0x00000001
#define AVR32_PWMA_SR_TOFL_OFFSET                                    0
#define AVR32_PWMA_SR_TOFL_SIZE                                      1
#define AVR32_PWMA_TCLR                                              1
#define AVR32_PWMA_TCLR_MASK                                0x00000002
#define AVR32_PWMA_TCLR_OFFSET                                       1
#define AVR32_PWMA_TCLR_SIZE                                         1
#define AVR32_PWMA_TOFL                                              0
#define AVR32_PWMA_TOFL_MASK                                0x00000001
#define AVR32_PWMA_TOFL_OFFSET                                       0
#define AVR32_PWMA_TOFL_SIZE                                         1
#define AVR32_PWMA_TOP                                               8
#define AVR32_PWMA_TOP_MASK                                 0x0000ff00
#define AVR32_PWMA_TOP_OFFSET                                        8
#define AVR32_PWMA_TOP_SIZE                                          8
#define AVR32_PWMA_VARIANT                                          16
#define AVR32_PWMA_VARIANT_MASK                             0x000f0000
#define AVR32_PWMA_VARIANT_OFFSET                                   16
#define AVR32_PWMA_VARIANT_SIZE                                      4
#define AVR32_PWMA_VERSION                                  0x00000028
#define AVR32_PWMA_VERSION_MASK                             0x000f0fff
#define AVR32_PWMA_VERSION_OFFSET                                    0
#define AVR32_PWMA_VERSION_RESETVALUE                       0x00000100
#define AVR32_PWMA_VERSION_SIZE                                     12
#define AVR32_PWMA_VERSION_VARIANT                                  16
#define AVR32_PWMA_VERSION_VARIANT_MASK                     0x000f0000
#define AVR32_PWMA_VERSION_VARIANT_OFFSET                           16
#define AVR32_PWMA_VERSION_VARIANT_SIZE                              4
#define AVR32_PWMA_VERSION_VERSION                                   0
#define AVR32_PWMA_VERSION_VERSION_MASK                     0x00000fff
#define AVR32_PWMA_VERSION_VERSION_OFFSET                            0
#define AVR32_PWMA_VERSION_VERSION_SIZE                             12




#ifdef __AVR32_ABI_COMPILER__


typedef struct avr32_pwma_cr_t {
    unsigned int                 :11;
    unsigned int spread          : 5;
    unsigned int top             : 8;
    unsigned int                 : 6;
    unsigned int tclr            : 1;
    unsigned int en              : 1;
} avr32_pwma_cr_t;



typedef struct avr32_pwma_isduty_t {
    unsigned int                 :24;
    unsigned int duty            : 8;
} avr32_pwma_isduty_t;



typedef struct avr32_pwma_imduty_t {
    unsigned int duty3           : 8;
    unsigned int duty2           : 8;
    unsigned int duty1           : 8;
    unsigned int duty0           : 8;
} avr32_pwma_imduty_t;



typedef struct avr32_pwma_imchsel_t {
    unsigned int sel3            : 8;
    unsigned int sel2            : 8;
    unsigned int sel1            : 8;
    unsigned int sel0            : 8;
} avr32_pwma_imchsel_t;



typedef struct avr32_pwma_ier_t {
    unsigned int                 :29;
    unsigned int ready           : 1;
    unsigned int                 : 1;
    unsigned int tofl            : 1;
} avr32_pwma_ier_t;



typedef struct avr32_pwma_idr_t {
    unsigned int                 :29;
    unsigned int ready           : 1;
    unsigned int                 : 1;
    unsigned int tofl            : 1;
} avr32_pwma_idr_t;



typedef struct avr32_pwma_imr_t {
    unsigned int                 :29;
    unsigned int ready           : 1;
    unsigned int                 : 1;
    unsigned int tofl            : 1;
} avr32_pwma_imr_t;



typedef struct avr32_pwma_sr_t {
    unsigned int                 :28;
    unsigned int busy            : 1;
    unsigned int ready           : 1;
    unsigned int                 : 1;
    unsigned int tofl            : 1;
} avr32_pwma_sr_t;



typedef struct avr32_pwma_scr_t {
    unsigned int                 :29;
    unsigned int ready           : 1;
    unsigned int                 : 1;
    unsigned int tofl            : 1;
} avr32_pwma_scr_t;



typedef struct avr32_pwma_parameter_t {
    unsigned int                 :24;
    unsigned int channels        : 8;
} avr32_pwma_parameter_t;



typedef struct avr32_pwma_version_t {
    unsigned int                 :12;
    unsigned int variant         : 4;
    unsigned int                 : 4;
    unsigned int version         :12;
} avr32_pwma_version_t;



typedef struct avr32_pwma_t {
  union {
          unsigned long                  cr        ;//0x0000
          avr32_pwma_cr_t                CR        ;
  };
  union {
          unsigned long                  isduty    ;//0x0004
          avr32_pwma_isduty_t            ISDUTY    ;
  };
  union {
          unsigned long                  imduty    ;//0x0008
          avr32_pwma_imduty_t            IMDUTY    ;
  };
  union {
          unsigned long                  imchsel   ;//0x000c
          avr32_pwma_imchsel_t           IMCHSEL   ;
  };
  union {
          unsigned long                  ier       ;//0x0010
          avr32_pwma_ier_t               IER       ;
  };
  union {
          unsigned long                  idr       ;//0x0014
          avr32_pwma_idr_t               IDR       ;
  };
  union {
    const unsigned long                  imr       ;//0x0018
    const avr32_pwma_imr_t               IMR       ;
  };
  union {
    const unsigned long                  sr        ;//0x001c
    const avr32_pwma_sr_t                SR        ;
  };
  union {
          unsigned long                  scr       ;//0x0020
          avr32_pwma_scr_t               SCR       ;
  };
  union {
    const unsigned long                  parameter ;//0x0024
    const avr32_pwma_parameter_t         PARAMETER ;
  };
  union {
    const unsigned long                  version   ;//0x0028
    const avr32_pwma_version_t           VERSION   ;
  };
          unsigned int                   :32       ;//0x002c
          unsigned long                  ischset0  ;//0x0030
          unsigned int                   :32       ;//0x0034
          unsigned long                  cheer0    ;//0x0038
          unsigned int                   :32       ;//0x003c
          unsigned long                  ischset1  ;//0x0040
          unsigned int                   :32       ;//0x0044
          unsigned long                  cheer1    ;//0x0048
} avr32_pwma_t;



/*#ifdef __AVR32_ABI_COMPILER__*/
#endif

/*#ifdef AVR32_PWMA_100_H_INCLUDED*/
#endif

