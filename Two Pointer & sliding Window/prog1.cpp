#include<iostream>
using namespace std;

class ArrayHandler{
    private:
        int size;
        int length;
    public:
        int *arr;
        ArrayHandler(int size){
            this->size=size;
            arr=new int[size];
            length=0;
        }
        ~ArrayHandler(){
            delete []arr;
        }
        void setElement(int A[],int n);
        int max_sum(int k);
        int Max(int x,int y);
};

void ArrayHandler::setElement(int A[],int n){
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


int ArrayHandler::max_sum(int k){
    int l=0;
    int r=k-1;
    int sum=0;
    
    for(int i=l;i<=r;i++){
        sum=sum+arr[i];
    }
    int maxSum=sum;
    while(r<length-1){
        sum=sum-arr[l];
        l++;
        r++;
        sum=sum+arr[r];
        maxSum=Max(sum,maxSum);
    }
    return maxSum;
}

int main(){

    int A[]={-1,2,3,3,4,5,-1};
    ArrayHandler arr(7);
    arr.setElement(A,7);
    cout<<arr.max_sum(4)<<endl;


    return 0;
}