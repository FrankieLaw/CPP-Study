// HealthProfile.h
// Interface for HealthProfile object
//

#include <iostream>
#include <string>
using namespace std;

class HealthProfile {
    public:
        HealthProfile( string _fName, string _lName, string _date, string _gender, int _height, int _weight );

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

        // ====================================
        //  Gender, Weight, and Height
        // ====================================
        void setGender( string _gender );
        void setHeight( int _height );
        void setWeight( int _weight );

        string getGender( ) { return gender; }
        int getHeight( ) { return height; }
        int getWeight( ) { return weight; }

        // ====================================
        //  BMI
        // ====================================
        int calcBMI( );

        void displayHeartRates( );

    private:
        string firstName;
        string lastName;

        string date;
        int month;
        int day;
        int year;
        bool leapYear;

        string gender;
        int height;
        int weight;
};

