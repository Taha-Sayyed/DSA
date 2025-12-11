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

        void duplicateElement(){
            int i=0;
            int j=i+1;
            while(i<length-1 && j<length){
                if(arr[j]!=arr[i]){
                    i++;
                    j++;
                    i=j-1;
                }else{
                    cout<<"Duplicate element found "<<arr[i]<<endl;
                    while(arr[j]==arr[i]){
                        j++;
                    }
                    cout<<"Number of duplicate element "<<j-i<<endl;
                }
            }
        }
};

int main(){

    int arr_1[11]={3,6,8,8,10,12,15,15,15,20}; //sorted array
    ArrayHandler obj_1;
    obj_1.setElement(arr_1,11);
    obj_1.duplicateElement();
    

    return 0;
}