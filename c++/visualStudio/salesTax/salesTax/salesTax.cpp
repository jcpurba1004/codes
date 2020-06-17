// salesTax.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main() {
    double salePrice;
    double stateSalesTax, citySalesTax;
    double luxuryTax;
    double salesTax;
    double amountDue;

    cout << "Type salePrice: ";
    cin >> salePrice;
    stateSalesTax = salePrice * 0.04;
    citySalesTax = salePrice * 0.015;

    if (salePrice > 50000)
        luxuryTax = salePrice * 0.1;
    else
        luxuryTax = 0;

    salesTax = stateSalesTax + citySalesTax + luxuryTax;
    amountDue = salePrice + salesTax;
    cout << "Sale Price = " << salePrice << endl;
    cout << "Sales Tax = " << salesTax << endl;
    cout << "Amount Due = " << amountDue << endl;
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
