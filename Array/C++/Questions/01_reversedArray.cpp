#include<iostream>
#include<algorithm>
using namespace std;

void reverseArray(int arr[],int size){
    
    reverse(arr,arr+size);
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