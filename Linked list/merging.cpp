#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        class Node *next;
};

class Node *first=NULL; //global variable
class Node *second=NULL;

void create_1(int A[],int n){
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

void create_2(int A[],int n){
    int i;
    struct Node *t,*last;
    second=new Node;
    second->data=A[0];
    second->next=NULL;
    last=second;

    for(int i=1;i<n;i++){
        t=new Node;
        t->data=A[i];
        t->next=0;
        last->next=t;
        last=t;
    }
}

void mergeLL(){
    class Node *t;
    class Node *l;
    class Node *p;

    if(first->data<second->data){
        p=first;
        t=l=first;
        first=first->next;
        t->next=NULL;
    }else{
        p=second;
        t=l=second;
        second=second->next;
        t->next=NULL;
    }

    while(second!=0 && first!=0){
        if(second->data<first->data){
            l->next=second;
            l=second;
            second=second->next;
            l->next=NULL;
        }else{
            l->next=first;
            t=first;
            first=first->next;
            t->next=NULL;
            l=t;
        }
    }

    if(second==0){
        l->next=first;
        l=first;
    }
    if(first==0){
        first->next=l;
        first=l;
    }

    while(p!=0){
        cout<<p->data<<" ";
        p=p->next;
    }

}



int main(){

    int A[]={2,8,10,15};
    int B[]={4,7,12,14};

    create_1(A,4);
    create_2(B,4);

    mergeLL();




    return 0;
}