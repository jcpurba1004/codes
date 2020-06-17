// unit6-2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>

using namespace std;

double larger(double x, double y)
{
    double max;

    if (x >= y)
        max = x;
    else
        max = y;
    
    return max;
}

int main()
{
    double num1 = 13.00;
    double num2 = 36.53;
    double maxNum;

    cout << fixed << showpoint << setprecision(2); 

    cout << "The larger of 5.0 and 6.0 is " << larger(5.0, 6.0)
         << endl;

    cout << "The larger of " << num1 << " and " << num2
         << " is " << larger(num1, num2) << endl;

    cout << "The larger of " << num1 << " and 29 is "
         << larger(num1, 29) << endl;

    maxNum = larger(38.45, 56.78);

    return 0;
}

