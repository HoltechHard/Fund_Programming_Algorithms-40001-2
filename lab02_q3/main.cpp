/*
    LIST 02 - VECTOR AND POINTERS TO OBJECTS
    EXERCISE 03 - LIST OF CLIENTS
*/

#include <iostream>
#include <cstring>
#include "libclient.h"
#include "libvect.h"

using namespace std;

int main(){
    
    int n, opc;
    input_max_clients(n);
    VectClient list_clients(n);

    do{
        list_clients.menu(opc);        

        switch(opc){
            case 1:
                list_clients.insert_client();
                break;
            case 2:
                list_clients.print_clients();
                break;
            case 3:
                int pos;
                pos = list_clients.search_by_name();
                if(pos != -1){
                    list_clients.get_client(pos).print();
                }else{
                    cout<<"Client not found!"<<endl;
                }
                break;
            case 4:
                list_clients.update_client();
                break;
            case 5:
                list_clients.delete_client();
                break;
            case 6:
                cout<<"Exit from program!"<<endl;
                break;
            default:
                cout<<"Invalid option!"<<endl;
        }
    }while(opc!=6);

    return 0;
}