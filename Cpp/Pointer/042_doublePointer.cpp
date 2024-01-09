#include<iostream>
using namespace std;

int main()
{
    
    int a=5;
    cout<<"a :"<<a<<endl;
    cout<<"&a :"<<&a<<endl;


    int *p=&a;
    cout<<"p :"<<p<<endl;
    cout<<"&p :"<<&p<<endl;

    int **q=&p;
    cout<<"q :"<<q<<endl;
    cout<<"&q :"<<&q<<endl;

    cout<<"*q :"<<*q<<endl;
    cout<<"**q :"<<**q<<endl;



    return 0;
}
