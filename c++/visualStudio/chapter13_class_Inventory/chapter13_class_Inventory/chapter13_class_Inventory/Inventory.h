/*
*
* Jeremiah Purba
*
* Chapters 13 Programming Assignment CISC 187 Summer 2020
*
* July 2, 2020
*
* File name: Inventory.h
* Purpose  : Inventory class declaration.
*
*/
#ifndef INVENTORY_H
#define INVENTORY_H

#include <iostream>
#include <string>


using namespace std;

// Define constant for classes and for wrapper
static const int customerInventoryNumber = 5;   // constant number of customer inventory
static const int damageDescriptionLength = 25;  // constant maximum length description
static const int nameLength = 25;               // constant maximum length last name
static const int phoneLength = 11;              // constant maximum length phone number

static const int   numberMinimum = 0;           // constant minimum number
static const float priceMinimum = 0.0;          // constant minimum price
static const float hoursMinimum = 0.0;          // constant minimum hours
static const string emptyString = "";           // constant empty string

class Inventory
{
private:

	int checkInNumber;   // positive integer assigned by the clerk when the board is brought in for repair
	string damageDesc;   // string that holds the repair needs(< 25 characters)
	string customerLast; // string that holds last name of the customer (<25 chars)
	string custPhone;    // string that holds customer's phone number(<11 chars)
	float priceQuoted;   // float >=0 that holds the quoted repair price
	float hoursWorked;   // float >=0  that holds the number of hours of labor

public:

	Inventory();  	                        // default constructor
	Inventory(int checkIn, string description, string lastName, string phone,
		float price, float hours);          // overloaded constructor

	void setCheckInNumber(int number);      // mutator check in number
	int getCheckInNumber(void);             // accessor check in number
	void setDamageDesc(string description); // mutator damage description
	string getDamageDesc(void);             // accessor damage description
	void setCustomerLast(string lastName);  // mutator customer last name
	string getCustomerLast(void);           // accessor customer last name

	void setCustPhone(string phoneNumber);  // mutator customer phone
	string getCustPhone(void);              // accessor customer phone
	void setPriceQuoted(float price);       // mutator price quote
	float getPriceQuoted(void);             // accessor price quote
	void setHoursWorked(float hours);       // mutator hours worked
	float getHoursWorked(void);             // accessor hours worked

};

// function prototypes
void inputCustomerInventory(Inventory customer[]);
void printCustomerInventory(Inventory customer[]);

#endif  // INVENTORY_H
