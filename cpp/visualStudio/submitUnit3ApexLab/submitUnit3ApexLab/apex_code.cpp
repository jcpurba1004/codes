//
//
#include <iostream>
#include <string>
#include <iomanip>
#include "apex_code.h"

using namespace std;

// This function will get the address from input and pass it as output
void street_address(stringstream& cin, stringstream& cout)
{
	const int SKIPCHAR = 18;
	string address;
	string city;
	//getline(cin, family); // use get line because input string is separated by "\n"
	cin.ignore(SKIPCHAR, '\n');
	getline(cin, address); // get the address from input
	//getline(cin,city);
	//cout << "Address: " << address << "; city: " << city;
	cout << address; // return address as required
} 

// This function will get drink type, number and price from input.
// It calculates the total sales and return it as result
void coffee_sale_item(stringstream& cin, stringstream& cout) {

	string drink;
	int number;
	double price;
	double total;

	cin >> drink >> number >> price;
	total = (double)number * price;
	cout << fixed << showpoint << setprecision(2);
	//cout << "Drink: " << drink << "; Number: " << number << "; Price: " << price;
	cout << drink << " total sales = $" << total;

}
// This function return first name and country from input name, address and country
void first_name_and_country(std::stringstream& cin, std::stringstream& cout)
{
	string name, country;

	cin >> name;			  // get the name from input stream
	cin.ignore(29, '.');      // ignore the address
	cin >> country;           // get the country
	if (country == ",")       // check for extra comma
		cin >> country;
	//cout << "Name: " << name << "; Country: " << country << endl;
	cout << name << " is from " << country;

}