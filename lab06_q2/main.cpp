#include <iostream>
#include "liblist.h"

using namespace std;

int main(){

    LinkedList list;

    // insert values
    list.insert(10);
    list.insert(5);
    list.insert(15);
    list.insert(3);
    list.insert(7);
    list.insert(12);
    list.insert(18);
    list.insert(13);

    // print
    cout<<endl<<"--- Original list ---"<<endl;
    list.print();

    // list values
    cout<<"Number of nodes: "<<list.count()<<endl;
    cout<<"Sum of all values: "<<list.sum()<<endl;

    // Search for values
    int search_val = 7;
    cout << "Value: " << search_val << " is "<<(list.search(search_val) ? "found" : "not found")<<endl;

    int search_val2 = 16;
    cout << "Value: " << search_val2 << " is "<<(list.search(search_val2) ? "found" : "not found")<<endl;

    // Update value
    cout<<endl<<"--- Update list ---"<<endl;
    cout<<"Editing value 18 ==> 22"<<endl;
    list.update(18, 22);    
    list.print();
    cout<<"Sum of values = "<<list.sum()<<endl;
    cout<<"Number of nodes = "<<list.count()<<endl;

    // Remove value
    cout<<endl<<"--- Remove list ---"<<endl;
    cout<<"Removing values 3 and 13"<<endl;
    list.remove(3);
    list.remove(13);
    list.print();
    cout<<"Sum of values = "<<list.sum()<<endl;
    cout<<"Number of nodes = "<<list.count()<<endl;

    return 0;
}
