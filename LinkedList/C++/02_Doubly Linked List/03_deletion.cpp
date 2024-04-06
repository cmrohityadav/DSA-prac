#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *prev;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
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

    void insertAtTail(int data)
    {
        Node *newNode = new Node(data);
        if (tail == NULL)
        {
            tail = newNode;
            head = newNode;
            return;
        }

        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
        return;
    }

    void deletionAtHead()
    {
        if (head == NULL)
        {
            return;
        }
        Node *temp = head;
        head = head->next;
        if (head == NULL)
        {
            tail = NULL;
        }
        else
        {
            head->prev = NULL;
        }
        free(temp);
        return;
    }

    void deletionAtTail()
    {
        if (head == NULL)
        {
            return;
        }
        Node *temp = tail;
        tail=tail->prev;
        if(temp==NULL){
            head=NULL;
        }else{
            tail->next=NULL;
        }

        free(temp);

        return;
    }
};

int main()
{
    DLL dll;
    dll.insertAtTail(10);
    dll.insertAtTail(20);
    dll.insertAtTail(30);
    dll.insertAtTail(40);
    dll.print();

    cout << "deletion at start" << endl;

    dll.deletionAtHead();
    dll.print();

    cout << "deletion at end" << endl;
    DLL dll2;
    dll2.insertAtTail(100);
    dll2.insertAtTail(200);
    dll2.insertAtTail(300);
    dll2.insertAtTail(400);
    dll2.print();
    dll2.deletionAtTail();
    dll2.print();


    return 0;
}