QMFILES = \
	mm3d_de.qm \
	mm3d_fr.qm \
	mm3d_sk.qm \
	mm3d_ref.qm \
	mm3d_bork.qm \
	qt_ar.qm \
	qt_cs.qm \
	qt_de.qm \
	qt_fr.qm \
	qt_iw.qm \
	qt_ru.qm \
	qt_sk.qm \
	qt_zh_CN.qm 

TSFILES = \
	$(srcdir)/mm3d_ref.ts \
	$(srcdir)/mm3d_de.ts \
	$(srcdir)/mm3d_fr.ts \
	$(srcdir)/mm3d_sk.ts \
	$(srcdir)/mm3d_bork.ts 

QTFILES = \
	qt_ar.ts \
	qt_cs.ts \
	qt_de.ts \
	qt_fr.ts \
	qt_iw.ts \
	qt_ru.ts \
	qt_sk.ts \
	qt_zh_CN.ts \
	qt_untranslated.ts

EXTRA_DIST = \
	$(QMFILES) \
	$(TSFILES) \
	$(QTFILES)

BUILT_SOURCES = $(QMFILES)
	
all:

tsfiles:
	lupdate $(srcdir)/../src/*.cc $(srcdir)/../src/*/*.cc $(srcdir)/../src/*.h $(srcdir)/../src/*/*.h $(srcdir)/../src/qtui/*.ui -ts $(TSFILES)

qmfiles: $(QMFILES)

%.qm: %.ts
	$(QT_LRELEASE) $< -qm $@

install:
	$(INSTALL) -d $(DESTDIR)$(datadir)/mm3d/i18n
	${INSTALL} -m 0644 $(QMFILES) $(DESTDIR)$(datadir)/mm3d/i18n
