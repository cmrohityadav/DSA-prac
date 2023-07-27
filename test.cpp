#include<iostream>
using namespace std;

int main()
{
   int a=5;

   cout<<"value of a "<<a<<endl;
    cout<<"address of a normally  "<<&a<<endl;

   int *prt=&a;
   cout<<"address of a using pointer "<<prt<<endl;

   cout<<"dereference "<<*prt<<endl;

   int *q=0;
   q=&a;
   cout<<q<<" r"<<*q<<endl;
 cout<<"address of a using pointer "<<q<<endl;



    
    return 0;
}
