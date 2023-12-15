#include<iostream>
using namespace std;

int main()
{
    int arr[5]={12,104,1226,18,-1};

    cout<<arr<<endl;
    cout<<arr[0]<<endl;
    cout<<&arr<<endl;
    cout<<&arr[0]<<endl;

    int *p=arr;
    cout<<p<<endl;
    cout<<&p<<endl;
cout<<endl;
    cout<<*arr<<endl;
    cout<<*arr+1<<endl;
    cout<<*(arr)+1<<endl;
    cout<<*(arr+1)<<endl;
    cout<<*(arr+2)<<endl;

    cout<<endl;
    cout<<arr[4]<<endl;
    cout<<*(arr+4)<<endl;
    cout<<4[arr]<<endl;


    return 0;
}
