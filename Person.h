#ifndef PERSON_H_INCLUDED
#define PERSON_H_INCLUDED

#include <iostream>
#include <vector>
#include "PhoneNumber.h"

using namespace std;

class Person{

private:
    string nidNumber;
public:
    Person();
    Person(string nid);
    string getNidNumbers();
    void insertNidNumbers(string nid);
    void printInformations();
};


#endif // PERSON_H_INCLUDED
