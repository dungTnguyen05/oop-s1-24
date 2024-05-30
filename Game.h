#ifndef GAME_H
#define GAME_H

#include <iostream>
#include <vector>
#include "Cell.h"
#include "Character.h"
#include "Trap.h"
#include "Utils.h"

class Game {
    private:
        vector<Cell*> grid;
        int width;
        int height;
    public:
        vector<Cell*>& getGrid() {
            return grid;
        }

        void initGame(int numCharacters, int numTraps, int gridWidth, int gridHeight) {
            this -> width = gridWidth;
            this -> height = gridHeight;

            for (int i = 0; i < numCharacters; i++) {
                tuple<int, int> randPos = Utils::generateRandomPos(gridWidth, gridHeight);
                grid.push_back(new Character(get<0>(randPos), get<1>(randPos)));
            }

            for (int i = 0; i < numTraps; i++) {
                tuple<int, int> randPos = Utils::generateRandomPos(gridWidth, gridHeight);
                grid.push_back(new Trap(get<0>(randPos), get<1>(randPos)));
            }
        }

        void gameLoop(int maxIterations, double trapActivationDistance) {
            for (int i = 0; i < maxIterations; i++) {
                for (Cell* character: grid) {
                    if (character -> getType() == 'C') {
                        static_cast<Character*>(character) -> move(1, 0);

                        if (get<0>(character -> getPos()) > width || get<1>(character -> getPos()) > height) {
                            cout << "Character has won the game!" << endl;
                            return;
                        }

                        for (Cell* trap: grid) {
                            if (trap -> getType() == 'T') {
                                double dist = Utils::calculateDistance(trap -> getPos(), character -> getPos());

                                if (dist <= trapActivationDistance && static_cast<Trap*>(trap) -> isActive()) {
                                    static_cast<Trap*>(trap) -> apply(*character);
                                }
                            }
                        }
                    }
                }
            }

            cout << "Maximum number of iterations reached. Game over." << endl;
        }
};

#endif