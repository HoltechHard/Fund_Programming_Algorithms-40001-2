#pragma once
#include <iostream>

using namespace std;

class Point{

    public:
        int x, y;

    public:
        Point();
        Point(int x, int y);
        Point(const Point &p);
        bool operator==(const Point &p) const;
        friend istream &operator>>(istream &os, Point &p);
        friend ostream &operator<<(ostream &os, const Point &p);        
};
