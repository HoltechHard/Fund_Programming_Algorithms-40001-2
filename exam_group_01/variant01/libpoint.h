#pragma once

enum SPECTRUM {RED, BLUE};

class HasselmannPoint{

    private:
        double x, y;
        bool z;
        enum SPECTRUM color;

    public:
        HasselmannPoint();
        HasselmannPoint(double x, double y, bool z, enum SPECTRUM color);
        HasselmannPoint(const HasselmannPoint &hp);
        void setX(double x);
        double getX();
        void setY(double y);
        double getY();
        void setZ(bool z);
        bool getZ();
        void setColor(enum SPECTRUM color);
        enum SPECTRUM getColor();
        void print();
        friend HasselmannPoint operator+(HasselmannPoint &p1, HasselmannPoint &p2);
        friend HasselmannPoint operator*(HasselmannPoint &p1, HasselmannPoint &p2);
};
