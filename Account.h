//
// Created by mostafa on 12/8/23.
//

#ifndef FUNDPROJECT_ACCOUNT_H
#define FUNDPROJECT_ACCOUNT_H
#include <iostream>
using std::string;
class
Account {
    friend std::ostream& operator<<( std::ostream& os,const Account& ac);
protected:
    string userName;
    string Fullname;
    string password;
    string AccountType;
    int age;
    int id;
public:
    Account(string AccountType,string userName,string FullName,string Password,int age,int id);
    bool CheckPassword(string pass)const;
    bool CheckUserName(string userNa)const;
    ~Account();
};


#endif //FUNDPROJECT_ACCOUNT_H
