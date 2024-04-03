#include "warrior.h"

Warrior::Warrior(string name, int health, int damage, string weapon): Player(name, health, damage) {
    weapon = weapon;
}

void Warrior::swingWeapon(Player *opponent) {
    // opponent -> health -= damage; error cuz Player *opponent is another Player/Warrior => protected can only access to its own superclass, not superclass of equivalent subclass 
    //opponent -> setHealth(health - damage); ??
    //opponent -> setHealth(opponent -> getHealth() - damage);
    opponent -> takeDamage(damage);
    cout << name << " swings their " << weapon << " at " << opponent -> getName() << "!" << endl;
}

void Warrior::setWeapon(string set_weapon) {
    weapon = set_weapon;
}

string Warrior::getWeapon() {
    return weapon;
}