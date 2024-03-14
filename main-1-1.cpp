#include <iostream>
using namespace std;

extern double arrayMin(double *array, int size);

int main() {
    double a[6] = {1, 9, 7, 7, 1, 1};
    int x = 6;
    cout << arrayMin(a, x) << endl;

    double b[5] = {3.1415, 2.71828, 1.4142, 15.09, 20.05};
    int y = 5;
    cout << arrayMin(b, y) << endl;

    double c[4] = {6, 8, 6.8, 8.6};
    int z = 4;
    cout << arrayMin(c, z) << endl;
}