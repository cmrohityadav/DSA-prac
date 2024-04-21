#include<iostream>
#include<stack>
using namespace std;

void removeAtBottom(stack<int>&st){
stack<int>temp;
int size=st.size();
int count=0;
while(st.size()!=1){
    int currentElement=st.top();
    st.pop();
    temp.push(currentElement);

}
st.pop();
while(!temp.empty()){
    int currentElement=temp.top();
    temp.pop();
    st.push(currentElement);
}

}
void removeAtBottomUsingRecursion(stack<char>&st){
   if(st.size()==1){
    st.pop();
    return;
   }

   int currentElement=st.top();
   st.pop();
   removeAtBottomUsingRecursion(st);
   st.push(currentElement);
}
int main(){
    stack<int>st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);

    removeAtBottom(st);
    while(!st.empty()){
        cout<<st.top()<<endl;
        st.pop();
    }

    cout<<"using recusion"<<endl;
    stack<char>ch;
    ch.push('a');
    ch.push('b');
    ch.push('c');
    ch.push('d');

    removeAtBottomUsingRecursion(ch);
    while(!ch.empty()){
        cout<<ch.top()<<endl;
        ch.pop();

    }



    return 0;
}