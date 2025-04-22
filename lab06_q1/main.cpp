#include <iostream>
#include "libbtree.h"

using namespace std;

int main(){

    BinaryTree tree;

    // insert
    tree.insert(10);
    tree.insert(5);
    tree.insert(15);
    tree.insert(3);
    tree.insert(7);
    tree.insert(12);
    tree.insert(18);
    tree.insert(13);

    // print
    tree.print();

    // tree values
    cout << "Number of nodes: " << tree.count() << endl;
    cout << "Sum of all values: " << tree.sum() << endl;

    // Search for values
    int search_val = 7;
    cout << "Value: " << search_val << " is "<<(tree.search(search_val) ? "found" : "not found")<<endl;

    int search_val2 = 16;
    cout << "Value: " << search_val2 << " is "<<(tree.search(search_val2) ? "found" : "not found")<<endl;
    
    return 0;
}