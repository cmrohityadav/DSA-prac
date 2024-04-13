#include<iostream>
#include<climits>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
    
};
class Stack{
    Node* head;
    int capacity;
    int currSize;
    public:
    Stack(int c){
        this->capacity=c;
        this->currSize=0;
        head=NULL;
    }
    bool isEmpty(){
        if(this->head==NULL) return true;
        return false;
    }

    bool isFull(){
        if(this->currSize==this->capacity) return true;
        return false;
    }

    int getTop(){
        if(this->head==NULL){
            cout<<"Underflow"<<endl;
            return INT_MIN;
        }

        return this->head->data;
    }
    int size(){
        return this->currSize;
    }
    

    void push(int daata){
        if(this->currSize==this->capacity){
            cout<<"Overflow"<<endl;
            return;
        }
        Node* newNode=new Node(daata);
        newNode->next=this->head;
        this->head=newNode;
        this->currSize++;
      }

      int pop(){
        if(this->head==NULL){
            cout<<"Underflow"<<endl;
            return INT_MIN;
        }
        Node* newNode=this->head->next;
        this->head->next=NULL;
        Node* temp=this->head;
        int result=temp->data;
        free(temp);
        this->head=newNode;
        return result;

      }

};
int main(){
    Stack stk(5);
    stk.push(10);
    stk.push(20);
    stk.push(30);
    cout<<"Top: "<<stk.getTop()<<endl;

    stk.push(40);
    stk.push(50);
    cout<<"Top: "<<stk.getTop()<<endl;

    stk.push(60);
    cout<<stk.pop()<<endl;
    cout<<"Top: "<<stk.getTop()<<endl;

    cout<<"isEmpty: "<<stk.isEmpty()<<endl;
    cout<<"isFull: "<<stk.isFull()<<endl;


    cout<<"size: "<<stk.size()<<endl;
}