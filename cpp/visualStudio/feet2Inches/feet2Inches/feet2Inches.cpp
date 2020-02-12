// feet2Inches.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
    int inches; //variables to store total inches

    inches = 100; //store 100 in the variable inches

    cout << inches << " inch(es) = ";
                              //inches and the equal sign
    cout << inches / 12 << " feet (foot) and "; //output maximum
                               //number of feet (foot)
    cout << inches % 12 << " inch(es)" << endl; //output
                               //remaining inches

    cout << "Enter total inches and press Enter: "; //prompt
                                //the user to enter total inches
    cin >> inches;  //store the value entered by the user
                    //into the variable inches
    cout << endl;

    cout << inches << " inch(es) = ";
    //inches and the equal sign
    cout << inches / 12 << " feet (foot) and "; //output maximum
                               //number of feet (foot)
    cout << inches % 12 << " inch(es)" << endl; //output
                               //remaining inches

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
