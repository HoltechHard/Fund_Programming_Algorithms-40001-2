#pragma once
#include "accounting.h"

class Costs : public Accounting {
protected:
    double tax;

public:
    
    Costs();
    Costs(double b, double t);
    Costs(const Costs& other);

    void set_tax(double t);
    double get_tax() const;
};