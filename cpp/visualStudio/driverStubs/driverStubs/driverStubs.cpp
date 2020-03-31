// driverStubs.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>

using namespace std;

const double GALLONS_IN_A_CUBIC_FOOT = 7.48;

double poolCapacity(double len, double wid, double dep);
void poolFillTime(double len, double wid, double dep, double fRate, int& fTime);

void print(int fTime);

int main()
{
    double length, width, depth;
    double fillRate;
    int fillTime;

    cout << fixed << showpoint << setprecision(2);

    cout << "Enter the length, width and the depth of the "
         << "pool, (in feet): ";
    cin >> length >> width >> depth;
    cout << endl;

    cout << "Enter the rate of the water, (in gallons per minute): ";
    cin >> fillRate;
    cout << endl;

    poolFillTime(length, width, depth, fillRate, fillTime);
    print(fillTime);

    return 0;
}
    double poolCapacity(double len, double wid, double dep)
    {
        double volume;
        double poolWaterCapacity;

        volume = len * wid * dep;
        poolWaterCapacity = volume * GALLONS_IN_A_CUBIC_FOOT;

        return poolWaterCapacity;
    }

    void poolFillTime(double len, double wid, double dep, double fRate, int& fTime)
    {
    }

    void poolFIllTime(double len, double wid, double dep, double fRate, int& fTime)
    {
        double poolWaterCapacity;

        poolWaterCapacity = poolCapacity(len, wid, dep);
        fTime = static_cast<int> (poolWaterCapacity / fRate + 0.5);
    }

    void print(int fTime)
    {
        cout << "The time to fill the pool is approximately: "
             << fTime / 60 << " hour(s) and " << fTime % 60
             << " minute(s)." << endl;
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
