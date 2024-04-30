#ifndef PERSON_H
#define PERSON_H

#include <iostream>
using namespace std;

class Person {
    protected:
        string name;
    public: 
        Person();
        Person(string name);

        void setName(string name);
        string getName();
};

#endif