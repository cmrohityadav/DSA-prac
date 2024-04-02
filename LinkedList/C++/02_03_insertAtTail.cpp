#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node * next;

    Node(int data){
        this->data=data;
        this->next=NULL;

    }

};

void insertAtHead(Node* &head,int d){
    //new node creation
    Node* temp=new Node(d);
    temp->next=head;
    head=temp;
}

//print
void print(Node * &head){
    Node* temp=head;

    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;

}

void insertAtTail(Node* &tail,int d){

    Node* temp=new Node(d);
    tail->next=temp;
    tail=tail->next;

}



int main()
{   Node* node1=new Node(10);

    
//head pointed to node1
Node * head=node1;
Node * tail=node1;
print(head);
insertAtHead(head,12);
print(head);
insertAtTail(tail,50);

insertAtHead(head,13);
print(head);




    return 0;
}
