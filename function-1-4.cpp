#include <iostream>
#include "Person.h"
using namespace std;

PersonList shallowCopyPersonList(PersonList pl) {
    PersonList arr = pl;
    return arr;
}