#ifndef PHONENUMBER_H
#define PHONENUMBER_H

#include <iostream>

using namespace std;

class PhoneNumber
{
private:
    string phoneNumber;
    string telephoneOperator;
public:
    PhoneNumber();
    PhoneNumber(string phone,string telephoneOperator);
    void setPhone(string phone);
    void setOperator(string telephoneOperator);
    string getOperator();
    string getPhone();
};

#endif // PHNNUM_H
