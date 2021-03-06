#if defined(_WIN32) || defined(WIN32) || defined(__CYGWIN__) || defined(__MINGW32__)
#  define __USE_MINGW_ANSI_STDIO 0
#  include <stdio.h>
#elif defined(__unix__)
#  define SQLITE_OS_OTHER 1
#else
#  error Unsupported OS
#endif

#ifndef INCLUDE_SQLITE_VERSION_SYMBOL
#define SKIP_SQLITE_VERSION
#endif
#include "sqlite3.h"
