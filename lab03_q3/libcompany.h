/*
    Template to classes:
    - Government Entity (class base)
    - Public Company (class derivate)
*/

#pragma once
#include "liblegal_p.h"

// definition of class Government Entity
class GovernmentEntity{
    protected:
        char code[3];
        char description[20];
        double year_budget;
    public:
        GovernmentEntity();
        GovernmentEntity(const char code[3], const char description[20], double year_budget);
        GovernmentEntity(const GovernmentEntity &g);
        ~GovernmentEntity();
        void print();
};

// definition of class Public Company
class PublicCompany: public SA, public GovernmentEntity{
    private:
        char public_service[20];
    public:
        PublicCompany();
        PublicCompany(const char name[20], const char address[50], const char contact[30], 
                        const char legal_code[5], double tax, int foundation_year, 
                        vector<const char *> stakeholders, int num_holders, double stock_price,
                        const char code[3], const char description[20], double year_budget, 
                        const char public_service[20]);
        PublicCompany(const PublicCompany &pc);
        ~PublicCompany();
        void print();
};
