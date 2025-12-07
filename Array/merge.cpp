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
        
        friend void mergeArray(ArrayHandler &obj_1,ArrayHandler &obj_2){
            int extraArray[100];
            int len_extraArray=0;
            int i=0,j=0,k=0;

            while(i<obj_1.length && j<obj_2.length){
                if(obj_1.arr[i]<obj_2.arr[j]){
                    extraArray[k++]=obj_1.arr[i++];
                    len_extraArray++;
                }
                else{
                    extraArray[k++]=obj_2.arr[j++];
                    len_extraArray++;
                }
            }  
            while(i<obj_1.length){
                    extraArray[k++]=obj_1.arr[i++];
                    len_extraArray++;
            }
                
            while(j<obj_2.length){
                    extraArray[k++]=obj_2.arr[j++];
                    len_extraArray++;
            }
                
            for(int l=0;l<len_extraArray;l++){
                cout<<extraArray[l]<<" ";
            }
            }
};

int main(){

    int arr_1[5]={3,8,6,20,25};
    ArrayHandler obj_1;
    obj_1.setElement(arr_1,5);
    
    int arr_2[5]={4,10,12,22,23};
    ArrayHandler obj_2;
    obj_2.setElement(arr_2,5);

    mergeArray(obj_1,obj_2);
    

    return 0;
}