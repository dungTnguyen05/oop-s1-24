#include "warrior.h"

Warrior::Warrior(string name, int health, int damage, string weapon): Player(name, health, damage), weapon(weapon) {
}

void Warrior::swingWeapon(Player *opponent) {
    opponent -> takeDamage(damage);
    cout << name << " swings their " << weapon << " at " << opponent -> getName() << "!" << endl;
}

void Warrior::setWeapon(string set_weapon) {
    weapon = set_weapon;
}

string Warrior::getWeapon() {
    return weapon;
}