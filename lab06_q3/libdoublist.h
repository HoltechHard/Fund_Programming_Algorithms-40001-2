#pragma once
#include <iostream>
#include "libnode.h"

using namespace std;

class DoubleLinkedList{

    private:
        Node head;
        Node tail;
        unsigned int size;

    public:
        DoubleLinkedList();
        DoubleLinkedList(const DoubleLinkedList &list);
        DoubleLinkedList(DoubleLinkedList &&list);
        ~DoubleLinkedList();
        void push_front(const Circle &c);
        void push_back(const Circle &c);        
        bool update(Circle &old_circle, Circle &new_circle);
        bool remove(Circle &circle);
        friend istream &operator>>(istream &os, DoubleLinkedList &list);
        friend ostream &operator<<(ostream &os, const DoubleLinkedList &list);
};
