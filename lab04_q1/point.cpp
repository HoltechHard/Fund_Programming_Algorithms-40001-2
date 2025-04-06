#include <iostream>
#include "libpoint.h"

using namespace std;

Point::Point(){
    this->x = 0;
    this->y = 0;
}

Point::Point(int x, int y){
    this->x = x;
    this->y = y;
}

Point::Point(const Point &p){
    this->x = p.x;
    this->y = p.y;
}

// by reference

Point &Point::operator+=(const Point &p){   //
    this->x += p.x;
    this->y += p.y;

    return *this;
}

Point &Point::operator+=(int val){
    this->x += val;
    this->y += val;

    return *this;
}

Point &operator-=(Point &p1, Point &p2){    //
    p1.x -= p2.x;
    p1.y -= p2.y;

    return p1;
}

Point &operator-=(Point &p1, int val){
    p1.x -= val;
    p1.y -= val;

    return p1;
}

// by value
Point Point::operator+(const Point &p) const{
    Point aux(*this);
    aux.x += p.x;
    aux.y += p.y;

    return aux;
}

Point Point::operator+(int val) const{
    Point aux(*this);
    aux.x += val;
    aux.y += val;

    return aux;
}

Point operator-(Point &p1, Point &p2){
    Point aux(p1);
    aux -= p2;

    return aux;
}

Point operator-(Point &p1, int val){
    Point aux(p1);
    aux -= val;

    return aux;
}

void Point::print(){
    cout << "(" << this->x << ", " << this->y << ")" << endl;
}
