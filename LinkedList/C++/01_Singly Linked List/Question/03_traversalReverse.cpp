#include<iostream>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
    Node(int data){
        this->val=data;
        this->next=NULL;
    }
};

class LinkedList{
    public:
    Node* head;

    LinkedList(){
        head=NULL;
    }

    void insertAtTail(int value){
        Node* newNode=new Node(value);
        if(head==NULL){
            head=newNode;
            return;
        }
        Node* temp=head;
        while(temp->next!=NULL){
           temp= temp->next;
        }
        temp->next=newNode;
    }

    void print(){
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->val<<"->";
            temp=temp->next;
        }
        cout<<"NULL"<<endl;
    }

    
};

void reverseTraversalPrint(Node* head){
    if(head==NULL) return;

    reverseTraversalPrint(head->next);
    cout<<head->val<<" ";
}
int main()
{
    LinkedList sl;
    sl.insertAtTail(10);
    sl.insertAtTail(20);
    sl.insertAtTail(30);
    sl.insertAtTail(40);
    sl.print();
   reverseTraversalPrint(sl.head);
   

    return 0;
}
