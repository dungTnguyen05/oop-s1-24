#include <iostream>
using namespace std;

extern void print_scaled(int array[3][3], int scale);

int main() {
    int a[3][3] {{1, 9, 7}, {7, 1, 1}, {1, 5, 9}};
    int x = 5;
    print_scaled(a, x);

    int b[3][3] = {{3, 1, 4}, {2, 7, 1}, {1, 4, 1}};
    int y = 8;
    print_scaled(b, y);

    int c[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int z = -1;
    print_scaled(c, z);
}