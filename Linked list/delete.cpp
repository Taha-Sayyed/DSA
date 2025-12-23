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

void delete_node(class Node *p,int pos){
    int i=1;
    class Node *q=NULL;
    if(pos<1){
        cout<<"Wrong Position"<<endl;
        return;
    }
    if(pos==1){
        int x=p->data;
        first=first->next;
        delete p;
    }else{
        while(p!=0 && i<pos){
            q=p;
            p=p->next;
            i++;
        }
        if(p!=0){

            int y=p->data;
            q->next=p->next;
            delete p;
        }else{
            cout<<"Wrong Positon"<<endl;
        }
    }
}

int main(){

    int A[]={10,20,30,40};
    create(A,4);
    delete_node(first,4);
    display(first);
    



    return 0;
}