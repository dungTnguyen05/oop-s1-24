#include <iostream>
using namespace std;

extern void count_digits(int array[4][4]);

int main() {
    int a[4][4] = {{2, 4, 5, 1}, {5, 6, 9, 1}, {5, 7, 1, 1}, {5, 2, 5, 1}};
    count_digits(a);

    int b[4][4] = {{10, 11, 12, 13}, {14, 15, 16, 17}, {18, 19, 20, 21}, {22, 23, 24, 25}};
    count_digits(b);

    int c[4][4] = {{1, 1, 1, 1}, {1, 1, 1, 1}, {1, 1, 1, 1}, {1, 1, 1, 1}};
    count_digits(c);
}