#pragma once

#include <iostream> 

using namespace std; 

class Account {
    private: 
        int accBalance;
        int curBalance;
    public: 
        Account(int, int);
        int credit();
        // int debit();
        // int getBalance();
};