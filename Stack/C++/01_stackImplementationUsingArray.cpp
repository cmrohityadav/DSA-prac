#include<iostream>
#include<climits>
using namespace std;
class Stack{
    int capacity;
    int * arr;
    int top;
    public:
    Stack(int c){
        this->capacity=c;
        this->arr=new int[c];
        this->top=-1;

    }

    void push(int data){
        if(this->top==this->capacity-1){
            cout<<"Overflow"<<endl;
            return;
        }

        this->top++;
        this->arr[this->top]=data;
    }

    int pop(){
        if(this->top==-1){
            cout<<"Underflow"<<endl;
            return INT_MIN;
        }

        this->top--;
        return this->arr[this->top+1];

    }

    int getTop(){
        if(this->top==-1){
            cout<<"Underflow"<<endl;
            return INT_MIN;
        }

        return this->arr[this->top];

    }

    bool isEmpty(){
        if(this->top==-1) return true;
        return false;
    }

    int size(){
        return this->top+1;
    }

    bool isFull(){
     if(this->top==this->capacity-1) return true;
     return false;

    }

};

int main(){
    Stack stk(5);
    stk.push(10);
    stk.push(20);
    stk.push(30);
    cout<<"Top: "<<stk.getTop()<<endl;

    stk.push(40);
    stk.push(50);
    cout<<"Top: "<<stk.getTop()<<endl;

    stk.push(60);
    cout<<stk.pop()<<endl;
    cout<<"Top: "<<stk.getTop()<<endl;

    cout<<"isEmpty: "<<stk.isEmpty()<<endl;
    cout<<"isFull: "<<stk.isFull()<<endl;
    cout<<"size: "<<stk.size()<<endl;





}