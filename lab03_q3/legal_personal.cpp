/*
    Implementation of classes:
    - Legal Person
    - Ltda
    - SA
*/

#include <iostream>
#include "liblegal_p.h"

using namespace std;

//                 --- class LegalPerson ---

// constructor per default
LegalPerson::LegalPerson():
    Person(){
        strcpy(legal_code, "");
        tax = 0;
        foundation_year = 0;
    }

// constructor by parameters -> 1 level of inheritance
LegalPerson::LegalPerson(const char name[20], const char address[50], const char contact[30],
                            const char legal_code[5], double tax, int foundation_year):
    Person(name, address, contact){
        strcpy(this->legal_code, legal_code);
        this->tax = tax;
        this->foundation_year = foundation_year;
    }

// constructor by object copy    
LegalPerson::LegalPerson(const LegalPerson &lp):
    Person(lp){
        strcpy(legal_code, lp.legal_code);
        tax = lp.tax;
        foundation_year = lp.foundation_year;
    }

// destructor    
LegalPerson::~LegalPerson(){}

// getter function
double LegalPerson::get_tax(){
    return this->tax;
}

// procedure to print data
void LegalPerson::print(){
    Person::print();
    cout<<"Legal Code: "<<this->legal_code<<endl;
    cout<<"Tax: "<<this->tax<<endl;
    cout<<"Foundation Year: "<<this->foundation_year<<endl;
}


//                 --- class Ltda ---

// constructor per default
Ltda::Ltda():
    LegalPerson(){
        partners.clear();
        market_cap = 0;
    }

// constructor by parameters -> 2 levels of inheritance
Ltda::Ltda(const char name[20], const char address[50], const char contact[30], 
                const char legal_code[5], double tax, int foundation_year, 
                vector<const char *> partners, double market_cap):
    LegalPerson(name, address, contact, legal_code, tax, foundation_year){
        for(const auto &partner: partners){
            char *aux = new char[strlen(partner)+1];
            strcpy(aux, partner);
            this->partners.push_back(aux);
        }
        
        this->market_cap = market_cap;
    }

// constructor by object copy    
Ltda::Ltda(const Ltda &lt):
    LegalPerson(lt){
        this->partners = lt.partners;
        this->market_cap = lt.market_cap;
    }

// destructor    
Ltda::~Ltda(){
    for (auto& partner : this->partners) {
        delete[] partner;
    }
}

// procedure to print data
void Ltda::print(){
    LegalPerson::print();
    cout<<"Partners: "<<endl;
    for(const auto &partner: this->partners){
        cout<<"  -"<<partner<<"\n";
    }
    cout<<"Market Cap: "<<this->market_cap<<endl;
    cout<<"Benefits: "<<this->get_benefits()<<endl;
}

// function to calculate benefits
double Ltda::get_benefits(){
    return (this->market_cap)*(1 - this->get_tax());
}

//                  --- class SA ---

// constructor per default
SA::SA():
    LegalPerson(){
        stakeholders.clear();
        num_holders = 0;
        stock_price = 0.0;
    }

// constructor by parameters -> 2 levels of inheritance    
SA::SA(const char name[20], const char address[50], const char contact[30], 
            const char legal_code[5], double tax, int foundation_year, 
            vector<const char *> stakeholders, int num_holders, double stock_price):
    LegalPerson(name, address, contact, legal_code, tax, foundation_year){
        for(const auto &stakeholder: stakeholders){
            char *aux = new char[strlen(stakeholder)+1];
            strcpy(aux, stakeholder);
            this->stakeholders.push_back(aux);
        }

        this->num_holders = num_holders;
        this->stock_price = stock_price;
    }

// constructor by object copy    
SA::SA(const SA &sa):    
    LegalPerson(sa){
        this->stakeholders = sa.stakeholders;
        this->num_holders = sa.num_holders;
        this->stock_price = sa.stock_price;
    }

// destructor    
SA::~SA(){
    for (auto &stakeholder : this->stakeholders) {
        delete[] stakeholder;
    }
}

// getter function
int SA::get_holders(){
    return this->num_holders;
}

// getter function
double SA::get_stock_price(){
    return this->stock_price;
}

// procedure to print data
void SA::print(){
    LegalPerson::print();
    cout<<"Stakeholders: "<<endl;
    for(const auto &stakeholder: this->stakeholders){
        cout<<"  -"<<stakeholder<<"\n";
    }
    cout<<"Number of Holders: "<<this->num_holders<<endl;
    cout<<"Stock Price: "<<this->stock_price<<endl;
    cout<<"Benefits: "<<this->get_benefits()<<endl;
}

// function to calculate benefits
double SA::get_benefits(){
    return (this->get_holders() * this->get_stock_price())*(1 - this->get_tax());
}
