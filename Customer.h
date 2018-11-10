#ifndef CUSTOMER_H
#define CUSTOMER_H

#include "Person.h"
#include <iostream>

using namespace std;

//Where is the dynamic array implementation?
//There is not only a single customer.
//The company can have multiple customers
class Customer : public Person
{
private:
   // vector<Customer> customer;
    vector<PhoneNumber> phone;
    //Person* arrayOfCustomar;
    //PhoneNumber* arrayOfPhone;
public:
    Customer(string personName,string fatherName,string motherName,string birthDate,string nid,string presentAddress,string permanentAddress);
    Customer(string personName,string fatherName,string motherName,string birthDate,string nid,string presentAddress);
    void getPhoneNumbers();
    void getOperators();
    void insertPhoneOp(string phone,string telephoneOperator);
    bool changeOperator(string phoneNumber,string newOp);
    void printCustomerInfo();
    bool deletePhn(string phoneNumber);
};

#endif // CUSTOMER_H
