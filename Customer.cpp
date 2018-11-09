#include "Customer.h"
#include "PhoneNumber.h"
#include <iostream>

using namespace std;

Customer::Customer(string personName,string fatherName,string motherName,string birthDate,string nid,string presentAddress,string permanentAddress,string phone,string operatorr): Person(personName,fatherName,motherName,birthDate,nid,presentAddress,permanentAddress){
    this->phone.push_back(PhoneNumber(phone,operatorr));
}


void Customer::insertPhoneOp(string phone,string operatorr)
{
    if(phone.size()<15){
        this->phone.push_back(PhoneNumber(phone,operatorr));


    }
}

void Customer::getPhoneNumbers()
{
    int temp= 1;

    for(PhoneNumber phone : this->phone){
        cout << "Phone Number " << temp << ": " << phone.getPhone() << endl;
        temp++;
    }
}

void Customer::getOperators()
{
    int temp= 1;

    for(PhoneNumber phone : this->phone){
        cout << "Phone Number " << temp << ": " << phone.getPhone() << endl;
    }
}

void Customer::printCustomerInfo()
{
int i=0;
    while(i<phone.size()){
        cout << " Operator:: " << phone[i].getOperator() << "\n " << "Number:: " << phone[i].getPhone() <<"\n"<< endl;
        i++;
    }

}

bool Customer::changeOperator(string phoneNumber,string newOp){
 if(newOp=="Robi"||newOp=="GP"||newOp=="BanglaLink"||newOp=="Teletalk"||newOp=="KomKothaKoiben")
    {int i=0;
    while(i<phone.size()){
        if(phone[i].getPhone()==phoneNumber)
            phone[i].setOperator(newOp);
            cout<<"Operator changed successfully\n\n"<<endl;
            printCustomerInfo();

        return true;
        i++;
    }
    }
else
    cout<<"You entered a wrong Operator"<<endl;
    return false;
}

bool Customer::deletePhn(string phoneNumber){

int i=0;
    while(i<phone.size()){
        if(phone[i].getPhone()==phoneNumber){
            phone.erase(phone.begin()+i);
cout<<"\nDeleted successfully\n\n"<<endl;
printCustomerInfo();
            return true;
        }
        else
            //cout<<"Sorry ,You have entered a wrong number."<<endl;
            i++;
    }
}
