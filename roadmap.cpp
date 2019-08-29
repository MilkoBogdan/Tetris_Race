#include<iostream>
#include <fstream>
#include "roadmap.h"
#include "player.h"
#include "npcvehicle.h"
#include "bullet.h"
#include "blakspace.h"

using namespace std;

RoadMap::RoadMap()
{

    ifstream mapFile ("S:\\WORK cpp\\Proiect Final_Tetris Race\\Proiect Final_Tetris Race\\First_VERSION\\Tetris_Race\\map.txt", ifstream::in);
    if (!mapFile.is_open())
        {
        cout<< "file not found";
            exit(-1);
        }
    for (int row = 0; row < RoadMap_HEIGHT; ++row)
    {
        for (int column = 0; column < RoadMap_WIDTH; ++column)
        {

            int element = mapFile.get();
            if (element == '\n')
            {
                element = mapFile.get();
            }
            switch (element)
            {
            case Racecar::PLAYER:
            {
                player = new Player();
                player -> line = row;
                player -> column = column;
                player -> type = Racecar::PLAYER;

                break;
            }

            case Racecar::NPCVEHICLE:
            {
                NpcVehicle *NpcCar = new NpcVehicle();
                NpcCar -> line = row;
                NpcCar -> column = column;
                NpcCar -> type = Racecar::NPCVEHICLE;

                NpcVehicles.push_back(NpcCar);

                break;
            }
            case Racecar::BLANK_SPACE:
            {
                break;
            }
            case Racecar::BULLET:
            {
                Bullet *bullet = new Bullet();
                bullet -> line = row;
                bullet -> column = column;
                bullet -> type = Racecar::BULLET;

                bullets.push_back(bullet);

                break;
            }
            }
        }
    }

    mapFile.close();

}

void RoadMap::draw()
{
    for (size_t i = 0; i < NpcVehicles.size(); ++i)
    {
        NpcVehicles[i]->draw();
    }

    if (player != nullptr)
    {
        player->draw();
    }

    for (Bullet *bullet : bullets)
    {
        bullet->draw();
    }

    refreshConsole();
}

void RoadMap::movePlayerLeft()
{
    player->moveLeft();
}

void RoadMap::movePlayerRight()
{
    player->moveRight();
}

void RoadMap::moveNpcVehicles()
{

}

void RoadMap::moveBulletUp()
{
    vector<size_t> bulletsToErase;
    for(size_t i = 0; i< bullets.size(); ++i)
    {
        Bullet * bullet = bullets[i];
        bullet->moveUp();

        if(bullet->line < 0)
        {
            delete bullet;
            bulletsToErase.push_back(i);
        }

        for(size_t j = 0; j < NpcVehicles.size(); ++j)
        {
            NpcVehicle * NpcVehicle = NpcVehicles[j];
            if (bullet->line == NpcVehicle->line && bullet->column == NpcVehicle->column )
            {
                delete bullet;
                bulletsToErase.push_back(i);
                delete NpcVehicle;
                NpcVehicles.erase(NpcVehicles.begin()+ static_cast<int>(j));
            }
        }
    }

    for(size_t i = 0; i < bulletsToErase.size();++i)
    {
        bullets.erase(bullets.begin() + static_cast<int>(bulletsToErase[i] - i));
    }
}

void RoadMap::moveBulletDown()
{

}

void RoadMap::NpcVehicleShoot()
{

}

void RoadMap::drawBullet()
{
    Bullet *bullet = new Bullet();
    bullet->line = player->line ;
    bullet->column = player->column;
    bullet->type = Racecar::BULLET;

    bullets.push_back(bullet);
}
