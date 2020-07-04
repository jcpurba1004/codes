/*
*
* Jeremiah Purba
*
* Chapters 13 Programming Assignment CISC 187 Summer 2020
*
* July 2, 2020
*
* File name: Inventory.cpp
* Purpose  : Inventory class definition
*
*/
#include "Inventory.h"

// default constructor
Inventory::Inventory() {

	checkInNumber = numberMinimum;
	damageDesc = emptyString;
	customerLast = emptyString;
	custPhone = emptyString;
	priceQuoted = priceMinimum;
	hoursWorked = hoursMinimum;

}

// overloaded constructor
Inventory::Inventory(int checkIn, string description, string lastName, string phone,
	float price, float hours) {

	checkInNumber = checkIn;
	damageDesc = description;
	customerLast = lastName;
	custPhone = phone;
	priceQuoted = price;
	hoursWorked = hours;
}

// mutator check in number
void Inventory::setCheckInNumber(int number) {

	if (number <= numberMinimum) {
		cout << "Error ! Number is either zero or less than zero !" << endl;
		exit(EXIT_FAILURE);
	}
	else {
		checkInNumber = number;
	}
}

// accessor check in number
int Inventory::getCheckInNumber(void) {

	return checkInNumber;

}

// mutator damage description
void Inventory::setDamageDesc(string description) {

	if (description.size() > damageDescriptionLength) {
		cout << "Error ! Damage description length is too long !" << endl;
		exit(EXIT_FAILURE);
	}
	else {
		damageDesc = description;
	}
}

// accessor damage description
string Inventory::getDamageDesc(void) {

	return damageDesc;
}

// mutator customer last name
void Inventory::setCustomerLast(string lastName) {

	if (lastName.size() > nameLength) {
		cout << "Error ! Last name is too long !" << endl;
		exit(EXIT_FAILURE);
	}
	else {
		customerLast = lastName;
	}
}

// accessor customer last name
string Inventory::getCustomerLast(void) {

	return customerLast;
}

// mutator customer phone
void Inventory::setCustPhone(string phoneNumber) {

	if (phoneNumber.size() > phoneLength) {
		cout << "Error ! Phone number is too long !" << endl;
		exit(EXIT_FAILURE);
	}
	else {
		custPhone = phoneNumber;
	}

}

// accessor customer phone
string Inventory::getCustPhone(void) {

	return custPhone;

}

// mutator price quote
void Inventory::setPriceQuoted(float price) {

	if (price < priceMinimum) {
		cout << "Error ! Price Quoted should be zero or higher !" << endl;
		exit(EXIT_FAILURE);
	}
	else {
		priceQuoted = price;
	}
}

// accessor price quote
float Inventory::getPriceQuoted(void) {

	return priceQuoted;

}

// mutator hours worked
void Inventory::setHoursWorked(float hours) {

	if (hours < hoursMinimum) {
		cout << "Error ! Hours worked should be zero or higher !" << endl;
		exit(EXIT_FAILURE);
	}
	else {
		hoursWorked = hours;
	}

}

// accessor hours worked
float Inventory::getHoursWorked(void) {

	return hoursWorked;

}