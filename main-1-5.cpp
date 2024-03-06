#include <iostream>
using namespace std;

extern void print_summed(int array1[3][3], int array2[3][3]);

int main() {
    int a1[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int a2[3][3] = {{9, 8, 7}, {6, 5, 4}, {3, 2, 1}};
    print_summed(a1, a2); 

    int b1[3][3] = {{1, 9, 7}, {7, 1, 1}, {1, 5, 9}};
    int b2[3][3] = {{7, 1, 9}, {1, 1, 7}, {9, 1, 5}};
    print_summed(b1, b2);

    int c1[3][3] = {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}};
    int c2[3][3] = {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}};
    print_summed(c1, c2);
}