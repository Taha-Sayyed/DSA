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

int count_loop(class Node *p){
    int counter=0;
    while(p!=0){
        counter++;
        p=p->next;
    }
    return counter;
}

int count_recursive(class Node *p){
    if(p==0){
        return 0;
    }else{
        return count_recursive(p->next)+1;
    }
}

int main(){

    int A[]={10,20,30,40};
    create(A,4);
    cout<<"Count using Loop method "<<count_loop(first)<<endl;
    cout<<"Count using recursive method "<<count_recursive(first)<<endl;
    
    

    return 0;
}