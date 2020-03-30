// unit6-16.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//Program: Second degree polynomial factorization

#include <iostream>
#include <cmath>

using namespace std;

void factorization(int b, int c, int& ul, int& vl, bool& isFactorable);

int main()
{
    int coeffOfX;
    int constantTerm;
    int u;
    int v;
    bool isPolynomialFactorable;

    cout << "Enter the coefficient of x: ";
    cin >> coeffOfX;
    cout << endl;

    cout << "Enter the constant term: ";
    cin >> constantTerm;
    cout << endl;

    factorization(coeffOfX, constantTerm, u, v, isPolynomialFactorable);

    if (isPolynomialFactorable)
    {
        cout << "x^2";

        if (coeffOfX > 0)
            cout << " + " << coeffOfX << "x";
        else if (coeffOfX < 0)
            cout << " - " << abs(coeffOfX) << "x";

        if (constantTerm > 0)
            cout << " + " << constantTerm;
        else if (constantTerm < 0)
            cout << " - " << abs(constantTerm) << "x";

        cout << " = (x";
        if (u > 0)
            cout << " - " << u << ") (x";
        else if (u < 0)
            cout << " + " << abs(u) << ") (x";

        if (v > 0)
            cout << " - " << v << ")" << endl;
        else if (v < 0)
            cout << " + " << abs(v) << ")" << endl;
    }
    else
        cout << "The polynomial is not factorable." << endl;

    return 0;
}

//Place the definition of the function factorization here.

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

void factorization(int b, int c, int& ul, int& vl, bool& isFactorable)
{
}
