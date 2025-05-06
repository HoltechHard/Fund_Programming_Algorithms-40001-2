#include <iostream>
#include "libnode.h"

using namespace std;

Node::Node(){
    this->data = Circle();
    this->ptrPrev = nullptr;
    this->ptrNext = nullptr;
}

Node::Node(Node *prev, const Circle &data){
    this->ptrPrev = prev;
    this->data = data;
    this->ptrNext = nullptr;

    if(prev != nullptr)
        prev->ptrNext = this;
}

Node::~Node(){
    this->ptrPrev = nullptr;
    this->ptrNext = nullptr;
}

void Node::setData(const Circle &data){
    this->data = data;
}

Circle Node::getData() const{
    return this->data;
}

void Node::setPrevious(Node *prev){
    this->ptrPrev = prev;
}

Node *Node::getPrevious(){
    return this->ptrPrev;
}

void Node::setNext(Node *next){
    this->ptrNext = next;
}

Node *Node::getNext(){
    return this->ptrNext;
}
