#ifndef PERSON_H_INCLUDED
#define PERSON_H_INCLUDED

#include <iostream>
#include <vector>
#include "PhoneNumber.h"

using namespace std;


class Person{

private:
    string personName;
    string nidNumber;
    string fatherName;
    string motherName;
    string birthDate;
    string presentAddress;
    string permanentAddress;
    Person* arrayOfCustomer;
    PhoneNumber* arrayOfPhone;

public:
    Person();
    Person(string nid);
    Person(string nid,string phone,string telephoneOPerator);
    Person(string personName,string nid,string fatherName,string motherName,string birthDate,string presentAddress,string permanentAddress);
    Person(string personName,string nid,string fatherName,string motherName,string birthDate,string presentAddress);
    void insertNidNumber(string nid);
    void insertPersonName(string personName);
    void insertFatherName(string fatherName);
    void insertMotherName(string motherName);
    void insertBirthDate(string birthDate);
    void insertPresentAddress(string presentAddress);
    void insertPermanentAddress(string permanentAddress);

    string getNidNumber();
    string getPersonName();
    string getFatherName();
    string getMotherName();
    string getBirthDate();
    string getPresentAddress();
    string getPermanentAddress();

    void printInformations();
    void printInfo();
};


#endif // PERSON_H_INCLUDED
