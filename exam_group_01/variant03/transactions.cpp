#include <iostream>
#include <cmath>
#include "libtransaction.h"

using namespace std;


//          --- Implementation of class FinancialTransaction --- 

FinancialTransaction::FinancialTransaction(){
    this->amount = 0.0;
}

FinancialTransaction::FinancialTransaction(double amount){
    this->amount = amount;
}

FinancialTransaction::FinancialTransaction(const FinancialTransaction &ft){
    this->amount = ft.amount;
}

void FinancialTransaction::setAmount(double amount){
    this->amount = amount;
}

double FinancialTransaction::getAmount(){
    return this->amount;
}

void FinancialTransaction::print_transaction(){
    cout<<"Transaction amount: "<<this->amount<<endl;
}


//          --- Implementation of class Deposit --- 

Deposit::Deposit(): 
    FinancialTransaction(){
        this->balance = 0.0;
    }

Deposit::Deposit(double amount, double balance):
    FinancialTransaction(amount){
        this->balance = balance;
    }

Deposit::Deposit(const Deposit &d):
    FinancialTransaction(d){
        this->balance = d.balance;
    }

void Deposit::setBalance(double balance){
    this->balance = balance;
}

double Deposit::getBalance(){
    return this->balance;
}

double Deposit::process(){
    return this->amount + this->balance;    
}

void Deposit::print_transaction(){
    FinancialTransaction::print_transaction();
    cout<<"Balance: "<<this->balance<<endl;
    cout<<"Final balance: "<<this->process()<<endl;
}


//          --- Implementation of class Credit ---

Credit::Credit():
    FinancialTransaction(){
        this->i_rate = 0.0;
        this->months = 0;
        this->type = 'A';
        this->total_interest = 0.0;
    }

Credit::Credit(double amount, double i_rate, int months, char type):
    FinancialTransaction(amount){
        this->i_rate = i_rate;
        this->months = months;
        this->type = type;
        this->total_interest = 0.0;
    }

Credit::Credit(const Credit &c):
    FinancialTransaction(c){
        this->i_rate = c.i_rate;
        this->months = c.months;
        this->type = c.type;
        this->total_interest = c.total_interest;
    }

double Credit::process(){
    if(this->type == 'A'){
        this->total_interest = this->amount + (this->amount * this->i_rate * this->months)/100;
    }else if(this->type == 'B'){
        this->total_interest = this->amount * pow((1 + this->i_rate/100), this->months);
    }

    return this->total_interest;
}

void Credit::print_transaction(){
    FinancialTransaction::print_transaction();
    cout<<"Interest rate: "<<this->i_rate<<endl;
    cout<<"Months: "<<this->months<<endl;
    cout<<"Type: "<<this->type<<endl;
    cout<<"Total interest: "<<this->process()<<endl;
}
