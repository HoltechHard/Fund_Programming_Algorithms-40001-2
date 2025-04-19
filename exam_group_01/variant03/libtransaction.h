#pragma once

// base class Financial Transaction
class FinancialTransaction{
    protected:
        double amount;
    public:
        FinancialTransaction();
        FinancialTransaction(double amount);
        FinancialTransaction(const FinancialTransaction &ft);
        void setAmount(double amount);
        double getAmount();
        virtual double process(){};
        virtual void print_transaction();
};


// derivate class Deposit 
class Deposit: public FinancialTransaction{
    private:
        double balance;
    public:
        Deposit();
        Deposit(double amount, double balance);
        Deposit(const Deposit &d);
        void setBalance(double balance);
        double getBalance();
        double process();
        void print_transaction();
};


// derivate class Credit
class Credit: public FinancialTransaction{
    private:
        double i_rate;
        int months;
        char type;
        double total_interest;
    public:
        Credit();
        Credit(double amount, double i_rate, int months, char type);
        Credit(const Credit &c);
        double process();
        void print_transaction();
};
