// salesPersonSalary.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
    double baseSalary;
    int serviceYears;
    int bonus;
    double totalSales;
    int additionalBonus;
    double payCheck;

    cout << "Type base Salary: ";
    cin >> baseSalary;
    cout << "Type number of Service Years: ";
    cin >> serviceYears;
    cout << "Type total Sales: ";
    cin >> totalSales;

    if (serviceYears <= 5)
        bonus = 10 * serviceYears;
    else
        bonus = 20 * serviceYears;

    if (totalSales < 5000)
        additionalBonus = 0;
    else if (5000 <= totalSales < 10000)
        additionalBonus = totalSales * (0.03);
    else
        additionalBonus = totalSales * (0.06);
        
    payCheck = baseSalary + bonus + additionalBonus;
    cout << "Bonus = " << bonus << endl;
    cout << "Additional Bonus = " << additionalBonus << endl;
    cout << "Pay Check = " << payCheck << endl;
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
