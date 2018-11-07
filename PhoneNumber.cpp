#include "PhoneNumber.h"

PhoneNumber::PhoneNumber()
{

}

PhoneNumber::PhoneNumber(string phone,string operatorr)
{
    this->phoneNumber= phone;
    this->operatorr= operatorr;
}

string PhoneNumber::getOperator()
{
    return this->operatorr;
}

string PhoneNumber::getPhone()
{
    return this->phoneNumber;
}

void PhoneNumber::setPhone(string phone)
{
    this->phoneNumber= phone;
}

void PhoneNumber::setOperator(string operatorr)
{
    this->operatorr= operatorr;
}
