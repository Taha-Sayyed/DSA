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
    class Node *last=NULL;
    last=Head;

    Head->data=A[0];
    Head->prev=NULL;
    Head->next=NULL;

    for(int i=1;i<n;i++){
        t=new Node;
        t->data=A[i];
        last->next=t;
        t->prev=last;
        t->next=NULL;
        last=t;
    }
}


void display(class Node *p){
    while (p!=0){
        cout<<p->data<<" ";
        p=p->next;
    }
}

int main(){

    int A[]={10,20,30,40,50};
    create(A,5);
    display(Head);

    return 0;
}