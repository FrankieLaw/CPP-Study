// Fig. 3.13: fig03_13.cpp
// GradeBook class demonstration after separating
// its interface from its implementation.
#include <iostream>
#include "GradeBook.h"
using namespace std;

int main( ) {
    GradeBook gradeBook1( "Hello World Volumn 2" );
    GradeBook gradeBook2( "Data Analytic for Everything" );

    cout << "gradeBook1 created for course: " << gradeBook1.getCourseName( ) << "\n";
    cout << "gradeBook2 created for coures: " << gradeBook2.getCourseName( ) << endl;
}