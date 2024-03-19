#include <iostream>
#include "Person.h"
using namespace std;

PersonList createPersonList(int n) {
    PersonList arr;
    arr.numPeople = n;
    arr.people = new Person[n];

    for (int i = 0; i < n; i++) {
        arr.people[i].name = "Jane Doe";
        arr.people[i].age = 1;
    }

    return arr;
}