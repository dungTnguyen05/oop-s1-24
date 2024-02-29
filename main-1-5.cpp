#include <iostream>
using namespace std;
int count_evens(int number);

int main() {
    int a = 10;
    cout << count_evens(a) << endl;

    int b = 11;
    cout << count_evens(b) << endl;

    int c = -1;
    cout << count_evens(c) << endl;
}