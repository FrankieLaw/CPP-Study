// ex03_Exercise_3-17.cpp
//
// (Computerization of Health Records) A health care issue that has been 
// in the news lately is the computerization of health records. 
// This possibility is being approached cautiously because of sensitive 
// privacy and security concerns, among others.
//
// Computerizing health records could make it easier for patients to share 
// their health profiles and histories among their various health care 
// professionals. This could improve the quality of health care, help avoid 
// drug conflicts and erroneous drug prescriptions, reduce costs and in 
// emergencies, could save lives. 
//
// In this exercise, you’ll design a “starter” HealthProfile class for a 
// person. 
//
// [ ] The class attributes should include 
// [ ] the person’s first name,
// [ ] last name, 
// [ ] gender, 
// [ ] date of birth (consisting of separate attributes for the month, day
//     and year of birth), 
// [ ] height (in inches) and 
// [ ] weight (in pounds). 
//
// [ ] Your class should have a constructor that receives this data. 
//
// [ ] For each attribute, provide set and get functions.
//
// [ ] The class also should include functions that calculate and return 
// the user’s age in years, maximum heart rate and target-heart-rate range 
// (see Exercise 3.16), and body mass index (BMI; see Exercise 2.30). 
//
// Write an application that prompts for the person’s information, 
// instantiates an object of class HealthProfile for that person and prints 
// the information from that object—including
// [ ] the person’s first name, 
// [ ] last name, 
// [ ] gender, 
// [ ] date of birth, 
// [ ] height and 
// [ ] weight
// 
// then calculates and prints:
// [ ] the person’s age in years, 
// [ ] BMI, 
// [ ] maximum heart rate and 
// [ ] target-heart-rate range. 
//
// It should also display the “BMI values” chart from Exercise 2.30. 
// Use the same technique as Exercise 3.16 to calculate the person’s 
// age.


#include <iostream>
#include <string>
#include "HealthProfile.h"
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
    string gender;
    int height;
    int weight;

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

    cout << "Enter your Gender: ";
    getline( cin, gender );

    cout << "Enter your height in inches: ";
    cin >> height;

    cout << "Enter your weight in lbs: ";
    cin >> weight;


    HealthProfile me( firstName, lastName, date, gender, height, weight );

    displayTestHeading( "HeartRates Client Information" );
    me.displayHeartRates( );
    
    return 0;
}