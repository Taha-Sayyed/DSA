// Refer notes for memoization explanation
//TC is O(n)


#include<iostream>
#include<vector>

using namespace std;

vector<long>memo(1000,-1);

int fib(int n){
    if(n<=1){
        return n;
    }else{
        if(memo[n] != -1){return memo[n];}
        return memo[n]=fib(n-2)+fib(n-1);
    }
}

int main(){

    int num_input;
    cout<<"Give the number"<<endl;
    cin>>num_input;

    cout<<"Fibonacci of the given input is "<<fib(num_input)<<endl;


    return 0;
}