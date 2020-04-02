QT          += core gui widgets network
CONFIG      += c++17
DEFINES     += QT_DEPRECATED_WARNINGS

SUBDIRS += \
    src/ \
    res/

include(src/src.pri)
include(res/res.pri)

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
