/*
    Implementation of class Rectangle
*/

#include <iostream>
#include "librect.h"

using namespace std;

// constructor by parameters
Rectangle::Rectangle(int left, int right, int bottom, int top){
    p_left = left;
    p_right = right;
    p_bottom = bottom;
    p_top = top;

    normalize_all();
}

// constructor by object copy
Rectangle::Rectangle(const Rectangle &r){
    p_left = r.p_left;
    p_right = r.p_right;
    p_bottom = r.p_bottom;
    p_top = r.p_top;

    normalize_all();
}

// destructor
Rectangle::~Rectangle(){}

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
    normalize_axis(p_left, p_right);
    normalize_axis(p_bottom, p_top);
}

// procedure to print rectangle coordinates
void Rectangle::print(){
    cout<<"Left: "<<p_left<<endl;
    cout<<"Right: "<<p_right<<endl;
    cout<<"Bottom: "<<p_bottom<<endl;
    cout<<"Top: "<<p_top<<endl;
}

// function to calculate perimeter
double Rectangle::calculate_perimeter(){
    return 2 * (p_right - p_left) + 2 * (p_top - p_bottom);
}

// function to calculate area
double Rectangle::calculate_area(){
    return (p_right - p_left) * (p_top - p_bottom);
}

// procedure to inflate axis coordinates
void Rectangle::inflate_axis(int x, int y){
    inflate_all(x, x, y, y);
}

// procedure to inflate each coordinate of rectangle
void Rectangle::inflate_all(int left, int right, int bottom, int top){
    p_left -= left;
    p_right += right;
    p_bottom -= bottom;
    p_top += top;
}

// procedure to set all coordinates data
void Rectangle::set_all(int left, int right, int bottom, int top){
    p_left = left;
    p_right = right;
    p_bottom = bottom;
    p_top = top;
}

// procedure to get all coordinates data
void Rectangle::get_all(int &left, int &right, int &bottom, int &top){
    left = p_left;
    right = p_right;
    bottom = p_bottom;
    top = p_top;
}

// procedure to build new rectangle based on rectangle comparison
Rectangle build_rectangle(Rectangle r1, Rectangle r2){
    int x1, x2, y1, y2;

    x1 = min(r1.p_left, r2.p_left);
    x2 = max(r1.p_right, r2.p_right);
    y1 = min(r1.p_bottom, r2.p_bottom);
    y2 = max(r1.p_top, r2.p_top);
    
    return Rectangle(x1, x2, y1, y2);
}
