// chap7-27.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

// This program stores, in two arrays, the hours worked by 5
// employees and their hourly pay rates.
#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

int main()
{
    vector<int> hours;       // hours is an empty vector
    vector<double> payRate;  // payRate is an empty vector
    int numEmployees;        // The number of employees
    int index;               // Loop counter

    // Get the number of employees.
    cout << "How many employees do you have? ";
    cin >> numEmployees;

    // Input the payroll data.
    cout << "Enter the hours worked by " << numEmployees;
    cout << " employees and their hourly rates.\n";
    for (index = 0; index < numEmployees; index++)
    {
        int tempHours;          // To hold the number of hours entered
        double tempRate;        // To hold the pay rate entered

        cout << "Hours worked by employee #" << (index + 1);
        cout << ": ";
        cin >> tempHours;
        hours.push_back(tempHours);      // Add an element to hours
        cout << "Hourly pay rate for employee #";
        cout << (index + 1) << ": ";
        cin >> tempRate;
        payRate.push_back(tempRate); // Add an element to payRate
    }

    // Display each employee's gross pay.
    cout << "Here is the gross pay for each employee:\n";
    cout << fixed << showpoint << setprecision(2);
    for (index = 0; index < numEmployees; index++)
    {
        double grossPay = hours[index] * payRate[index];
        cout << "Employee #" << (index + 1);
        cout << ": $" << grossPay << endl;
    }
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