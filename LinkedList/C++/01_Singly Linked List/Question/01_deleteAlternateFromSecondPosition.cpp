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
            temp=temp->next;
        }
        temp->next=newNode;
    }
    void display(){
        Node* temp=head;
        while(temp!=NULL){

            cout<<temp->val<<"->";
            temp=temp->next;
        }cout<<"NULL"<<endl;
    }
};

void deleteAternateNodes(Node*& head){
    Node* currentNode=head;
    while(currentNode!=NULL && currentNode->next!=NULL){
        Node* temp=currentNode->next;
        currentNode->next=currentNode->next->next;
        free(temp);
        currentNode=currentNode->next;

    }
}

int main()
{
    LinkedList ll;
    ll.insertAtTail(1);
    ll.insertAtTail(2);
    ll.insertAtTail(3);
    ll.insertAtTail(4);
    ll.insertAtTail(5);

    ll.display();

    deleteAternateNodes(ll.head);
    ll.display();

    return 0;
}
