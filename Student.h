#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include "Person.h"
using namespace std;

class Student: public Person {
    private: 
        int studentID;
    public: 
        Student();
        Student(string name, int studentID);

        void setID(int studentID);
        int getID();
};

#endif