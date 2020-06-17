// unit6-17.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//Menu driven program.

#include <iostream>

using namespace std;

const double CONVERSION = 2.54;
const int INCHES_IN_FOOT = 12;
const int CENTIMETERS_IN_METER = 100;

int main();

void showChoices();

void feetAndInchesToMetersAndCent(int f, int in, int& mt, int& ct);
void metersAndCentTofeetAndInches(int mt, int ct, int& f, int& in);

int main()
{
    int feet, inches;
    int meters, centimeters;
    int choice;

    do
    {
        showChoices();
        cin >> choice;
        cout << endl;

        switch (choice)
        {
        case 1:
            cout << "Enter feet and inches: ";
            cin >> feet >> inches;
            cout << endl;
            feetAndInchesToMetersAndCent(feet, inches, meters, centimeters);
            cout << feet << " feet(foot), "
                << inches << " inch(es), "
                << meters << " meter(s), "
                << centimeters << " centimeter(s)." << endl;
            break;

        case 2:
            cout << "Enter meters and centimeters: ";
            cin >> meters >> centimeters;
            cout << endl;
            feetAndInchesToMetersAndCent(meters, centimeters, feet, inches);
            cout << meters << " meter(s), "
                << centimeters << " centimeter(s), "
                << feet << " feet(foot), "
                << inches << " inch(es)."
                << endl;
            break;

        case 99:
            break;

        default:
            cout << "Invalid input." << endl;
        }
    } while (choice != 99);

    return 0;
}

void showChoices()
{
    cout << "Enter--" << endl;
    cout << "1: To convert from feet and inches to meters "
         << "and centimeters." << endl;
    cout << "2: To convert from meters and centimeters to feet "
         << "and inches." << endl;
    cout << "99: To quit the program." << endl;
}

void feetAndInchesToMetersAndCent(int f, int in, int& mt, int& ct)
    {
        int inches;

        inches = f * INCHES_IN_FOOT + in;
        ct = static_cast<int>(inches * CONVERSION);
        mt = ct / CENTIMETERS_IN_METER;
        ct = ct % CENTIMETERS_IN_METER;
    }

void metersAndCentTofeetAndInches(int mt, int ct, int& f, int& in)
{
    int inches;

    inches = f * INCHES_IN_FOOT + in;
    ct = static_cast<int>(inches * CONVERSION);
    mt = ct / CENTIMETERS_IN_METER;
    ct = ct % CENTIMETERS_IN_METER;
}

void metersAndCentTofeetAndInches(int mt, int ct, int& f, int& in);

{
    int centimeters;

    centimeters = mt * CENTIMETERS_IN_METER + ct;
    in = static_cast<int>(centimeters / CONVERSION);
    f = in / INCHES_IN_FOOT;
    in = in % INCHES_IN_FOOT;
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
