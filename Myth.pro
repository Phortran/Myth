#-------------------------------------------------
#
# Project created by QtCreator 2017-12-24T01:32:30
#
#-------------------------------------------------
load(configure)

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Myth
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

# Folders (using folder structure conventions)
SRCDIR = src
SRCINCLUDEDIR = $$SRCDIR/include
SRCUIDIR = $$SRCDIR/ui
SRCUIFORMSDIR = $$SRCUIDIR/forms
BUILDDIR = build

SOURCES += \
        $$SRCDIR/main.cpp \
        $$SRCUIDIR/guibase.cpp

HEADERS += \
        $$SRCINCLUDEDIR/guibase.h

FORMS += \
        $$SRCUIFORMSDIR/guibase.ui

INCLUDEPATH += $$SRCINCLUDEDIR

# Build dir
DESTDIR = $$BUILDDIR
OBJECTS_DIR = $$BUILDDIR

# Unit tests
QMAKE_CONFIG_TESTS_DIR = test
qtCompileTest(voidtest)
