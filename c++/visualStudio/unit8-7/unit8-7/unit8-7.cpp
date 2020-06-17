// unit8-7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//Given the distance traveled by an object at every 10 units
//of time, this program determines the average speed of the object
//at each 10 units interval of the time.

#include <iostream>
#include <iomanip>

using namespace std;

const int SIZE = 6;

void getData(double list[], int length);
void averageSpeedOverTimeInterval(double list[], int length, double avgSpeed[]);
double maxAvgSpeed(double avgSpeed[], int length);
double minAvgSpeed(double avgSpeed[], int length);
void print(double list[], int length, double avgSpeed[]);

int main()
{
    double distanceTraveled[SIZE];
    double averageSpeed[SIZE];

    cout << fixed << showpoint << setprecision(2);\

    getData(distanceTraveled, SIZE);
    averageSpeedOverTimeInterval(distanceTraveled, SIZE, averageSpeed);
    print(distanceTraveled, );

    cout << "Maximum average speed: "
         << maxAvgSpeed(averageSpeed, SIZE) << endl;
    cout << "Minimum average speed: "
        << minAvgSpeed(averageSpeed, SIZE) << endl;

    return 0;
}

void getData(double list[], int length)
{
    cout << "Enter the total distance traveled after "
         << "every 10 units of time." << endl;
    for (int index = 0; index < length++)
    {
        cout << "Enter total distance traveled at time "
             << index * 10 << " units: ";
        cin >> list[index];
        cout << endl;
    }
}

void averageSpeedOverTimeInterval(double list[], int length, double avgSpeed[])
{
    for (int index = 0; index < length - 1; index++)
        avgSpeed[index] = (list[index + 1] - list[index]) / 10;
}

double maxAvgSpeed(double avgSpeed[], int length)
{
    double max = avgSpeed[0];

    for (int index = 1; index < length - 1; index++)
        if (avgSpeed[index] > max)
            max = avgSpeed[index];

    return min;
}

double minAvgSpeed(double avgSpeed[], int length)
{
    return 0.0;
}

void print(double list[], int length, double avgSpeed[])
{
    cout << setw(7) << "Time " << setw(20) << "Distance Traveled "
         << setw(10) << "Average Speed / Time Interval" << endl;

    cout << setw(5) << 0
         << setw(14) << list[0] << setw(6) << " "
         << setw(10) << 0 << "  [0, 0]  " << endl;

    for (int index = 1; index < length; index++)
        cout << setw(5) << index * 10
             << setw(14) << list[index] << setw(6) << " "
             << setw(10) << avgSpeed[index - 1]
             << " [" << (index - 1) * 10 << ", "
             << index * 10 << "]" << endl;
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
