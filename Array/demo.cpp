#include<iostream>
using namespace std;

int main()
{
    
    int arr[5]={1,2,3,0,-1};
    int ans=-1;
    int key;
    cin>>key;
    for(int i=0;i<5;i++){
        if(arr[i]==key){
        ans=i;

        }
    }
    cout<<ans;
    return 0;
}
