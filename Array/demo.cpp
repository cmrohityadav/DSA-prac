#include<iostream>
using namespace std;

int main()
{
    
    int arr[5]={1,2,3,4,5};
    int sum=0;
    for(int y:arr){
        sum+=y;
    }
    cout<<sum<<endl;

    return 0;
}
