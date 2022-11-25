#include<iostream>
using namespace std;

class node
{

public:
    int data;
    node* next;
    node(int val){
        data = val;
        next = NULL;
    }
};

class queue{
    node* front;
    node* back;
    public:
    queue(){
        front = NULL;
        back = NULL;
    }
    void push(int x){
        node* n = new node(x);
        if(front==NULL){
            back = n;
            front = n;
            return;
        }
        back->next = n;
        back = n;
    }
    void pop(){
        if(front == NULL){
            cout<<"Queue underflow"<<endl;
            return;
        }
        node* todelete = front;
        front= front->next;
        delete todelete;
    }
    void peek(){
        if(front == NULL){
            cout<<"Queue underflow"<<endl;
            return -1;
        }
        return front->data;
    }

};
int main(){
    queue q;
    q.push(4);
    q.push(63);
    q.push(45);
    q.push(52);
    cout<<q.peek()<<endl;
    
    cout<<q.peek()<<endl;
    cout<<q.peek()<<endl;
    cout<<q.peek()<<endl;
    return 0;
}
