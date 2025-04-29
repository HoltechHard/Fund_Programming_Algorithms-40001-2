#include "fixed.h"
#include <iostream>

FixedCost::FixedCost() : Costs() {
    this->amount = 0;
}
FixedCost::FixedCost(double b, double t, double a) : Costs(b, t)  {
    this->amount = a;
}
FixedCost::FixedCost(const FixedCost& other) : Costs(other) {
    this->amount = other.amount;
}


double FixedCost::calculate()  {
    balance = balance * (1 - tax / 100) - amount;
    return balance;
}

void FixedCost::print_report() {
    std::cout << "=== Fixed Costs ===\n";
    std::cout << "Amount: " << amount << "\n";
    std::cout << "Tax: " << tax << "%\n";
    Accounting::print_report();
}

void FixedCost::set_amount(double a) { amount = a; }
double FixedCost::get_amount() const { return amount; }