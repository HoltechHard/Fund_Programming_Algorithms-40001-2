/*
    LIST 03 - INHERITANCE AND RELATIONSHIPS BETWEEN CLASSES
    EXERCISE 03 - MULTILEVEL AND MULTIPLE INHERITANCE
*/

#include <iostream>
#include <cstring>
#include <vector>
#include "libperson.h"
#include "libnatural_p.h"
#include "liblegal_p.h"
#include "libcompany.h"

using namespace std;

int main(){
    
    // definition of objects
    Employer employer("John Doe", "123 Main St", "john@example.com", "12345678", 35, "Tech Corp", 5000.0);
    Supervisor supervisor("Louis Litt", "456 Elm St", "jane@example.com", "98765432", 40, "HR", "Supervisor of HR" , 10);
    Ltda ltda("ABC Ltda", "789 Oak St", "abc@example.com", "TX123", 0.15, 2000, {"Partner1", "Partner2"}, 500000.0);
    SA sa("XYZ Corp", "321 Pine St", "xyz@example.com", "TX456", 0.05, 1995, {"Shareholder1", "Shareholder2"}, 10000, 150.0);
    PublicCompany publicCompany("Public Corp", "654 Birch St", "public@example.com", "TX789", 0.12, 1980, {"Gov", "Public"}, 5000, 200.0, 
        "G12", "Tech Company", 100000.0, "IT Services");
    
    // print data        
    cout<<"--- Employer ---"<<endl;
    employer.print();
    cout<<"----------------------------------------"<<endl;

    cout<<"--- Supervisor ---"<<endl;
    supervisor.print();    
    cout<<"----------------------------------------"<<endl;

    cout<<"--- Ltda ---"<<endl;
    ltda.print();
    cout<<"----------------------------------------"<<endl;

    cout<<"--- SA ---"<<endl;
    sa.print();
    cout<<"----------------------------------------"<<endl;

    cout<<"--- Public Company ---"<<endl;
    publicCompany.print();

    return 0;
}
