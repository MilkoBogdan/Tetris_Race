#include <iostream>
#include <fstream>

#include "console.h"

#include "racecar.h"
#include "roadmap.h"

#include "application_loop.h"
#include "timer.h"

using namespace std;

static RoadMap map;

void refreshScreen()
{
    map.moveBulletUp();
    map.moveBulletDown();
    clearScreen();
    map.draw();
}

void functionMoveNpcVehicles()
{
    map.moveNpcVehicles();
}

void NpcVehicleShoot()
{
    map.NpcVehicleShoot();
}

void onKeyPressed(KeyType *key)
{
    if (*key == KeyType::ARROW_LEFT)
    {
        map.movePlayerLeft();
    }
    else if (*key == KeyType::ARROW_RIGHT)
    {
        map.movePlayerRight();
    }
    else if (*key == KeyType::SPACE_BAR)
    {
        map.drawBullet();
    }
    else if (*key == KeyType::QUIT)
    {
        exit(EXIT_SUCCESS);
    }

    clearScreen();
    map.draw();

    delete key;
}

int main()
{
    application_loop app;

    setCursorVisible(false);
    map.draw();

    timer updateTimer;
    updateTimer.setTimeout(50);
    updateTimer.onTimeout(refreshScreen);
    updateTimer.start();

    app.run(onKeyPressed);

    return 0;
}
