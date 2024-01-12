#include<iostream>
using namespace std;
int clibStairs(int n){
    // base condition 
    if(n==0 || n==1){
        return 1;
    }

    return clibStairs(n-1)+clibStairs(n-2);
}
int main()
{
    
    int n;
    cin>>n;
    int ans=clibStairs(n);
    cout<<"no of steps"<<ans;
    return 0;
}
