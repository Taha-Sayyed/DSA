#include<iostream>
using namespace std;

class Stack{
    private:
        int size;
        int top;
        int *s;
    
    public:
        Stack(int size){
            this->size=size;
            top=-1;
            s=new int[size];
        }

        ~Stack(){
            cout<<"\nDestructor called"<<endl;
            delete []s;
        }

        void push(int element){
            if(top==size-1){
                cout<<"Stack overflow"<<endl;
                return;
            }else{
                top++;
                s[top]=element;
            }
        }

        int pop(){
            int x;
            if(top==-1){
                cout<<"Stack underflow"<<endl;
                return -1;
            }else{
                x=s[top];
                top--;
                return x;
            }
        }

        int peek(int pos){
            int x;
            if((top-pos+1)<0){
                cout<<"Invalid Position"<<endl;
                return -1;
            }else{
                x=s[top-pos+1];
                return x;
            }
        }

        bool isEmpty(){
            if(top==-1){
                return true;
            }else{
                return false;
            }
        }

        bool isFull(){
            if(top==size-1){
                return true;
            }else{
                return false;
            }
        }

        int stackTop(){
            if(top==-1){
                cout<<"Stack Underflow"<<endl;
                return -1;
            }
            return s[top];
        }

        void display(){
            if(top==-1){
                cout<<"Stack Underflow"<<endl;
                return;
            }
            for(int i=top;i>0;i--){
                cout<<s[top--]<<" ";
            }
        }

};

int main(){

    Stack st(5);
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(60);
    //st.pop();
    //cout<<st.peek(5)<<endl;
    cout<<st.isEmpty()<<endl;
    cout<<st.isFull()<<endl;
    st.display();


    return 0;
}