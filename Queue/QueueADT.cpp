#include<iostream>
using namespace std;

class Queue{
    private:
        int size;
        int front;
        int rear;
        int *s;
    public:
        Queue(int size){
            this->size=size;
            s=new int[size];
            front=rear=-1;
        }

        ~Queue(){
            delete []s;
        }

        bool isEmpty(){
            if(front==rear){
                return true;
            }
            else{
                return false;
            }
        }

        bool isFull(){
            if(rear==size-1){
                return true;
            }else{
                return false;
            }
        }

        void enqueue(int element){
            if(isFull()){
                cout<<"Queue is full"<<endl;
                return;
            }else{
                rear++;
                s[rear]=element;
            }
        }

        int dequeue(){
            int x=-1;
            if(isEmpty()){
                cout<<"Queue is Empty"<<endl;
                return -1;
            }else{
                front++;
                x=s[front];
                return x;
            }
        }

        void display(){
            for(int i=front+1;i<=rear;i++){
                cout<<s[i]<<" ";
            }
        }
};

int main(){

    Queue q(5);
    q.enqueue(5);
    q.enqueue(10);
    q.enqueue(15);
    q.enqueue(20);
    q.enqueue(25);
    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.dequeue();
   
    q.display();

    return 0;
}