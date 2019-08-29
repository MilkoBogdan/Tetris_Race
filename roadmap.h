#ifndef RoadMap_H
#define RoadMap_H

#include <vector>

#include "racecar.h"
#include "npcvehicle.h"
#include "bullet.h"
#include "player.h"
#include "blakspace.h"


const int RoadMap_WIDTH = 4;
const int RoadMap_HEIGHT = 10;

struct RoadMap
{
    std::vector<NpcVehicle *> NpcVehicles;
    Player *player;
    std::vector<Bullet *> bullets;
    std::vector<BlankSpace *> Blank_spaces;

    RoadMap();

    void draw();

    void movePlayerLeft();
    void movePlayerRight();
    void moveNpcVehicles();

    void moveBulletUp();
    void moveBulletDown();

    void NpcVehicleShoot();
    void drawBullet();
};

#endif // RoadMap_H
