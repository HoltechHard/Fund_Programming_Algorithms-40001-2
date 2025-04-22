#pragma once
#include "libnode.h"

class BinaryTree{

    private:
        Node *root;
        unsigned int size;

    private:
        void insertNode(Node *&current, int val);
        Node *findNode(Node *current, int val) const;
        int countNodes(const Node *current) const;
        int sumNodes(const Node *current) const;
        void showTree(const Node *current) const;

    public:
        BinaryTree();
        int get_size() const;
        int count() const;
        int sum() const;        
        void print();
        void insert(int val);
        bool search(int val) const;        
};
