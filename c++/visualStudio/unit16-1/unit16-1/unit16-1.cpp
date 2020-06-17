// unit16-1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//Bubble sort

#include <iostream>

using namespace std;

void bubbleSort(int list[], int length);

int main()
{
    int list[] = {20, 36, 24, 65, 78, 45, 58,
                  90, 2, 15};

    bubbleSort(list, 10);

    cout << "After sorting, the list "
         << "elements are: " << endl;

    for (int i = 0; i < 10; i++)
        cout << list[i] << " ";

    cout << endl;

    return 0;
}

//Place the definition of the function bubbleSort given
//previously here.

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

void bubbleSort(int list[], int length)
{
}
