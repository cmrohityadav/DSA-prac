#include<iostream>
#include<climits>
using namespace std;
int secondLargest(int arr[],int n){
    int i,first,second;
    // if there is one element
    if(n<2){
        return -1;
    }
    second=first=INT_MIN;

    for(int i=0;i<n;i++){
        if(arr[i]>first){
            second=first;
            first=arr[i];

        }
        else if(arr[i]>second && arr[i]!=first){
            second=arr[i];
        }
    }
    // if there is no second element
    if(second==INT_MIN){
        return -1;
    }
    else{
        return second;
    }

}
int main()
{
    int arr[]={1,1};
    int n=2;
    cout<<secondLargest(arr,n);
    return 0;
}
