#include <iostream>
using namespace std;

extern double arrayMin(double *array, int size);

int main() {
    double a[6] = {1, 9, 7, 7, 1, 1};
    int x = 6;
    cout << arrayMin(a, x) << endl;

    double b[5] = {3, 1, 4, 1, 5};
    int y = 5;
    cout << arrayMin(b, y) << endl;

    double c[4] = {6, 8, 68, 86};
    int z = 4;
    cout << arrayMin(c, z) << endl;
}