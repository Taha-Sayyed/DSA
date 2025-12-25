#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        class Node *next;
};

class Node *first=NULL; //global variable
class Node *second=NULL;

void create_1(int A[],int n){
    int i;
    struct Node *t,*last;
    first=new Node;
    first->data=A[0];
    first->next=NULL;
    last=first;

    for(int i=1;i<n;i++){
        t=new Node;
        t->data=A[i];
        t->next=0;
        last->next=t;
        last=t;
    }
}

void create_2(int A[],int n){
    int i;
    struct Node *t,*last;
    second=new Node;
    second->data=A[0];
    second->next=NULL;
    last=second;

    for(int i=1;i<n;i++){
        t=new Node;
        t->data=A[i];
        t->next=0;
        last->next=t;
        last=t;
    }
}

void concatenate(class Node *p){
    class Node *q=first;

    while(p->next!=0){
        p=p->next;
    }
    p->next=second;

    while(q!=0){
        cout<<q->data<<" ";
        q=q->next;
    }
}

void display(class Node *p){
    while(p!=0){
        cout<<p->data<<" ";
        p=p->next;
    }
}

int main(){
    int A[]={2,9,6,8,10};
    int B[]={12,15,18,20};

    create_1(A,5);
    create_2(B,4);

    concatenate(first);
}