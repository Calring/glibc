/* ldconfig default paths and libraries.
   Copyright (C) 2001-2021 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library.  If not, see
   <http://www.gnu.org/licenses/>.  */

#include <sysdeps/generic/ldconfig.h>

#ifdef __loongarch_lp64
#define SYSDEP_KNOWN_INTERPRETER_NAMES \
  { "/lib64/ld-linux-loongarch-lp64d.so.1", FLAG_ELF_LIBC6 },
#else
#error cannot determine ABI
#endif

#define SYSDEP_KNOWN_LIBRARY_NAMES	\
  { "libc.so.6", FLAG_ELF_LIBC6 },	\
  { "libm.so.6", FLAG_ELF_LIBC6 },
