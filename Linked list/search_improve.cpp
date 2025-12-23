#include<iostream>
#include <climits>
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

void move_to_front(class Node *p,int key){
    class Node *q;

    if(p==0){
        return;
    }

    if(first->data==key){ //check for first element of the linked list
        return;
    }
    
    while(p!=0){
        if(p->data==key){
            q->next=p->next;
            p->next=first;
            first=p;
            break;
        }else{
            q=p;
            p=p->next;
        }
    }
}

int main(){

    int A[]={10,20,30,40};
    create(A,4);
    move_to_front(first,10);
    display(first);

    return 0;
}