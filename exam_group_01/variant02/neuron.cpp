#include <iostream>
#include <cmath>
#include <ctime>
#include <cstdlib>
#include "libneuron.h"

using namespace std;

Neuron::Neuron(){
    this->x = 0.0;
    this->y = 0.0;
    this->z = 0.0;
    this->get_random_weights();
    this->output = 0.0;
}

Neuron::Neuron(double x, double y, double z){
    this->x = x;
    this->y = y;
    this->z = z;
    this->get_random_weights();
    this->output = 0.0;
}

Neuron::Neuron(const Neuron &n){
    this->x = n.x;
    this->y = n.y;
    this->z = n.z;

    for(int i=0; i<4; i++){
        this->W[i] = n.W[i];
    }

    this->output = n.output;
}

void Neuron::get_random_weights(){

    srand(static_cast<unsigned int>(time(0)));
    
    for(int i=0; i<4; i++){        
        this->W[i] = 1 + rand()%10;
    }
}

void Neuron::fit(){
    this->output += this->W[1]*this->x + this->W[2]*this->y + this->W[3]*this->z + this->W[0];
}

void Neuron::print(){
    cout<<"X: "<<this->x <<endl;
    cout<<"Y: "<<this->y <<endl;
    cout<<"Z: "<<this->z <<endl;

    cout<<"Weights: "<<endl;
    for(int i=0; i<4; i++){
        cout<<"W["<<i<<"]: "<<this->W[i]<<" ; ";
    }

    cout<<endl;
    cout<<"Output: "<<this->output<<endl;    
}
