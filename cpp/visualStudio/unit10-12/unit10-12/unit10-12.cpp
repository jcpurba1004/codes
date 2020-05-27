// unit10-12.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

class illustrate
{
public:
	static int count;   //public static variable

	void print() const;
	  //Function to output x, y and count.

	void setX(int a);
	  //Function to set x.
	  //Postcondition: x = a;

	static void incrementY()
	  //static function
	  //Function to increment y by 1.
	  //Postcondition: y = y + 1

	illustrate(int a = 0);
	  //constructor
	  //Postcondition: x = a;
	  //               If no value is specified for a, x = 0;

private:
	int x;
	static int y;  //private static variable
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

illustrate::illustrate(int a)
{
}
