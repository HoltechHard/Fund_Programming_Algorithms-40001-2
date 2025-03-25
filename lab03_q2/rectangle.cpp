/*
    Implementation of class Rectangle
*/

#include <iostream>
#include "librect.h"

using namespace std;

// constructor by parameters
Rectangle::Rectangle(int left, int right, int bottom, int top, COLOR c) : Shape(c){
    this->left = left;
    this->right = right;
    this->bottom = bottom;
    this->top = top;

    normalize_all();
}

// constructor by object copy
Rectangle::Rectangle(const Rectangle &r){
    this->left = r.left;
    this->right = r.right;
    this->bottom = r.bottom;
    this->top = r.top;

    normalize_all();
}

// destructor
Rectangle::~Rectangle(){
    cout<<"Rectangle destructor"<<endl;
}

// procedure to normalize coordinates of axis
void Rectangle::normalize_axis(int &x1, int &x2){
    int aux;

    if(x1 > x2){
        aux = x1;
        x1 = x2;
        x2 = aux;
    }
}

// procedure to normalize all coordinates in axis x, y
void Rectangle::normalize_all(){
    normalize_axis(this->left, this->right);
    normalize_axis(this->bottom, this->top);
}

// procedure to inflate axis coordinates
void Rectangle::inflate_axis(int x, int y){
    inflate_all(x, x, y, y);
}

// procedure to inflate each coordinate of rectangle
void Rectangle::inflate_all(int left, int right, int bottom, int top){
    this->left -= left;
    this->right += right;
    this->bottom -= bottom;
    this->top += top;
}

// procedure to set all coordinates data
void Rectangle::set_all(int left, int right, int bottom, int top){
    this->left = left;
    this->right = right;
    this->bottom = bottom;
    this->top = top;

    normalize_all();
}

// procedure to get all coordinates data
void Rectangle::get_all(int &left, int &right, int &bottom, int &top){
    left = this->left;
    right = this->right;
    bottom = this->bottom;
    top = this->top;
}

// procedure to build new rectangle based on rectangle comparison
Rectangle build_rectangle(Rectangle r1, Rectangle r2){
    int x1, x2, y1, y2;

    x1 = min(r1.left, r2.left);
    x2 = max(r1.right, r2.right);
    y1 = min(r1.bottom, r2.bottom);
    y2 = max(r1.top, r2.top);
    
    return Rectangle(x1, x2, y1, y2);
}

//          implementation of virtual methods

// function to calculate perimeter
double Rectangle::calculate_perimeter(){
    return 2 * (this->right - this->left) + 2 * (this->top - this->bottom);
}

// function to calculate area
double Rectangle::calculate_area(){
    return (this->right - this->left) * (this->top - this->bottom);
}

// procedure to describe rectangle params
void Rectangle::describe() const{
    cout<<"Class Rectangle with parameters:"<<endl;
    cout<<"Left: "<<this->left<<"\t";
    cout<<"Right: "<<this->right<<"\t";
    cout<<"Bottom: "<<this->bottom<<"\t";
    cout<<"Top: "<<this->top<<endl;        
}

// procedure to inflate rectangle
void Rectangle::inflate(int d){
    inflate_axis(d, d);
}
