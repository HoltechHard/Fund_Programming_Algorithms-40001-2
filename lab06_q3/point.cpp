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

bool Point::operator==(const Point &p) const{
    return (this->x == p.x && this->y == p.y);
}

istream &operator>>(istream &os, Point &p){
    os.ignore('(');
    os >> p.x;
    os.ignore(',');
    os >> p.y;
    os.ignore(')');
    return os;
}

ostream &operator<<(ostream &os, const Point &p){    
    os << "(" << p.x << "," << p.y << ")" << endl;
    return os;
}
