#include <iostream>
#include "libcircle.h"
#include "libdoublist.h"

using namespace std;

DoubleLinkedList::DoubleLinkedList(){
    this->head.data = Circle();
    this->head.ptrPrev = nullptr;
    this->head.ptrNext = &this->tail;
    this->tail.data = Circle();
    this->tail.ptrPrev = &this->head;
    this->tail.ptrNext = nullptr;
    this->size = 0;
}

DoubleLinkedList::DoubleLinkedList(const DoubleLinkedList &list){
    Node *current = list.head.ptrNext;

    while(current!= &list.tail){
        push_back(current->data);
        current = current->ptrNext;
    }
}

DoubleLinkedList::DoubleLinkedList(DoubleLinkedList &&list){
    this->head = list.head;
    this->tail = list.tail;
    this->size = list.size;
    list.head.ptrNext = &list.tail;
    list.tail.ptrPrev = &list.head;
    list.size = 0;
}

DoubleLinkedList::~DoubleLinkedList(){
    Node *current = head.ptrNext;

    while(current != &tail){
        Node *temp = current;
        current = current->ptrNext;
        delete temp;
    }

    this->head.ptrNext = &this->tail;
    this->tail.ptrPrev = &this->head;
}

void DoubleLinkedList::push_front(const Circle &c){
    Node *oldCurrent = this->head.ptrNext;
    Node *newNode = new Node(&this->head, c);
    newNode->ptrNext = oldCurrent;
    oldCurrent->ptrPrev = newNode;
    this->head.ptrNext = newNode;    
    this->size++;
}

void DoubleLinkedList::push_back(const Circle &c){
    Node *oldCurrent = this->tail.ptrPrev;
    Node *newNode = new Node(oldCurrent, c);
    newNode->ptrNext = &this->tail;
    oldCurrent->ptrNext = newNode;
    this->tail.ptrPrev = newNode;
    this->size++;
}

bool DoubleLinkedList::update(Circle &old_circle, Circle &new_circle){
    Node *current = head.ptrNext;
    
    while(current != &tail){
        if(current->data == old_circle){
            current->data = new_circle;
            return true;
        }
        current = current->ptrNext;
    }

    return false;
}

bool DoubleLinkedList::remove(Circle &circle){
    Node *current = head.ptrNext;

    while (current != &tail) {
        if (current->data == circle) {
            // Update neighbors
            current->ptrPrev->ptrNext = current->ptrNext;
            current->ptrNext->ptrPrev = current->ptrPrev;
            
            // Delete node
            delete current;
            size--;
            return true;
        }
        current = current->ptrNext;
    }
    
    return false;
}

istream &operator>>(istream &os, DoubleLinkedList &list){
    Circle c;

    while(os >> c){
        list.push_back(c);
    }

    return os;
}

ostream &operator<<(ostream &os, const DoubleLinkedList &list){
    Node head = list.head;
    Node *current = head.getNext();

    if(current == &list.tail){
        os << "List is empty" << endl;
        return os;
    }

    os << "HEAD \n <==> " << endl;

    while(current!= &list.tail){
        os << current->getData() <<endl;
        os << " <==> " <<endl;
        current = current->getNext();
    }

    os << "TAIL" << endl;
    return os;    
}
