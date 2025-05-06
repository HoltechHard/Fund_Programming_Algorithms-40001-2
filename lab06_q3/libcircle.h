#pragma once
#include <iostream>
#include <cmath>
#include "libpoint.h"

using namespace std;

class Circle{

    public:
        Point center;
        double radius;

    public:
        Circle();
        Circle(const Point &p, double radius);
        Circle(double radius);
        Circle(const Circle &c);
        bool operator==(const Circle &c) const;
        bool operator>(const Circle &c) const;
        friend istream &operator>>(istream &os, Circle &c);
        friend ostream &operator<<(ostream &os, const Circle &c);
};
