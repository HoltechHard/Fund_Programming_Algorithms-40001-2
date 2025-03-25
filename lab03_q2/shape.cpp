/*
    Implementation of class Shape
*/

#include <iostream>
#include "libshape.h"

using namespace std;

// constructor per default
Shape::Shape(){
    this->color = RED;
}

// constructor by parameters
Shape::Shape(enum COLOR c){
    this->color = c;
}

// constructor by object copy
Shape::Shape(const Shape &s){
    this->color = s.color;
}

// destructor
Shape::~Shape(){
    cout<<"Shape destructor"<<endl;
}

// procedure to print data
void Shape::describe() const{
    cout<<"Class Shape with color: "<<this->color<<endl;
}
