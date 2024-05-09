#include<iostream>
#include<stack>

using namespace std;
class Queue{
    stack<int>st;
    public:
    Queue(){}
    void push(int data){ /* queue:enqueue*/
    //  T.C: O(1)
        this->st.push(data);

    }
    void pop(){
        /*queue:dequeue
       
        */

        stack<int>temp;
        while(this->st.size()>1){
            temp.push(st.top());
            st.pop();
        }
        /*now stack size is 1 and we r at bottom element*/
        this->st.pop();
        while(!temp.empty()){
            this->st.push(temp.top());
            temp.pop();
        }
    }

    bool empty(){
        return this->st.empty();
    }
    int front(){
        stack<int>temp;
        while(this->st.size()>1){
            temp.push(st.top());
            st.pop();
        }
       int result=st.top();
        while(!temp.empty()){
            this->st.push(temp.top());
            temp.pop();
        }
         return result;
    }
};

int main()
{
    
    Queue q;
    q.push(10); // enqueue
    q.push(20);
    q.push(30);
    q.push(40);
    q.pop(); //dequeue


    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }



    return 0;
}
