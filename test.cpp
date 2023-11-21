#include<iostream>

using namespace std;

int main(){
  
    int arr[11]={1,5,8,7,9,14,57,65,34,69,2};
  int size=11;

    int left=0;
    int right=size-1;

    while(left<=right){
       swap(arr[left],arr[right]);
       left++;
       right--;

    }
    for(int i=0;i<size;i++) cout<<arr[i]<<" ";

    



    return 0;
}