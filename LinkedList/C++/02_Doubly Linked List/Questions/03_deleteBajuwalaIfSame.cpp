/*
Given the head of a doubly linked list, delete the nodes whose neighbours are same
transverse linkedlist from left to right*/
#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *prev;
    Node *next;
    Node(int value)
    {
        this->data = value;
        this->prev = NULL;
        this->next = NULL;
    }
};

class DLL
{
public:
    Node *head;
    Node *tail;

    DLL()
    {
        this->head = NULL;
        this->tail = NULL;
    }

    void print()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    void insertAtTail(int val)
    {
        Node *newNode = new Node(val);

        if (tail == NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
        return;
    }
};

void deleteSameNeighbourNode(Node *&head, Node *&tail)
{
    Node *currNode = tail->prev; // second last node
    while(currNode!=head){
        Node* prevNode=currNode->prev;
        Node* nextNode=currNode->next;
        if(prevNode->data==nextNode->data){
            // delete the current node
            prevNode->next=nextNode;
            nextNode->prev=prevNode;
            free(currNode);
        }
        currNode=prevNode;
    }
}
int main()
{
    DLL dll1;
    dll1.insertAtTail(20);
    dll1.insertAtTail(30);
    dll1.insertAtTail(20);
    dll1.insertAtTail(50);
    dll1.insertAtTail(200);
    dll1.insertAtTail(30);
    dll1.insertAtTail(60);
    dll1.insertAtTail(100);
    dll1.insertAtTail(200);
    dll1.insertAtTail(100);
    dll1.insertAtTail(500);

    dll1.print();
    deleteSameNeighbourNode(dll1.head,dll1.tail);
    dll1.print();

    return 0;
}