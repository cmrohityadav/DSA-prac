#include<iostream>
#include<unordered_map>
using namespace std;

int main()
{
    string name="rohitrahulyadav";

    unordered_map<char,int>m;

    for(int i=0;i<name.length();i++){

        m[name[i]]++;
    }


    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }
    return 0;
}
