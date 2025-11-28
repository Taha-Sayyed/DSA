// Refer notes for explanation of working and Time complexity
// Here TC is O(2 to the power of n)

#include<iostream>
using namespace std;


int fib(int n){
    if(n<=1){
        return n;
    }else{
        return fib(n-2)+fib(n-1);
    }
}

int main(){

    int num_input;
    cout<<"Give the number"<<endl;
    cin>>num_input;

    cout<<"Fibonacci of the given input is "<<fib(num_input)<<endl;


    return 0;
}