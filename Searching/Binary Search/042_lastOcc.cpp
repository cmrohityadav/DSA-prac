#include<iostream>
#include<vector>

using namespace std;

int lastOcc(vector<int>arr,int key){

    int s=0;
    int e=arr.size()-1;

    int mid=s+(e-s)/2;
    int ans=-1;

    while(s<=e){

        if(arr[mid]==key){
            ans=mid;
            s=mid+1;
        }
        else if(key>arr[mid]){
            s=mid+1;
        }else if(key<arr[mid]){
            e=mid-1;
        }

        mid=s+(e-s)/2;
    }

    return ans;
}
int main()
{
    
    vector<int>v{1,2,3,3,3,3,3,3,3,3,3,3,3,3,4};

    int size=v.size()-1;

    int index=lastOcc(v,3);
    cout<<index<<endl;

    return 0;
}
