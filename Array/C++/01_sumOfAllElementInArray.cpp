#include<iostream>
using namespace std;

int main()
{
    int arr[]={1,2,3,4};
    int sum=0;
    for(int i=0;i<4;i++){
        sum+=arr[i];
    }
    cout<<"sum of the Element in the Array: "<<sum<<endl;
    return 0;
}
