#pragma once
#include "libserver.h"

class Cluster{

    private:
        char name[20];
        int total_nodes;
        int max_capacity;
        char ip[16];
        Server *cluster;

    public:
        Cluster();
        Cluster(const char *name, int total_nodes, int max_capacity, const char *ip);
        Cluster(const Cluster &cluster);
        void set_name(const char *name);
        const char *get_name() const;
        void set_vec_servers();
        void print_cluster();
};
