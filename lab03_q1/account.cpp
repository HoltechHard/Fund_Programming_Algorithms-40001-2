/*
    Implementation of class Account
*/

#include <iostream>
#include <cstring>
#include "libaccount.h"

using namespace std;

//              --- Operations for class Account ---

// constructor per default
Account::Account(){
    strcpy(this->id, "");
    strcpy(this->name, "");
    this->tax = 0.0;
    this->balance = 0.0;
}

// constructor by parameters
Account::Account(const char id[5], const char name[50], double tax, double balance){
    strcpy(this->id, id);
    strcpy(this->name, name);
    this->tax = tax;
    this->balance = balance;
}

// constructor by object copy
Account::Account(const Account &a){
    strcpy(this->id, a.id);
    strcpy(this->name, a.name);
    this->tax = a.tax;
    this->balance = a.balance;
}

// destuctor
Account::~Account(){}

// setters and getters
void Account::set_id(const char id[5]){
    strcpy(this->id, id);
}

char *Account::get_id(){
    return this->id;
}        

void Account::set_name(const char name[50]){
    strcpy(this->name, name);
}

char *Account::get_name(){
    return this->name;
}

void Account::set_tax(double tax){
    this->tax = tax;
}

double Account::get_tax(){
    return this->tax;
}

void Account::set_balance(double amount){
    this->balance = amount;
}

double Account::get_balance(){
    return this->balance;
}

// procedure to print account data
void Account::print(){
    cout<<"--- Account ---"<<endl;
    cout<<"ID: "<<this->id<<endl;
    cout<<"Name: "<<this->name<<endl;
    cout<<"Tax: "<<this->tax<<endl;
    cout<<"Balance: "<<this->balance<<endl;
}
