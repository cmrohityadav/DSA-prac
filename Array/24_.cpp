#include<iostream>
using namespace std;
void reverse(int arr[],int low,int high){
    low=0;
    high=n-1;
    while (low<high)
    {
        swap(arr[low],arr[high]);
        low++;
        high--;
    }
    
}
void leftRoateArrayByK(int arr[],int n,int d){

    reverse(arr,0,d-1);
}
int main()
{
    int arr[] = {0, 1, 2, 3, 4, 5};
    int n = 6;
    int d=3;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    leftRoateArrayByK(arr,n,d);
     for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
