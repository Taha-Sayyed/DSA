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

int sum_Loop(class Node *p){
    int sum=0;
    while(p!=0){
        sum+=p->data;
        p=p->next;
    }
    return sum;
}

int sum_recursive(class Node *p){
    if(p==0){
        return 0;
    }else{
        return sum_recursive(p->next)+p->data;
    }
}

int main(){

    int A[]={10,20,30,40};
    create(A,4);
    cout<<"Sum using loop method "<<sum_Loop(first)<<endl;
    cout<<"Sum using recursive method "<<sum_recursive(first)<<endl;
    
    return 0;
}