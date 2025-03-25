/*
    Implementation of class Circle
*/

#include <iostream>
#include <cmath>
#include "libcircle.h"

using namespace std;

// constructor by default
Circle::Circle(): 
    Shape(BLUE){
        this->centerX = 0;
        this->centerY = 0;
        this->radius = 1;
    }

// constructor by params
Circle::Circle(double centerX, double centerY, double radius, COLOR color):
    Shape(color){
        this->centerX = centerX;
        this->centerY = centerY;
        this->radius = radius;
    }

// constructor by object copy
Circle::Circle(const Circle &c): 
    Shape(c){
        this->centerX = c.centerX;
        this->centerY = c.centerY;
        this->radius = c.radius;
    }

// constructor of the ex-inscribed circle
Circle::Circle(Rectangle &r): 
    Shape(r){
        int x1, x2, y1, y2;
        r.get_all(x1, x2, y1, y2);
        this->centerX = (x1 + x2)/2.0;
        this->centerY = (y1 + y2)/2.0;
        this->radius = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2))/2.0;
    }

// destructor
Circle::~Circle(){
    cout<<"Circle destructor"<<endl;
}

//          implementation of virtual methods

// function to calculate perimeter
double Circle::calculate_perimeter(){
    return 2 * M_PI * this->radius;
}

// function to calculate area
double Circle::calculate_area(){
    return M_PI * pow(this->radius, 2);
}

// procedure to describe circle params
void Circle::describe() const{
    cout<<"Class Circle with parameters:"<<endl;
    cout<<"X-center: "<<this->centerX<<"\t";
    cout<<"Y-center: "<<this->centerY<<"\t";
    cout<<"Radius: "<<this->radius<<endl;
}

// procedure to inflate circle
void Circle::inflate(int d){
    this->radius += d;
}
