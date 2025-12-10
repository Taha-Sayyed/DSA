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
            int diff=arr[i]-i;
            while(i<length){
                if(arr[i]-i == diff){
                    i++;
                }else{
                    //cout<<"\nMissing element found"<<endl;
                    while(diff<arr[i]-i){
                        cout<<"\nMissing element is "<<diff+i<<endl;
                        diff++;
                    }
                    diff=arr[i]-i;
                    i++;
                }
            }
        }
};

int main(){

    int arr_1[11]={6,7,8,9,11,12,15,16,17,18,19}; //sorted array
    ArrayHandler obj_1;
    obj_1.setElement(arr_1,11);
    obj_1.missingElement();
    

    return 0;
}