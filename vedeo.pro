QT          += core gui widgets network
CONFIG      += c++17
DEFINES     += QT_DEPRECATED_WARNINGS

SUBDIRS += \
    src/ \
    res/

include(src/src.pri)
include(res/res.pri)
include(third-party/xblog/xblog.pro)
include(third-party/xbapplication/xbapplication.pro)

TEMPLATE     = app
TARGET       = vedeo
