#include "Person.h"
#include "PhoneNumber.h"

#include <vector>

using namespace std;
int index=0;

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
 Person::Person(string personName,string nid,string fatherName,string motherName,string date,string presentAddress,string permanentAddress)
{
    this->personName=personName;
    this->nidNumber=nid;
    this->fatherName=fatherName;
    this->motherName=motherName;
    this->birthDate=date;
    this->presentAddress=presentAddress;
    this->permanentAddress=permanentAddress;
}
 Person::Person(string personName,string nid,string fatherName,string motherName,string date,string presentAddress)
{
    arrayOfCustomer[index].personName=personName;
    arrayOfCustomer[index].fatherName=fatherName;
    arrayOfCustomer[index].nidNumber=nid;
    arrayOfCustomer[index].birthDate=date;
    arrayOfCustomer[index].motherName=motherName;

    arrayOfCustomer[index].presentAddress=presentAddress;
    index++;
}

Person::Person(string nid,string phone,string telephoneOperator)
{
    for(int i=0;i<index;i++){
        if(arrayOfCustomer[i].getNidNumber()==nid && sizeof(arrayOfCustomer[i].arrayOfPhone)<15)
        {
            arrayOfCustomer[i].arrayOfPhone[sizeof(arrayOfPhone)-1].setOperator(telephoneOperator);
            arrayOfCustomer[i].arrayOfPhone[sizeof(arrayOfPhone)-1].setPhone(phone);
        }
        else
            cout<<"You have entered a wrong nid"<<endl;
    }
}
void Person::insertNidNumber(string nid)
{
     if(nid.length()==11)
        this->nidNumber= nid;
    else
        this->nidNumber= "NULL";
}
void Person::insertPersonName(string personName)
{

    this->personName=personName;
}
void Person::insertFatherName(string fatherName)
{

    this->fatherName=fatherName;
}

void Person::insertMotherName(string motherName)
{
    this->motherName=motherName;
}
void Person::insertBirthDate(string birthDate)
{
    this->birthDate=birthDate;
}

void Person::insertPresentAddress(string presentAddress)
{
    this->presentAddress=presentAddress;
}
void Person::insertPermanentAddress(string permanentAddress)
{
    this->permanentAddress=permanentAddress;
}


string Person::getNidNumber()
{
    return this->nidNumber;
}
string Person::getPersonName()
{

    return this->personName;
}
string Person::getFatherName()
{
    return this->fatherName;
}

string Person::getMotherName()
{
    return this->motherName;
}
string Person::getBirthDate()
{
    return this->birthDate;
}
string Person::getPresentAddress()
{
    return this->presentAddress;

}
string Person::getPermanentAddress()
{
    return this->permanentAddress;
}



void Person::printInformations()
{
    cout<<"\nName of the customer:"<<getPersonName() <<"\nFather's Name:"<<getFatherName()<<"\nMother's Name:"<<getMotherName()<<"\nBirth Date:"<<getBirthDate()<< "\nNID Number: " << getNidNumber() << "\nPresent Address:"<<getPresentAddress()<<"\nPermanent Address:"<<getPermanentAddress() <<endl;
}
void Person::printInfo()
{
    for(int i=0;i<sizeof(arrayOfCustomer);i++)
    {
        cout<<"\nName of the Customer:"<<arrayOfCustomer[i].getPersonName()<<"\nFather's Name:"<<arrayOfCustomer[i].getFatherName()<<"\nMother's Name:"<<arrayOfCustomer[i].getMotherName()<<"\nBirth Date:"<<arrayOfCustomer[i].getBirthDate()<< "\nNID Number: " << arrayOfCustomer[i].getNidNumber() << "\nPresent Address:"<<arrayOfCustomer[i].getPresentAddress()<<"\nPermanent Address:"<<arrayOfCustomer[i].getPermanentAddress() <<endl;

         for(int j=0;j<sizeof(arrayOfCustomer[i].arrayOfPhone);j++)
         {
             cout<<"\nOperator:"<<arrayOfCustomer[i].arrayOfPhone[j].getOperator()<<"\nNumber:"<<arrayOfCustomer[i].arrayOfPhone[j].getPhone()<<endl;
         }
    }


}
