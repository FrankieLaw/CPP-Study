// Fig. 3.5: fig03_05.cpp
// Define class GradeBook that contains a courseName data member
// and member functions to set and get its value;
// Create and manipulate a GradeBook object with these functions.
#include <iostream>
#include <string>           // program uses C++ standard string class
using namespace std;

// GradeBook class defintion
class GradeBook {
    public:
        // function that sets the course name
        void setCourseName( string name ) {
            courseName = name;      // store the course name in the object
        }

        // function that gets the course name
        string getCourseName( ) {
            return courseName;  // return the object's courseName
        }

        // function that displays a welcome message
        void displayMessage( ) {
            // this statement calls getCourseName to get the
            // name of the course this GradeBook represents
            cout << "Welcome to the grade book for \n" << getCourseName( ) << "!" << endl;
        }

    private:
        string courseName;      // course name for this GradeBook
};

// function main begins program execution
int main( ) {
    string nameOfCourse;        // string of characters to store the course name
    GradeBook myGradeBook;      // create a GradeBook object named myGradeBook

    // display initial value of courseName
    cout << "Initial course name is: " << myGradeBook.getCourseName( ) << endl;

    // prompt for, input and set course name
    cout << "\nPlease enter the course name: " << endl;
    getline( cin, nameOfCourse );                   // read a course name with blanks
    myGradeBook.setCourseName( nameOfCourse );      // set the course name

    cout << endl;
    myGradeBook.displayMessage( );                  // display message with new course name
}