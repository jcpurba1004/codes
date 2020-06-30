// chap13-15.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

// This program demonstrates the Account class.
#include <iostream>
#include <cctype>
#include <iomanip>
#include "Account.h"
#include "chap13-15.h"
using namespace std;

// Function prototypes
void displayMenu();
void makeDeposit(Account &);
void withdraw(Account &);

int main()
{
    Account savings;   // Savings account object
    char choice;       // Menu selection

    // Set numeric output formatting.
    cout << fixed << showpoint << setprecision(2);

    do
    {
        // Display the menu and get a valid selection.
        displayMenu();
        cin >> choice;
        while (toupper(choice) < 'A' || toupper(choice) > 'G')
        {
            cout << "Please make a choice in the range "
                 << "of A through G:";
            cin >> choice;
        }

        // Process the user's menu selection.
        switch(choice)
        {
        case 'a':
        case 'A': cout << "The current balance is $";
                  break;
        case 'b':
        case 'B': cout << "There have been ";
                  cout << savings.getTransactions()
                       << " transactions.\n";
                  break;
        case 'c':
        case 'C': cout << "Interest earned for this period: $";
                  cout << savings.getInterest() << endl;
                  break;
        case 'd':
        case 'D': makeDeposit(savings);
                  break;
        case 'e':
        case 'E': withdraw(savings);
                  break;
        case 'f':
        case 'F': savings.calcInterest();
                  cout << "Interest added.\n";
        }
    } while (toupper(choice) != 'G');

    return 0;
}

//****************************************************
// Definition of function displayMenu. This function *
// displays the user's menu on the screen.           *
//****************************************************

void displayMenu()
{
    cout << "\n                MENU\n";
    cout << "----------------------------------------------------\n";
    cout << "A) Display the account balance\n";
    cout << "B) Display the number of transactions\n";
    cout << "C) Display interest earned for this period\n";
    cout << "D) Make a deposit\n";
    cout << "E) Make a withdrawal\n";
    cout << "F) Add interest for this period\n";
    cout << "G) Exit the program\n\n";
}

//*************************************************************
// Definition of function makeDeposit. This function accepts  *
// a reference to an Account object. The user is prompted for *
// the dollar amount of the deposit and the makeDeposit       *
// member of the Account object is then called.               *
//*************************************************************

void makeDeposit(Account& acnt)
{
    double dollars;

    cout << "Enter the amount of the deposit: ";
    cin >> dollars;
    cin.ignore();
    acnt.makeDeposit(dollars);
}

//*************************************************************
// Definition of function withdraw. This function accepts     *
// a reference to an Account object. The user is prompted for *
// the dollar amount of the withdrawal and the withdraw       *
// member of the Account object is then called.               *
//*************************************************************

void withdraw(Account& acnt)
{
    double dollars;

    cout << "Enter the amount of the withdrawal: ";
    cin >> dollars;
    cin.ignore();
    if (!acnt.withdraw(dollars))
        cout << "ERROR: Withdrawal amount too large.\n\n";
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