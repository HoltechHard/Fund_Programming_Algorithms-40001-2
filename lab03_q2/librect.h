/*
    Template of class Rectangle
*/

#pragma once
#include "libshape.h"

class Rectangle: public Shape{

    public:
        int left, right, bottom, top;

    public:
        Rectangle(int left=0, int right=0, int bottom=0, int top=0, COLOR = RED);
        Rectangle(const Rectangle &r);
        ~Rectangle();
        void normalize_axis(int &x1, int &x2);
        void normalize_all();
        void inflate_axis(int x, int y);
        void inflate_all(int left, int right, int bottom, int top);
        void set_all(int left, int right, int bottom, int top);
        void get_all(int &left, int &right, int &bottom, int &top);
        // polymorfism to virtual methods
        double calculate_perimeter();
        double calculate_area();
        void describe() const;
        void inflate(int d);
};

Rectangle build_rectangle(Rectangle r1, Rectangle r2);
