#include <iostream>
using namespace std;
extern bool is_ascending(int array[], int n);

int main() {
    int a[6] = {1, 1, 2, 2, 3, 3};
    int x = 6;
    cout << is_ascending(a, x) << endl;

    int b[5] = {1, 1, 7, 9, 1};
    int y = 5;
    cout << is_ascending(b, y) << endl;

    int c[0] = {};
    int z = 0;
    cout << is_ascending(c, z) << endl;
}