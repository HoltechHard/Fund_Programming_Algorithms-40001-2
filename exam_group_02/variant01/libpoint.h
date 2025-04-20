#pragma once

class RotatorPoint{

    private:
        double r, s, theta;
    
    public:
        RotatorPoint();
        RotatorPoint(double r, double s, double theta);
        RotatorPoint(const RotatorPoint &rp);
        void setR(double r);
        double getR();
        void setS(double s);
        double getS();
        void setTheta(double theta);
        double getTheta();
        void print();
        friend RotatorPoint &operator+=(RotatorPoint &rp1, RotatorPoint &rp2);
        friend RotatorPoint &operator*=(RotatorPoint &rp1, RotatorPoint &rp2);
};
