#include<iostream>
using namespace std;

int sumElement(int arr[],int iSize,int iIndex){
    if(iIndex==iSize-1){
        return arr[iIndex];
    }

    return arr[iIndex]+sumElement(arr,iSize,iIndex+1);
}
int main()
{
    int arrEle[]={1,2,3,4};
    cout<<sumElement(arrEle,4,0);
    return 0;
}
