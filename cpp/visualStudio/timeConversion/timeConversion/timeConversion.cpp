// timeConversion.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "timeConversion.h"


using namespace std;

int min2Hours(int min) {
    return min / MINUTES_IN_HOURS;
}

int min2Minutes(int min) {
    return min % MINUTES_IN_HOURS;
}

int hours2Hours(int hours) {
    return hours / MAX_HOURS;
}

int hours2Minutes(int hours) {
    return hours % MINUTES_IN_HOURS;
}

int sec2Minutes(int sec) {
    return sec / SECONDS_IN_MINUTES;
}

int sec2Seconds(int sec) {
    return sec / SECONDS_IN_MINUTES;
}

void min2Hours12(void) {
    int inMinutes;
    int outHours;
    int outMinutes;

    cout << "\nHW Basics of C++ - Apex Lab Part 1" << endl;
    cout << "Enter minutes number: ";
    cin >> inMinutes;

    outMinutes = min2Minutes(inMinutes);
    outHours = min2Hours(inMinutes);

    if ((outHours % MAX_HOURS) == ZERO) {  // check for multiple of 12
        outHours = ZERO;
    }
    else if (outHours > MAX_HOURS) {
        outHours = outHours - MAX_HOURS;
    }

    cout << "\nInput:\"" << inMinutes << "\" --> Output:\"" << outHours << ":" << outMinutes << " !\"" << endl;

}

void secMinHours2Hours(void) {
    int     inMinutes, outMinutes, outMin, totalMin;
    double  inHours;
    int     inSecond, outSecond;
    int     hoursInteger, hoursFraction, outHours, totalHours, remHours;

    cout << "\n\n\nHW Basics of C++ - Apex Lab Part 2" << endl;
    cout << "Enter <hours> <minutes> <second>: ";
    cin >> inHours >> inMinutes >> inSecond;


    totalHours = 0;
    // Calculate seconds part
    outMinutes = sec2Minutes(inSecond);
    outSecond = sec2Seconds(inSecond);

    if ((outMinutes % SECONDS_IN_MINUTES) == ZERO) {  // check for multiple of 60
        outMinutes = ZERO;
    }
    else if (outMinutes > MINUTES_IN_HOURS) {
        outMinutes = outMinutes - MINUTES_IN_HOURS;
    }

#ifdef DEBUG
   cout << "Input seconds:\"" << inSecond << "\" --> Seconds:\"" << totalHours << ":";
   cout << outMinutes << ":" << outSecond << " !\"" << endl;
#endif

    // Calculate Minutes part
    outMinutes = outMinutes + inMinutes; // add minutes from seconds
    outMin = min2Minutes(outMinutes);
    outHours = min2Hours(outMinutes);

    if ((outHours % MAX_HOURS) == ZERO) {
       outHours = ZERO;
    }
    else if (outHours > MAX_HOURS) {
       outHours = outHours - MAX_HOURS;
    }

#ifdef DEBUG
   cout << "Input Minutes:\"" << inMinutes << "\" --> Minutes + seconds:\"";
   cout << outHours << ":" << outMin << ":" << outSecond << " !\"" << endl;
#endif

    // Calculate hours part
    hoursInteger = (int)inHours;     // take integer part
    hoursFraction = (inHours - hoursInteger) * MINUTES_IN_HOURS;

#ifdef DEBUG
    cout << "inHours (double) = " << inHours;
    cout << "\noutHours = " << outHours;
    cout << "; hoursInteger = " << hoursInteger;
    cout << "; hoursFraction (in minutes) = " << hoursFraction << endl;
#endif

    outMin = outMin + hoursFraction;  // add minutes from fraction hours
    totalMin = min2Minutes(outMin); // re-calculate the minutes part
    totalHours = min2Hours(outMin);

#ifdef DEBUG
    cout << "outMin = " << outMin;
    cout << "\ntotalMin = " << totalMin;
    cout << "; totalHours = " << totalHours << endl;
#endif

    totalHours = totalHours + outHours;

#ifdef DEBUG
    cout << "\ntotalHours + outHours = " << totalHours << endl;
#endif 

    if ((totalHours % MAX_HOURS) == ZERO) {  // check for multiple of 12
        totalHours = ZERO;
    }
    else if (totalHours > MAX_HOURS) {
        totalHours = totalHours - MAX_HOURS;
    }

#ifdef DEBUG
    cout << "\n\nMinutes and Seconds after add fraction of hours " << endl;
    cout << "outMin:\"" << outMin << "; totalHours: " << totalHours;
    cout << "\" --> Min + sec:\"";
    cout << totalHours << ":" << totalMin << ":" << outSecond << "!\"" << endl;
#endif 

    hoursInteger = hoursInteger + totalHours; //add hours from minutes
    totalHours = hours2Hours(hoursInteger);
    remHours = hours2Minutes(hoursInteger);

#ifdef DEBUG
    cout << "\n\ntotalHours = " << totalHours;
    cout << "; hoursInteger = " << hoursInteger;
    cout << "; remHours = " << remHours << endl;
#endif 


    cout << "\nInput:\"" << inHours << " " << inMinutes << " " << inSecond << "\" --> Ouput:\"" << remHours << ":" << totalMin << "." << outSecond << " !\"" << endl;

}


int main() {

    min2Hours12();
    secMinHours2Hours();

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
