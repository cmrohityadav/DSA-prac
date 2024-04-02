#include<iostream>
using namespace std;

int main()
{
    cout<<"enter the key"<<endl;
    
    int key;
    cin>>key;
    int ans=-1;
    int arr[]={1,2,3,4,5,6};
    for (int i = 0; i < 5; i++)
    {
        if (arr[i]==key)
        {
            ans=i;
        }
        
    }
    cout<<ans;
    
    return 0;
}
