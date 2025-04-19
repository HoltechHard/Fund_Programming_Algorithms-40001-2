#include <iostream>
#include <cmath>
#include "libtransaction.h"

using namespace std;

int main(){
    // Create a deposit
    cout<<"--- Deposit ---"<<endl;
    Deposit d1(100.00, 1000.0);
    d1.print_transaction();

    // Create a credit
    cout<<"--- Credit A ---"<<endl;
    Credit c1(100.0, 5, 12, 'A');
    c1.print_transaction();

    cout<<"--- Credit B ---"<<endl;
    Credit c2(200.0, 3, 24, 'B');
    c2.print_transaction();

    return 0;
}
