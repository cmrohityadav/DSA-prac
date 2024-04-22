#include<iostream>
#include<queue>
using namespace std;

int main()
{
    queue<int>q;
    q.push(10); /*this is the enqueue in STL*/
    q.push(20);
    q.push(30);
    q.push(40);
    q.pop(); /*this is the dequeue in STL*/
    while(!q.empty()){
        cout<<q.front<<" ";
        q.pop();
    }
    

    return 0;
}
