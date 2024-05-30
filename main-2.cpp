#include <iostream>
#include "Character.h"
#include "Trap.h"

int main() {
    Character c(1, 2);
    Trap t(3, 4);

    c.move(5, 6);
    t.apply(c);
}