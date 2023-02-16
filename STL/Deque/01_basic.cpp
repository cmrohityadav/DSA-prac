#include<iostream>
#include<deque>
using namespace std;

int main()
{
    // creating deque
    deque<int>d;
    d.push_back(1);  //adding to back
    d.push_front(2); // addin to front
    // printing deque
    for(int i:d){
        cout<<i<<" ";
    }
    cout<<endl;
    d.pop_front();  //removing from the front
     // printing deque
    for(int i:d){
        cout<<i<<" ";
    }
    cout<<endl;

    // new deque
    deque<int>r;

    r.push_back(5);
    r.push_back(1);
    r.push_back(2);
      // printing deque
    for(int i:r){
        cout<<i<<" ";
    }
    cout<<"\nPrinting 0 Index Element =>>"<<r.at(0)<<endl;
    cout<<"front "<<r.front()<<endl;
    cout<<"back =>>"<<r.back()<<endl;

    return 0;
}
