#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        class Node *next;
};

class Node *first=NULL; //global pointer variable

void display(class Node *p){
    while(p!=0){
        cout<<p->data<<" ";
        p=p->next;
    }
}

void insertLast(int element){
    
    class Node *last;
    class Node *t=new Node;
    t->data=element;
    t->next=NULL;

    if(first==NULL){
        first=last=t;
    }
    if(first!=0){
        last->next=t;
        last=t;
    }
}

int main(){

    insertLast(10);
    insertLast(20);
    insertLast(30);
    insertLast(40);
    insertLast(50);

    display(first);

    return 0;
}