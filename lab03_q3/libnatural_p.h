/*
    Template to classes: 
    - Natural Person (class base)
    - Employer (class derivate)
    - Supervisor (class derivate)
*/

#pragma once
#include <cstring>
#include "libperson.h"

// definition of class NaturalPerson
class NaturalPerson: public Person{
    private:
        char passport[10];
        int age;
    public:
        NaturalPerson();
        NaturalPerson(const char name[20], const char address[50], const char contact[30],
                        const char passport[10], int age);
        NaturalPerson(const NaturalPerson &np);
        ~NaturalPerson();
        void print();
};

// definition of class Employer
class Employer: public NaturalPerson{
    private:
        char company[20];
        double salary;
    public:
        Employer();
        Employer(const char name[20], const char address[50], const char contact[30],
                    const char passport[10], int age,
                    const char company[20], double salary);
        Employer(const Employer &e);
        ~Employer();
        void print();
};

// definition of class Supervisor
class Supervisor: public NaturalPerson{
    private:
        char department[20];
        char position[30];
        int team_size;
    public:
        Supervisor();
        Supervisor(const char name[20], const char address[50], const char contact[30],
                        const char passport[10], int age, 
                        const char department[20], const char position[30], int team_size);
        Supervisor(const Supervisor &s);
        ~Supervisor();
        void print();
};
