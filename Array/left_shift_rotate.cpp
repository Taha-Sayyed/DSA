#include<iostream>
#include<utility>
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
            this->length=length;
            for(int i=0;i<length;i++){
                arr[i]=a[i];
            }
        }

        
        void left_shift_rotate(){
            int temp=arr[0];
            for(int i=0;i<length-1;i++){
                arr[i]=arr[i+1];
            }
            arr[length-1]=temp;
        }
        
        void displayDetail(){
            for(int i=0;i<length;i++){
                cout<<arr[i]<<" ";
            }
        }
          
};

int main(){

    int arr[5]={4,8,10,15,18};
    ArrayHandler arr_1;
    arr_1.setElement(arr,5);
    arr_1.left_shift_rotate();
    arr_1.displayDetail();   
    return 0;
}