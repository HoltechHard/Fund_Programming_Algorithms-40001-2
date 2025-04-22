#include <iostream>
#include "libnode.h"

using namespace std;

Node::Node(){
    this->value = 0;
    this->ptrLeft = nullptr;
    this->ptrRight = nullptr;
}

Node::Node(int val){
    this->value = val;
    this->ptrLeft = nullptr;
    this->ptrRight = nullptr;
}

Node::Node(const Node &child){
    this->value = child.value;
    this->ptrLeft = child.ptrLeft;
    this->ptrRight = child.ptrRight;
}

Node::~Node(){
    this->ptrLeft = nullptr;
    this->ptrRight = nullptr;
}

void Node::setValue(int val){
    this->value = val;
}

int Node::getValue() const{
    return this->value;
}

void Node::setLeft(Node *left){
    this->ptrLeft = left;
}

Node *Node::getLeft(){
    return this->ptrLeft;
}

void Node::setRight(Node *right){
    this->ptrRight = right;
}

Node *Node::getRight(){
    return this->ptrRight;
}
