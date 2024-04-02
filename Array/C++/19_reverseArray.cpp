#include<iostream>
using namespace std;
void revarr(int arr[],int n){
    int low=0,high=n-1;
    while(low<high){
        int temp=arr[low];
        arr[low]=arr[high];
        arr[high]=temp;
        low++;
        high--;
    }
   
}
int main()
{
    int arr[]={1,2,3,4,5};
    int n=5;
    revarr(arr,n);
     for(int ele:arr){
        cout<<ele;
    }
    return 0;
}
