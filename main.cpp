#include <iostream>
#include "Customer.h"

using namespace std;

int main()
{
        cout<<"Press 1 to use Vector\nPress 2 to use Array"<<endl;
        int choice;
        cin>>choice;
        if(choice==1)
{
    Customer c1("Shuvra Dey","16216400421","Milan Kanti Dey","Shilpi Das","December 31,1997","Dhaka","Rangamati");



   // Customer c2("Subir Dey Raju","17116400421","Milan Kanti Dey","Shilpi Das","December 31,1997","Dhaka");


    c1.insertPhoneOp("01559972979","Teletalk");
    c1.insertPhoneOp("01777299456","GP");
   // c2.insertPhoneOp("01678292939","KomKothaKoiben");

    c1.printInformations();
    c1.printCustomerInfo();
    //c2.printInformations();
    //c2.printCustomerInfo();

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
}

else if(choice==2)
{

Person p1("Shuvra Dey","16216400421","Milan Kanti Dey","Shilpi Das","December 31,1997","Dhaka");
Person p2("16216400421","01552995680","Teletalk");
p1.printInfo();
}
else
    cout<<"Wrong input"<<endl;

    return 0;
}
