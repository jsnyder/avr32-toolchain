/* Copyright (c) 2009, Atmel Corporation
   All rights reserved.

   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions are met:

   * Redistributions of source code must retain the above copyright
     notice, this list of conditions and the following disclaimer.

   * Redistributions in binary form must reproduce the above copyright
     notice, this list of conditions and the following disclaimer in
     the documentation and/or other materials provided with the
     distribution.

   * Neither the name of the copyright holders nor the names of
     contributors may be used to endorse or promote products derived
     from this software without specific prior written permission.

  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
  ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
  LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
  SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
  INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
  CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
  POSSIBILITY OF SUCH DAMAGE. */

/* $Id: flashvault.h 74279 2010-05-04 07:42:29Z pablaasmo $ */

/* avr32/flashvault.h - Flashvault API */

#ifndef _AVR32_FLASHVAULT_H_
#define _AVR32_FLASHVAULT_H_ 1


/** \file */
/** \defgroup avr32_flashvault <avr32/flashvault.h>: Flashvault Support

    \par Introduction

    The Flashvault API introduces some convenience macros to make it easier
    to set critical values for an application that resides in the Flashvault
    memory (a Flashvault Server application).
    
    \par Flashvault API
    
    There are two macros that are defined in this file:
    #define FLASHVAULT_FLASH_SIZE (flash_size)
    #define FLASHVAULT_RAM_SIZE (ram_size)
    
    Use the FLASHVAULT_FLASH_SIZE macro to set the total size of the Flashvault
    flash memory by passing the flash size as a parameter to this macro. 
    This macro must be used outside of any function. It should
    only be used once in the Flashvault Server application.
    
    Use the FLASHVAULT_RAM_SIZE macro to set the total size of the Flashvault 
    RAM memory by passing the RAM size as a parameter to this macro. This macro
    must be used outside of any function. It should only be used once in the
    Flashvault Server application.
    
    \par API Usage Example

    At the top of a compilation unit, use the macros outside of any function.
    Be sure to put a semicolon after the macros.

    \code
    FLASHVAULT_FLASH_SIZE(0x2000);  // 8K
    FLASHVAULT_RAM_SIZE(0x400);     // 1K
    \endcode

    \par Implementation details
    The FLASHVAULT_FLASH_SIZE macro will define two variables: 
    
    The macro will define a variable named __flashvault_flash_size as type 
    uint32_t and it will assign the flash size to this variable. This variable
    has an attribute and will be put into the custom named section 
    .flashvault_flash_size. The default linker scripts will place this value
    into an ELF section named .flashvault_flash_size. This ELF section will be
    used by the chip programming software to set the Flashvault flash size on
    programming.
    
    The macro will also define another variable named
    __flashvault_user_app_start and will assign the value of the beginning flash
    address (0x80000000) plus the size of the Flashvault Flash. This variable
    is used in the special Flashvault startup code. Unfortunately at this time
    the Flashvault startup code is hardcoded to specifically look for this
    variable name. If this variable name (with a correct value) is not defined
    in the Flashvault Server application there will be a linking error.
    
    The FLASHVAULT_RAM_SIZE macro is very similar to the FLASHVAULT_FLASH_SIZE
    macro, and it will define a single variable:
    
    The macro will define a variable named __flashvault_ram_size as type 
    uint32_t and it will assign the RAM size to this variable. This variable
    has an attribute and will be put into the custom named section 
    .flashvault_ram_size. The default linker scripts will place this value
    into an ELF section named .flashvault_ram_size. This ELF section will be
    used by the chip programming software to set the Flashvault RAM size on
    programming.

*/

#ifndef __ASSEMBLER__

#include <stdint.h>

#if !defined(FLASHVAULT_FLASH_SIZE)
#undef FLASHVAULT_FLASH_SIZE

#define FLASHVAULT_FLASH_SIZE(flash_size) \
uint32_t __flashvault_flash_size __attribute__((section (".flashvault_flash_size"))) = (flash_size); \
uint32_t __flashvault_user_app_start = (0x80000000 + (flash_size))

#endif


#if !defined(FLASHVAULT_RAM_SIZE)
#undef FLASHVAULT_RAM_SIZE

#define FLASHVAULT_RAM_SIZE(ram_size) \
uint32_t __flashvault_ram_size __attribute__((section (".flashvault_ram_size"))) = (ram_size)

#endif


#endif /* !__ASSEMBLER__ */

#endif /* _AVR32_FLASHVAULT_H_ */
