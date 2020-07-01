#ifndef INVENTORY_H
#define INVENTORY_H

#include <string>

// Purpose: Inventory control program for Mr. Ding Surf Shop and Board Repair
class Inventory {

private:
    int checkInNumber;   // positive integer assigned by the clerk when the board is brought in for repair
    string damageDesc;   // string that holds the repair needs (<25 characters)
    string customerLast; // string that holds last name of the customer (<25 chars)
    string custPhone;    // string that holds customer's phone number(<11 chars)
    float priceQuoted;   // float >=0 that holds the quoted repair price
    float hoursWorked;   // float >=0  that holds the number of hours of labor

public:
    Inventory();

    void setCheckInNumber(int number);
    int getCheckInNumber(void);
    int getCheckedInNumber(void);
    void setDamageDesc(string description);
    string getDamageDesc(void);

    void setCustomerLast(string lastName);
    string getCustomerLast(void);
    void setCustPhone(string phoneNumber);
    string getCustPhone(void);
    void setPriceQuoted(float price);
    float getPriceQuoted(void);
    void setHoursWorked(float hours);
    float getHoursWorked(void);

};
#endif // INVENTORY_H