DISTFILES += \
    $$PWD/fr_FR.ts

TRANSLATIONS += \
    $$PWD/fr_FR.ts

CONFIG += lrelease embed_translations
QM_FILES_RESOURCE_PREFIX = translations
PRE_TARGETDEPS += compiler_lrelease_make_all
