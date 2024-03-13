#include<iostream>
using namespace std;
int firstOccurence(){
    
}

/*
int firstOccurence(int arr[],int size,int target){
        int start=0;
        int end=size-1;
        while(start<=end){
            if(arr[start]==target){
                return start;
            }
            start++;
        }
        return -1;
}*/
int main()
{
    
    int arr[]={0,1,2,2,3,4,5};
    int size=7;
    int target=2;
    int result=firstOccurence(arr,size,target);
    cout<<result<<endl;
    return 0;
}
