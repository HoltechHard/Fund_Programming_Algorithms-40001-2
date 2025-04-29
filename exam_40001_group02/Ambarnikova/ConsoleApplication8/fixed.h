
#pragma once
#include "costs.h"

class FixedCost : public Costs {
    double amount;

public:
    
    FixedCost();
    FixedCost(double b, double t, double a);
    FixedCost(const FixedCost& other);

    double calculate() override;
    void print_report() override;

    void set_amount(double a);
    double get_amount() const;
};