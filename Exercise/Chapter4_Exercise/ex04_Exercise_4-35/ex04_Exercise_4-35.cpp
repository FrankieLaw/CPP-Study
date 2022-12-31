// ex04_Exercise_4-35.cpp
//
// (Enforcing Privacy with Cryptography) The explosive growth of Internet communications
// and data storage on Internet-connected computers has greatly increased privacy concerns. 
//
// The field of cryptography is concerned with coding data to make it difficult 
// (and hopefully—with the most advanced schemes—impossible) for unauthorized users to read.
// 
// In this exercise you’ll investigate a simple scheme for encrypting and decrypting data. A company 
// that wants to send data over the Internet has asked you to write a program that will encrypt it so 
// that it may be transmitted more securely. All the data is transmitted as four-digit integers. 
//
// Your application should read a four-digit integer entered by the user 
// and encrypt it as follows:
//
// [ ] Replace each digit with the result of adding 7 to the digit and getting the remainder after 
//     dividing the new value by 10. 
// 
// [ ] Then swap the first digit with the third, and 
// [ ] swap the second digit with the fourth. 
// 
// Then print the encrypted integer. Write a separate application that inputs an 
// encrypted four-digit integer and decrypts it (by reversing the encryption scheme) to form the 
// original number. [Optional reading project: Research “public key cryptography” in general and the 
// PGP (Pretty Good Privacy) specific public key scheme. You may also want to investigate the RSA 
// scheme, which is widely used in industrial-strength applications.]

#include <iostream>
#include "../../../src/tempCode.h"
using namespace std;

int encryptKey( int d, int key ) {
    return ( d + key ) % 10;
}

int decryptKey( int d, int key ) {
    return ( d + ( 10 - key ) ) % 10;
}

int encrypt( int digits, int key ) {
    // ENCRYPTION
    int a = encryptKey( digits / 1000, key );          // # 0 0 0
    int b = encryptKey( ( digits / 100 ) % 10, key );  // 0 # 0 0
    int c = encryptKey( ( digits / 10 ) % 10, key );   // 0 0 # 0
    int d = encryptKey( digits % 10, key );            // 0 0 0 #

    return ( c * 1000 ) + ( d * 100 ) + ( a * 10 ) + b;
}

int decrypt ( int digits, int key ) {
    // DECRYPTION
    int a = decryptKey( digits / 1000, key );          // # 0 0 0
    int b = decryptKey( ( digits / 100 ) % 10, key );  // 0 # 0 0
    int c = decryptKey( ( digits / 10 ) % 10, key );   // 0 0 # 0
    int d = decryptKey( digits % 10, key );            // 0 0 0 #
    
    return ( c * 1000 ) + ( d * 100 ) + ( a * 10 ) + b;
}

int main( ) {
    int encryptionKey = 7;

    int code;
    int encoded;
    int decoded;

    displayTestHeading( "Basic Encryption & Decryption" );

    do {
        cout << "Enter your code: (-1 to Exit) ";
        cin >> code;

        if( code != 1 ) {
            encoded = encrypt( code, encryptionKey );
            decoded = decrypt( encoded, encryptionKey );

            cout << "Original Code: " << code << endl;
            cout << "Encrypted: " << encoded << endl;
            cout << "Decrypted: " << decoded << endl;
        }
    } while( code != 1 );

    cout << endl;
}