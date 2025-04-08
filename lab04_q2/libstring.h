/*
    Template of class MyString
*/

#pragma once
#include <cstdarg>

using namespace std;

class MyString{
    public:
        char *str;
    
    public:
        MyString();
        MyString(const char *str);
        MyString(const MyString &s);
        MyString(MyString &&s);
        ~MyString();        
        void set_string(const char *str);
        const char *get_string() const;
        void set_strpointer(const char *str);

        MyString &operator=(const char *str);
        MyString &operator=(const MyString &s);
        MyString &operator=(MyString &&s);
        
        MyString operator+(const MyString &s) const;
        MyString &operator+=(const MyString &s);
        
        bool operator==(const MyString &s) const;
};

MyString concatenate(const char *c, ...);
ostream &operator<<(ostream &os, const MyString &s);
