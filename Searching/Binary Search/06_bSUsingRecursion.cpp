#include<iostream>
using namespace std;
/*
Time:O(logn)
Space: O(logn)
*/
int bsRecursion(int arr[],int target,int start,int end){
    if(start>end) return -1;
    int mid=start+(end-start)/2;
    if(arr[mid]==target) return mid;
    if(target>arr[mid]){
        return bsRecursion(arr,target,mid+1,end);
    }else{
        
        return bsRecursion(arr,target,start,mid-1);
    }
    
    return -1;



}
int main()
{
    
    int arr[5]={0,1,2,3,4};
    int result=bsRecursion(arr,3,0,4);
    cout<<result<<endl;
    return 0;
}
