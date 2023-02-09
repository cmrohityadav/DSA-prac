#include<iostream>
using namespace std;

int main()
{
    int arr[5]={1,2,3,4,5};
    // using loop
    for(int i=0;i<(sizeof(arr)/sizeof(arr[0]));i++){
        cout<<arr[i]<<endl;
    }
    // using foreach loop
    for(int y:arr){
        cout<<y<<endl;
    }

    //using while loop
    
    return 0;
}
