#include <iostream>
using namespace std;

int *readNumbers();
int secondSmallestSum(int *numbers, int length);

int main() {
    int *a = readNumbers();
    int len = 10;
    cout << secondSmallestSum(a, len) << endl;
}