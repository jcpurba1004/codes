// movieTicketsSale.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//************************************************************
// Author: Jeremiah Purba
//
// Program: Movie Tickets Sale
// This program determines the money to be donated to a
// charity. It prompts the user to input the movie name, adult
// ticket price, child ticket price, number of adult tickets
// sold, number of child tickets sold and percentage of the
// gross amount to be donated to the charity.
//************************************************************

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
          //Step 1
       string movieName;
       double adultTicketPrice;
       double childTicketPrice;
       int noOfAdultTicketsSold;
       int noOfChildTicketsSold;
       double percentDonation;
       double grossAmount;
       double amountDonated;
       double netSaleAmount;

       cout << fixed << showpoint << setprecision(2); //Step 2

       cout << "Enter the movie name: ";              //Step 3
       getline(cin, movieName);                       //Step 4
       cout << endl;

       cout << "Enter the price of an adult ticket: ";//Step 5
       cin >> adultTicketPrice;                       //Step 6
       cout << endl;

       cout << "Enter the price of a child ticket: "; //Step 7
       cin >> childTicketPrice;                       //Step 8
       cout << endl;

       cout << "Enter the number of adult tickets: "
            << "sold: ";                              //Step 9
       cin >> noOfAdultTicketsSold;                   //Step 10
       cout << endl;

       cout << "Enter the number of child tickets: "
            << "sold: ";                               //Step 11
       cin >> noOfChildTicketsSold;                   //Step 12
       cout << endl;

       cout << "Enter the percentage of donation: ";  //Step 13
       cin >> percentDonation;                        //Step 14
       cout << endl << endl;

              //Step 15
       grossAmount = adultTicketPrice * noOfAdultTicketsSold
                     + childTicketPrice * noOfChildTicketsSold;

              //Step 16
       amountDonated = grossAmount * percentDonation / 100;

       netSaleAmount = grossAmount - amountDonated;  //Step 17

       cout << setfill('.') << left << setw(35) << "Movie Name: "
            << right << " " << movieName << endl;
       cout << left << setw(35) << "Number of Tickets Sold: "
            << setfill(' ') << right << setw(10)
            << noOfAdultTicketsSold + noOfChildTicketsSold
            << endl;
       cout << setfill('.') << left << setw(35)
            << "Gross Amount: "
            << setfill(' ') << right << " $"
            << setw(8) << grossAmount << endl;
       cout << setfill('.') << left << setw(35)
            << "Percentage of Gross Amount Donated: "
            << setfill(' ') << right
            << setw(9) << percentDonation << '%' << endl;
       cout << setfill('.') << left << setw(35)
            << "Amount Donated: "
            << setfill(' ') << right << " $"
            << setw(8) << grossAmount << endl;
       cout << setfill('.') << left << setw(35) << "Net Sale: "
            << setfill(' ') << right << " $"
            << setw(8) << netSaleAmount << endl;
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
