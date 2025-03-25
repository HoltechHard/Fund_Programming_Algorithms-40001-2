/*
    Implementation of classes:
    - Natural Person
    - Employer
    - Supervisor
*/

#include <iostream>
#include "libnatural_p.h"

using namespace std;

//              --- class NaturalPerson ---

// constructor per default
NaturalPerson::NaturalPerson(): 
    Person(){
        strcpy(this->passport, "");
        this->age = 0;
    }

// constructor by parameters -> 1 level of inheritance
NaturalPerson::NaturalPerson(const char name[20], const char address[50], const char contact[30],
                                const char passport[10], int age):
    Person(name, address, contact){
        strcpy(this->passport, passport);
        this->age = age;
    }

// constructor by object copy    
NaturalPerson::NaturalPerson(const NaturalPerson &np):
    Person(np){
        strcpy(this->passport, np.passport);
        this->age = np.age;
    }

// destructor    
NaturalPerson::~NaturalPerson(){}

// procedure to print data
void NaturalPerson::print(){
    Person::print();
    cout<<"Passport: "<<this->passport<<endl;
    cout<<"Age: "<<this->age<<endl;
}


//                --- class Employer ---

// constructor per default
Employer::Employer(): 
    NaturalPerson(){
        strcpy(this->company, "");
        this->salary = 0.0;
    }

// constructor by parameters -> 2 levels inheritance
Employer::Employer(const char name[20], const char address[50], const char contact[30], 
                        const char passport[10], int age,
                        const char company[20], double salary):
    NaturalPerson(name, address, contact, passport, age){
        strcpy(this->company, company);
        this->salary = salary;    
    }

// constructor by object copy    
Employer::Employer(const Employer &e):
    NaturalPerson(e){
        strcpy(this->company, e.company);
        this->salary = e.salary;
    }

// destructor    
Employer::~Employer(){}

// procedure to print data
void Employer::print(){
    NaturalPerson::print();
    cout<<"Company: "<<this->company<<endl;
    cout<<"Salary: "<<this->salary<<endl;
}    


//                --- class Supervisor ---

// constructor per default
Supervisor::Supervisor(): 
    NaturalPerson(){
        strcpy(this->department, "");
        strcpy(this->position, "");
        this->team_size = 0;
    }

// constructor by parameters -> 2 levels of inheritance    
Supervisor::Supervisor(const char name[20], const char address[50], const char contact[30],
                            const char passport[10], int age, 
                            const char department[20], const char position[30], int team_size):
    NaturalPerson(name, address, contact, passport, age){
        strcpy(this->department, department);
        strcpy(this->position, position);
        this->team_size = team_size;
    }

// constructor by object copy    
Supervisor::Supervisor(const Supervisor &s):
    NaturalPerson(s){
        strcpy(this->department, s.department);
        strcpy(this->position, s.position);
        this->team_size = s.team_size;
    }

// destructor    
Supervisor::~Supervisor(){}

// procedure to printdata
void Supervisor::print(){
    NaturalPerson::print();
    cout<<"Department: "<<this->department<<endl;
    cout<<"Position: "<<this->position<<endl;
    cout<<"Team Size: "<<this->team_size<<endl;
}
