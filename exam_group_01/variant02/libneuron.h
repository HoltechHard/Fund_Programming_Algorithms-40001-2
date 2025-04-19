#pragma once

class Neuron{
    public:
        double x, y, z;
        double W[4];
        double output;
    public:
        Neuron();
        Neuron(double x, double y, double z);
        Neuron(const Neuron &n);
        void get_random_weights();
        void fit();
        void print();
};
