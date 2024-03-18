#include <iostream>
using namespace std;

extern int *readNumbers();
extern void printNumbers(int *numbers, int length);

int main() {
    int *a = readNumbers();
    int len = 10;
    printNumbers(a, len);
    delete[] a;
}