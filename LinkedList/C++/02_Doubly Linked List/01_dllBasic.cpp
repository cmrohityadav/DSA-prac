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
};


int main(){
    Node* newNode=new Node(3);
    // cout<<newNode<<endl;
    // cout<<&newNode<<endl;

    DoublyLinkedList dll;
    dll.head=newNode;
    dll.tail=newNode;

    cout<<dll.head<<endl;
    cout<<dll.tail<<endl;
    cout<<dll.head->val<<endl;
    return 0;
}