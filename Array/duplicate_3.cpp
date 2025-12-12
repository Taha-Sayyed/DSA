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
            while(i<length-1){
                int count=0;
                while(j<length){
                    if(arr[j]==arr[i] && arr[j]!=-1){
                        cout<<"\nDuplicate Element found "<<arr[j]<<endl;
                        arr[j]=-1;
                        count++;
                        j++;
                    }else{
                        j++;
                    }
                }
                if(count>0){
                    cout<<"Number of Duplicate element: "<<count<<endl;

                }
                i++;
                j=i+1;
            }
        }
};

int main(){

    int arr_1[10]={8,3,6,4,6,5,6,8,2,7}; //unsorted array
    ArrayHandler obj_1;
    obj_1.setElement(arr_1,10);
    obj_1.duplicateElement();
    

    return 0;
}