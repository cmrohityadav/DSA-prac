#include<iostream>
#include<stack>
using namespace std;

void insertAtBottom(stack<int>&st1,int x){
    stack<int>temp;
    while(!st1.empty()){
        int currentItem=st1.top();
        st1.pop();
        temp.push(currentItem);

    }
    st1.push(x);

    while(!temp.empty()){
        int currentItem=temp.top();
        temp.pop();
        st1.push(currentItem);
    }

}

void insertAtBottomUsingRecursion(stack<int>&st2,int x){
    if(st2.empty()){
        st2.push(x);
        return;
    }

    int currentElement=st2.top();
    st2.pop();
    insertAtBottomUsingRecursion(st2,x);
    st2.push(currentElement);

}
int main(){

    stack<int>st1;
    st1.push(1);
    st1.push(2);
    st1.push(3);
    st1.push(4);
    insertAtBottom(st1,100);

    while (!st1.empty())
    {
        cout<<st1.top()<<endl;
        st1.pop();
    }
    
    cout<<"using recursion"<<endl;
    stack<int>st2;
    st2.push(10);
    st2.push(20);
    st2.push(30);
  
    insertAtBottomUsingRecursion(st2,500);
    while(!st2.empty()){
        cout<<st2.top()<<endl;
        st2.pop();
    }


    return 0;
}