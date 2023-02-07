#include<iostream>
using namespace std;

int main()
{
    int arr[]={1,5,6,3,2,4};
    int max=arr[0];
    for (int i = 0; i < 6; i++)
    {
        if(arr[i]>max){
            max=arr[i];
        }
        
    }
    cout<<"max element "<<max;
    
    return 0;
}
