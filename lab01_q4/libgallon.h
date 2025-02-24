/*
    Template for class Gallon
*/

#pragma once

class Gallon{

    private:
        double volume, alcohol;

    public:
        Gallon(double volume=0.0, double alcohol=0.0);
        Gallon(const Gallon &g);
        ~Gallon();
        void set_volume(double volume);
        double get_volume();
        void set_alcohol(double alcohol);
        double get_alcohol();
        double get_water();
        double get_concentration();
        void mixture(Gallon &g, double vol_transf);
        void print();

};

void transfer(Gallon &g1, Gallon &g2);
