/*
    LIST 03 - INHERITANCE AND RELATIONSHIPS BETWEEN CLASSES
    EXERCISE 01 - SIMPLE HIERARCHY OF BANK ACCOUNTS
*/

#include <iostream>
#include <cstring>
#include "libaccount.h"
#include "libsavings.h"
#include "libbusiness.h"

using namespace std;

int main(){

    Account c1("A001", "Artem", 0.05, 20000);
    cout<<"--- Account 01 ---"<<endl;
    c1.print();    

    SavingsAccount c2("A002", "Annia", 0.02, 50000, 10);
    cout<<"--- Acount 02 ---"<<endl;
    c2.print();
    
    BusinessAccount c3("A003", "Sergey", 0.01, 100000, 0.15);
    cout<<"--- Account 03 ---"<<endl;
    c3.print();

    return 0;
}
