#include <iostream>
using namespace std;

void reverseArray(int arr[], int iSize, int iIndex = 0)
{
    if (iSize == iIndex){
        return;
    }

    reverseArray(arr,iSize,++iIndex);
    cout<<arr[--iIndex]<<" ";
}

int main()
{
 int a[]={0,1,2,3,4};
    reverseArray(a,5);
    return 0;
}
