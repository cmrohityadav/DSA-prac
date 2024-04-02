#include<iostream>
#include<vector>
using namespace std;
void sortZeroAndOne(vector<int> &v){
    int zeroCount=0;
    for(int ele:v){
        if(ele==0){
            zeroCount++;
        }
    }
    for(int i=0;i<v.size();i++){
        if(i<zeroCount){
            v[i]=0;
        }
        else{
            v[i]=1;
        }
    }
}
int main()
{
    int n;
    cin>>n;
    
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int elem;cin>>elem;
        v.push_back(elem);
    }
    
    sortZeroAndOne(v);

    for(int i=0; i<v.size();i++){
        cout<<v[i]<<endl;
    }
    return 0;
}
