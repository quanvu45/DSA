#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node*next;
    Node(int value):data(value),next(NULL){}
};
class Stack{
    Node*front;
    public:
    Stack(){
        front=NULL;
    }
    void push(int);
    void pop();
    int top();
    bool isEmpty();
    int size();
};


int main(){
    
}

void Stack:: push(int value){
    Node*temp=new Node(value);
    if(!temp){
        cout<<"Stack Overflow";
        exit(1);
    }
    temp->next=front;
    front=temp;
}
void Stack:: pop(){
    if(front==nullptr){
        cout<<"Stack Overflow";
        exit(1);
    }else{
        Node*temp=front;
        front=front->next;
        free(temp);
    }
}
int Stack::top(){
    return front->data;
}
bool Stack::isEmpty(){
    if(front==nullptr){
        return true;
    }else{
        return false;
    }
}
int Stack::size(){
    Node*temp=front;int n;
    while(temp!=nullptr){
        n++;
        temp=temp->next;
    }
    return n;
}