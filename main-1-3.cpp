#include <iostream>
#include "Person.h"
using namespace std;

extern PersonList createPersonList(int n);
extern PersonList deepCopyPersonList(PersonList pl);

int main() {
    int a = 6;
    PersonList x = createPersonList(a);
    cout << x.numPeople << endl;

    for (int i = 0; i < x.numPeople; i++) {
        cout << x.people[i].name << ", " << x.people[i].age << endl;
    }

    PersonList y = deepCopyPersonList(x);
    cout << y.numPeople << endl;

    for (int i = 0; i < y.numPeople; i++) {
        cout << y.people[i].name << ", " << y.people[i].age << endl;
    }

    int b = 6;
    PersonList z = createPersonList(b);
    cout << z.numPeople << endl;

    for (int i = 0; i < z.numPeople; i++) {
        cout << z.people[i].name << ", " << z.people[i].age << endl;
    }

    PersonList t = deepCopyPersonList(z);
    cout << t.numPeople << endl;

    for (int i = 0; i < t.numPeople; i++) {
        cout << t.people[i].name << ", " << t.people[i].age << endl;
    }
}