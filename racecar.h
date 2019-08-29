#ifndef Racecar_H
#define Racecar_H

#include "console.h"

const int Racecar_WIDTH = 6;
const int Racecar_HEIGHT = 4;

struct Racecar
{
    enum CarType
    {
        PLAYER      = 'p',
        NPCVEHICLE  = 'a',
        BULLET      = 'b',
        BLANK_SPACE = '_'
    };

    virtual~Racecar() = default;

    virtual void draw();
    virtual void moveLeft();
    virtual void moveRight();
    virtual void moveUp();
    virtual void moveDown();

    void drawBlankSpace();
    void drawNpcVehicle();
    void drawBullet();


    int line;
    int column;
    CarType type;
};

#endif // Racecar_H
