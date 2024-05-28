#ifndef GAME_H
#define GAME_H

#include "GameEntity.h"
#include "Ship.h"
#include "Mine.h"
#include "Utils.h"
#include <vector>

class Game {
    private:
        vector<GameEntity*> entities;
        int numShips;
        int numMines;
    public:
        vector<GameEntity*> get_entities() {
            return entities;
        }

        void set_entities(vector<GameEntity*> entities) {
            this -> entities = entities;
        }

        vector<GameEntity*> initGame(int numShips, int numMines, int gridWidth, int gridHeight) {
            this -> numShips = numShips;
            this -> numMines = numMines;

            for (int i = 0; i < numShips; i++) {
                tuple<int, int> shipPos = Utils::generateRandomPos(gridWidth, gridHeight);
                entities.push_back(new Ship(get<0>(shipPos), get<1>(shipPos)));
            }

            for (int i = 0; i < numMines; i++) {
                tuple<int, int> minePos = Utils::generateRandomPos(gridWidth, gridHeight);
                entities.push_back(new Mine(get<0>(minePos), get<1>(minePos)));
            }

            return entities;
        }

        void gameLoop(int maxIterations, double mineDistanceThreshold) {
            for (int i = 0; i < maxIterations; i++) {
                for (int j = 0; j < numShips; j++) {
                    Ship* ship = static_cast<Ship*>(entities[j]);
                    ship -> move(1, 0);
                }

                for (int j = numShips; j < numShips + numMines; j++) {
                    Mine* mine = static_cast<Mine*>(entities[j]);

                    for (int k = 0; k < numShips; k++) {
                        Ship* ship = static_cast<Ship*>(entities[k]);
                        double distance = Utils::calculateDistance(ship -> getPos(), mine -> getPos());

                        if (distance <= mineDistanceThreshold) {
                            Explosion e = mine -> explode();
                            e.apply(*ship);
                        }
                    }
                }
            }
        }
};

#endif