//For more detail refer notes
#include<iostream>
using namespace std;


int fact(int n){
    if(n==0){
        return 1;
    }else{
        return fact(n-1)*n;
    }
}


int main(){

    int num=5;
    cout<<"Factorial is "<<fact(num)<<endl;

    return 0;
}