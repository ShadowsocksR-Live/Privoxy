#ifndef __PRIVOXY_CONFIG_H__
#define __PRIVOXY_CONFIG_H__ 1

#include <stddef.h>
#include <stdlib.h>

#define VERSION "3.0.28 stable"
#define VERSION_MAJOR 3
#define VERSION_MINOR 0
#define VERSION_POINT 28
#define CODE_STATUS "stable"

//#define SIZEOF_LONG_LONG (sizeof(long long))
#define SIZEOF_LONG_LONG 8

#define HAVE_CALLOC 1
#define HAVE_TZSET 1
#define HAVE_PUTENV 1

//#define FEATURE_ZLIB 1
//#define FUZZ 1

#define FEATURE_CLIENT_TAGS 1
#define FEATURE_TOGGLE 1
#define FEATURE_ACL 1
#define HAVE_RFC2553 1

//#define HAVE_UNISTD_H 1

#ifdef _MSC_VER 
//not #if defined(_WIN32) || defined(_WIN64) because we have strncasecmp in mingw
#define strncasecmp _strnicmp
#define strcasecmp _stricmp
#endif

int gettimeofday(struct timeval *tp, struct timezone *tzp);

/* On Unix systems config.in is converted by configure into config.h. PCRE is
written in Standard C, but there are a few non-standard things it can cope
with, allowing it to run on SunOS4 and other "close to standard" systems.

On a non-Unix system you should just copy this file into config.h and change
the definitions of HAVE_STRERROR and HAVE_MEMMOVE to 1. Unfortunately, because
of the way autoconf works, these cannot be made the defaults. If your system
has bcopy() and not memmove(), change the definition of HAVE_BCOPY instead of
HAVE_MEMMOVE. If your system has neither bcopy() nor memmove(), leave them both
as 0; an emulation function will be used. */

/* Define to empty if the keyword does not work. */

//#undef const

/* Define to `unsigned' if <stddef.h> doesn't define size_t. */

//#undef size_t

/* The following two definitions are mainly for the benefit of SunOS4, which
doesn't have the strerror() or memmove() functions that should be present in
all Standard C libraries. The macros HAVE_STRERROR and HAVE_MEMMOVE should
normally be defined with the value 1 for other systems, but unfortunately we
can't make this the default because "configure" files generated by autoconf
will only change 0 to 1; they won't change 1 to 0 if the functions are not
found. If HAVE_MEMMOVE is set to 1, the value of HAVE_BCOPY is not relevant. */

#define HAVE_STRERROR 1
#define HAVE_MEMMOVE  1
//#define HAVE_BCOPY    0

/* End */

#endif // __PRIVOXY_CONFIG_H__
