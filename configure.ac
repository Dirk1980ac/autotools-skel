dnl Autoconf configuration

AC_INIT(prjname, 1.0.0, Dirk Gottschalk <dirk.gottschalk1980-2021@googlemail.com>)
AC_CONFIG_HEADERS([config.h])
AC_CONFIG_AUX_DIR([build-aux])
AM_INIT_AUTOMAKE([1.11] [subdir-objects])
AM_SILENT_RULES([yes])
AM_MAINTAINER_MODE([enable])
AC_CONFIG_MACRO_DIRS([m4])
AC_PROG_CC

dnl ***************************************************************************
dnl If we are in a GIT repository: Check fot git2cl and set HAVE_GIT2CL
dnl ***************************************************************************
dnl AM_CONDITIONAL(HAVE_GIT, test x".git")

dnl ***************************************************************************
dnl Doxygen support . (Uncomment to enable)
dnl ***************************************************************************
dnl DX_HTML_FEATURE(ON)
dnl DX_CHM_FEATURE(OFF)
dnl DX_CHI_FEATURE(OFF)
dnl DX_MAN_FEATURE(ON)
dnl DX_RTF_FEATURE(OFF)
dnl DX_XML_FEATURE(OFF)
dnl DX_PDF_FEATURE(ON)
dnl DX_PS_FEATURE(OFF)

dnl DX_INIT_DOXYGEN([$PACKAGE_NAME],[doxygen.cfg],[doc])

dnl ***************************************************************************
dnl Check host architecture
dnl ***************************************************************************
AC_CANONICAL_HOST
case $host_os in
  linux*)
    CHECK_MYSQL_LIB
    ;;
  *)
	AC_MSG_ERROR([Your platform is not supported!])
    ;;
esac

dnl ***************************************************************************
dnl Find and configure required libraries
dnl ***************************************************************************
PKG_CHECK_MODULES([PRJNAME], [glib-2.0])
PKG_CHECK_MODULES([CHECK], [check >= 0.9.4])
dnl Further module checks should go here.
dnl e.g.:
dnl PKG_CHECK_MODULES([MODNAMENAME], [libs...])


dnl ***************************************************************************
dnl Check for systemd service path (uncomment to enable)
dnl ***************************************************************************
dnl AC_ARG_WITH([systemdsystemunitdir],
dnl       [AS_HELP_STRING([--with-systemdsystemunitdir=DIR],
dnl                       [Directory for systemd service files])],,
dnl       [with_systemdsystemunitdir=auto])
dnl AS_IF([test "x$with_systemdsystemunitdir" = "xyes" -o "x$with_systemdsystemunitdir" = "xauto"], [
dnl       def_systemdsystemunitdir=$($PKG_CONFIG --variable=systemdsystemunitdir systemd)
dnl       AS_IF([test "x$def_systemdsystemunitdir" = "x"],
dnl     [AS_IF([test "x$with_systemdsystemunitdir" = "xyes"],
dnl      [AC_MSG_ERROR([systemd support requested but pkg-config unable to query systemd package])])
dnl      with_systemdsystemunitdir=no],
dnl     [with_systemdsystemunitdir="$def_systemdsystemunitdir"])])
dnl AS_IF([test "x$with_systemdsystemunitdir" != "xno"],
dnl        [AC_SUBST([systemdsystemunitdir], [$with_systemdsystemunitdir])])
dnl AM_CONDITIONAL([HAVE_SYSTEMD], [test "x$with_systemdsystemunitdir" != "xno"])

dnl ***************************************************************************
dnl Initialize libtool. (Uncomment to enable)
dnl ***************************************************************************
dnl LT_INIT

dnl ***************************************************************************
dnl Generate build environment
dnl ***************************************************************************
AC_CONFIG_FILES([Makefile \
		tests/Makefile \
		src/Makefile])
AC_OUTPUT
