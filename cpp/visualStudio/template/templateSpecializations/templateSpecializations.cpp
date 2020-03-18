// templateSpecializations.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

template <class T>
class Spunky {
    public:
        Spunky(T x) {
            cout << x << " is not a character!" << endl;
        }
};

template<>
class Spunky<char>{ 
    public:
        Spunky(char x) {
            cout << x << " is indeed a character!" << endl;
        }
};

int main () {
    Spunky<int> obj1(7);
    Spunky<double> obj2(3.154);
    Spunky<char> obj3('q');
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
