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
    


    return 0;
}