#include <iostream>
#include <cstring>
#include <iomanip>
#include "libcluster.h"

using namespace std;

Cluster::Cluster(){
    strcpy(this->name, "trades.org");
    this->total_nodes = 0;
    this->max_capacity = 0;
    strcpy(this->ip, "192.168.1.0/32");
    this->cluster = nullptr;
}

Cluster::Cluster(const char *name, int total_nodes, int max_capacity, const char *ip){
    char ip_aux[2];
    strcpy(this->name, name);
    this->total_nodes = total_nodes;
    this->max_capacity = max_capacity;
    strcpy(this->ip, ip);
    strcat(this->ip, "/");    
    strcat(this->ip, to_string(this->max_capacity).c_str());
    this->cluster = new Server[this->total_nodes];
}

Cluster::Cluster(const Cluster &cluster){
    strcpy(this->name, cluster.name);
    this->total_nodes = cluster.total_nodes;
    this->max_capacity = cluster.max_capacity;
    strcpy(this->ip, cluster.ip);

    this->cluster = new Server[cluster.total_nodes];
    for(int i = 0; i < cluster.total_nodes; i++){
        this->cluster[i] = cluster.cluster[i];
    }
}

void Cluster::set_name(const char *name){
    strcpy(this->name, name);
}

const char *Cluster::get_name() const{
    return this->name;
}

void Cluster::set_vec_servers(){
    char name[20];
    int engine;
    char host[20];
    char ip[13];
    int port;
    
    for(int i = 0; i < this->total_nodes; i++){
        cout<<"--- Node "<<i+1<<" ---"<<endl;
        cout << "Server name: "; cin >> name;
        cout << "Server engine (0 - PostgreSQL, 1 - MySQL, 2 - Oracle): "; cin >> engine;
        cout << "Server host: "; cin >> host;
        cout << "Server port: "; cin >> port;
        
        // managment of ip
        strncpy(ip, this->ip, 11);
        ip[11] = '\0';
        strcat(ip, to_string(i+1).c_str());

        this->cluster[i] = Server(name, static_cast<ENGINE>(engine), host, ip, port);
    }
}

void Cluster::print_cluster(){
    cout<<"Cluster name: " << this->name << endl;
    cout<<"Total nodes: " << this->total_nodes << endl;
    cout<<"Max capacity: " << this->max_capacity << endl;
    cout<<"Cluster ip: " << this->ip << endl;
    cout<<"Servers in cluster:" << endl; 
    cout<<left;   
    cout<<setw(15)<<"Name"<< 
            setw(15)<<"Engine"<< 
            setw(15)<<"Host"<< 
            setw(15)<<"IP"<< 
            setw(20)<<"Port"<<endl;
    cout<<"------------------------------------------------------------------"<<endl;

    for(int i = 0; i < this->total_nodes; i++){        
        this->cluster[i].print();
    }
}
