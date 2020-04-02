SUBDIRS += \
    widgets/

include(widgets/widgets.pri)

SOURCES += \
    $$PWD/application.cpp \
    $$PWD/main.cpp \
    $$PWD/mainwindow.cpp \
    $$PWD/settings.cpp \
    $$PWD/vedeoapplication.cpp \
    $$PWD/vedeomainwindow.cpp

HEADERS += \
    $$PWD/application.h \
    $$PWD/mainwindow.h \
    $$PWD/settings.h \
    $$PWD/vedeoapplication.h \
    $$PWD/vedeomainwindow.h
