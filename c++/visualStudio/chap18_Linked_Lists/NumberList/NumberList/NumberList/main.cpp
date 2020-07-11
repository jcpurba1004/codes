// main.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "NumberList.h"

using namespace std;

int main()
{


    // Insert a node in the middle of the list
    //list.insertNode(1.0);

    // Append some values to the list
    //list.appendNode(2.5);
    //list.appendNode(7.9);
    //list.appendNode(12.6);

    //cout << "Before insert, data on the list are: " << endl;
    // Display the values in the list
    //list.displayList();

    // Insert a node in the middle of the list
    //list.insertNode(0.2);

    //cout << "\nAfter insert, data on the list are: " << endl;
    // Display the values in the list
    //list.displayList();

    // Delete the middle node
    //cout << "Now deleting node in the middle.\n";
    //list.deleteNode(2.5);

    //cout << "\nAfter delete middle node, data on the list are: " << endl;
    // Display the values in the list
    //list.displayList();

    // Delete the middle node
    //cout << "Now deleting node in the beginning.\n";
    //list.deleteNode(0.2);

    //cout << "\nAfter delete start node, data on the list are: " << endl;
    // Display the values in the list
    //list.displayList();

    // Call menu function
    menu();

    return 0;
}

// ************************************************************
// name:      menu
// called by: main
// passed:    nothing
// returns:   nothing
// calls:     columnSwitch, totalVowel, displayArray, 
//            searchCountChar
// The menu function provides menu and its choices for user   *
// to perform tasks that are required. It defines the array   *
// with its pointer that is used by other functions.          *
// It calls other functions and pass the pointer to the array *
// accordingly and quit the program when user select 5.       * 
// ************************************************************
void menu(void) {

    const int EXITCHOICES = 7;  //Assumed 5 is the exit out
    // Define a NumberList object
    NumberList list;

    int choice = 0;

    // This part of the code follow the example from teacher pseudo code
    while (choice != EXITCHOICES) {

        cout << endl;
        cout << "1. Append" << endl;
        cout << "2. Insert" << endl;
        cout << "3. Delete" << endl;
        cout << "4. Print" << endl;
        cout << "5. Reverse" << endl;
        cout << "6. Search" << endl;
        cout << "7. Exit" << endl << endl;
        cout << "Please choose a menu option: ";
        cin >> choice;

        cout << endl;
        switch (choice) {

        case 1:    appendNode(list);
            break;
        case 2:    insertNode(list);
            break;
        case 3:    deleteNode(list);
            break;
        case 4:    printList(list);
            break;
        case 5:    reverseNode(list);
            break;
        case 6:    searchNode(list);
            break;
        case 7:  cout << "Thank you for using this software, goodbye ... " << endl;
            break;
        default:
            cout << "Error, that number is not on the menu. " << endl;
            cout << "Please enter a valid number (1-6 or 7 to quit) " << endl << endl;
        }
    }
}

void appendNode(NumberList& list)
{
    double inputNumber;

    cout << "Enter the number that you want to append: ";
    cin >> inputNumber;

    list.appendNode(inputNumber);

}

void insertNode(NumberList& list)
{
    double inputNumber;

    cout << "Enter the number that you want to insert: ";
    cin >> inputNumber;

    list.insertNode(inputNumber);
}

void deleteNode(NumberList& list)
{
    double inputNumber;

    cout << "Enter the number that you want to delete: ";
    cin >> inputNumber;

    list.deleteNode(inputNumber);
}

void printList(NumberList& list)
{
    cout << "\nData on the list are: " << endl;
    // Display the values in the list
    list.displayList();

}

void reverseNode(NumberList& list)
{

}

void searchNode(NumberList& list)
{

}


