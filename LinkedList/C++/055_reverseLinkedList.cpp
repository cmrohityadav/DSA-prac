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
    ~Node()
    {
        cout << "Node with Value :" << this->data << " deleted";
        cout << endl;
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

Node *reverse(Node *&prev, Node *&curr)
{
    // base cas
    if (curr == NULL)
    {
        // LL reverse ho chuki
        return prev;
    }
    // 1 case solve then recursion will take care
    Node *forward = curr->next;
    curr->next = prev;
    reverse(curr, forward);
}

Node *reverseUsingLoop(Node *&head)
{
    Node *prev = NULL;
    Node *curr = head;

    while (curr != NULL)
    {
        Node *temp = curr->next;
        curr->next = prev;
        prev = curr;
        curr = temp;
    }
    return prev;
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
   

    Node *prev = NULL;
    Node *curr = head;
    cout << "Original LL" << endl;

    print(head);
    cout << endl;
    cout << "using recursion" << endl;
    head = reverse(prev, curr);
  
    print(head);
    cout << endl;
    cout << "using loop" << endl;
    Node *loopRev = reverseUsingLoop(head);
    print(loopRev);
    return 0;
}
