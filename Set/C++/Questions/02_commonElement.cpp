#include<iostream>
#include<vector>
#include<set>
using namespace std;

int main()
{
    int n,m;
    cout<<"Enter number of element in each array: ";
    cin>>n>>m;
    vector<int>v1(n);
    vector<int>v2(m);

    cout<<"enter elements of v1: "<<endl;
    for(int i=0;i<n;i++){
        cin>>v1[i];
    }
    cout<<"enter elements of v2: "<<endl;
    for(int i=0;i<m;i++){
        cin>>v2[i];
    }

    int sum=0;

    set<int>s;
    for(auto item:v1){
    
        s.insert(item);
    }
    
    for(auto item:v2){
        if(s.find(item)!=s.end()){
            sum+=item;
        }
    }

    cout<<"sum of common element :"<<sum<<endl;
    return 0;
}
