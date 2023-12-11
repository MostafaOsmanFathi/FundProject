//
// Created by mostafa on 12/8/23.
//

#include "Apartments.h"
Apartments::Apartments(double price,std::string OwnerName, std::string AppartmentData, int OwnerAccountId,int AppartmentID):
        price(price),OwnerName(OwnerName),AppartmentData(AppartmentData),OwnerAccountId(OwnerAccountId),AppartmentID(AppartmentID)
{


}
void Apartments::print()const{
    std::cout<<OwnerName<<"\n"<<AppartmentData<<"\n"<<price<<"\n";
}
