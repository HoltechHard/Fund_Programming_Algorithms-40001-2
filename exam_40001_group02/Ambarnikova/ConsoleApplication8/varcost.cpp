#include "varcost.h"
#include <iostream>


VariableCost::VariableCost() : Costs()  {
    this->cost_per_item = 0;
    this->count = 0;
}


VariableCost::VariableCost(double b, double t, double c, int cnt)
    : Costs(b, t) {
    this->cost_per_item=c; 
    this->count = cnt;
}


VariableCost::VariableCost(const VariableCost& other)
    : Costs(other) {
        this->cost_per_item = other.cost_per_item; 
        this->count = other.count;

}

double VariableCost::calculate() {
    balance = balance - (cost_per_item * count) * (1 - tax / 100);
    return balance;
}

void VariableCost::print_report() {
    std::cout << "=== Переменные затраты ===\n";
    std::cout << "Цена за штуку: " << cost_per_item << "\n";
    std::cout << "Количество: " << count << "\n";
    std::cout << "Налог: " << tax << "%\n";
    Accounting::print_report();
}

void VariableCost::set_cost(double c) { cost_per_item = c; }
double VariableCost::get_cost() const { return cost_per_item; }

void VariableCost::set_count(int cnt) { count = cnt; }
int VariableCost::get_count() const { return count; }