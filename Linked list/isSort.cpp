#include<iostream>
#include<climits>
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

bool isSorted(class Node *p){
    int x=INT_MIN;
    while(p!=0){
        if(p->data<x){
            return false;
        }else{
            x=p->data;
            p=p->next;
        }
    }
    return true;
}

int main(){

    int A[]={10,20,30,40};
    create(A,4);
    cout<<"Linked List is Sort "<<isSorted(first)<<endl;

    return 0;
}