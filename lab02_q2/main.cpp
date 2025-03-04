/*
    LIST 02 - VECTOR AND POINTERS TO OBJECTS
    EXERCISE 02 - VECTOR OF COMPLEX NUMBERS
*/

#include <iostream>
#include <cmath>
#include "libcomplex.h"

using namespace std;

int main(){

    double x, y;
    Complex c1, c2;

    // construction of complex numbers
    cout<<"--- Complex 1 --- "<<endl;
    cout<<"Real: "; cin>>x;
    cout<<"Img: "; cin>>y;
    c1 = Complex(x, y);
    cout<<"c1 = ";
    c1.print();

    cout<<"--- Complex 2 --- "<<endl;
    cout<<"Real: "; cin>>x;
    cout<<"Img: "; cin>>y;
    c2 = Complex(x, y);
    cout<<"c2 = ";
    c2.print();

    // static vector of objects for complex numbers
    Complex lst_complex[2] = {
        c1, c2
    };

    cout<<"Vector complex numbers: "<<endl;
    for(int i=0; i<2; i++){
        cout<<"c"<<i+1<<" = ";
        lst_complex[i].print();
    }

    return 0;
}
