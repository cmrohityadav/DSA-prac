#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int>v={1,2,2,3,4,5};
    vector<int>::iterator hey=v.begin();
    for(hey=v.begin(); hey!=v.end();hey++){
        cout<<(*hey)<<endl;
    }
    
    vector<pair<int,int>>vp={{1,2},{3,4},{5,6}};
    vector<pair<int,int>>::iterator it;
    for(it=vp.begin();it !=vp.end();it++){
        cout<<(*it).first<<" "<<(*it).second<<endl;
    }
    cout<<endl;

     for(it=vp.begin();it !=vp.end();it++){
        cout<<(it)->first<<" "<<(it)->second<<endl;
    }

    return 0;
}
