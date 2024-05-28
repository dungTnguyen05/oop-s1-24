#include <iostream>
#include "GameEntity.h"
#include "Effect.h"
#include "Utils.h"

int main() {
    srand(time(0));
    tuple<int, int> pos1 = Utils::generateRandomPos(10, 10);
    tuple<int, int> pos2 = Utils::generateRandomPos(10, 10);

    double dist = Utils::calculateDistance(pos1, pos2);
    cout << dist << endl;
}