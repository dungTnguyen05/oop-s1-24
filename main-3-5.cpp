#include <iostream>
using namespace std;
extern double sum_even(double array[], int n);

int main() {
    double a[7] = {1, 2, 3, 4, 5, 6, 7};
    int x = 7;
    cout << sum_even(a, x) << endl;

    double b[5] = {3.1415, 19.07, 2.71828, 07.11, 20.05};
    int y = 5;
    cout << sum_even(b, y) << endl;

    double c[0] = {};
    int z = 0;
    cout << sum_even(c, z) << endl;
}