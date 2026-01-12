//Maximum Consecutive ones
//Brute solution:   TC:O(N*2)   SC:O(1)
//Better solution:  TC:O(2N)    SC:O(1)
//Optimal solution: TC:O(N)     SC:O(1)

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
        int max_consecutive_one_brute(int k);
        int max_consecutive_one_better(int k);
        int max_consecutive_one_optimal(int k);

        
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

int ArrayHandler::max_consecutive_one_brute(int k){
    int maxlen=0;
    int len;
    int zeros;
    for(int i=0;i<length;i++){
        zeros=0;
        for(int j=i;j<length;j++){
            if(arr[j]==0){
                zeros++;
            }
            if(zeros<=k){
                len=j-i+1;
                maxlen=Max(maxlen,j-i+1);
            }
            else{break;}
        }
    }
    return maxlen;
}

int ArrayHandler::max_consecutive_one_better(int k){
    int maxlen=0;
    int len;
    int l=0;
    int r=0;
    int zeros=0;

    while(r<length){
        if(arr[r]==0){
            zeros++;
        }
        while(zeros>k){
            if(arr[l]==0){zeros--;}
            l++;
        }
        if(zeros<=k){
            len=r-l+1;
            maxlen=Max(maxlen,len);
        }
        r++;
    }
    return maxlen;
}

int ArrayHandler::max_consecutive_one_optimal(int k){
    int maxlen=0;
    int len;
    int l=0;
    int r=0;
    int zeros=0;

    while(r<length){
        if(arr[r]==0){
            zeros++;
        }
        if(zeros>k){
            if(arr[l]==0){zeros--;}
            l++;
        }
        if(zeros<=k){
            len=r-l+1;
            maxlen=Max(maxlen,len);
        }
        r++;
    }
    return maxlen;
}

int main(){

    int A[]={1,1,1,0,0,0,1,1,1,1,0};
    ArrayHandler arr(11);
    arr.setElement(A,11);
    cout<<arr.max_consecutive_one_brute(2)<<endl;
    cout<<arr.max_consecutive_one_better(2)<<endl;
    cout<<arr.max_consecutive_one_optimal(2)<<endl;

    return 0;
}