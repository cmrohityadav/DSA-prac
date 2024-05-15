#include<iostream>

using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int data){
        this->data=data;
    }

};
class Queue{
    Node * head;
    Node * tail;
    int size;
    public:
    Queue(){
        this->head=NULL;
        this->tail=NULL;
        this->size=0;
    }
    void enqueue(int data){
        Node* newNode=new Node(data);
        if(this->head==NULL){
            // LL is empty
            this->head=newNode;
            this->tail=newNode;

        }else{
            this->tail->next=newNode;
            this->tail=newNode;
        }
        this->size++;

    }

    void dequeue(){
        if(this->head==NULL){
            // LL is empty
            return;
        }else{
            Node* newNode=this->head->next;
            Node* oldHead=this->head;
            this->head=newNode;
            if(this->head==NULL) this->tail=NULL;
            oldHead->next=NULL;
            free(oldHead);
            this->size--;

        }

    }
    int getSize(){
        return this->size;
    }

    bool isEmpty(){
        return this->head==NULL;
    }
    int front(){

        if(this->head==NULL)  return -1;
        return this->head->data;
    }
    

};

int main(){

    Queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.dequeue();
    q.enqueue(40);

    while(! q.isEmpty()){
        cout<<q.front()<<" ";
        q.dequeue();
    }

    return 0;
}