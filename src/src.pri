SUBDIRS += \
    widgets/

include(widgets/widgets.pri)

SOURCES += \
    $$PWD/application.cpp \
    $$PWD/filelogger.cpp \
    $$PWD/logger.cpp \
    $$PWD/main.cpp \
    $$PWD/mainwindow.cpp \
    $$PWD/settings.cpp \
    $$PWD/vedeoapplication.cpp \
    $$PWD/vedeomainwindow.cpp

HEADERS += \
    $$PWD/application.h \
    $$PWD/filelogger.h \
    $$PWD/log.h \
    $$PWD/logger.h \
    $$PWD/mainwindow.h \
    $$PWD/settings.h \
    $$PWD/vedeoapplication.h \
    $$PWD/vedeomainwindow.h
