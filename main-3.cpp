#include "Game.h"
using namespace std;

int main() {
    Game g;
    vector<GameEntity*> entities = g.initGame(5, 5, 10, 10);
    g.gameLoop(5, 3);
}