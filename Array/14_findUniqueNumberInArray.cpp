#include<iostream>
using namespace std;

int main()
{
    int arr[]={2,3,1,3,4,4,1};


    for(int i=0;i<7;i++ ){
        for(int j=i+1;j<7;j++){
            if(arr[i]==arr[j]){
                arr[i]=arr[j]=-1;
            }
        }
    }


    int unique=0;
    for(int i=0;i<7;i++){
        if(arr[i]>0){
            unique=arr[i];
        }
    }

    cout<<unique;
    return 0;
}
