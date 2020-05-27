// unit10-2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//The program listing of the program that defines
//and uses the class clockType

#include <iostream>
using namespace std;

class clockType
{
public:
    void setTime(int, int, int);
    void getTime(int&, int&, int&) const;
    void printTime() const;
    void incrementSeconds();
    void incrementMinutes();
    void incrementHours();
    bool equalTime(const clockType&) const;

private:
    int hr;
    int min;
    int sec;
};

int main()
{
    clockType myClock;
    clockType yourClock;
    int hours;
    int minutes;
    int seconds;

        //Set the time of myClock
    myClock.setTime(5, 4, 30);

    cout << "Line 9: myClock: ";
    myClock.printTime();  //print the time of myClock
    cout << endl;

    cout << "Line 12: yourClock: ";
    yourClock.printTime();  //print the time of yourClock
    cout << endl;

         //Set the time of yourClock
    yourClock.setTime(5, 45, 16);

    cout << "Line 16: After setting, yourClock: ";
    yourClock.printTime(); //print the time of yourClock
    cout << endl;

         //Compare myClock and yourClock
    if (myClock.equalTime(yourClock))
        cout << "Line 20: Both times are equal."
             << endl;
    else
        cout << "Line 22: The two times are not equal."
             << endl;

        cout << "Line 23: Enter the hours, minutes and"
             << "seconds: ";
        cin >> hours >> minutes >> seconds;
        cout << endl;

             //Set the time of myClock using the value of the
             //variables hours, minutes and seconds
        myClock.setTime(hours, minutes, seconds);

        cout << "Line 27: New myClock: ";
        myClock.printTime();   //print the time of myClock
        cout << endl;

            //Increment the time of myClock by one second
        myClock.incrementSeconds();

        cout << "Line 31: After incrementing myClock by "
             << "one second, myClock: ";
        myClock.printTime();   //print the time of myClock
        cout << endl;

            //Retrieve the hours, minutes and seconds of the
            //objects myClock
        myClock.getTime(hours, minutes, seconds);

            //Output the value of hours, minutes and seconds
        cout << "Line 35: hours = " << hours
             << ", minutes = " << minutes
             << ", seconds = " << seconds << endl;

        return: 0;
}//end main

void clockType::setTime(int hours, int minutes, int seconds)
{
    if (0 <= hours && hours < 24)
        hr = hours;
    else
        hr = 0;

    if (0 <= minutes && minutes < 60)
        min = minutes;
    else
        min = 0;

    if (0 <= seconds && seconds < 60)
        sec = seconds;
    else
        sec = 0;
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