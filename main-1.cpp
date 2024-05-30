#include <iostream>
#include "Cell.h"
#include "Effect.h"
#include "Utils.h"

int main() {
    Cell a(1, 2, 'A');
    Cell b(3, 4, 'B');

    cout << Utils::calculateDistance(a.getPos(), b.getPos()) << endl;
}