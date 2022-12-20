// Fig. 3.10: fig03_10.cpp
// Include class GradeBook from file GradeBook.h for use in main.
#include <iostream>
#include "GradeBook.h"      // include definition of class GradeBook
using namespace std;

int main( ) {
    GradeBook gradeBook1( "Hello world: First Edition" );
    GradeBook gradeBook2( "Nowhere is better than here" );

    cout << "gradeBook1 created for course: " << gradeBook1.getCourseName( ) << "\n";
    cout << "gradeBook2 created for coures: " << gradeBook2.getCourseName( ) << endl;
}