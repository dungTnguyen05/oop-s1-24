#include "Course.h"

Course::Course() {
    this -> name = "";
    this -> courseID = 0;
}

Course::Course(string name, int courseID) {
    this -> name = name;
    this -> courseID = courseID;
}

void Course::addPerson(Person* person) {
    persons[current] = person;
    current++;
}

void Course::setName(string name) {
    this -> name = name;
}

string Course::getName() {
    return name;
}

void Course::setCourseID(int courseID) {
    this -> courseID = courseID;
}

int Course::getCourseID() {
    return courseID;
}