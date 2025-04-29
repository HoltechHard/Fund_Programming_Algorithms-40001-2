
#include <iostream>
#include "accounting.h"

Accounting::Accounting() {
	this->balance = 0.0;
}
Accounting::Accounting(double b) {
	this->balance = b;
}
Accounting::Accounting(const Accounting& other) {
	this->balance = other.balance;
}

void Accounting::print_report() {
	std::cout << "Balance =: " << balance << "\n";
}

void Accounting::set_balance(double b) { this->balance = b; }
double Accounting::get_balance() const { return balance; }
