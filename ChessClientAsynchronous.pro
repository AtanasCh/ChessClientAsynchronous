QT += core
QT -= gui
QT += network widgets

CONFIG += c++11

TARGET = ChessClientAsynchronous
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    client.cpp \
    gui/connectwindow.cpp \
    chess-logic/checkchecker.cpp \
    chess-logic/controller.cpp \
    chess-logic/specialmoveshandler.cpp \
    chess-state/cell.cpp \
    chess-state/player.cpp \
    chess-state/state.cpp \
    chess-utils/coordinate.cpp \
    gui/cellbutton.cpp \
    gui/choosepiecewindow.cpp \
    gui/gameoptionswindow.cpp \
    gui/uihelperfunc.cpp \
    pieces/bishop.cpp \
    pieces/king.cpp \
    pieces/knight.cpp \
    pieces/pawn.cpp \
    pieces/piece.cpp \
    pieces/queen.cpp \
    pieces/rook.cpp \
    mainwindow.cpp \
    gui/localoronline.cpp

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

HEADERS += \
    client.h \
    gui/connectwindow.h \
    chess-logic/checkchecker.h \
    chess-logic/controller.h \
    chess-logic/specialmoveshandler.h \
    chess-state/cell.h \
    chess-state/gametype.h \
    chess-state/player.h \
    chess-state/state.h \
    chess-utils/color.h \
    chess-utils/coordinate.h \
    gui/cellbutton.h \
    gui/choosepiecewindow.h \
    gui/gameoptionswindow.h \
    gui/uihelperfunc.h \
    pieces/bishop.h \
    pieces/king.h \
    pieces/knight.h \
    pieces/pawn.h \
    pieces/piece.h \
    pieces/queen.h \
    pieces/rook.h \
    mainwindow.h \
    gui/localoronline.h

FORMS += \
    gui/connectwindow.ui \
    gui/choosepiecewindow.ui \
    gui/gameoptionswindow.ui \
    mainwindow.ui \
    gui/choosepiecewindow.ui \
    gui/gameoptionswindow.ui \
    mainwindow.ui \
    gui/localoronline.ui

RESOURCES += \
    gui/resource_pieces_images.qrc \
    gui/resource_pieces_images.qrc

DISTFILES += \
    gui/Images/Thumbs.db \
    gui/Images/CarB.png \
    gui/Images/CarW.png \
    gui/Images/DamaB.png \
    gui/Images/DamaW.png \
    gui/Images/KonB.png \
    gui/Images/KonW.png \
    gui/Images/OficerB.png \
    gui/Images/OficerW.png \
    gui/Images/PeshkaB.png \
    gui/Images/PeshkaW.png \
    gui/Images/TopB.png \
    gui/Images/TopW.png \
    .gitignore \
    gui/Images/Thumbs.db \
    gui/Images/CarB.png \
    gui/Images/CarW.png \
    gui/Images/DamaB.png \
    gui/Images/DamaW.png \
    gui/Images/KonB.png \
    gui/Images/KonW.png \
    gui/Images/OficerB.png \
    gui/Images/OficerW.png \
    gui/Images/PeshkaB.png \
    gui/Images/PeshkaW.png \
    gui/Images/TopB.png \
    gui/Images/TopW.png \
    object_script.ChessClientAsynchronous.Debug \
    object_script.ChessClientAsynchronous.Release
