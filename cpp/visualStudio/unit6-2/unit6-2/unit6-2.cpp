// unit6-2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
    double num1 = 13.00;
    double nu21 = 36.53;
    double maxNum;

    cout << "The larger of 5 and 6 is " << larger(5, 6)
         << endl;

    cout << "The larger of " << num1 << " and " << num2
         << " is " << larger(num1, num2) << endl;

    cout << "The larger of " << num1 << " and 29 is "
         << larger(num1, 29) << endl;

    maxNum = larger(38.45, 56.78);

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
