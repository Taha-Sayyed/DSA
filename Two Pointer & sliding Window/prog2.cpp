//Finding the longest Subarray with condition sum<=k
//Brute Force Approach: May need some correction since not satisfying some edge case
//Better Approach: TC:O(2n)     SC:O(1)
//Optimal Approach: TC:O(n)     SC:O(1)
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
        int longest_subarray_length_brute(int k);
        int longest_subarray_length_better(int k);
        int longest_subarray_length_optimal(int k);

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

int ArrayHandler::longest_subarray_length_brute(int k){
    int max_subarray_length=-1;
    int sum=0;
    for(int i=0;i<length-1;i++){
        sum=arr[i];
        int subarray_length=1;
        for(int j=i+1;j<length;j++){
            sum=sum+arr[j];
            if(sum>k){break;}
            subarray_length++;
        }
        max_subarray_length=Max(subarray_length,max_subarray_length);
    }
    return max_subarray_length;
}

int ArrayHandler::longest_subarray_length_better(int k){
    int sum=0;
    int maxlen=0;
    int l=0;
    int r=0;
    while(r<length){
        sum+=arr[r];
        if(sum<k){
            maxlen=Max(r-l+1,maxlen);
        }
        r++;
        while(sum>k){
            sum-=arr[l];
            l++;
        }
    }
    return maxlen;

}

int ArrayHandler::longest_subarray_length_optimal(int k){
    int sum=0;
    int maxlen=0;
    int l=0;
    int r=0;
    while(r<length){
        sum+=arr[r];
        if(sum>k){
            sum-=arr[l];
            l++;
        }
        if(sum<k){
            maxlen=Max(r-l+1,maxlen);
        }
        r++;
    }
    return maxlen;

}
int main(){
    int A[]={2,5,1,7,10};
    ArrayHandler arr(5);
    arr.setElement(A,5);
    //cout<<arr.longest_subarray_length_brute(14)<<endl;
    //cout<<arr.longest_subarray_length_better(14);
}