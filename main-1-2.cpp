#include <iostream>
using namespace std;

extern void modifyArray(double *array, int size, double value);

int main() {
    double a[4] = {19.7, 7.11, 3.1415, 2.71828};
    int x = 4;
    double val1 = 15.9;
    modifyArray(a, x, val1);

    for (int i = 0; i < x; i++) {
        cout << a[i] << " "; 
    }

    cout << endl; 

    double b[4] = {19.07, 7.11, 15.09, 20.05};
    int y = 4;
    double val2 = 6.8;
    modifyArray(b, y, val2);

    for (int i = 0; i < y; i++) {
        cout << b[i] << " ";
    }

    cout << endl;
}