// Fig. 3.12: GradeBook.cpp
// GradeBook member-function definitions. This file contains
// implementations of the member functions prototyped in GradeBook.h.
#include <iostream>
#include "GradeBook.h"
using namespace std;

GradeBook::GradeBook( string name ) {
    setCourseName( name );
}

void GradeBook::setCourseName( string name ) {
    courseName = name;
}

string GradeBook::getCourseName( ) {
    return courseName;
}

void GradeBook::displayMessage( ) {
    cout << "Welcome to the grade book for\n" << getCourseName( ) << "!" << endl;
}