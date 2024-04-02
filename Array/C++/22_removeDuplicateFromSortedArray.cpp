#include<iostream>
using namespace std;
int dupArray(int arr[], int n){

    int result=1;
    for(int i=1;i<n;i++){
        if(arr[i]!=arr[result-1]){
            arr[result]=arr[i];
            result++;

        }
    }
    return result;
}
int main()
{
    int arr[]={10,20,20,30,30,40};
    int n=6;
     for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<dupArray(arr,n);
    cout<<endl;
    for(int i=0;i<dupArray(arr,n);i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
