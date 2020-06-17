// unit6-14.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//Example 6-14: Reference and value parameters

#include <iostream>

using namespace std;

void funOne(int a, int& b, char v);
void funTwo(int& x, int y, char& w);

int main()
{
    int num1, num2;
    char ch;

    num1 = 10;
    num2 = 15;
    ch = 'A';

    cout << "Line 12: Inside main: num1 = " << num1
         << ", num2 = " << num2 << ", and ch = "
         << ch << endl;

    funOne(num1, num2, ch);

    cout << "Line 14: After funOne: num1 = " << num1
         << ", num2 = " << num2 << ", and ch = " 
         << ch << endl;

    funOne(num2, 25, ch);

    cout << "Line 16: After funTwo: num1 = " << num1
        << ", num2 = " << num2 << ", and ch = "
        << ch << endl;

    return 0;
}

void funOne(int a, int& b, char v)
{
    int one;

    one = a;
    a++;
    b = b * 2;
    v = 'B';

    cout << "Line 26: Inside funOne: a = "
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
