#include <iostream>
#include <cstring>
#include "libstring.h"

using namespace std;

int main(){

    // constructor to initialize the string parameter
    MyString str1("Hello");
    cout<<"String 01:"<<endl;
    cout<< str1.get_string()<<endl;

    // copy constructor using object
    MyString str2;    
    str2 = str1;
    cout<<"String 02 before changes:"<<endl;
    cout<<str2.get_string()<<endl;

    // modify the string data
    cout<<"String 02 after changes:"<<endl;
    str2.set_string("San Petersburg");
    cout<<str2.get_string()<<endl;

    return 0;
}
