#include<iostream>
#include<vector>
using namespace std;
int binarySearch(vector<int>v,int target){

    int s=0;
    int e=v.size()-1;
    int mid=s+(e-s)/2;
    while(s<=e){

        if(v[mid]==target){
            return mid;
        }
        if(mid-1>=0 && v[mid-1]==target){
            return mid-1;
        }
        if(mid+1< v.size() && v[mid+1]==target){
                    return mid+1;
        }

        if(v[mid]<target){
             //right jao
            s=mid+2;
        }
        if(v[mid]>target){
           
            e=mid-2;
        }
        mid=s+(e-s)/2;
    }

    return -1;
}
int main()
{
    vector<int>v{10,3,40,20,50,80,70};

    int target=100;
    int ans=binarySearch(v,target);

    cout<<"index of "<<target<<" is "<<ans<<endl;
    
    return 0;
}
