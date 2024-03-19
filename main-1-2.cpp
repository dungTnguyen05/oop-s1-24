#include <iostream>
#include "Person.h"
using namespace std;

extern PersonList createPersonList(int n);

int main() {
    int a = 6;
    PersonList x = createPersonList(a);
    cout << x.numPeople << endl;

    for (int i = 0; i < a; i++) {
        cout << x.people[i].name << ", " << x.people[i].age << endl;
    }

    int b = 8;
    PersonList y = createPersonList(b);
    cout << y.numPeople << endl;

    for (int i = 0; i < b; i++) {
        cout << y.people[i].name << ", " << y.people[i].age << endl;
    }
}