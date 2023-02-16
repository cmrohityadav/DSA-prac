#include<iostream>
#include<queue>
using namespace std;

int main()
{
    queue<string>q;

    q.push("Rohit");
    q.push("Yadav");
    q.push("Rahul");

    cout<<"First Element =>>"<<q.front()<<endl;
    q.pop();
    cout<<"after pop"<<endl;
    cout<<"First Element =>>"<<q.front()<<endl;

    return 0;
}
