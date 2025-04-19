#include <iostream>
#include <cmath>
#include "liblayer.h"

using namespace std;

int NeuronLayer::SIZE = 3;

NeuronLayer::NeuronLayer(){
    this->layer = new Neuron[SIZE];    
    this->global_output = 0.0;
}

NeuronLayer::NeuronLayer(const NeuronLayer &net){
    delete[] this->layer;
    this->SIZE = net.SIZE;
    this->layer = new Neuron[SIZE];
    this->global_output = net.global_output;
        
    for(int i=0; i<net.SIZE; i++){
        this->layer[i] = net.layer[i];
    }
}

void NeuronLayer::set_vec_neurons(){
    double x, y, z;
    for(int i=0; i<this->SIZE; i++){
        cout<<"-- Neuron "<<i+1<<" --"<<endl;
        cout<<"X: "; cin>>x;
        cout<<"Y: "; cin>>y;
        cout<<"Z: "; cin>>z;
        this->layer[i] = Neuron(x, y, z);
    }
}

void NeuronLayer::process_layer(){
    for(int i=0; i<this->SIZE; i++){
        this->layer[i].fit();
        this->global_output += this->layer[i].output;
    }

    this->global_output /= this->SIZE;
}

void NeuronLayer::print_layer(){    
    for(int i=0; i<this->SIZE; i++){
        cout<<"** Neuron "<<i+1<<" **"<<endl;
        this->layer[i].print();
    }
    cout<<"Global Output: "<<this->global_output<<endl;
}
