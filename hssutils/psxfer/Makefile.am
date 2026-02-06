bin_PROGRAMS	= psxfer
noinst_HEADERS	= psxfer.h
psxfer_SOURCES	= psxfer.h ecoff.c psxfer.c
psxfer_DEPENDENCIES = $(LDADD)

HSSDIR	= $(top_srcdir)/hss
LDADD	= ../hss/libhss.a

DEVICE	= @enable_siodev@
SPEED	= @enable_siospeed@
DBLEV	= 0

INCLUDES= -I$(top_srcdir)
CPPFLAGS= @CPPFLAGS@ -DDBLEV=$(DBLEV) \
	-DPACKAGE='"$(PACKAGE)"' -DVERSION='"$(VERSION)"' \
	-DDEFAULT_DEVICE='"$(DEVICE)"' -DDEFAULT_SPEED=$(SPEED)
