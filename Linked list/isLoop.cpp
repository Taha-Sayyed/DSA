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


bool isLoop(class Node *p,class Node *q){
    do{
        p=p->next;
        q=p->next;
        if(q->next==NULL){return false;}
        q=q->next;
    }while(p!=q);

    return true;
}

int main(){

    int A[]={8,5,4,7,3};
    create(A,5);
    cout<<isLoop(first,first)<<endl;


    return 0;
}