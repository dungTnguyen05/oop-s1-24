#include <iostream>
using namespace std;

extern int *readNumbers();
extern bool equalsArray(int *numbers1, int *numbers2, int length);
extern int *reverseArray(int *numbers1, int length);

int main() {
    int *a = readNumbers();
    int len = 10;
    int *b = reverseArray(a, len);
    cout << equalsArray(a, b, len) << endl;
    delete[] a;
    delete[] b;
}