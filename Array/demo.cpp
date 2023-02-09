#include<iostream>
using namespace std;

int main()
{
    
    int arr[5]={1,2,3,0,-1};
    int max=arr[0];
    for(int i=0; i<5;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
cout<<"max value is the "<<max;
    return 0;
}
