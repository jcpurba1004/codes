/*
*
* Jeremiah Purba
*
* Chapters 18 Programming Assignment CISC 187 Summer 2020
*
* July 9, 2020
*
* File name: main.cpp
*
*/

#include <iostream>
#include "PrimaryColors.h"


using namespace std;

int main()
{

    // Call menu function
    menu();

    return 0;
}

// ************************************************************
// name:      menu
// called by: main
// passed:    nothing
// returns:   nothing
// calls:     appendNode, insertNode, deleteNode, 
//            printList, reverseNode, searchNode,
//            displaySecondaryColor
// The menu function provides menu and its choices for user   *
// to perform tasks that are required. It defines the object  *
// with its pointer that is used by other functions.          *
// It calls other functions and pass the pointer to object    *
// accordingly and quit the program when user select 8.       * 
// ************************************************************
void menu(void) {

    const int EXITCHOICES = 8;  //Assumed 8 is the exit out
    const int maxInteger = 500;

    // Define a PrimaryColors object
    PrimaryColors colorList;


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
        cout << "7. Display list with secondary color" << endl;
        cout << "8. Exit" << endl << endl;
        cout << "Please choose a menu option: ";
        cin >> choice;

        // input validation
        while (cin.fail())
        {
            // clear input buffer to restore cin to a usable state
            cin.clear();
            cin.ignore(maxInteger, '\n');   // ignore last input
            cout << "Error ! You can only input number.\n";
            cout << "Please choose a menu option: ";
            cin >> choice;
        }

        cout << endl;
        switch (choice) {

        case 1:    appendNode(colorList);
            break;
        case 2:    insertNode(colorList);
            break;
        case 3:    deleteNode(colorList);
            break;
        case 4:    printList(colorList);
            break;
        case 5:    reverseNode(colorList);
            break;
        case 6:    searchNode(colorList);
            break;
        case 7:    displaySecondaryColor(colorList);
            break;
        case 8:  cout << "Thank you for using this software, goodbye ... " << endl;
            break;
        default:
            cout << "Error, that number is not on the menu. " << endl;
            cout << "Please enter a valid number (1-7 or 8 to quit) " << endl << endl;
        }
    }
}


// Ask user for color input and do validation on user input
// Call object append node to perform operation
void appendNode(PrimaryColors& colorList)
{
    string color;

    cout << "Enter primary color (red, green, blue) to append: ";
    cin >> color;

    // Highe level input validation for primary color
    while ((strcmp(color.c_str(), "red") != 0)
        && (strcmp(color.c_str(), "green") != 0)
        && (strcmp(color.c_str(), "blue") != 0))
    {
        cout << "Error !, wrong input" << endl;
        cout << "Enter primary color (red, green, blue) to append: ";
        cin >> color;
    }

    colorList.appendNode(color);

}

// Ask user for color input and node position 
// Do validation on user inputs
// Call object insert node to perform operation
// Validate the results
void insertNode(PrimaryColors& colorList)
{
    string color;
    int position;
    int validation;
    const int maxInteger = 500;

    cout << "Enter primary color (red, green, blue) to insert: ";
    cin >> color;

    // Highe level input validation for primary color
    while ((strcmp(color.c_str(), "red") != 0)
        && (strcmp(color.c_str(), "green") != 0)
        && (strcmp(color.c_str(), "blue") != 0))
    {
        cout << "Error !, wrong input" << endl;
        cout << "Enter primary color (red, green, blue) to insert: ";
        cin >> color;
    }

    cout << "What is the position of this color? ";
    cin >> position;

    // input validation
    while (cin.fail())
    {
        // clear input buffer to restore cin to a usable state
        cin.clear();
        cin.ignore(maxInteger, '\n');   // ignore last input
        cout << "Error ! You can only input number.\n";
        cout << "What position do you want to insert: ";
        cin >> position;
    }

    validation = colorList.insertNode(position, color);

    if (validation == -1)
    {
        cout << "I'm sorry but there is no position " << position << " in the linked list.\n\n";
    }
    else
    {
        cout << "Color inserted!\n\n";

    }
}

// Ask user for node position 
// Do validation on user inputs
// Call object delete node to perform operation
// Validate the results
void deleteNode(PrimaryColors& colorList)
{
    int position;
    int resultValidation;
    const int maxInteger = 500;

    cout << "What position do you want to delete: ";
    cin >> position;

    // input validation
    while (cin.fail())
    {
        // clear input buffer to restore cin to a usable state
        cin.clear();
        cin.ignore(maxInteger, '\n');   // ignore last input
        cout << "Error ! You can only input number.\n";
        cout << "What position do you want to insert: ";
        cin >> position;
    }

    resultValidation = colorList.deleteNode(position);

    if (resultValidation == -1)
    {
        cout << "I'm sorry but there is no position " << position << " in the linked list.\n\n";
    }
    else
    {
        cout << "Color Deleted!\n\n";
    }

}

// Print to screen all color information in the list nodes 
// Call object displayList to perform operation
void printList(PrimaryColors& colorList)
{
    cout << "\nData on the list are: " << endl;
    // Display the values in the list
    colorList.displayList();

}

// Reverse the list nodes order from head to tail 
// Call object reverseList to perform operation
// Validate the results
void reverseNode(PrimaryColors& colorList)
{
    int results;

    results = colorList.reverseList();

    if (results != -1)
    {
        cout << "Color list is reversed \n\n";
    }
    else
    {
        cout << "List is empty. \n\n";
    }

}

// Search a specific color in the list node 
// Ask user input for the color to be searched
// Validate user input
// Call object searchNode to perform operation
// Validate the results
void searchNode(PrimaryColors& colorList)
{
    string inputColor;
    int position;

    cout << "Enter primary color (red, green, blue) to search: ";
    cin >> inputColor;

    // Highe level input validation for primary color
    while ((strcmp(inputColor.c_str(), "red") != 0)
        && (strcmp(inputColor.c_str(), "green") != 0)
        && (strcmp(inputColor.c_str(), "blue") != 0))
    {
        cout << "Error !, wrong input" << endl;
        cout << "Enter primary color (red, green, blue) to append: ";
        cin >> inputColor;
    }

    position = colorList.searchNode(inputColor);

    if (position != -1)
    {
        cout << inputColor << " found at index : " << position << "\n\n";
    }
    else
    {
        cout << "List empty or color " << inputColor << " is not in the list!!\n\n";
    }
}

// This is for extra credit
// This will display secondary color between primary color
// It does not stor or create a new list because it is not required.
// Call object displaySecondaryColor to perform operation 
void displaySecondaryColor(PrimaryColors& colorList)
{
    cout << "\nData on the list with secondary color are: " << endl;
    // Display the values in the list
    colorList.displaySecondaryColor();
}