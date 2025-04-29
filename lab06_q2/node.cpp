#include <iostream>
#include "libnode.h"

using namespace std;

Node::Node(){
    this->value = 0;
    this->next = nullptr;
}

Node::Node(int val){
    this->value = val;
    this->next = nullptr;
}

Node::Node(const Node &child){
    this->value = child.value;
    this->next = child.next;
}

Node::~Node(){
    this->next = nullptr;
}

void Node::setValue(int val){
    this->value = val;
}

int Node::getValue() const{
    return this->value;
}

void Node::setNext(Node *next){
    this->next = next;
}

Node *Node::getNext(){
    return this->next;
}
