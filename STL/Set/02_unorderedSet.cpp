#include<iostream>
#include<unordered_set>
using namespace std;

int main()
{
    // unsorted and only unique
    unordered_set<int>unset;
    unset.insert(5);
    unset.insert(5);
    unset.insert(2);
    unset.insert(1);
    unset.insert(1);
    unset.insert(0);
    for(auto i:unset){

        cout<<i<<endl;
    }
    return 0;
}
