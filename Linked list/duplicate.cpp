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

void removeDuplicate(class Node *p){
    class Node *q=p->next;
    while(q!=0){
        if(q->data!=p->data){
            p=q;
            if(q->next==0){
                break;
            }else{
                q=q->next;
            }
        }
        else{
            if(q->next!=0){
                p->next=q->next;
                delete q;
                q=p->next;
            }else{
                break;
            }
        }
    }
    if(q==p){
        return;
    }
    if(q!=0 && q->data==p->data){
        p->next=NULL;
        delete q;
    }
}

int main(){

    int A[]={3};
    create(A,1);
    removeDuplicate(first);
    display(first);

    return 0;
}