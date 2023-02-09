#include<iostream>
using namespace std;

int main()
{
    cout<<"enter the 5 element "<<endl;
    char arr[5];
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    for(int i=0; i<5;i++){
        cout<<arr[i]<<endl;
    }
    
    for(char el:arr){
        cout<<el<<endl;
    }
    return 0;
}
