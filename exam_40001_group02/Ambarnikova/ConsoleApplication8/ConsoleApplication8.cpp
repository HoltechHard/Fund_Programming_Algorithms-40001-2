#include<iostream>
#include"accounting.h"
#include "adminex.h"
#include "fixed.h"
#include "varcost.h"
#include "adminex.h"

int main() {


    FixedCost fc1;
    VariableCost vc1;
    AdministrativeExpenses ae1;

 
    FixedCost fc2(10000, 20, 3000);
    VariableCost vc2(15000, 15, 50, 100);
    AdministrativeExpenses ae2(20000, 5000, 2000);

    FixedCost fc3(fc2);
    VariableCost vc3(vc2);
    AdministrativeExpenses ae3(ae2);

  
    fc3.print_report();
    vc3.print_report();
    ae3.print_report();

    return 0;
}