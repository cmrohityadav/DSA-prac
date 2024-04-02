#include<iostream>
using namespace std;
int insert(int arr[], int n,int x,int cap,int pos){
    if(n==cap){
        return n;
    }
    else{
        int idx=pos-1;
        for (int i = n-1; i >= idx; i--)
        {
            arr[i+1]=arr[i];
            arr[idx]=x;
            
        }
        
    }
    return (n=1);
};
int main()
{
    //insertion Operation

int arr[10]={1,2,3,5};
int x;
cin>>x;
int cap;
cin>>cap;
int pos;
cin>>pos;
cout<<insert(arr,4,10,10,2);

    return 0;
}
