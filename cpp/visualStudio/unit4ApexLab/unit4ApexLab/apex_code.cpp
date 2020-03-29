//
//

#include <iostream>
#include <string>
#include <iomanip>
#include "apex_code.h"

using namespace std;

// This block of code takes a word from the user and sees
// if it comes before or after the word "middle" in the dictionary
// (lexicographical ordering) according to the ASCII table.
void middle_word_check(stringstream& cin, stringstream& cout) {

    string compare("middle");
    string input;

    cin >> input;                                     // put input string to var input

    if (input < compare)                              // compare input with "middle"
        cout << input << " comes before " << compare; // input appears before "middle"
    else
        cout << input << " comes after " << compare;  // input appears after "middle"

}


// It takes from input one character. It outputs the name of
// an animal that starts with the character. We will only
// process a-f and A-F. Any other character will produce an error.
// The lower case and capital letters will produce the same animal name,
// with the same capitalization as the input. Try not to duplicate code.
void animal_abcs(stringstream& cin, stringstream& cout) {

    char inputChar, lowCase;

    cin >> inputChar;

    // Since there is no difference between capital case and lower case
    // use lower case for switch input
    lowCase = tolower(inputChar); // use inputChar for default case

    switch (lowCase)              // use case switch to caver all possibilities
    {                             // for each letter A-F or a-f and others
    case 'a':
        cout << "anteater";
        break;
    case 'b':
        cout << "bat";
        break;
    case 'c':
        cout << "caterpillar";
        break;
    case 'd':
        cout << "dolphin";
        break;
    case 'e':
        cout << "emu";
        break;
    case 'f':
        cout << "frog";
        break;
    default:
        cout << inputChar << " is not supported";  // other cases
    }
}

// A UberEats driver needs to see if they can make 2 deliveries in
// a 2 hour window, assuming they drive 45 mph on average. If they
// have to stop for gas or charge it's a no go. If the distance
// between all stops is less than 15 miles and they are driving a 
// gas car, it's more economical for the driver to take an electric
// scooter. This block takes 5 inputs:
//   1. the car type, gas or electric
//   2. the number of miles the car can go on a tank / charge
//   3. and 4 distances.
//      1. the driver's house to restaurant 1
//      2. restaurant 1 to customer 1
//      3. customer 1 to restaurant 2
//      4. restaurant 2 to customer 2
// This block outputs whether or not the deliver can be made and
// if it can what transportation the driver should use.

void delivery_range_check(std::stringstream& cin, std::stringstream& cout) {

    string carType;
    int maxDistance;
    const int maxTime = 2;
    const int minMiles = 15;
    const int averageSpeed = 45;
    double houseToRestaurant1, restaurant1ToCustomer1;
    double customer1ToRestaurant2, restaurant2ToCustomer2;
    double totalDistance;
    double totalTime;

    cout << fixed << showpoint << setprecision(2);

    cin >> carType;
    cin >> maxDistance;
    cin >> houseToRestaurant1;
    cin >> restaurant1ToCustomer1;
    cin >> customer1ToRestaurant2;
    cin >> restaurant2ToCustomer2;

    // calculate total distance and total time
    totalDistance = houseToRestaurant1 + restaurant1ToCustomer1 + customer1ToRestaurant2 + restaurant2ToCustomer2;
    totalTime = totalDistance / averageSpeed;

    if (totalDistance < (double)maxDistance)  // check if the gas tank / battery can make the distance
    {
        if (totalDistance < (double)minMiles)  // check if the driver can use scooter
            cout << "You can make it on an electric scooter!";
        else if (totalTime < (double)maxTime) // check if time is within 2 hours window
            cout << "You can make it in your " << carType << " car!";
        else
            cout << "Not going to happen";     // driver can't make it within 2 hours
    }
    else
    {
        cout << "Not going to happen";         // gas / battery is not enough for total distance
    }
}