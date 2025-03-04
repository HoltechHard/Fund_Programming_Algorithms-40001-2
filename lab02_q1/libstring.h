/*
    Template of class MyString
*/

#pragma once
#include <cstdarg>

class MyString{
    public:
        char *str;
    
    public:
        MyString();
        MyString(const char *str);
        MyString(const MyString &str);
        MyString(MyString &&str);
        ~MyString();        
        void set_string(const char *str);
        const char *get_string();
        void set_strpointer(const char *str);
};

MyString concatenate(const char *c, ...);
