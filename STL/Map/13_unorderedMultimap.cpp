#include<iostream>
#include<unordered_map>

using namespace std;

int main()
{
    unordered_multimap<string,int>fruitCnt;
    fruitCnt.insert(make_pair("apple",10));
    fruitCnt.insert(make_pair("mango",10));
    fruitCnt.insert(make_pair("apple",9));

    for(auto itr:fruitCnt){
        cout<<itr.first<<" "<<itr.second<<endl;
    }
    




    return 0;
}
