// chap13-9.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

// This program demonstrates passing an argument to a constructor.
#include <iostream>
#include <iomanip>
#include "Sale.h"
using namespace std;

int main()
{
    const double TAX_RATE = 0.06;   // 6 percent sales tax rate
    double cost;                    // To hold the item cost

    // Get the cost of the item.
    cout << "Enter the cost of the item: ";
    cin >> cost;

    // Create a Sale object for this transaction.
    Sale itemSale(cost, TAX_RATE);

    // Set numeric output formatting.
    cout << fixed << showpoint << setprecision(2);

    // Display the sales tax and total.
    cout << "The amount of sales tax is $"
         << itemSale.getTax() << endl;
    cout << "The total of the sale is $";
    cout << itemSale.getTotal() << endl;
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