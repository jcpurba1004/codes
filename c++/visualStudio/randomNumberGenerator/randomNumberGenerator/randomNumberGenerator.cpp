// randomNumberGenerator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//C++11: Random number generator.

#include <iostream>
#include <random>

using namespace std;

int main()
{
    random_device rdevice{};
    default_random_engine num{ rdevice() };
    uniform_int_distribution<unsigned int> randomNum{1, 6};

    for (unsigned int count = 1; count <= 10; count++)
        cout << randomNum(num) << " ";
    cout << endl;

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
