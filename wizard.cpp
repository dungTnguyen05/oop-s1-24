#include "wizard.h"

Wizard::Wizard(string name, int health, int damage, int mana): Player(name, health, damage), mana(mana) {
}
void Wizard::castSpell(Player *opponent) {
    opponent -> takeDamage(mana);
    cout << this->name << " casts a spell on " << opponent -> getName() << " for " << damage << " damage." << endl;
}

void Wizard::setMana(int set_mana) {
    mana = set_mana;
}
int Wizard::getMana() {
    return mana;
}