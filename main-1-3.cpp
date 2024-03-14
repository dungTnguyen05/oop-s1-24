#include <iostream>
using namespace std;

double *duplicateArray(double *array, int size);

int main() {
    double a[4] = {19.7, 7.11, 15.9, 20.05};
    int x = 4;
    double *m = duplicateArray(a, x);

    for (int i = 0; i < x; i++) {
        cout << m[i] << " ";
    }

    cout << endl;

    double b[3] = {3.14, 2.71828, 1.4142};
    int y = 3;
    double *n = duplicateArray(b, y);

    for (int i = 0; i < y; i++) {
        cout << n[i] <<" "; 
    }

    cout << endl;
}