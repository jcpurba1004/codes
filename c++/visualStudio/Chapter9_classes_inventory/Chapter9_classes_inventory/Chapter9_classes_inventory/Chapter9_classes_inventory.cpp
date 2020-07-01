// Chapter9_classes_inventory.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

/*If you have any queries , feel free to contact via legal mediums*/

#include <iostream>
#include <string>
using namespace std;

class Inventory {
private:
    int checkInNumber;
    string damageDesc, customerLast, custPhone;
    float priceQuoted, hoursWorked;

public:
    Inventory() {
        checkInNumber = 0;
        damageDesc = "";
        customerLast = "";
        custPhone = "";
        priceQuoted = 0.0;
        hoursWorked = 0.0;

    }

    void setCheckInNumber(int c) {
        if (c > 0) {
            checkInNumber = c;
        }
    }
    int getCheckInNumber() {
        return checkInNumber;
    }
    void setDamageDesc(string s) {
        if (s.length() < 25) {
            damageDesc = s;
        }
    }
    string getDamageDesc() {
        return damageDesc;
    }
    void setCustomerLast(string l) {
        if (l.length() < 25) {
            customerLast = l;
        }
    }
    string getCustomerLast() {
        return customerLast;
    }
    void setCustPhone(string p) {
        if (p.length() < 11) {
            custPhone = p;
        }
    }
    string getCustPhone() {
        return 
    }
};

int main()
{
    std::cout << "Hello World!\n";
}