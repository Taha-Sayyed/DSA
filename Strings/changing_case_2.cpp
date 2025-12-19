// Convert lowercase to Uppercase and uppercase to lowercase


#include<iostream>
using namespace std;


int main(){

    char stringArray[]="wElCoMe";
    for(int i=0;stringArray[i]!='\0';i++){
        if(stringArray[i]>=65 &&stringArray[i]<=90){
            stringArray[i]+=32;
        }else if(stringArray[i]>=97 && stringArray[i]<=122){
            stringArray[i]-=32;
        }
    }

    for(int i=0;stringArray[i]!='\0';i++){
        cout<<stringArray[i];
    }


    return 0;
}