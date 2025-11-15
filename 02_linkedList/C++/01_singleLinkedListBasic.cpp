#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int val){
        data=val;
        next=NULL;
    }
};

class List{
    Node* head;
    Node* tail;
public:
    List(){
        head=tail=NULL;
    }

    void push_front(int val){
        Node* newNode=new Node(val);

        if(tail==NULL && head==NULL){
            head=tail=newNode;
        }else{

            newNode->next=head;
            head=newNode;
        }
    }

    void print(){
        Node* newNodeTemp=head;

        while(newNodeTemp!=NULL){
            cout<<"[ "<<newNodeTemp->data<<" ] -> ";
            newNodeTemp=newNodeTemp->next;
        }

    }
};

int main(){

    List mySLL;

    mySLL.push_front(10);
    mySLL.push_front(20);
    mySLL.push_front(30);

    mySLL.print();

    


    return 0;
}
