// finalProgram.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
using namespace std;

int getWhatTheyWant();
void displayItems(int x);

//main function
int main() {
    
    int whatTheyWant;

    whatTheyWant = getWhatTheyWant();

    while (whatTheyWant != 4) {
        switch (whatTheyWant) {
            case 1:
                displayItems(1);
                break;
            case 2:
                displayItems(2);
                break;
            case 3:
                displayItems(3);
                break;
        }
        whatTheyWant = getWhatTheyWant();
    }

}

//getwhattheywant function
int getWhatTheyWant();
    int choice;

    cout << "1 - just plain items" << endl;
    cout << "2 - helpful items" << endl;
    cout << "3 - harmful items" << endl;
    cout << "4 - quit program\n" << endl;

    cin >> choice;
    return choice;
}

//display items function
void displayItems(int x) {

    ifstream objectFile("objects.txt");
    string name;
    double power;

    if (x==1) {
        while (objectFile >> name >> power) {
            if (power==0) {
                cout << name << ' ' << power << endl;
            }
        }
    }

    if (x==2) {
        while (objectFile >> name >> power) {
            if (power>0) {
                cout << name << ' ' << power << endl;
            }
        }
    }

    if (x==3) {
        while (objectFile >> name >> power) {
            if (power<0) {
                cout << name << ' ' << power << endl;
            }
        }
    }

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
