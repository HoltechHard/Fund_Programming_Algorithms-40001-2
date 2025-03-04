/*
    LIST 02 - VECTOR AND POINTERS TO OBJECTS
    EXERCISE 01 - VECTOR OF STRINGS
*/

#include <iostream>
#include <cstring>
#include "libstring.h"

using namespace std;

int main(){

    // vector of objects
    MyString list_obj[3] = {
        MyString("Hello"), MyString("Holger"), MyString("Anna")
    };

    int n;
    n = sizeof(list_obj)/sizeof(list_obj[1]);
    cout<<"#bytes for vector of objects = "<<sizeof(list_obj)<<endl;
    cout<<"#bytes per each object = "<<sizeof(list_obj[0])<<endl;

    cout<<"Vector of objects: "<<endl;
    for(int i=0; i<n; i++){ 
        cout << list_obj[i].get_string() << endl;
    }

    // vector of pointers to objects
    MyString *list_ptr[5] = {
        new MyString("Moscow"), new MyString("London"), new MyString("St Petersburg"),
        new MyString("Kazan"), new MyString("Novosibirsk")
    };

    int m;
    m = sizeof(list_ptr)/sizeof(list_ptr[0]);

    cout<<"Vector of pointers to objects: "<<endl;
    for(int i=0; i<m; i++){
        cout << list_ptr[i]->get_string() << endl;
    }

    MyString result = concatenate("ABC", "DE", "FGHI", "X", "ZWY", nullptr);
    cout<<"Concatenation of strings: "<<endl;
    cout << result.get_string() << endl;

    return 0;
}
