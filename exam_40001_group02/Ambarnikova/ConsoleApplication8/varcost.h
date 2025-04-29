#pragma once

#include "costs.h"

class VariableCost : public Costs {
    double cost_per_item;
    int count;

public:
    
    VariableCost();
    VariableCost(double b, double t, double c, int cnt);
    VariableCost(const VariableCost& other);

    double calculate() override;
    void print_report() override;

    void set_cost(double c);
    double get_cost() const;

    void set_count(int cnt);
    int get_count() const;
};