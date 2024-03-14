#include<iostream>
using namespace std;
int firstOccurence(int arr[],int size,int target){
     int start=0;
     int end=size-1;
     int mid=start+(end-start)/2;
     int ans=-1;
     while(start<=end){
        mid=start+(end-start)/2;

        if(arr[mid]>=target){
            end=mid-1;
            ans=mid;
        }
        else{
            start=mid+1;
        }
     }

     return ans;


}
int lastOccurence(int arr[],int size,int target){
     int start=0;
     int end=size-1;
     int mid=start+(end-start)/2;
     int ans=-1;
     while(start<=end){
        mid=start+(end-start)/2;

        if(arr[mid]>target){
            end=mid-1;
            ans=mid;
        }
        else{
            start=mid+1;
        }
     }

     return ans;


}
int main()
{
    
    int arr[]={0,1,2,2,2,3,4,5,6,7,8,9};
    int size=12;
    int target=2;
    int higherBound=lastOccurence(arr,size,target);
    cout<<"higher Bound  :"<<higherBound-1<<endl;
    return 0;
}
