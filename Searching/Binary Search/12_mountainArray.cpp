#include<iostream>
#include<vector>

using namespace std;
int peakInMountainArray(vector<int>&arr){
    int start=0;
    int end=arr.size()-1;
    int ans=-1;
    while(start<=end){
        int mid=start+(end-start)/2;
        if(arr[mid]>arr[mid-1]){
            // on inc curve
            ans=mid;
            start=mid+1;
        }else{
            end=mid-1;
        }
    }

    return ans;

}
int main()
{
    vector<int>arr={0,4,5,1,2};
    cout<<peakInMountainArray(arr)<<endl;
    return 0;
}
