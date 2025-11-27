//For detail explanation refer handwritten notes

#include<iostream>
using namespace std;
// int x=0;//Either define it globally or use 'static' keyword

int func(int n){
    static int x=0;
    if(n>0){
        x++;
        return func(n-1)+x;
    }
    return 0;
}

int main(){

    int a =5;
    cout<<func(a)<<" ";

    return 0;
}

