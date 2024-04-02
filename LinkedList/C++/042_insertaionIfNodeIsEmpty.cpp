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
void insertAtHead(Node *& head,Node* &tail, int data)
{
    // step 1
    Node *newNode = new Node(data);
    // step 2
    newNode->next = head;
    // step3
    // first Node
    if(head==NULL){
        // LL-> empty list,first node ab add hogi
        tail=newNode;
    }
    head = newNode;
}

// i want insert a node at the end of Link List
void insertAtTail(Node *&head, Node *&tail, int data)
{
    // step 1 :create a node
    Node *newNode = new Node(data);
    // step 2:connect with tail node
    if (tail == NULL)
    {
        // first node ab add hone wali h
        tail = newNode;
        head = newNode;
    }
    else
    {
        // LL is non empty
        tail->next = newNode;
    }
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
int main()
{
    // Node * head=new Node(10);
    Node *head = NULL;
    Node *tail = NULL;
    insertAtHead(head, tail,20);
    insertAtHead(head,tail, 30);
    insertAtHead(head,tail, 40);
    insertAtHead(head,tail, 50);
    insertAtTail(tail,tail, 40);
    print(head);
    return 0;
}
