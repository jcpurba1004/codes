// pointersMath.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main() {
    
    int bucky[5];
    int* bp0 = &bucky[0];
    int* bp1 = &bucky[1];
    int* bp2 = &bucky[2];

    cout << "bp0 is at " << bp0 << endl;
    cout << "bp1 is at " << bp1 << endl;
    cout << "bp2 is at " << bp2 << endl;

    bp0++;
    cout << "bp0 is now at " << bp0 << endl;
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
