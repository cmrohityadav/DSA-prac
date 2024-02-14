#include<iostream>
using namespace std;


class Stack{
 public:
 int *arr;
 int size;
 int top1;
 int top2;
  Stack(int size){
   arr=new int[size];
   this->size=size;
   top1=-1;
   top2=size;
  }

  void push1(int data){
    if(top2-top1==1){
        // space not available
        cout<<"OverFlow"<<endl;
    }else{
        // space avaialble
        top1++;
        arr[top1]=data;


    }

  }
  void pop1(){
    if(top1==-1){
        // stack empty
        cout<<"UNDERFLOW in STack 1"<<endl;

    }else{
        top1--;
        
    }

  }

  void push2(int data){
    if(top2-top1==1){
        // space not  available
        cout<<"OVERFLOW"<<endl;
    }else{
        // for space avaible
        top2--;
        arr[top2]=data;

    }
    
  }

  void pop2(){
    if(top2==size){
        // stack 2 is empty
        cout<<"UNDERFLOW IN STACK 2"<<endl;
    }else{
        // stack 2 is not empty
        top2++;
    }
    
  }
};


int main()
{
    
    return 0;
}
