#include "player.h"

Player::Player(string name, int health, int damage) {
    name = name;
    health = health;
    damage = damage;
}

void Player::attack(Player *opponent, int damage) {
    opponent -> health -= damage;
}

void Player::takeDamage(int damage) {
    health -= damage;
    cout << name << " takes " << damage << " damage. Remaining health: " << health << endl;
}

void Player::setName(string set_name) {
    name = set_name;
}

string Player::getName() {
    return name;
}

void Player::setHealth(int set_health) {
    health = set_health;
}

int Player::getHealth() {
    return health;
}

void Player::setDamage(int set_damage) {
    damage = set_damage;
}

int Player::getDamage() {
    return damage;
}