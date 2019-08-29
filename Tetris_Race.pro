TEMPLATE = app
CONFIG += console c++14
CONFIG -= app_bundle
CONFIG -= qt

INCLUDEPATH += \
   console \
   console/ncurses/include \
   console/ncurses/include/ncurses

SOURCES += \
    bullet.cpp \
    main.cpp \
    npcvehicle.cpp \
    player.cpp \
    racecar.cpp \
    roadmap.cpp \
    console/application_loop.cpp \
    console/console.cpp \
    blankspace.cpp



HEADERS += \
    bullet.h \
    npcvehicle.h \
    player.h \
    racecar.h \
    roadmap.h \
    console/ncurses/include/ncurses/curses.h \
    console/ncurses/include/ncurses/nc_mingw.h \
    console/ncurses/include/ncurses/nc_tparm.h \
    console/ncurses/include/ncurses/ncurses.h \
    console/ncurses/include/ncurses/ncurses_dll.h \
    console/ncurses/include/ncurses/ncurses_mingw.h \
    console/ncurses/include/ncurses/term.h \
    console/ncurses/include/ncurses/term_entry.h \
    console/ncurses/include/ncurses/termcap.h \
    console/ncurses/include/ncurses/tic.h \
    console/ncurses/include/ncurses/unctrl.h \
    console/application_loop.h \
    console/concurrent_queue.h \
    console/console.h \
    console/event.h \
    console/event_loop.h \
    console/file.hh \
    console/semaphore.h \
    console/timer.h \
    blakspace.h



LIBS += -L$$PWD/console/ncurses/lib -lncurses -lpthread

DISTFILES += \
   map.txt \
    console/ncurses/lib/libncurses.a
