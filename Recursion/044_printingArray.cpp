#include<iostream>
using namespace std;
void printArray(int arr[],int s,int i){
   
if(i==s) return;

cout<<arr[i++]<<" ";
return printArray(arr,s,i);




}
int main()
{
    int arr[5]={1,2,3,4,5};
    int i=0;
    printArray(arr,5,i);


    return 0;
}
