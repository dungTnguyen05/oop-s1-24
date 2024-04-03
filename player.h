#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>
using namespace std;

class Player {
    protected:
        string name;
        int health;
        int damage;
    public:
        Player(string name, int health, int damage);
        void attack(Player *opponent, int damage);
        void takeDamage(int damage);

        void setName(string set_name);
        string getName();
        void setHealth(int set_health);
        int getHealth();
        void setDamage(int set_damage);
        int getDamage();
};

#endif