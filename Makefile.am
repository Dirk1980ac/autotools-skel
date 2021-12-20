AUTOMAKE_OPTIONS = foreign

SUBDIRS = src tests

# DOXYGEN SUPPORT
include $(top_srcdir)/aminclude.am

# Uncomment if you use Intltool
# INTLTOOL_FILES = intltool-extract.in \
#	intltool-merge.in \
#	intltool-update.in

# ensure the distribution of the doxygen configuration file
EXTRA_DIST = autogen.sh 
#	$(INTLTOOL_FILES) \
#	doxygen.cfg 

dist_doc_DATA = \
	README \
	COPYING \
	AUTHORS \
	ChangeLog \
	INSTALL \
	NEWS

# Remove doc directory on uninstall
uninstall-local:
	-rm -r $(docdir)

