#include<iostream>
#include<stack>
using namespace std;

stack <int> copyStack(stack<int>&input){
    stack<int>temp;
    while(! input.empty()){
        int currentItem=input.top();
        input.pop();
        temp.push(currentItem);
    }

    stack<int>result;
    while(!temp.empty()){
        int currentItem=temp.top();
        temp.pop();
        result.push(currentItem);
    }

    return result;
}

int main(){

    stack<int>st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    stack <int> result=copyStack(st);
    while(! result.empty()){
        cout<<result.top()<<endl;
        result.pop();
    }
    return 0;
}