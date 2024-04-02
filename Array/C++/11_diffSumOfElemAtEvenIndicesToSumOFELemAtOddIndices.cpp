#include<iostream>
using namespace std;

int main()
{
    int arr[6]={1,2,1,2,1,2};
    int evenSum=0;
    int oddSum=0;
    for(int i=0;i<6;i++){
        if(i%2==0){
            evenSum+=arr[i];
        }
        else{
            oddSum+=arr[i];
        }
    }

    cout<<"diff b/w them "<<evenSum-oddSum;
    return 0;
}
