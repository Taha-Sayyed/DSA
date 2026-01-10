//Maximum points you can obtain from the cards
//Optimal Approach (There is no brute and better approach. Only one straightforward method)
//TC: O(2k)     SC:O(1)

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
        int Max(int x,int y);
        int max_point_card(int k);
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

int ArrayHandler::max_point_card(int k){
    int lsum=0;
    int rsum=0;
    int maxSum=0;
    int rindex=length-1;

    for(int i=0;i<k;i++){
        lsum+=arr[i];
    }
    maxSum=lsum;
    for(int i=k-1;i>=0;i--){
        lsum-=arr[i];
        rsum+=arr[rindex];
        rindex--;
        maxSum=Max(maxSum,lsum+rsum);
    }
    return maxSum;
}


int main(){

    int A[]={6,2,3,4,7,2,1,7,1};
    ArrayHandler arr(9);
    arr.setElement(A,9);
    cout<<arr.max_point_card(4)<<endl;

    return 0;
}
