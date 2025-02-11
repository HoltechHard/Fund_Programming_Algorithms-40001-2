/*
    Template for class Vector
*/

#pragma once

class Vector{
    public:
        double xi, yj, zk;

    public:
        Vector(double x=0, double y=0, double z=0);
        Vector(const Vector &v);
        ~Vector();
        static void input_vector(Vector &v);
        void print();
        double calculate_module();
        Vector unit_vector();
};

double scalar_product(Vector v1, Vector v2);
Vector vector_product(Vector v1, Vector v2);
double angle(Vector v1, Vector v2);
double euclidean_dist(Vector v1, Vector v2);
double manhattan_dist(Vector v1, Vector v2);
