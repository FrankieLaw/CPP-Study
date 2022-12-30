// ex04_Exercise_4-20.cpp
//
// (Validating User Input) The examination-results program of Fig. 4.16 assumes that any value
// input by the user that’s not a 1 must be a 2. Modify the application to validate its inputs. On any
// input, if the value entered is other than 1 or 2, keep looping until the user enters a correct value.
//
#include <iostream>
using namespace std;

int main( ) {
    int passes = 0;
    int failure = 0;
    int studentCounter = 1;
    int result = 0;

    while( studentCounter <= 10 ) {
        cout << "Enter result (1 = pass, 2 = fail): ";
        cin >> result;

        if( !cin.fail( ) ) {
            if( result != 1 && result != 2 ) {
                cout << "Invalid input Try again!" << endl;
                continue;
                
            } else {
                if( result = 1 )
                    passes = passes + 1;
                else
                    failure = failure + 1;

                studentCounter = studentCounter + 1;
            }   
        } else {
            cout << "No letters allow Try again!" << endl;
            cin.clear( );
            cin.ignore( 256, '\n' );
        }
    }

    cout << "Passed " << passes << "\nFailed " << failure << endl;

    if( passes > 8 ) 
        cout << "Bonus to instructor!" << endl;
}