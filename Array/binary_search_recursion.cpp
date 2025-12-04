#include<iostream>
using namespace std;

class ArrayHandler{
    private:
        int arr[100];
        int length;
    public:
        ArrayHandler(){
            length=0;
        }

        void setElement(int a[],int length){
            for(int i=0;i<length;i++){
                arr[i]=a[i];
            }
        }

        void displayDetail(){
            for(int i=0;i<length;i++){
                cout<<i<<" ";
            }
        }

        int RBinarySearch(int l,int h,int key){
            int mid;
            if(l<=h){
                mid=(l+h)/2;
                if(arr[mid]==key){
                    return mid;
                }else if(key<arr[mid]){
                    return RBinarySearch(l,mid-1,key);
                }else{
                    return RBinarySearch(mid+1,h,key);
                }
            }
            return -1;
        }
};


int main(){

    int arr[5]={4,8,10,15,18};
    ArrayHandler arr_1;
    arr_1.setElement(arr,5);
    cout<<"Index found at "<<arr_1.RBinarySearch(0,4,15)<<endl;

    return 0;
}