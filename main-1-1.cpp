#include <iostream>
#include "Person.h"
using namespace std;

extern Person *createPersonArray(int n);

int main() {
    int a = 6;
    Person *x = createPersonArray(a);

    for (int i = 0; i < a; i++) {
        cout << x[i].name << ", " << x[i].age << endl;
    }

    delete[] x;

    int b = 8;
    Person *y = createPersonArray(b);

    for (int i = 0; i < b; i++) {
        cout << y[i].name << ", " << y[i].age << endl;
    }

    delete[] y;
}
