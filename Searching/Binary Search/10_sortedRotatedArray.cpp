#include<iostream>
#include<vector>
using namespace std;
/*
Time: O(logn)
Space: O(1)
*/
int findMinInSortedRotated(vector<int>& input){
    if(input.size()==1) return 0;
    int start=0;
    int end=input.size()-1;
    if(input[end]>input[start]) return start;

    while(start<=end){
        int mid=start+(end-start)/2;
        if(input[mid]>input[mid+1]) return mid+1;
        if(input[mid]<input[mid-1]) return mid;
        if(input[mid]>input[start]){
            start=mid+1;
        }else{
            end=mid-1;
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

    cout<<findMinInSortedRotated(input)<<endl;
    return 0;
}
