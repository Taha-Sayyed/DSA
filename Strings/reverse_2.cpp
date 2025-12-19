#include<iostream>
#include<utility>
using namespace std;

void reverseString(char strArray[]){
    int j=0,i=0;
    for(j=0;strArray[j]!='\0';j++){};
    j=j-1;
    while(i<j){
        swap(strArray[i],strArray[j]);
        i++;
        j--;
    }
    for(int i=0;strArray[i]!='\0';i++){
        cout<<strArray[i];
    }


}

int main(){

    char stringArray[]="welcome";
    reverseString(stringArray);


    return 0;
}