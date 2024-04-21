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

    

   
};

int main()
{
    CircularLinkedList csll1;
    
    
    csll1.insertAtTail(10);
    csll1.insertAtTail(20);
    csll1.insertAtTail(30);
    csll1.insertAtTail(50);
    
    csll1.print();
  



    return 0;
}