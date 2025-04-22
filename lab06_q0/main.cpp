#include <iostream>

using namespace std;

// recursive function to calculate fibonacci
int fibonacci(int n){
    if(n <= 1)
        return n;    

    return fibonacci(n - 1) + fibonacci(n - 2);
}

// recursive function to calculate factorial
int factorial(int n){
    if(n == 0 || n == 1)
        return 1;
    
    return n * factorial(n - 1);
}

// main function
int main(){
    int n;

    cout<<"Input number: "; cin>>n;

    cout << "Fibonacci of " << n << " is " << fibonacci(n) << endl;
    cout<< "Factorial of " << n << " is " << factorial(n) << endl;

    return 0;
}
