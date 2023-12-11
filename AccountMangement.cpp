//
// Created by mostafa on 12/9/23.
//

#include "AccountMangement.h"
AccountMangement::AccountMangement() {

}
int AccountMangement::GetAccountId(std::string userName) {

    for (int i = 0; i <Data.size() ; ++i) {
        if (Data.at(i)->CheckUserName(userName)){
            return i;
        }
    }
    return -1;
}

void AccountMangement::AccountPreview() {
    for (auto& x:Data) {
        cout<<*x<<std::endl;
    }
}
bool AccountMangement::AddAccount(std::string AccountType, std::string userName, std::string FullName, std::string Password,int age) {
    if (GetAccountId(userName)!=-1){
        return false;
    }else if (AccountType=="Seller"){
        Account* NewAccount=new Seller(
                AccountType,userName,FullName,Password,age
                ,Data.size());

        Data.push_back(NewAccount);

    }else if (AccountType=="Buyer"){
        Account* NewAccount=new Buyer(
                AccountType,userName,FullName,Password,age
                ,Data.size());

        Data.push_back(NewAccount);
    }
    return false;
}

Account* AccountMangement::login(string userName,string password){
    int poss= GetAccountId(userName);
    if (poss==-1||!Data.at(poss)->CheckPassword(password))return nullptr;
    else
        return Data.at(poss);
}
AccountMangement::~AccountMangement() {
//    while (!Data.empty()){delete Data.back(),Data.pop_back();}
}
