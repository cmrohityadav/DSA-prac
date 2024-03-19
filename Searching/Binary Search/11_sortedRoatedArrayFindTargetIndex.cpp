#include<iostream>
#include<vector>
using namespace std;
/*
Time: O(logn)
Space: O(1)
*/
int binarySearchSortedRotated(vector<int>& input,int target){
    int start=0;
    int end=input.size()-1;
    while(start<=end){
        int mid=start+(end-start)/2;
        if(input[mid]==target) return mid;
        if(input[mid]>=input[start]){
            if(target>=input[start]  && target<=input[mid]){
                    end=mid-1;
            }else{
                start=mid+1;
            }
        }else{
            if(target>=input[mid] && target<=input[end]){
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
    int n;
    cin>>n;
    vector<int> input;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        input.push_back(x);
    }
     int target;
     cin>>target;
     cout<<binarySearchSortedRotated(input,target);
   
    return 0;
}
