#include<iostream>
using namespace std;

int main()
{

    int a=5;
    int *p=&a;

    cout<<"value of a "<<a<<endl;
    cout<<"address of a "<<&a<<endl;
    cout<<"value of pointer p "<<p<<endl;
    cout<<"address  of pointer p "<<&p<<endl;
    cout<<"value   of adress which store in pointer "<<*p<<endl;
    cout<<endl<<endl<<endl;
    cout<<"arithmatic :"<<endl;
     cout<<"value of pointer p "<<p<<endl;
    cout<<"address  of pointer p "<<&p<<endl;
    cout<<"a++ :"<<a++<<endl;
    cout<<"p+1 :"<<p+1<<endl;
    cout<<"p+2 :"<<p+2<<endl;
    cout<<"*p+1 :"<<*p+1<<endl;
    cout<<"value of a "<<a<<endl;


    
    return 0;
}
