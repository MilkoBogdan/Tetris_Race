#include "blakspace.h"

void BlankSpace::draw()
{
    gotoXY(column * Racecar_WIDTH, line * Racecar_HEIGHT);
    printItem(ItemType::EMPTY_SPACE);
    printItem(ItemType::EMPTY_SPACE);
    printItem(ItemType::EMPTY_SPACE);
    printItem(ItemType::EMPTY_SPACE);
    printItem(ItemType::EMPTY_SPACE);
    printItem(ItemType::EMPTY_SPACE);
    gotoXY(column * Racecar_WIDTH, (line * Racecar_HEIGHT) + 1);
    printItem(ItemType::EMPTY_SPACE);
    printItem(ItemType::EMPTY_SPACE);
    printItem(ItemType::EMPTY_SPACE);
    printItem(ItemType::EMPTY_SPACE);
    printItem(ItemType::EMPTY_SPACE);
    printItem(ItemType::EMPTY_SPACE);
    gotoXY(column * Racecar_WIDTH, (line * Racecar_HEIGHT) + 2);
    printItem(ItemType::EMPTY_SPACE);
    printItem(ItemType::EMPTY_SPACE);
    printItem(ItemType::EMPTY_SPACE);
    printItem(ItemType::EMPTY_SPACE);
    printItem(ItemType::EMPTY_SPACE);
    printItem(ItemType::EMPTY_SPACE);
    gotoXY(column * Racecar_WIDTH, (line * Racecar_HEIGHT) + 3);
    printItem(ItemType::EMPTY_SPACE);
    printItem(ItemType::EMPTY_SPACE);
    printItem(ItemType::EMPTY_SPACE);
    printItem(ItemType::EMPTY_SPACE);
    printItem(ItemType::EMPTY_SPACE);
    printItem(ItemType::EMPTY_SPACE);
}
