#include<iostream>
using namespace std;

bool isValid(char strArray[]){
    for(int i=0;strArray[i]!='\0';i++){
        if(!(strArray[i]>=65&&strArray[i]<=90)&&!(strArray[i]>=97&&strArray[i]<=122)&&!(strArray[i]>=48&&strArray[i]<=57)){
            return false;
        }
    }
    return true;
}


int main(){

    char stringArray[]="wel123come";
    //char stringArray[]="wel123@#$come";
    cout<<"String is Valid: "<<isValid(stringArray);

    return 0;
}