#ifndef CUSTOMER_H
#define CUSTOMER_H

#include "Person.h"
#include <iostream>

using namespace std;

class Customer : public Person
{
private:
    vector<PhoneNumber> phone;
public:
    Customer(string nid,string phone,string operatorr);
    void getPhoneNumbers();
    void getOperators();
    void insertPhoneOp(string phone,string operatorr);
    bool changeOperator(string phoneNumber,string newOp);
    void printCustomerInfo();
    bool deletePhn(string phoneNumber);
};

#endif // CUSTOMER_H
