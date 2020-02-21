// Exercise_2-3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//include statement(s)
#include <iostream>
//using namespace statement
using namespace std;

int main()
{
    
//variable declaration
    int num1, num2, num3, average;

//executable statements
    cout << "Enter positive integer number: ";
    cin >> num1;
    cout << "The input number is " << num1 << endl;

    num1 = 125;
    num2 = 28;
    num3 = -25;
    average = (num1 + num2 + num3)/3;

    cout << "num1 = "<<num1<<endl;
    cout << "num2 = "<<num2<<endl;
    cout << "num3 = "<<num3<<endl;
    cout << "average = "<<average<<endl;
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
