#include<iostream>
#include<climits>
using namespace std;

int main()
{
    int arr[5]={7,8,6,4,2};


    int mini=INT_MAX;

    // cout<<mini;

    for(int i=0;i<5;i++){
        if(arr[i]<mini){
            mini=arr[i];
        }

    }

    cout<<"mini "<<mini;


    return 0;
}
