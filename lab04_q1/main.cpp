#include <iostream>
#include "libpoint.h"
using namespace std;

int main(){

    Point p1(2, 2), p2(10, 10), result;
    cout<<"--- Original points ---"<<endl;
    cout<<"Point 1: ";
    p1.print();
    cout<<"Point 2: ";
    p2.print();

    cout<<"--- Adding values by reference ---"<<endl;
    p1 += p2;
    cout<<"Point 1 + Point 2: ";
    p1.print();
    p1 += 5;
    cout<<"Point 1 + 5 units: ";
    p1.print();
    p1 += p2 += 5;
    cout<<"Point 1 + Point 2 + 5 units: ";
    p1.print();

    cout<<"--- Subtracting values by reference ---"<<endl;
    p1 -= p2;
    cout<<"Point 1 - Point 2: ";
    p1.print();
    p1 -= 5;
    cout<<"Point 1 - 5 units: ";
    p1.print();
    cout<<"Point 1 - Point 2 - 5 units: ";
    p1 -= p2 -= 5;
    p1.print();

    cout<<"--- Adding values by value ---"<<endl;
    result = p1 + p2;
    cout<<"Point 1 + Point 2: ";
    result.print();
    result = result + 5;
    cout<<"Point 1 + Point 2 + 5 units: ";
    result.print();

    cout<<"--- Subtracting values by value ---"<<endl;
    result = p1 - p2;
    cout<<"Point 1 - Point 2: ";
    result.print();
    result = result - 5;
    cout<<"Point1 - Point 2 - 5 units: ";
    result.print();

    return 0;
}
