#include "Customer.h"
#include "PhoneNumber.h"
#include <iostream>

using namespace std;

Customer::Customer(string phone,string nid,string operatorr): Person(nid){
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
    int index= 1;

    for(PhoneNumber phone : this->phone){
        cout << "Phone Number " << index << ": " << phone.getPhone() << endl;
        index++;
    }
}

void Customer::getOperators()
{
    int index= 1;

    for(PhoneNumber phone : this->phone){
        cout << "Phone Number " << index << ": " << phone.getPhone() << endl;
    }
}

void Customer::printCustomerInfo()
{
int index=0;
    while(index<phone.size()){
        cout << "Operator:: " << phone[index].getOperator() << " " << "Number:: " << phone[index].getPhone() << endl;
        index++;
    }

}

bool Customer::changeOperator(string phoneNumber,string newOp){
int index=0;
    while(index<phone.size()){
        if(phone[index].getPhone()==phoneNumber)
            phone[index].setOperator(newOp);
            cout<<"Operator changed successfully"<<endl;
        return true;
        index++;
    }

    return false;
}

bool Customer::deletePhn(string phoneNumber){

int index=0;
    while(index<phone.size()){
        if(phone[index].getPhone()==phoneNumber){
            phone.erase(phone.begin()+index);
cout<<"Deleted successfully"<<endl;
            return true;
        }
        else
            cout<<"Sorry ,You have enterd a wrong number."<<endl;
            index++;
    }
}
