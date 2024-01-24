#include <iostream>
using namespace std;

class Node
{

public:
    int data;
    Node *next;

    Node()
    {
        this->data = 0;
        this->next = NULL;
    }
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

// i want to insert a node at head of linkList
void insertAtHead(Node *&head, Node *&tail, int data)
{
    if (head == NULL)
    {
        Node *newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return;
    }
    // step 1
    Node *newNode = new Node(data);
    // step 2
    newNode->next = head;
    // step3

    head = newNode;
}

// i want insert a node at the end of Link List
void insertAtTail(Node *&head, Node *&tail, int data)
{
    if (head == NULL)
    {
        Node *newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return;
    }
    // step 1 :create a node
    Node *newNode = new Node(data);
    // step 2:connect with tail node

    tail->next = newNode;

    //   step 3: update tail
    tail = newNode;
}
// for print
void print(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
 int findLength(Node* head){
    int len=0;
    Node* temp=head;
    while (temp!=NULL)
    {
        temp=temp->next;
        len++;
    }
    return len;
    
 }

void insertAtPosition(int data,int position,Node* &head,Node* & tail){

    if(head==NULL){
        Node* newNode=new Node(data);
        head=newNode;
        tail=newNode;
        return;

    }
    // step 1: find the position pre and curr 
    if(position==0){
        insertAtHead(head,tail,data);
        return;
    }
    int len=findLength(head);
    if(position>=len){
        insertAtTail(head,tail,data);
        return;
    }
    
    int i=1;
    Node* prev=head;
    while(i<position){
        prev=prev->next;
        i++;
    }
    Node* curr=prev->next;

    // step 2
    Node* newNode=new Node(data);

    // step 3
    newNode->next=curr;

    // step 4
    prev->next=newNode;
}

void deleteNode(int position,Node* &head, Node* &tail){
    if(head==NULL){
        cout<<"cannot delete, LL is empty";
        return;
    }

    if(position==1){
        Node* temp=head;
        head=head->next;
        temp->next=NULL;
        delete temp;
    }

int len=findLength(head);
// deleting last node

if(position==len){
    int i=1;
    Node* prev=head;
    while(i<position-1){
        prev=prev->next;
        i++;
    }

    // step2
    prev->next=NULL;
    // step 3
    Node*temp=tail;
    // step 4
    tail=prev;
    // step 5
    del

}
}
int main()
{
    // Node * head=new Node(10);
    Node *head = NULL;
    Node *tail = NULL;
    insertAtHead(head, tail, 20);
    insertAtHead(head, tail, 30);
    insertAtHead(head, tail, 40);
    insertAtHead(head, tail, 50);
    insertAtTail(tail, tail, 40);
    insertAtPosition(105,2,head,tail);
    print(head);
    return 0;
}
