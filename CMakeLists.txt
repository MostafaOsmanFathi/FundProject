cmake_minimum_required(VERSION 3.27)
project(FundProject)

set(CMAKE_CXX_STANDARD 17)

add_executable(FundProject main.cpp
        Account.cpp
        Account.h
        BankAccount.cpp
        BankAccount.h
        Seller.cpp
        Seller.h

        Buyer.cpp
        Buyer.h

        MangementPro.cpp

        Apartments.cpp
        Apartments.h
        AccountMangement.cpp
        AccountMangement.h
)
