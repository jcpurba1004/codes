// unit3-12.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//C++ 14 Digit Separator

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int x = 7'087'625;
    long long y = 28'087'523'872'918;
    double z = 47'034'612'982.68'741;

    cout << fixed << showpoint << setprecision(5);

    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
    cout << "z = " << z << endl;
    cout << 1'2'3'4'5'6'7'8'9'0 << endl;
    cout << "8'403 * 3'600 = " << 8'403 * 3'600 << endl;

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
