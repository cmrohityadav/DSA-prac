#include<iostream>
#include<list>
using namespace std;
int main(){
    list<int>l;
    l.push_back(1);
    l.push_front(2);

    for(int i:l){
        cout<<i<<" ";
    }
    cout<<endl;

    l.erase(l.begin());
    for(int i:l){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"now size of the list =>>"<<l.size()<<endl;
    
    // coping to new list
    cout<<"new list"<<endl;
    list<int>r(l);
    for(int i:r){
        cout<<i<<" ";
    }
cout<<"new list"<<endl;

list<int>n(5,100);
 for(int i:n){
        cout<<i<<" ";
    }

    return 0;
}
