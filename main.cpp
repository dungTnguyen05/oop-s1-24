#include <iostream>
#include "workshop.h"
using namespace std;

int main() {
    double a[6] = {1, 9, 7, 7, 1, 1};

    changeValue(a + 5);
    cout << a[5] << endl;

    printArray(a, 6);

    cout << arrayMax(a, 6);
    cout << endl;

    double *x = dynamicArray(6, 8);

    for (int i = 0; i < 6; i++) {
        cout << x[i] << " ";
    }

    cout << endl;

    double b[10] = {3, 1, 4, 1, 5, 2, 7, 1, 8, 2};

    changeValue(&b[6]);
    cout << b[6] << endl;

    printArray(b, 10);

    cout << arrayMax(b, 10);
    cout << endl;

    double *y = dynamicArray(10, 10);

    for (int i = 0; i < 10; i++) {
        cout << y[i] << " ";
    }

    cout << endl;
}