/*
    Template of class Business Account
*/

#pragma once 
#include "libaccount.h"

class BusinessAccount: public Account{

    private:
        double dividend_rate;

    public:
        BusinessAccount();
        BusinessAccount(const char id[5], const char name[50], double tax, double balance, double dividend_rate);
        BusinessAccount(const BusinessAccount &a);
        ~BusinessAccount();
        void set_dividend(double dividend_rate);
        double get_dividend();
        void print();
        double calculate();
};