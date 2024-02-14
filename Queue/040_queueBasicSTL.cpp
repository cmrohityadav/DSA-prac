#include<iostream>
#include<queue>
using namespace std;
// assume Queue as Ticketing Line
/*
Front means aage wala
rear means pichhe wala
push hamesha rear(pichhe) se hogi
pop hamesha front (aage) se hoga
*/
int main()
{
    // creation

    queue<int>q;

    // insertion
    q.push(5);
    q.push(15);
    q.push(25);
    q.push(35);
    q.push(45);

    cout<<"size of queue is: "<<q.size()<<endl;

    // deletion
    q.pop();

    cout<<"size of queue is: "<<q.size()<<endl;
    
    if(q.empty()){
        cout<<"Queue is Empty"<<endl;
    }else{
        cout<<"queue is not Empty"<<endl;
    }

    cout<<"front element is : "<<q.front()<<endl;

    
    return 0;
}
