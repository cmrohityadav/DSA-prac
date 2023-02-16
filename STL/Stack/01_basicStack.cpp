#include<iostream>
#include<stack>
using namespace std;

int main()
{
    stack<string>n;
    n.push("Rohit");
    n.push("Yadav");
    n.push("Rahul");

    // for(string i:n){
    //     cout<<i<<" ";
    // }

    cout<<"Top Element =>> "<<n.top()<<endl;

    n.pop();
    cout<<"Top Element =>> "<<n.top()<<endl;

    cout<<"size =>>"<<n.size()<<endl;
    cout<<"Empty or not =>>"<<n.empty()<<endl;

    
    return 0;
}
