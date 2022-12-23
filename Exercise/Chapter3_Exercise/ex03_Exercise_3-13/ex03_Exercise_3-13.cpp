// ex03_Review_3-13
// Invoice Class
//
// Create a class called Invoice that a hardware store might use to represent
// an invoice for an item sold at the store.
//
// An Invoice should include four data members:
// [ ] a part number (type string), 
// [ ] a part description (type string), 
// [ ] a quantity of the item being purchased (type int) and 
// [ ] a price per item (type int). 
//
// [ ] Your class should have a constructor that initializes the four 
//     data members.
//
// [ ] Provide a set and a get function for each data member.
//  
// [ ] In addition, provide a member function named getInvoiceAmount that 
//     calculates the invoice amount (i.e., multiplies the quantity by the 
//     price per item), then returns the amount as an int value. 
// 
//     If the quantity is not positive, it should be set to 0. If the price 
//     per item is not positive, it should be set to 0. 
//
// [ ] Write a test program that demonstrates class Invoice’s capabilities.

#include <iostream>
#include <string>
using namespace std;

class Invoice {
    public:
        Invoice( string _part, string _desc, int _q, int _ppu ) {
            setPartNumber( _part );
            setPartDesc( _desc );
            setQuantity( _q );
            setPricePerUnit( _ppu );
        }

        void setPartNumber( string _part ) {
            partNumber = _part;
        }

        void setPartDesc( string _desc ) {
            partDesc = _desc;
        }
        
        void setQuantity( int _q ) {
            if( _q < 0 ) {
                quantity = 0;
            } else {
                quantity = _q;
            }
        }

        void setPricePerUnit( int _ppu ) {
            if( _ppu < 0 ) {
                pricePerUnit = 0;
            } else {
                pricePerUnit = _ppu;
            }
        }

        string getPartNumber( ) {
            return partNumber;
        }

        string getPartDescription( ) {
            return partDesc;
        }

        int getQuantity( ) {
            return quantity;
        }

        int getPricePerUnit( ) {
            return pricePerUnit;
        }

        int getInvoiceAmount( ) {
           return quantity * pricePerUnit; 
        }

        void invoiceDebug( ) {
            cout << "Part Number: \t\t\t" << getPartNumber( ) << endl;
            cout << "Part Description: \t\t" << getPartDescription( )  << endl;
            cout << "Quantity: \t\t\t" << getQuantity( )  << endl;
            cout << "Price Per Unit: \t\t" << getPricePerUnit( )  << endl;
            cout << "Total Invoice Amount is: \t" << getInvoiceAmount( ) << endl << endl;
        }

    private:
        string partNumber;
        string partDesc;
        int quantity;
        int pricePerUnit;
};

void displayTestHeading(string text)
{
    cout << "\n";
    cout << "*******************************" << endl;
    cout << text << endl;
    cout << "*******************************" << endl;
}

int main( ) {
    displayTestHeading( "Initializing Invoice Object" );
    Invoice fromBiWay( "001251", "Refreshing Soap in your face", 10, 14 );
    Invoice fromKMart( "12541", "Electric Drill Pen", 25, 145 );

    displayTestHeading( "Soap Testing Results" );
    fromBiWay.invoiceDebug( );

    displayTestHeading( "Soap Testing Results" );
    fromKMart.invoiceDebug( );

    return 0;
}