// Fig. 5.11: fig05_11.cpp
// Create GradeBook object, input grades and display grade report.
#include "GradeBook.h"

int main( ) {
    GradeBook myGradeBook( "CS101 C++ Programming" );

    myGradeBook.displayMessage( );
    myGradeBook.inputGrades( );
    myGradeBook.displayGradeReport( );
}