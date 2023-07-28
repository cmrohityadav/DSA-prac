#include<iostream>
using namespace std;


int main(){


    int arr[2]={1,3};
    int *ptr=&arr[0];
    cout<<ptr<<"  "<<*ptr<<endl;
    cout<<ptr+1<<"  "<<*(ptr+1)<<endl;
    cout<<ptr<<"  "<<*(ptr)+1<<endl;


    return 0;
}