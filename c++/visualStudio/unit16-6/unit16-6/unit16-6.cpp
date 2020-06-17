// unit16-6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

using namespace std;

void doubleList(vector<int> &list);
void printList(const vector<int> &list);

int main()
{
    vector<int> intList;

    intList.push_back(24);
    intList.push_back(39);
    intList.push_back(90);
    intList.push_back(66);

    cout << "intList: ";
    printList(intList);

    doubleList(intList);

    cout << "intList after multiplying each "
        << "element by 2: ";
    printList(intList);
    cout << endl;

    return 0;
}

void printList(const vector<int> &list)
{
    for (auto p : list)
        cout << p << " ";
    cout << endl;
}

void doubleList(vector<int> &list)
{
    for (auto &p : list)
        p = p * 2;
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
