/*
*
* Jeremiah Purba
*
* Chapters 20 Programming Example CISC 187 Summer 2020
*
* July 23, 2020
*
* File name: Recursion_Queues.cpp
*
*/
#include <iostream>
#include <string>
#include "DynamicQueues.h"

using namespace std;
int main()
{
    DynamicQueues test;
    string testStr;
    int i;
    int result;

    int num = 3;
    //1. Please create a single entry in your queue.  
    testStr = "Paul";
    test.enqueue(testStr, num);

    // Display the number of nodes in the list 
    test.numNodes();

    //cout << "The customer in the queue: \n";
    test.displayQueue();

    //2. Use find most kids.The same issue with find friend.
    // Try search kid first    
    cout << endl;
    result = test.searchKid();

    test.displayQueue();
    cout << endl;

    //3. Append more names to the queue.
    test.enqueue("Bob", 1);

    test.displayQueue();
    cout << endl;

    //4. Display results.Note; new nodes are missing.
    test.dequeue(testStr, num);

    test.displayQueue();
    cout << endl;


    //1. Please create a single entry in your queue.
    //2. Use find most kids.The same issue with find friend.
    // Now test with search name
    result = test.searchName("Bob");
    cout << endl;
    result = test.searchName("Tom");

    test.displayQueue();
    cout << endl;

    //3. Append more names to the queue.
    test.enqueue("Joe", 4);
    cout << endl;

    //4. Display results.Note; new nodes are missing.
    test.displayQueue();


    menu();
}

// ************************************************************
// name:      menu                                            *
// called by: main                                            * 
// passed:    nothing                                         *
// returns:   nothing                                         *
// calls:     enqueueNode, dequeueNode, countCars, moveCarKid *
//            moveFriend, printQueue                          *
// The menu function provides menu and its choices for user   *
// to perform tasks that are required. It defines the array   *
// with its pointer that is used by other functions.          *
// It calls other functions and pass the pointer to the array *
// accordingly and quit the program when user select 5.       * 
// ************************************************************
void menu(void) {

    const int EXITCHOICES = 7;  //Assumed 5 is the exit out
    // Define a NumberList object
    DynamicQueues list;

    int choice = 0;

    // This part of the code follow the example from teacher pseudo code
    while (choice != EXITCHOICES) {

        cout << endl;
        cout << "1. Append a name to the queue" << endl;
        cout << "2. Allow front of line to order food and exit the queue" << endl;
        cout << "3. Count cars in the queue" << endl;
        cout << "4. Move car with most kids to front of the queue" << endl;
        cout << "5. Move a friend to the front of the queue" << endl;
        cout << "6. Display the queue" << endl;
        cout << "7. Exit the program" << endl << endl;
        cout << "Select menu: ";
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

        case 1:    enqueueNode(list);
            break;
        case 2:    dequeueNode(list);
            break;
        case 3:    countCars(list);
            break;
        case 4:    moveCarKid(list);
            break;
        case 5:    moveFriend(list);
            break;
        case 6:    printQueue(list);
            break;
        case 7:  cout << "Thank you for visiting In-N-Out Burger " << endl;
            break;
        default:
            cout << "Error, that number is not on the menu. " << endl;
            cout << "Please enter a valid number (1-6 or 7 to quit) " << endl << endl;
        }
    }
}

// ************************************************************
// name:      enqueueNode                                      *
// called by: menu                                            *
// passed:    object DynamicQueues                            * 
// returns:   nothing                                         * 
// calls:     DynamicQueues::enqueue(string,int)              *
// Purpose:   append (to the end of the line)                 * 
// Validation: check input name <20 char's and must not be    * 
//             empty. Check also number of children (int >=0) *
// ************************************************************

void enqueueNode(DynamicQueues& list)
{
    int numberOfKids;
    string customerName;

    cin.clear();                    // clear buffer
    cin.ignore(maxInteger, '\n');   // ignore last input
    cout << "What is the name of the car driver ? \n";
    getline(cin, customerName);

    // Validate input string 
    while (customerName.length() == 0 || customerName.length() > maxNameLength || (validateString(customerName) == false))
    {
        cout << "Error ! Wrong input string ... ! \n";
        cout << "It is not alphabet, empty string or string length more than 19 characters.\n";
        cout << "\nEnter new string (alphabet string, not empty and not longer than 19 characters): ";

        getline(cin, customerName);
    }

    cout << "How many kids ? \n";
    cin >> numberOfKids;

    // input validation, numberOfKids should be >= 0
    while (cin.fail() || numberOfKids < 0)
    {
        // clear input buffer to restore cin to a usable state
        cin.clear();
        cin.ignore(maxInteger, '\n');   // ignore last input
        cout << "Error ! You can only input number >=0 for number of kid.\n";
        cout << "How many kids ?: ";
        cin >> numberOfKids;
    }

    list.enqueue(customerName, numberOfKids);

}

// ************************************************************
// name:      dequeueNode                                      *
// called by: menu                                            *
// passed:    object DynamicQueues                            * 
// returns:   nothing                                         * 
// calls:     dequeue(string,int)                             *
// Purpose:   allow-front-of-line-to to place their order     *
//            (display their name and a message that they can * 
//            order then delete from the front of the line. ) *
// Validation: check if queue is empty or not                 * 
// ************************************************************
void dequeueNode(DynamicQueues& list)
{
    string customerName;
    int numberOfKid;
    int numberOfItems;

    numberOfItems = list.getNumberItems();

    // check if the queue is empty
    if (numberOfItems == 0)
    {
        cout << "The queue is empty and there is no car. \n";
    }
    else
    {
        list.dequeue(customerName, numberOfKid);
    }
}

// ************************************************************
// name:      countCars                                       *
// called by: menu                                            *
// passed:    object DynamicQueues                            * 
// returns:   nothing                                         * 
// calls:     numNodes()                                      *
// Purpose:   count cars in line (display the total number of *  
//            cars in the queue)                              * 
// Validation: None                                           * 
// ************************************************************
void countCars(DynamicQueues& list)
{
    // Display the number of cars in the queue 
    list.numNodes();
}

// ************************************************************
// name:      validateString                                  *
// called by: enqueueNode, moveFriend                         *
// passed:    string                                          * 
// returns:   bool                                            * 
// calls:     nothing                                         * 
// Purpose:   check the input string whether it is alphabetic * 
//            or not. It will check each character. It also   *
//            check whether input white space or not.         *
// ************************************************************
bool validateString(const std::string& stringInput)
{

    // Check input for each character
    for (const char charInput : stringInput)
    {
        // check if the character is not a digit number 
        if ((isdigit(charInput)) || isblank(charInput))
            return false;
    }

    return true;
}

// ************************************************************
// name:      moveCarKid                                      *
// called by: menu                                            *
// passed:    object DynamicQueues                            * 
// returns:   nothing                                         * 
// calls:     searchKid()                                     * 
// Purpose:   move kids to the front of the queue(find car    * 
//            with the most children, display the name and a  *
//            message, and move them to the front of the      *
//            queue. If no cars with children then display    *
//            message to that effect.) ** you must use        *
//            recursion to accomplish this item.              * 
// Validation: Check if queue is empty or not and if there is *
//             no kid in the queue                            *
// ************************************************************
// 
void moveCarKid(DynamicQueues& list)
{
    int result;

    result = list.searchKid();
    if (result == -1)
    {
        cout << "The queue is empty so there is no customer \n";
    }
    else if (result == 0)
    {
        cout << "Sorry, no kid in the queue" << endl;
    }
    else
    {    // for result > 0
        //cout << "The position of car with most kids is number " << result << endl;
    }
}


// ************************************************************
// name:      moveFriend                                      *
// called by: menu                                            *
// passed:    object DynamicQueues                            * 
// returns:   nothing                                         * 
// calls:     searchName()                                    * 
// Purpose:   let in your friend (search for a specific name  *
//            and if it exists, move them to the front of the *
//            queue; if no friend in line display message.)   *
//            ** you must use recursion to accomplish this    *
//            item.                                           *
// Validation: validate input user string name. Also check if *
//             queue is empty or not and if friend is not in  *
//             the queue.                                     *
// ************************************************************
// 
void moveFriend(DynamicQueues& list)
{
    int result;
    string friendName;


    cin.clear();                    // clear buffer
    cin.ignore(maxInteger, '\n');   // ignore last input
    cout << "What is the name of your friend ? \n";
    getline(cin, friendName);

    // Validate input string 
    while (friendName.length() == 0 || friendName.length() > maxNameLength || (validateString(friendName) == false))
    {
        cout << "Error ! Wrong input string ... ! \n";
        cout << "It is not alphabet, empty string or string length more than 19 characters.\n";
        cout << "\nEnter new string (alphabet string, not empty and not longer than 19 characters): ";

        getline(cin, friendName);
    }

    result = list.searchName(friendName);
    if (result == -1)
    {
        cout << "Your friend, " << friendName << ", has been served and left the queue. \n";
    }
    else if (result == 0)
    {
        cout << "Your friend, " << friendName << " , might have been served and left the queue." << endl;
    }
    else
    {    // for result > 0
        if (result == 1)
        {
            cout << "Your friend, " << friendName
                << " already waiting at the front of the queue. \n";
        }
        else
        {
            cout << "Your friend, " << friendName
                << " has been moved to the front of the queue. \n";
        }
    }
}

// ************************************************************
// name:      printQueue                                      *
// called by: menu                                            *
// passed:    object DynamicQueues                            * 
// returns:   nothing                                         * 
// calls:     displayQueue()                                  * 
// Purpose:   Function printQueue would display display the   *
//            queue, including name, number of kids and       *
//            position in the queue                           *
//            Position #1 is start at infront and increase to *
//            rear.                                           *
// Validation: Check the queue whether it's empty or not      *
// ************************************************************
// 
void printQueue(DynamicQueues& list)
{
    int numberOfItems;

    numberOfItems = list.getNumberItems();

    // check if the queue is empty
    if (numberOfItems == 0)
    {
        cout << "The queue is empty. No customer. \n";
    }
    else
    {
        list.displayQueue();
    }

}

