// unit4-3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//Program to compute and output the penalty on an unpaid
//credit card balance. The program assumes that the interest
//rate on the unpaid balance is 1.5% per month

#include <iostream>
#include <iomanip>

using namespace std;

const double INTEREST_RATE = 0.015;

int main()
{
    double creditCardBalance;
    double payment;
    double balance;
    double penalty = 0.0;

    cout << fixed << showpoint << setprecision(2);

    cout << "Line 12: Enter credit card balance: ";
    cin >> creditCardBalance;
    cout << endl;

    cout << "Line 15: Enter the payment: ";
    cin >> payment;
    cout << endl;

    balance = creditCardBalance - payment;

    if (balance > 0)
        penalty = balance * INTEREST_RATE;

    cout << "Line 21: The balance is: $" << balance
         << endl;
    cout << "Line 22: The penalty to be added to your "
         << "next month bill is: $" << penalty << endl;

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
