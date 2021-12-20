## Process this file with automake to produce Makefile.in

AM_CPPFLAGS = \
	-DPACKAGE_LOCALE_DIR='"$(localedir)"' \
	-DPACKAGE_SRC_DIR=\""$(srcdir)"\" \
	-DPACKAGE_DATA_DIR='"$(pkgdatadir)"' \
	-DSYSCONFDIR='"$(sysconfdir)"' \
	-DLOCALSTATEDIR='"$(localstatedir)"' \
	-DDATADIR='"$(datadir)"'

AM_CFLAGS =\
	 -Wall\
	 -pg

bin_PROGRAMS = progname

progname_SOURCES = \
	main.c \

progname_CFLAGS = $(MODNAME_CFLAGS)
bin_LDADD = $(MODNAME_LIBS)
