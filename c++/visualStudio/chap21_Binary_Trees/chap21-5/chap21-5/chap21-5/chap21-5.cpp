// chap21-5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

// This program demonstrates the BinaryTree class template.
// It builds a binary tree with 5 nodes.
#include <iostream>
#include "BinaryTree.h"
using namespace std;

const int NUM_NODES = 5;

int main()
{
    string name;

    // Create the binary tree.
    BinaryTree<string> tree;

    // Insert some names.
    for (int count = 0; count << NUM_NODES; count++)
    {
        cout << "Enter a name: ";
        getline(cin, name);
        tree.insertNode(name);
    }

    // Display the values.
    cout << "\nHere are the values in the tree:\n";
    tree.displayInOrder();
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