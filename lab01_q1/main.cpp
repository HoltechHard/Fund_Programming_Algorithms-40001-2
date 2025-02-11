/*
    LIST 01 - CLASSES AND OBJECTS
    EXERCISE 01 - VECTOR LIKE CLASS
*/

#include <iostream>
#include <cmath>
#include "libvector.h"
using namespace std;

int main(){

    Vector v1, v2;
    v1 = Vector(10, 20, 30);
    Vector::input_vector(v2);

    cout<<"Vector v1:"<<endl;
    v1.print();
    cout<<"Vector v2: "<<endl;
    v2.print();

    cout<<"Module v1 = "<<v1.calculate_module()<<endl;
    cout<<"Module v2 = "<<v2.calculate_module()<<endl;

    cout<<"Unit vector vu1: "<<endl;
    v1.unit_vector().print();
    cout<<"Unit vector vu2: "<<endl;
    v2.unit_vector().print();

    cout<<"Scalar product v1 and v2 = "<<scalar_product(v1, v2)<<endl;
    cout<<"Vector product v1 and v2: "<<endl;
    vector_product(v1, v2).print();

    cout<<"Angle: "<<angle(v1, v2)<<endl;
    cout<<"Euclidean distance: "<<euclidean_dist(v1, v2)<<endl;
    cout<<"Manhattan distance: "<<manhattan_dist(v1, v2)<<endl;
    
    return 0;
}
