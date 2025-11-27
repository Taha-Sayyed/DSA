//Refer the notes for explanation of Time and space complexity

#include<iostream>
using namespace std;

int sum(int n){
    if(n==0){
        return 0;
    }else{
        return sum(n-1)+n;
    }
}

int main(){

    int num=5;
    cout<<"Sum is "<<sum(num)<<endl;

    return 0;
}