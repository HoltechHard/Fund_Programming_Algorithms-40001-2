/*
    Implementation of class VectClient
*/

#include <iostream>
#include <cstring>
#include <iomanip>
#include "libvect.h"

using namespace std;

//          --- Global Operations ---

// procedure to define dynamically number of clients
void input_max_clients(int &n){
    do{
        cout<<"Max #clients: "; cin>>n;
    }while(n<=0);
}


//          --- Operations for class VectClient ---

// constructor by default
VectClient::VectClient(){    
    this->size = 0;
    this->index = 0;
    this->list = nullptr;
}

// constructor by parameters
VectClient::VectClient(int n){
    this->size = 0;
    this->index = 0;
    this->list = new Client[n];
}

// constructor by object copy
VectClient::VectClient(const VectClient &v){
    this->size = v.size;
    this->index = v.index;
    this->list = new Client[v.size];

    for(int i=0; i<v.size; i++){
        this->list[i] = v.list[i];
    }
}

// destructor
VectClient::~VectClient(){
    delete[] this->list;
}

// procedure for menu presentation
void VectClient::menu(int &opc){
    cout<<left;
    cout<<"--------------------"<<endl;
    cout<<"MENU OF CLIENTS"<<endl;
    cout<<"--------------------"<<endl;
    cout<<"[1]. Insert client"<<endl;
    cout<<"[2]. Print list of clients"<<endl;
    cout<<"[3]. Search client by name"<<endl;
    cout<<"[4]. Update client"<<endl;
    cout<<"[5]. Delete client"<<endl;
    cout<<"[6]. Exit"<<endl;
    cout<<"---------------------------------"<<endl;
    cout<<"Enter option: "; cin>>opc;
}

// setter number of clients
void VectClient::set_size(int n){
    this->size = n;
}

// getter number of clients
int VectClient::get_size(){
    return this->size;
}

// procedure to insert a new client
void VectClient::insert_client(){
    cout<<"Insert new client..."<<endl;
    this->index++;
    this->list[this->size].code = this->index;
    cout<<"Name: "; cin>> this->list[this->size].name;
    
    do{
        cout<<"Age: "; cin>> this->list[this->size].age;
    }while(this->list[this->size].age<18 || this->list[this->size].age>65);
    
    do{
        cout<<"Sex: "; cin>> this->list[this->size].sex;
    }while(this->list[this->size].sex != 'M' && this->list[this->size].sex != 'F');
    
    do{
        cout<<"Salary: "; cin>> this->list[this->size].salary;
    }while(this->list[this->size].salary<100000 || this->list[this->size].salary>500000);
    
    this->size++;
    this->set_size(this->size);
}

// getter client
Client VectClient::get_client(int pos){
    return this->list[pos];
}

// procedure to print list of clients
void VectClient::print_clients(){
    cout<<left;
    cout<<setw(10)<<"code"<<
            setw(10)<<"name"<<
            setw(10)<<"age"<<
            setw(10)<<"sex"<<
            setw(10)<<"salary"<<endl;
    cout<<"------------------------------------------------"<<endl;

    for(int i=0; i<this->size; i++){
        this->list[i].print();
    }
}

// function to search client by name
int VectClient::search_by_name(){
    int pos;
    char name[50];
    cout<<"Search Name: "; cin>>name;

    for(int i=0; i<this->get_size(); i++){
        if(strcmp(this->list[i].name, name) == 0){
            pos = i;
            return pos;
        }
    }
    
    return -1;
}

// procedure to update a client
void VectClient::update_client(){
    int pos;
    pos = this->search_by_name();

    if(pos != -1){        
        Client aux = this->get_client(pos);

        cout<<"Update client..."<<endl;
        aux.code = pos+1;        
        cout<<"Name: "; cin>> aux.name;
        do{
            cout<<"Age: "; cin>> aux.age;
        }while(aux.age<18 || aux.age>65);
        
        do{
            cout<<"Sex: "; cin>> aux.sex;
        }while(aux.sex != 'M' && aux.sex != 'F');
        
        do{
            cout<<"Salary: "; cin>> aux.salary;
        }while(aux.salary<100000 || aux.salary>500000);
        
        this->list[pos] = aux;
        cout<<"Client edited!"<<endl;
    }else{
        cout<<"Client not found!"<<endl;
    }    
}

// procedure to delete a client
void VectClient::delete_client(){
    int pos;
    pos = this->search_by_name();

    if(pos!= -1){
        for(int i=pos; i<this->get_size()-1; i++)
            this->list[i] = this->list[i+1];        
        this->size--;
        this->set_size(this->size);
        cout<<"Client deleted!"<<endl;
    }else{
        cout<<"Client not found!"<<endl;
    }
}
