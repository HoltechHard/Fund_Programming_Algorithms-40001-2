#include "adminex.h"
#include <iostream>


AdministrativeExpenses::AdministrativeExpenses()
    : Accounting()  {
    this->salary = 0; 
    this->services=0;
}


AdministrativeExpenses::AdministrativeExpenses(double b, double s, double serv)
    : Accounting(b)  {
    this->salary=s;
    this->services=serv;
}


AdministrativeExpenses::AdministrativeExpenses(const AdministrativeExpenses& other)
    : Accounting(other)  {
    this->salary=other.salary;
    this->services=other.services;
}

double AdministrativeExpenses::calculate() {
    balance = balance - salary - services;
    return balance;
}

void AdministrativeExpenses::print_report() {
    std::cout << "  Административные расходы   \n";
    std::cout << "Зарплата: " << salary << "\n";
    std::cout << "Услуги: " << services << "\n";
    Accounting::print_report();
}

void AdministrativeExpenses::set_salary(double s) { salary = s; }
double AdministrativeExpenses::get_salary() const { return salary; }

void AdministrativeExpenses::set_services(double serv) { services = serv; }
double AdministrativeExpenses::get_services() const { return services; }