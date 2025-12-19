#include<iostream>
using namespace std;

void reverseString(char strArray[]){
    char extraArray[100];
    int i=0;
    for(i=0;strArray[i]!='\0';i++){};
    i=i-1;
    int j=0;
    while(i>=0){
        extraArray[j++]=strArray[i--];
    }
    extraArray[j]='\0';
    for(int i=0;strArray[i]!='\0';i++){
        cout<<extraArray[i];
    }

}

int main(){

    char stringArray[]="welcome";
    reverseString(stringArray);


    return 0;
}