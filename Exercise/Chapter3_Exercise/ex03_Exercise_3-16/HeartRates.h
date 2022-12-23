// HeartRates.h
// Interface for HeartRate object
//

#include <iostream>
#include <string>
using namespace std;

class HeartRates {
    public:
        HeartRates( string date );

        // ====================================
        //  Set First Name, Last Name
        // ====================================
        void setFirstName( string _fName );
        void setLastName( string _lName );
        void setDate( string _date );

        string getFirstName( );
        string getLastName( );
        string getDate( );
        
        int getAge( );
        int getMaxiumumHeartRate( );
        string getTargetHeartRate( );

        // ====================================
        //  Month validation 1 - 12
        // ====================================
        void setMonth( int _m );
        int getMonth( );

        // ====================================
        //  Day validation are month dependent
        //  as well as year (for leap year)
        // ====================================
        void setDay( int _m, int _d );
        int getDay( );

        void setYear( int _y );
        int getYear( );

        bool isLeapYear( );
        bool getLeapYear( );

        void displayHeartRates( );

    private:
        string firstName;
        string lastName;
        string date;
        int month;
        int day;
        int year;
        bool leapYear;
};

