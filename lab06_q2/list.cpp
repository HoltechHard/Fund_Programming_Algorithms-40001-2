#include <iostream>
#include "liblist.h"

using namespace std;

LinkedList::LinkedList(){
    this->head = nullptr;
    this->size = 0;
}

int LinkedList::get_size() const{
    return this->size;
}

void LinkedList::insertNode(Node *&current, int val){
    if (current == nullptr) {
        current = new Node(val);
        this->size++;
    }else {
        insertNode(current->next, val);
    }
}

Node *LinkedList::findNode(Node *current, int val) const{
    if(current == nullptr){
        return nullptr;
    }else if(val == current->getValue()){
        return current;
    }else{
        return findNode(current->getNext(), val);
    }
}

Node *LinkedList::findPrevious(Node *current, int val) const{
    if(current == nullptr || current->next == nullptr){
        return nullptr;
    }else if(current->next->getValue() == val){
        return current;
    }

    return findPrevious(current->next, val);
}

int LinkedList::countNodes(const Node *current) const{
    if(current == nullptr)
        return 0;
    
    return 1 + countNodes(current->next);
}

int LinkedList::sumNodes(const Node *current) const{
    if(current == nullptr)
        return 0;
    
    return current->getValue() + sumNodes(current->next);
}

void LinkedList::showList(const Node *current) const{
    if(current == nullptr)
        return;        
    cout<<current->getValue()<<" => ";
    showList(current->next);
}

void LinkedList::insert(int val){
    insertNode(this->head, val);
}

bool LinkedList::search(int val) const{
    return findNode(this->head, val)!= nullptr;
}

bool LinkedList::update(int old_val, int new_val){
    Node *node = findNode(this->head, old_val);
    if(node != nullptr){
        node->setValue(new_val);
        return true;
    }
    return false;
}

bool LinkedList::remove(int val){
    if(this->head == nullptr){
        return false;
    }

    Node *previous = findPrevious(head, val);
    if(previous != nullptr){
        Node *temp = previous->next;
        previous->setNext(temp->next);
        delete temp;
        this->size--;
        return true;
    }

    return false;
}

int LinkedList::count() const{
    return countNodes(this->head);
}

int LinkedList::sum() const{
    return sumNodes(this->head);
}

void LinkedList::print(){    
    showList(this->head);
    cout<<endl;
}
