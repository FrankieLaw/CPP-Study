// ex03_Review_3-16.cpp
//
// (Target-Heart-Rate Calculator) While exercising, you can use a 
// heart-rate monitor to see that your heart rate stays within a safe 
// range suggested by your trainers and doctors. 
//
// According to the American Heart Association (AHA) 
// (www.americanheart.org/presenter.jhtml?identifier=4736),
// The formula for calculating your maximum heart rate in beats per minute 
// is 220 minus your age in years. 
// 
// Your target heart rate is a range that is 50–85% of your maximum heart 
// rate. [Note: These formulas are estimates provided by the AHA. 
// Maximum and target heart rates may vary based on the health,
// fitness and gender of the individual. Always consult a physician or 
// qualified health care professional before beginning or modifying an 
// exercise program.] 
//
// Create a class called HeartRates. 
//
// The class attributes should include:
// [ ] the person’s first name, 
// [ ] last name and 
// [ ] date of birth (consisting of separate attributes for the month, 
//     day and year of birth).
//
// [ ] Your class should have a constructor that receives this data as 
//     parameters.
//
// [ ] For each attribute provide set and get functions. 
// 
// The class also should include a function 
// [ ] getAge that calculates and returns the person’s age (in years), 
// [ ] a function getMaxiumumHeartRate that calculates and returns the 
//     person’s maximum heart rate and 
// [ ] a function getTargetHeartRate that calculates and returns the 
//     person’s target heart rate. 
//
// Since you do not yet know how to obtain the current date from the 
// computer, function getAge should prompt the user to enter the current 
// month, day and year before calculating the person’s age. 
// 
// Write an application that prompts for the person’s information, 
// instantiates an object of class HeartRates and prints the information 
// from that object—
// [ ] including the person’s first name, 
// [ ] last name and 
// [ ] date of birth
//
// then calculates and 
// [ ] prints the person’s age in (years), 
// [ ] maximum heart rate and target-heart-rate range.

#include <iostream>
#include <string>
#include <ctime>
using namespace std;

class HeartRates {
    public:
        HeartRates( string date ) {
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
    void setFirstName( string _fName ) {
        firstName = _fName;
    }
    void setLastName( string _lName ) {
        lastName = _lName;
    }
    void setDate( string _date ) {
        date = _date;
    }

    string getFirstName( ) { return firstName; }
    string getLastName( ) { return lastName; }
    string getDate( ) {
        string _m = to_string( getMonth( ) );
        string _d = to_string( getDay( ) );
        string _y = to_string( getYear( ) );

        return _m + " " + _d + " " + _y;
    }
    
    int getAge( ) {
        time_t now = time( 0 );         // current time in seconds
        tm *local = localtime( &now );

        return ( 1900 + local->tm_year ) - year;        
    }
    int getMaxiumumHeartRate( ) {
        return 220 - getAge( );
    }
    string getTargetHeartRate( ) {
        int minRate = getMaxiumumHeartRate( ) * 0.50;
        int maxRate = getMaxiumumHeartRate( ) * 0.85;

        return to_string( minRate ) + "-" + to_string( maxRate );
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
    int getMonth( ) {
        return month;
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
    int getDay( ) {
        return day;
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
    int getYear( ) {
        return year;
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
    bool getLeapYear( ) {
        return leapYear;
    }

    void displayHeartRates( ) {
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

    private:
        string firstName;
        string lastName;
        string date;
        int month;
        int day;
        int year;
        bool leapYear;
};


void displayTestHeading(string text)
{
    cout << "\n";
    cout << "*******************************" << endl;
    cout << text << endl;
    cout << "*******************************" << endl;
}

int main( ) {
    string firstName;
    string lastName;
    string date;

    displayTestHeading( "HeartRates Application Form" );
    cout << "Enter your first name: ";
    getline( cin, firstName );

    cout << "Enter your last name: ";
    getline( cin, lastName );

    do {
        cout << "Enter your date of birth in this format (mm dd yyyy): ";
        getline( cin, date );

        if( date.length( ) != 10 ) {
            cout << "Date needs to follow format: (mm dd yyyy)" << endl;
        }
    } while( date.length( ) != 10 );


    HeartRates me( date );
    me.setFirstName( firstName );
    me.setLastName( lastName );

    displayTestHeading( "HeartRates Client Information" );
    me.displayHeartRates( );
    
    return 0;
}