#include <iostream>
#include "Unit.h"
using namespace std;

int main() {
    Unit a(190711, 3, 36);
    cout << a.get_Value() << endl;
    cout << a.get_Num_Bedrooms() << endl;
    cout << a.get_Area() << endl;

    Unit b;
    cout << b.get_Value() << endl;
    cout << b.get_Num_Bedrooms() << endl;
    cout << b.get_Area() << endl;
}