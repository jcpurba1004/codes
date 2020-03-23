// cableCompanyBilling.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//***********************************************************
// Author: Jeremiah Purba
//
// Program: Cable Company Billing
// This program calculates and prints a customer's bill for
// a local cable company. The program processes two types of
// customers: residential and business.
//***********************************************************

#include <iostream>
#include <iomanip>

using namespace std;

      //Named constants - residential customers
const double RES_BILL_PROC_FEES = 4.50;
const double RES_BASIC_SERV_COST = 20.50;
const double RES_COST_PREM_CHANNEL = 7.50;

      //Named constants - business customers
const double BUS_BILL_PROC_FEES = 15.00;
const double BUS_BASIC_SERV_COST = 75.00;
const double BUS_BASIC_CONN_COST = 5.00;
const double BUS_COST_PREM_CHANNEL = 50.00;
int main()
{
        //Variable declaration
    int accountNumber;
    char customerType;
    int numOfPremChannels;
    int numOfBasicServConn;
    double amountDue;

    cout << fixed << showpoint;
    cout << setprecision(2);

    cout << "This program computes a cable "
         << "bill." << endl;

    cout << "Enter account number (an integer): ";
    cin >> accountNumber;
    cout << endl;

    cout << "Enter customer type: "
         << "R or r (Residential), "
         << "B or b (Business):  ";
    cin >> customerType;
    cout << endl;

    switch (customerType)
    {
    case 'r':
    case 'R':
        cout << "Enter the number"
            << " of premium channels: ";
        cin >> numOfPremChannels;
        cout << endl;

        amountDue = RES_BILL_PROC_FEES
            + RES_BASIC_SERV_COST
            + numOfPremChannels *
            RES_COST_PREM_CHANNEL;

        cout << "Account number: "
            << accountNumber
            << endl;
        cout << "Amount due: $"
            << amountDue
            << endl;
        break;

    case 'b':
    case 'B':
        cout << "Enter the number of basic "
            << "service connections: ";
        cin >> numOfBasicServConn;
        cout << endl;

        cout << "Enter the number"
            << " of premium channels: ";
        cin >> numOfPremChannels;
        cout << endl;

        if (numOfBasicServConn <= 10)
            amountDue = BUS_BILL_PROC_FEES
            + BUS_BASIC_SERV_COST
            + numOfPremChannels *
            BUS_COST_PREM_CHANNEL;
        else
            amountDue = BUS_BILL_PROC_FEES
            + BUS_BASIC_SERV_COST
            + (numOfBasicServConn - 10) *
            BUS_BASIC_CONN_COST
            + numOfPremChannels *
            BUS_COST_PREM_CHANNEL;

        cout << "Account number: "
            << accountNumber << endl;
        cout << "Amount due: $" << amountDue
            << endl;
        break;

    default:
        cout << "Invalid customer type." << endl;
    }//end switch

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
