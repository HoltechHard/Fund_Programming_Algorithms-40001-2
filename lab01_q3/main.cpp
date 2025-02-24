#include <iostream>
#include <cmath>
#include "librect.h"

using namespace std;

int main(){

    Rectangle r1, r2, r3, r4;

    // create object by parameters
    cout<<"--- Rectangle 01 --- "<<endl;
    r1 = Rectangle(1, 5, 10, 15);
    r1.print();
    cout<<"Perimeter: "<<r1.calculate_perimeter()<<endl;
    cout<<"Area: "<<r1.calculate_area()<<endl;

    // create object by parameters with some assignations per default
    cout<<"--- Rectangle 02 --- "<<endl;
    r2 = Rectangle(-5, -10, -2);
    r2.print();
    cout<<"Perimeter: "<<r2.calculate_perimeter()<<endl;
    cout<<"Area: "<<r2.calculate_area()<<endl;

    // create object using object copy
    cout<<"--- Rectangle 03 before inflation---"<<endl;
    r3 = Rectangle(r1);
    r3.print();

    // operation inflate rectangle
    int x, y;

    cout<<"--- Rectangle 03 after inflation---"<<endl;    
    cout<<"Inflation in x: ";
    cin>>x;
    cout<<"Inflation in y: ";
    cin>>y;

    r3.inflate_axis(x, y);
    r3.print();
    cout<<"Perimeter: "<<r3.calculate_perimeter()<<endl;
    cout<<"Area: "<<r3.calculate_area()<<endl;

    // update states with setters
    cout<<"-- updated coordinates R3 with setters -- "<<endl;
    r3.set_all(15, 5, -5, 0);
    r3.print();

    // return data with getters
    int x1, x2, y1, y2;
    r3.get_all(x1, x2, y1, y2);
    cout<<"-- variables from getters -- "<<endl;
    cout<<"x1: "<<x1<<endl;
    cout<<"x2: "<<x2<<endl;
    cout<<"y1: "<<y1<<endl;
    cout<<"y2: "<<y2<<endl;
    
    // get new rectangle through rectangles r2, r3
    cout<<"--- Rectangle 04 ---"<<endl;
    r4 = build_rectangle(r2, r3);
    r4.print();

    return 0;
}
