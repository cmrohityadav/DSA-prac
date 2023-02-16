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

//checking empty or not
cout<<"is empty or not =>>"<<r.empty()<<endl;

// eraseing 
cout<<"before erase =>>"<<r.size()<<endl;
r.erase(r.begin(),r.begin()+1);
cout<<"After erase =>>"<<r.size()<<endl;

    return 0;
}
