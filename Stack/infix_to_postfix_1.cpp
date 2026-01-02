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

        ~Stack(){
            cout<<"\nDestructor called"<<endl;
            delete []s;
        }

        void push(char element){
            if(top==size-1){
                cout<<"Stack overflow"<<endl;
                return;
            }else{
                top++;
                s[top]=element;
            }
        }

        char pop(){
            char x;
            if(top==-1){
                cout<<"Stack underflow"<<endl;
                return '\0';
            }else{
                x=s[top];
                top--;
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

        char stackTop(){
            if(top==-1){
                cout<<"Stack Underflow"<<endl;
                return '\0';
            }
            return s[top];
        }

        int isOperand(char x){
            if(x=='*'||x=='+'||x=='-'||x=='/'){
                return 0;
            }else{
                return 1;
            }
        }

        int pre(char x){
            if(x=='*'||x=='/'){
                return 2;
            }else if(x=='+'||x=='-'){
                return 1;
            }
            return 0;
        }

        void convert(char infix[]){
            char postfix[50];
            int i=0,j=0;
            while(infix[i]!='\0'){
                if(isOperand(infix[i])){
                    postfix[j++]=infix[i++];
                }
                else{
                    if(isEmpty()||pre(infix[i])>pre(stackTop())){
                        push(infix[i]);
                        i++;
                    }
                    else{
                        postfix[j]=pop();
                        j++;
                    }
                }
            }
            while(!isEmpty()){
                postfix[j]=pop();
                j++;
            }
            postfix[j]='\0';
            for(int k=0;postfix[k]!='\0';k++){
                cout<<postfix[k]<<" ";
            }
        }
};

int main(){

    char infix[]="a+b*c-d/e";
    Stack st(20);
    st.convert(infix);

    return 0;
}