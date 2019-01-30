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

#ifndef HT_PREDEF_STANDARD_H
#define HT_PREDEF_STANDARD_H

typedef int HTPredefStandard;

/*------------------------------------------------------------------------*
 * LANGUAGE STANDARDS PREDEFINED MACROS                                   *
 *------------------------------------------------------------------------*/

/*----------------------------------------------------------- C Standards */
#ifdef __STDC__
  #define HT_STANDARD_ANSI_C __STDC__
  #define HT_STANDARD_C89    HT_STANDARD_ANSI_C
  #define HT_STANDARD_C90    HT_STANDARD_ANSI_C
  #if defined __STDC_VERSION__
    #define HT_STANDARD_C __STDC_VERSION__
    #if __STDC_VERSION__ >= 199409L
      #define HT_STANDARD_C94 199409L
      #define HT_STANDARD_C95 HT_STANDARD_C94
    #endif
    #if __STDC_VERSION__ >= 199901L
      #define HT_STANDARD_C99 199901L
    #endif
    #if __STDC_VERSION__ >= 201112L
      #define HT_STANDARD_C11 201112L
    #endif
    #if __STDC_VERSION__ >= 201710L
      #define HT_STANDARD_C17 201710L
      #define HT_STANDARD_C18 HT_STANDARD_C17
    #endif
  #else
    #define HT_STANDARD_C __STDC__
  #endif
#endif
/*--------------------------------------------------------- C++ Standards */
#ifdef __cplusplus
  #define HT_STANDARD_CPP __cplusplus
  #if __cplusplus >= 199711L
    #define HT_STANDARD_CPP98 199711L
    #define HT_STANDARD_CPP03 199711L
  #endif
  #if __cplusplus >= 201103L
    #define HT_STANDARD_CPP11 199711L
  #endif
  #if __cplusplus >= 201402L
    #define HT_STANDARD_CPP14 201402L
  #endif
  #if __cplusplus >= 201703L
    #define HT_STANDARD_CPP17 201703L
  #endif
#endif
#ifdef __cplusplus_cli
  #define HT_STANDARD_CPP_CLI 200406L
#endif
#ifdef __embedded_cplusplus
  #define HT_STANDARD_EMBEDDED_CPP 1
#endif
/*------------------------------------------------- Objective-C Standards */
#ifdef __OBJC__
  #define HT_STANDARD_OBJC __OBJC__
#endif
/*-------------------------------------------------------- UNIX Standards */
#ifdef __has_include
  #if __has_include(<unistd.h>)
    #include <unistd.h>
  #endif
#elif defined __unix || defined __unix__ || defined __MACH__ ||\
    defined __amigaos__ ||\
    defined __BEOS__
  #include <unistd.h>
#endif
#ifdef _POSIX_VERSION
  #define HT_STANDARD_POSIX _POSIX_VERSION
  #if _POSIX_VERSION >= 198808L
    #define HT_STANDARD_POSIX_1988 198808L
  #endif
  #if _POSIX_VERSION >= 199009L
    #define HT_STANDARD_POSIX_1990 199009L
  #endif
  #if _POSIX_VERSION >= 199309L
    #define HT_STANDARD_POSIX_1993 199309L
  #endif
  #if _POSIX_VERSION >= 199596L
    #define HT_STANDARD_POSIX_1996 199506L
  #endif
  #if _POSIX_VERSION >= 200112L
    #define HT_STANDARD_POSIX_2001 200112L
  #endif
  #if _POSIX_VERSION >= 200809L
    #define HT_STANDARD_POSIX_2008 200809L
  #endif
#endif
#ifdef _POSIX2_C_VERSION
  #define HT_STANDARD_POSIX_2 199209L
#endif
#ifdef _XOPEN_VERSION
  #define HT_STANDARD_XOPEN _XOPEN_VERSION
  #if _XOPEN_VERSION >= 3
    #define HT_STANDARD_XOPEN_PG3 3
  #endif
  #if _XOPEN_VERSION >= 4
    #define HT_STANDARD_XOPEN_PG4 4
  #endif
  #if _XOPEN_VERSION >= 4 && defined _XOPEN_UNIX
    #define HT_STANDARD_XOPEN_SUS
  #endif
  #if _XOPEN_VERSION >= 500
    #define HT_STANDARD_XOPEN_SUSV2 500
  #endif
  #if _XOPEN_VERSION >= 600
    #define HT_STANDARD_XOPEN_SUSV3 600
  #endif
  #if _XOPEN_VERSION >= 700
    #define HT_STANDARD_XOPEN_SUSV4 700
  #endif
#endif

#endif
