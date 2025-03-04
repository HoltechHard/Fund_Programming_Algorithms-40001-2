/*
    Template for class Complex
*/

#pragma once

class Complex{

    public:
        double real, img;

    public:
        Complex(double real=0.0, double img=0.0);
        Complex(const Complex &c);
        ~Complex();
        void print();
        double module();
        Complex inverse();
};

Complex sum(Complex c1, Complex c2);
Complex difference(Complex c1, Complex c2);
Complex product(Complex c1, Complex c2);
Complex division(Complex c1, Complex c2);
