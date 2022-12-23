// ex03_Exercise_3-16.cpp
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
#include "HeartRates.h"
using namespace std;

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