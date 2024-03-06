#include <iostream>
using namespace std;

extern int sum_if_palindrome(int integers[], int length);

int main() {
    int a[9] = {1, 2, 3, 4, 5, 4, 3, 2, 1};
    int x = 9;
    cout << sum_if_palindrome(a, x) << endl;

    int b[10] = {1, 2, 3, 4, 5, 6, 4, 3, 2, 1};
    int y = 10;
    cout << sum_if_palindrome(b, y) << endl;

    int c[0] = {};
    int z = 0;
    cout << sum_if_palindrome(c, z) << endl;
}