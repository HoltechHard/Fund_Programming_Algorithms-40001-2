#pragma once

class Node{

    private:
        int value;
        Node *next;

    public:
        Node();
        Node(int val);
        Node(const Node &child);
        ~Node();
        void setValue(int val);
        int getValue() const;
        void setNext(Node *next);
        Node *getNext();

    friend class LinkedList;
};
