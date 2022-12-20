// Fig. 3.9: GradeBook.h
// GradeBook class definition in a separate file from main.
#include <iostream>
#include <string>
using namespace std;

// GradeBook class definition
class GradeBook {
    public:
        // constructor
        GradeBook( string name ) {
            setCourseName( name );
        }

        void setCourseName( string name ) {
            courseName = name;
        }

        string getCourseName( ) {
            return courseName;
        }

        void displayMessage( ) {
            cout << "Welcome to the grade book for \n" << getCourseName( ) << "!" << endl;
        }
        
    private:
        string courseName;
};