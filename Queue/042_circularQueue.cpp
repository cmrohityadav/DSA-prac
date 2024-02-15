#include<iostream>
using namespace std;
class CirQueue{
    public:
    int size;
    int *arr;
    int front;
    int rear;
    CirQueue(int size){
        this->size=size;
        arr=new int[size];
        front=-1;
        rear=-1;


    }
    void push(int data){
        // queue full
        // single element case-> first element
        // circulr nature

    }
};
int main()
{
    
    return 0;
}
