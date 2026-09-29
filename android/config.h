/*
 * Hand-written stand-in for the autoconf config.h, for building popt with
 * Soong. Only what bionic actually provides is defined; everything popt
 * guards with #ifdef and can live without is simply left out.
 *
 * Deliberately absent: gettext/libintl (Android has no libintl, and popt falls
 * back to passing strings through), iconv, mcheck.h, glob_pattern_p (a glibc
 * internal), and both spellings of secure_getenv -- bionic has neither, so
 * system.h leaves the getenv() calls alone, which is what we want anyway for a
 * daemon that is not setuid.
 */
#ifndef POPT_ANDROID_CONFIG_H
#define POPT_ANDROID_CONFIG_H

#define HAVE_FNMATCH_H 1
#define HAVE_GLOB_H 1
#define HAVE_LANGINFO_H 1
#define HAVE_MBSRTOWCS 1
#define HAVE_SETREUID 1
#define HAVE_SETUID 1
#define HAVE_SRANDOM 1
#define HAVE_STDALIGN_H 1
#define HAVE_STPCPY 1
#define HAVE_STRERROR 1
#define HAVE_VASPRINTF 1

#define POPT_SYSCONFDIR "/system/etc"
#define PACKAGE "popt"
#define VERSION "1.19"

#endif /* POPT_ANDROID_CONFIG_H */
