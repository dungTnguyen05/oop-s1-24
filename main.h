#include <iostream>
#include <tuple>
#include <vector>
#include <cmath>
using namespace std;

class Cell {
    protected:
        tuple<int, int> position;
        char type;
        
    public:
        Cell(int x, int y, char type) {
            this -> position = make_tuple(x, y);
            this -> type = type;
        }

        tuple<int, int> getPos() {
            return position;
        }

        char getType() {
            return type;
        }

        void setPos(int x, int y) {
            this -> position = make_tuple(x, y);
        }

        void setType(char type) {
            this -> type = type;
        }
};

class Effect {
    public:
        virtual void apply(Cell& cell) = 0;
};

class Utils {
    public:
        static tuple<int, int> generateRandomPos(int gridWidth, int gridHeight) {
            return make_tuple(rand() % gridWidth, rand() % gridHeight);
        }

        static double calculateDistance(tuple<int, int> pos1, tuple<int, int> pos2) {
            return sqrt(pow(get<0>(pos1) - get<0>(pos2), 2) + pow(get<1>(pos1) - get<1>(pos2), 2));
        }
};

class Character: public Cell {
    public: 
        Character(int x, int y): Cell(x, y, 'C') {
        }

        void move(int dx, int dy) {
            get<0>(position) += dx;
	        get<1>(position) += dy;
        }
};

class Trap: public Cell, public Effect {
    private:
        bool active;
    public:
        Trap(int x, int y): Cell(x, y, 'T') {
            // this -> active = true;
        }

        bool isActive() {
            return active;
        }

        void apply(Cell& cell) {
            cell.setType('T');
            this -> active = false;
        }
};

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

/*
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
*/