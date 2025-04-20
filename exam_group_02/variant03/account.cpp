#include <iostream>
#include "libaccounting.h"

using namespace std;

// Implementation of class Accounting

Accounting::Accounting(){
    this->balance = 0.0;
}

Accounting::Accounting(double balance){
    this->balance = balance;
}

Accounting::Accounting(const Accounting &a){
    this->balance = a.balance;
}

void Accounting::setBalance(double balance){
    this->balance = balance;
}

double Accounting::getBalance() const{
    return this->balance;
}

void Accounting::print_report(){
    cout<<"Balance: "<<this->balance<<endl;
}


// Implementation of class Costs

Costs::Costs():
    Accounting(){
        this->tax_consume = 0.0;
    }

Costs::Costs(double balance, double tax_consume):
    Accounting(balance){
        this->tax_consume = tax_consume;
    }

Costs::Costs(const Costs &c):
    Accounting(c){
        this->tax_consume = c.tax_consume;
    }

void Costs::setTaxConsume(double tax_consume){
    this->tax_consume = tax_consume;
}

double Costs::getTaxConsume() const{
    return this->tax_consume;
}

void Costs::print_report(){
    Accounting::print_report();
    cout<<"Tax consume: "<<this->tax_consume<<endl;
}


// Implementation of class Fixed Cost

FixedCost::FixedCost():
    Costs(){
        this->amount = 0.0;
    }

FixedCost::FixedCost(double balance, double tax_consume, double amount):
    Costs(balance, tax_consume){
        this->amount = amount;
    }

FixedCost::FixedCost(const FixedCost &fc):
    Costs(fc){
        this->amount = fc.amount;
    }

void FixedCost::setAmount(double amount){
    this->amount = amount;
}

double FixedCost::getAmount() const{
    return this->amount;
}

double FixedCost::calculate(){
    return this->balance * (1 - this->tax_consume) - this->amount;
}

void FixedCost::print_report(){
    Costs::print_report();
    cout<<"Amount: "<<this->amount<<endl;
    cout<<"Final balance: "<<this->calculate()<<endl;
}


// Implementation of class Variable Cost

VariableCost::VariableCost():
    Costs(){
        this->unit_cost = 0.0;
        this->quantity = 0.0;
    }

VariableCost::VariableCost(double balance, double tax_consume, double unit_cost, double quantity):
    Costs(balance, tax_consume){
        this->unit_cost = unit_cost;
        this->quantity = quantity;
    }

VariableCost::VariableCost(const VariableCost &vc):
    Costs(vc){
        this->unit_cost = vc.unit_cost;
        this->quantity = vc.quantity;
    }

void VariableCost::setUnitCost(double unit_cost){
    this->unit_cost = unit_cost;
}

double VariableCost::getUnitCost() const{
    return this->unit_cost;
}

void VariableCost::setQuantity(double quantity){
    this->quantity = quantity;
}

double VariableCost::getQuantity() const{
    return this->quantity;
}

double VariableCost::calculate(){
    double total;
    total = this->unit_cost * this->quantity;

    return (this->balance - total) * (1 - this->tax_consume);
}

void VariableCost::print_report(){
    Costs::print_report();
    cout<<"Unit cost: "<<this->unit_cost<<endl;
    cout<<"Quantity: "<<this->quantity<<endl;
    cout<<"Final balance: "<<this->calculate()<<endl;
}


// Implementation of class Administrative Expenses

AdministrativeExpenses::AdministrativeExpenses():
    Accounting(){
        this->amount_salary = 0.0;
        this->amount_services = 0.0;
    }

AdministrativeExpenses::AdministrativeExpenses(double balance, double amount_salary, double amount_services):
    Accounting(balance){
        this->amount_salary = amount_salary;
        this->amount_services = amount_services;
    }

AdministrativeExpenses::AdministrativeExpenses(const AdministrativeExpenses &ae):
    Accounting(ae){
        this->amount_salary = ae.amount_salary;
        this->amount_services = ae.amount_services;
    }

void AdministrativeExpenses::setAmountSalary(double amount_salary){ 
    this->amount_salary = amount_salary;
}    

double AdministrativeExpenses::getAmountSalary() const{
    return this->amount_salary;
}

void AdministrativeExpenses::setAmountServices(double amount_services){
    this->amount_services = amount_services;
}

double AdministrativeExpenses::getAmountServices() const{
    return this->amount_services;
}

double AdministrativeExpenses::calculate(){
    return this->balance - this->amount_salary - this->amount_services;
}

void AdministrativeExpenses::print_report(){
    Accounting::print_report();
    cout<<"Amount salary: "<<this->amount_salary<<endl;
    cout<<"Amount services: "<<this->amount_services<<endl;
    cout<<"Final balance: "<<this->calculate()<<endl;
}
