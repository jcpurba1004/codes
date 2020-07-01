#include <iostream>
#include <string>
#include "Inventory.h"
using namespace std;

Inventory::Inventory() {
    checkInNumber = 0;
    damageDesc = "";
    customerLast = "";
    custPhone = "";
    priceQuoted = 0.0;
    hoursWorked = 0.0;

}

void Inventory::setCheckInNumber(int number) {
    if (number > 0) {
        checkInNumber = number;
    }
}

int Inventory::getCheckInNumber(void) {
    return checkInNumber;
}

int Inventory::getCheckedInNumber(void)
{
    return 0;
}

void Inventory::setDamageDesc(string description) {
    if (description.length() < 25) {
        damageDesc = description;
    }
    else {
        cout << "Description is longer than 25 character. Make it shorter!" << endl;
    }
}

string Inventory::getDamageDesc(void) {
    return damageDesc;
}

void Inventory::setCustomerLast(string lastName) {
    if (lastName.length() < 25) {
        customerLast = lastName;
    }
    else {
        cout << "Last name is longer than 25 character. Make it shorter!" << endl;
    }
}

string Inventory::getCustomerLast(void) {
    return customerLast;
}

void Inventory::setCustPhone(string phoneNumber) {
    if (phoneNumber.length() < 11) {
        custPhone = phoneNumber;
    }
    else {
        cout << "Phone number is longer than 11 character. Make it shorter!" << endl;
    }
}

string Inventory::getCustPhone(void) {
    return custPhone;
}

void Inventory::setPriceQuoted(float price) {
    if (price >= 0.0) {
        priceQuoted = price;
    }
}

float Inventory::getPriceQuoted(void) {
    return priceQuoted;
}

void Inventory::setHoursWorked(float hours) {
    if (hours >= 0.0) {
        hoursWorked = hours;
    }
}

float Inventory::getHoursWorked(void) {
    return hoursWorked;
}