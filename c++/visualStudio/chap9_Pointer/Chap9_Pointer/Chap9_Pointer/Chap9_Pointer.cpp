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
void menu(void);
void columnSwitch(char *arrayp);
void totalVowel(char* arrayp);
void displayArray(char* arrayp);
void searchCountChar(char* arrayp);

int main() {

    menu();   // call menu function to start the program

    return 0;
}

// ***********************************************************
// name:      menu
// called by: main
// passed:    nothing
// returns:   nothing
// calls:     columnSwitch, totalVowel, displayArray,
//            searchCountChar
// The menu function provide menu and its choices for user   *
// To perform tasks that are required. It calls the function *
// accordingly and quit the program when user select 5.      *
// ***********************************************************
void menu(void) {
    
        const int EXITCHOICES = 5;  //Assumed 5 is the exit out

        // Declaring the 1 dimension array for 25 character / 5 words
        char stringArray[TOTALSIZE] = { 's','w','e','e','t','h','e','a','r','t',
            'e','g','r','i','t','c','l','o','n','e','o','d','o','r','s' };
        char* arrayp = stringArray;  // declaring pointerto array
        int choice = 0;

        // This part of the code follow the example from the teacher pseudo code
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

            case 1:   columnSwitch(arrayp);
                break;
            case 2:   totalVowel(arrayp);
                break;
            case 3:   displayArray(arrayp);
                break;
            case 4:   searchCountChar(arrayp);
                break;
            case 5:   cout << "Thank you for playing this game, goodbye ... " << endl;
                break;

            default:
                cout << "Error, that number is not on the menu. " << endl;
                cout << "Please enter a valid number (1-4 or 5 to quit) " << endl << endl;
            }
        } 
    }

// ***********************************************************
// name:      columnSwitch
// called by: main
// passed:    char *arrayp
// returns:   nothing
// calls:     nobody
// The columnSwitch function switches column 1 and 4 values  *
// of the array of character and it will not display it. It  *
// prints out message to screen that the value are switched  *
// ***********************************************************

void columnSwitch(char* arrayp) {

    int i;
    char temp;               // temporary var for interchange the values
    const int COLUMN_1 = 0;  // first column
    const int COLUMN_4 = 3;  // fourth column

    // loop through the array
    for (i = 0; i < ELEMENTINCOLUMN; i++) {

        // interchange the values between column 1 and 4
        temp = *(arrayp+(i* ELEMENTINCOLUMN)+COLUMN_1);    // put the value into temporary variable
        *(arrayp + (i* ELEMENTINCOLUMN) + COLUMN_1) = *(arrayp + (i* ELEMENTINCOLUMN) + COLUMN_4);
        *(arrayp + (i * ELEMENTINCOLUMN) + COLUMN_4) = temp;
    }

    cout << "The columns in your array have been switched " << endl << endl;
}

// ***********************************************************
// name:      totalVowel
// called by: main
// passed:    char *arrayp
// returns:   nothing
// calls:     nobody
// The totalVowel function finding and count total number    *
// of vowels in the array. It prints out message to          *
// screen the total number of vowel in the array.            *
// ***********************************************************

void totalVowel(char* arrayp) {

    int i;
    char total = 0;      // for counting the vowel               

    cout << endl;

    // loop through the array
    for (i = 0; i < TOTALSIZE; i++) {

        //check and count vowels here
        if (*(arrayp + i) == 'a' || *(arrayp + i) == 'e' || *(arrayp + i) == 'i' || *(arrayp + i) == 'o' || *(arrayp + i) == 'u') {

            total++;  // add total if found the vowel
        }
    }
    cout << "There are " << total << " vowels in this array." << endl << endl;
}

// ***********************************************************
// name:      displayArray
// called by: main
// passed:    char *arrayp
// returns:   nothing
// calls:     nobody
// The displayArray function displays all cell values        *
// of the array in matrix form to screen.                    *
// ***********************************************************

void displayArray(char* arrayp) {

    int i;
    int count=0;

    cout << "Here is your array:" << endl << endl;

    // loop through the array
    for (i = 0; i < TOTALSIZE; i++) {
        cout << *(arrayp + i) << " ";        // print out the value
        count++;                             // to count character
        if(count % ELEMENTINCOLUMN == 0)
            cout << endl << endl;            // separate each word
    }
}

// ***************************************************************
// name:      searchCountChar
// called by: main
// passed:    char *arrayp
// returns:   nothing
// calls:     nobody
// The searchCountChar function search and count the appearance  *
// of specific character in the array. It prints out message     *
// to screen total of instances of character in the array.       *
// ***************************************************************

void searchCountChar(char* arrayp) {

    int i;
    int count = 0;    // initialize count to zero
    char inputChar;

    //Ask user to input character to be searched
    cout << "Please enter a specific character to locate : ";
    cin >> inputChar;
    cout << endl;

    // loop through the array
    for (i = 0; i < TOTALSIZE; i++) {

        if (*(arrayp + i) == inputChar) {
             count++;   // add to count if character match 
        }
    }

    cout << "There are " << count << " instances of your character." << endl << endl;
}