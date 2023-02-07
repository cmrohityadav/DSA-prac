#include<iostream>
using namespace std;
//defining function
int add(int x,int y) //formal parameter
{ 
    return x+y;
}
int main()
{
    int a=10;
    int b=20;

    // calling the function
    cout<<add(a,b)<<endl;  //actual parameter
    return 0;
}
