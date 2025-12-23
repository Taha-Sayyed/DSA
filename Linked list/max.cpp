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


int max_loop(class Node *p){
    int max=INT_MIN;
    while(p!=0){
        if(p->data>max){
            max=p->data;
        }
        p=p->next;
    }
    return max;
}

int max_recursive(class Node *p){
    if(p==0){
        return INT_MIN;    
    }
    int x=max_recursive(p->next);
    if(x>p->data){
        return x;
    }else{
        return p->data;
    }
}

int main(){
    
    
    int A[]={10,20,30,40};
    create(A,4);

    cout<<"Maximum element is "<<max_loop(first)<<endl;
    cout<<"Maximum element is "<<max_recursive(first)<<endl;
    
    
    return 0;
}