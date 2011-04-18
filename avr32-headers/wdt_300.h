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
#ifndef AVR32_WDT_300_H_INCLUDED
#define AVR32_WDT_300_H_INCLUDED

#define AVR32_WDT_H_VERSION 300

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
#define AVR32_WDT_CLR                                      0x00000004
#define AVR32_WDT_CLR_MASK                                 0x00000000
#define AVR32_WDT_CLR_RESETVALUE                           0x00000000
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
#define AVR32_WDT_CTRL_EN                                           0
#define AVR32_WDT_CTRL_EN_MASK                             0x00000001
#define AVR32_WDT_CTRL_EN_OFFSET                                    0
#define AVR32_WDT_CTRL_EN_SIZE                                      1
#define AVR32_WDT_CTRL_KEY                                         24
#define AVR32_WDT_CTRL_KEY_MASK                            0xff000000
#define AVR32_WDT_CTRL_KEY_OFFSET                                  24
#define AVR32_WDT_CTRL_KEY_SIZE                                     8
#define AVR32_WDT_CTRL_MASK                                0xff031f01
#define AVR32_WDT_CTRL_PSEL                                         8
#define AVR32_WDT_CTRL_PSEL_MASK                           0x00001f00
#define AVR32_WDT_CTRL_PSEL_OFFSET                                  8
#define AVR32_WDT_CTRL_PSEL_SIZE                                    5
#define AVR32_WDT_CTRL_RESETVALUE                          0x00000000
#define AVR32_WDT_EN                                                0
#define AVR32_WDT_EN_MASK                                  0x00000001
#define AVR32_WDT_EN_OFFSET                                         0
#define AVR32_WDT_EN_SIZE                                           1
#define AVR32_WDT_KEY                                              24
#define AVR32_WDT_KEY_MASK                                 0xff000000
#define AVR32_WDT_KEY_OFFSET                                       24
#define AVR32_WDT_KEY_SIZE                                          8
#define AVR32_WDT_PSEL                                              8
#define AVR32_WDT_PSEL_MASK                                0x00001f00
#define AVR32_WDT_PSEL_OFFSET                                       8
#define AVR32_WDT_PSEL_SIZE                                         5
#define AVR32_WDT_VERSION                                  0x000000ff
#define AVR32_WDT_VERSION_MASK                             0x00000fff
#define AVR32_WDT_VERSION_OFFSET                                    0
#define AVR32_WDT_VERSION_RESETVALUE                       0x00000000
#define AVR32_WDT_VERSION_SIZE                                     12
#define AVR32_WDT_VERSION_VERSION                                   0
#define AVR32_WDT_VERSION_VERSION_MASK                     0x00000fff
#define AVR32_WDT_VERSION_VERSION_OFFSET                            0
#define AVR32_WDT_VERSION_VERSION_SIZE                             12

#define AVR32_WDT_KEY_CONST                            0x00000055



#ifdef __AVR32_ABI_COMPILER__


typedef struct avr32_wdt_ctrl_t {
    unsigned int key             : 8;
    unsigned int                 : 6;
    unsigned int cssel           : 1;
    unsigned int cen             : 1;
    unsigned int                 : 3;
    unsigned int psel            : 5;
    unsigned int                 : 7;
    unsigned int en              : 1;
} avr32_wdt_ctrl_t;



typedef struct avr32_wdt_version_t {
    unsigned int                 :20;
    unsigned int version         :12;
} avr32_wdt_version_t;



typedef struct avr32_wdt_t {
  union {
          unsigned long                  ctrl      ;//0x0000
          avr32_wdt_ctrl_t               CTRL      ;
  };
          unsigned long                  clr       ;//0x0004
          unsigned int                   :32       ;//0x0008
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
  union {
    const unsigned long                  version   ;//0x00ff
    const avr32_wdt_version_t            VERSION   ;
  };
} avr32_wdt_t;



/*#ifdef __AVR32_ABI_COMPILER__*/
#endif

/*#ifdef AVR32_WDT_300_H_INCLUDED*/
#endif

