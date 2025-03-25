/*
    Template to class Person
*/

#pragma once
#include <cstring>

class Person{
    protected:
        char name[20];
        char address[50];
        char contact[30];
    public:
        Person();
        Person(const char name[20], const char address[50], const char contact[30]);
        Person(const Person &p);
        ~Person();
        virtual void print();
};
