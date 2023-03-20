#include<iostream>
#include<set>
using namespace std;

int main()
{   
    set<int>s; //sorted and unique element
    
    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(1);
    s.insert(1);
    s.insert(6);
    s.insert(0);
    s.insert(0);
    s.insert(0);
    s.insert(0);
    s.insert(0);

    for(auto i:s){
        cout<<i<<endl; //set duplicate element ko print nhi krta hai

    }
    cout<<endl;
    s.erase(s.begin());

    for(auto i:s){
        cout<<i<<endl; 

    }
    cout<<endl;
    cout<<" 0 present or not =>>"<<s.count(6)<<endl;
    cout<<" 10 present or not =>>"<<s.count(10)<<endl;

    
    return 0;
}
