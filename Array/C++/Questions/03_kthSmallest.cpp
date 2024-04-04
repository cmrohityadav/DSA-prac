#include<iostream>
#include<algorithm>
using namespace std;

int kthSmallest(int array[],int size,int k){

    sort(array,array+size);
    return array[k-1];
}
int main(){

    int arr[5]={1,5,4,7,8};
    int k;
    cin>>k;
    cout<<kthSmallest(arr,5,k);

    return 0;
}
