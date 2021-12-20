## Process this file with automake to produce Makefile.in


AM_CPPFLAGS = \
	-DPACKAGE_LOCALE_DIR='"$(localedir)"' \
	-DPACKAGE_SRC_DIR=\""$(srcdir)"\" \
	-DPACKAGE_DATA_DIR='"$(pkgdatadir)"' \
	-DSYSCONFDIR='"$(sysconfdir)"' \
	-DLOCALSTATEDIR='"$(localstatedir)"' \
	-DDATADIR='"$(datadir)"' \

AM_CFLAGS =\
	 -Wall\
	 -pg

TESTS = tests
check_PROGRAMS = tests
test_SOURCES = tests.c
#	$(top_builddir)/src/hdrfile.h \
#	$(top_builddir)/src/srcfile.c

test_parser_CFLAGS = $(PRJNAME_CFLAGS) $(CHECK_CFLAGS)
test_parser_LDADD = $(PRJNAME_LIBS)  $(CHECK_LIBS) -lpthread @CHECK_LIBS@
