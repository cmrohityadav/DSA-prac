#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int data){
        this->data=data;
        this->next=NULL;
    }

};

class CircularLinkedList{
    public:
    Node* head;
    CircularLinkedList(){
        this->head=NULL;
    }


};

int main(){

    return 0;
}