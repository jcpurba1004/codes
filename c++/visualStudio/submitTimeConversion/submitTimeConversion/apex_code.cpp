//
//
#include <iostream>
#include <sstream>
#include "apex_code.h"

using namespace std;

//define constant
#define SECONDS_IN_MINUTES 60
#define MINUTES_IN_HOURS   60
#define MAX_HOURS          12
#define ZERO                0

//function prototype
int divTwelve(int input);
int modSixty(int input);
int divideSixty(int input);
int compareInput(int input, int threshold);

int divideSixty(int input) {
    return input / MINUTES_IN_HOURS;
}

int modSixty(int input) {
    return input % MINUTES_IN_HOURS;
}

int divTwelve(int input) {
    return input / MAX_HOURS;
}

int compareInput(int input, int threshold) {
    if ((input % threshold) == ZERO) {
        return ZERO;
    }
    else if (input > threshold) {
        input -= threshold;
        return input;
    }
    return input;
}

void minutes_to_12hour_time(stringstream& cin, stringstream& cout) {
    // Place code for translating minutes to 12 hour time
    // Pretend this is your main function and you can use cin/cout
    // as you would in main.

    // If you want to print to the console for debugging use std::cout.
    // Use cout for your final solution.

    // First you want to get user input with cin
    // Do any needed calculations
    // Create output with cout

    int inMinutes;
    int outHours;
    int outMinutes;

    cin >> inMinutes;

    outMinutes = modSixty(inMinutes);
    outHours = divideSixty(inMinutes);
    outHours = compareInput(outHours, MAX_HOURS);

    cout << outHours << ":" << outMinutes << " !";
}

void numbers_to_12hour_time(stringstream& cin, stringstream& cout)
{
    // Place code for translating hours, minutes and seconds to 12 hour time
    // Pretend this is your main function and you can use cin/cout
    // as you would in main.

    // If you want to print to the console for debugging use std::cout.
    // Use cout for your final solution.

    int     inMinutes, outMinutes, outMin, totalMin;
    double  inHours;
    int     inSecond, outSecond;
    int     hoursInteger, hoursFraction, outHours, totalHours, remHours;

    cin >> inHours >> inMinutes >> inSecond;

    // Calculate seconds part
    outMinutes = divideSixty(inSecond);
    outSecond = modSixty(inSecond);
    outMinutes = compareInput(outMinutes, SECONDS_IN_MINUTES);

    // Calculate Minutes part
    outMinutes = outMinutes + inMinutes;  // add minutes from seconds
    outMin = modSixty(outMinutes);
    outHours = divideSixty(outMinutes);
    outHours = compareInput(outHours, MAX_HOURS);

    // Calculate hours part
    hoursInteger = (int)inHours;      // take integer part
    hoursFraction = (inHours - hoursInteger) * MINUTES_IN_HOURS;

    outMin += hoursFraction;         // add minutes from fraction hours
    totalMin = modSixty(outMin);     // re-calculate the minutes part
    totalHours = divideSixty(outMin);

    totalHours += outHours;
    totalHours = compareInput(totalHours, MAX_HOURS);

    hoursInteger += totalHours;      // add hours from minutes
    totalHours = divTwelve(hoursInteger);
    remHours = modSixty(hoursInteger);

    cout << remHours << ":" << totalMin << "." << outSecond << " !";
}
