#include<iostream>

using namespace std;

class ArrayHandler{
    private:
        int arr[100]; //Fixed Size array
        int length; //Current number of elements

    public:
        ArrayHandler(){
            length=0;
        }

        void setElement(int input_arr[],int input_arr_length){
            length=input_arr_length;
            for(int i=0;i<input_arr_length;i++){
                arr[i]=input_arr[i];
            }
        }

        //For deletion, Time Complexity Min: O(1) and Max: O(n)
        void deleteElement(int index){
            if(index<length){
                int garbage_value;
                garbage_value=arr[index];
    
                for(int i=index;i<length;i++){
                    arr[i]=arr[i+1];
                }
                length--;
            }
            else{
                cout<<"Wrong index given. Cannot be deleted"<<endl;
                return;
            }
        }

        void display(){
            for(int i=0;i<length;i++){
                cout<<arr[i]<<" ";
            }
        }
};

int main(){
    int arr[5]={10,20,30,40,50};
    ArrayHandler arr_1;
    arr_1.setElement(arr,5);
    arr_1.deleteElement(1);
    arr_1.display();
    return 0;
}
