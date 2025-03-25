/*
    LIST 03 - INHERITANCE AND RELATIONSHIPS BETWEEN CLASSES
    EXERCISE 02 - GEOMETRY FIGURES AND SIMPLE INHERITANCE
*/

#include <iostream>
#include "librect.h"
#include "libcircle.h"
using namespace std;

int main(){

    // objects
    Shape s(BLUE);
    Rectangle r(10, 12, 20, 24, GREEN);
    Circle c(5, 10, 10, RED);

    cout<<"--- Working with objects ---"<<endl;
    cout<<"Shape"<<endl;
    s.describe();
    cout<<"Rectangle"<<endl;
    r.describe();
    cout<<"Circle"<<endl;
    c.describe();

    // pointers to objects
    Shape *ps = &s;
    Shape *pr = &r;
    Shape *pc = &c;

    cout<<"--- Working with pointers and references ---"<<endl;
    cout<<"Shape 01"<<endl;
    ps->describe();
    cout<<"Rectangle 01"<<endl;
    pr->describe();
    cout<<"Circle 01"<<endl;
    pc->describe();       

    // check working of pure virtual functions
    Rectangle r2(10, 20, 30, 40, RED);
    Circle c2(10, 10, 20, GREEN);
    Circle c_ext(r2);
    Shape *s2;

    cout<<"--- Working with Pointers and virtual functions ---"<<endl;
    cout<<"***Rectangle 02***"<<endl;
    s2 = &r2;
    s2->inflate(10);
    s2->describe();
    cout<<"Perimeter: "<<s2->calculate_perimeter()<<endl;
    cout<<"Area: "<<s2->calculate_area()<<endl;
    cout<<"---------------------------------------"<<endl;

    cout<<"***Circle 02***"<<endl;
    s2 = &c2;
    s2->inflate(5);
    s2->describe();
    cout<<"Perimeter: "<<s2->calculate_perimeter()<<endl;
    cout<<"Area: "<<s2->calculate_area()<<endl;
    cout<<"---------------------------------------"<<endl;

    cout<<"***Circumscribed circle***"<<endl;
    s2 = &c_ext;
    s2->inflate(10);
    s2->describe();
    cout<<"Perimeter: "<<s2->calculate_perimeter()<<endl;
    cout<<"Area: "<<s2->calculate_area()<<endl;
    
    return 0;
}
