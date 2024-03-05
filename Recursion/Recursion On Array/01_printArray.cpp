#include<iostream>
using namespace std;
void  printArray(int arr[],int idx,int size){


    if(idx==size) return;
    cout<<arr[idx]<<" ";
     return printArray(arr,++idx,size);



}
int main()
{
    
    int arr[5]={0,1,2,3,4};
    int size=5;
    printArray(arr,0,size);
    return 0;
}
