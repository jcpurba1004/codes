/*
*
* Jeremiah Purba
*
* Programming Assignment REVIEW Chapters 6 & 7
*
* January 18, 2020
*
* File name: menu_driven_chap6_7.cpp
*
*/

#include <iostream>
using namespace std;

// Assume there is no constraint on the memory
// Define constant or read only variables

const int ELEMENTINCOLUMN = 5;
const int TOTALSIZE = 25;

// functions prototypes
void columnSwitch(char *strp);
void totalVowel(char* strp);
void display2DArray(char* strp);
void searchCountChar(char* strp);


int main()
{
    const int EXITCHOICES = 5;  //Assumed 5 is the exit out

    // Note: the number of character in column is 6
    // extra one character for each row for '\0' null character
    char stringArray[TOTALSIZE] = { 's','w','e','e','t','h','e','a','r','t',
        'e','g','r','i','t','c','l','o','n','e','o','d','o','r','s' };
    char* strp = stringArray;
    int choice = 0;

    // This part of the code follow the example from the teacher template
    while (choice != EXITCHOICES) {

        cout << endl;
        cout << "1. Interchange column 1 and 4" << endl;
        cout << "2. Display the total number of vowels" << endl;
        cout << "3. Display the array in a matrix (rows and columns)" << endl;
        cout << "4. Search for and display number of instances of any given character" << endl;
        cout << "5. Exit" << endl << endl;
        cout << "Enter the number of your choice: ";
        cin >> choice;

        cout << endl;
        switch (choice) {

        case 1:   columnSwitch(strp);
            break;
        case 2:   totalVowel(strp);
            break;
        case 3:   display2DArray(strp);
            break;
        case 4:   searchCountChar(strp);
            break;
        case 5:   cout << "Thank you for playing this game, goodbye ... " << endl;
            break;

        default:
            cout << "Error, that number is not on the menu. " << endl;
            cout << "Please enter a valid number (1-4 or 5 to quit) " << endl << endl;
        }
    }

    delete(strp);
    return 0;
}

// ***********************************************************
// name:      columnSwitch
// called by: main
// passed:    char *strp
// returns:   nothing
// calls:     nobody
// The columnSwitch function switches column 1 and 4 values  *
// of 2D array of character and it will not display it. It   *
// prints out message to screen that the value are switched  *
// ***********************************************************

void columnSwitch(char* strp) {

    int i;
    char temp;               // temporary var for interchange the values
    const int COLUMN_1 = 0;  // first column
    const int COLUMN_4 = 3;  // fourth column

    for (i = 0; i < TOTALSIZE; i++) {

        // interchange the values between column 1 and 4
        temp = *(strp+(i* ELEMENTINCOLUMN)+COLUMN_1);    // put the value into temporary variable
        *(strp + (i* ELEMENTINCOLUMN) + COLUMN_1) = *(strp + (i* ELEMENTINCOLUMN) + COLUMN_4);
        *(strp + (i * ELEMENTINCOLUMN) + COLUMN_4) = temp;
    }

    cout << "The columns in your array have been switched " << endl << endl;
}

// ***********************************************************
// name:      totalVowel
// called by: main
// passed:    char *strp
// returns:   nothing
// calls:     nobody
// The totalVowel function finding and count total number    *
// of vowels 2D arrays. It prints out message to             *
// screen the total number of vowel in the 2D array.         *
// ***********************************************************

void totalVowel(char* strp) {

    int i;
    char total = 0;      // for counting the vowel               

    cout << endl;

    // loop through the rows and columns
    for (i = 0; i < TOTALSIZE; i++) {

        //check and count vowels here
        if (*(strp + i) == 'a' || *(strp + i) == 'e' || *(strp + i) == 'i' || *(strp + i) == 'o' || *(strp + i) == 'u') {

            total++;  // add total if found the vowel
        }
    }
    cout << "There are " << total << " vowels in this array." << endl << endl;
}

// ***********************************************************
// name:      display2DArray
// called by: main
// passed:    char *strp
// returns:   nothing
// calls:     nobody
// The display2DArray function displays all cell values      *
// of 2D array in matrix form to screen.                     *
// ***********************************************************

void display2DArray(char* strp) {

    int i;
    int count=0;

    cout << "Here is your array:" << endl << endl;

    // loop through the rows and columns
    for (i = 0; i < TOTALSIZE; i++) {
        cout << *(strp + i) << " "; // print out the value
        count++;
        if(count%5==0)
            cout << endl << endl;
    }
}

// ***************************************************************
// name:      searchCountChar
// called by: main
// passed:    char *strp
// returns:   nothing
// calls:     nobody
// The searchCountChar function search and count the appearance  *
// of specific character in the 2D arrays. It prints out message *
// to screen total of instances of character in the 2D array.    *
// ***************************************************************

void searchCountChar(char* strp) {

    int i;
    int count = 0;    // initialize count to zero
    char inputChar;

    //Ask user to input character to be searched
    cout << "Please enter a specific character to locate : ";
    cin >> inputChar;
    cout << endl;

    // loop through the rows and columns
    for (i = 0; i < TOTALSIZE; i++) {

        if (*(strp + i) == inputChar) {
                count++;   // add to count if character match 
        }
    }

    cout << "There are " << count << " instances of your character." << endl << endl;
}