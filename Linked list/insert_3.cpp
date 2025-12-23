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

void insertSort(class Node *p,int element){
    class Node *q=NULL;
    class Node *t=new Node;
    t->data=element;
    t->next=NULL;

    if(element<first->data){
        t->next=first;
        first=t;
        return;
    }

    while(p!=0 && p->data<element){
        q=p;
        p=p->next;
    }
    if(p==0){
        q->next=t;
    }else{
        q->next=t;
        t->next=p;
    }

}


int main(){

    int A[]={10,20,30,40};
    create(A,4);
    insertSort(first,25);
    insertSort(first,55);
    display(first);


    return 0;
}