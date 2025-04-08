/*
    LIST 04 - METHODS AND CLASSES TYPE FRIEND. OVERLOAD OF OPERATIONS
    EXERCISE 02 - DEVELOP KEY-VALUE DATABASE
*/

#include <iostream>
#include <cstring>
#include "libdb.h"
using namespace std;

int main(){

    // definition of database object
    DB database;

    // asignation of new elements in key-value database
    database["Holger"] = Data(MyString("Engineer"), 26, MALE, 250000.0);
    database["Anna"] = Data(MyString("Analyst"), 28, FEMALE, 195000.0);
    database["Dmitry"] = Data(MyString("Designer"), 30, MALE, 145000.0);
    database["Maria"] = Data(MyString("Manager"), 19, FEMALE, 160000.0);

    // print elements of database
    cout<<"\n--- Original database --- "<<endl;
    cout<<database;
    
    // remove element of database
    cout<<"\n--- Database after operation remove ---"<<endl;
    database.Remove("Anna");
    cout<<database;

    return 0;
}
