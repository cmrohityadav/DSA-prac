#include <bits/stdc++.h> 
int consecutiveOnes(vector<int>& arr){
    //Write your code here.

    int maxi=0;
    int cnt=0;
    for(int i=0;i<arr.size();i++){
        if(arr[i]==1){
            cnt++;
            maxi=max(maxi,cnt);
        }else{
            cnt=0;
        }
    }
    return maxi;
    
}