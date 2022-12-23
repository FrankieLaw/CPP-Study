// HealthProfile.cpp
// Implementation for HealthProfile object
//

#include <iostream>
#include <string>
#include <ctime>
#include "HealthProfile.h"
using namespace std;

HealthProfile::HealthProfile( string _fName, string _lName, string _date, 
    string _gender, int _height, int _weight ) {
        setFirstName( _fName );
        setLastName( _lName );

        int _y = stoi(_date.substr( 6, 4 ));
        int _m = stoi(_date.substr( 0, 2 ));
        int _d = stoi(_date.substr( 3, 2 ));

        setYear( _y );
        setMonth( _m );
        setDay( getMonth( ), _d );

        string tempM = to_string( getMonth( ) );
        string tempD = to_string( getDay( ) );
        string tempY = to_string( getYear( ) );
        
        setDate( tempM + " " + tempD + " " + tempY );
        
        setGender( _gender );
        setHeight( _height );
        setWeight( _weight );
}

// ====================================
//  Set First Name, Last Name
// ====================================
void HealthProfile::setFirstName( string _fName ) {
    firstName = _fName;
}
void HealthProfile::setLastName( string _lName ) {
    lastName = _lName;
}
void HealthProfile::setDate( string _date ) {
    date = _date;
}

string HealthProfile::getFirstName( ) { return firstName; }
string HealthProfile::getLastName( ) { return lastName; }
string HealthProfile::getDate( ) {
    string _m = to_string( getMonth( ) );
    string _d = to_string( getDay( ) );
    string _y = to_string( getYear( ) );

    return _m + " " + _d + " " + _y;
}

int HealthProfile::getAge( ) {
    time_t now = time( 0 );         // current time in seconds
    tm *local = localtime( &now );

    return ( 1900 + local->tm_year ) - year;        
}
int HealthProfile::getMaxiumumHeartRate( ) {
    return 220 - getAge( );
}
string HealthProfile::getTargetHeartRate( ) {
    int minRate = getMaxiumumHeartRate( ) * 0.50;
    int maxRate = getMaxiumumHeartRate( ) * 0.85;

    return to_string( minRate ) + "-" + to_string( maxRate );
}

// ====================================
//  Month validation 1 - 12
// ====================================
void HealthProfile::setMonth(int _m) {
    if (_m >= 1 && _m <= 12) {
        month = _m;
    } else {
        cout << "Month out of range " << _m 
                << ": default to Janurary" << endl;
        month = 1;
    }
}
int HealthProfile::getMonth( ) {
    return month;
}

// ====================================
//  Day validation are month dependent
//  as well as year (for leap year)
// ====================================
void HealthProfile::setDay( int _m, int _d ) {
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
int HealthProfile::getDay( ) {
    return day;
}

// ====================================
//  Year validation 1582 - 2400
//  Leap Year Checking
// ====================================
void HealthProfile::setYear( int _y ) {
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
int HealthProfile::getYear( ) {
    return year;
}

// ====================================
//  Implementation for Leap Year
// ====================================
bool HealthProfile::isLeapYear( ) {
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
bool HealthProfile::getLeapYear( ) {
    return leapYear;
}

// ====================================
//  Gender, Weight, and Height
// ====================================
void HealthProfile::setGender( string _gender ) {
    gender = _gender;
}
void HealthProfile::setHeight( int _height ) {
    if( _height <= 0 ) {
        cout << "Height cannot be less than or equal to 0: Default to 160\"" << endl;
        height = 160;
    } else {
        height = _height;
    }
}
void HealthProfile::setWeight( int _weight ) {
    if( _weight <= 0 ) {
        cout << "Weight cannot be less than or equal to 0: Default to 90lbs" << endl;
        weight = 90;
    } else {
        weight = _weight;
    }
}

// ====================================
//  BMI
// ====================================
int HealthProfile::calcBMI( ) {
    return (weight * 703) / (height * height);
}

void HealthProfile::displayHeartRates( ) {
    int index = calcBMI( );

    cout << "First Name: " << getFirstName( ) << endl;
    cout << "Last Name: " << getLastName( ) << endl;
    cout << "DOB: " << getDate( ) << endl;
    cout << "Age: " << getAge( ) << endl;
    cout << "Maximum Heart Rate: " << getMaxiumumHeartRate( ) << endl;
    cout << "Target Heart Rate: " << getTargetHeartRate( ) << endl;

    // cout << "Day: " << day << endl;
    // cout << "Month: " << month << endl;
    // cout << "Year: " << year << endl;
    // cout << "Leap Year: " << leapYear << endl;

    cout << "Gender: " << gender << endl;
    cout << "Height: " << height << "\"" << endl;
    cout << "Weight: " << weight << " lbs" << endl;
    cout << endl;

    cout << "This program calculates your BMI Value\n" << endl;
    cout << "BMI VALUES" << endl;
    cout << "Underweight: less than 18.5" << endl;
    cout << "Normal: between 18.5 and 24.9" << endl;
    cout << "Overweight: between 25 and 29.9" << endl;
    cout << "Obese: 30 or greater" << endl << endl;

    cout << "Your BMI is: " << calcBMI( ) << endl;
    if( index < 18.5 ) 
        cout << "You are underweight" << endl;

    if( index >= 18.5 ) 
        if( index <= 24.9 ) 
            cout << "You are Normal" << endl;

    if( index >= 25 )
        if( index <= 29.9 ) 
            cout << "You are Overweight" << endl;

    if( index >= 30 )
        cout << "You are Obses" << endl;
}