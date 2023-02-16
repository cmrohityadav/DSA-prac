#include<iostream>
#include<map>
using namespace std;

int main()
{
    map<int,string>m;

    // m[key]="value";
    m[1]="Rohit";
    m[3]="Rahul";
    m[2]="Yadav";

    //another way to insert the value
    m.insert({20,"piyush"});
    
cout<<"before erase"<<endl;
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }

cout<<"finding 16 =>> "<<m.count(16)<<endl;

m.erase(3);
cout<<"After erase"<<endl;
for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }

    return 0;
}
