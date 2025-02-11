/*
    Template for class MyString
*/

#pragma once

class MyString{
    public:
        char *p_str;
    
    public:
        MyString();
        MyString(const char *str);
        MyString(const MyString &str);
        ~MyString();        
        void set_string(const char *str);
        const char *get_string();
};
