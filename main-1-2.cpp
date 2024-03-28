#include <iostream>
#include "ApartmentBuilding.h"
#include "Unit.h"
using namespace std;

int main() {
    ApartmentBuilding a(3);
    cout << a.get_Capacity() << endl;

    Unit x(190711, 3, 36);
    cout << a.add_Unit(x) << endl;
    cout << a.get_Current_Number_of_Units() << endl;

    Unit y(150923, 2, 48);
    cout << a.add_Unit(y) << endl;
    cout << a.get_Current_Number_of_Units() << endl;

    Unit z(123456, 4, 24);
    cout << a.add_Unit(z) << endl;
    cout << a.get_Current_Number_of_Units() << endl;

    Unit t(987654, 5, 72);
    cout << a.add_Unit(t) << endl;
    cout << a.get_Current_Number_of_Units() << endl;

    Unit *arr = a.get_Contents();

    for (int i = 0; i < a.get_Capacity(); i++) {
        cout << arr[i].get_Value() << " " << arr[i].get_Num_Bedrooms() << " " << arr[i].get_Area() << endl;
    }
}