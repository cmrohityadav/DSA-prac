#include<iostream>
using namespace std;
int smallF(int arr[],int n){

    int min=arr[0];
    for(int i=0;i<n;i++){

        if(arr[i]<min){
            min=arr[i];
        }
    }

    return min;

}
int main(){

    int arr[4]={12,2,5,44};


    int smallest=smallF(arr,4);
    cout<<smallest<<endl;

    return 0;
}