#include<iostream>
#include "costs.h"


Costs::Costs() : Accounting() {
	this->tax = 0.0;
}


Costs::Costs(double b, double t) : Accounting(b) {
	this->tax = t;
}

Costs::Costs(const Costs & other) : Accounting(other){
	this->tax = other.tax;
}

void Costs::set_tax(double t) { this->tax = t; }

double Costs::get_tax() const { return tax; }
