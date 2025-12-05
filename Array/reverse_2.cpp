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

        
        void reverseArray(){
            int i=0;
            int j=length-1;
            while(i<j){
                swap(arr[i],arr[j]);
                i++;
                j--;
            }
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
    arr_1.reverseArray();
    arr_1.displayDetail();   
    return 0;
}