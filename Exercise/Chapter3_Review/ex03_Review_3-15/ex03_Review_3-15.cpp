// ex03_Review_3-15.cpp
// Date Class that holds one specific date.
// 
// (Date Class) Create a class called Date that includes three pieces
// of information as data members
// [ ] a month (type int),
// [ ] a day (type int) and
// [ ] a year (type int).
//
// [ ] Your class should have a constructor with three parameters that uses
//     the parameters to initialize the three data members.
//
// [ ] For the purpose of this exercise, assume that the values provided for
//     the year and day are correct, but ensure that the month value is in the
//     range 1–12; if it isn’t, set the month to 1.
//
// [ ] Provide a set and a get function for each data member.
//
// [ ] Provide a member function displayDate that displays the month, day and
//     year separated by forward slashes (/).
//
// [ ] Write a test program that demonstrates class Date’s capabilities.

#include <iostream>
#include <string>
using namespace std;

class Date {
public:
    Date(int _m, int _d, int _y) {
        setYear( _y );
        setMonth( _m );        
        setDay( _m, _d );
        cout << "Complete!" << endl;
    }

    // ====================================
    //  Month validation 1 - 12
    // ====================================
    void setMonth(int _m) {
        if (_m >= 1 && _m <= 12) {
            month = _m;
        } else {
            cout << "Month out of range " << _m 
                 << ": default to Janurary" << endl;
            month = 1;
        }
    }

    // ====================================
    //  Day validation are month dependent
    //  as well as year (for leap year)
    // ====================================
    void setDay( int _m, int _d ) {
        int months[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        bool errorFlag = false;

        // Check if it is leap year, and month is feburary
        // special treatment for this one day.
        if( leapYear && _m == 2 ) {
            if( _d >= 1 && _d <= 29 ) {
                day = _d;
            } else {
                errorFlag = true;
            }

        // Check normally if it is not leap year
        // Treat it as if it is a normal day.
        } else {
            if( _d >= 1 && _d <= months[_m -1] ) {
                day = _d;
            } else {
                errorFlag = true;
            }
        }

        // Default to 1st day of the month
        // If there is an error with the input
        if( errorFlag ) {
            cout << "Day is out of range: Default to 1" << endl;
            day = 1;
        }
    }
    
    // ====================================
    //  Year validation 1582 - 2400
    //  Leap Year Checking
    // ====================================
    void setYear( int _y ) {
        // Validating Year itself
        if (_y < 1582 || _y > 2400 ) {
            cout << "Invalid Year Range " << _y 
                 << "(1584-2400): Default to year 2000" << endl;
            year = 2000;
        } else {
            year = _y;
        }

        // Set Leap Year Flag
        leapYear = isLeapYear( );
    }

    // ====================================
    //  Implementation for Leap Year
    // ====================================
    bool isLeapYear( ) {
        bool retValue = false;

        //cout << "Debug: " << year << endl;
        if( year % 4 == 0 ) {
            retValue = true;

            if( year % 100 == 0 ) { 
                retValue = false; 

                if( year % 400 == 0 ) {
                    retValue = true;
                }
            }
        }

        return retValue;
    }

    // ====================================
    //  Object Display (For Debugging)
    // ====================================
    void displayDate( ) {
        cout << month << "/" 
             << day << "/" 
             << year;
        
        if( leapYear ) {
            cout << " Leap Year";
        }

        cout << endl;
    }

private:
    int  month;
    int  day;
    int  year;
    bool leapYear;
};


void displayTestHeading(string text)
{
    cout << "\n";
    cout << "*******************************" << endl;
    cout << text << endl;
    cout << "*******************************" << endl;
}

int main() {
    displayTestHeading( "Initializing Date Objects" );
    Date test1( 0, 0, 1582 );   // NOT LEAP YEAR -M DEFAULT -D DEFAULT
    Date test2( 1, 29, 1584 );  // LEAP YEAR - OKAY
    Date test3( 3, 29, 1945 );  // NOT LEAP YEAR -D DEFAULT
    Date test4( 12, 28, 2400 ); // LEAP YEAR
    Date test5( 15, 1, 2500 );  // -Y DEFAULT -LEAP YEAR -M DEFAULT


    displayTestHeading( "Show All the Results" );
    test1.displayDate( );
    test2.displayDate( );
    test3.displayDate( );
    test4.displayDate( );
    test5.displayDate( );

    return 0;
}