#include <iostream>
#include "Customer.h"

using namespace std;

int main()
{


    Customer c1("01833975394","17167289279","Robi");


    c1.insertPhoneOp("01559972979","Teletalk");
    c1.insertPhoneOp("01777299456","GP");
    c1.printInformations();
    c1.printCustomerInfo();

    while(true){
    cout<<"\n\npress 1 for inserting new number and operator , \n\n2 for deleting a phone number , \n\n3 for changing operator \n\n 4 for Exit."<<endl;
    string number;
    string operatorrr;
    int option;
    cin>>option;
    if(option==1){
        cout<<"Enter operator name"<<endl;
        cin>>operatorrr;
        cout<<"Enter mobile number"<<endl;
        cin>>number;
        c1.insertPhoneOp(number,operatorrr);
        cout<<"inserted successfully"<<endl;
        c1.printCustomerInfo();
    }
    else if(option==2){
        cout<<"Enter the number to delete"<<endl;
        cin>>number;
        c1.deletePhn(number);

    }
    else if(option==3){
        cout<<"Enter the phone number "<<endl;
        cin>>number;
        cout<<"Enter the new operator name :"<<endl;
        cin>>operatorrr;
        c1.changeOperator(number,operatorrr);

    }

    else if(option==4)
        {return 0;}

    else
       {

       cout<<"You have entered a wrong input"<<endl;
       }

    }


    return 0;
}
