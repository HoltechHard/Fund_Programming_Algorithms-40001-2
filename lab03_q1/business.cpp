/*
    Implementation of class Business Account
*/

#include <iostream>
#include "libaccount.h"
#include "libbusiness.h"

using namespace std;

//              --- Operations of class Business Account ---

// constructor by default
BusinessAccount::BusinessAccount():Account(){
    this->dividend_rate = 0.0;
}

// constructor by parameters
BusinessAccount::BusinessAccount(const char id[5], const char name[50], double tax, double balance, double dividend_rate):
    Account(id, name, tax, balance){
        this->dividend_rate = dividend_rate;
    }

// constructor by object copy    
BusinessAccount::BusinessAccount(const BusinessAccount &a):Account(a){
    this->dividend_rate = a.dividend_rate;
}

// destructor
BusinessAccount::~BusinessAccount(){}

// setters and getters
void BusinessAccount::set_dividend(double dividend_rate){
    this->dividend_rate = dividend_rate;
}

double BusinessAccount::get_dividend(){
    return this->dividend_rate;
}

// function to calculate net balance value
double BusinessAccount::calculate(){
    return (this->get_balance() * (1 - this->get_tax())) * (1 + this->get_dividend());
}

// procedure to print account data
void BusinessAccount::print(){
    cout<<"--- Business account ---"<<endl;
    cout<<"ID: "<<this->get_id()<<endl;
    cout<<"Name: "<<this->get_name()<<endl;
    cout<<"Tax: "<<this->get_tax()<<endl;
    cout<<"Balance: "<<this->get_balance()<<endl;
    cout<<"Dividend rate: "<<this->get_dividend()<<endl;
    cout<<"Total: "<<this->calculate()<<endl;
}
