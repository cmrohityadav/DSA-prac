#include<iostream>
using namespace std;

int main()
{
    //same memory location => with different name
    int a=5;

    int & b=a;

    cout<<a<< " "<< b<<endl;
    a++;
    cout<<a<< " "<< b<<endl;
    b++;
    cout<<a<< " "<< b<<endl;


    return 0;
}
