//
// Created by mostafa on 12/8/23.
//

#include "Account.h"
Account::Account(string AccountType,string userName,string FullName,string Password,int age,int id)
:AccountType(AccountType),userName(userName),Fullname(FullName),password(Password),age(age),id(id){

}
std::ostream& operator<<(std::ostream& os,const Account& ac){
    os<<ac.userName<<" "<<ac.Fullname<<std::endl;
    return os;
}
bool Account::CheckPassword(std::string pass)const {return pass==password;}
bool Account::CheckUserName(string userNa)const{return userNa==userName;}
Account::~Account() {}
