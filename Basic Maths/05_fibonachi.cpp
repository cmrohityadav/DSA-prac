#include<iostream>
using namespace std;

int main()
{
    int a=0;
    int b=1;
    int c=1;
    cout<<a<<" "<<b<<" ";
     for(int i=2;i<10;i++){
        c=a+b;
        a=b;
        b=c;
        cout<<c<< " ";
     }

    return 0;
}
