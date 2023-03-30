#include<iostream>
#include<vector>
using namespace std;

int main()
{
    
    vector<int>v={1,2,2,3,4,5};

    for(int value:v){  //copy value aati hai

        cout<<value<<" ";
    }
cout<<endl;

    vector<pair<int ,int>>vP={{1,2},{3,4},{5,6}};
    for(pair<int,int> value:vP){
        cout<<value.first<<" "<<value.second<<endl;

    }

cout<<"auto"<<endl;
 for(auto value:vP){
        cout<<value.first<<" "<<value.second<<endl;

    }


    return 0;
}
