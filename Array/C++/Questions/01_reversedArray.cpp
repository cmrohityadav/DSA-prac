#include<iostream>
using namespace std;

void reverseArray(int arr[],int size){
    int start=0;
    int end=size-1;

    while(start<=end){
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }

    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){

    int originalArray[5]={1,2,3,4,5};
    int size=5;
    reverseArray(originalArray,size);
    


    return 0;
}