/*
    Implementation of class Point
*/

#include <iostream>
#include "libpoint.h"

using namespace std;

// constructor per default
Point::Point(){
    this->x = 0;
    this->y = 0;
}

// constructor by parameters
Point::Point(int x, int y){
    this->x = x;
    this->y = y;
}

// constructor by object copy
Point::Point(const Point &p){
    this->x = p.x;
    this->y = p.y;
}

//                    --- by reference ---

// class method to overload operation p1 += p2
Point &Point::operator+=(const Point &p){
    this->x += p.x;
    this->y += p.y;

    return *this;
}

// class method to overload operation p1 += val
Point &Point::operator+=(int val){
    this->x += val;
    this->y += val;

    return *this;
}

// global function to overload operation p1 -= p2
Point &operator-=(Point &p1, Point &p2){
    p1.x -= p2.x;
    p1.y -= p2.y;

    return p1;
}

// global function to overload operation p1 -= val
Point &operator-=(Point &p1, int val){
    p1.x -= val;
    p1.y -= val;

    return p1;
}

//                  --- by value ---

// class method to overload operation res = p1 + p2
Point Point::operator+(const Point &p) const{
    Point aux(*this);
    aux.x += p.x;
    aux.y += p.y;

    return aux;
}

// class method to overload operation res = p1 + val
Point Point::operator+(int val) const{
    Point aux(*this);
    aux.x += val;
    aux.y += val;

    return aux;
}

// global function to overload operation res = p1 - p2
Point operator-(Point &p1, Point &p2){
    Point aux(p1);
    aux -= p2;

    return aux;
}

// global function to overload operation res = p1 - val
Point operator-(Point &p1, int val){
    Point aux(p1);
    aux -= val;

    return aux;
}

// procedure to print Point coordinates
void Point::print(){
    cout << "(" << this->x << ", " << this->y << ")" << endl;
}
