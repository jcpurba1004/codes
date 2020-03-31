// unit6-19.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>

using namespace std;

int volume(int l = 1, int w = 1, int h = 1);
int main();
void funcOne(int& x, double y = 12.34, char z = 'B');

int main()
{
    int a = 23;
    double b = 48.78;
    char ch = 'M';

    cout << fixed << showpoint << setprecision(2);

    cout << "Line 12: a = " << a << ", b = "
         << b << ", ch = " << ch << endl;
    cout << "Line 13: Volume = " << volume()
         << endl;
    cout << "Line 14: Volume = " << volume(5, 4)
         << endl;
    cout << "Line 15: Volume = " << volume(34)
         << endl;
    cout << "Line 16: Volume = " 
         << volume(6, 4, 5) << endl;
    funcOne(a);
    funcOne(a, 42.68);
    funcOne(a, 34.65, 'Q');
    cout << "Line 20: a = " << a << ", b = "
         << b << ", ch = " << ch << endl;

    return 0;
}

int volume(int l, int w, int h)
{
    return l * w * h;
}

void funcOne(int& x, double y, char z)
{
    x = 2 * x;
    cout << "Line 30: x = " << x << ", y = "
         << y << ", z = " << z << endl;
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