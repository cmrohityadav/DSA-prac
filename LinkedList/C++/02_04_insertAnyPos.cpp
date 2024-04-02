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



    return 0;
}
