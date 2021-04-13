#include <iostream>
#include<vector>

using namespace std;
int main() {
    int returned[3];
    int expected[3];

    //Actual Return Date
    cin >> returned[0];   // D1
    cin >> returned[1];   // M1
    cin >> returned[2];   // Y1

    //Expected return date
    cin >> expected[0];   //D2
    cin >> expected[1];   //M2
    cin >> expected[2];   //Y2

    int fine = 0;

    // Returned within the current year
    if (expected[2] == returned[2]) {
        if (expected[1] < returned[1]) {
            // Returned 1+ months late in current year
            fine = (returned[1] - expected[1]) * 500;
        }
        else if ((expected[1] == returned[1]) && (expected[0] < returned[0])) {
            // Returned 1+ days late within the current month
            fine = (returned[0] - expected[0]) * 15;
        } // Else it is implied that the book was returned early
    }
    else if (expected[2] < returned[2]) {
        // Returned 1+ years late
        fine = 10000;
    } // Else it is implied that the book was returned 1+ years early
    cout << fine << endl;
}