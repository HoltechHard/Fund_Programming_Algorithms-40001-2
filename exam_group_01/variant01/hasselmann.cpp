#include <iostream>
#include <cmath>
#include "libpoint.h"
using namespace std;

HasselmannPoint::HasselmannPoint(){
    this->x = 0.0;
    this->y = 0.0;
    this->z = false;
    this->color = RED;
}

HasselmannPoint::HasselmannPoint(double x, double y, bool z, enum SPECTRUM color){
    this->x = x;
    this->y = y;
    this->z = z;
    this->color = color;
}

HasselmannPoint::HasselmannPoint(const HasselmannPoint &hp){
    this->x = hp.x;
    this->y = hp.y;
    this->z = hp.z;
    this->color = hp.color;
}

void HasselmannPoint::setX(double x){
    this->x = x;
}

double HasselmannPoint::getX(){
    return this->x;
}

void HasselmannPoint::setY(double y){
    this->y = y;
}

double HasselmannPoint::getY(){
    return this->y;
}

void HasselmannPoint::setZ(bool z){
    this->z = z;
}

bool HasselmannPoint::getZ(){
    return this->z;
}

void HasselmannPoint::setColor(enum SPECTRUM color){
    this->color = color;
}

enum SPECTRUM HasselmannPoint::getColor(){
    return this->color;
}

void HasselmannPoint::print(){
    cout<<"X: "<<this->getX()<<endl;
    cout<<"Y: "<<this->getY()<<endl;
    cout<<"Z: "<<(this->getZ()? "True" : "False")<<endl;
    cout<<"Color: "<<this->getColor()<<endl;
}

HasselmannPoint operator+(HasselmannPoint &hp1, HasselmannPoint &hp2){
    HasselmannPoint result;

    result.x = sqrt(pow(hp1.x, 2) + pow(hp2.x, 2));
    result.y = sqrt(pow(hp1.y, 2) + pow(hp2.y, 2));
    result.z = hp1.z || hp2.z;
    result.color = hp1.color;

    return result;
}

HasselmannPoint operator*(HasselmannPoint &hp1, HasselmannPoint &hp2){
    HasselmannPoint result;

    result.x = hp1.x * hp2.x;
    result.y = hp1.y * hp2.y;
    result.z = hp1.z && hp2.z;
    result.color = hp2.color;

    return result;
}
