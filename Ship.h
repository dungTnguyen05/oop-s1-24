#ifndef SHIP_H
#define SHIP_H

#include "GameEntity.h"	

class Ship: public GameEntity {
    public:
        Ship(int x, int y): GameEntity(x, y, 'S') {
        }

        void move(int dx, int dy) {
            this -> position = make_tuple(get<0>(position) + dx, get<0>(position) + dy);
            this -> type = 'S';
        }

        ~Ship() {
        }
};

#endif