#include <iostream>
using namespace std;

void changeValue(double *x) {
    *x = 42;
}

void printArray(double *x, int len) {
    for (int i = 0; i < len; i++) {
        cout << *(x + i) << " ";
    }
    
    cout << endl;
}

double arrayMax(double *x, int len) {
    double res = x[0];

    for (int i = 1; i < len; i++) {
        if (x[i] > res) {
            res = x[i];
        }
    }

    return res;
}

double *dynamicArray(int len, double num) {
    double *x = new double[len];

    for (int i = 0; i < len; i++) {
        x[i] = num;
    }

    return x;
}