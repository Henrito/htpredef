/* MIT License
 * 
 * Copyright (c) 2019 Henry To
 * 
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be
 * included in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
 * IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY
 * CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,
 * TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE
 * SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 */

#ifndef HT_PREDEF_ARCHITECTURE_H
#define HT_PREDEF_ARCHITECTURE_H

typedef int HTPredefArchitecture;

/*------------------------------------------------------------------------*
 * ARCHITECTURE PREDEFINED MACROS                                         *
 *------------------------------------------------------------------------*/

/*------------------------------------------------------------------ 6502 */
#if defined __CC65__ || defined MPU6502
  #define HT_ARCHITECTURE_6502
  #define HT_INSTRUCTION_SET_CISC
  #define HT_ARCHITECTURE_NAME     "6502"
  #define HT_ARCHITECTURE_DESIGNER "MOS Technology, Inc."
/*----------------------------------------------------------------- Alpha */
#elif defined __alpha || defined __alpha__ || defined _M_ALPHA
  #define HT_ARCHITECTURE_ALPHA
  #define HT_INSTRUCTION_SET_RISC
  #define HT_ARCHITECTURE_NAME     "Alpha"
  #define HT_ARCHITECTURE_DESIGNER "Digital Equipment Corporation"
/*------------------------------------------------------------------- ARM */
#elif defined __arm__ || defined _M_ARM ||\
    defined __aarch64__ || defined _M_ARM64
  #define HT_ARCHITECTURE_ARM
  #define HT_INSTRUCTION_SET_RISC
  #define HT_ARCHITECTURE_NAME     "ARM"
  #define HT_ARCHITECTURE_DESIGNER "Arm Limited"
  #if defined __aarch64__ || defined _M_ARM64
    #define HT_ARCHITECTURE_ARM_64
  #endif
/*------------------------------------------------------------------- AVR */
#elif defined __AVR__
  #define HT_ARCHITECTURE_AVR
  #define HT_INSTRUCTION_SET_RISC
  #define HT_ARCHITECTURE_NAME     "AVR"
  #define HT_ARCHITECTURE_DESIGNER "Atmel Corporation"
/*-------------------------------------------------------------- Blackfin */
#elif defined __bfin__ || defined __BFIN__
  #define HT_ARCHITECTURE_BLACKFIN
  #define HT_INSTRUCTION_SET_RISC
  #define HT_ARCHITECTURE_NAME     "Blackfin"
  #define HT_ARCHITECTURE_DESIGNER "Analog Devices, Inc."
/*------------------------------------------------------------------ Cell */
#elif defined __CELLOS_LV2__ || defined __PPU__ || defined __SPU__
  #define HT_ARCHITECTURE_CELL
  #define HT_INSTRUCTION_SET_RISC
  #define HT_ARCHITECTURE_DESIGNER "STI Alliance"
  #if defined __PPU__
    #define HT_ARCHITECTURE_PPU
    #define HT_ARCHITECTURE_NAME "Power Processing Unit"
  #elif defined __SPU__
    #define HT_ARCHITECTURE_SPU
    #define HT_ARCHITECTURE_NAME "Synergistic Processing Elements"
  #else
    #define HT_ARCHITECTURE_NAME "Cell Broadband Engine"
  #endif
/*---------------------------------------------------------------- CONVEX */
#elif defined __convex__
  #define HT_ARCHITECTURE_CONVEX
  #define HT_INSTRUCTION_SET_CISC
  #define HT_ARCHITECTURE_NAME     "CONVEX"
  #define HT_ARCHITECTURE_DESIGNER "CONVEX Computer Corporation"
/*--------------------------------------------------------------- Itanium */
#elif defined __ia64 || defined _M_IA64
  #define HT_ARCHITECTURE_ITANIUM
  #define HT_INSTRUCTION_SET_EPIC
  #define HT_ARCHITECTURE_NAME     "Itanium"
  #define HT_ARCHITECTURE_DESIGNER "Intel Corporation"
/*---------------------------------------------------------------- M68000 */
#elif defined __m68k__ ||\
    defined _M68000 || defined M68000 || defined MPU68000
  #define HT_ARCHITECTURE_M68K
  #define HT_INSTRUCTION_SET_CISC
  #define HT_ARCHITECTURE_NAME     "M68000"
  #define HT_ARCHITECTURE_DESIGNER "Motorola, Inc."
#elif defined __CMB__ || defined __CPMB__
  #define HT_ARCHITECTURE_MICROBLAZE
  #define HT_INSTRUCTION_SET_RISC
  #define HT_ARCHITECTURE_NAME     "MicroBlaze"
  #define HT_ARCHITECTURE_DESIGNER "Altium LLC"
/*------------------------------------------------------------------ MIPS */
#elif defined __mips__
  #define HT_ARCHITECTURE_MIPS
  #define HT_INSTRUCTION_SET_RISC
  #define HT_ARCHITECTURE_NAME     "MIPS"
  #define HT_ARCHITECTURE_DESIGNER "MIPS Technologies, Inc."
/*---------------------------------------------------------------- MSP430 */
#elif defined __MSP430__
  #define HT_ARCHITECTURE_MSP430
  #define HT_INSTRUCTION_SET_RISC
  #define HT_ARCHITECTURE_NAME     "MSP430"
  #define HT_ARCHITECTURE_DESIGNER "Texas Instruments Inc."
/*--------------------------------------------------------------- PA RISC */
#elif defined __hppa__
  #define HT_ARCHITECTURE_PA_RISC
  #define HT_INSTRUCTION_SET_RISC
  #define HT_ARCHITECTURE_NAME     "PA RISC"
  #define HT_ARCHITECTURE_DESIGNER "Hewlett-Packard Company"
/*------------------------------------------------------------------- PIC */
#elif defined __XC__ || defined __18CXX || defined __PIC32MX
  #define HT_ARCHITECTURE_PIC
  #define HT_INSTRUCTION_SET_RISC
  #define HT_ARCHITECTURE_NAME     "PIC"
  #define HT_ARCHITECTURE_DESIGNER "Microchip Technology Inc."
/*--------------------------------------------------------------- PowerPC */
#elif defined __powerpc__ || defined __ppc__ || defined __PPC__ ||\
    defined __powerpc64__ || defined __ppc64__ || defined __PPC64
  #define HT_ARCHITECTURE_POWERPC
  #define HT_INSTRUCTION_SET_RISC
  #define HT_ARCHITECTURE_NAME     "PowerPC"
  #define HT_ARCHITECTURE_DESIGNER "AIM Alliance"
  #if defined __powerpc64__ || defined __ppc64__ || defined __PPC64
    #define HT_ARCHITECTURE_POWERPC_64
  #endif
/*--------------------------------------------------------------- Pyramid */
#elif defined pyr
  #define HT_ARCHITECTURE_PYRAMID
  #define HT_INSTRUCTION_SET_RISC
  #define HT_ARCHITECTURE_NAME     "Pyramid"
  #define HT_ARCHITECTURE_DESIGNER "Pyramid Technology Corporation"
/*------------------------------------------------------ RISC System/6000 */
#elif defined _IBMR2
  #define HT_ARCHITECTURE_RS6000
  #define HT_INSTRUCTION_SET_RISC
  #define HT_ARCHITECTURE_NAME     "RISC System/6000"
  #define HT_ARCHITECTURE_DESIGNER "IBM"
/*---------------------------------------------------------------- RISC-V */
#elif defined __riscv
  #define HT_ARCHITECTURE_RISC_V
  #define HT_INSTRUCTION_SET_RISC
  #define HT_ARCHITECTURE_NAME     "RISC-V"
  #define HT_ARCHITECTURE_DESIGNER "University of California, Berkeley"
  #if defined __riscv_xlen && __riscv_xlen == 64
    #define HT_ARCHITECTURE_RISC_V_64
  #endif
/*----------------------------------------------------------------- SPARC */
#elif defined __sparc
  #define HT_ARCHITECTURE_SPARC
  #define HT_INSTRUCTION_SET_RISC
  #define HT_ARCHITECTURE_NAME     "SPARC"
  #define HT_ARCHITECTURE_DESIGNER "Sun Microsystems, Inc."
  #ifdef __arch64__
    #define HT_ARCHITECTURE_SPARC_64
  #endif
/*---------------------------------------------------------------- SuperH */
#elif defined __sh__
  #define HT_ARCHITECTURE_SUPERH
  #define HT_INSTRUCTION_SET_RISC
  #define HT_ARCHITECTURE_NAME     "SuperH"
  #define HT_ARCHITECTURE_DESIGNER "Hitachi, Ltd."
/*------------------------------------------------------------ System/370 */
#elif defined __370__
  #define HT_ARCHITECTURE_SYSTEM_370
  #define HT_INSTRUCTION_SET_CISC
  #define HT_ARCHITECTURE_NAME     "System/370"
  #define HT_ARCHITECTURE_DESIGNER "IBM"
/*------------------------------------------------------------ System/390 */
#elif defined __s390__ || defined __s390x__
  #define HT_ARCHITECTURE_SYSTEM_390
  #define HT_INSTRUCTION_SET_CISC
  #define HT_ARCHITECTURE_NAME     "System/390"
  #define HT_ARCHITECTURE_DESIGNER "IBM"
/*------------------------------------------------------------------- x86 */
#elif defined __i386 || defined _M_IX86 ||\
    defined __x86_64__ || defined _M_X64
  #define HT_ARCHITECTURE_X86
  #define HT_INSTRUCTION_SET_CISC
  #if defined __x86_64__ || defined _M_X64
    #define HT_ARCHITECTURE_X86_64
    #define HT_ARCHITECTURE_NAME     "x86_64"
    #define HT_ARCHITECTURE_DESIGNER "Advanced Micro Devices, Inc."
  #else
    #define HT_ARCHITECTURE_NAME     "x86"
    #define HT_ARCHITECTURE_DESIGNER "Intel Corporation"
  #endif
/*---------------------------------------------------------------- Xtensa */
#elif defined __XTENSA__
  #define HT_ARCHITECTURE_XTENSA
  #define HT_INSTRUCTION_SET_RISC
  #define HT_ARCHITECTURE_NAME     "Xtensa"
  #define HT_ARCHITECTURE_DESIGNER "Tensilica Inc."
/*-------------------------------------------------------- z/Architecture */
#elif defined __zarch__ || defined __SYSC_ZARCH__
  #define HT_ARCHITECTURE_Z
  #define HT_INSTRUCTION_SET_CISC
  #define HT_ARCHITECTURE_NAME     "z/Architecture"
  #define HT_ARCHITECTURE_DESIGNER "IBM"
/*--------------------------------------------------------------- Unknown */
#else
  #define HT_ARCHITECTURE_UNKNOWN
  #define HT_ARCHITECTURE_NAME     "Unknown"
  #define HT_ARCHITECTURE_DESIGNER "Unknown"
#endif

#endif
