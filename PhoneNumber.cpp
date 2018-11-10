#include "PhoneNumber.h"

PhoneNumber::PhoneNumber()
{

}

PhoneNumber::PhoneNumber(string phone,string telephoneOperator)
{
    this->phoneNumber= phone;
    this->telephoneOperator= telephoneOperator;
}

string PhoneNumber::getOperator()
{
    return this->telephoneOperator;
}

string PhoneNumber::getPhone()
{
    return this->phoneNumber;
}

void PhoneNumber::setPhone(string phone)
{
    this->phoneNumber= phone;
}

void PhoneNumber::setOperator(string telephoneOperator)
{

    this->telephoneOperator=telephoneOperator;

}
