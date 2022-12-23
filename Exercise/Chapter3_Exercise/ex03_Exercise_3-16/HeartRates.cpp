// HeartRates.cpp
// Implementation for HeartRate object
//

#include <iostream>
#include <string>
#include <ctime>
#include "HeartRates.h"
using namespace std;

HeartRates::HeartRates( string date ) {
    int _y = stoi(date.substr( 6, 4 ));
    int _m = stoi(date.substr( 0, 2 ));
    int _d = stoi(date.substr( 3, 2 ));

    setYear( _y );
    setMonth( _m );
    setDay( getMonth( ), _d );

    string tempM = to_string( getMonth( ) );
    string tempD = to_string( getDay( ) );
    string tempY = to_string( getYear( ) );
    
    setDate( tempM + " " + tempD + " " + tempY );
}

// ====================================
//  Set First Name, Last Name
// ====================================
void HeartRates::setFirstName( string _fName ) {
    firstName = _fName;
}
void HeartRates::setLastName( string _lName ) {
    lastName = _lName;
}
void HeartRates::setDate( string _date ) {
    date = _date;
}

string HeartRates::getFirstName( ) { return firstName; }
string HeartRates::getLastName( ) { return lastName; }
string HeartRates::getDate( ) {
    string _m = to_string( getMonth( ) );
    string _d = to_string( getDay( ) );
    string _y = to_string( getYear( ) );

    return _m + " " + _d + " " + _y;
}

int HeartRates::getAge( ) {
    time_t now = time( 0 );         // current time in seconds
    tm *local = localtime( &now );

    return ( 1900 + local->tm_year ) - year;        
}
int HeartRates::getMaxiumumHeartRate( ) {
    return 220 - getAge( );
}
string HeartRates::getTargetHeartRate( ) {
    int minRate = getMaxiumumHeartRate( ) * 0.50;
    int maxRate = getMaxiumumHeartRate( ) * 0.85;

    return to_string( minRate ) + "-" + to_string( maxRate );
}

// ====================================
//  Month validation 1 - 12
// ====================================
void HeartRates::setMonth(int _m) {
    if (_m >= 1 && _m <= 12) {
        month = _m;
    } else {
        cout << "Month out of range " << _m 
                << ": default to Janurary" << endl;
        month = 1;
    }
}
int HeartRates::getMonth( ) {
    return month;
}

// ====================================
//  Day validation are month dependent
//  as well as year (for leap year)
// ====================================
void HeartRates::setDay( int _m, int _d ) {
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
int HeartRates::getDay( ) {
    return day;
}

// ====================================
//  Year validation 1582 - 2400
//  Leap Year Checking
// ====================================
void HeartRates::setYear( int _y ) {
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
int HeartRates::getYear( ) {
    return year;
}

// ====================================
//  Implementation for Leap Year
// ====================================
bool HeartRates::isLeapYear( ) {
    bool retValue = false;

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
bool HeartRates::getLeapYear( ) {
    return leapYear;
}


void HeartRates::displayHeartRates( ) {
    cout << "First Name: " << getFirstName( ) << endl;
    cout << "Last Name: " << getLastName( ) << endl;
    cout << "DOB: " << getDate( ) << endl;
    cout << "Age: " << getAge( ) << endl;
    cout << "Maximum Heart Rate: " << getMaxiumumHeartRate( ) << endl;
    cout << "Target Heart Rate: " << getTargetHeartRate( ) << endl;
    //cout << "Day: " << day << endl;
    //cout << "Month: " << month << endl;
    //cout << "Year: " << year << endl;
    //cout << "Leap Year: " << leapYear << endl;
}