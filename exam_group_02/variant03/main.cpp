#include <iostream>
#include "libaccounting.h"

using namespace std;

int main(){

    FixedCost fc(10000.0, 0.15, 1000.0);
    VariableCost vc(20000.0, 0.10, 300.0, 50.0);
    AdministrativeExpenses ae(30000.0, 2000.0, 1500.0);

    cout<<"--- Fixed Cost Report ---"<<endl;
    fc.print_report();

    cout<<"-- Variable Cost Report ---"<<endl;
    vc.print_report();

    cout<<"--- Administrative Expenses Report ---"<<endl;
    ae.print_report();

    return 0;
}
