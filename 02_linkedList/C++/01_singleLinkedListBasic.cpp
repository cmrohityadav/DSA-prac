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

    void push_back(int val){
        Node* newNode=new Node(val);

        if(head==NULL){
            head=newNode;
        }else{
            Node* tempNode=head;
            while(tempNode->next!=NULL){
                tempNode=tempNode->next;
            }

            tempNode->next=newNode;
            
            tail=newNode;
        }
    }

    void print(){
        Node* newNodeTemp=head;
        cout << "\nLinked List:  ";
        while(newNodeTemp!=NULL){
            cout<<"[ "<<newNodeTemp->data<<" ]";

            if(newNodeTemp->next!=NULL) cout<<"-->";

            newNodeTemp=newNodeTemp->next;
        }
        cout<<"--> NULL\n";
    }
};

int main(){

    List mySLL;

    mySLL.push_front(10);
    mySLL.push_front(20);
    mySLL.push_front(30);

    mySLL.push_back(100);
    mySLL.push_back(200);

    mySLL.print();

    


    return 0;
}
