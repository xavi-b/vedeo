SUBDIRS += \
    widgets/

include(widgets/widgets.pri)

SOURCES += \
    $$PWD/main.cpp \
    $$PWD/mainwindow.cpp \
    $$PWD/settings.cpp \
    $$PWD/vedeoapplication.cpp \
    $$PWD/vedeomainwindow.cpp

HEADERS += \
    $$PWD/mainwindow.h \
    $$PWD/settings.h \
    $$PWD/vedeoapplication.h \
    $$PWD/vedeomainwindow.h
