#include <iostream>
#include "libpoint.h"

using namespace std;

int main(){

    // build object
    HasselmannPoint p1(1, 2, true, RED);
    HasselmannPoint p2(3, 4, false, BLUE);
    HasselmannPoint res_sum, res_prod;

    cout<<"--- Hasselmann Point 1 --- "<<endl;
    p1.print();
    cout<<"--- Hasselmann Point 2 ---"<<endl;
    p2.print();

    res_sum = p1 + p2;
    res_prod = p1 * p2;

    cout<<"hp1 + hp2 = "<<endl;
    cout<<"--------------------"<<endl;
    res_sum.print();
    cout<<"---------------------"<<endl;
    cout<<"hp1 * hp2 = "<<endl;
    res_prod.print();
    
    return 0;
}
