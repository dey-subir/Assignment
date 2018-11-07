#include "Person.h"
#include "PhoneNumber.h"

#include <vector>

using namespace std;

Person::Person()
{
}

Person::Person(string nid)
{
    if(nid.length()==11)
        this->nidNumber= nid;
    else
        this->nidNumber= "NULL";
}


void Person::insertNidNumbers(string nid)
{
     if(nid.length()==11)
        this->nidNumber= nid;
    else
        this->nidNumber= "NULL";
}

string Person::getNidNumbers()
{
    return this->nidNumber;
}


void Person::printInformations()
{
    cout << "NID Number: " << this->nidNumber << endl;
}
