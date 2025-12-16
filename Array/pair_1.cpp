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

        void findPair(int input_sum){
            int sum=input_sum;
            for(int i=0;i<length-1;i++){
                int j=i+1;
                while(j<sum){
                    if(arr[j]==sum-arr[i]){
                        cout<<"Pair element {"<<arr[i]<<","<<arr[j]<<"}"<<endl;
                        j++;
                    }else{
                        j++;
                    }
                }
            }
        }
};

int main(){

    int arr_1[10]={6,3,8,10,16,7,5,2,9,14}; //unsorted array
    ArrayHandler obj_1;
    obj_1.setElement(arr_1,10);
    obj_1.findPair(10);
    

    return 0;
}