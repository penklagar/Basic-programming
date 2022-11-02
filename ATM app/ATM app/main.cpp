#include <iostream>
using namespace std;

void showMenu()
{
    cout<<"*****MENU*****\n";
    cout<<"1. balance\n";
    cout<<"2. deposit\n";
    cout<<"3. withdraw\n";
    cout<<"4. Exit\n";
    cout<<"**************\n";
}
int main()
{
    int option;
    double balance= 100;
    
    do{
        showMenu();
        cout<<"option: ";
        cin>>option;
        system("cls");
        switch(option)
        {
            case 1: cout<<"BALANCE "<<"€" <<balance << endl; break;
            case 2: cout<<"Deposite amount: ";
                double depositeAmount;
                cin>>depositeAmount;
                balance += depositeAmount;
                break;
                
            case 3: cout<<"Withdraw amount: ";
                double withdrawAmount;
                cin>>withdrawAmount;
                if (withdrawAmount <= balance)
                    balance -= withdrawAmount;
                else
                    cout<<"Not enough money"<<endl;
                    break;
                }

               
    }while(option!=4);


    
    
    return 0;
}
