/*
    Implementation of class Complex
*/

#include <iostream>
#include <cmath>
#include "libcomplex.h"

using namespace std;

//          --- Operations for class Complex ---

// constructor by parameters + per default
Complex::Complex(double real, double img){
    this->real = real;
    this->img = img;
}

// constructor using object by reference
Complex::Complex(const Complex &c){
    this->real = c.real;
    this->img = c.img;
}

// destructor
Complex::~Complex(){}

// procedure to print complex number
void Complex::print(){
    cout<<this->real<<" + "<<this->img<<"i"<<endl;
}

// function to calculate module
double Complex::module(){
    return sqrt(pow(this->real, 2) + pow(this->img, 2));
}

// function to calculate inverse of complex number
Complex Complex::inverse(){
    double mod;
    mod = pow(this->module(), 2);

    return Complex(this->real/mod, -this->img/mod);
}


//            --- Global Operations ---

// function to calculate sum of complex numbers
Complex sum(Complex c1, Complex c2){
    return Complex(c1.real + c2.real, c1.img + c2.img);
}

// function to calculate difference of complex numbers
Complex difference(Complex c1, Complex c2){
    return Complex(c1.real - c2.real, c1.img - c2.img);
}

// function to calculate product of complex numbers
Complex product(Complex c1, Complex c2){
    double real, img;
    real = c1.real*c2.real - c1.img*c2.img;
    img = c1.real*c2.img + c1.img*c2.real;

    return Complex(real, img);
}

// function to calculate division of complex numbers
Complex division(Complex c1, Complex c2){
    double real, img, mod;
    mod = pow(c2.module(), 2);
    real = (c1.real*c2.real + c1.img*c2.img)/mod;
    img = (c1.img*c2.real - c1.real*c2.img)/mod;

    return Complex(real, img);
}

// function to choose and execute complex numbers operation
Complex operation(char op, Complex c1, Complex c2){
    switch(op){
        case '+': return sum(c1, c2); break;
        case '-': return difference(c1, c2); break;
        case '*': return product(c1, c2); break;
        case '/': return division(c1, c2); break;
        default:
            cout<<"Operator not identified!"<<endl;            
    }
}
