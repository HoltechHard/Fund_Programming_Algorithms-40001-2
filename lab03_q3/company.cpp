/*
    Implementation of classes:
    - Government Entity
    - Public Company
*/

#include <iostream>
#include <cstring>
#include "libcompany.h"

using namespace std;

//                --- class GovernmentEntity ---

// constructor by default
GovernmentEntity::GovernmentEntity(){
    strcpy(this->code, "");
    strcpy(this->description, "");
    this->year_budget = 0.0;
}

// constructor by parameters
GovernmentEntity::GovernmentEntity(const char code[3], const char description[20], double year_budget){
    strcpy(this->code, code);
    strcpy(this->description, description);
    this->year_budget = year_budget;
}

// construtor by object copy
GovernmentEntity::GovernmentEntity(const GovernmentEntity &g){
    strcpy(this->code, g.code);
    strcpy(this->description, g.description);
    this->year_budget = g.year_budget;
}

// destructor
GovernmentEntity::~GovernmentEntity(){}

// procedure to print data
void GovernmentEntity::print(){
    cout << "Code: " << this->code << endl;
    cout << "Description: " << this->description << endl;
    cout << "Year Budget: " << this->year_budget << endl;
}


//                  --- class PublicCompany ---

// constructor by default
PublicCompany::PublicCompany():
    SA(), GovernmentEntity(){
        strcpy(this->public_service, "");
    }

// constructor by parameters -> 3 levels of inheritance + multiple inheritance
PublicCompany::PublicCompany(const char name[20], const char address[50], const char contact[30], 
                                const char legal_code[5], double tax, int foundation_year, 
                                vector<const char *> stakeholders, int num_holders, double stock_price, 
                                const char code[3], const char description[20], double year_budget, 
                                const char public_service[20]):
    SA(name, address, contact, legal_code, tax, foundation_year, stakeholders, num_holders, stock_price),
    GovernmentEntity(code, description, year_budget){
        strcpy(this->public_service, public_service);
    }

// constructor by object copy    
PublicCompany::PublicCompany(const PublicCompany &pc):
    SA(pc), GovernmentEntity(pc){
        strcpy(this->public_service, pc.public_service);       
    }

// destructor    
PublicCompany::~PublicCompany(){}

// procedure to print data
void PublicCompany::print(){    
    SA::print();
    GovernmentEntity::print();
    cout << "Public Service: " << this->public_service << endl;
}
