//ASCII value comparison

#include<iostream>
using namespace std;

void compareString(char strArray_1[],char strArray_2[]){
    int i=0,j=0;
    while(strArray_1[i]!='\0' && strArray_2[j]!='\0'){
        if(strArray_1[i]!=strArray_2[j]){
            break;
        }else{
            i++;
            j++;
        }
    }
    if(strArray_1[i]>strArray_2[j]){
        cout<<"String-1 is Greater"<<endl;
    }else if(strArray_1[i]<strArray_2[j]){
        cout<<"String-1 is Smaller"<<endl;
    }else{
        cout<<"Both are Equal"<<endl;
    }
}

int main(){

    char strArray_1[]="Painter";
    char strArray_2[]="Painting";

    compareString(strArray_1,strArray_2);
    

    return 0;
}