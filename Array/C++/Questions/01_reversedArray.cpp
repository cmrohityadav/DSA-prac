#include<iostream>
using namespace std;

void reverseArray(int arr[],int size){
    int reversedArray[size];
    for(int i=0;i<size;i++){
        reversedArray[i]=arr[size-1-i];

    }

    for(int i=0;i<size;i++){
        cout<<reversedArray[i]<<" ";
    }
}
int main(){

    int originalArray[5]={1,2,3,4,5};
    int size=5;
    reverseArray(originalArray,size);


    return 0;
}