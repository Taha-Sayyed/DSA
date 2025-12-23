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

void insert(class Node *p,int element, int pos){
    int i=1;
    if(p==0){
        return;
    }
    if(pos<0){
        cout<<"Wrong Position"<<endl;
        return;
    }
    
    class Node *t=new Node;
    t->data=element;
    t->next=NULL;


    if(pos==1){
        t->next=first;
        first=t;
    }else{
        while(i<pos && p!=0){
            p=p->next;
            i++;
        }
        t->next=p->next;
        p->next=t;
    }

}

int main(){

    int A[]={10,20,30,40};
    create(A,4);
    insert(first,25,3);
    display(first);

    return 0;
}