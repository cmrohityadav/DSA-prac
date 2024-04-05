#include<iostream>
using namespace std;
class Node{
    public:
    Node* prev;
    int val;
    Node* next;

    Node(int data){
        this->val=data;
        this->next=NULL;
        this->prev=NULL;
    }

};
class DoublyLinkedList{
    public:
    Node* head;
    Node* tail;
    DoublyLinkedList(){
        this->head=NULL;
        this->tail=NULL;
    }
    void print(){
        Node* temp=head;
        
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp=temp->next;

        }
        cout<<endl;
    }

    void insertAtStart(int val){
        Node * newNode=new Node(val);
        if(tail==NULL){
            head=newNode;
            tail=newNode;
            return;
        }

        newNode->next=head;
        head->prev=newNode;
        head=newNode;

        return;

    }

    void insertAtTail(int val){
        Node* newNode=new Node(val);
        if(head==NULL){
            head=newNode;
            tail=newNode;
            return;
        }
        tail->next=newNode;
        newNode->prev=tail;
        tail=newNode;
        return;
    }
};


int main(){
   
    DoublyLinkedList dll;
    // cout<<dll.head<<endl;
    // cout<<dll.tail<<endl;

    dll.insertAtStart(10);
    dll.insertAtStart(20);
    dll.insertAtStart(30);
    dll.print();
    dll.insertAtTail(40);
    dll.print();
    

    return 0;
}