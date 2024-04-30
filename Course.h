#ifndef COURSE_H
#define COURSE_H

#include <iostream>
#include "Person.h"
using namespace std;

class Course {
    private:
        Person** persons;
    protected:
        string name;
        int courseID;
        int current = 0;
    public: 
        Course();
        Course(string name, int courseID);

        void addPerson(Person* person);

        void setName(string name);
        string getName();

        void setCourseID(int courseID);
        int getCourseID();
};

#endif