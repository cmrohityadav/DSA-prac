#include<iostream>
using namespace std;
int firstOccurence(int arr[],int size,int target){
     int start=0;
     int end=size-1;
     int mid=start+(end-start)/2;
     int ans=-1;
     while(start<=end){
        mid=start+(end-start)/2;

        if(arr[mid]==target){
            end=mid-1;
            ans=mid;
        }
        if(target>arr[mid]){
            start=mid+1;
        }else{
            end=mid-1;
        }
     }

     return ans;


}

/*
int firstOccurence(int arr[],int size,int target){
        int start=0;
        int end=size-1;
        while(start<=end){
            if(arr[start]==target){
                return start;
            }
            start++;
        }
        return -1;
}*/
int main()
{
    
    int arr[]={0,1,2,2,3,4,5,6,7,8,8,9,10};
    int size=13;
    int target=8;
    int result=firstOccurence(arr,size,target);
    cout<<result<<endl;
    return 0;
}
