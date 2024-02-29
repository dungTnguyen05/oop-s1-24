#include <iostream>
using namespace std;
extern bool is_descending(int array[], int n);

int main() {
    int a[6] = {10, 8, 6, 4, 2, 0};
    int x = 6;
    cout << is_descending(a, x) << endl;

    int b[5] = {3, 2, 1, 2, 3};
    int y = 5;
    cout << is_descending(b, y) << endl;

    int c[0] = {};
    int z = 0;
    cout << is_descending(c, z) << endl;
}