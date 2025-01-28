#include<iostream>
using namespace std;
void printArray(int arr[],int iSize,int iIndex=0){

    if(iIndex==iSize){
        return;
    }
    cout<<arr[iIndex]<<" ";
    printArray(arr,iSize,++iIndex);


}
int main()
{   
    int a[]={0,1,2,3,4};
    printArray(a,5);
    return 0;
}
