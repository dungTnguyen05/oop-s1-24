#ifndef WIZARD_H
#define WIZARD_H

#include <iostream>
#include "player.h"
using namespace std;

class Wizard: public Player {
    private:
        int mana;
    public:
        Wizard(string name, int health, int damage, int mana);
        void castSpell(Player *opponent);

        void setMana(int set_mana);
        int getMana();
};

#endif