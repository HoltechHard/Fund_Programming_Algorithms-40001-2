/*
    Template for class Vector of Clients
*/

#pragma once
#include "libclient.h"

class VectClient{
    public:
        Client *list;
        int size;
        int index;

    public:
        VectClient();
        VectClient(int n);
        VectClient(const VectClient &v);
        ~VectClient();
        void menu(int &opc);
        void set_size(int n);
        int get_size();
        void insert_client();        
        Client get_client(int pos);
        void print_clients();
        int search_by_name();
        void update_client();
        void delete_client();
};

void input_max_clients(int &n);
