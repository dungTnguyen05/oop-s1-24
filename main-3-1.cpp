#include <iostream>
using namespace std;
extern bool is_fanarray(int array[], int n);

int main() {
    int a[5] = {6, 8, 9, 8, 6};
    int x = 5;
    cout << is_fanarray(a, x) << endl;

    int b[4] = {1, 10, 10, 1};
    int y = 4;
    cout << is_fanarray(b, y) << endl;

    int c[0] = {};
    int z = 0;
    cout << is_fanarray(c, z) << endl;
}