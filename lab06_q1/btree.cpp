#include <iostream>
#include "libbtree.h"

using namespace std;

BinaryTree::BinaryTree(){
    this->root = nullptr;
    this->size = 0;
}

int BinaryTree::get_size() const{
    return this->size;
}

void BinaryTree::insertNode(Node *&current, int val){
    if(current == nullptr){
        current = new Node(val);
        this->size++;
    }else if(val < current->getValue()){
        insertNode(current->ptrLeft, val);
    }else if(val > current->getValue()){
        insertNode(current->ptrRight, val);
    }else{
        cout<<"Value already exists in the tree"<<endl;
    }
}

Node *BinaryTree::findNode(Node *current, int val) const{
    if(current == nullptr){
        return nullptr;
    } else if(val == current->getValue()){
        return current;
    }else if(val < current->getValue()){
        return findNode(current->getLeft(), val);
    }else{
        return findNode(current->getRight(), val);
    }
}

int BinaryTree::countNodes(const Node *current) const{
    if(current == nullptr)
        return 0;

    return 1 + countNodes(current->ptrLeft) + countNodes(current->ptrRight);
}

int BinaryTree::sumNodes(const Node *current) const{
    if(current == nullptr)
        return 0;    

    return current->getValue() + sumNodes(current->ptrLeft) + sumNodes(current->ptrRight);
}

void BinaryTree::showTree(const Node *current) const{
    if(current == nullptr)
        return;
    
    cout<<current->getValue()<<" => ";
    showTree(current->ptrLeft);
    showTree(current->ptrRight);
    cout<<endl;
}

int BinaryTree::count() const{
    return countNodes(this->root);
}

int BinaryTree::sum() const{
    return sumNodes(this->root);
}

void BinaryTree::print(){
    cout<<"Tree elements: "<<endl;
    showTree(this->root);
    cout<<endl;
}

void BinaryTree::insert(int val){
    insertNode(this->root, val);
}

bool BinaryTree::search(int val) const{
    return findNode(this->root, val)!= nullptr;
}
