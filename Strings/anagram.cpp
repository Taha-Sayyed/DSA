#include<iostream>
using namespace std;

bool isAnagram(char strArray_1[],char strArray_2[]){
    char hashArray[26]={0};

    for(int i=0;strArray_1[i]!='\0';i++){
        hashArray[strArray_1[i]-97]++;
    }

    for(int j=0;strArray_2[j]!='\0';j++){
        hashArray[strArray_2[j]-97]--;
        if(hashArray[strArray_2[j]-97]<0){
            return false;
        }
    }
    return true;
}


int main(){

    char strArray_1[]="verbose";
    char strArray_2[]="observe";

    cout<<"Two strings are "<<isAnagram(strArray_1,strArray_2)<<endl;

    return 0;
}