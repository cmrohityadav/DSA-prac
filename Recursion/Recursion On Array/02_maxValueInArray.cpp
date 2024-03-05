#include<iostream>
#include <climits>
using namespace std;
int maxValue(int arr[],int idx,int size,int &max){
if(idx==size){
        return max;
    }
 if(arr[idx]>max){
        max=arr[idx];
    }
    

    return maxValue(arr,++idx,size,max);
}
int main()
{
    
    int arr[5]={0,10,2,3,8};
    int max=INT_MIN;
   int result= maxValue(arr,0,5,max);

   cout<<"result: "<<result<<endl;

    return 0;
}
