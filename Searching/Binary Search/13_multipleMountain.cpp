#include<iostream>
#include<vector>

using namespace std;

int findPeak(vector<int>&arr){
    int start=0;
    int end=arr.size()-1;
    while(start<=end){
        int mid=start+(end-start)/2;
        if(mid==0){
            if(arr[mid]>arr[mid+1]){
                return 0;
            }else{
                return 1;
            }
        }else if(mid==end){
            if(arr[mid]>arr[mid-1]){
                return end;
            }else{
                return end-1;
            }

        }else{
            if(arr[mid]>arr[mid-1 ] && arr[mid]>arr[mid-1]){
                // on decreasing curve
                return mid;
            }else if(arr[mid]>arr[mid-1]){
                // on inc curve
                start=mid+1;
            }else{
                end=mid-1;
            }
        }

    }
    return -1;
}

int main()
{
    vector<int> arr={5,5,4,3,2,1};
    cout<<findPeak(arr)<<endl;
    return 0;
}
