lib_LTLIBRARIES = libphyapitestshim.la

libphyapitestshim_la_CPPFLAGS= \
 -I@top_srcdir@/include        \
 $(ACE_CFLAGS)                 \
 $(libuuid_CFLAGS)             \
 $(AM_CFLAGS)

libphyapitestshim_la_SOURCES = \
 shimlayer.cc

EXTRA_DIST =                   \
 shimlayer.h                   \
 phyapitestshim.xml.in

BUILT_SOURCES =                \
 phyapitestshim.xml

libphyapitestshim_la_LIBADD=   \
 $(WIN32_EXTRA_LIBADD)        

libphyapitestshim_la_LDFLAGS=  \
 $(WIN32_EXTRA_LDFLAGS)        \
 $(ACE_LIBS)                   \
 -avoid-version

edit = sed                     \
       -e 's|@datadir[@]|$(pkgdatadir)|g'  

phyapitestshim.xml: phyapitestshim.xml.in
	$(edit) $< > $@

clean-local:
	rm -f $(BUILT_SOURCES)

install-exec-hook:	
	$(mkinstalldirs) $(DESTDIR)$(datadir)/$(PACKAGE)/xml/models/shim/phyapitest
	cp -f phyapitestshim.xml $(SCHEMAS) $(DESTDIR)$(datadir)/$(PACKAGE)/xml/models/shim/phyapitest

uninstall-local:
	rm -f $(DESTDIR)$(datadir)/$(PACKAGE)/xml/models/shim/phyapitest/phyapitestshim.xml

