#include "Person.h"

Person::Person() {
    this -> name = "";
}

Person::Person(string name) {
    this -> name = name;
}

void Person::setName(string name) {
    this -> name = name;
}

string Person::getName() {
    return name;
}