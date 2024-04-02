#include<iostream>
using namespace std;

class Node{

    public:
    int data;
    Node * next;

    Node(){
        this->data=0;
        this->next=NULL;

    }
    Node(int data){
        this->data=data;
        this->next=NULL;

    }


};
// i want to insert a node at head of linkList
void insertAtHead(Node * & head,int data){
    // step 1
    Node* newNode=new Node(data);
    // step 2
    newNode->next=head;
    // step3
    head=newNode;
}

// i want insert a node at the end of Link List
void insertAtTail(Node* &tail,int data){
    // step 1
    Node* newNode=new Node(data);
    // step 2
    tail->next=newNode;
    tail=newNode;


}

// for print
void print(Node* & head){
    Node * temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int main()
{
    // Node * head=new Node(10);
    Node* head=NULL;
    Node * tail=NULL;
    insertAtHead(head,20);
    insertAtHead(head,30);
    insertAtHead(head,40);
    insertAtHead(head,50);
insertAtTail(tail,40);
    print(head);
    return 0;
}
