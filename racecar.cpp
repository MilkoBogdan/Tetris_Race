#include "racecar.h"

void Racecar::draw()
{

}

void Racecar::moveLeft()
{
    if (column > 0) --column;
}

void Racecar::moveRight()
{
    if (column < 3) ++column;
}

void Racecar::moveUp()
{
    --line;
}

void Racecar::moveDown()
{
    ++line;
}
