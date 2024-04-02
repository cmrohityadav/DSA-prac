#include<iostream>
using namespace std;

int main()
{
    
    int arr[]={1,2,-3,4,-5};

    int size=sizeof(arr)/sizeof(arr[0]);;

    int left=0;
    int right=size-1;

    while(left<=right){
         if(arr[left]>0 && arr[right]<0){
            swap(arr[left],arr[right]);
        }
        if(arr[left]<0){
            left++;
        }
        if(arr[right]>0){
            right--;
        }
       
    }

    for(auto x:arr){
        cout<<x<<" ";
    }





    return 0;
}
