/*
    Template of class Savings Account
*/

#pragma once
#include "libaccount.h"

class SavingsAccount: public Account{

    private:
        double maintanance_fees;

    public:
        SavingsAccount();
        SavingsAccount(const char id[5], const char name[50], double tax, double balance, double maintanance_fees);
        SavingsAccount(const SavingsAccount &a);
        ~SavingsAccount();
        void set_maintanance(double maintanance_fees);
        double get_maintanance();
        void print();
        double calculate();
};