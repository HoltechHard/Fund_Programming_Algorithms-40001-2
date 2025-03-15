/*
    Template for class Client
*/

#pragma once

class Client{
    public:
        int code;
        char name[50];
        int age;
        char sex;
        double salary;

    public:
        Client();
        Client(int code, char name[50], int age, char sex, double salary);
        Client(const Client &c);
        ~Client();
        void print();
};