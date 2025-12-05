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
            this->length=length;
            for(int i=0;i<length;i++){
                arr[i]=a[i];
            }
        }

        
        void reverseArray(){
            int auxillaryArray[length];
            int i=length-1;
            int j=0;
            while(i>=0){
                auxillaryArray[j++]=arr[i--];
            }
            for (int k = 0; k < length; k++) {
                arr[k] = auxillaryArray[k];
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