// Fig. 3.7: fig03_07.cpp
// Instantiating multiple objects of GradeBook class and using
// the GradeBook constructor to specify the course name
// when each GradeBook object is created.
#include <iostream>
#include <string>
using namespace std;

// GradeBook class definition
class GradeBook {
    public:
        // constructor initializes courseName with string supplied as argument
        GradeBook( string name ) {
            setCourseName( name );          // call set function to initialize courseName
        }

        // function to set the course name
        void setCourseName( string name ) {
            courseName = name;              // store the course name in the object
        }

        // function to get the course name
        string getCourseName( ) {
            return courseName;
        }

        // display a welcome message to the GradeBook user
        void displayMessage( ) {
            cout << "Welcome to the grade book for \n" << getCourseName( ) << "!" << endl;
        }

    private:
        string courseName;
};

// function main begins program execution
int main( ) {
    // create two GradeBook objects
    GradeBook gradeBook1( "Hello World Book 1" );
    GradeBook gradeBook2( "Data Analyst for Everything" );

    cout << "gradeBook1 created for course: " << gradeBook1.getCourseName( ) << "\n";
    cout << "gradeBook2 created for course: " << gradeBook2.getCourseName( ) << endl;
}