#pragma once 
#include "libneuron.h"

class NeuronLayer{

    public:
        Neuron *layer;
        static int SIZE;
        double global_output;

    public:
        NeuronLayer();
        NeuronLayer(const NeuronLayer &net);
        void set_vec_neurons();
        void process_layer();
        void print_layer();
};
