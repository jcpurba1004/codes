// unit5-6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//Flag-controlled while loop.
//Number guessing game.

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
        //declare the variables
    int num;         //variable to store the random
                     //number
    int guess;       //variable to store the number 
                     //guessed by the user
    bool isGuessed;  //boolean variable to control
                     //the loop

    srand(time(0));
    num = rand() % 100;

    isGuessed = false;

    while (!isGuessed)
    {
        cout << "Enter an integer greater"
             << " than or equal to 0 and "
             << "less than 100: ";

        cin >> guess;
        cout << endl;

        if (guess == num)
        {
            cout << "You guessed the correct "
                << "number." << endl;
            isGuessed = true;
        }
        else if (guess < num)
            cout << "Your guess is lower than the "
                 << "number. \n Guess again!"
                 << endl;
        else
            cout << "Your guess is higher than "
                 << "the number. \n Guess again!"
                 << endl;
    } //end while

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
