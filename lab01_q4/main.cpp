#include <iostream>
#include "libgallon.h"

using namespace std;

int main(){

    // create gallon objects by parameters
    Gallon g1, g2;

    g1 = Gallon(100.0, 96.0);
    g2 = Gallon(100.0);

    // also is possible: Gallon g1(100.0, 96.0), g2(100.0);

    // print gallon data
    cout<<" --- Gallon 01 --- "<<endl;
    g1.print();
    
    cout<<"--- Gallon 02 --- "<<endl;
    g2.print();
    
    
    // for test just 1 step: g1.mixture(g2, 1.0);
    // make 1st transfer process g1->g2 and g2->g1
    transfer(g1, g2);

    cout<<" --- Gallon 01 after transfer --- "<<endl;
    g1.print();
    
    cout<<"--- Gallon 02 after transfer --- "<<endl;
    g2.print();

    // calculate how many iterations to achieve less than 50%
    // of concentration in gallon 1
    int iter=1;

    while(g1.get_alcohol() > 50){        
        transfer(g1, g2);

        if(iter % 10 == 0){
            cout<<" --- Iteration "<<iter<<" --- "<<endl;
            cout<<"Gallon 01: "<<endl;
            g1.print();
            cout<<"Gallon 01: "<<endl;
            g2.print();
        }
        
        iter++;
    }

    // show the results after finish iterations    
    cout<<" --- Iteration "<<iter<<" --- "<<endl;
    cout<<"Gallon 01: "<<endl;
    g1.print();
    cout<<"Gallon 01: "<<endl;
    g2.print();
    cout<<"#total iterations = "<<iter<<endl;

    return 0;
}
