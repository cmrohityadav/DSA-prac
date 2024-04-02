#include<iostream>
using namespace std;
#include<vector>

int main()
{
    int arr[5]={1,2,3,4,5};
    bool sorted=false;
    for(int i=0;i<5;i++){
        if(arr[i]>arr[i-1]){
            sorted=true;
        }
    }
    cout<<sorted;
    return 0;
}
