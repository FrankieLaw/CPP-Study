// Fig. 3.16: GradeBook.cpp
// Implementations of the GradeBook member-function definitions.
// The setCourseName function performs validation.
#include <iostream>
#include <string>
#include "GradeBook.h"
using namespace std;

// Answer C
GradeBook::GradeBook( string name, string instructorName ) {
    setCourseName( name );
    setInstructorName( instructorName );
}

void GradeBook::setCourseName( string name ) {
    if( name.length( ) <= 25 )
        courseName = name;
    
    if( name.length( ) > 25 ) {
        courseName = name.substr( 0, 25 );

        cout << "Name \"" << name << "\" exceeds maximum length (25).\n" 
             << "Limiting courseName to first 25 characters.\n" << endl;
    }
}

string GradeBook::getCourseName( ) {
    return courseName;
}

// Answer B
void GradeBook::setInstructorName( string instructorName ) {
    instructor = instructorName;
}

string GradeBook::getInstructorName( ) {
    return instructor;
}



void GradeBook::displayMessage( ) {
    cout << "Welcome to the grade book for\n" << getCourseName( ) << "!" << endl;
    cout << "Presented By: " << instructor << endl;
}