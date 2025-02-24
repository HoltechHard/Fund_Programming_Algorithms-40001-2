/*
    Implementation of class Gallon
*/

#include <iostream>
#include "libgallon.h"

using namespace std;

// constructor by parameters with default values
Gallon::Gallon(double volume, double alcohol){
    this->volume = volume;
    this->alcohol = alcohol;
}

// construct by object copy with reference
Gallon::Gallon(const Gallon &g){
    this->volume = g.volume;
    this->alcohol = g.alcohol;
}

// destructor
Gallon::~Gallon(){}

// setter for attribute volume
void Gallon::set_volume(double volume){
    this->volume = volume;
}

// getter for attribute volume
double Gallon::get_volume(){
    return this->volume;
}

// setter for attribute alcohol
void Gallon::set_alcohol(double alcohol){
    this->alcohol = alcohol;
}

// getter for attribute alcohol
double Gallon::get_alcohol(){
    return this->alcohol;
}

// function to calculate the volume of water
double Gallon::get_water(){
    return this->volume - this->alcohol;
}

// function to calculate concentration of alcohol
double Gallon::get_concentration(){
    return this->get_alcohol()/this->get_volume();
}

// procedure to extract liquid from 1st gallon and add to 2nd gallon
void Gallon::mixture(Gallon &g, double vol_transf){
    double conc;

    // get concentration level of currently gallon
    conc = this->get_concentration();

    // 1st gallon => extract liquid through the bottle
    this->set_alcohol(this->alcohol - conc * vol_transf);   
    this->set_volume(this->volume - vol_transf);

    // 2nd gallon => add extracted liquid through the bottle
    g.set_alcohol(g.alcohol + conc * vol_transf);
    g.set_volume(g.volume + vol_transf);
}

// procedure to print gallon data
void Gallon::print(){
    cout<<"Volume:"<<this->get_volume()<<endl;
    cout<<"Alcohol: "<<this->get_alcohol()<<endl;
    cout<<"Water: "<<this->get_water()<<endl;
}

// procedure to 2-step transfer liquid g1->g2 and g2->g1
void transfer(Gallon &g1, Gallon &g2){
    g1.mixture(g2, 1.0);
    g2.mixture(g1, 1.0);
}
