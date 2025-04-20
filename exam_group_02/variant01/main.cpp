#include <iostream>
#include <cmath>
#include "libpoint.h"

using namespace std;

int main(){

    RotatorPoint rp1(1, 2, M_PI/6), rp2(3, 4, M_PI/3);    

    cout<<"--- Rotator Point 01 ---"<<endl;
    rp1.print();
    cout<<"--- Rotator Point 02 ---"<<endl;
    rp2.print();

    cout<<"--- Rotator Point 01 + Rotator Point 02 ---"<<endl;
    rp1 += rp2;
    rp1.print();

    cout<<"--- Rotator Point 01 * Rotator Point 02 ---"<<endl;
    rp1 *= rp2;
    rp1.print();

    return 0;
}
