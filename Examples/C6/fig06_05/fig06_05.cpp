// Fig. 6.5: fig06_05.cpp
// Create GradeBook object, input grades and display grade report.
#include "Gradebook.h"
#include "../../../src/tempCode.h"

int main( ) {
    GradeBook myGradeBook( "CS101 C++ Programming" );

    displayTestHeading( "Multiple Parameters" );
    myGradeBook.displayMessage( );
    myGradeBook.inputGrades( );

    myGradeBook.displayGradeReport( );
    
    cout << endl;
}