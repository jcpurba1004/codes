// unit5-20.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//Program: Divisibility test by 3 and 9

#include <iostream>

using namespace std;

int main()
{
    int num, temp, sum;

    cout << "Enter a positive integer: ";
    cin >> num;
    cout << endl;

    temp = num;

    sum = 0;

    do
    {
        sum = sum + num % 10;  //extract the last digit
                               //and add it to sum
        num = num / 10;        //remove the last digit
    }
    while (num > 0);

    cout << "The sum of the digits = " << sum << endl;

    if (sum % 9 == 0)
        cout << temp << " is divisible by 3 and 9" << endl;
    else if (sum % 3 == 0)
        cout << temp << " is divisible by 3, but not 9" << endl;
    else
        cout << temp << " is not divisible by 3 or 9" << endl;

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
