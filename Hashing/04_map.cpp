#include<iostream>
#include<map>
using namespace std;
/*
time complexity for map: 
storing & fetching =(log(n)) [avg , best,worst]


*/
int main()
{
    
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //pre compute
    map<int,int>mpp;
    for(int i=0;i<n;i++){
        mpp[arr[i]]++;
    }


    int q;
    cin>>q;
    while(q--){
        int num;
        cin>>num;

        //fetch
        cout<<mpp[num]<<endl;
    }







    return 0;
}
