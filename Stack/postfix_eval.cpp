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

        bool isOperand(char x){
            if(x=='*'||x=='/'||x=='+'||x=='-'){
                return false;
            }
            else{
                return true;
            }
        }

        int eval_postfix(char post[]){
            int i,x1,x2,r;
            for(i=0;post[i]!='\0';i++){
                if(isOperand(post[i])){
                    push(post[i]-'0');
                }
                else{
                    x2=pop();
                    x1=pop();
                    switch(post[i]){
                        case '+':
                            r=x1+x2;
                            push(r);
                            break;
                        case '-':
                            r=x1-x2;
                            push(r);
                            break;
                        case '/':
                            r=x1/x2;
                            push(r);
                            break;
                        case '*':
                            r=x1*x2;
                            push(r);
                            break;
                    }
                }
            }
            return pop();
        }
};

int main(){
    char postfix[]="35*62/+4-";
    Stack st(20);
    cout<<st.eval_postfix(postfix)<<endl;
}