/*
    Template to class Point
*/

#pragma once 

class Point{

    private:
        int x, y;

    public:
        Point();
        Point(int x, int y);
        Point(const Point &p);
        // by reference
        Point &operator+=(const Point &p);
        Point &operator+=(int val);
        friend Point &operator-=(Point &p1, Point &p2);
        friend Point &operator-=(Point &p1, int val);
        // by value
        Point operator+(const Point &p) const;
        Point operator+(int val) const;
        friend Point operator-(Point &p1, Point &p2);
        friend Point operator-(Point &p1, int val);
        void print();
};
