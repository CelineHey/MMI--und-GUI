TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        dynamicgameentity.cpp \
        enemy.cpp \
        evilrock.cpp \
        game.cpp \
        main.cpp \
        player.cpp \
        rock.cpp \
        staticgameentity.cpp \
        tree.cpp

HEADERS += \
    dynamicgameentity.h \
    evilrock.h \
    game.h \
    gameentity.h \
    player.h \
    rock.h \
    staticgameentity.h \
    tree.h
