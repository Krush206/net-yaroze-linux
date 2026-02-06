noinst_LIBRARIES= hss
hss_SOURCES	= ecoff.h errlog.h hss.h sio.h \
		errlog.c hss.c sio.c

DBLEV	= 0
CPPFLAGS= @CPPFLAGS@ -DDBLEV=$(DBLEV) \
	-DPACKAGE='"$(PACKAGE)"' -DVERSION='"$(VERSION)"'
