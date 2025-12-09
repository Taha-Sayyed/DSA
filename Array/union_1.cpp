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

        friend void union_arr(ArrayHandler &arr_1,ArrayHandler &arr_2){
            int extraArray[100];
            int len_extraArray=0;
            int k=0;
            for(int i=0;i<arr_1.length;i++){
                extraArray[k++]=arr_1.arr[i];
                len_extraArray++;
            }
            
            for(int j=0;j<arr_2.length;j++){
                int key=arr_2.arr[j];
                bool isPresent=false;
                for (int k = 0; k < len_extraArray; k++){
                    if (extraArray[k] == key){
                        isPresent = true;
                        break;
                    }
                }

                if(!isPresent){
                    extraArray[len_extraArray]=key;
                    len_extraArray++;
                }
            }

            for(int i=0;i<len_extraArray;i++){
                cout<<extraArray[i]<<" ";
            }
        }
};

int main(){

    int arr_1[5]={3,5,10,4,6};
    ArrayHandler obj_1;
    obj_1.setElement(arr_1,5);
    
    int arr_2[5]={12,4,7,2,5};
    ArrayHandler obj_2;
    obj_2.setElement(arr_2,5);

    union_arr(obj_1,obj_2);
    

    return 0;
}