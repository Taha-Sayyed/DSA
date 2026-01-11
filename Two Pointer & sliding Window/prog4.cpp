// Longest Substring without repeating characters
//Brute force approach: TC: O(N*2)  SC:O(256)
//Optimal approach: remaining


#include<iostream>
using namespace std;

class ArrayHandler{
    private:
        int size;
        int length;
    public:
        char *arr;
        ArrayHandler(int size){
            this->size=size;
            arr=new char[size];
            length=0;
        }
        ~ArrayHandler(){
            delete []arr;
        }
        void setElement(char A[],int n);
        int Max(int x,int y);
        int longest_substring_brute();
        int longest_substring_optimal();
};

void ArrayHandler::setElement(char A[],int n){
    if(size<n){
        cout<<"Element cannot be insert"<<endl;
        return;
    }
    length=n;
    for(int i=0;i<n;i++){
        arr[i]=A[i];
    }
}

int ArrayHandler::Max(int x,int y){
    if(x>=y){
        return x;
    }
    else{
        return y;
    }
}

int ArrayHandler::longest_substring_brute(){
    int len;
    int maxlen=0;
    for(int i=0;i<length;i++){
        int hash[256]={0};
        for(int j=i;j<length;j++){
            if(hash[arr[j]]==1){break;}
            len=j-i+1;
            maxlen=Max(len,maxlen);
            hash[arr[j]]=1;            
        }
    }
    return maxlen;
}

int ArrayHandler::longest_substring_optimal(){
    int len=0;
    int l=0;
    int r=0;
    int maxlen=0;
    int hash[256]={-1};
    while(r<length){
        if(hash[arr[r]]!=-1){
            if(hash[arr[r]]>=l){
                l=hash[arr[r]]+1;
            }
        }
        len=r-l+1;
        maxlen=Max(maxlen,len);
        hash[arr[r]]=r;
        r++;
    }
    return maxlen;
}

int main(){

    char A[]={'c','a','d','b','z','a','b','c','d','\0'};
    ArrayHandler arr(10);
    arr.setElement(A,9);
    cout<<arr.longest_substring_brute()<<endl;
    cout<<arr.longest_substring_optimal()<<endl;

    return 0;
}