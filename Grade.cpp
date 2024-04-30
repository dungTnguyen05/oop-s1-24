#include "Grade.h"

Grade::Grade() {
    this -> studentID = 0;
    this -> assignment = "";
    this -> value = 0;
}

Grade::Grade(int studentID, int courseID, string assignment, int value) {
    this -> studentID = studentID;
    this -> courseID = courseID;
    this -> assignment = assignment;
    this -> value = value;
}

void Grade::setStudentID(int studentID) {
    this -> studentID = studentID;
}

int Grade::getStudentID() {
    return studentID;
}

void Grade::setCourseID(int courseID) {
    this -> courseID = courseID;
}

int Grade::getCourseID() {
    return courseID;
}

void Grade::setAssignment(string assignment) {
    this -> assignment = assignment;
}

string Grade::getAssignment() {
    return assignment;
}

void Grade::setValue(int value) {
    this -> value = value;
}

int Grade::getValue() {
    return value;
}