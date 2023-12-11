//
// Created by mostafa on 12/8/23.
//
#include <iostream>
#include "Buyer.h"
#include "Seller.h"
#include "Apartments.h"
#include "AccountMangement.h"
using namespace std;
AccountMangement Data;
Account* CurruntLogin= nullptr;

bool CreatAcc(){
    string userName,Fullname,password,AccountType;
    int age;
    cin>>userName>>Fullname>>password>>AccountType;
    return Data.AddAccount(AccountType,userName,Fullname,password,age);
}
void login(){
    string userName,password;cin>>userName>>password;
    CurruntLogin=Data.login(userName,password);
}
int GetChoiceStartMenu(){
    cout<<"1.Home Page\n"
          "2.login\n"
          "3.creat Account\n"
          "4.Exit\n";
    int n;cin>>n;
    return n;
}
void StartMenu(){
    switch (GetChoiceStartMenu()) {
        case 1:
            break;

        case 2:

            break;
        case 3:

            break;
        default:

            break;
    }


}






