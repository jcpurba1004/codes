// unit4-16.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

    double balance; 
    double interestRate;
    char ch, ch1, ch2;
    cout << fixed << showpoint << setprecision(2);

    cout << "Enter balance: ";
    cin >> balance;
    

    if (balance > 50000.00)
        interestRate = 0.07;
    else if (balance >= 25000.00)
        interestRate = 0.05;
    else if (balance >= 1000.00)
        interestRate = 0.03;
    else
        interestRate = 0.00;

    cout << "Balance: " << balance << " and interest rate: " << interestRate << endl;

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
