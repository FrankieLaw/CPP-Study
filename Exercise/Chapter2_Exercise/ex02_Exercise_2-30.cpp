/*
    Question 2.30
    
    Create a BMI calculator application that reads the user’s weight in pounds and height in inches
    (or, if you prefer, the user’s weight in kilograms and height in meters), then calculates and displays
    the user’s body mass index. Also, the application should display the following information from
    the Department of Health and Human Services/National Institutes of Health so the user can evaluate
    his/her BMI:

    BMI VALUES
    Underweight: less than 18.5
    Normal: between 18.5 and 24.9
    Overweight: between 25 and 29.9
    Obese: 30 or greater
*/

#include <iostream>
using namespace std;

int main( ) {
    int weight;
    int height;
    int index;

    cout << "This program calculates your BMI Value\n" << endl;
    cout << "BMI VALUES" << endl;
    cout << "Underweight: less than 18.5" << endl;
    cout << "Normal: between 18.5 and 24.9" << endl;
    cout << "Overweight: between 25 and 29.9" << endl;
    cout << "Obese: 30 or greater" << endl;

    cout << "\n";

    cout << "Enter your weight(lbs) and height(inches): ";
    cin >> weight >> height;

    index = (weight * 703) / (height * height);

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