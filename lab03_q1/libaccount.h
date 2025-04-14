/*
    Template for class Account
*/

#pragma once

class Account{
    protected:
        char id[5];
        char name[50];
        double tax;
        double balance;

    public:
        Account();
        Account(const char id[5], const char name[50], double tax, double balance);
        Account(const Account &a);
        ~Account();
        void set_id(const char id[5]);
        char *get_id();
        void set_name(const char name[50]);
        char *get_name();
        void set_tax(double tax);
        double get_tax();
        void set_balance(double amount);
        double get_balance();
        virtual void print();
        virtual double calculate(){};
};