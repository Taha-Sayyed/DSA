#include<iostream>
using namespace std;

class Stack{
    private:
        int size;
        int top;
        char *s;
    public:
        Stack(int size){
            this->size=size;
            top=-1;
            s=new char[size];
        }

        void push(char element){
            if(top==size-1){
                cout<<"Stack Overflow"<<endl;
                return;
            }else{
                top++;
                s[top]=element;
            }
        }

        void pop(){
            char x;
            if(top==-1){
                cout<<"Stack Underflow"<<endl;
                return;
            }
            else{
                x=s[top];
                top--;
            }
        }

        bool isEmpty(){
            if(top==-1){
                return true;
            }else{
                return false;
            }
        }

        bool isMatching(char open, char close) {
            if (open == '(' && close == ')') return true;
            if (open == '{' && close == '}') return true;
            if (open == '[' && close == ']') return true;
            return false;
        }

        bool isBalance(char arr[]) {
            for (int i = 0; arr[i] != '\0'; i++) {
                if (arr[i] == '[' || arr[i] == '(' || arr[i] == '{') {
                    push(arr[i]);
                }
                else if (arr[i] == ']' || arr[i] == ')' || arr[i] == '}') {
                    if (isEmpty()) {
                        return false;  // closing without opening
                    }
                    char topChar = s[top];
                    pop();
                    if (!isMatching(topChar, arr[i])) {
                        return false;  // mismatched brackets
                    }
                }
            }
            return isEmpty(); // stack must be empty
        }
};

int main(){

    char arr[]={"{([a+b]*[c-d])/e}"};
    Stack st(50);
    cout<<st.isBalance(arr)<<endl;


    return 0;
}