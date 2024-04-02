#include <iostream>
using namespace std;
void leftRoateArrayByOne(int arr[], int n){
    int temp=arr[0];
    for(int i=0;i<n;i++){
        arr[i-1]=arr[i];

    }
    arr[n-1]=temp;

}
void leftRotateByK(int arr[],int n,int k){
    for(int i=0;i<k;i++){
        leftRoateArrayByOne(arr,n);
    }
}
int main()
{
    int arr[] = {0, 1, 2, 3, 4, 5};
    int n = 6;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    leftRotateByK(arr,6,2);
     for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
