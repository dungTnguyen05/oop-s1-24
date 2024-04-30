#ifndef GRADE_H
#define GRADE_H

#include <iostream>
using namespace std;

class Grade {
    private:
        int studentID;
        int courseID;
        string assignment;
        int value;
    public:
        Grade();
        Grade(int studentID, int courseID, string assignment, int value);

        void setStudentID(int studentID);
        int getStudentID();

        void setCourseID(int courseID);
        int getCourseID();
    
        void setAssignment(string assignment);
        string getAssignment();

        void setValue(int value);
        int getValue();
};

#endif