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

        void missingElement(){
            int i=0;
            int diff=arr[i]-0;
            while(i<length){
                if(arr[i]-i ==diff){
                    i++;
                }else{
                    cout<<"Missing element found"<<endl;
                    cout<<"Missing element is "<<i+diff;
                    break;
                }
            }
        }
};

int main(){

    int arr_1[11]={6,7,8,9,10,11,13,14,15,16,17}; //sorted array
    ArrayHandler obj_1;
    obj_1.setElement(arr_1,11);
    obj_1.missingElement();
    

    return 0;
}