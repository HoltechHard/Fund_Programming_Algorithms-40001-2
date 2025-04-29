#pragma once

class Accounting {
protected:
    double balance;

public:

    Accounting();                              
    Accounting(double b);                      
    Accounting(const Accounting& other);       


    virtual double calculate() = 0;
    virtual void print_report();

    void set_balance(double b);
    double get_balance() const;
};