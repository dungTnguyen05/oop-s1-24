#include <iostream>
using namespace std;

extern int *readNumbers();
extern bool equalsArray(int *numbers1, int *numbers2, int length);

int main() {
    int *a = readNumbers();
    int *b = readNumbers();
    int len = 10;
    cout << equalsArray(a, b, len) << endl;
    delete[] a;
    delete[] b;
}