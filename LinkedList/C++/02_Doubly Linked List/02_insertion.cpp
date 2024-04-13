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

    void insertAtAnyPosition(int val,int position){
        int count=0;
        Node* temp=head;
        while(count!=position-1){
            temp=temp->next;
            count++;

        }
        Node * newNode=new Node(val);
      
        newNode->next=temp->next;
        newNode->prev=temp;
        temp->next=newNode;
        temp->next->prev=newNode;
       
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

    cout<<"insert at tail"<<endl;
    DoublyLinkedList dll2;
    dll2.insertAtTail(100);
    dll2.insertAtTail(200);
    dll2.insertAtTail(300);
    dll2.print();

    cout<<"Insert at k position"<<endl;
    DoublyLinkedList dll3;
    dll3.insertAtTail(10);
    dll3.insertAtTail(20);
    dll3.insertAtTail(30);
    dll3.insertAtTail(40);
    dll3.insertAtTail(50);
    dll3.print();
    dll3.insertAtAnyPosition(1000,2);
    dll3.print();

    

    return 0;
}