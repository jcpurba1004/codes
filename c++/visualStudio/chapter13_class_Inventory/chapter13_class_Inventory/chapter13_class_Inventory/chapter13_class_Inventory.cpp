
/*
*
* Jeremiah Purba
*
* Chapters 13 Programming Assignment CISC 187 Summer 2020
*
* July 2, 2020
*
* File name: chapter13_class_Inventory.cpp
*
*/
#include <iostream>
#include <string>
#include <iomanip>
#include "Inventory.h";

using namespace std;


int main()
{

    Inventory repair[customerInventoryNumber];   // create inventory array objects

    cout << "Mr.Ding Board Repair and Surf Shop" << endl;

    inputCustomerInventory(repair); // get user input for inventory

    printCustomerInventory(repair); // print inventory data to screen

    return 0;

}


// **********************************************************
// name:      inputCustomerInventory
// called by: main
// passed:    Inventory customer[]
// returns:   nothing
// calls:     nobody
// The inputCustomerInventory function input user data for :  *
// check in number, damage description, customer last name,   *
// customer phone number, price quoted, hours worked on the   *
// item. All of these data are stored in the array of repair  *
// customer object. It also performs validation of input data *
// ************************************************************
void inputCustomerInventory(Inventory customer[]) {

    int customerCheckInNumber;
    int i;
    string customerDescription;
    string customerLastName;
    string customerPhone;
    string number;
    string price;
    string hours;
    float  customerQuotedPrice;
    float  customerHoursWorked;
    cout << fixed << showpoint << setprecision(2); // set output precision

    for (i = 0; i < customerInventoryNumber; i++) {

        // Get check in number
        cout << "\nEnter the checkin number (greater than zero): ";

        getline(cin, number);                 // get input number as string
        customerCheckInNumber = stoi(number); // convert string input to integer

        // validate check in number input
        while (customerCheckInNumber <= numberMinimum)
        {
            cout << "\nError ! your input is zero or less than zero " << endl;
            cout << "Enter the checkin number (greater than zero): ";

            getline(cin, number);
            customerCheckInNumber = stoi(number);
        }

        customer[i].setCheckInNumber(customerCheckInNumber);  // set the value to object

        cout << "Enter Damage Description : ";
        getline(cin, customerDescription);

        // validate damage description input
        while (customerDescription.size() > damageDescriptionLength)
        {
            cout << "\nError ! your description is too long " << endl;
            cout << "Enter Damage Description : ";
            getline(cin, customerDescription);
        }

        customer[i].setDamageDesc(customerDescription);  // set the value to object

        // Get customer last name
        cout << "Enter Last Name: ";
        getline(cin, customerLastName);

        // validate customer last name input
        while (customerLastName.size() > nameLength) {

            cout << "\nError ! your last name is too long " << endl;
            cout << "Enter Last Name : ";
            getline(cin, customerLastName);

        }

        customer[i].setCustomerLast(customerLastName);  // set the value to object

        // Get customer phone number
        cout << "Enter Phone Number: ";
        getline(cin, customerPhone);

        // validate customer phone number input
        while (customerPhone.size() > phoneLength) {

            cout << "\nError ! your phone number is too long " << endl;
            cout << "Enter phone number : ";
            getline(cin, customerPhone);

        }

        customer[i].setCustPhone(customerPhone);  // set the value to object

        // Get customer Quoted Price
        cout << "Enter Quoted Prices: $ ";

        getline(cin, price);
        customerQuotedPrice = stof(price);

        // validate quoted price input
        while (customerQuotedPrice < priceMinimum) {

            cout << "\nError ! your quoted price is less than zero ! " << endl;
            cout << "Enter Quoted Price : $ ";
            cin >> customerQuotedPrice;

        }

        customer[i].setPriceQuoted(customerQuotedPrice);  // set the value to object

        // Get Hours worked
        cout << "Enter Hours Worked: ";

        getline(cin, hours);
        customerHoursWorked = stof(hours);

        // validate hours worked input
        while (customerHoursWorked < hoursMinimum) {

            cout << "\nError ! your hours worked is less than zero ! " << endl;
            cout << "Enter Hours Worked : ";
            cin >> customerHoursWorked;

        }

        customer[i].setHoursWorked(customerHoursWorked);  // set the value to object

    } // end for loop
}

// **********************************************************
// name:      printCustomerInventory
// called by: main
// passed:    Inventory customer[]
// returns:   nothing
// calls:     nobody
// The printCustomerInventory function display to screen :  *
// check in number, damage description, customer last name, *
// customer phone number, price quoted, hours worked on the *
// item and total price quoted.                             *
// **********************************************************

void printCustomerInventory(Inventory customer[]) {

    int i;
    float  totalQuotes = 0.0;
    cout << fixed << showpoint << setprecision(2); // set output precision

    cout << "\nCustomers data are : " << endl;

    for (i = 0; i < customerInventoryNumber; i++) {

        cout << "CheckIn Number: ";
        cout << customer[i].getCheckInNumber() << endl;
        cout << "Damage: \t";
        cout << customer[i].getDamageDesc() << endl;
        cout << "Cust: \t\t";
        cout << customer[i].getCustomerLast() << endl;
        cout << "Phone: \t\t";
        cout << customer[i].getCustPhone() << endl;
        cout << "Quote: \t\t";
        cout << "$ " << customer[i].getPriceQuoted() << endl;
        cout << "Hours: \t\t";
        cout << customer[i].getHoursWorked() << endl;
        cout << endl << endl;
        totalQuotes += customer[i].getPriceQuoted();
    }

    cout << "---------------------------------------" << endl;
    cout << "Total of all Quotes: $ " << totalQuotes << endl;
    cout << endl;

}