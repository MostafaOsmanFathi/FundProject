//
// Created by mostafa on 12/8/23.
//

#ifndef FUNDPROJECT_SELLER_H
#define FUNDPROJECT_SELLER_H
#include <vector>
#include "Account.h"
#include "BankAccount.h"
#include "Apartments.h"
using std::vector;
class Seller: public Account{
private:
    BankAccount MyBankAcc;
    vector<Apartments>MyApartments;
public:
    Seller(string AccountType,string userName,string FullName,string Password,int age,int id);
    bool RemoveHomeById(int id);
    virtual  bool AddHomeForSell(double price,string OwnerName,
                                 string AppartmentData);

    virtual ~Seller();
};


#endif //FUNDPROJECT_SELLER_H
