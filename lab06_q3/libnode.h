#pragma once
#include <iostream>
#include "libcircle.h"

using namespace std;

class DoubleLinkedList;

class Node{

    private:
        Circle data;
        Node *ptrPrev;
        Node *ptrNext;

    public:
        Node();
        Node(Node *prev, const Circle &data);
        ~Node();
        void setData(const Circle &data);
        Circle getData() const;
        void setPrevious(Node *prev);
        Node *getPrevious();
        void setNext(Node *next);
        Node *getNext();
        friend class DoubleLinkedList;
};
