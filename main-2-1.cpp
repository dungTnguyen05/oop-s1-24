#include <iostream>
using namespace std;

extern int *readNumbers();
extern void hexDigits(int *numbers, int length);

int main() {
    int *a = readNumbers();
    int len = 10;
    hexDigits(a, len);
    delete[] a;
}