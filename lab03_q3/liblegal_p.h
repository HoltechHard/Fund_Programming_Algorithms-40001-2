/*
    Template to classes:
    - Legal Person (class base)
    - Ltda (class derivate)
    - SA (class derivate)
*/

#pragma once
#include <cstring>
#include <vector>
#include "libperson.h"

using namespace std;

// definition of class Legal Person
class LegalPerson : public Person{
    private:
        char legal_code[5];
        double tax;
        int foundation_year;
    public:
        LegalPerson();
        LegalPerson(const char name[20], const char address[50], const char contact[30], 
                        const char legal_code[5], double tax, int foundation_year);
        LegalPerson(const LegalPerson &lp);
        ~LegalPerson();
        double get_tax();
        void print();
        double virtual get_benefits(){};
};

// definition of class Ltda
class Ltda: public LegalPerson{
    private:
        vector<const char *> partners;
        double market_cap;
    public:
        Ltda();
        Ltda(const char name[20], const char address[50], const char contact[30], 
                const char legal_code[5], double tax, int foundation_year, 
                vector<const char *> partners, double market_cap);
        Ltda(const Ltda &ltda);
        ~Ltda();
        void print();
        double get_benefits();
};

// definition of class SA
class SA: public LegalPerson{
    private:
        vector<const char *> stakeholders;
        int num_holders;
        double stock_price;
    public:
        SA();
        SA(const char name[20], const char address[50], const char contact[30], 
                const char legal_code[5], double tax, int foundation_year, 
                vector<const char *> stakeholders, int num_holders, double stock_price);
        SA(const SA &sa);
        ~SA();
        int get_holders();
        double get_stock_price();
        void print();
        double get_benefits();
};
