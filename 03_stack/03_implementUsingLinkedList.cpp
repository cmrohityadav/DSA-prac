#include<iostream>
#include<list>

class Stack{
    std::list<int>ll;

public:

void push(int val){
    ll.push_front(val);
}

void pop(){
    ll.pop_front();
}

int top(){
  return  ll.front();
}
bool empty(){
    return ll.size()==0;
}

};
int main(){
    Stack stk ;
    stk.push(10);
    stk.push(20);
    while(!stk.empty()){
        std::cout<<stk.top()<<std::endl;
        stk.pop();
    }
}