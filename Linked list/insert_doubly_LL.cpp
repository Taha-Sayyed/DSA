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

void insert(int pos,int element){
    class Node *p=Head;
    class Node *q=NULL;
    class Node *t;
    t=new Node;
    t->data=element;
    if(pos<=0){
        cout<<"Invalid position"<<endl;
        return;
    }
    
    if(pos==1){
        t->next=Head;
        Head->prev=t;
        Head=t;
    }else{
        int i=1;
        while(i<=pos){
            q=p;
            p=p->next;
            i++;
        }
        t->next=p;
        q->next=t;
        p->prev=t;
        t->prev=q;
    }
}

int main(){ 

    int A[]={10,20,30,40,50};
    create(A,5);
    insert(3,100);
    display(Head);

    return 0;
}