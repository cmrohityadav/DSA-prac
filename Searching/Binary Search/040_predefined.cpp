#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
    

    vector<int>v{1,2,3,4,5};

    cout<<binary_search(v.begin(),v.end(),15);


    return 0;
}
