TARGET = Cli

# Command Line Interface
DEFINES += USE_CLI=1
CONFIG += console

# Include common config
!include(../Grabber.pri) {
    error("Could not find the common configuration file!")
}

# TODO: remove these dependencies
QT += multimedia widgets
FORMS += ../ui/*.ui
use_qscintilla {
    DEFINES += USE_QSCINTILLA=0
    LIBS -= -lqscintilla2
}
# end TODO

# Input
HEADERS += ../includes/*.h ../vendor/*.h
SOURCES += ../source/*.cpp ../vendor/*.cpp