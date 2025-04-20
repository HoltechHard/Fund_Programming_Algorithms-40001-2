#include <iostream>
#include <cstring>
#include "libcluster.h"

using namespace std;

int main(){

    // build cluster objects
    Cluster primary, replica;
    primary = Cluster("trades.org.primary", 2, 24, "192.168.10.0");
    replica = Cluster("trades.org.replica", 3, 24, "192.168.20.0");

    // insert nodes for each cluster
    cout<<endl<<"Cluster "<<primary.get_name()<<endl;
    cout<<"----------------------------"<<endl;
    primary.set_vec_servers();
    cout<<endl<<"Cluster "<<replica.get_name()<<endl;
    cout<<"----------------------------"<<endl;
    replica.set_vec_servers();

    // print nodes for each cluster
    cout<<"--- Primary cluster ---"<<endl;
    primary.print_cluster();
    cout<<"--- Replica cluster ---"<<endl;
    replica.print_cluster();

    return 0;
}
