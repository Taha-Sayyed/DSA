#include<iostream>
using namespace std;

int main(){

    char strignArray[]={'w','e','l','c','o','m','e','\0'};
    //char strignArray[]="welcome";

    int i;
    for(i=0;strignArray[i]!='\0';i++){};
    cout<<"Length of the string is "<<i<<endl;

    return 0;
}