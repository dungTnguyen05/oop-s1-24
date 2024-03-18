#include <iostream>
#include "Person.h"
using namespace std;

extern Person *createPersonArray(int n);

int main() {
    int a = 5;
    Person *x = createPersonArray(a);

    for (int i = 0; i < a; i++) {
        cout << x[i].name << ", " << x[i].age << endl;
    }
}
