// Fig. 5.9: GradeBook.h
// Definition of class GradeBook that counts A, B, C, D and F grades.
// Member functions are defined in GradeBook.cpp
#include <string>
using namespace std;

class GradeBook {
    public:
        GradeBook( string );
        void setCourseName( string );
        string getCourseName( );
        void displayMessage( );
        void inputGrades( );
        void displayGradeReport( );

    private:
        string courseName;
        int aCount;
        int bCount;
        int cCount;
        int dCount;
        int fCount;
};