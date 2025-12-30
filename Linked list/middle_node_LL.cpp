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

int findMiddle(class Node *p){
    class Node *q=NULL;
    q=p;
    while(q!=0){
        q=q->next;
        if(q!=0){
            q=q->next;
        }
        if(q!=0){
            p=p->next;
        }
    }
    return p->data;
}

int main(){
    int A[]={10,20,30,40,50,60,70,80};
    create(A,8);
    cout<<findMiddle(first)<<endl;
}