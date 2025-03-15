/*
    Template for class Vector of Complex numbers
*/

#pragma once
#include "libcomplex.h"

class VectComplex{

    public:
        Complex *vec;
        int size;

    public:
        VectComplex();
        VectComplex(int n);
        VectComplex(const VectComplex &v);
        ~VectComplex();
        void set_size(int n);
        int get_size();
        void set_vector();
        void print_vector();

};

void set_num_elements(int &n);
VectComplex vect_operation(char op, VectComplex v1, VectComplex v2);
