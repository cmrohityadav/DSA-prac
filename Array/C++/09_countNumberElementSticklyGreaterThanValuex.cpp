#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int>v(5);
    for(int i=0;i<v.size();i++){
        cin>>v[i];
    }
    int count=0;
    int x;
    cout<<"enter the x";
    cin>>x;
    for(int i=0;i<v.size();i++){
        if(v[i]>x){
            count++;
        }
    }
    cout<<"number of the element strickly greater than x is "<<count<<endl;

    return 0;
}
