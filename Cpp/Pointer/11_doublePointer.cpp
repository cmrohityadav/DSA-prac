#include<iostream>
using namespace std;

int main()
{
    int a=5;
    int *ptr1=&a;

    cout<<"The Address of a :"<<ptr1<<endl;

    int **ptr2=&ptr1;

    cout<<"The Address of ptr1 :"<<ptr2<<endl;

    int ***ptr3=&ptr2;

    cout<<"The Address of ptr2 :"<<ptr3<<endl;
    cout<<"The value of ptr3 :"<<*ptr3<<endl;

    cout<<a<<endl;
    cout<<*ptr1<<endl;
    cout<<**ptr2<<endl;
    cout<<***ptr3<<endl;

    return 0;
}
