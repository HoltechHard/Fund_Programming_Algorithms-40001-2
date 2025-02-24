/*
    Template for class Rectangle
*/

#pragma once

class Rectangle{

    public:
        int p_left, p_right, p_bottom, p_top;

    public:        
        Rectangle(int left=0, int right=0, int bottom=0, int top=0);
        Rectangle(const Rectangle &r);
        ~Rectangle();
        void normalize_axis(int &x1, int &x2);
        void normalize_all();
        void print();
        double calculate_perimeter();
        double calculate_area();
        void inflate_axis(int x, int y);
        void inflate_all(int left, int right, int bottom, int top);
        void set_all(int left, int right, int bottom, int top);
        void get_all(int &left, int &right, int &bottom, int &top);
};

Rectangle build_rectangle(Rectangle r1, Rectangle r2);
