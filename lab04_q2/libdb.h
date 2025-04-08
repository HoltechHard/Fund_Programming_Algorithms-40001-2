/*
    Template of classes:
    - Data
    - Dictionary
    - Database
*/

#pragma once
#include "libstring.h"

using namespace std;

enum SEX {MALE, FEMALE};

// definition of class Data
class Data{
    public:
        MyString position;
        int age;
        SEX sex;
        double salary;

    public:
	    Data();
	    Data(const MyString &position, int age, SEX sex, double salary);
	    friend ostream &operator<<(ostream &os, const Data &data);
};

// definition of class Dictionary
class Dictionary{
    public:
        MyString key;
	    Data data;	

    public:
        Dictionary();
        Dictionary(const MyString &key, const Data &data);
	    friend ostream &operator<<(ostream &os, const Dictionary &pair);

	friend class DB;
};

// defintion of class DB
class DB{
    public:
	    static const int CHUNK_SIZE = 10;
	    Dictionary **pairs;
	    int size;
	    int capacity;

    public:
        DB();
        DB(const DB &db);
        DB(DB &&db);
        ~DB();
        DB &operator=(const DB &db);
        DB &operator=(DB &&db);    

        Data &operator[](const MyString &key);
        Data &Add(const MyString &key, const Data &data);
        void Remove(const MyString &key);
        friend ostream &operator<<(ostream &os, const DB &db);
};
