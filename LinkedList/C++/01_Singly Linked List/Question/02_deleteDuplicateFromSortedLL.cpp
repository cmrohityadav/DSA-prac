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
void deleteDuplicatesNodes(Node* &head){
    Node* currentNode=head;
    while(currentNode){
        while( currentNode->next!=NULL &&currentNode->val==currentNode->next->val){
            // delete currentNode->next 
            Node* temp=currentNode->next;
            currentNode->next=currentNode->next->next;
            free(temp);

        }
        currentNode=currentNode->next;
    }
}


int main()
{
    LinkedList sl;
    sl.insertAtTail(10);
    sl.insertAtTail(20);
    sl.insertAtTail(20);
    sl.insertAtTail(30);
    sl.insertAtTail(30);
    sl.insertAtTail(50);
    sl.insertAtTail(60);
    sl.insertAtTail(60);
    sl.insertAtTail(70);
    sl.print();
    deleteDuplicatesNodes(sl.head);
    sl.print();
    return 0;
}
