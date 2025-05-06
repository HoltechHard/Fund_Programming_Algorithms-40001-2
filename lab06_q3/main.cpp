#include <iostream>
#include "libcircle.h"
#include "libdoublist.h"

using namespace std;

int main(){

    DoubleLinkedList list;

    // insert elements to list
    list.push_back(Circle(Point(1, 2), 5));
    list.push_front(Circle(3));

    Circle c(Point(2, 8), 10);
    list.push_back(c);

    list.push_front(Circle(Point(-1, -4), 4));

    // print elements of list
    cout<<endl<<"--- Elements of double linked list ---"<<endl;
    cout << list;

    // update
    Circle new_c = Circle(Point(-1, -1), 8);
    list.update(c, new_c);
    cout<<endl<<"--- Updated double linked list ---"<<endl;
    cout<<"circle C(2, 8), r=10 updated to C(-1, -1), r=8"<<endl;
    cout << list;

    // remove
    Circle rem_c = Circle(3);
    list.remove(rem_c);
    cout<<endl<<"--- Delete double linked list ---"<<endl;
    cout<<"circle C(0, 0), r=3 deleted"<<endl;
    cout << list;

    return 0;
}
