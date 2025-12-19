#include<iostream>
using namespace std;

int main(){

    char stringArray[]="welcome Taha   Sayyed";
    int word_count=1;
    for(int i=0;stringArray[i]!='\0';i++){
        if(stringArray[i]==' '&& stringArray[i-1]!=' '){
            word_count++;
        }
    }
    cout<<"Total number of words are "<<word_count<<endl;


    return 0;
}