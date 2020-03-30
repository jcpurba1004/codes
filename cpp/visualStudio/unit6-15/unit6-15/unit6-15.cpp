// unit6-15.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//Example 6-15: Reference and value parameters.
//Program: Makes you think.

#include <iostream>

using namespace std;

void addFirst(int& first, int& second);
void doubleFirst(int one, int two);
void squareFirst(int& ref, int val);

int main()
{
    int num = 5;

    cout << "Line 9: Inside main: num = " << num
         << endl;

    addFirst(num, num);
    cout << "Line 11: Inside main after addFirst:"
         << " num = " << num << endl;

    doubleFirst(num, num);
    cout << "Line 13: Inside main after "
         << " doubleFirst: num = " << num << endl;

    squareFirst(num, num);
    cout << "Line 15: Inside main after "
         << " squareFirst: num = " << num << endl;

    return 0;
}

void addFirst(int& first, int& second)
{
    int num = 5;

    cout << "Line 9: Inside main: num = " << num
         << endl;

    addFirst(num, num);
    cout << "Line 11: Inside main after addFirst:"
         << " num = " << num << endl;

    doubleFirst(num, num);
    cout << "Line 13: Inside main after "
        << " doubleFirst: num = " << num << endl;

    squareFirst(num, num);
    cout << "Line 15: Inside main after "
         << " squareFirst: num = " << num << endl;
}

void addFirst(int& first, int& second)
{
    cout << "Line 20: Inside addFirst: first = "
         << first << ", second = " << second << endl;

    first = first + 2;

    cout << "Line 22: Inside addFirst: first = "
         << first << ", second = " << second << endl;

    second = second * 2;

    cout << "Line 24: Inside addFirst: first = "
         << first << ", second = " << second << endl;
}

void doubleFirst(int one, int two)
{
    cout << "Line 28: Inside doubleFirst: one = "
         << one << ", two = " << two << endl;

    one = one * 2;

    cout << "Line 30: Inside doubleFirst: one = "
         << one << ", two = " << two << endl;

    two = two + 2;

    cout << "Line 32: Inside doubleFirst: one = "
         << one << ", two = " << two << endl;
}

void squareFirst(int& ref, int val)
{
    cout << "Line 36: Inside squareFirst: ref = "
         << ref << ", val = " << val << endl;

    ref = ref * ref;

    cout << "Line 38: Inside squareFirst: ref = "
         << ref << ", val = " << val << endl;

    val = val + 2;

    cout << "Line 40: Inside squareFirst: ref = "
         << ref << ", val = " << val << endl;
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
