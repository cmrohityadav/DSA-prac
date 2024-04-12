#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* prev;
    Node* next;
    Node(int value){
        this->data=value;
        this->prev=NULL;
        this->next=NULL;
    }
};

class DLL{
    public:
    Node* head;
    Node* tail;

    DLL(){
        this->head=NULL;
        this->tail=NULL;
    }

    void print(){
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }cout<<endl;
    }

    void insertAtTail(int val){
        Node*newNode= new Node(val);

        if(tail==NULL){
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
bool ispalindromeDLL(Node * head,Node*tail){
    while(head!=tail && tail!=head->prev){
        if(head->data!=tail->data){
            return false;
        }
        head=head->next;
        tail=tail->prev;
    }

    return true;
}
int main(){
 DLL dll1;
    dll1.insertAtTail(10);
    dll1.insertAtTail(20);
    dll1.insertAtTail(30);
    dll1.insertAtTail(40);
    dll1.insertAtTail(30);
    dll1.insertAtTail(20);
    dll1.insertAtTail(100);
    dll1.print();
    cout<<ispalindromeDLL(dll1.head,dll1.tail);
    return 0;
}