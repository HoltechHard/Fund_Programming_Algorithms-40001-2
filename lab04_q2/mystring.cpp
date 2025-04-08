/*
    Implementation of class MyString
*/

#include <iostream>
#include <cstring>
#include "libstring.h"

using namespace std;

//            --- Operations for class MyString ---

// constructor per default
MyString::MyString(){
    this->str = nullptr;
}

// constructor by parameters
MyString::MyString(const char *str){
    this->str = new char[strlen(str)+1];
    strcpy(this->str, str);
}

// constructor using object by reference
MyString::MyString(const MyString &s){
    this->str = new char[strlen(s.str)+1];
    strcpy(this->str, s.str);
}

// constructor using pointer to a temporary object
MyString::MyString(MyString &&s){
    this->str = s.str;
    s.str = 0;
}

// destructor to drop data and deallocate memory
MyString::~MyString(){
    delete[] this->str;
}

// procedure to modify the string data
void MyString::set_string(const char *str){    
    delete[] this->str;
    this->str = new char[strlen(str)+1];
    strcpy(this->str, str);
}

// function to retrieve the string data
const char *MyString::get_string() const{
    return this->str;
}

// procedure to modify the string pointer
void MyString::set_strpointer(const char *str){
    delete[] this->str;
    this->str = const_cast<char*>(str);
}

// function to overload operation of assignation
MyString &MyString::operator=(const char *str){
    delete[] this->str;
    this->str = new char[strlen(str)+1];
    strcpy(this->str, str);

    return *this;
}

MyString &MyString::operator=(const MyString &s){
    if(this == &s)
        return *this;
    *this = s.str;

    return *this;
}

MyString &MyString::operator=(MyString &&s){
    if(this == &s)
        return *this;

    delete[] this->str;
    this->str = s.str;
    s.str = 0;
    
    return *this;
}

// function to overload operation of concatenation with call by value
MyString MyString::operator+(const MyString &s) const{
    return concatenate(this->str, s.str, nullptr);
}

// function to overload operation of concatenation with call by reference
MyString &MyString::operator+=(const MyString &s){
    *this = move(concatenate(this->str, s.str, nullptr));
    return *this;
}

// function to overload operation of comparison
bool MyString::operator==(const MyString &s) const{
    return strcmp(this->str, s.str) == 0;
}


//            --- Global Operations ---

// function to concatenate dynamic number of strings
MyString concatenate(const char *c, ...){
    MyString result;
    va_list args;   // list of input arguments
    va_start(args, c);  // initialize the list of arguments
    const char *pstr = c;
    int size = 0;

    // count total elements
    while(pstr){
        size += strlen(pstr);
        pstr = va_arg(args, const char *);  // move pointer to next argument
    }

    // allocate memory for unified char
    char *unified = new char[size+1];
    unified[0] = '\0';

    // restart pointer to list of arguments
    va_start(args, c);
    pstr = c;

    // concatenate strings
    while(pstr){
        strcat(unified, pstr);
        pstr = va_arg(args, const char *);
    }

    // set concatenated string to MyString object
    result.set_string(unified);
    
    delete[] unified;
    va_end(args);

    return result;
}

// function to overload operation of print output data stream
ostream &operator<<(ostream &os, const MyString &s){
    os << s.get_string();

    return os;
}
