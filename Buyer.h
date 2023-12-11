//
// Created by mostafa on 12/8/23.
//

#ifndef FUNDPROJECT_BUYER_H
#define FUNDPROJECT_BUYER_H
#include "Account.h"
#include "BankAccount.h"
class Buyer: public Account{
private:
    BankAccount MyBankAcc;
public:
    Buyer(string AccountType,string userName,string FullName,string Password,int age,int id);
    virtual bool Buy();
    virtual ~Buyer();

};
#endif //FUNDPROJECT_BUYER_H
