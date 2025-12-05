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

        int get(int index){
            if(index>=0 && index<length){
                return arr[index]
            }
        }

        void set(int index,int x){
            if(index>=0 && index<length){
                arr[index]=x;
            }
        }

        int max_element(){
            int max=arr[0];
            for(int i=0;i<length;i++){
                if(arr[i]>max){
                    max=arr[i];
                }
            }
            return max;
        }

        
        int min_element(){
            int min=arr[0];
            for(int i=0;i<length;i++){
                if(arr[i]<min){
                    min=arr[i];
                }
            }
            return min;
        }


};

int main(){

    int arr[5]={4,8,10,15,18};
    ArrayHandler arr_1;
    arr_1.setElement(arr,5);
    cout<<"Max element is "<<arr_1.max_element()<<endl;
    cout<<"Min element is "<<arr_1.min_element()<<endl;
    arr_1.set(1,100);
    // cout<<"Element found at index 1: "<<arr_1.get(1)<<endl;
    return 0;
}