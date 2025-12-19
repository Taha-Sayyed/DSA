#include<iostream>
using namespace std;

int main(){

    char stringArray[]="WELCOME";
    for(int i=0;stringArray[i]!='\0';i++){
        stringArray[i]+=32;
    }
    for(int i=0;stringArray[i];i++){
        cout<<stringArray[i];
    }

    return 0;
}