#include <iostream>
using namespace std;
extern int median_array(int array[], int n);

int main() {
    int a[5] = {1, 9, 7, 1, 1};
    int x = 5;
    cout << median_array(a, x) << endl;

    int b[6] = {1, 9, 0, 7, 1, 1};
    int y = 6;
    cout << median_array(b, y) << endl;

    int c[0] = {};
    int z = 0;
    cout << median_array(c, z) << endl;
}