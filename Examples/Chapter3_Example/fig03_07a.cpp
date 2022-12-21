// Fig. 3.7: fig03_07a.cpp
// Interface experimentation in a single file.
// Is it possible to separate implementation from definition in a single file.
// The GradeBook object will only contain function prototype
// While the definition is outside of the class.

#include <iostream>
#include <string>
using namespace std;

// *****************************************
//  GradeBook class declaration & prototype
// *****************************************
class GradeBook {
    public:
        GradeBook( string );
        void setCourseName( string );
        string getCourseName( );
        void displayMessage( );
    
    private:
        string courseName;
};


// ****************************
//  GradeBook class definition
// ***************************************************************************************
//  During compilation stage, the separated definition will be compiled into Object Code
//  to be use in the linking process.  While the header is packaged for distribution for
//  reuse.
// *************************************************************************************** 
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


// ****************************
//  Driver Program for Testing
// ****************************
int main( ) {
    // create two GradeBook objects
    GradeBook gradeBook1( "Hello World Book 1" );
    GradeBook gradeBook2( "Data Analyst for Everything" );

    cout << "gradeBook1 created for course: " << gradeBook1.getCourseName( ) << "\n";
    cout << "gradeBook2 created for course: " << gradeBook2.getCourseName( ) << endl;
}