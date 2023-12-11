//
// Created by mostafa on 12/9/23.
//

#ifndef FUNDPROJECT_ACCOUNTMANGEMENT_H
#define FUNDPROJECT_ACCOUNTMANGEMENT_H
#include "Buyer.h"
#include "Seller.h"
#include <iostream>
using std::cout;
class AccountMangement {
private:
    vector<Account*>Data;
public:
    AccountMangement();
    int GetAccountId(string userName);
    bool AddAccount(string AccountType,string userName,string FullName,string Password,int age);
    void AccountPreview();
    Account* login(string userName,string password);
//    bool RemoveAccount();
//    edit Account
    ~AccountMangement();
};


#endif //FUNDPROJECT_ACCOUNTMANGEMENT_H
