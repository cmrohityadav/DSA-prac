#include<iostream>
using namespace std;
int y;
int fun(){
    int r;
    for (int i = 0; i < 5; i++)
    {
        int x=10;
        cout<<i; //i is local to for lopp only
        cout<<r; //its is global for the fun
    }
    cout<<x;
    cout<<y;
    cout<<i;
    cout<<r; 
}
int main()
{
    
    //block level
    {
        int d=10;
        cout<<d;
    }
    cout<<d;
    return 0;
}
