/*
    Implementation of class SavingsAccount
*/

#include <iostream>
#include <cstring>
#include "libaccount.h"
#include "libsavings.h"

using namespace std;

//              --- Operations of class Savings Account ---

// constructor by default
SavingsAccount::SavingsAccount():Account(){
    this->maintanance_fees = 0.0;
}

// constructor by parameters
SavingsAccount::SavingsAccount(const char id[5], const char name[50], double tax, double balance, double maintanance_fees):
    Account(id, name, tax, balance){
        this->maintanance_fees = maintanance_fees;
    }

// constructor by object copy    
SavingsAccount::SavingsAccount(const SavingsAccount &a): Account(a){
    this->maintanance_fees = a.maintanance_fees;
}

// destructor
SavingsAccount::~SavingsAccount(){}

// setters and getters
void SavingsAccount::set_maintanance(double maintanance_fees){
    this->maintanance_fees = maintanance_fees;
}

double SavingsAccount::get_maintanance(){
    return this->maintanance_fees;
}

// function to calculate net balance value
double SavingsAccount::calculate(){
    return this->get_balance() * (1 - this->get_tax()) - this->get_maintanance();
}

// procedure to print account data
void SavingsAccount::print(){
    cout<<"--- Savings account ---"<<endl;
    cout<<"ID: "<<this->get_id()<<endl;    
    cout<<"Name: "<<this->get_name()<<endl;
    cout<<"Tax: "<<this->get_tax()<<endl;
    cout<<"Balance: "<<this->get_balance()<<endl;
    cout<<"Maintainance tax: "<<this->get_maintanance()<<endl;
    cout<<"Total: "<<this->calculate()<<endl;
}
