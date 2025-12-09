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

        friend void intersect_arr(ArrayHandler &arr_1,ArrayHandler &arr_2){
            int extraArray[100];
            int len_extraArray=0;
            int i=0;
            int k=0;
            
            while(i<arr_1.length){
                int key=arr_1.arr[i];
                for(int j=0;j<arr_2.length;j++){
                    if(arr_2.arr[j]==key){
                        extraArray[k++]=key;
                        len_extraArray++;
                    }
                }
                i++;
            }
            for(int m=0;m<len_extraArray;m++){
                cout<<extraArray[m]<<" ";
            }
    
        }
};

int main(){

    int arr_1[5]={3,5,10,4,6}; //unsorted array
    ArrayHandler obj_1;
    obj_1.setElement(arr_1,5);
    
    int arr_2[5]={12,4,7,2,5}; //unsorted array
    ArrayHandler obj_2;
    obj_2.setElement(arr_2,5);

    intersect_arr(obj_1,obj_2);
    

    return 0;
}