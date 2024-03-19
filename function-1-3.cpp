#include <iostream>
#include "Person.h"
using namespace std;

PersonList createPersonList(int n) {
    PersonList arr;
    arr.numPeople = n;
    arr.people = new Person[arr.numPeople];

    for (int i = 0; i < arr.numPeople; i++) {
        arr.people[i].name = "Jane Doe";
        arr.people[i].age = 1;
    }

    return arr;
}

PersonList deepCopyPersonList(PersonList pl) {
    PersonList arr;
    arr.numPeople = pl.numPeople;
    arr.people = new Person[arr.numPeople];

    for (int i = 0; i < arr.numPeople; i++) {
        arr.people[i].name = pl.people[i].name;
        arr.people[i].age = pl.people[i].age;
    }

    return arr;
}