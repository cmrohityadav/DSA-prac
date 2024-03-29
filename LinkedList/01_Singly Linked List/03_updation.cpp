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

void insertAtAnyPosition(Node* &head,int val,int position){
    if(position==0){
        insertAtHead(head,val);
        return ;

    }

    Node* temp=head;
    int currentPosition=0;
    while(currentPosition!=position-1){
        temp=temp->next;
        currentPosition++;
    }

    Node* newNode=new Node(val);
    newNode->next=temp->next;
    temp->next=newNode;


}

void updateAtAnyPosition(Node* &head,int position,int val){
    Node* temp=head;
    int currentPosition=0;
    while(currentPosition!=position){
        temp=temp->next;
        currentPosition++;
    }

    temp->val=val;

}
int main(){

    Node* head=NULL;
    insertAtHead(head,1);
    display(head);
    insertAtHead(head,2);
    display(head);
    insertAtTail(head,10);
    display(head);
    insertAtTail(head,20);
    insertAtTail(head,30);
    insertAtTail(head,40);
    display(head);
    updateAtAnyPosition(head,3,500);
    display(head);
    


    


   


    return 0;
}
