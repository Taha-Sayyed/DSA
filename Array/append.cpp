// Write a C++ program that defines a class named ArrayHandler to manage a simple integer array. The class should store elements in a fixed-size array and maintain the current number of elements (length). Include a constructor to initialize the length to zero, a function that allows setting initial values by copying elements from an external array, a function to append a new element at the end of the stored list, and a function to display all elements. In the main() function, create an instance of the class, manually supply an initial set of integers using the setter function, display the array before and after appending an additional value, and demonstrate that the append function correctly adds the new element to the array.



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

        // For appending, Time complexity is O(1)
        void appendElement(int value){
            arr[length]=value;
            length++;
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
    arr_1.appendElement(60);
    arr_1.display();
    return 0;
}
