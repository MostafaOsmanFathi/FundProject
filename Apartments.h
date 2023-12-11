//
// Created by mostafa on 12/8/23.
//

#ifndef FUNDPROJECT_APARTMENTS_H
#define FUNDPROJECT_APARTMENTS_H
#include <iostream>
using std::string;
class Apartments {
private:
    string OwnerName;
    string AppartmentData;
    double price;
    int AppartmentID;
    int OwnerAccountId;
public:
    Apartments(double price,string OwnerName,
               string AppartmentData,int OwnerAccountId,int AppartmentID);
    void print()const;
};

#endif //FUNDPROJECT_APARTMENTS_H
