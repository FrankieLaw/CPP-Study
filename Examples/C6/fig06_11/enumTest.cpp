#include <iostream>
using namespace std;

int main( ) {
    // Enum is a user defined type that defines "named integers"
    // Enum doesn't require assignment operator (=) to create.
    // It uses a familiar class semetic to outline the content.
    enum Status { 
        CONTINUE, 
        WIN, 
        LOSE 
    };   

    // Created the user defined type "Status" and 
    // set the initial value to WIN.
    Status myGame = WIN;

    // The user defined type only recognizes the "named integers"
    // that has been declare within the body of the enum.
    // Any "name integers" that is not within the list will be
    // seen as an error.
    myGame = LOSE;
    myGame = CONTINUE;
    //myGame = HELLO;       //This is an error


    // Enum uses "name" as its based datatype.
    // Even though the name suppose to reflect a number position.
    // Using integer in place of a "name" to assign a enum is an error.
    //myGame = 0;           // This is an error


    // Enum can be use in comparison statement
    // Either using the "name" or the "integer value"
    myGame = LOSE;
    if( myGame == 0 ) {
        cout << "Game Continue" << endl;
    }

    if( myGame == 1 ) {
        cout << "Game Won" << endl;
    }

    if( myGame == 2 ) {
        cout << "Game Lose" << endl;
    }

    if( myGame == LOSE ) {
        cout << "Game Lose Again" << endl;
    }
}