#include<iostream>
using namespace std;
class Deque{
    public:
    int *arr;
    int size;
    int front;
    int rear;

    Deque(int size){
        this->size=size;
        arr=new int[size];
        front=-1;
        rear=-1;
        
    }

    void push_rear(int data){
        if(front==0 && rear==size-1){
            cout<<"DeQ is full"<<endl;
            return;
        }else if(front==-1){
            rear=front=0;
            arr[rear]=data;
        }else if(rear==size-1 && front!=0){
            rear=0;
            arr[rear]=data;
        }else{
            rear++;
            arr[rear]=data;
        }
    }
    void push_front(int data){
        if(front==0 && rear==size-1){
            cout<<"DeQ is full"<<endl;
            return;
        }else if(front==-1){
            rear=front=0;
                 arr[front]=data;
        }else if(front==0 && rear!=size-1){
            front=size-1;
                arr[front]=data;
        }else{
            front--;
            arr[front]=data;
        }
    }
    void pop_front(){
        // empty check
        if(front==-1){
            cout<<"Q is empty, cannot pop"<<endl;

        }
        // single element
        else if(front==rear){
            arr[front]=-1;
            front=-1;
            rear=-1;
        }
        // circular
        else if(front==size-1){
            front=0;

        }else{
            front++;
        }
    }

    void pop_rear(){
        if(front==-1){
            cout<<"Q is empty, cannot pop "<<endl;
            return;
        }else if(front==rear){
            arr[front]=-1;
            front=-1;
            rear=-1;

        }else if(rear==0){
            rear=size-1;
        }else{
            rear--; 
        }
    }

};
int main()
{
    
    return 0;
}
