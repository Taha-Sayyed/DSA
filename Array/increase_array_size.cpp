//for explanation refer the notes

#include<iostream>

using namespace std;

int main(){

    int* small_array;
    small_array=new int[5];

    for(int i=0;i<5;i++){
        small_array[i]=i*10;
    }

    //Increasing the size
    int * large_array;
    large_array=new int[10];
    
    for(int i=0;i<5;i++){
        large_array[i]=small_array[i];
    }

    delete []small_array;

    small_array=large_array;
    large_array=NULL;

    return 0;
}