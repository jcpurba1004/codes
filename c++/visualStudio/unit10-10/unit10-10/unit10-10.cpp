// unit10-10.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

class personType
{
public:
	void print() const;
	   //Function to output the first name and last name
	   //in the form firstName lastName.

	void setName(string first, string last);
	   //Function to set firstName and lastName according
	   //to the parameters.
	   //Postcondition: firstName = first; lastName = last

	string getFirstName() const;
	   //Function to return the first name.
	   //Postcondition: The value of firstName is returned.

	string getLastName() const;
	   //Function to return the last name.
	   //Postcondition: The value of lastName is returned.

	personType(string first = "", string last = "");
	   //Constructor
	   //Sets firstName and lastName according to the parameters.
	   //The default values of the parameters are null strings.
	   //Postcondition: firstName = first; lastName = last

	private:
	   string firstName; //variable to store the first name
	   string lastName;  //variable to store the last name
};

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
