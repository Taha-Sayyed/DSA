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

        int BinarySearch(int l,int h,int key){
            int mid;
            while (l<=h)
            {   
                mid=(l+h)/2;
                if(key==arr[mid]){
                    return mid;
                }else if(key<arr[mid]){
                    h=mid-1;
                }else{
                    l=mid+1;
                }
            }
            return -1;
        }
};

int main(){

    int arr[5]={4,8,10,15,18};
    ArrayHandler arr_1;
    arr_1.setElement(arr,5);
    cout<<"Index found at "<<arr_1.BinarySearch(0,4,8)<<endl;

    return 0;
}