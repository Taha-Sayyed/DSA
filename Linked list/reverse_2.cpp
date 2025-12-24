//reversing element using sliding pointer
#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        class Node *next;
};

class Node *first=NULL; //global variable

void create(int A[],int n){
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

void display(class Node *p){
    while(p!=0){
        cout<<p->data<<" ";
        p=p->next;
    }
}

void reverse(class Node *p){
    class Node *q=NULL;
    class Node *r=NULL;

    while(p!=0){
        r=q;
        q=p;
        p=p->next;
        q->next=r;
    }
    first=q;
}

int main(){

    int A[]={2,4,6,8};
    create(A,4);
    reverse(first);
    display(first);

    return 0;
}