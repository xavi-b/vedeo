QT          += core gui widgets network
CONFIG      += c++17
DEFINES     += QT_DEPRECATED_WARNINGS

SUBDIRS += \
    src/ \
    res/

include(src/src.pri)
include(res/res.pri)

LIBS += -L$$PWD/third-party/xblog/
LIBS += -lxblog
INCLUDEPATH += $$PWD/third-party/xblog/src/
DEPENDPATH += $$PWD/third-party/xblog/src/

LIBS += -L$$PWD/third-party/xbapplication/
LIBS += -lxbapplication
INCLUDEPATH += $$PWD/third-party/xbapplication/src/
DEPENDPATH += $$PWD/third-party/xbapplication/src/
