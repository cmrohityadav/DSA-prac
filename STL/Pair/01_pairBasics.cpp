#include<iostream>
using namespace std;

int main()
{   //first way
    pair<int,string>p;
    p=make_pair(2,"abc");
    cout<<p.first<<" "<<p.second<<endl;
    
    //second way
    pair<int,string>r;
    r={3,"rahul"};
    cout<<r.first<<" "<<r.second<<endl;




    return 0;
}
