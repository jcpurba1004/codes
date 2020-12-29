// chap21-3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

// This program builds a binary tree with 5 nodes.
// The SearchNode function is demonstrated.
#include <iostream>
#include "IntBinaryTree.h"
using namespace std;

int main()
{
    IntBinaryTree tree;

    // Insert some nodes in the tree.
    cout << "Inserting nodes.\n";
    tree.insertNode(5);
    tree.insertNode(8);
    tree.insertNode(3);
    tree.insertNode(12);
    tree.insertNode(9);

    // Search for the value 3.
    if (tree.searchNode(3))
        cout << "3 is found in the tree.\n";
    else
        cout << "3 was not found in the tree.\n";

    // Search for the value 100.
    if (tree.searchNode(100))
        cout << "100 is found in the tree.\n";
    else
        cout << "100 was not found in the tree.\n";
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