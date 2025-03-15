/*
    Implementation of class Client
*/

#include <iostream>
#include <cstring>
#include <iomanip>
#include "libclient.h"

using namespace std;

//          --- Operations for class Client ---

// constructor by default
Client::Client(){
    this->code = -1;
    strcpy(this->name, "");
    this->age = 0;
    this->sex = '\0';
    this->salary = 0.0;
}

// constructor by parameters
Client::Client(int code, char name[50], int age, char sex, double salary){
    this->code = code;
    strcpy(this->name, name);
    this->age = age;
    this->sex = sex;
    this->salary = salary;
}

// constructor by object copy
Client::Client(const Client &c){
    this->code = c.code;
    strcpy(this->name, c.name);
    this->age = c.age;
    this->sex = c.sex;
    this->salary = c.salary;
}

// destructor
Client::~Client(){}

// print client data
void Client::print(){

    cout<<setw(10)<<this->code<<
            setw(10)<<this->name<<
            setw(10)<<this->age<<
            setw(10)<<(this->sex == 'M'? "male":"female")<<
            setw(10)<<this->salary<<endl;
}
