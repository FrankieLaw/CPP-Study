// Fig. 3.15: GradeBook.h
// GradeBook class definition presents the public interface of
// the class. Member-function definitions appear in GradeBook.cpp.
#include <iostream>
using namespace std;

class GradeBook {
    public:
        GradeBook( string, string );        // Answer C
        
        void setCourseName( string );
        string getCourseName( );

        void setInstructorName( string );   // Answer B
        string getInstructorName( );

        void displayMessage( );
    
    private:
        string courseName;
        string instructor;                  // Answer A
};
