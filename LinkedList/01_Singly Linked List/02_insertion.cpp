#include<iostream>
using namespace std;
class Node{
    public:
    int val;
    Node* next;

    Node(int data){
        val=data;
        next=NULL;
    }

};

void insertAtHead(Node* &head,int val){
  
    Node* newNode=new Node(val);
    newNode->next=head;
    head=newNode;

}

void display(Node* head){

    Node* temp=head;
   
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp=temp->next;
      


    }
    cout<<"NULL"<<endl;

}
void insertAtTail(Node* &head ,int val){
    Node* newNode=new Node(val);
    Node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=newNode;

}
int main(){

    Node* head=NULL;
    insertAtHead(head,1);
    display(head);
    insertAtHead(head,2);
    display(head);
    insertAtTail(head,10);
    display(head);
    


   


    return 0;
}