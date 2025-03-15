/*
    Implementation of class VectComplex
*/

#include <iostream>
#include <cmath>
#include "libvect.h"

using namespace std;

//              --- Operations for class VectComplex ---

// global function to define dynamically nunmber of elements
void set_num_elements(int &n){
    do{
        cout<<"Input #elements: ";
        cin>>n;
    }while(n<=0);
}

// constructor by default
VectComplex::VectComplex(){
    this->size = 0;
    this->vec = nullptr;
}

// constructor by parameters
VectComplex::VectComplex(int n){
    this->size = n;
    this->vec = new Complex[n];
}

// constructor by object copy
VectComplex::VectComplex(const VectComplex &v){
    this->size = v.size;
    this->vec = new Complex[v.size];

    for(int i=0; i<v.size; i++){
        this->vec[i] = v.vec[i];
    }
}

// destructor
VectComplex::~VectComplex(){
    delete[] this->vec;
}

// setter size
void VectComplex::set_size(int n){
    if(this->vec != nullptr){
        delete[] this->vec;
    }

    this->size = n;
    this->vec = new Complex[n];    
}

// getter size
int VectComplex::get_size(){
    return this->size;
}

// setter vector of complex numbers
void VectComplex::set_vector(){
    int real, img;

    for(int i=0; i<this->get_size(); i++){
        cout<<"Element "<<i+1<<":"<<endl;
        cout<<"Real: "; cin>>real;
        cout<<"Imaginary: "; cin>>img;
        this->vec[i] = Complex(real, img);
    }
}

// print vector of complex numbers
void VectComplex::print_vector(){
    for(int i=0; i<this->get_size(); i++){
        cout<<"c["<<i+1<<"]: ";
        this->vec[i].print();
    }
}


//              --- Global Operations ---

// vectorized operation between vector of complex numbers
VectComplex vect_operation(char op, VectComplex v1, VectComplex v2){
    if(v1.size != v2.size){
        cout<<"Problems with vector dimensionality"<<endl;
        return VectComplex();
    }

    VectComplex result(v1.get_size());

    for(int i=0; i<v1.get_size(); i++){
        result.vec[i] = operation(op, v1.vec[i], v2.vec[i]);
    }

    return result;
}
