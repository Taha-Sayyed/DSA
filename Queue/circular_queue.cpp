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
            front=rear=0;
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
            if((rear+1)%size==front){
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
                rear=(rear+1)%size;
                s[rear]=element;
            }
        }

        int dequeue(){
            int x=-1;
            if(isEmpty()){
                cout<<"Queue is Empty"<<endl;
                return -1;
            }else{
                front=(front+1)%size;
                x=s[front];
                return x;
            }
        }

        void display(){
            if(isEmpty()){
                cout<<"Queue is empty"<<endl;
                return;
            }
            int i=(front+1)%size;
            while(true){
                cout<<s[i]<<" ";
                if(i==rear){break;}
                i=(i+1)%size;
            }
            
        }
};

int main(){

    Queue q(7);
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);
    q.enqueue(60);

    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.dequeue();

    q.enqueue(70);
    q.enqueue(80);
    q.display();

    return 0;
}