#include <iostream>
#include "Unit.h"
using namespace std;

int main() {
    Unit a(190711, 3, 36);
    cout << a.get_Value() << " " << a.get_Num_Bedrooms() << " " << a.get_Area() << endl;

    Unit b;
    cout << b.get_Value() << " " << b.get_Num_Bedrooms() << " " << b.get_Area() << endl;

    Unit c(-1, -2, -3);
    cout << c.get_Value() << " " << c.get_Num_Bedrooms() << " " << c.get_Area() << endl;
}