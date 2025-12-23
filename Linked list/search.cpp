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

class Node *search(class Node *p,int key){
    while(p!=0){
        if(p->data==key){
            cout<<"Element is Found"<<endl;
            return p;
        }
        p=p->next;
    }
    cout<<"Element is not found"<<endl;
    return NULL;
}   

class Node *search_recursive(class Node *p,int key){
    if(p==0){
        cout<<"Element is not found"<<endl;
        return NULL;
    }
    if(p->data==key){
        cout<<"Element is Found"<<endl;
        return p;
    }else{
        search_recursive(p->next,key);
    }
}


int main(){
    
    int A[]={10,20,30,40};
    create(A,4);
    cout<<"Memory address at which element is found "<<search(first,200)<<endl;   
    cout<<"Memory address at which element is found "<<search_recursive(first,20)<<endl;   
    return 0;
}