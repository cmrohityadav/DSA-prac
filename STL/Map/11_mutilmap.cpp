#include<iostream>
#include<map>
using namespace std;

int main()
{

    multimap<string,int>dir;
    dir.insert(make_pair("Rohit",125966));
    dir.insert(make_pair("piyush",5448558));
    dir.insert(make_pair("piyush",90256));
    // dir["rohit"]=78524;  //this is the not allow


    for( auto itr:dir){
        cout<<"name: "<<itr.first<<" no. "<<itr.second<<endl;
    }


    
    return 0;
}
