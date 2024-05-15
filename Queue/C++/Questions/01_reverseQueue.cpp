#include<iostream>
#include<stack>
#include<queue>
using namespace std;

int main()
{
    queue<int>q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);

    stack<int>s;
    while(!q.empty()){
        s.push(q.front());
        q.pop();

    }

    while(! s.empty()){
        q.push(s.top());
        s.pop();
    }

    // for print only
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();

    }
    return 0;
}
