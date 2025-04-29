#pragma once

#pragma once
#include "accounting.h"

class AdministrativeExpenses : public Accounting {
    double salary;
    double services;

public:
   
    AdministrativeExpenses();
    AdministrativeExpenses(double b, double s, double serv);
    AdministrativeExpenses(const AdministrativeExpenses& other);

    double calculate() override;
    void print_report() override;

    void set_salary(double s);
    double get_salary() const;

    void set_services(double serv);
    double get_services() const;
};