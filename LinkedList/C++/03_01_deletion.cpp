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
    ~Node(){
        int value=this->data;
        //memory free
        if(this->next!=NULL){
            delete next;
            this->next=NULL;
        }
        cout<<"memory is free for node with data "<<value<<endl;
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

void insertAnyPos(Node* &head,Node* &tail,int position,int d){
//insert at start
    if(position==1){
        insertAtHead(head,d);
        return;
    }

    Node* temp=head;
    int cnt=1;
    while(cnt<position-1){
        temp=temp->next;
        cnt++;
    }

if(temp->next==NULL){
    insertAtTail(tail,d);
    return;

}

    //creating new node for new node which will inset
Node* nodeToInsert=new Node(d);

    nodeToInsert->next=temp->next;
    temp->next=nodeToInsert;
}

void deleteNode(int position, Node* &head){

    //deleting first or start
    if(position==1){
        Node *temp=head;
        head=head->next;
        //memory free node
        temp->next=NULL;
        delete temp;
    }else{
        // deleting any middle node

        Node* curr=head;
        Node* prev=NULL;

        int cnt=1;
        while(cnt<position){
            prev=curr;
            curr=curr->next;
            cnt++;
        }

        prev->next=curr->next;
        curr->next=NULL;
        delete curr;
    }

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
print(head);
insertAtHead(head,13);
print(head);
insertAnyPos(head,tail,3,100);

print(head);



deleteNode(3,head);
print(head);
    return 0;
}
