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
        
        void insertElementSort(int element){
            int i=length;
            while(arr[i]>element){
                arr[i+1]=arr[i];
                i--;
            }
            arr[i+1]=element;   
            length++;
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
    arr_1.insertElementSort(12);
    arr_1.displayDetail();   
    return 0;
}