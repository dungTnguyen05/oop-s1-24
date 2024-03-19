#include <iostream>
#include "Person.h"
using namespace std;

extern PersonList createPersonList(int n);
extern PersonList shallowCopyPersonList(PersonList pl);

int main() {
    int a = 6;
    PersonList x = createPersonList(a);
    cout << x.numPeople << endl;

    for (int i = 0; i < x.numPeople; i++) {
        cout << x.people[i].name << ", " << x.people[i].age << endl;
    }

    PersonList y = shallowCopyPersonList(x);
    cout << y.numPeople << endl;

    for (int i = 0; i < y.numPeople; i++) {
        cout << y.people[i].name << ", " << y.people[i].age << endl;
    }

    // make sure the 2 people fields in 2 structs have the same address
    cout << x.people << endl;
    cout << y.people << endl;
}