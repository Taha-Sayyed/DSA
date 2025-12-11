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

        void duplicateElement(int h){
            int hashArray[h]={0};
            int i=0;
            int j=0;
            while(i<length){
                hashArray[arr[i]]++;
                i++;
            }
            while(j<h){
                if(hashArray[j]>1){
                    cout<<"Duplicate element found "<<j<<endl;
                    cout<<"Number of Duplicate element "<<hashArray[j]<<endl;
                }
                j++;
            }
        }
};

int main(){

    int arr_1[11]={3,6,8,8,10,12,15,15,15,20}; //sorted array
    ArrayHandler obj_1;
    obj_1.setElement(arr_1,11);
    obj_1.duplicateElement(20);
    

    return 0;
}