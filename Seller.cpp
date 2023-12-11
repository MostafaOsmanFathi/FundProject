//
// Created by mostafa on 12/8/23.
//

#include "Seller.h"
Seller::Seller(string AccountType,string userName,string FullName,string Password,int age,int id):
Account(AccountType,userName,FullName,Password,age,id){

}

bool Seller::AddHomeForSell(double price, std::string OwnerName, std::string AppartmentData) {
    MyApartments.push_back({price,OwnerName,AppartmentData,this->id,(int)MyApartments.size()});
    return true;
}


Seller::~Seller() {

}