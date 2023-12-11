//
// Created by mostafa on 12/8/23.
//

#ifndef FUNDPROJECT_BANKACCOUNT_H
#define FUNDPROJECT_BANKACCOUNT_H
class BankAccount{
private:
    double balance;
public:
    BankAccount(double Bal=0);
    bool Depoist();
    bool withDraw();
    double getBalance();
    ~BankAccount();
};
#endif //FUNDPROJECT_BANKACCOUNT_H
