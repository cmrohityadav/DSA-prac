#include<iostream>

#include<set>
using namespace std;

int main()
{

    set<int>s;
    s.insert(10);
    s.insert(0);
    s.insert(50);
    s.insert(60);


    if(s.find(40)!=s.end()){
        cout<<"yes present"<<endl;
    }else{
        cout<<"not present"<<endl;
    }
    cout<<s.count(500)<<endl;

    cout<<*(s.lower_bound(1))<<endl;
    cout<<*(s.upper_bound(10));
    return 0;
}
