/*
    Implementation of class MyString
*/

#include <iostream>
#include <cstring>
#include "libstring.h"

using namespace std;

//          --- Operations related with class MyString ---

// constructor per default
MyString::MyString(){
    p_str = nullptr;
}

// constructor by parameters
MyString::MyString(const char *str){
    p_str = new char[strlen(str)+1];
    strcpy(p_str, str);
}

// constructor using object by reference
MyString::MyString(const MyString &str){
    p_str = new char[strlen(str.p_str)+1];
    strcpy(p_str, str.p_str);
}

// destructor to drop data and deallocate memory
MyString::~MyString(){
    delete[] p_str;
}
