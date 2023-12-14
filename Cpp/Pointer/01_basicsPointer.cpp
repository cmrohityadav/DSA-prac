#include<iostream>
using namespace std;

int main()
{
    int x=10;
    float y=100.21;
    cout<<x<<endl;
    cout<<y<<endl;
    cout<<&x<<endl; //retriving the address of x
    cout<<&y<<endl; //retriving the address of x

    // int c=&x; =>>we can't store adrress of variable in normal variable
    int *ptrX=&x;
    // int *ptrY=&y;//wrong
    float *ptrY=&y;
    
    cout<<ptrX<<endl;
    cout<<ptrY<<endl;

    cout<<"address of the pointer variable"<<endl;
    cout<<&ptrX<<endl;
    cout<<ptrY<<endl;
   

   
    return 0;
}
