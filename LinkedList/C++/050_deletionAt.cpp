#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *prev;
    Node *next;
    Node()
    {
        this->data = 0;
        this->prev = NULL;
        this->next = NULL;
    };
    Node(int data)
    {
        this->data = data;
        this->prev = NULL;
        this->next = NULL;
    }
    ~Node(){
        cout<<"Node with Value :"<<this->data<<" deleted";
        cout<<endl;
     }
};

void print(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int getLength(Node *head)
{
    int len = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        temp = temp->next;
        len++;
    }
    return len;
}
void insertAtHead(Node *&head, Node *&tail, int data)
{

    if (head == NULL)
    {
        // LL is empty
        Node *newNode = new Node(data);
        head = newNode;
        tail = newNode;
    }
    else
    {
        // ll is not empty;
        // step1
        Node *newNode = new Node(data);
        // step2
        newNode->next = head;
        // Step 3
        head->prev = newNode;
        // Step4
        head = newNode;
    }
}

void insertAtTail(Node *&head, Node *&tail, int data)
{

    if (head == NULL)
    {
        // ll is empty
        Node *newNode = new Node(data);
        head = newNode;
        tail = newNode;
    }
    else
    {
        // ll is not Empty
        // 1
        Node *newNode = new Node(data);
        // 2
        tail->next = newNode;
        // 3
        newNode->prev = tail;
        // 4
        tail = newNode;
    }
}

void insertAtPosition(Node *&head, Node *&tail, int position, int data)
{
    if (head == NULL)
    {
        // LL is empty
        Node *newNode = new Node(data);
        tail = newNode;
        head = newNode;
    }
    else
    {
        // LL is not empty
        if (position == 1)
        {
            insertAtHead(head, tail, data);
            return;
        }

        int len = getLength(head);
        if (position > len)
        {
            insertAtTail(head, tail, data);
            return;
        }

        // insertion in middle
        // step 1: find pre
        int i = 1;
        Node *prevNode = head;
        while (i < position - 1)
        {
            prevNode = prevNode->next;
            i++;
        }
        Node *curr = prevNode->next;
        // step 2 create a node
        Node *newNode = new Node(data);

        // step 3 :
        prevNode->next = newNode;
        newNode->prev = prevNode;
        curr->prev = newNode;
        newNode->next = curr;
    }
}

void deleteFromPos(Node *&head, Node *&tail, int pos)
{
    if (head == NULL)
    {
        cout << "LL is empty" << endl;
    }
    if (head->next == NULL)
    {
        // single node
        Node *temp = head;
        head = NULL;
        delete temp;
    }
    int len = getLength(head);
    if (pos > len)
    {
        cout << " Linked list is empty" << endl;
        return;
    }
    if (pos == 1)
    {
        // want to delete the first node
        Node *temp = head;
        head = head->next;
        temp->next=NULL;
        head->prev=NULL;


        delete temp;
        return;
    }

    if (pos== len)
    {
        //    delete last node
        Node *temp = tail;
        tail = tail->prev;
        
        temp->prev=NULL;
        tail->next=NULL;
        delete temp;


    }
    // delete from middle of linked list

    // step 1: find let,curr,right

    int i=1;
    Node* left=head;
    while(i<pos-1){
        left=left->next;
        i++;
    }
    Node* curr=left->next;
    Node* right=curr->next;

    // step 2: 
    left->next=right;
     // step 2: 
    right->prev=left;
     // step 2: 
    curr->next=NULL;
     // step 2: 
    curr->prev=NULL;
     // step 2: 
     delete curr;

     

}
int main()
{
    Node *first = new Node(10);
    Node *second = new Node(20);
    Node *third = new Node(30);
    Node *head = first;
    Node *tail = third;
    first->next = second;
    second->prev = first;

    second->next = third;
    third->prev = second;

    print(first);
    cout << endl;
    insertAtTail(head, tail, 101);
    insertAtTail(head, tail, 102);
    insertAtTail(head, tail, 103);
    insertAtTail(head, tail, 104);
    print(head);
    cout << endl;
    insertAtPosition(head, tail, 5, 40);
    print(head);
    cout << endl;

    deleteFromPos(head,tail,1);
    print(head);

    return 0;
}
