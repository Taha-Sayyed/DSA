#include<iostream>
using namespace std;

class Node{
    public:
        class Node *prev;
        int data;
        class Node *next;
};

class Node *Head=NULL;

void create(int A[],int n){
    Head=new Node;
    class Node *t=NULL;
    class Node *last=Head;
    Head->data=A[0];
    Head->prev=NULL;
    Head->next=Head;

    for(int i=1;i<n;i++){
        t=new Node;
        t->data=A[i];
        last->next=t;
        t->prev=last;
        last=t;
        t->next=Head;
    }
}

void display(class Node *p){
    do{
        cout<<p->data<<" ";
        p=p->next;
    }while(p!=Head);
}


int main(){

    int A[]={10,20,30,40};
    create(A,4);
    display(Head);

    return 0;
}