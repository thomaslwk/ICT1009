QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    Bodypart.cpp \
    Eyes.cpp \
    Face.cpp \
    Female.cpp \
    Male.cpp \
    Mouth.cpp \
    Nose.cpp \
    X_MEN.cpp \
    child.cpp \
    main.cpp \
    mainwindow.cpp \
    parent.cpp

HEADERS += \
    Bodypart.h \
    Eyes.h \
    Face.h \
    Female.h \
    Male.h \
    Mouth.h \
    Nose.h \
    X_MEN.h \
    child.h \
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

DISTFILES += \
    Images/female/eyes/female_eyes_1.jpg \
    Images/female/eyes/female_eyes_2.jpg \
    Images/female/eyes/female_eyes_3.jpg \
    Images/female/eyes/female_eyes_4.jpg \
    Images/female/eyes/female_eyes_5.jpg
