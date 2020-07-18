QT          += core gui widgets network
CONFIG      += c++17
DEFINES     += QT_DEPRECATED_WARNINGS

LIBS += -L$$PWD/third-party/xblog/lib -lxblog
INCLUDEPATH += $$PWD/third-party/xblog/include

LIBS += -L$$PWD/third-party/xbapplication/lib -lxbapplication
INCLUDEPATH += $$PWD/third-party/xbapplication/include

SUBDIRS += \
    src/ \
    res/

include(src/src.pri)
include(res/res.pri)

TEMPLATE     = app
TARGET       = vedeo
