#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

class CircularLinkedList
{
public:
    Node *head;
    CircularLinkedList()
    {
        this->head = NULL;
    }
    void print()
    {
        Node *temp = head;
        do
        {
            cout << temp->data << " ";
            temp = temp->next;
        } while (temp != head) ;
        cout << endl;
    }
    bool isCircularLL(){
        Node* tail=head;
        
        while(tail->next!=head){
            tail=tail->next;

        }
        if(tail->next==head){
                return true;
        }

        return false;
    }

    void printCircular(){
        Node* temp=head;
        for(int i=0;i<25;i++){
            cout<<temp->data<< " ";
            temp=temp->next;
        }
        cout<<endl;
    }
    void insertionAtHead(int data)
    {
        Node *newNode = new Node(data);
        if (head == NULL)
        {
            head = newNode;
            newNode->next = head;
            return;
        }
        Node *tail = head;
        while (tail->next != head)
        {
            tail = tail->next;
        }
        tail->next = newNode;
        newNode->next = head;
        head = newNode;
    }
    void insertAtTail(int data){
        Node* newNode=new Node(data);
        if(head==NULL){
            head=newNode;
            newNode->next=head;
            return;
        }
        Node* tail=head;
        while(tail->next!=head){
          tail=tail->next;
        }
        tail->next=newNode;
        newNode->next=head;
    }

    void insertAtAnyPosition(int data,int position){
        Node* newNode=new Node(data);
        if(head==NULL){
                head=newNode;
                return;
        }
        int count=0;
        Node* temp=head;
        while(count!=position-1){
            temp=temp->next;
            count++;
        }

        newNode->next=temp->next;
        temp->next=newNode;


    }
};

int main()
{
    CircularLinkedList csll1;
    csll1.insertionAtHead(10);
    csll1.insertionAtHead(20);
    csll1.insertionAtHead(30);
    csll1.print();
    cout<<csll1.isCircularLL()<<endl;
    csll1.printCircular();

    cout<<"Insertion at tail"<<endl;
    csll1.insertAtTail(40);
    csll1.print();
    cout<<"Insertion at any position"<<endl;
    csll1.print();
    csll1.insertAtAnyPosition(100,2);
    csll1.print();



    return 0;
}