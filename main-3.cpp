#include "Game.h"

int main() {
    Game g;
    g.initGame(5, 8, 10, 10);
    g.gameLoop(6, 9);

    Game gg;
    gg.initGame(3, 8, 10, 10);
    gg.gameLoop(5, 10);
}