/*
    Implementation of class Person
*/

#include <iostream>
#include "libperson.h"

using namespace std;

// constructor per default
Person::Person(){
    strcpy(this->name, "");
    strcpy(this->address, "");
    strcpy(this->contact, "");
}

// constructor by parameters
Person::Person(const char name[20], const char address[50], const char contact[30]){
    strcpy(this->name, name);
    strcpy(this->address, address);
    strcpy(this->contact, contact);
}

// constructor by object copy
Person::Person(const Person &p){
    strcpy(this->name, p.name);
    strcpy(this->address, p.address);
    strcpy(this->contact, p.contact);
}

// destructor
Person::~Person(){}

// procedure to print data
void Person::print(){
    cout<<"Name: "<<this->name<<endl;
    cout<<"Address: "<<this->address<<endl;
    cout<<"Contact: "<<this->contact<<endl;
}
