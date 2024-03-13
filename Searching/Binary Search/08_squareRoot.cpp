#include<iostream>
using namespace std;
/*
Time: O(logn)
Space: O(1)
*/

int squareRoot(int num){
    int start=1;
    int end=num;
    int mid=start+(end-start)/2;
    int ans=0;
    while(start<=end){
        mid=start+(end-start)/2;
        if(mid*mid<=num){
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
    int num=400;
    cout<<squareRoot(num)<<endl;
    return 0;
}
