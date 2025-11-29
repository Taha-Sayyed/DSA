#include<iostream>
#include<utility>


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
        

        //Transposition technique
        int linearSearch(int key){
            for(int i=0;i<length;i++){
                if(arr[i]==key){
                    swap(arr[i],arr[i-1]);
                    return i-1;
                }
            }
            return -1;
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
    cout<<"Element found at "<<arr_1.linearSearch(50)<<endl;
    arr_1.display();

    //Now if the same element is again searched then it will take less time then before

    cout<<"\nElement found at "<<arr_1.linearSearch(50)<<endl;
    arr_1.display();
    
    return 0;
}
