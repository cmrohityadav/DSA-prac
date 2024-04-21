#include<iostream>
#include<stack>
using namespace std;

void insertAtAnyIndex(stack<int>&st,int x,int index){
    stack<int>temp;
    int n=st.size();
    int count=0;
    while(count<n-index){
        count++;
        int currentElement=st.top();
        st.pop();
        temp.push(currentElement);
    }

    st.push(x);
    while(!temp.empty()){
        int currentElement=temp.top();
        temp.pop();
        st.push(currentElement);
    }

}
int main()
{
    stack<int>st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(60);
    insertAtAnyIndex(st,24895,3);
    while(!st.empty()){
        cout<<st.top()<<endl;
        st.pop();
    }

    return 0;
}
