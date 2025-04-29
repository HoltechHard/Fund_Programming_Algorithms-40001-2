#pragma once 
#include "libnode.h"

class LinkedList{

    private:
        Node *head;
        unsigned int size;

    private:
        void insertNode(Node *&current, int val);
        Node *findNode(Node *current, int val) const;
        Node *findPrevious(Node *current, int val) const;       
        int countNodes(const Node *current) const;
        int sumNodes(const Node *current) const;
        void showList(const Node *current) const;

    public:
        LinkedList();
        int get_size() const;
        void insert(int val);
        bool search(int val) const;
        bool update(int old_val, int new_val);
        bool remove(int val);
        int count() const;
        int sum() const;
        void print();        
};
