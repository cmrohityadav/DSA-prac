#include<iostream>
using namespace std;

int minElement(int arr[],int iSize,int iIndex=0,int iMin=10000){
    
    if(iSize==iIndex){
        return iMin;
    }
    if(arr[iIndex]<=iMin){
        iMin=arr[iIndex];
    }
    return   minElement(arr,iSize,iIndex+1,iMin);
}

int main()
{
        int arr[]={1,2,4,5,8};
        cout<<minElement(arr,5);
    return 0;
}
