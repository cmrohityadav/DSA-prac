#include<iostream>
using namespace std;

int main()
{
    int arr[]={1,2,5,4,6,2,3};
    int maxValue=arr[0];
    for (int i = 1; i < 7; i++)
    {
        if (arr[i]>maxValue)
        {
            maxValue=arr[i];
        }
        
    }
    cout<<"The max Value is the: "<<maxValue;

    return 0;
}
