#include <iostream>
using namespace std;

int *readNumbers() {
    int *a = new int[10];

    for (int i = 0; i < 10; i++) {
        cout << "Enter a number: ";
        cin >> a[i];
    }

    return a;
}

void printNumbers(int *numbers, int length) {
    for (int i = 0; i < length; i++) {
        cout << i << " " << numbers[i] << endl;
    }
}