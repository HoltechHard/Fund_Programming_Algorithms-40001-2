#pragma once

class Node{

    private:
        int value;
        Node *ptrLeft;
        Node *ptrRight;

    public:
        Node();
        Node(int val);
        Node(const Node &child);
        ~Node();
        void setValue(int val);
        int getValue() const;
        void setLeft(Node *left);
        Node *getLeft();
        void setRight(Node *right);
        Node *getRight();

    friend class BinaryTree;
};
