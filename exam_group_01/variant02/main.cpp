#include <iostream>
#include "liblayer.h"

using namespace std;

int main(){
    NeuronLayer layer1, layer2;

    // insert each neuron
    cout<<"Insert layer 01:"<<endl;
    layer1.set_vec_neurons();
    cout<<"Insert layer 02:"<<endl;
    layer2.set_vec_neurons();

    // compute the output of each neuron and the global output
    layer1.process_layer();
    layer2.process_layer();

    // print the information of neuron layers
    cout<<endl<<"--- Neuron Layer 01 ---"<<endl;
    layer1.print_layer();

    cout<<endl<<"--- Neuron Layer 02 ---"<<endl;
    layer2.print_layer();    

    return 0;
}
