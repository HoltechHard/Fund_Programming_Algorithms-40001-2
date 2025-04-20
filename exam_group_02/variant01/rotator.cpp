#include <iostream>
#include <cmath>
#include "libpoint.h"

using namespace std;

RotatorPoint::RotatorPoint(){
    this->r = 0.0;
    this->s = 0.0;
    this->theta = 0.0;
}

RotatorPoint::RotatorPoint(double r, double s, double theta){
    this->r = r;
    this->s = s;
    this->theta = theta;
}

RotatorPoint::RotatorPoint(const RotatorPoint &rp){
    this->r = rp.r;
    this->s = rp.s;
    this->theta = rp.theta;
}

void RotatorPoint::setR(double r){
    this->r = r;
}

double RotatorPoint::getR(){
    return this->r;
}

void RotatorPoint::setS(double s){
    this->s = s;
}

double RotatorPoint::getS(){
    return this->s;
}

void RotatorPoint::setTheta(double theta){
    this->theta = theta;
}

double RotatorPoint::getTheta(){
    return this->theta;
}

void RotatorPoint::print(){
    cout << "R: " << this->r << endl;
    cout << "S: " << this->s << endl;
    cout << "Theta: " << this->theta << endl;
}

RotatorPoint &operator+=(RotatorPoint &rp1, RotatorPoint &rp2){
    rp1.r = (rp1.r + rp2.r) * cos(rp1.theta);
    rp1.s = (rp1.s + rp2.s) * sin(rp2.theta);
    rp1.theta += rp2.theta;

    return rp1;
}

RotatorPoint &operator*=(RotatorPoint &rp1, RotatorPoint &rp2){    
    rp1.r = rp1.r * cos(rp1.theta) + rp2.r * sin(rp2.theta);
    rp1.s = rp1.s * sin(rp1.theta) + rp2.s * cos(rp2.theta);
    rp1.theta  += rp2.theta;

    return rp1;
}
