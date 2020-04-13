// unit5-4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <string>
#include <iostream>
#include <sstream>

using namespace std;

void letter2number(void) {

    char* pLetter;
    string inputLetter1;
    unsigned int i;
    int counter = 0;

    cout << "Enter a telephone number using letters: ";
    getline(cin, inputLetter1);
    //cout << "Input string: " << inputLetter1 << endl;
    //cout << "InputLetter1 size: " << "InputLetter1 size() << endl;

    pLetter = &inputLetter1[0];
    for (i = 0; i <= inputLetter1.size(); i++) {
        
        //cout << "\nCharacter: " << *pLetter << endl;
        /*Process non space character*/
        if (*pLetter != ' ') {


            if (counter < 7) {
                if (*pLetter >= 'A' && *pLetter <= 'z') {
                    counter++; // increase counter if valid char
                    if (*pLetter > 'Z')
                        *pLetter = (int)*pLetter - 32; // convert to capital letter 
                }

                if (counter == 4)
                    cout << "-"; // Print the hyphen when required

                switch (*pLetter) {
                    case 'A':
                    case 'B':
                    case 'C':
                        cout << "2";
                        break;

                    case 'D':
                    case 'E':
                    case 'F':
                        cout << "3";
                        break;

                    case 'G':
                    case 'H':
                    case 'I':
                        cout << "4";
                        break;

                    case 'J':
                    case 'K':
                    case 'L':
                        cout << "5";
                        break;

                    case 'M':
                    case 'N':
                    case 'O':
                        cout << "6";
                        break;

                    case 'P':
                    case 'Q':
                    case 'R':
                    case 'S':
                        cout << "7";
                        break;

                    case 'T':
                    case 'U':
                    case 'V':
                        cout << "8";
                        break;

                    case 'W':
                    case 'X':
                    case 'Y':
                    case 'Z':
                        cout << "9";

                    default:
                        break;
                } // case switch

            }

            //cout << "\nValid letter: " << *pLetter << " ; counter: " << counter << endl;

        }
        pLetter++;
    }

}

int main()
{
    string confirm;
    char* pLetter;


    string name;

    cout << "Enter Y/y to convert a telephone number from letters to digits." << endl;
    cout << "Enter any other letter to terminate the program: ";
    getline(cin, confirm);

    pLetter = &confirm[0];

    //cout << "Response: " << confirm << endl;
    while (true) {

        if ((*pLetter == 'Y') || (*pLetter == 'y')) {

            letter2number();

        }
        else {
            break;
        }

        cout << "\n\nTo process another telephone number, enter Y / y" << endl;
        cout << "Enter any other letter to terminate the program :";

        getline(cin, confirm);

        pLetter = &confirm[0];
    }

    cout << endl;
    return 0;
}

