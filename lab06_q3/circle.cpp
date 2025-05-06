#include <iostream>
#include "libcircle.h"

using namespace std;

Circle::Circle(){
    this->center = Point();
    this->radius = 0;
}

Circle::Circle(const Point &p, double radius){
    this->center = p;
    this->radius = radius;
}

Circle::Circle(double radius){
    this->center = Point();
    this->radius = radius;
}

Circle::Circle(const Circle &c){
    this->center = c.center;
    this->radius = c.radius;
}

bool Circle::operator==(const Circle &c) const{
    return (this->center == c.center && this->radius == c.radius);
}

bool Circle::operator>(const Circle &c) const{
    return (this->radius > c.radius);
}

istream &operator>>(istream &os, Circle &c){
    cout<<"Center: ";
    os >> c.center;
    cout<<"Radius: ";
    os >> c.radius;
    return os;
}

ostream &operator<<(ostream &os, const Circle &c){
    os << "Center: "<< c.center;
    os << "Radius: "<< c.radius;
    return os;
}
