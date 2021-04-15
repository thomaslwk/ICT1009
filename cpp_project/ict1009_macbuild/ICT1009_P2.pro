QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    Bodypart.cpp \
    Child.cpp \
    Eyes.cpp \
    Face.cpp \
    Female.cpp \
    Male.cpp \
    Mouth.cpp \
    Nose.cpp \
    X_MEN.cpp \
    main.cpp \
    mainwindow.cpp \
    parent.cpp \

HEADERS += \
    Bodypart.h \
    Child.h \
    Eyes.h \
    Face.h \
    Female.h \
    Male.h \
    Mouth.h \
    Nose.h \
    X_MEN.h \
    mainwindow.h \
    parent.h

FORMS += \
    mainwindow.ui \
    parent.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    resource.qrc
