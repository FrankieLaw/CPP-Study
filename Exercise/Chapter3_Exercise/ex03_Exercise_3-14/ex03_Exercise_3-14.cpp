// ex03_Exercise_3-14.cpp
//
// (Employee Class) Create a class called Employee that includes 
// three pieces of information as data members:
// [ ] a first name (type string), 
// [ ] a last name (type string) and 
// [ ] a monthly salary (type int). 
//
// [ ] Your class should have a constructor that initializes the three 
//     data members. 
//
// [ ] Provide a set and a get function for each data member. 
// 
// [ ] If the monthly salary is not positive, set it to 0. 
// 
// [ ] Write a test program that demonstrates class Employee’s capabilities. 
// [ ] Create two Employee objects and display each object’s yearly salary. 
// 
// [ ] Then give each Employee a 10 percent raise and display each 
//     Employee’s yearly salary again.

#include <iostream>
#include <string>
using namespace std;

class Employee {
    public:
        Employee( string _firstName, string _lastName, int _mSalary ) {
            setFirstName( _firstName );
            setLastName( _lastName );
            setMonthlySalary( _mSalary );
        }

        void setFirstName( string _firstName ) {
            firstName = _firstName;
        }

        void setLastName( string _lastName ) {
            lastName = _lastName;
        }

        void setMonthlySalary( int _mSalary ) {
            _mSalary < 0 
                ? salary = 0 
                : salary = _mSalary;
        }

        string getFirstName( ) {
            return firstName;
        }

        string getLastName( ) {
            return lastName;
        }

        int getMonthlySalary( ) {
            return salary;
        }

        void debugResult( ) {
            cout << "First Name: " << getFirstName( ) << endl;
            cout << "Last Name: " << getLastName( ) << endl;
            cout << "Monthly Salary: " << getMonthlySalary( ) << endl;
            cout << "Annual Salary: " << getMonthlySalary( ) * 12 << endl << endl;
        }


    private:
        string firstName;
        string lastName;
        int salary;
};


void displayTestHeading(string text)
{
    cout << "\n";
    cout << "*******************************" << endl;
    cout << text << endl;
    cout << "*******************************" << endl;
}

// [ ] Write a test program that demonstrates class Employee’s capabilities. 
// [ ] Create two Employee objects and display each object’s yearly salary. 
// 
// [ ] Then give each Employee a 10 percent raise and display each 
//     Employee’s yearly salary again.
int main( ) {
    displayTestHeading( "Initializing Employee Objects" );
    Employee david( "David", "Gekco", 2000 );
    Employee suzie( "Suzie", "NoNoPoPo", 4300 );

    displayTestHeading( "Employee Object Test 1" );
    david.debugResult( );

    displayTestHeading( "Employee Object Test 2" );
    suzie.debugResult( );


    displayTestHeading( "Give 10% Raise" );
    david.setMonthlySalary( david.getMonthlySalary( ) * 1.10 );
    suzie.setMonthlySalary( suzie.getMonthlySalary( ) * 1.10 );
    cout << "Complete!" << endl;


    displayTestHeading( "Employee1 Raise 10%" );
    david.debugResult( );

    displayTestHeading( "Employee2 Raise 10%" );
    suzie.debugResult( );
}