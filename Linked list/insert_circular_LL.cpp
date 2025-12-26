#include<iostream>

using namespace std;


class Node{
    public:
        int data;
        class Node *next;
};

class Node *Head=NULL;

void create(int A[],int n){
    class Node *t;
    class Node *last;

    Head=new Node;
    Head->data=A[0];
    Head->next=Head;
    last=Head;

    for(int i=1;i<n;i++){
        t=new Node;
        t->data=A[i];
        t->next=NULL;
        last->next=t;
        last=t;
        last->next=Head;
    }

}

void display_circular_LL(class Node *p){
    do{
        cout<<p->data<<" ";
        p=p->next;
    }while(p!=Head);
}


void insert(int x, int pos){
    class Node *p=Head;
    class Node *t=new Node;
    t->data=x;
    t->next=NULL;

    if(Head->next==Head){
        return;
    }

    if(pos==1){
        while(p->next!=Head){
            p=p->next;
        }
        p->next=t;
        t->next=Head;
        Head=t;
    }else{
        int i=1;
        while(i<pos){
            p=p->next;
            i++;
        }
        t->next=p->next;
        p->next=t;
    }
    
}


int main(){

    int A[]={10,20,30,40,50};
    create(A,5);
    insert(100,5);
    display_circular_LL(Head);
    return 0;
}