#include "Student.h"

Student::Student(): Person() {
}

Student::Student(string name, int studentID): Person(name) {
    this -> studentID = studentID;
}

void Student::setID(int studentID) {
    this -> studentID = studentID;
}

int Student::getID() {
    return studentID;
}