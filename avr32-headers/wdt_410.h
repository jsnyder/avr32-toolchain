/*****************************************************************************
 *
 * Copyright (C) 2010 Atmel Corporation
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
 * Model        : UC3C0512C
 * Revision     : $Revision: 80237 $
 * Checkin Date : $Date: 2010-08-22 20:34:08 +0200 (Sun, 22 Aug 2010) $ 
 *
 ****************************************************************************/
#ifndef AVR32_WDT_410_H_INCLUDED
#define AVR32_WDT_410_H_INCLUDED

#define AVR32_WDT_H_VERSION 410

#include "avr32/abi.h"


/*
 Note to user:

 The following defines are always generated:
 - Register offset: AVR32_WDT_<register>
 - Bitfield mask:   AVR32_WDT_<register>_<bitfield>
 - Bitfield offset: AVR32_WDT_<register>_<bitfield>_OFFSET
 - Bitfield size:   AVR32_WDT_<register>_<bitfield>_SIZE
 - Bitfield values: AVR32_WDT_<register>_<bitfield>_<value name>

 The following defines are generated if they don't cause ambiguities,
 i.e. the name is unique, or all values with that name are the same.
 - Bitfield mask:   AVR32_WDT_<bitfield>
 - Bitfield offset: AVR32_WDT_<bitfield>_OFFSET
 - Bitfield size:   AVR32_WDT_<bitfield>_SIZE
 - Bitfield values: AVR32_WDT_<bitfield>_<value name>
 - Bitfield values: AVR32_WDT_<value name>

 All defines are sorted alphabetically.
*/


#define AVR32_WDT_CEN                                              16
#define AVR32_WDT_CEN_MASK                                 0x00010000
#define AVR32_WDT_CEN_OFFSET                                       16
#define AVR32_WDT_CEN_SIZE                                          1
#define AVR32_WDT_CLEARED                                           1
#define AVR32_WDT_CLEARED_MASK                             0x00000002
#define AVR32_WDT_CLEARED_OFFSET                                    1
#define AVR32_WDT_CLEARED_SIZE                                      1
#define AVR32_WDT_CLR                                      0x00000004
#define AVR32_WDT_CLR_KEY                                          24
#define AVR32_WDT_CLR_KEY_MASK                             0xff000000
#define AVR32_WDT_CLR_KEY_OFFSET                                   24
#define AVR32_WDT_CLR_KEY_SIZE                                      8
#define AVR32_WDT_CLR_MASK                                 0xff000001
#define AVR32_WDT_CLR_RESETVALUE                           0x00000000
#define AVR32_WDT_CLR_WDTCLR                                        0
#define AVR32_WDT_CLR_WDTCLR_MASK                          0x00000001
#define AVR32_WDT_CLR_WDTCLR_OFFSET                                 0
#define AVR32_WDT_CLR_WDTCLR_SIZE                                   1
#define AVR32_WDT_CSSEL                                            17
#define AVR32_WDT_CSSEL_MASK                               0x00020000
#define AVR32_WDT_CSSEL_OFFSET                                     17
#define AVR32_WDT_CSSEL_SIZE                                        1
#define AVR32_WDT_CTRL                                     0x00000000
#define AVR32_WDT_CTRL_CEN                                         16
#define AVR32_WDT_CTRL_CEN_MASK                            0x00010000
#define AVR32_WDT_CTRL_CEN_OFFSET                                  16
#define AVR32_WDT_CTRL_CEN_SIZE                                     1
#define AVR32_WDT_CTRL_CSSEL                                       17
#define AVR32_WDT_CTRL_CSSEL_MASK                          0x00020000
#define AVR32_WDT_CTRL_CSSEL_OFFSET                                17
#define AVR32_WDT_CTRL_CSSEL_SIZE                                   1
#define AVR32_WDT_CTRL_DAR                                          1
#define AVR32_WDT_CTRL_DAR_MASK                            0x00000002
#define AVR32_WDT_CTRL_DAR_OFFSET                                   1
#define AVR32_WDT_CTRL_DAR_SIZE                                     1
#define AVR32_WDT_CTRL_EN                                           0
#define AVR32_WDT_CTRL_EN_MASK                             0x00000001
#define AVR32_WDT_CTRL_EN_OFFSET                                    0
#define AVR32_WDT_CTRL_EN_SIZE                                      1
#define AVR32_WDT_CTRL_FCD                                          7
#define AVR32_WDT_CTRL_FCD_MASK                            0x00000080
#define AVR32_WDT_CTRL_FCD_OFFSET                                   7
#define AVR32_WDT_CTRL_FCD_SIZE                                     1
#define AVR32_WDT_CTRL_KEY                                         24
#define AVR32_WDT_CTRL_KEY_MASK                            0xff000000
#define AVR32_WDT_CTRL_KEY_OFFSET                                  24
#define AVR32_WDT_CTRL_KEY_SIZE                                     8
#define AVR32_WDT_CTRL_MASK                                0xff7f1f8f
#define AVR32_WDT_CTRL_MODE                                         2
#define AVR32_WDT_CTRL_MODE_MASK                           0x00000004
#define AVR32_WDT_CTRL_MODE_OFFSET                                  2
#define AVR32_WDT_CTRL_MODE_SIZE                                    1
#define AVR32_WDT_CTRL_PSEL                                         8
#define AVR32_WDT_CTRL_PSEL_MASK                           0x00001f00
#define AVR32_WDT_CTRL_PSEL_OFFSET                                  8
#define AVR32_WDT_CTRL_PSEL_SIZE                                    5
#define AVR32_WDT_CTRL_RESETVALUE                          0x00010080
#define AVR32_WDT_CTRL_SFV                                          3
#define AVR32_WDT_CTRL_SFV_MASK                            0x00000008
#define AVR32_WDT_CTRL_SFV_OFFSET                                   3
#define AVR32_WDT_CTRL_SFV_SIZE                                     1
#define AVR32_WDT_CTRL_TBAN                                        18
#define AVR32_WDT_CTRL_TBAN_MASK                           0x007c0000
#define AVR32_WDT_CTRL_TBAN_OFFSET                                 18
#define AVR32_WDT_CTRL_TBAN_SIZE                                    5
#define AVR32_WDT_DAR                                               1
#define AVR32_WDT_DAR_MASK                                 0x00000002
#define AVR32_WDT_DAR_OFFSET                                        1
#define AVR32_WDT_DAR_SIZE                                          1
#define AVR32_WDT_EN                                                0
#define AVR32_WDT_EN_MASK                                  0x00000001
#define AVR32_WDT_EN_OFFSET                                         0
#define AVR32_WDT_EN_SIZE                                           1
#define AVR32_WDT_FCD                                               7
#define AVR32_WDT_FCD_MASK                                 0x00000080
#define AVR32_WDT_FCD_OFFSET                                        7
#define AVR32_WDT_FCD_SIZE                                          1
#define AVR32_WDT_KEY                                              24
#define AVR32_WDT_KEY_MASK                                 0xff000000
#define AVR32_WDT_KEY_OFFSET                                       24
#define AVR32_WDT_KEY_SIZE                                          8
#define AVR32_WDT_KEY_VALUE                                0x00000055
#define AVR32_WDT_MODE                                              2
#define AVR32_WDT_MODE_MASK                                0x00000004
#define AVR32_WDT_MODE_OFFSET                                       2
#define AVR32_WDT_MODE_SIZE                                         1
#define AVR32_WDT_PSEL                                              8
#define AVR32_WDT_PSEL_MASK                                0x00001f00
#define AVR32_WDT_PSEL_OFFSET                                       8
#define AVR32_WDT_PSEL_SIZE                                         5
#define AVR32_WDT_SFV                                               3
#define AVR32_WDT_SFV_MASK                                 0x00000008
#define AVR32_WDT_SFV_OFFSET                                        3
#define AVR32_WDT_SFV_SIZE                                          1
#define AVR32_WDT_SR                                       0x00000008
#define AVR32_WDT_SR_CLEARED                                        1
#define AVR32_WDT_SR_CLEARED_MASK                          0x00000002
#define AVR32_WDT_SR_CLEARED_OFFSET                                 1
#define AVR32_WDT_SR_CLEARED_SIZE                                   1
#define AVR32_WDT_SR_MASK                                  0x00000003
#define AVR32_WDT_SR_RESETVALUE                            0x00000003
#define AVR32_WDT_SR_WINDOW                                         0
#define AVR32_WDT_SR_WINDOW_MASK                           0x00000001
#define AVR32_WDT_SR_WINDOW_OFFSET                                  0
#define AVR32_WDT_SR_WINDOW_SIZE                                    1
#define AVR32_WDT_TBAN                                             18
#define AVR32_WDT_TBAN_MASK                                0x007c0000
#define AVR32_WDT_TBAN_OFFSET                                      18
#define AVR32_WDT_TBAN_SIZE                                         5
#define AVR32_WDT_VERSION                                  0x000003fc
#define AVR32_WDT_VERSION_MASK                             0x00000000
#define AVR32_WDT_VERSION_RESETVALUE                       0x00000000
#define AVR32_WDT_WDTCLR                                            0
#define AVR32_WDT_WDTCLR_MASK                              0x00000001
#define AVR32_WDT_WDTCLR_OFFSET                                     0
#define AVR32_WDT_WDTCLR_SIZE                                       1
#define AVR32_WDT_WINDOW                                            0
#define AVR32_WDT_WINDOW_MASK                              0x00000001
#define AVR32_WDT_WINDOW_OFFSET                                     0
#define AVR32_WDT_WINDOW_SIZE                                       1

#define AVR32_WDT_KEY_CONST                            0x00000055



#ifdef __AVR32_ABI_COMPILER__


typedef struct avr32_wdt_ctrl_t {
    unsigned int key             : 8;
    unsigned int                 : 1;
    unsigned int tban            : 5;
    unsigned int cssel           : 1;
    unsigned int cen             : 1;
    unsigned int                 : 3;
    unsigned int psel            : 5;
    unsigned int fcd             : 1;
    unsigned int                 : 3;
    unsigned int sfv             : 1;
    unsigned int mode            : 1;
    unsigned int dar             : 1;
    unsigned int en              : 1;
} avr32_wdt_ctrl_t;



typedef struct avr32_wdt_clr_t {
    unsigned int key             : 8;
    unsigned int                 :23;
    unsigned int wdtclr          : 1;
} avr32_wdt_clr_t;



typedef struct avr32_wdt_sr_t {
    unsigned int                 :30;
    unsigned int cleared         : 1;
    unsigned int window          : 1;
} avr32_wdt_sr_t;



typedef struct avr32_wdt_t {
  union {
          unsigned long                  ctrl      ;//0x0000
          avr32_wdt_ctrl_t               CTRL      ;
  };
  union {
          unsigned long                  clr       ;//0x0004
          avr32_wdt_clr_t                CLR       ;
  };
  union {
    const unsigned long                  sr        ;//0x0008
    const avr32_wdt_sr_t                 SR        ;
  };
          unsigned int                   :32       ;//0x000c
          unsigned int                   :32       ;//0x0010
          unsigned int                   :32       ;//0x0014
          unsigned int                   :32       ;//0x0018
          unsigned int                   :32       ;//0x001c
          unsigned int                   :32       ;//0x0020
          unsigned int                   :32       ;//0x0024
          unsigned int                   :32       ;//0x0028
          unsigned int                   :32       ;//0x002c
          unsigned int                   :32       ;//0x0030
          unsigned int                   :32       ;//0x0034
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
    const unsigned long                  version   ;//0x03fc
} avr32_wdt_t;



/*#ifdef __AVR32_ABI_COMPILER__*/
#endif

/*#ifdef AVR32_WDT_410_H_INCLUDED*/
#endif

