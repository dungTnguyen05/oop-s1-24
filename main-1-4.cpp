#include <iostream>
using namespace std;
extern int sum_two_arrays(int array[], int secondarray[], int n);

int main() {
    int a[3] = {1, 2, 3};
    int m[3] = {6, 5, 4};
    int x = 3;
    cout << sum_two_arrays(a, m, x) << endl;

    int b[3] = {1, 6, 5};
    int n[3] = {2, 3, 4};
    int y = 3;
    cout << sum_two_arrays(b, n, y) << endl;

    int c[0] = {};
    int p[0] = {};
    int z = 0;
    cout << sum_two_arrays(c, p, z) << endl;
}