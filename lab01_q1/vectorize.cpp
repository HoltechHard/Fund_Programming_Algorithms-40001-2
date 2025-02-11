/*
    Implementation of class Vector and additional operations
*/

#include <iostream>
#include <cmath>
#include "libvector.h"
using namespace std;

//        --- Operations related with class Vector ---

// constructor by parameters
Vector::Vector(double x, double y, double z){
    xi = x;
    yj = y;
    zk = z;
}

// constructor using object by reference
Vector::Vector(const Vector &v){
    xi = v.xi; 
    yj = v.yj; 
    zk = v.zk;
}

// destructor
Vector::~Vector(){}

// procedure to input vector by iostream
void Vector::input_vector(Vector &v){
    double x, y, z;

    cout<<"X: ";
    cin>>x;
    cout<<"Y: ";
    cin>>y;
    cout<<"Z: ";
    cin>>z;

    v = Vector(x, y, z);
}

// procedure to print vector components by iostream
void Vector::print(){
    cout<<xi<<"i + "<<yj<<"j + "<<zk<<"k"<<endl;
}

// function to calculate module of vector
double Vector::calculate_module(){
    return sqrt(xi*xi + yj*yj + zk*zk);
}

// function to obtain unit vector
Vector Vector::unit_vector(){
    double mod = calculate_module();
    return Vector(xi/mod, yj/mod, zk/mod);
}

//          --- Additional Operations ---

// function to calculate scalar product
double scalar_product(Vector v1, Vector v2){
    return v1.xi*v2.xi + v1.yj*v2.yj + v1.zk*v2.zk;
}

// function to calculate vector product
Vector vector_product(Vector v1, Vector v2){
    double x, y, z;
    x = v1.yj*v2.zk - v1.zk*v2.yj;
    y = v1.zk*v2.xi - v1.xi*v2.zk;
    z = v1.xi*v2.yj - v1.yj*v2.xi;

    return Vector(x, y, z);
}

// function to calculate angle between 2 vectors
double angle(Vector v1, Vector v2){
    double sp, mod1, mod2;
    
    sp = scalar_product(v1, v2);
    mod1 = v1.calculate_module();
    mod2 = v2.calculate_module();

    return acos(sp/(mod1*mod2));
}

// function to calculate euclidean distance
double euclidean_dist(Vector v1, Vector v2){
    return sqrt(pow(v1.xi - v2.xi, 2) + pow(v1.yj - v2.yj, 2) + pow(v1.zk - v2.zk, 2));
}

// function to calculate manhattan distance
double manhattan_dist(Vector v1, Vector v2){
    return abs(v1.xi - v2.xi) + abs(v1.yj - v2.yj) + abs(v1.zk - v2.zk);
}
