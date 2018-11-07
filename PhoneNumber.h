#ifndef PHONENUMBER_H
#define PHONENUMBER_H

#include <iostream>

using namespace std;

class PhoneNumber
{
private:
    string phoneNumber;
    string operatorr;
public:
    PhoneNumber();
    PhoneNumber(string phone,string operatorr);
    void setPhone(string phone);
    void setOperator(string operatorr);
    string getOperator();
    string getPhone();
};

#endif // PHNNUM_H
